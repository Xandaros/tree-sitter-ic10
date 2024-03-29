const fs = require('fs')
const ops = fs.readFileSync('./data/operations.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const constants = fs.readFileSync('./data/constants.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const logictypes = fs.readFileSync('./data/logictypes.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const slotlogictypes = fs.readFileSync('./data/slotlogictypes.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const batchmodes = fs.readFileSync('./data/batchmodes.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const reagentmodes = fs.readFileSync('./data/reagentmodes.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)
const enums = fs.readFileSync('./data/enums.txt').toString().split("\n").map((op) => op.trim()).filter((op) => !!op)


module.exports = grammar({
    name: 'ic10',

    extras: $ => [$._whitespace],

    word: $ => $.identifier,

    rules: {
        source_file: $ => alias(repeat($.line), $.program),

        line: $ => seq(
            optional(choice($.instruction, $.label)),
            optional($.comment),
            $.newline,
        ),

        label: $ => seq($.identifier, ':'),

        newline: $ => choice('\n', '\r\n', '\r'),

        _whitespace: $ => /[ \t]+/,

        comment: $ => seq(
            /#.*/
        ),

        instruction: $ => seq(
            field('operation', choice($.operation, alias($.identifier, $.invalid_instruction))),
            repeat(field('operand',
                $.operand
            ))
        ),

        operand: $ => choice($.register, $.device_spec, $.number, $.logicable, $.identifier),

        identifier: $ => /[a-zA-Z_.][a-zA-Z0-9_.]*/,

        register: $ => token(prec(5,choice(
            'ra',
            'sp',
            seq(
                repeat1('r'),
                /[0-9]|1[0-7]/
            )
        ))),

        network_index: $ => /[0-9]+/,

        device_spec: $ => seq(
            $.device,
            optional(
                seq(
                    ":",
                    $.network_index,
                )
            )
        ),

        device: $ => token(prec(5,seq(
            'd',
            choice(
                'b',
                /[0-5]/,
                seq(
                    repeat1('r'),
                    /[0-9]|1[0-7]/
                )
            ),
        ))),

        constant: $ => choice(
            ...constants
        ),

        preproc_string: $ => /[^"\n]*/,

        hash_preproc: $ => seq(
            "HASH(\"",
            field('string', $.preproc_string),
            "\")",
        ),

        number: $ => choice(
            token(
                choice(
                    seq(
                        optional('-'),
                        /[0-9]+/,
                        optional(seq(
                            '.',
                            /[0-9]+/
                        ))
                    ),
                    seq("%", /[01_]+/),
                    seq("$", /[0-9a-fA-F_]+/),
                ),
            ),
            $.constant,
            $.hash_preproc,
            $.enum
        ),

        operation: $ => choice(
            ...ops
        ),

        logicable: $ => prec(5,choice(
            $.logictype, $.logicslottype, $.batchmode, $.reagentmode
        )),

        logictype: $ => prec(6,choice(
            ...logictypes
        )),

        logicslottype: $ => choice(
            ...slotlogictypes
        ),

        batchmode: $ => choice(
            ...batchmodes
        ),

        reagentmode: $ => choice(
            ...reagentmodes
        ),

        enum: $ => token(prec(5,choice(
            ...enums
        )))
    }
});
