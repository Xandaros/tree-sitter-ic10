#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 472
#define ALIAS_COUNT 2
#define TOKEN_COUNT 453
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_LF = 3,
  anon_sym_CR_LF = 4,
  anon_sym_CR = 5,
  sym__whitespace = 6,
  aux_sym_comment_token1 = 7,
  sym_register = 8,
  sym_network_index = 9,
  sym_device = 10,
  anon_sym_nan = 11,
  anon_sym_pinf = 12,
  anon_sym_ninf = 13,
  anon_sym_pi = 14,
  anon_sym_deg2rad = 15,
  anon_sym_rad2deg = 16,
  anon_sym_epsilon = 17,
  sym_preproc_string = 18,
  anon_sym_HASH_LPAREN_DQUOTE = 19,
  anon_sym_DQUOTE_RPAREN = 20,
  aux_sym_number_token1 = 21,
  anon_sym_abs = 22,
  anon_sym_acos = 23,
  anon_sym_add = 24,
  anon_sym_alias = 25,
  anon_sym_and = 26,
  anon_sym_asin = 27,
  anon_sym_atan = 28,
  anon_sym_atan2 = 29,
  anon_sym_bap = 30,
  anon_sym_bapal = 31,
  anon_sym_bapz = 32,
  anon_sym_bapzal = 33,
  anon_sym_bdns = 34,
  anon_sym_bdnsal = 35,
  anon_sym_bdse = 36,
  anon_sym_bdseal = 37,
  anon_sym_beq = 38,
  anon_sym_beqal = 39,
  anon_sym_beqz = 40,
  anon_sym_beqzal = 41,
  anon_sym_bge = 42,
  anon_sym_bgeal = 43,
  anon_sym_bgez = 44,
  anon_sym_bgezal = 45,
  anon_sym_bgt = 46,
  anon_sym_bgtal = 47,
  anon_sym_bgtz = 48,
  anon_sym_bgtzal = 49,
  anon_sym_ble = 50,
  anon_sym_bleal = 51,
  anon_sym_blez = 52,
  anon_sym_blezal = 53,
  anon_sym_blt = 54,
  anon_sym_bltal = 55,
  anon_sym_bltz = 56,
  anon_sym_bltzal = 57,
  anon_sym_bna = 58,
  anon_sym_bnaal = 59,
  anon_sym_bnan = 60,
  anon_sym_bnaz = 61,
  anon_sym_bnazal = 62,
  anon_sym_bne = 63,
  anon_sym_bneal = 64,
  anon_sym_bnez = 65,
  anon_sym_bnezal = 66,
  anon_sym_brap = 67,
  anon_sym_brapz = 68,
  anon_sym_brdns = 69,
  anon_sym_brdse = 70,
  anon_sym_breq = 71,
  anon_sym_breqz = 72,
  anon_sym_brge = 73,
  anon_sym_brgez = 74,
  anon_sym_brgt = 75,
  anon_sym_brgtz = 76,
  anon_sym_brle = 77,
  anon_sym_brlez = 78,
  anon_sym_brlt = 79,
  anon_sym_brltz = 80,
  anon_sym_brna = 81,
  anon_sym_brnan = 82,
  anon_sym_brnaz = 83,
  anon_sym_brne = 84,
  anon_sym_brnez = 85,
  anon_sym_ceil = 86,
  anon_sym_cos = 87,
  anon_sym_define = 88,
  anon_sym_div = 89,
  anon_sym_exp = 90,
  anon_sym_floor = 91,
  anon_sym_get = 92,
  anon_sym_getd = 93,
  anon_sym_hcf = 94,
  anon_sym_j = 95,
  anon_sym_jal = 96,
  anon_sym_jr = 97,
  anon_sym_l = 98,
  anon_sym_label = 99,
  anon_sym_lb = 100,
  anon_sym_lbn = 101,
  anon_sym_lbns = 102,
  anon_sym_lbs = 103,
  anon_sym_ld = 104,
  anon_sym_log = 105,
  anon_sym_lr = 106,
  anon_sym_ls = 107,
  anon_sym_max = 108,
  anon_sym_min = 109,
  anon_sym_mod = 110,
  anon_sym_move = 111,
  anon_sym_mul = 112,
  anon_sym_nor = 113,
  anon_sym_not = 114,
  anon_sym_or = 115,
  anon_sym_peek = 116,
  anon_sym_poke = 117,
  anon_sym_pop = 118,
  anon_sym_push = 119,
  anon_sym_put = 120,
  anon_sym_putd = 121,
  anon_sym_rand = 122,
  anon_sym_round = 123,
  anon_sym_s = 124,
  anon_sym_sap = 125,
  anon_sym_sapz = 126,
  anon_sym_sb = 127,
  anon_sym_sbn = 128,
  anon_sym_sbs = 129,
  anon_sym_sd = 130,
  anon_sym_sdns = 131,
  anon_sym_sdse = 132,
  anon_sym_select = 133,
  anon_sym_seq = 134,
  anon_sym_seqz = 135,
  anon_sym_sge = 136,
  anon_sym_sgez = 137,
  anon_sym_sgt = 138,
  anon_sym_sgtz = 139,
  anon_sym_sin = 140,
  anon_sym_sla = 141,
  anon_sym_sle = 142,
  anon_sym_sleep = 143,
  anon_sym_slez = 144,
  anon_sym_sll = 145,
  anon_sym_slt = 146,
  anon_sym_sltz = 147,
  anon_sym_sna = 148,
  anon_sym_snan = 149,
  anon_sym_snanz = 150,
  anon_sym_snaz = 151,
  anon_sym_sne = 152,
  anon_sym_snez = 153,
  anon_sym_sqrt = 154,
  anon_sym_sra = 155,
  anon_sym_srl = 156,
  anon_sym_ss = 157,
  anon_sym_sub = 158,
  anon_sym_tan = 159,
  anon_sym_trunc = 160,
  anon_sym_xor = 161,
  anon_sym_yield = 162,
  anon_sym_Acceleration = 163,
  anon_sym_Activate = 164,
  anon_sym_AirRelease = 165,
  anon_sym_AlignmentError = 166,
  anon_sym_Apex = 167,
  anon_sym_AutoLand = 168,
  anon_sym_AutoShutOff = 169,
  anon_sym_Bpm = 170,
  anon_sym_BurnTimeRemaining = 171,
  anon_sym_CelestialHash = 172,
  anon_sym_CelestialParentHash = 173,
  anon_sym_Channel0 = 174,
  anon_sym_Channel1 = 175,
  anon_sym_Channel2 = 176,
  anon_sym_Channel3 = 177,
  anon_sym_Channel4 = 178,
  anon_sym_Channel5 = 179,
  anon_sym_Channel6 = 180,
  anon_sym_Channel7 = 181,
  anon_sym_Charge = 182,
  anon_sym_Chart = 183,
  anon_sym_ChartedNavPoints = 184,
  anon_sym_ClearMemory = 185,
  anon_sym_CollectableGoods = 186,
  anon_sym_Color = 187,
  anon_sym_Combustion = 188,
  anon_sym_CombustionInput = 189,
  anon_sym_CombustionInput2 = 190,
  anon_sym_CombustionLimiter = 191,
  anon_sym_CombustionOutput = 192,
  anon_sym_CombustionOutput2 = 193,
  anon_sym_CompletionRatio = 194,
  anon_sym_ContactTypeId = 195,
  anon_sym_CurrentCode = 196,
  anon_sym_CurrentResearchPodType = 197,
  anon_sym_Density = 198,
  anon_sym_DestinationCode = 199,
  anon_sym_Discover = 200,
  anon_sym_DistanceAu = 201,
  anon_sym_DistanceKm = 202,
  anon_sym_DrillCondition = 203,
  anon_sym_DryMass = 204,
  anon_sym_Eccentricity = 205,
  anon_sym_ElevatorLevel = 206,
  anon_sym_ElevatorSpeed = 207,
  anon_sym_EntityState = 208,
  anon_sym_EnvironmentEfficiency = 209,
  anon_sym_Error = 210,
  anon_sym_ExhaustVelocity = 211,
  anon_sym_ExportCount = 212,
  anon_sym_ExportQuantity = 213,
  anon_sym_ExportSlotHash = 214,
  anon_sym_ExportSlotOccupant = 215,
  anon_sym_Filtration = 216,
  anon_sym_FlightControlRule = 217,
  anon_sym_Flush = 218,
  anon_sym_ForceWrite = 219,
  anon_sym_ForwardX = 220,
  anon_sym_ForwardY = 221,
  anon_sym_ForwardZ = 222,
  anon_sym_Fuel = 223,
  anon_sym_Harvest = 224,
  anon_sym_Horizontal = 225,
  anon_sym_HorizontalRatio = 226,
  anon_sym_Idle = 227,
  anon_sym_ImportCount = 228,
  anon_sym_ImportQuantity = 229,
  anon_sym_ImportSlotHash = 230,
  anon_sym_ImportSlotOccupant = 231,
  anon_sym_Inclination = 232,
  anon_sym_Index = 233,
  anon_sym_InterrogationProgress = 234,
  anon_sym_LineNumber = 235,
  anon_sym_Lock = 236,
  anon_sym_ManualResearchRequiredPod = 237,
  anon_sym_Mass = 238,
  anon_sym_Maximum = 239,
  anon_sym_MineablesInQueue = 240,
  anon_sym_MineablesInVicinity = 241,
  anon_sym_MinedQuantity = 242,
  anon_sym_MinimumWattsToContact = 243,
  anon_sym_Mode = 244,
  anon_sym_NavPoints = 245,
  anon_sym_NextWeatherEventTime = 246,
  anon_sym_None = 247,
  anon_sym_On = 248,
  anon_sym_Open = 249,
  anon_sym_OperationalTemperatureEfficiency = 250,
  anon_sym_OrbitPeriod = 251,
  anon_sym_Orientation = 252,
  anon_sym_Output = 253,
  anon_sym_PassedMoles = 254,
  anon_sym_Plant = 255,
  anon_sym_PlantEfficiency1 = 256,
  anon_sym_PlantEfficiency2 = 257,
  anon_sym_PlantEfficiency3 = 258,
  anon_sym_PlantEfficiency4 = 259,
  anon_sym_PlantGrowth1 = 260,
  anon_sym_PlantGrowth2 = 261,
  anon_sym_PlantGrowth3 = 262,
  anon_sym_PlantGrowth4 = 263,
  anon_sym_PlantHash1 = 264,
  anon_sym_PlantHash2 = 265,
  anon_sym_PlantHash3 = 266,
  anon_sym_PlantHash4 = 267,
  anon_sym_PlantHealth1 = 268,
  anon_sym_PlantHealth2 = 269,
  anon_sym_PlantHealth3 = 270,
  anon_sym_PlantHealth4 = 271,
  anon_sym_PositionX = 272,
  anon_sym_PositionY = 273,
  anon_sym_PositionZ = 274,
  anon_sym_Power = 275,
  anon_sym_PowerActual = 276,
  anon_sym_PowerGeneration = 277,
  anon_sym_PowerPotential = 278,
  anon_sym_PowerRequired = 279,
  anon_sym_PrefabHash = 280,
  anon_sym_Pressure = 281,
  anon_sym_PressureEfficiency = 282,
  anon_sym_PressureExternal = 283,
  anon_sym_PressureInput = 284,
  anon_sym_PressureInput2 = 285,
  anon_sym_PressureInternal = 286,
  anon_sym_PressureOutput = 287,
  anon_sym_PressureOutput2 = 288,
  anon_sym_PressureSetting = 289,
  anon_sym_Progress = 290,
  anon_sym_Quantity = 291,
  anon_sym_Ratio = 292,
  anon_sym_RatioCarbonDioxide = 293,
  anon_sym_RatioCarbonDioxideInput = 294,
  anon_sym_RatioCarbonDioxideInput2 = 295,
  anon_sym_RatioCarbonDioxideOutput = 296,
  anon_sym_RatioCarbonDioxideOutput2 = 297,
  anon_sym_RatioHydrogen = 298,
  anon_sym_RatioLiquidCarbonDioxide = 299,
  anon_sym_RatioLiquidCarbonDioxideInput = 300,
  anon_sym_RatioLiquidCarbonDioxideInput2 = 301,
  anon_sym_RatioLiquidCarbonDioxideOutput = 302,
  anon_sym_RatioLiquidCarbonDioxideOutput2 = 303,
  anon_sym_RatioLiquidHydrogen = 304,
  anon_sym_RatioLiquidNitrogen = 305,
  anon_sym_RatioLiquidNitrogenInput = 306,
  anon_sym_RatioLiquidNitrogenInput2 = 307,
  anon_sym_RatioLiquidNitrogenOutput = 308,
  anon_sym_RatioLiquidNitrogenOutput2 = 309,
  anon_sym_RatioLiquidNitrousOxide = 310,
  anon_sym_RatioLiquidNitrousOxideInput = 311,
  anon_sym_RatioLiquidNitrousOxideInput2 = 312,
  anon_sym_RatioLiquidNitrousOxideOutput = 313,
  anon_sym_RatioLiquidNitrousOxideOutput2 = 314,
  anon_sym_RatioLiquidOxygen = 315,
  anon_sym_RatioLiquidOxygenInput = 316,
  anon_sym_RatioLiquidOxygenInput2 = 317,
  anon_sym_RatioLiquidOxygenOutput = 318,
  anon_sym_RatioLiquidOxygenOutput2 = 319,
  anon_sym_RatioLiquidPollutant = 320,
  anon_sym_RatioLiquidPollutantInput = 321,
  anon_sym_RatioLiquidPollutantInput2 = 322,
  anon_sym_RatioLiquidPollutantOutput = 323,
  anon_sym_RatioLiquidPollutantOutput2 = 324,
  anon_sym_RatioLiquidVolatiles = 325,
  anon_sym_RatioLiquidVolatilesInput = 326,
  anon_sym_RatioLiquidVolatilesInput2 = 327,
  anon_sym_RatioLiquidVolatilesOutput = 328,
  anon_sym_RatioLiquidVolatilesOutput2 = 329,
  anon_sym_RatioNitrogen = 330,
  anon_sym_RatioNitrogenInput = 331,
  anon_sym_RatioNitrogenInput2 = 332,
  anon_sym_RatioNitrogenOutput = 333,
  anon_sym_RatioNitrogenOutput2 = 334,
  anon_sym_RatioNitrousOxide = 335,
  anon_sym_RatioNitrousOxideInput = 336,
  anon_sym_RatioNitrousOxideInput2 = 337,
  anon_sym_RatioNitrousOxideOutput = 338,
  anon_sym_RatioNitrousOxideOutput2 = 339,
  anon_sym_RatioOxygen = 340,
  anon_sym_RatioOxygenInput = 341,
  anon_sym_RatioOxygenInput2 = 342,
  anon_sym_RatioOxygenOutput = 343,
  anon_sym_RatioOxygenOutput2 = 344,
  anon_sym_RatioPollutant = 345,
  anon_sym_RatioPollutantInput = 346,
  anon_sym_RatioPollutantInput2 = 347,
  anon_sym_RatioPollutantOutput = 348,
  anon_sym_RatioPollutantOutput2 = 349,
  anon_sym_RatioPollutedWater = 350,
  anon_sym_RatioSteam = 351,
  anon_sym_RatioSteamInput = 352,
  anon_sym_RatioSteamInput2 = 353,
  anon_sym_RatioSteamOutput = 354,
  anon_sym_RatioSteamOutput2 = 355,
  anon_sym_RatioVolatiles = 356,
  anon_sym_RatioVolatilesInput = 357,
  anon_sym_RatioVolatilesInput2 = 358,
  anon_sym_RatioVolatilesOutput = 359,
  anon_sym_RatioVolatilesOutput2 = 360,
  anon_sym_RatioWater = 361,
  anon_sym_RatioWaterInput = 362,
  anon_sym_RatioWaterInput2 = 363,
  anon_sym_RatioWaterOutput = 364,
  anon_sym_RatioWaterOutput2 = 365,
  anon_sym_ReEntryAltitude = 366,
  anon_sym_Reagents = 367,
  anon_sym_RecipeHash = 368,
  anon_sym_ReferenceId = 369,
  anon_sym_RequestHash = 370,
  anon_sym_RequiredPower = 371,
  anon_sym_ReturnFuelCost = 372,
  anon_sym_Richness = 373,
  anon_sym_Rpm = 374,
  anon_sym_SemiMajorAxis = 375,
  anon_sym_Setting = 376,
  anon_sym_SettingInput = 377,
  anon_sym_SettingOutput = 378,
  anon_sym_SignalID = 379,
  anon_sym_SignalStrength = 380,
  anon_sym_Sites = 381,
  anon_sym_Size = 382,
  anon_sym_SizeX = 383,
  anon_sym_SizeY = 384,
  anon_sym_SizeZ = 385,
  anon_sym_SolarAngle = 386,
  anon_sym_SolarIrradiance = 387,
  anon_sym_SoundAlert = 388,
  anon_sym_Stress = 389,
  anon_sym_Survey = 390,
  anon_sym_TargetPadIndex = 391,
  anon_sym_TargetX = 392,
  anon_sym_TargetY = 393,
  anon_sym_TargetZ = 394,
  anon_sym_Temperature = 395,
  anon_sym_TemperatureDifferentialEfficiency = 396,
  anon_sym_TemperatureExternal = 397,
  anon_sym_TemperatureInput = 398,
  anon_sym_TemperatureInput2 = 399,
  anon_sym_TemperatureOutput = 400,
  anon_sym_TemperatureOutput2 = 401,
  anon_sym_TemperatureSetting = 402,
  anon_sym_Throttle = 403,
  anon_sym_Thrust = 404,
  anon_sym_ThrustToWeight = 405,
  anon_sym_Time = 406,
  anon_sym_TimeToDestination = 407,
  anon_sym_TotalMoles = 408,
  anon_sym_TotalMolesInput = 409,
  anon_sym_TotalMolesInput2 = 410,
  anon_sym_TotalMolesOutput = 411,
  anon_sym_TotalMolesOutput2 = 412,
  anon_sym_TotalQuantity = 413,
  anon_sym_TrueAnomaly = 414,
  anon_sym_VelocityMagnitude = 415,
  anon_sym_VelocityRelativeX = 416,
  anon_sym_VelocityRelativeY = 417,
  anon_sym_VelocityRelativeZ = 418,
  anon_sym_VelocityX = 419,
  anon_sym_VelocityY = 420,
  anon_sym_VelocityZ = 421,
  anon_sym_Vertical = 422,
  anon_sym_VerticalRatio = 423,
  anon_sym_Volume = 424,
  anon_sym_VolumeOfLiquid = 425,
  anon_sym_WattsReachingContact = 426,
  anon_sym_Weight = 427,
  anon_sym_WorkingGasEfficiency = 428,
  anon_sym_ChargeRatio = 429,
  anon_sym_Class = 430,
  anon_sym_Damage = 431,
  anon_sym_Efficiency = 432,
  anon_sym_FilterType = 433,
  anon_sym_Growth = 434,
  anon_sym_Health = 435,
  anon_sym_Mature = 436,
  anon_sym_MaxQuantity = 437,
  anon_sym_OccupantHash = 438,
  anon_sym_Occupied = 439,
  anon_sym_PressureAir = 440,
  anon_sym_PressureWaste = 441,
  anon_sym_Seeding = 442,
  anon_sym_SortingClass = 443,
  anon_sym_Average = 444,
  anon_sym_Minimum = 445,
  anon_sym_Sum = 446,
  anon_sym_Contents = 447,
  anon_sym_Recipe = 448,
  anon_sym_Required = 449,
  anon_sym_TotalContents = 450,
  sym_enum = 451,
  sym_deprecated = 452,
  sym_source_file = 453,
  sym_line = 454,
  sym_label = 455,
  sym_newline = 456,
  sym_comment = 457,
  sym_instruction = 458,
  sym_operand = 459,
  sym_device_spec = 460,
  sym_constant = 461,
  sym_hash_preproc = 462,
  sym_number = 463,
  sym_operation = 464,
  sym_logicable = 465,
  sym_logictype = 466,
  sym_logicslottype = 467,
  sym_batchmode = 468,
  sym_reagentmode = 469,
  aux_sym_source_file_repeat1 = 470,
  aux_sym_instruction_repeat1 = 471,
  alias_sym_invalid_instruction = 472,
  alias_sym_program = 473,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [sym__whitespace] = "_whitespace",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_register] = "register",
  [sym_network_index] = "network_index",
  [sym_device] = "device",
  [anon_sym_nan] = "nan",
  [anon_sym_pinf] = "pinf",
  [anon_sym_ninf] = "ninf",
  [anon_sym_pi] = "pi",
  [anon_sym_deg2rad] = "deg2rad",
  [anon_sym_rad2deg] = "rad2deg",
  [anon_sym_epsilon] = "epsilon",
  [sym_preproc_string] = "preproc_string",
  [anon_sym_HASH_LPAREN_DQUOTE] = "HASH(\"",
  [anon_sym_DQUOTE_RPAREN] = "\")",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_abs] = "abs",
  [anon_sym_acos] = "acos",
  [anon_sym_add] = "add",
  [anon_sym_alias] = "alias",
  [anon_sym_and] = "and",
  [anon_sym_asin] = "asin",
  [anon_sym_atan] = "atan",
  [anon_sym_atan2] = "atan2",
  [anon_sym_bap] = "bap",
  [anon_sym_bapal] = "bapal",
  [anon_sym_bapz] = "bapz",
  [anon_sym_bapzal] = "bapzal",
  [anon_sym_bdns] = "bdns",
  [anon_sym_bdnsal] = "bdnsal",
  [anon_sym_bdse] = "bdse",
  [anon_sym_bdseal] = "bdseal",
  [anon_sym_beq] = "beq",
  [anon_sym_beqal] = "beqal",
  [anon_sym_beqz] = "beqz",
  [anon_sym_beqzal] = "beqzal",
  [anon_sym_bge] = "bge",
  [anon_sym_bgeal] = "bgeal",
  [anon_sym_bgez] = "bgez",
  [anon_sym_bgezal] = "bgezal",
  [anon_sym_bgt] = "bgt",
  [anon_sym_bgtal] = "bgtal",
  [anon_sym_bgtz] = "bgtz",
  [anon_sym_bgtzal] = "bgtzal",
  [anon_sym_ble] = "ble",
  [anon_sym_bleal] = "bleal",
  [anon_sym_blez] = "blez",
  [anon_sym_blezal] = "blezal",
  [anon_sym_blt] = "blt",
  [anon_sym_bltal] = "bltal",
  [anon_sym_bltz] = "bltz",
  [anon_sym_bltzal] = "bltzal",
  [anon_sym_bna] = "bna",
  [anon_sym_bnaal] = "bnaal",
  [anon_sym_bnan] = "bnan",
  [anon_sym_bnaz] = "bnaz",
  [anon_sym_bnazal] = "bnazal",
  [anon_sym_bne] = "bne",
  [anon_sym_bneal] = "bneal",
  [anon_sym_bnez] = "bnez",
  [anon_sym_bnezal] = "bnezal",
  [anon_sym_brap] = "brap",
  [anon_sym_brapz] = "brapz",
  [anon_sym_brdns] = "brdns",
  [anon_sym_brdse] = "brdse",
  [anon_sym_breq] = "breq",
  [anon_sym_breqz] = "breqz",
  [anon_sym_brge] = "brge",
  [anon_sym_brgez] = "brgez",
  [anon_sym_brgt] = "brgt",
  [anon_sym_brgtz] = "brgtz",
  [anon_sym_brle] = "brle",
  [anon_sym_brlez] = "brlez",
  [anon_sym_brlt] = "brlt",
  [anon_sym_brltz] = "brltz",
  [anon_sym_brna] = "brna",
  [anon_sym_brnan] = "brnan",
  [anon_sym_brnaz] = "brnaz",
  [anon_sym_brne] = "brne",
  [anon_sym_brnez] = "brnez",
  [anon_sym_ceil] = "ceil",
  [anon_sym_cos] = "cos",
  [anon_sym_define] = "define",
  [anon_sym_div] = "div",
  [anon_sym_exp] = "exp",
  [anon_sym_floor] = "floor",
  [anon_sym_get] = "get",
  [anon_sym_getd] = "getd",
  [anon_sym_hcf] = "hcf",
  [anon_sym_j] = "j",
  [anon_sym_jal] = "jal",
  [anon_sym_jr] = "jr",
  [anon_sym_l] = "l",
  [anon_sym_label] = "label",
  [anon_sym_lb] = "lb",
  [anon_sym_lbn] = "lbn",
  [anon_sym_lbns] = "lbns",
  [anon_sym_lbs] = "lbs",
  [anon_sym_ld] = "ld",
  [anon_sym_log] = "log",
  [anon_sym_lr] = "lr",
  [anon_sym_ls] = "ls",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_mod] = "mod",
  [anon_sym_move] = "move",
  [anon_sym_mul] = "mul",
  [anon_sym_nor] = "nor",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_peek] = "peek",
  [anon_sym_poke] = "poke",
  [anon_sym_pop] = "pop",
  [anon_sym_push] = "push",
  [anon_sym_put] = "put",
  [anon_sym_putd] = "putd",
  [anon_sym_rand] = "rand",
  [anon_sym_round] = "round",
  [anon_sym_s] = "s",
  [anon_sym_sap] = "sap",
  [anon_sym_sapz] = "sapz",
  [anon_sym_sb] = "sb",
  [anon_sym_sbn] = "sbn",
  [anon_sym_sbs] = "sbs",
  [anon_sym_sd] = "sd",
  [anon_sym_sdns] = "sdns",
  [anon_sym_sdse] = "sdse",
  [anon_sym_select] = "select",
  [anon_sym_seq] = "seq",
  [anon_sym_seqz] = "seqz",
  [anon_sym_sge] = "sge",
  [anon_sym_sgez] = "sgez",
  [anon_sym_sgt] = "sgt",
  [anon_sym_sgtz] = "sgtz",
  [anon_sym_sin] = "sin",
  [anon_sym_sla] = "sla",
  [anon_sym_sle] = "sle",
  [anon_sym_sleep] = "sleep",
  [anon_sym_slez] = "slez",
  [anon_sym_sll] = "sll",
  [anon_sym_slt] = "slt",
  [anon_sym_sltz] = "sltz",
  [anon_sym_sna] = "sna",
  [anon_sym_snan] = "snan",
  [anon_sym_snanz] = "snanz",
  [anon_sym_snaz] = "snaz",
  [anon_sym_sne] = "sne",
  [anon_sym_snez] = "snez",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_sra] = "sra",
  [anon_sym_srl] = "srl",
  [anon_sym_ss] = "ss",
  [anon_sym_sub] = "sub",
  [anon_sym_tan] = "tan",
  [anon_sym_trunc] = "trunc",
  [anon_sym_xor] = "xor",
  [anon_sym_yield] = "yield",
  [anon_sym_Acceleration] = "Acceleration",
  [anon_sym_Activate] = "Activate",
  [anon_sym_AirRelease] = "AirRelease",
  [anon_sym_AlignmentError] = "AlignmentError",
  [anon_sym_Apex] = "Apex",
  [anon_sym_AutoLand] = "AutoLand",
  [anon_sym_AutoShutOff] = "AutoShutOff",
  [anon_sym_Bpm] = "Bpm",
  [anon_sym_BurnTimeRemaining] = "BurnTimeRemaining",
  [anon_sym_CelestialHash] = "CelestialHash",
  [anon_sym_CelestialParentHash] = "CelestialParentHash",
  [anon_sym_Channel0] = "Channel0",
  [anon_sym_Channel1] = "Channel1",
  [anon_sym_Channel2] = "Channel2",
  [anon_sym_Channel3] = "Channel3",
  [anon_sym_Channel4] = "Channel4",
  [anon_sym_Channel5] = "Channel5",
  [anon_sym_Channel6] = "Channel6",
  [anon_sym_Channel7] = "Channel7",
  [anon_sym_Charge] = "Charge",
  [anon_sym_Chart] = "Chart",
  [anon_sym_ChartedNavPoints] = "ChartedNavPoints",
  [anon_sym_ClearMemory] = "ClearMemory",
  [anon_sym_CollectableGoods] = "CollectableGoods",
  [anon_sym_Color] = "Color",
  [anon_sym_Combustion] = "Combustion",
  [anon_sym_CombustionInput] = "CombustionInput",
  [anon_sym_CombustionInput2] = "CombustionInput2",
  [anon_sym_CombustionLimiter] = "CombustionLimiter",
  [anon_sym_CombustionOutput] = "CombustionOutput",
  [anon_sym_CombustionOutput2] = "CombustionOutput2",
  [anon_sym_CompletionRatio] = "CompletionRatio",
  [anon_sym_ContactTypeId] = "ContactTypeId",
  [anon_sym_CurrentCode] = "CurrentCode",
  [anon_sym_CurrentResearchPodType] = "CurrentResearchPodType",
  [anon_sym_Density] = "Density",
  [anon_sym_DestinationCode] = "DestinationCode",
  [anon_sym_Discover] = "Discover",
  [anon_sym_DistanceAu] = "DistanceAu",
  [anon_sym_DistanceKm] = "DistanceKm",
  [anon_sym_DrillCondition] = "DrillCondition",
  [anon_sym_DryMass] = "DryMass",
  [anon_sym_Eccentricity] = "Eccentricity",
  [anon_sym_ElevatorLevel] = "ElevatorLevel",
  [anon_sym_ElevatorSpeed] = "ElevatorSpeed",
  [anon_sym_EntityState] = "EntityState",
  [anon_sym_EnvironmentEfficiency] = "EnvironmentEfficiency",
  [anon_sym_Error] = "Error",
  [anon_sym_ExhaustVelocity] = "ExhaustVelocity",
  [anon_sym_ExportCount] = "ExportCount",
  [anon_sym_ExportQuantity] = "ExportQuantity",
  [anon_sym_ExportSlotHash] = "ExportSlotHash",
  [anon_sym_ExportSlotOccupant] = "ExportSlotOccupant",
  [anon_sym_Filtration] = "Filtration",
  [anon_sym_FlightControlRule] = "FlightControlRule",
  [anon_sym_Flush] = "Flush",
  [anon_sym_ForceWrite] = "ForceWrite",
  [anon_sym_ForwardX] = "ForwardX",
  [anon_sym_ForwardY] = "ForwardY",
  [anon_sym_ForwardZ] = "ForwardZ",
  [anon_sym_Fuel] = "Fuel",
  [anon_sym_Harvest] = "Harvest",
  [anon_sym_Horizontal] = "Horizontal",
  [anon_sym_HorizontalRatio] = "HorizontalRatio",
  [anon_sym_Idle] = "Idle",
  [anon_sym_ImportCount] = "ImportCount",
  [anon_sym_ImportQuantity] = "ImportQuantity",
  [anon_sym_ImportSlotHash] = "ImportSlotHash",
  [anon_sym_ImportSlotOccupant] = "ImportSlotOccupant",
  [anon_sym_Inclination] = "Inclination",
  [anon_sym_Index] = "Index",
  [anon_sym_InterrogationProgress] = "InterrogationProgress",
  [anon_sym_LineNumber] = "LineNumber",
  [anon_sym_Lock] = "Lock",
  [anon_sym_ManualResearchRequiredPod] = "ManualResearchRequiredPod",
  [anon_sym_Mass] = "Mass",
  [anon_sym_Maximum] = "Maximum",
  [anon_sym_MineablesInQueue] = "MineablesInQueue",
  [anon_sym_MineablesInVicinity] = "MineablesInVicinity",
  [anon_sym_MinedQuantity] = "MinedQuantity",
  [anon_sym_MinimumWattsToContact] = "MinimumWattsToContact",
  [anon_sym_Mode] = "Mode",
  [anon_sym_NavPoints] = "NavPoints",
  [anon_sym_NextWeatherEventTime] = "NextWeatherEventTime",
  [anon_sym_None] = "None",
  [anon_sym_On] = "On",
  [anon_sym_Open] = "Open",
  [anon_sym_OperationalTemperatureEfficiency] = "OperationalTemperatureEfficiency",
  [anon_sym_OrbitPeriod] = "OrbitPeriod",
  [anon_sym_Orientation] = "Orientation",
  [anon_sym_Output] = "Output",
  [anon_sym_PassedMoles] = "PassedMoles",
  [anon_sym_Plant] = "Plant",
  [anon_sym_PlantEfficiency1] = "PlantEfficiency1",
  [anon_sym_PlantEfficiency2] = "PlantEfficiency2",
  [anon_sym_PlantEfficiency3] = "PlantEfficiency3",
  [anon_sym_PlantEfficiency4] = "PlantEfficiency4",
  [anon_sym_PlantGrowth1] = "PlantGrowth1",
  [anon_sym_PlantGrowth2] = "PlantGrowth2",
  [anon_sym_PlantGrowth3] = "PlantGrowth3",
  [anon_sym_PlantGrowth4] = "PlantGrowth4",
  [anon_sym_PlantHash1] = "PlantHash1",
  [anon_sym_PlantHash2] = "PlantHash2",
  [anon_sym_PlantHash3] = "PlantHash3",
  [anon_sym_PlantHash4] = "PlantHash4",
  [anon_sym_PlantHealth1] = "PlantHealth1",
  [anon_sym_PlantHealth2] = "PlantHealth2",
  [anon_sym_PlantHealth3] = "PlantHealth3",
  [anon_sym_PlantHealth4] = "PlantHealth4",
  [anon_sym_PositionX] = "PositionX",
  [anon_sym_PositionY] = "PositionY",
  [anon_sym_PositionZ] = "PositionZ",
  [anon_sym_Power] = "Power",
  [anon_sym_PowerActual] = "PowerActual",
  [anon_sym_PowerGeneration] = "PowerGeneration",
  [anon_sym_PowerPotential] = "PowerPotential",
  [anon_sym_PowerRequired] = "PowerRequired",
  [anon_sym_PrefabHash] = "PrefabHash",
  [anon_sym_Pressure] = "Pressure",
  [anon_sym_PressureEfficiency] = "PressureEfficiency",
  [anon_sym_PressureExternal] = "PressureExternal",
  [anon_sym_PressureInput] = "PressureInput",
  [anon_sym_PressureInput2] = "PressureInput2",
  [anon_sym_PressureInternal] = "PressureInternal",
  [anon_sym_PressureOutput] = "PressureOutput",
  [anon_sym_PressureOutput2] = "PressureOutput2",
  [anon_sym_PressureSetting] = "PressureSetting",
  [anon_sym_Progress] = "Progress",
  [anon_sym_Quantity] = "Quantity",
  [anon_sym_Ratio] = "Ratio",
  [anon_sym_RatioCarbonDioxide] = "RatioCarbonDioxide",
  [anon_sym_RatioCarbonDioxideInput] = "RatioCarbonDioxideInput",
  [anon_sym_RatioCarbonDioxideInput2] = "RatioCarbonDioxideInput2",
  [anon_sym_RatioCarbonDioxideOutput] = "RatioCarbonDioxideOutput",
  [anon_sym_RatioCarbonDioxideOutput2] = "RatioCarbonDioxideOutput2",
  [anon_sym_RatioHydrogen] = "RatioHydrogen",
  [anon_sym_RatioLiquidCarbonDioxide] = "RatioLiquidCarbonDioxide",
  [anon_sym_RatioLiquidCarbonDioxideInput] = "RatioLiquidCarbonDioxideInput",
  [anon_sym_RatioLiquidCarbonDioxideInput2] = "RatioLiquidCarbonDioxideInput2",
  [anon_sym_RatioLiquidCarbonDioxideOutput] = "RatioLiquidCarbonDioxideOutput",
  [anon_sym_RatioLiquidCarbonDioxideOutput2] = "RatioLiquidCarbonDioxideOutput2",
  [anon_sym_RatioLiquidHydrogen] = "RatioLiquidHydrogen",
  [anon_sym_RatioLiquidNitrogen] = "RatioLiquidNitrogen",
  [anon_sym_RatioLiquidNitrogenInput] = "RatioLiquidNitrogenInput",
  [anon_sym_RatioLiquidNitrogenInput2] = "RatioLiquidNitrogenInput2",
  [anon_sym_RatioLiquidNitrogenOutput] = "RatioLiquidNitrogenOutput",
  [anon_sym_RatioLiquidNitrogenOutput2] = "RatioLiquidNitrogenOutput2",
  [anon_sym_RatioLiquidNitrousOxide] = "RatioLiquidNitrousOxide",
  [anon_sym_RatioLiquidNitrousOxideInput] = "RatioLiquidNitrousOxideInput",
  [anon_sym_RatioLiquidNitrousOxideInput2] = "RatioLiquidNitrousOxideInput2",
  [anon_sym_RatioLiquidNitrousOxideOutput] = "RatioLiquidNitrousOxideOutput",
  [anon_sym_RatioLiquidNitrousOxideOutput2] = "RatioLiquidNitrousOxideOutput2",
  [anon_sym_RatioLiquidOxygen] = "RatioLiquidOxygen",
  [anon_sym_RatioLiquidOxygenInput] = "RatioLiquidOxygenInput",
  [anon_sym_RatioLiquidOxygenInput2] = "RatioLiquidOxygenInput2",
  [anon_sym_RatioLiquidOxygenOutput] = "RatioLiquidOxygenOutput",
  [anon_sym_RatioLiquidOxygenOutput2] = "RatioLiquidOxygenOutput2",
  [anon_sym_RatioLiquidPollutant] = "RatioLiquidPollutant",
  [anon_sym_RatioLiquidPollutantInput] = "RatioLiquidPollutantInput",
  [anon_sym_RatioLiquidPollutantInput2] = "RatioLiquidPollutantInput2",
  [anon_sym_RatioLiquidPollutantOutput] = "RatioLiquidPollutantOutput",
  [anon_sym_RatioLiquidPollutantOutput2] = "RatioLiquidPollutantOutput2",
  [anon_sym_RatioLiquidVolatiles] = "RatioLiquidVolatiles",
  [anon_sym_RatioLiquidVolatilesInput] = "RatioLiquidVolatilesInput",
  [anon_sym_RatioLiquidVolatilesInput2] = "RatioLiquidVolatilesInput2",
  [anon_sym_RatioLiquidVolatilesOutput] = "RatioLiquidVolatilesOutput",
  [anon_sym_RatioLiquidVolatilesOutput2] = "RatioLiquidVolatilesOutput2",
  [anon_sym_RatioNitrogen] = "RatioNitrogen",
  [anon_sym_RatioNitrogenInput] = "RatioNitrogenInput",
  [anon_sym_RatioNitrogenInput2] = "RatioNitrogenInput2",
  [anon_sym_RatioNitrogenOutput] = "RatioNitrogenOutput",
  [anon_sym_RatioNitrogenOutput2] = "RatioNitrogenOutput2",
  [anon_sym_RatioNitrousOxide] = "RatioNitrousOxide",
  [anon_sym_RatioNitrousOxideInput] = "RatioNitrousOxideInput",
  [anon_sym_RatioNitrousOxideInput2] = "RatioNitrousOxideInput2",
  [anon_sym_RatioNitrousOxideOutput] = "RatioNitrousOxideOutput",
  [anon_sym_RatioNitrousOxideOutput2] = "RatioNitrousOxideOutput2",
  [anon_sym_RatioOxygen] = "RatioOxygen",
  [anon_sym_RatioOxygenInput] = "RatioOxygenInput",
  [anon_sym_RatioOxygenInput2] = "RatioOxygenInput2",
  [anon_sym_RatioOxygenOutput] = "RatioOxygenOutput",
  [anon_sym_RatioOxygenOutput2] = "RatioOxygenOutput2",
  [anon_sym_RatioPollutant] = "RatioPollutant",
  [anon_sym_RatioPollutantInput] = "RatioPollutantInput",
  [anon_sym_RatioPollutantInput2] = "RatioPollutantInput2",
  [anon_sym_RatioPollutantOutput] = "RatioPollutantOutput",
  [anon_sym_RatioPollutantOutput2] = "RatioPollutantOutput2",
  [anon_sym_RatioPollutedWater] = "RatioPollutedWater",
  [anon_sym_RatioSteam] = "RatioSteam",
  [anon_sym_RatioSteamInput] = "RatioSteamInput",
  [anon_sym_RatioSteamInput2] = "RatioSteamInput2",
  [anon_sym_RatioSteamOutput] = "RatioSteamOutput",
  [anon_sym_RatioSteamOutput2] = "RatioSteamOutput2",
  [anon_sym_RatioVolatiles] = "RatioVolatiles",
  [anon_sym_RatioVolatilesInput] = "RatioVolatilesInput",
  [anon_sym_RatioVolatilesInput2] = "RatioVolatilesInput2",
  [anon_sym_RatioVolatilesOutput] = "RatioVolatilesOutput",
  [anon_sym_RatioVolatilesOutput2] = "RatioVolatilesOutput2",
  [anon_sym_RatioWater] = "RatioWater",
  [anon_sym_RatioWaterInput] = "RatioWaterInput",
  [anon_sym_RatioWaterInput2] = "RatioWaterInput2",
  [anon_sym_RatioWaterOutput] = "RatioWaterOutput",
  [anon_sym_RatioWaterOutput2] = "RatioWaterOutput2",
  [anon_sym_ReEntryAltitude] = "ReEntryAltitude",
  [anon_sym_Reagents] = "Reagents",
  [anon_sym_RecipeHash] = "RecipeHash",
  [anon_sym_ReferenceId] = "ReferenceId",
  [anon_sym_RequestHash] = "RequestHash",
  [anon_sym_RequiredPower] = "RequiredPower",
  [anon_sym_ReturnFuelCost] = "ReturnFuelCost",
  [anon_sym_Richness] = "Richness",
  [anon_sym_Rpm] = "Rpm",
  [anon_sym_SemiMajorAxis] = "SemiMajorAxis",
  [anon_sym_Setting] = "Setting",
  [anon_sym_SettingInput] = "SettingInput",
  [anon_sym_SettingOutput] = "SettingOutput",
  [anon_sym_SignalID] = "SignalID",
  [anon_sym_SignalStrength] = "SignalStrength",
  [anon_sym_Sites] = "Sites",
  [anon_sym_Size] = "Size",
  [anon_sym_SizeX] = "SizeX",
  [anon_sym_SizeY] = "SizeY",
  [anon_sym_SizeZ] = "SizeZ",
  [anon_sym_SolarAngle] = "SolarAngle",
  [anon_sym_SolarIrradiance] = "SolarIrradiance",
  [anon_sym_SoundAlert] = "SoundAlert",
  [anon_sym_Stress] = "Stress",
  [anon_sym_Survey] = "Survey",
  [anon_sym_TargetPadIndex] = "TargetPadIndex",
  [anon_sym_TargetX] = "TargetX",
  [anon_sym_TargetY] = "TargetY",
  [anon_sym_TargetZ] = "TargetZ",
  [anon_sym_Temperature] = "Temperature",
  [anon_sym_TemperatureDifferentialEfficiency] = "TemperatureDifferentialEfficiency",
  [anon_sym_TemperatureExternal] = "TemperatureExternal",
  [anon_sym_TemperatureInput] = "TemperatureInput",
  [anon_sym_TemperatureInput2] = "TemperatureInput2",
  [anon_sym_TemperatureOutput] = "TemperatureOutput",
  [anon_sym_TemperatureOutput2] = "TemperatureOutput2",
  [anon_sym_TemperatureSetting] = "TemperatureSetting",
  [anon_sym_Throttle] = "Throttle",
  [anon_sym_Thrust] = "Thrust",
  [anon_sym_ThrustToWeight] = "ThrustToWeight",
  [anon_sym_Time] = "Time",
  [anon_sym_TimeToDestination] = "TimeToDestination",
  [anon_sym_TotalMoles] = "TotalMoles",
  [anon_sym_TotalMolesInput] = "TotalMolesInput",
  [anon_sym_TotalMolesInput2] = "TotalMolesInput2",
  [anon_sym_TotalMolesOutput] = "TotalMolesOutput",
  [anon_sym_TotalMolesOutput2] = "TotalMolesOutput2",
  [anon_sym_TotalQuantity] = "TotalQuantity",
  [anon_sym_TrueAnomaly] = "TrueAnomaly",
  [anon_sym_VelocityMagnitude] = "VelocityMagnitude",
  [anon_sym_VelocityRelativeX] = "VelocityRelativeX",
  [anon_sym_VelocityRelativeY] = "VelocityRelativeY",
  [anon_sym_VelocityRelativeZ] = "VelocityRelativeZ",
  [anon_sym_VelocityX] = "VelocityX",
  [anon_sym_VelocityY] = "VelocityY",
  [anon_sym_VelocityZ] = "VelocityZ",
  [anon_sym_Vertical] = "Vertical",
  [anon_sym_VerticalRatio] = "VerticalRatio",
  [anon_sym_Volume] = "Volume",
  [anon_sym_VolumeOfLiquid] = "VolumeOfLiquid",
  [anon_sym_WattsReachingContact] = "WattsReachingContact",
  [anon_sym_Weight] = "Weight",
  [anon_sym_WorkingGasEfficiency] = "WorkingGasEfficiency",
  [anon_sym_ChargeRatio] = "ChargeRatio",
  [anon_sym_Class] = "Class",
  [anon_sym_Damage] = "Damage",
  [anon_sym_Efficiency] = "Efficiency",
  [anon_sym_FilterType] = "FilterType",
  [anon_sym_Growth] = "Growth",
  [anon_sym_Health] = "Health",
  [anon_sym_Mature] = "Mature",
  [anon_sym_MaxQuantity] = "MaxQuantity",
  [anon_sym_OccupantHash] = "OccupantHash",
  [anon_sym_Occupied] = "Occupied",
  [anon_sym_PressureAir] = "PressureAir",
  [anon_sym_PressureWaste] = "PressureWaste",
  [anon_sym_Seeding] = "Seeding",
  [anon_sym_SortingClass] = "SortingClass",
  [anon_sym_Average] = "Average",
  [anon_sym_Minimum] = "Minimum",
  [anon_sym_Sum] = "Sum",
  [anon_sym_Contents] = "Contents",
  [anon_sym_Recipe] = "Recipe",
  [anon_sym_Required] = "Required",
  [anon_sym_TotalContents] = "TotalContents",
  [sym_enum] = "enum",
  [sym_deprecated] = "deprecated",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_newline] = "newline",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_operand] = "operand",
  [sym_device_spec] = "device_spec",
  [sym_constant] = "constant",
  [sym_hash_preproc] = "hash_preproc",
  [sym_number] = "number",
  [sym_operation] = "operation",
  [sym_logicable] = "logicable",
  [sym_logictype] = "logictype",
  [sym_logicslottype] = "logicslottype",
  [sym_batchmode] = "batchmode",
  [sym_reagentmode] = "reagentmode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [alias_sym_invalid_instruction] = "invalid_instruction",
  [alias_sym_program] = "program",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__whitespace] = sym__whitespace,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_register] = sym_register,
  [sym_network_index] = sym_network_index,
  [sym_device] = sym_device,
  [anon_sym_nan] = anon_sym_nan,
  [anon_sym_pinf] = anon_sym_pinf,
  [anon_sym_ninf] = anon_sym_ninf,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_deg2rad] = anon_sym_deg2rad,
  [anon_sym_rad2deg] = anon_sym_rad2deg,
  [anon_sym_epsilon] = anon_sym_epsilon,
  [sym_preproc_string] = sym_preproc_string,
  [anon_sym_HASH_LPAREN_DQUOTE] = anon_sym_HASH_LPAREN_DQUOTE,
  [anon_sym_DQUOTE_RPAREN] = anon_sym_DQUOTE_RPAREN,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_acos] = anon_sym_acos,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_asin] = anon_sym_asin,
  [anon_sym_atan] = anon_sym_atan,
  [anon_sym_atan2] = anon_sym_atan2,
  [anon_sym_bap] = anon_sym_bap,
  [anon_sym_bapal] = anon_sym_bapal,
  [anon_sym_bapz] = anon_sym_bapz,
  [anon_sym_bapzal] = anon_sym_bapzal,
  [anon_sym_bdns] = anon_sym_bdns,
  [anon_sym_bdnsal] = anon_sym_bdnsal,
  [anon_sym_bdse] = anon_sym_bdse,
  [anon_sym_bdseal] = anon_sym_bdseal,
  [anon_sym_beq] = anon_sym_beq,
  [anon_sym_beqal] = anon_sym_beqal,
  [anon_sym_beqz] = anon_sym_beqz,
  [anon_sym_beqzal] = anon_sym_beqzal,
  [anon_sym_bge] = anon_sym_bge,
  [anon_sym_bgeal] = anon_sym_bgeal,
  [anon_sym_bgez] = anon_sym_bgez,
  [anon_sym_bgezal] = anon_sym_bgezal,
  [anon_sym_bgt] = anon_sym_bgt,
  [anon_sym_bgtal] = anon_sym_bgtal,
  [anon_sym_bgtz] = anon_sym_bgtz,
  [anon_sym_bgtzal] = anon_sym_bgtzal,
  [anon_sym_ble] = anon_sym_ble,
  [anon_sym_bleal] = anon_sym_bleal,
  [anon_sym_blez] = anon_sym_blez,
  [anon_sym_blezal] = anon_sym_blezal,
  [anon_sym_blt] = anon_sym_blt,
  [anon_sym_bltal] = anon_sym_bltal,
  [anon_sym_bltz] = anon_sym_bltz,
  [anon_sym_bltzal] = anon_sym_bltzal,
  [anon_sym_bna] = anon_sym_bna,
  [anon_sym_bnaal] = anon_sym_bnaal,
  [anon_sym_bnan] = anon_sym_bnan,
  [anon_sym_bnaz] = anon_sym_bnaz,
  [anon_sym_bnazal] = anon_sym_bnazal,
  [anon_sym_bne] = anon_sym_bne,
  [anon_sym_bneal] = anon_sym_bneal,
  [anon_sym_bnez] = anon_sym_bnez,
  [anon_sym_bnezal] = anon_sym_bnezal,
  [anon_sym_brap] = anon_sym_brap,
  [anon_sym_brapz] = anon_sym_brapz,
  [anon_sym_brdns] = anon_sym_brdns,
  [anon_sym_brdse] = anon_sym_brdse,
  [anon_sym_breq] = anon_sym_breq,
  [anon_sym_breqz] = anon_sym_breqz,
  [anon_sym_brge] = anon_sym_brge,
  [anon_sym_brgez] = anon_sym_brgez,
  [anon_sym_brgt] = anon_sym_brgt,
  [anon_sym_brgtz] = anon_sym_brgtz,
  [anon_sym_brle] = anon_sym_brle,
  [anon_sym_brlez] = anon_sym_brlez,
  [anon_sym_brlt] = anon_sym_brlt,
  [anon_sym_brltz] = anon_sym_brltz,
  [anon_sym_brna] = anon_sym_brna,
  [anon_sym_brnan] = anon_sym_brnan,
  [anon_sym_brnaz] = anon_sym_brnaz,
  [anon_sym_brne] = anon_sym_brne,
  [anon_sym_brnez] = anon_sym_brnez,
  [anon_sym_ceil] = anon_sym_ceil,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_getd] = anon_sym_getd,
  [anon_sym_hcf] = anon_sym_hcf,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_jal] = anon_sym_jal,
  [anon_sym_jr] = anon_sym_jr,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_lb] = anon_sym_lb,
  [anon_sym_lbn] = anon_sym_lbn,
  [anon_sym_lbns] = anon_sym_lbns,
  [anon_sym_lbs] = anon_sym_lbs,
  [anon_sym_ld] = anon_sym_ld,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_lr] = anon_sym_lr,
  [anon_sym_ls] = anon_sym_ls,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_nor] = anon_sym_nor,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_peek] = anon_sym_peek,
  [anon_sym_poke] = anon_sym_poke,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_putd] = anon_sym_putd,
  [anon_sym_rand] = anon_sym_rand,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_sap] = anon_sym_sap,
  [anon_sym_sapz] = anon_sym_sapz,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_sbn] = anon_sym_sbn,
  [anon_sym_sbs] = anon_sym_sbs,
  [anon_sym_sd] = anon_sym_sd,
  [anon_sym_sdns] = anon_sym_sdns,
  [anon_sym_sdse] = anon_sym_sdse,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_seqz] = anon_sym_seqz,
  [anon_sym_sge] = anon_sym_sge,
  [anon_sym_sgez] = anon_sym_sgez,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_sgtz] = anon_sym_sgtz,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_sla] = anon_sym_sla,
  [anon_sym_sle] = anon_sym_sle,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_slez] = anon_sym_slez,
  [anon_sym_sll] = anon_sym_sll,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_sltz] = anon_sym_sltz,
  [anon_sym_sna] = anon_sym_sna,
  [anon_sym_snan] = anon_sym_snan,
  [anon_sym_snanz] = anon_sym_snanz,
  [anon_sym_snaz] = anon_sym_snaz,
  [anon_sym_sne] = anon_sym_sne,
  [anon_sym_snez] = anon_sym_snez,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_sra] = anon_sym_sra,
  [anon_sym_srl] = anon_sym_srl,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_tan] = anon_sym_tan,
  [anon_sym_trunc] = anon_sym_trunc,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_Acceleration] = anon_sym_Acceleration,
  [anon_sym_Activate] = anon_sym_Activate,
  [anon_sym_AirRelease] = anon_sym_AirRelease,
  [anon_sym_AlignmentError] = anon_sym_AlignmentError,
  [anon_sym_Apex] = anon_sym_Apex,
  [anon_sym_AutoLand] = anon_sym_AutoLand,
  [anon_sym_AutoShutOff] = anon_sym_AutoShutOff,
  [anon_sym_Bpm] = anon_sym_Bpm,
  [anon_sym_BurnTimeRemaining] = anon_sym_BurnTimeRemaining,
  [anon_sym_CelestialHash] = anon_sym_CelestialHash,
  [anon_sym_CelestialParentHash] = anon_sym_CelestialParentHash,
  [anon_sym_Channel0] = anon_sym_Channel0,
  [anon_sym_Channel1] = anon_sym_Channel1,
  [anon_sym_Channel2] = anon_sym_Channel2,
  [anon_sym_Channel3] = anon_sym_Channel3,
  [anon_sym_Channel4] = anon_sym_Channel4,
  [anon_sym_Channel5] = anon_sym_Channel5,
  [anon_sym_Channel6] = anon_sym_Channel6,
  [anon_sym_Channel7] = anon_sym_Channel7,
  [anon_sym_Charge] = anon_sym_Charge,
  [anon_sym_Chart] = anon_sym_Chart,
  [anon_sym_ChartedNavPoints] = anon_sym_ChartedNavPoints,
  [anon_sym_ClearMemory] = anon_sym_ClearMemory,
  [anon_sym_CollectableGoods] = anon_sym_CollectableGoods,
  [anon_sym_Color] = anon_sym_Color,
  [anon_sym_Combustion] = anon_sym_Combustion,
  [anon_sym_CombustionInput] = anon_sym_CombustionInput,
  [anon_sym_CombustionInput2] = anon_sym_CombustionInput2,
  [anon_sym_CombustionLimiter] = anon_sym_CombustionLimiter,
  [anon_sym_CombustionOutput] = anon_sym_CombustionOutput,
  [anon_sym_CombustionOutput2] = anon_sym_CombustionOutput2,
  [anon_sym_CompletionRatio] = anon_sym_CompletionRatio,
  [anon_sym_ContactTypeId] = anon_sym_ContactTypeId,
  [anon_sym_CurrentCode] = anon_sym_CurrentCode,
  [anon_sym_CurrentResearchPodType] = anon_sym_CurrentResearchPodType,
  [anon_sym_Density] = anon_sym_Density,
  [anon_sym_DestinationCode] = anon_sym_DestinationCode,
  [anon_sym_Discover] = anon_sym_Discover,
  [anon_sym_DistanceAu] = anon_sym_DistanceAu,
  [anon_sym_DistanceKm] = anon_sym_DistanceKm,
  [anon_sym_DrillCondition] = anon_sym_DrillCondition,
  [anon_sym_DryMass] = anon_sym_DryMass,
  [anon_sym_Eccentricity] = anon_sym_Eccentricity,
  [anon_sym_ElevatorLevel] = anon_sym_ElevatorLevel,
  [anon_sym_ElevatorSpeed] = anon_sym_ElevatorSpeed,
  [anon_sym_EntityState] = anon_sym_EntityState,
  [anon_sym_EnvironmentEfficiency] = anon_sym_EnvironmentEfficiency,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_ExhaustVelocity] = anon_sym_ExhaustVelocity,
  [anon_sym_ExportCount] = anon_sym_ExportCount,
  [anon_sym_ExportQuantity] = anon_sym_ExportQuantity,
  [anon_sym_ExportSlotHash] = anon_sym_ExportSlotHash,
  [anon_sym_ExportSlotOccupant] = anon_sym_ExportSlotOccupant,
  [anon_sym_Filtration] = anon_sym_Filtration,
  [anon_sym_FlightControlRule] = anon_sym_FlightControlRule,
  [anon_sym_Flush] = anon_sym_Flush,
  [anon_sym_ForceWrite] = anon_sym_ForceWrite,
  [anon_sym_ForwardX] = anon_sym_ForwardX,
  [anon_sym_ForwardY] = anon_sym_ForwardY,
  [anon_sym_ForwardZ] = anon_sym_ForwardZ,
  [anon_sym_Fuel] = anon_sym_Fuel,
  [anon_sym_Harvest] = anon_sym_Harvest,
  [anon_sym_Horizontal] = anon_sym_Horizontal,
  [anon_sym_HorizontalRatio] = anon_sym_HorizontalRatio,
  [anon_sym_Idle] = anon_sym_Idle,
  [anon_sym_ImportCount] = anon_sym_ImportCount,
  [anon_sym_ImportQuantity] = anon_sym_ImportQuantity,
  [anon_sym_ImportSlotHash] = anon_sym_ImportSlotHash,
  [anon_sym_ImportSlotOccupant] = anon_sym_ImportSlotOccupant,
  [anon_sym_Inclination] = anon_sym_Inclination,
  [anon_sym_Index] = anon_sym_Index,
  [anon_sym_InterrogationProgress] = anon_sym_InterrogationProgress,
  [anon_sym_LineNumber] = anon_sym_LineNumber,
  [anon_sym_Lock] = anon_sym_Lock,
  [anon_sym_ManualResearchRequiredPod] = anon_sym_ManualResearchRequiredPod,
  [anon_sym_Mass] = anon_sym_Mass,
  [anon_sym_Maximum] = anon_sym_Maximum,
  [anon_sym_MineablesInQueue] = anon_sym_MineablesInQueue,
  [anon_sym_MineablesInVicinity] = anon_sym_MineablesInVicinity,
  [anon_sym_MinedQuantity] = anon_sym_MinedQuantity,
  [anon_sym_MinimumWattsToContact] = anon_sym_MinimumWattsToContact,
  [anon_sym_Mode] = anon_sym_Mode,
  [anon_sym_NavPoints] = anon_sym_NavPoints,
  [anon_sym_NextWeatherEventTime] = anon_sym_NextWeatherEventTime,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_Open] = anon_sym_Open,
  [anon_sym_OperationalTemperatureEfficiency] = anon_sym_OperationalTemperatureEfficiency,
  [anon_sym_OrbitPeriod] = anon_sym_OrbitPeriod,
  [anon_sym_Orientation] = anon_sym_Orientation,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_PassedMoles] = anon_sym_PassedMoles,
  [anon_sym_Plant] = anon_sym_Plant,
  [anon_sym_PlantEfficiency1] = anon_sym_PlantEfficiency1,
  [anon_sym_PlantEfficiency2] = anon_sym_PlantEfficiency2,
  [anon_sym_PlantEfficiency3] = anon_sym_PlantEfficiency3,
  [anon_sym_PlantEfficiency4] = anon_sym_PlantEfficiency4,
  [anon_sym_PlantGrowth1] = anon_sym_PlantGrowth1,
  [anon_sym_PlantGrowth2] = anon_sym_PlantGrowth2,
  [anon_sym_PlantGrowth3] = anon_sym_PlantGrowth3,
  [anon_sym_PlantGrowth4] = anon_sym_PlantGrowth4,
  [anon_sym_PlantHash1] = anon_sym_PlantHash1,
  [anon_sym_PlantHash2] = anon_sym_PlantHash2,
  [anon_sym_PlantHash3] = anon_sym_PlantHash3,
  [anon_sym_PlantHash4] = anon_sym_PlantHash4,
  [anon_sym_PlantHealth1] = anon_sym_PlantHealth1,
  [anon_sym_PlantHealth2] = anon_sym_PlantHealth2,
  [anon_sym_PlantHealth3] = anon_sym_PlantHealth3,
  [anon_sym_PlantHealth4] = anon_sym_PlantHealth4,
  [anon_sym_PositionX] = anon_sym_PositionX,
  [anon_sym_PositionY] = anon_sym_PositionY,
  [anon_sym_PositionZ] = anon_sym_PositionZ,
  [anon_sym_Power] = anon_sym_Power,
  [anon_sym_PowerActual] = anon_sym_PowerActual,
  [anon_sym_PowerGeneration] = anon_sym_PowerGeneration,
  [anon_sym_PowerPotential] = anon_sym_PowerPotential,
  [anon_sym_PowerRequired] = anon_sym_PowerRequired,
  [anon_sym_PrefabHash] = anon_sym_PrefabHash,
  [anon_sym_Pressure] = anon_sym_Pressure,
  [anon_sym_PressureEfficiency] = anon_sym_PressureEfficiency,
  [anon_sym_PressureExternal] = anon_sym_PressureExternal,
  [anon_sym_PressureInput] = anon_sym_PressureInput,
  [anon_sym_PressureInput2] = anon_sym_PressureInput2,
  [anon_sym_PressureInternal] = anon_sym_PressureInternal,
  [anon_sym_PressureOutput] = anon_sym_PressureOutput,
  [anon_sym_PressureOutput2] = anon_sym_PressureOutput2,
  [anon_sym_PressureSetting] = anon_sym_PressureSetting,
  [anon_sym_Progress] = anon_sym_Progress,
  [anon_sym_Quantity] = anon_sym_Quantity,
  [anon_sym_Ratio] = anon_sym_Ratio,
  [anon_sym_RatioCarbonDioxide] = anon_sym_RatioCarbonDioxide,
  [anon_sym_RatioCarbonDioxideInput] = anon_sym_RatioCarbonDioxideInput,
  [anon_sym_RatioCarbonDioxideInput2] = anon_sym_RatioCarbonDioxideInput2,
  [anon_sym_RatioCarbonDioxideOutput] = anon_sym_RatioCarbonDioxideOutput,
  [anon_sym_RatioCarbonDioxideOutput2] = anon_sym_RatioCarbonDioxideOutput2,
  [anon_sym_RatioHydrogen] = anon_sym_RatioHydrogen,
  [anon_sym_RatioLiquidCarbonDioxide] = anon_sym_RatioLiquidCarbonDioxide,
  [anon_sym_RatioLiquidCarbonDioxideInput] = anon_sym_RatioLiquidCarbonDioxideInput,
  [anon_sym_RatioLiquidCarbonDioxideInput2] = anon_sym_RatioLiquidCarbonDioxideInput2,
  [anon_sym_RatioLiquidCarbonDioxideOutput] = anon_sym_RatioLiquidCarbonDioxideOutput,
  [anon_sym_RatioLiquidCarbonDioxideOutput2] = anon_sym_RatioLiquidCarbonDioxideOutput2,
  [anon_sym_RatioLiquidHydrogen] = anon_sym_RatioLiquidHydrogen,
  [anon_sym_RatioLiquidNitrogen] = anon_sym_RatioLiquidNitrogen,
  [anon_sym_RatioLiquidNitrogenInput] = anon_sym_RatioLiquidNitrogenInput,
  [anon_sym_RatioLiquidNitrogenInput2] = anon_sym_RatioLiquidNitrogenInput2,
  [anon_sym_RatioLiquidNitrogenOutput] = anon_sym_RatioLiquidNitrogenOutput,
  [anon_sym_RatioLiquidNitrogenOutput2] = anon_sym_RatioLiquidNitrogenOutput2,
  [anon_sym_RatioLiquidNitrousOxide] = anon_sym_RatioLiquidNitrousOxide,
  [anon_sym_RatioLiquidNitrousOxideInput] = anon_sym_RatioLiquidNitrousOxideInput,
  [anon_sym_RatioLiquidNitrousOxideInput2] = anon_sym_RatioLiquidNitrousOxideInput2,
  [anon_sym_RatioLiquidNitrousOxideOutput] = anon_sym_RatioLiquidNitrousOxideOutput,
  [anon_sym_RatioLiquidNitrousOxideOutput2] = anon_sym_RatioLiquidNitrousOxideOutput2,
  [anon_sym_RatioLiquidOxygen] = anon_sym_RatioLiquidOxygen,
  [anon_sym_RatioLiquidOxygenInput] = anon_sym_RatioLiquidOxygenInput,
  [anon_sym_RatioLiquidOxygenInput2] = anon_sym_RatioLiquidOxygenInput2,
  [anon_sym_RatioLiquidOxygenOutput] = anon_sym_RatioLiquidOxygenOutput,
  [anon_sym_RatioLiquidOxygenOutput2] = anon_sym_RatioLiquidOxygenOutput2,
  [anon_sym_RatioLiquidPollutant] = anon_sym_RatioLiquidPollutant,
  [anon_sym_RatioLiquidPollutantInput] = anon_sym_RatioLiquidPollutantInput,
  [anon_sym_RatioLiquidPollutantInput2] = anon_sym_RatioLiquidPollutantInput2,
  [anon_sym_RatioLiquidPollutantOutput] = anon_sym_RatioLiquidPollutantOutput,
  [anon_sym_RatioLiquidPollutantOutput2] = anon_sym_RatioLiquidPollutantOutput2,
  [anon_sym_RatioLiquidVolatiles] = anon_sym_RatioLiquidVolatiles,
  [anon_sym_RatioLiquidVolatilesInput] = anon_sym_RatioLiquidVolatilesInput,
  [anon_sym_RatioLiquidVolatilesInput2] = anon_sym_RatioLiquidVolatilesInput2,
  [anon_sym_RatioLiquidVolatilesOutput] = anon_sym_RatioLiquidVolatilesOutput,
  [anon_sym_RatioLiquidVolatilesOutput2] = anon_sym_RatioLiquidVolatilesOutput2,
  [anon_sym_RatioNitrogen] = anon_sym_RatioNitrogen,
  [anon_sym_RatioNitrogenInput] = anon_sym_RatioNitrogenInput,
  [anon_sym_RatioNitrogenInput2] = anon_sym_RatioNitrogenInput2,
  [anon_sym_RatioNitrogenOutput] = anon_sym_RatioNitrogenOutput,
  [anon_sym_RatioNitrogenOutput2] = anon_sym_RatioNitrogenOutput2,
  [anon_sym_RatioNitrousOxide] = anon_sym_RatioNitrousOxide,
  [anon_sym_RatioNitrousOxideInput] = anon_sym_RatioNitrousOxideInput,
  [anon_sym_RatioNitrousOxideInput2] = anon_sym_RatioNitrousOxideInput2,
  [anon_sym_RatioNitrousOxideOutput] = anon_sym_RatioNitrousOxideOutput,
  [anon_sym_RatioNitrousOxideOutput2] = anon_sym_RatioNitrousOxideOutput2,
  [anon_sym_RatioOxygen] = anon_sym_RatioOxygen,
  [anon_sym_RatioOxygenInput] = anon_sym_RatioOxygenInput,
  [anon_sym_RatioOxygenInput2] = anon_sym_RatioOxygenInput2,
  [anon_sym_RatioOxygenOutput] = anon_sym_RatioOxygenOutput,
  [anon_sym_RatioOxygenOutput2] = anon_sym_RatioOxygenOutput2,
  [anon_sym_RatioPollutant] = anon_sym_RatioPollutant,
  [anon_sym_RatioPollutantInput] = anon_sym_RatioPollutantInput,
  [anon_sym_RatioPollutantInput2] = anon_sym_RatioPollutantInput2,
  [anon_sym_RatioPollutantOutput] = anon_sym_RatioPollutantOutput,
  [anon_sym_RatioPollutantOutput2] = anon_sym_RatioPollutantOutput2,
  [anon_sym_RatioPollutedWater] = anon_sym_RatioPollutedWater,
  [anon_sym_RatioSteam] = anon_sym_RatioSteam,
  [anon_sym_RatioSteamInput] = anon_sym_RatioSteamInput,
  [anon_sym_RatioSteamInput2] = anon_sym_RatioSteamInput2,
  [anon_sym_RatioSteamOutput] = anon_sym_RatioSteamOutput,
  [anon_sym_RatioSteamOutput2] = anon_sym_RatioSteamOutput2,
  [anon_sym_RatioVolatiles] = anon_sym_RatioVolatiles,
  [anon_sym_RatioVolatilesInput] = anon_sym_RatioVolatilesInput,
  [anon_sym_RatioVolatilesInput2] = anon_sym_RatioVolatilesInput2,
  [anon_sym_RatioVolatilesOutput] = anon_sym_RatioVolatilesOutput,
  [anon_sym_RatioVolatilesOutput2] = anon_sym_RatioVolatilesOutput2,
  [anon_sym_RatioWater] = anon_sym_RatioWater,
  [anon_sym_RatioWaterInput] = anon_sym_RatioWaterInput,
  [anon_sym_RatioWaterInput2] = anon_sym_RatioWaterInput2,
  [anon_sym_RatioWaterOutput] = anon_sym_RatioWaterOutput,
  [anon_sym_RatioWaterOutput2] = anon_sym_RatioWaterOutput2,
  [anon_sym_ReEntryAltitude] = anon_sym_ReEntryAltitude,
  [anon_sym_Reagents] = anon_sym_Reagents,
  [anon_sym_RecipeHash] = anon_sym_RecipeHash,
  [anon_sym_ReferenceId] = anon_sym_ReferenceId,
  [anon_sym_RequestHash] = anon_sym_RequestHash,
  [anon_sym_RequiredPower] = anon_sym_RequiredPower,
  [anon_sym_ReturnFuelCost] = anon_sym_ReturnFuelCost,
  [anon_sym_Richness] = anon_sym_Richness,
  [anon_sym_Rpm] = anon_sym_Rpm,
  [anon_sym_SemiMajorAxis] = anon_sym_SemiMajorAxis,
  [anon_sym_Setting] = anon_sym_Setting,
  [anon_sym_SettingInput] = anon_sym_SettingInput,
  [anon_sym_SettingOutput] = anon_sym_SettingOutput,
  [anon_sym_SignalID] = anon_sym_SignalID,
  [anon_sym_SignalStrength] = anon_sym_SignalStrength,
  [anon_sym_Sites] = anon_sym_Sites,
  [anon_sym_Size] = anon_sym_Size,
  [anon_sym_SizeX] = anon_sym_SizeX,
  [anon_sym_SizeY] = anon_sym_SizeY,
  [anon_sym_SizeZ] = anon_sym_SizeZ,
  [anon_sym_SolarAngle] = anon_sym_SolarAngle,
  [anon_sym_SolarIrradiance] = anon_sym_SolarIrradiance,
  [anon_sym_SoundAlert] = anon_sym_SoundAlert,
  [anon_sym_Stress] = anon_sym_Stress,
  [anon_sym_Survey] = anon_sym_Survey,
  [anon_sym_TargetPadIndex] = anon_sym_TargetPadIndex,
  [anon_sym_TargetX] = anon_sym_TargetX,
  [anon_sym_TargetY] = anon_sym_TargetY,
  [anon_sym_TargetZ] = anon_sym_TargetZ,
  [anon_sym_Temperature] = anon_sym_Temperature,
  [anon_sym_TemperatureDifferentialEfficiency] = anon_sym_TemperatureDifferentialEfficiency,
  [anon_sym_TemperatureExternal] = anon_sym_TemperatureExternal,
  [anon_sym_TemperatureInput] = anon_sym_TemperatureInput,
  [anon_sym_TemperatureInput2] = anon_sym_TemperatureInput2,
  [anon_sym_TemperatureOutput] = anon_sym_TemperatureOutput,
  [anon_sym_TemperatureOutput2] = anon_sym_TemperatureOutput2,
  [anon_sym_TemperatureSetting] = anon_sym_TemperatureSetting,
  [anon_sym_Throttle] = anon_sym_Throttle,
  [anon_sym_Thrust] = anon_sym_Thrust,
  [anon_sym_ThrustToWeight] = anon_sym_ThrustToWeight,
  [anon_sym_Time] = anon_sym_Time,
  [anon_sym_TimeToDestination] = anon_sym_TimeToDestination,
  [anon_sym_TotalMoles] = anon_sym_TotalMoles,
  [anon_sym_TotalMolesInput] = anon_sym_TotalMolesInput,
  [anon_sym_TotalMolesInput2] = anon_sym_TotalMolesInput2,
  [anon_sym_TotalMolesOutput] = anon_sym_TotalMolesOutput,
  [anon_sym_TotalMolesOutput2] = anon_sym_TotalMolesOutput2,
  [anon_sym_TotalQuantity] = anon_sym_TotalQuantity,
  [anon_sym_TrueAnomaly] = anon_sym_TrueAnomaly,
  [anon_sym_VelocityMagnitude] = anon_sym_VelocityMagnitude,
  [anon_sym_VelocityRelativeX] = anon_sym_VelocityRelativeX,
  [anon_sym_VelocityRelativeY] = anon_sym_VelocityRelativeY,
  [anon_sym_VelocityRelativeZ] = anon_sym_VelocityRelativeZ,
  [anon_sym_VelocityX] = anon_sym_VelocityX,
  [anon_sym_VelocityY] = anon_sym_VelocityY,
  [anon_sym_VelocityZ] = anon_sym_VelocityZ,
  [anon_sym_Vertical] = anon_sym_Vertical,
  [anon_sym_VerticalRatio] = anon_sym_VerticalRatio,
  [anon_sym_Volume] = anon_sym_Volume,
  [anon_sym_VolumeOfLiquid] = anon_sym_VolumeOfLiquid,
  [anon_sym_WattsReachingContact] = anon_sym_WattsReachingContact,
  [anon_sym_Weight] = anon_sym_Weight,
  [anon_sym_WorkingGasEfficiency] = anon_sym_WorkingGasEfficiency,
  [anon_sym_ChargeRatio] = anon_sym_ChargeRatio,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_Damage] = anon_sym_Damage,
  [anon_sym_Efficiency] = anon_sym_Efficiency,
  [anon_sym_FilterType] = anon_sym_FilterType,
  [anon_sym_Growth] = anon_sym_Growth,
  [anon_sym_Health] = anon_sym_Health,
  [anon_sym_Mature] = anon_sym_Mature,
  [anon_sym_MaxQuantity] = anon_sym_MaxQuantity,
  [anon_sym_OccupantHash] = anon_sym_OccupantHash,
  [anon_sym_Occupied] = anon_sym_Occupied,
  [anon_sym_PressureAir] = anon_sym_PressureAir,
  [anon_sym_PressureWaste] = anon_sym_PressureWaste,
  [anon_sym_Seeding] = anon_sym_Seeding,
  [anon_sym_SortingClass] = anon_sym_SortingClass,
  [anon_sym_Average] = anon_sym_Average,
  [anon_sym_Minimum] = anon_sym_Minimum,
  [anon_sym_Sum] = anon_sym_Sum,
  [anon_sym_Contents] = anon_sym_Contents,
  [anon_sym_Recipe] = anon_sym_Recipe,
  [anon_sym_Required] = anon_sym_Required,
  [anon_sym_TotalContents] = anon_sym_TotalContents,
  [sym_enum] = sym_enum,
  [sym_deprecated] = sym_deprecated,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_newline] = sym_newline,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_operand] = sym_operand,
  [sym_device_spec] = sym_device_spec,
  [sym_constant] = sym_constant,
  [sym_hash_preproc] = sym_hash_preproc,
  [sym_number] = sym_number,
  [sym_operation] = sym_operation,
  [sym_logicable] = sym_logicable,
  [sym_logictype] = sym_logictype,
  [sym_logicslottype] = sym_logicslottype,
  [sym_batchmode] = sym_batchmode,
  [sym_reagentmode] = sym_reagentmode,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [alias_sym_invalid_instruction] = alias_sym_invalid_instruction,
  [alias_sym_program] = alias_sym_program,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_network_index] = {
    .visible = true,
    .named = true,
  },
  [sym_device] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ninf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deg2rad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rad2deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epsilon] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HASH_LPAREN_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdnsal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdseal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgeal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bleal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnazal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bneal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hcf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peek] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_putd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snanz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Acceleration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Activate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AirRelease] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AlignmentError] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Apex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AutoLand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AutoShutOff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bpm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BurnTimeRemaining] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CelestialHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CelestialParentHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Charge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Chart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ChartedNavPoints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ClearMemory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CollectableGoods] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Combustion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombustionInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombustionInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombustionLimiter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombustionOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombustionOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CompletionRatio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ContactTypeId] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CurrentCode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CurrentResearchPodType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Density] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DestinationCode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Discover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DistanceAu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DistanceKm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DrillCondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DryMass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Eccentricity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElevatorLevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElevatorSpeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EntityState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EnvironmentEfficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExhaustVelocity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExportCount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExportQuantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExportSlotHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExportSlotOccupant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Filtration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FlightControlRule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Flush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForceWrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForwardX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForwardY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForwardZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fuel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Harvest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HorizontalRatio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Idle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ImportCount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ImportQuantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ImportSlotHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ImportSlotOccupant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Inclination] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InterrogationProgress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LineNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ManualResearchRequiredPod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Maximum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MineablesInQueue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MineablesInVicinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MinedQuantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MinimumWattsToContact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NavPoints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NextWeatherEventTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OperationalTemperatureEfficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrbitPeriod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Orientation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PassedMoles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Plant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantEfficiency1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantEfficiency2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantEfficiency3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantEfficiency4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantGrowth1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantGrowth2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantGrowth3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantGrowth4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHash1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHash2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHash3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHash4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHealth1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHealth2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHealth3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlantHealth4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PositionX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PositionY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PositionZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PowerActual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PowerGeneration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PowerPotential] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PowerRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PrefabHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pressure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureEfficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureExternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureInternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureSetting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Quantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ratio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioCarbonDioxide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioCarbonDioxideInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioCarbonDioxideInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioCarbonDioxideOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioCarbonDioxideOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioHydrogen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidCarbonDioxide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidCarbonDioxideInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidCarbonDioxideInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidCarbonDioxideOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidCarbonDioxideOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidHydrogen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrogen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrogenInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrogenInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrogenOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrogenOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrousOxide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrousOxideInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrousOxideInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrousOxideOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidNitrousOxideOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidOxygen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidOxygenInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidOxygenInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidOxygenOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidOxygenOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidPollutant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidPollutantInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidPollutantInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidPollutantOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidPollutantOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidVolatiles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidVolatilesInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidVolatilesInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidVolatilesOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioLiquidVolatilesOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrogen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrogenInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrogenInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrogenOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrogenOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrousOxide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrousOxideInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrousOxideInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrousOxideOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioNitrousOxideOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioOxygen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioOxygenInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioOxygenInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioOxygenOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioOxygenOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutantInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutantInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutantOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutantOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioPollutedWater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioSteam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioSteamInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioSteamInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioSteamOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioSteamOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioVolatiles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioVolatilesInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioVolatilesInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioVolatilesOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioVolatilesOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioWater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioWaterInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioWaterInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioWaterOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RatioWaterOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ReEntryAltitude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reagents] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RecipeHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ReferenceId] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RequestHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RequiredPower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ReturnFuelCost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Richness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rpm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SemiMajorAxis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Setting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SettingInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SettingOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SignalID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SignalStrength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sites] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SizeX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SizeY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SizeZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SolarAngle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SolarIrradiance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SoundAlert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Stress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Survey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TargetPadIndex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TargetX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TargetY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TargetZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Temperature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureDifferentialEfficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureExternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemperatureSetting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Throttle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Thrust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ThrustToWeight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TimeToDestination] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalMoles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalMolesInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalMolesInput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalMolesOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalMolesOutput2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalQuantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TrueAnomaly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityMagnitude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityRelativeX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityRelativeY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityRelativeZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VelocityZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VerticalRatio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Volume] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VolumeOfLiquid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WattsReachingContact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Weight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WorkingGasEfficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ChargeRatio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Damage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Efficiency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FilterType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Growth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Health] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MaxQuantity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OccupantHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Occupied] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureAir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PressureWaste] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Seeding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SortingClass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Average] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Minimum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Contents] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Recipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TotalContents] = {
    .visible = true,
    .named = false,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_deprecated] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_device_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_preproc] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_logicable] = {
    .visible = true,
    .named = true,
  },
  [sym_logictype] = {
    .visible = true,
    .named = true,
  },
  [sym_logicslottype] = {
    .visible = true,
    .named = true,
  },
  [sym_batchmode] = {
    .visible = true,
    .named = true,
  },
  [sym_reagentmode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_invalid_instruction] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_program] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_operand = 1,
  field_operation = 2,
  field_string = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operand] = "operand",
  [field_operation] = "operation",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operation, 0},
  [1] =
    {field_operand, 0},
  [2] =
    {field_operand, 1, .inherited = true},
    {field_operation, 0},
  [4] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [6] =
    {field_string, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_invalid_instruction,
  },
  [3] = {
    [0] = alias_sym_program,
  },
  [5] = {
    [0] = alias_sym_invalid_instruction,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_source_file_repeat1, 2,
    aux_sym_source_file_repeat1,
    alias_sym_program,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 11,
        '\r', 13,
        '"', 3,
        '#', 16,
        ':', 10,
        'E', 95,
        'H', 20,
        'I', 65,
        'L', 71,
        'P', 60,
        '\t', 14,
        ' ', 14,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 11,
        '\r', 13,
        '#', 16,
        '$', 7,
        '%', 4,
        '-', 5,
        ':', 10,
        'E', 95,
        'H', 20,
        'I', 65,
        'L', 71,
        'P', 60,
        '\t', 14,
        ' ', 14,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(110);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '4') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'P') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(19);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(76);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_network_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_HASH_LPAREN_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE_RPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_deprecated);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'B', 2,
        'C', 3,
        'D', 4,
        'E', 5,
        'F', 6,
        'G', 7,
        'H', 8,
        'I', 9,
        'L', 10,
        'M', 11,
        'N', 12,
        'O', 13,
        'P', 14,
        'Q', 15,
        'R', 16,
        'S', 17,
        'T', 18,
        'V', 19,
        'W', 20,
        'a', 21,
        'b', 22,
        'c', 23,
        'd', 24,
        'e', 25,
        'f', 26,
        'g', 27,
        'h', 28,
        'j', 29,
        'l', 30,
        'm', 31,
        'n', 32,
        'o', 33,
        'p', 34,
        'r', 35,
        's', 36,
        't', 37,
        'x', 38,
        'y', 39,
      );
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'q') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '5') ||
          lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_s);
      ADVANCE_MAP(
        'a', 167,
        'b', 168,
        'd', 169,
        'e', 170,
        'g', 171,
        'i', 172,
        'l', 173,
        'n', 174,
        'p', 166,
        'q', 175,
        'r', 176,
        's', 177,
        'u', 178,
      );
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 83:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'q') ADVANCE(263);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(271);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'z') ADVANCE(273);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 126:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(322);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_device);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_lb);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ld);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(334);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(345);
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 165:
      if (lookahead == '1') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_sb);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_sd);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'q') ADVANCE(356);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 185:
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 187:
      if (lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Bpm);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 206:
      if (lookahead == 'M') ADVANCE(401);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(404);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(412);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'w') ADVANCE(415);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 221:
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 223:
      if (lookahead == 'w') ADVANCE(419);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 234:
      if (lookahead == 'k') ADVANCE(430);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 239:
      if (lookahead == 'Q') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 242:
      if (lookahead == 'P') ADVANCE(440);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(443);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(456);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(460);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(465);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Rpm);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Sum);
      END_STATE();
    case 280:
      if (lookahead == 'v') ADVANCE(478);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(492);
      END_STATE();
    case 294:
      if (lookahead == 'k') ADVANCE(493);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bap);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'z') ADVANCE(499);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'z') ADVANCE(503);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(505);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'z') ADVANCE(507);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == 'z') ADVANCE(509);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'z') ADVANCE(511);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_bna);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'z') ADVANCE(514);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'z') ADVANCE(516);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 314:
      if (lookahead == 'q') ADVANCE(520);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 321:
      if (lookahead == '2') ADVANCE(529);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_device);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_hcf);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_jal);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_lbn);
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_lbs);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(536);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 343:
      if (lookahead == 'k') ADVANCE(537);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(538);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 347:
      if (lookahead == 'h') ADVANCE(540);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_sap);
      if (lookahead == 'z') ADVANCE(543);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_sbn);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_sbs);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == 'z') ADVANCE(547);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == 'z') ADVANCE(548);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'z') ADVANCE(549);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_sin);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_sla);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'z') ADVANCE(551);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sll);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'z') ADVANCE(552);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_sna);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'z') ADVANCE(554);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_sne);
      if (lookahead == 'z') ADVANCE(555);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_tan);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 375:
      if (lookahead == 'v') ADVANCE(560);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_Apex);
      END_STATE();
    case 380:
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'S') ADVANCE(565);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(567);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(570);
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(577);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 403:
      if (lookahead == 'c') ADVANCE(590);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(600);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(601);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Fuel);
      END_STATE();
    case 417:
      if (lookahead == 'y') ADVANCE(604);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 422:
      if (lookahead == 'z') ADVANCE(609);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Idle);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 426:
      if (lookahead == 'x') ADVANCE(612);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 429:
      if (lookahead == 'N') ADVANCE(614);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Lock);
      END_STATE();
    case 431:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_Mass);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 436:
      if (lookahead == 'm') ADVANCE(619);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 438:
      if (lookahead == 'm') ADVANCE(622);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Mode);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 441:
      if (lookahead == 'W') ADVANCE(624);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 443:
      if (lookahead == 'q') ADVANCE(625);
      END_STATE();
    case 444:
      if (lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Open);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(630);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 461:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 468:
      if (lookahead == 'M') ADVANCE(650);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_Size);
      if (lookahead == 'X') ADVANCE(654);
      if (lookahead == 'Y') ADVANCE(655);
      if (lookahead == 'Z') ADVANCE(656);
      END_STATE();
    case 473:
      if (lookahead == 'C') ADVANCE(657);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 476:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(661);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Time);
      if (lookahead == 'T') ADVANCE(667);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(668);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(669);
      END_STATE();
    case 486:
      if (lookahead == 'A') ADVANCE(670);
      END_STATE();
    case 487:
      if (lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(672);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(674);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 492:
      if (lookahead == 'h') ADVANCE(676);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_acos);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_asin);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_atan);
      if (lookahead == '2') ADVANCE(679);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_bapz);
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_bdns);
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_bdse);
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(684);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_beqz);
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_bgez);
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_bgtz);
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_blez);
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_bltz);
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_bnan);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_bnaz);
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_bnez);
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_brap);
      if (lookahead == 'z') ADVANCE(698);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_breq);
      if (lookahead == 'z') ADVANCE(701);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_brge);
      if (lookahead == 'z') ADVANCE(702);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_brgt);
      if (lookahead == 'z') ADVANCE(703);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_brle);
      if (lookahead == 'z') ADVANCE(704);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_brlt);
      if (lookahead == 'z') ADVANCE(705);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_brna);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead == 'z') ADVANCE(707);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_brne);
      if (lookahead == 'z') ADVANCE(708);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ceil);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_getd);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_lbns);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_peek);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_pinf);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_poke);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_putd);
      END_STATE();
    case 542:
      if (lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_sapz);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_sdns);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_sdse);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(715);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_seqz);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_sgez);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_sgtz);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(716);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_slez);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_sltz);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_snan);
      if (lookahead == 'z') ADVANCE(717);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_snaz);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_snez);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(718);
      END_STATE();
    case 558:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 560:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 564:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 565:
      if (lookahead == 'h') ADVANCE(726);
      END_STATE();
    case 566:
      if (lookahead == 'g') ADVANCE(727);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_Chart);
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 573:
      if (lookahead == 'M') ADVANCE(733);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_Color);
      if (lookahead == '.') ADVANCE(735);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 582:
      if (lookahead == 'g') ADVANCE(742);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 585:
      if (lookahead == 'v') ADVANCE(745);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 587:
      if (lookahead == 'C') ADVANCE(747);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 590:
      if (lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 592:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Error);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 599:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_Flush);
      END_STATE();
    case 602:
      if (lookahead == 'W') ADVANCE(759);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 604:
      if (lookahead == 'p') ADVANCE(761);
      END_STATE();
    case 605:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 606:
      if (lookahead == 'h') ADVANCE(763);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 608:
      if (lookahead == 'h') ADVANCE(765);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_Index);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 614:
      if (lookahead == 'u') ADVANCE(770);
      END_STATE();
    case 615:
      if (lookahead == 'S') ADVANCE(771);
      if (lookahead == 'T') ADVANCE(772);
      END_STATE();
    case 616:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 618:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 619:
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 620:
      if (lookahead == 'b') ADVANCE(777);
      END_STATE();
    case 621:
      if (lookahead == 'Q') ADVANCE(778);
      END_STATE();
    case 622:
      if (lookahead == 'u') ADVANCE(779);
      END_STATE();
    case 623:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 624:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 626:
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 628:
      if (lookahead == 'P') ADVANCE(786);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(787);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_Plant);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Power);
      if (lookahead == 'A') ADVANCE(791);
      if (lookahead == 'G') ADVANCE(792);
      if (lookahead == 'M') ADVANCE(793);
      if (lookahead == 'P') ADVANCE(794);
      if (lookahead == 'R') ADVANCE(795);
      END_STATE();
    case 635:
      if (lookahead == 'b') ADVANCE(796);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 637:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(799);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_Ratio);
      ADVANCE_MAP(
        'C', 800,
        'H', 801,
        'L', 802,
        'N', 803,
        'O', 804,
        'P', 805,
        'S', 806,
        'V', 807,
        'W', 808,
      );
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(809);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(810);
      END_STATE();
    case 642:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 643:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 647:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 648:
      if (lookahead == 'M') ADVANCE(817);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 650:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 652:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Sites);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_SizeX);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_SizeY);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_SizeZ);
      END_STATE();
    case 657:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 658:
      if (lookahead == 'A') ADVANCE(823);
      if (lookahead == 'I') ADVANCE(824);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(826);
      if (lookahead == 'A') ADVANCE(827);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 662:
      if (lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 668:
      if (lookahead == 'C') ADVANCE(835);
      if (lookahead == 'M') ADVANCE(836);
      if (lookahead == 'Q') ADVANCE(837);
      END_STATE();
    case 669:
      if (lookahead == 'm') ADVANCE(838);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 672:
      if (lookahead == 'I') ADVANCE(841);
      if (lookahead == 'O') ADVANCE(842);
      END_STATE();
    case 673:
      if (lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 674:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 675:
      if (lookahead == 'R') ADVANCE(845);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_bapal);
      END_STATE();
    case 681:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 682:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 683:
      if (lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_beqal);
      END_STATE();
    case 685:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_bgeal);
      END_STATE();
    case 687:
      if (lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_bgtal);
      END_STATE();
    case 689:
      if (lookahead == 'l') ADVANCE(853);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_bleal);
      END_STATE();
    case 691:
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_bltal);
      END_STATE();
    case 693:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_bnaal);
      END_STATE();
    case 695:
      if (lookahead == 'l') ADVANCE(856);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_bneal);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_brapz);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_brdns);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_brdse);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_breqz);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_brgez);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_brgtz);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_brlez);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_brltz);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_brnan);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_brnaz);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_brnez);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 710:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_snanz);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_trunc);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 722:
      if (lookahead == '.') ADVANCE(864);
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 725:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 726:
      if (lookahead == 'u') ADVANCE(869);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 728:
      if (lookahead == 'm') ADVANCE(871);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 730:
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Charge);
      if (lookahead == 'R') ADVANCE(874);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(875);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 735:
      ADVANCE_MAP(
        'B', 878,
        'G', 879,
        'K', 880,
        'O', 881,
        'P', 882,
        'R', 883,
        'W', 884,
        'Y', 885,
      );
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(886);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_Damage);
      END_STATE();
    case 742:
      if (lookahead == 'h') ADVANCE(891);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(892);
      END_STATE();
    case 744:
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 746:
      if (lookahead == 'c') ADVANCE(895);
      END_STATE();
    case 747:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(897);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(898);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 751:
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 752:
      if (lookahead == 'S') ADVANCE(901);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(903);
      END_STATE();
    case 755:
      if (lookahead == 'C') ADVANCE(904);
      if (lookahead == 'Q') ADVANCE(905);
      END_STATE();
    case 756:
      if (lookahead == 'T') ADVANCE(906);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 758:
      if (lookahead == 'C') ADVANCE(908);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 760:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_Growth);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(912);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_Health);
      END_STATE();
    case 766:
      if (lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 767:
      if (lookahead == 'C') ADVANCE(914);
      if (lookahead == 'Q') ADVANCE(915);
      END_STATE();
    case 768:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 769:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 770:
      if (lookahead == 'm') ADVANCE(918);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(919);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(920);
      END_STATE();
    case 773:
      if (lookahead == 'R') ADVANCE(921);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_Mature);
      END_STATE();
    case 775:
      if (lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 776:
      if (lookahead == 'm') ADVANCE(923);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(924);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(925);
      END_STATE();
    case 779:
      if (lookahead == 'm') ADVANCE(926);
      END_STATE();
    case 780:
      if (lookahead == 'n') ADVANCE(927);
      END_STATE();
    case 781:
      if (lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 782:
      if (lookahead == 'a') ADVANCE(929);
      END_STATE();
    case 783:
      if (lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 785:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 787:
      if (lookahead == 'a') ADVANCE(934);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 789:
      if (lookahead == 'M') ADVANCE(935);
      END_STATE();
    case 790:
      if (lookahead == 'o') ADVANCE(936);
      END_STATE();
    case 791:
      if (lookahead == 'c') ADVANCE(937);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 793:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 794:
      if (lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 796:
      if (lookahead == 'H') ADVANCE(942);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(943);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(944);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(945);
      END_STATE();
    case 800:
      if (lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 801:
      if (lookahead == 'y') ADVANCE(947);
      END_STATE();
    case 802:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 803:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 804:
      if (lookahead == 'x') ADVANCE(950);
      END_STATE();
    case 805:
      if (lookahead == 'o') ADVANCE(951);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 807:
      if (lookahead == 'o') ADVANCE(953);
      END_STATE();
    case 808:
      if (lookahead == 'a') ADVANCE(954);
      END_STATE();
    case 809:
      if (lookahead == 'y') ADVANCE(955);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(956);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_Recipe);
      if (lookahead == 'H') ADVANCE(957);
      END_STATE();
    case 812:
      if (lookahead == 'n') ADVANCE(958);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(959);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 815:
      if (lookahead == 'F') ADVANCE(961);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(962);
      END_STATE();
    case 817:
      if (lookahead == 'o') ADVANCE(963);
      END_STATE();
    case 818:
      if (lookahead == 'g') ADVANCE(964);
      END_STATE();
    case 819:
      if (lookahead == 'j') ADVANCE(965);
      END_STATE();
    case 820:
      if (lookahead == 'g') ADVANCE(966);
      END_STATE();
    case 821:
      if (lookahead == 'I') ADVANCE(967);
      if (lookahead == 'S') ADVANCE(968);
      END_STATE();
    case 822:
      if (lookahead == 'a') ADVANCE(969);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 824:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 825:
      if (lookahead == 'g') ADVANCE(972);
      END_STATE();
    case 826:
      ADVANCE_MAP(
        'A', 973,
        'D', 974,
        'F', 975,
        'H', 976,
        'I', 977,
        'L', 978,
        'M', 979,
        'N', 980,
        'O', 981,
        'P', 982,
        'R', 983,
        'S', 984,
        'T', 985,
        'W', 986,
      );
      END_STATE();
    case 827:
      if (lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_Stress);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_Survey);
      END_STATE();
    case 830:
      if (lookahead == 'P') ADVANCE(988);
      if (lookahead == 'X') ADVANCE(989);
      if (lookahead == 'Y') ADVANCE(990);
      if (lookahead == 'Z') ADVANCE(991);
      END_STATE();
    case 831:
      if (lookahead == 'a') ADVANCE(992);
      END_STATE();
    case 832:
      if (lookahead == 'l') ADVANCE(993);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_Thrust);
      if (lookahead == 'T') ADVANCE(994);
      END_STATE();
    case 834:
      if (lookahead == 'D') ADVANCE(995);
      END_STATE();
    case 835:
      if (lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 836:
      if (lookahead == 'o') ADVANCE(997);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(998);
      END_STATE();
    case 838:
      if (lookahead == 'i') ADVANCE(999);
      END_STATE();
    case 839:
      if (lookahead == 'o') ADVANCE(1000);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(1003);
      END_STATE();
    case 843:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_Volume);
      if (lookahead == 'O') ADVANCE(1005);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_Weight);
      END_STATE();
    case 847:
      if (lookahead == 'g') ADVANCE(1007);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_bapzal);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_bdnsal);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_bdseal);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_beqzal);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_bgezal);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_bgtzal);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_blezal);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_bltzal);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_bnazal);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_bnezal);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 859:
      if (lookahead == 'd') ADVANCE(1008);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(1009);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 862:
      if (lookahead == 'a') ADVANCE(1010);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 864:
      if (lookahead == 'C') ADVANCE(1012);
      if (lookahead == 'H') ADVANCE(1013);
      END_STATE();
    case 865:
      if (lookahead == 'r') ADVANCE(1014);
      END_STATE();
    case 866:
      if (lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 868:
      if (lookahead == 'd') ADVANCE(1017);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_Average);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(1019);
      END_STATE();
    case 872:
      if (lookahead == 'a') ADVANCE(1020);
      END_STATE();
    case 873:
      ADVANCE_MAP(
        '0', 1021,
        '1', 1022,
        '2', 1023,
        '3', 1024,
        '4', 1025,
        '5', 1026,
        '6', 1027,
        '7', 1028,
      );
      END_STATE();
    case 874:
      if (lookahead == 'a') ADVANCE(1029);
      END_STATE();
    case 875:
      if (lookahead == 'N') ADVANCE(1030);
      END_STATE();
    case 876:
      if (lookahead == 'm') ADVANCE(1031);
      END_STATE();
    case 877:
      if (lookahead == 'a') ADVANCE(1032);
      END_STATE();
    case 878:
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 880:
      if (lookahead == 'h') ADVANCE(1036);
      END_STATE();
    case 881:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 882:
      if (lookahead == 'i') ADVANCE(1038);
      if (lookahead == 'u') ADVANCE(1039);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(1040);
      END_STATE();
    case 884:
      if (lookahead == 'h') ADVANCE(1041);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 886:
      if (lookahead == 'i') ADVANCE(1043);
      END_STATE();
    case 887:
      if (lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 888:
      if (lookahead == 'T') ADVANCE(1045);
      END_STATE();
    case 889:
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 890:
      if (lookahead == 'C') ADVANCE(1047);
      if (lookahead == 'R') ADVANCE(1048);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(1049);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_Density);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 894:
      if (lookahead == 'r') ADVANCE(1051);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_DryMass);
      END_STATE();
    case 898:
      if (lookahead == 'i') ADVANCE(1054);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(1055);
      END_STATE();
    case 900:
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 902:
      if (lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 903:
      if (lookahead == 'V') ADVANCE(1059);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(1060);
      END_STATE();
    case 905:
      if (lookahead == 'u') ADVANCE(1061);
      END_STATE();
    case 906:
      if (lookahead == 'y') ADVANCE(1062);
      END_STATE();
    case 907:
      if (lookahead == 'i') ADVANCE(1063);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1065);
      END_STATE();
    case 910:
      if (lookahead == 'X') ADVANCE(1066);
      if (lookahead == 'Y') ADVANCE(1067);
      if (lookahead == 'Z') ADVANCE(1068);
      END_STATE();
    case 911:
      if (lookahead == '.') ADVANCE(1069);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_Harvest);
      END_STATE();
    case 913:
      if (lookahead == 't') ADVANCE(1070);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 915:
      if (lookahead == 'u') ADVANCE(1072);
      END_STATE();
    case 916:
      if (lookahead == 't') ADVANCE(1073);
      END_STATE();
    case 917:
      if (lookahead == 'g') ADVANCE(1074);
      END_STATE();
    case 918:
      if (lookahead == 'b') ADVANCE(1075);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 920:
      if (lookahead == 'p') ADVANCE(1077);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 922:
      if (lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_Maximum);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 925:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_Minimum);
      if (lookahead == 'W') ADVANCE(1082);
      END_STATE();
    case 927:
      if (lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 928:
      if (lookahead == 't') ADVANCE(1084);
      END_STATE();
    case 929:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 930:
      if (lookahead == 't') ADVANCE(1086);
      END_STATE();
    case 931:
      if (lookahead == 'd') ADVANCE(1087);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 933:
      if (lookahead == 'r') ADVANCE(1089);
      END_STATE();
    case 934:
      if (lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 936:
      if (lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(1094);
      END_STATE();
    case 939:
      if (lookahead == 'd') ADVANCE(1095);
      END_STATE();
    case 940:
      if (lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 941:
      if (lookahead == 'q') ADVANCE(1097);
      END_STATE();
    case 942:
      if (lookahead == 'a') ADVANCE(1098);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(1100);
      END_STATE();
    case 945:
      if (lookahead == 'y') ADVANCE(1101);
      END_STATE();
    case 946:
      if (lookahead == 'r') ADVANCE(1102);
      END_STATE();
    case 947:
      if (lookahead == 'd') ADVANCE(1103);
      END_STATE();
    case 948:
      if (lookahead == 'q') ADVANCE(1104);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 950:
      if (lookahead == 'y') ADVANCE(1106);
      END_STATE();
    case 951:
      if (lookahead == 'l') ADVANCE(1107);
      END_STATE();
    case 952:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 953:
      if (lookahead == 'l') ADVANCE(1109);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 955:
      if (lookahead == 'A') ADVANCE(1111);
      END_STATE();
    case 956:
      if (lookahead == 's') ADVANCE(1112);
      END_STATE();
    case 957:
      if (lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 958:
      if (lookahead == 'c') ADVANCE(1114);
      END_STATE();
    case 959:
      if (lookahead == 'H') ADVANCE(1115);
      END_STATE();
    case 960:
      if (lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 961:
      if (lookahead == 'u') ADVANCE(1117);
      END_STATE();
    case 962:
      if (lookahead == 's') ADVANCE(1118);
      END_STATE();
    case 963:
      if (lookahead == 'd') ADVANCE(1119);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_Seeding);
      END_STATE();
    case 965:
      if (lookahead == 'o') ADVANCE(1120);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_Setting);
      if (lookahead == 'I') ADVANCE(1121);
      if (lookahead == 'O') ADVANCE(1122);
      END_STATE();
    case 967:
      if (lookahead == 'D') ADVANCE(1123);
      END_STATE();
    case 968:
      if (lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 969:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 970:
      if (lookahead == 'g') ADVANCE(1126);
      END_STATE();
    case 971:
      if (lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 972:
      if (lookahead == 'C') ADVANCE(1128);
      END_STATE();
    case 973:
      if (lookahead == 'i') ADVANCE(1129);
      if (lookahead == 'l') ADVANCE(1130);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1131);
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 975:
      if (lookahead == 'i') ADVANCE(1133);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead == 'o') ADVANCE(1135);
      END_STATE();
    case 976:
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(1137);
      END_STATE();
    case 977:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 978:
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 979:
      if (lookahead == 'a') ADVANCE(1140);
      if (lookahead == 'u') ADVANCE(1141);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 981:
      if (lookahead == 'n') ADVANCE(1143);
      END_STATE();
    case 982:
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 983:
      if (lookahead == 'o') ADVANCE(1146);
      END_STATE();
    case 984:
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead == 'y') ADVANCE(1148);
      END_STATE();
    case 985:
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == 'h') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == 'w') ADVANCE(1152);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(1153);
      if (lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 987:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 988:
      if (lookahead == 'a') ADVANCE(1156);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_TargetX);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_TargetY);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_TargetZ);
      END_STATE();
    case 992:
      if (lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 993:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 994:
      if (lookahead == 'o') ADVANCE(1159);
      END_STATE();
    case 995:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 996:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 997:
      if (lookahead == 'l') ADVANCE(1162);
      END_STATE();
    case 998:
      if (lookahead == 'a') ADVANCE(1163);
      END_STATE();
    case 999:
      if (lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1000:
      if (lookahead == 'm') ADVANCE(1165);
      END_STATE();
    case 1001:
      if (lookahead == 'y') ADVANCE(1166);
      END_STATE();
    case 1002:
      if (lookahead == 'w') ADVANCE(1167);
      END_STATE();
    case 1003:
      if (lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1004:
      if (lookahead == 'l') ADVANCE(1169);
      END_STATE();
    case 1005:
      if (lookahead == 'f') ADVANCE(1170);
      END_STATE();
    case 1006:
      if (lookahead == 'a') ADVANCE(1171);
      END_STATE();
    case 1007:
      if (lookahead == 'G') ADVANCE(1172);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_deg2rad);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_epsilon);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(1173);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_Activate);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(1174);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(1175);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(1176);
      END_STATE();
    case 1015:
      if (lookahead == 's') ADVANCE(1177);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_AutoLand);
      END_STATE();
    case 1018:
      if (lookahead == 'O') ADVANCE(1179);
      END_STATE();
    case 1019:
      if (lookahead == 'R') ADVANCE(1180);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(1181);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Channel0);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_Channel1);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_Channel2);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_Channel3);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_Channel4);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_Channel5);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_Channel6);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_Channel7);
      END_STATE();
    case 1029:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1030:
      if (lookahead == 'a') ADVANCE(1183);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(1184);
      END_STATE();
    case 1032:
      if (lookahead == 'b') ADVANCE(1185);
      END_STATE();
    case 1033:
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1035:
      if (lookahead == 'a') ADVANCE(1189);
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 1036:
      if (lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 1037:
      if (lookahead == 'a') ADVANCE(1192);
      END_STATE();
    case 1038:
      if (lookahead == 'n') ADVANCE(1193);
      END_STATE();
    case 1039:
      if (lookahead == 'r') ADVANCE(1194);
      END_STATE();
    case 1040:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 1041:
      if (lookahead == 'i') ADVANCE(1195);
      END_STATE();
    case 1042:
      if (lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(1197);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1045:
      if (lookahead == 'y') ADVANCE(1199);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_Contents);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(1200);
      END_STATE();
    case 1048:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 1049:
      if (lookahead == 'S') ADVANCE(1202);
      END_STATE();
    case 1050:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_Discover);
      END_STATE();
    case 1052:
      if (lookahead == 'A') ADVANCE(1204);
      if (lookahead == 'K') ADVANCE(1205);
      END_STATE();
    case 1053:
      if (lookahead == 'd') ADVANCE(1206);
      END_STATE();
    case 1054:
      if (lookahead == 'c') ADVANCE(1207);
      END_STATE();
    case 1055:
      if (lookahead == 'c') ADVANCE(1208);
      END_STATE();
    case 1056:
      if (lookahead == 'L') ADVANCE(1209);
      if (lookahead == 'M') ADVANCE(1210);
      if (lookahead == 'S') ADVANCE(1211);
      END_STATE();
    case 1057:
      if (lookahead == 'a') ADVANCE(1212);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(1213);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 1060:
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 1061:
      if (lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 1062:
      if (lookahead == 'p') ADVANCE(1217);
      END_STATE();
    case 1063:
      if (lookahead == 'o') ADVANCE(1218);
      END_STATE();
    case 1064:
      if (lookahead == 'n') ADVANCE(1219);
      END_STATE();
    case 1065:
      if (lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_ForwardX);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_ForwardY);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_ForwardZ);
      END_STATE();
    case 1069:
      ADVANCE_MAP(
        'C', 1221,
        'H', 1222,
        'L', 1223,
        'N', 1224,
        'O', 1225,
        'P', 1226,
        'S', 1227,
        'U', 1228,
        'V', 1229,
        'W', 1230,
      );
      END_STATE();
    case 1070:
      if (lookahead == 'a') ADVANCE(1231);
      END_STATE();
    case 1071:
      if (lookahead == 'u') ADVANCE(1232);
      END_STATE();
    case 1072:
      if (lookahead == 'a') ADVANCE(1233);
      END_STATE();
    case 1073:
      if (lookahead == 'i') ADVANCE(1234);
      END_STATE();
    case 1074:
      if (lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 1076:
      if (lookahead == 't') ADVANCE(1237);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 1078:
      if (lookahead == 's') ADVANCE(1239);
      END_STATE();
    case 1079:
      if (lookahead == 'i') ADVANCE(1240);
      END_STATE();
    case 1080:
      if (lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 1081:
      if (lookahead == 'n') ADVANCE(1242);
      END_STATE();
    case 1082:
      if (lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 1083:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 1084:
      if (lookahead == 'h') ADVANCE(1245);
      END_STATE();
    case 1085:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 1086:
      if (lookahead == 'H') ADVANCE(1246);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_Occupied);
      END_STATE();
    case 1088:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 1089:
      if (lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1090:
      if (lookahead == 'i') ADVANCE(1249);
      END_STATE();
    case 1091:
      if (lookahead == 'l') ADVANCE(1250);
      END_STATE();
    case 1092:
      if (lookahead == 'X') ADVANCE(1251);
      if (lookahead == 'Y') ADVANCE(1252);
      if (lookahead == 'Z') ADVANCE(1253);
      END_STATE();
    case 1093:
      if (lookahead == 'u') ADVANCE(1254);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(1255);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(1256);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(1257);
      END_STATE();
    case 1097:
      if (lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 1098:
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_Pressure);
      if (lookahead == 'A') ADVANCE(1260);
      if (lookahead == 'E') ADVANCE(1261);
      if (lookahead == 'I') ADVANCE(1262);
      if (lookahead == 'O') ADVANCE(1263);
      if (lookahead == 'S') ADVANCE(1264);
      if (lookahead == 'W') ADVANCE(1265);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_Progress);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_Quantity);
      END_STATE();
    case 1102:
      if (lookahead == 'b') ADVANCE(1266);
      END_STATE();
    case 1103:
      if (lookahead == 'r') ADVANCE(1267);
      END_STATE();
    case 1104:
      if (lookahead == 'u') ADVANCE(1268);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(1269);
      END_STATE();
    case 1106:
      if (lookahead == 'g') ADVANCE(1270);
      END_STATE();
    case 1107:
      if (lookahead == 'l') ADVANCE(1271);
      END_STATE();
    case 1108:
      if (lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 1109:
      if (lookahead == 'a') ADVANCE(1273);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(1274);
      END_STATE();
    case 1111:
      if (lookahead == 'l') ADVANCE(1275);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_Reagents);
      END_STATE();
    case 1113:
      if (lookahead == 's') ADVANCE(1276);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(1277);
      END_STATE();
    case 1115:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_Required);
      if (lookahead == 'P') ADVANCE(1279);
      END_STATE();
    case 1117:
      if (lookahead == 'e') ADVANCE(1280);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_Richness);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(1282);
      END_STATE();
    case 1121:
      if (lookahead == 'n') ADVANCE(1283);
      END_STATE();
    case 1122:
      if (lookahead == 'u') ADVANCE(1284);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_SignalID);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(1285);
      END_STATE();
    case 1125:
      if (lookahead == 's') ADVANCE(1286);
      END_STATE();
    case 1126:
      if (lookahead == 'l') ADVANCE(1287);
      END_STATE();
    case 1127:
      if (lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 1128:
      if (lookahead == 'l') ADVANCE(1289);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(1290);
      END_STATE();
    case 1130:
      if (lookahead == 'a') ADVANCE(1291);
      if (lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 1131:
      if (lookahead == 'n') ADVANCE(1293);
      END_STATE();
    case 1132:
      if (lookahead == 'p') ADVANCE(1294);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(1295);
      if (lookahead == 'v') ADVANCE(1296);
      END_STATE();
    case 1134:
      if (lookahead == 'o') ADVANCE(1297);
      END_STATE();
    case 1135:
      if (lookahead == 'u') ADVANCE(1298);
      END_STATE();
    case 1136:
      if (lookahead == 'l') ADVANCE(1299);
      END_STATE();
    case 1137:
      if (lookahead == 'g') ADVANCE(1300);
      END_STATE();
    case 1138:
      if (lookahead == 't') ADVANCE(1301);
      END_STATE();
    case 1139:
      if (lookahead == 'f') ADVANCE(1302);
      END_STATE();
    case 1140:
      if (lookahead == 'l') ADVANCE(1303);
      END_STATE();
    case 1141:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 1142:
      if (lookahead == 'n') ADVANCE(1305);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1144:
      if (lookahead == 'l') ADVANCE(1306);
      if (lookahead == 'w') ADVANCE(1307);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1146:
      if (lookahead == 'c') ADVANCE(1309);
      END_STATE();
    case 1147:
      if (lookahead == 'o') ADVANCE(1310);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(1311);
      END_STATE();
    case 1149:
      if (lookahead == 'm') ADVANCE(1312);
      END_STATE();
    case 1150:
      if (lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 1151:
      if (lookahead == 'a') ADVANCE(1314);
      END_STATE();
    case 1152:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(1315);
      END_STATE();
    case 1154:
      if (lookahead == 'l') ADVANCE(1316);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(1317);
      END_STATE();
    case 1156:
      if (lookahead == 'd') ADVANCE(1318);
      END_STATE();
    case 1157:
      if (lookahead == 'u') ADVANCE(1319);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_Throttle);
      END_STATE();
    case 1159:
      if (lookahead == 'W') ADVANCE(1320);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(1321);
      END_STATE();
    case 1161:
      if (lookahead == 't') ADVANCE(1322);
      END_STATE();
    case 1162:
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 1163:
      if (lookahead == 'n') ADVANCE(1324);
      END_STATE();
    case 1164:
      if (lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 1165:
      if (lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 1166:
      if (lookahead == 'M') ADVANCE(1327);
      if (lookahead == 'R') ADVANCE(1328);
      if (lookahead == 'X') ADVANCE(1329);
      if (lookahead == 'Y') ADVANCE(1330);
      if (lookahead == 'Z') ADVANCE(1331);
      END_STATE();
    case 1167:
      if (lookahead == 'a') ADVANCE(1332);
      END_STATE();
    case 1168:
      if (lookahead == 'w') ADVANCE(1333);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_Vertical);
      if (lookahead == 'R') ADVANCE(1334);
      END_STATE();
    case 1170:
      if (lookahead == 'L') ADVANCE(1335);
      END_STATE();
    case 1171:
      if (lookahead == 'c') ADVANCE(1336);
      END_STATE();
    case 1172:
      if (lookahead == 'a') ADVANCE(1337);
      END_STATE();
    case 1173:
      if (lookahead == 'i') ADVANCE(1338);
      END_STATE();
    case 1174:
      if (lookahead == 'l') ADVANCE(1339);
      END_STATE();
    case 1175:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 1176:
      if (lookahead == 'l') ADVANCE(1340);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(1341);
      END_STATE();
    case 1178:
      if (lookahead == 'E') ADVANCE(1342);
      END_STATE();
    case 1179:
      if (lookahead == 'f') ADVANCE(1343);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 1181:
      if (lookahead == 'H') ADVANCE(1345);
      if (lookahead == 'P') ADVANCE(1346);
      END_STATE();
    case 1182:
      if (lookahead == 'i') ADVANCE(1347);
      END_STATE();
    case 1183:
      if (lookahead == 'v') ADVANCE(1348);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(1349);
      END_STATE();
    case 1185:
      if (lookahead == 'l') ADVANCE(1350);
      END_STATE();
    case 1186:
      if (lookahead == 'c') ADVANCE(1351);
      END_STATE();
    case 1187:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1188:
      if (lookahead == 'w') ADVANCE(1352);
      END_STATE();
    case 1189:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(1353);
      END_STATE();
    case 1191:
      if (lookahead == 'k') ADVANCE(1354);
      END_STATE();
    case 1192:
      if (lookahead == 'n') ADVANCE(1355);
      END_STATE();
    case 1193:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 1194:
      if (lookahead == 'p') ADVANCE(1356);
      END_STATE();
    case 1195:
      if (lookahead == 't') ADVANCE(1357);
      END_STATE();
    case 1196:
      if (lookahead == 'l') ADVANCE(1358);
      END_STATE();
    case 1197:
      if (lookahead == 'n') ADVANCE(1359);
      END_STATE();
    case 1198:
      if (lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 1199:
      if (lookahead == 'p') ADVANCE(1361);
      END_STATE();
    case 1200:
      if (lookahead == 'd') ADVANCE(1362);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(1363);
      END_STATE();
    case 1202:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 1203:
      if (lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1204:
      if (lookahead == 'u') ADVANCE(1366);
      END_STATE();
    case 1205:
      if (lookahead == 'm') ADVANCE(1367);
      END_STATE();
    case 1206:
      if (lookahead == 'i') ADVANCE(1368);
      END_STATE();
    case 1207:
      if (lookahead == 'i') ADVANCE(1369);
      END_STATE();
    case 1208:
      if (lookahead == 'y') ADVANCE(1370);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 1210:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1211:
      if (lookahead == 'p') ADVANCE(1373);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(1374);
      END_STATE();
    case 1213:
      if (lookahead == 'n') ADVANCE(1375);
      END_STATE();
    case 1214:
      if (lookahead == 'l') ADVANCE(1376);
      END_STATE();
    case 1215:
      if (lookahead == 'n') ADVANCE(1377);
      END_STATE();
    case 1216:
      if (lookahead == 'n') ADVANCE(1378);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 1218:
      if (lookahead == 'n') ADVANCE(1380);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(1381);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 1221:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 1222:
      if (lookahead == 'y') ADVANCE(1384);
      END_STATE();
    case 1223:
      if (lookahead == 'i') ADVANCE(1385);
      END_STATE();
    case 1224:
      if (lookahead == 'i') ADVANCE(1386);
      END_STATE();
    case 1225:
      if (lookahead == 'x') ADVANCE(1387);
      END_STATE();
    case 1226:
      if (lookahead == 'o') ADVANCE(1388);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1228:
      if (lookahead == 'n') ADVANCE(1390);
      END_STATE();
    case 1229:
      if (lookahead == 'o') ADVANCE(1391);
      END_STATE();
    case 1230:
      if (lookahead == 'a') ADVANCE(1392);
      END_STATE();
    case 1231:
      if (lookahead == 'l') ADVANCE(1393);
      END_STATE();
    case 1232:
      if (lookahead == 'n') ADVANCE(1394);
      END_STATE();
    case 1233:
      if (lookahead == 'n') ADVANCE(1395);
      END_STATE();
    case 1234:
      if (lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(1397);
      END_STATE();
    case 1236:
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 1237:
      if (lookahead == 'T') ADVANCE(1399);
      END_STATE();
    case 1238:
      if (lookahead == '.') ADVANCE(1400);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(1402);
      END_STATE();
    case 1241:
      if (lookahead == 'I') ADVANCE(1403);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_NavPoints);
      END_STATE();
    case 1245:
      if (lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 1246:
      if (lookahead == 'a') ADVANCE(1407);
      END_STATE();
    case 1247:
      if (lookahead == 'a') ADVANCE(1408);
      END_STATE();
    case 1248:
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1249:
      if (lookahead == 'o') ADVANCE(1410);
      END_STATE();
    case 1250:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_PositionX);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_PositionY);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_PositionZ);
      END_STATE();
    case 1254:
      if (lookahead == 'a') ADVANCE(1412);
      END_STATE();
    case 1255:
      if (lookahead == 'r') ADVANCE(1413);
      END_STATE();
    case 1256:
      if (lookahead == '.') ADVANCE(1414);
      END_STATE();
    case 1257:
      if (lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(1416);
      END_STATE();
    case 1259:
      if (lookahead == 'h') ADVANCE(1417);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1418);
      END_STATE();
    case 1261:
      if (lookahead == 'f') ADVANCE(1419);
      if (lookahead == 'x') ADVANCE(1420);
      END_STATE();
    case 1262:
      if (lookahead == 'n') ADVANCE(1421);
      END_STATE();
    case 1263:
      if (lookahead == 'u') ADVANCE(1422);
      END_STATE();
    case 1264:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 1265:
      if (lookahead == 'a') ADVANCE(1424);
      END_STATE();
    case 1266:
      if (lookahead == 'o') ADVANCE(1425);
      END_STATE();
    case 1267:
      if (lookahead == 'o') ADVANCE(1426);
      END_STATE();
    case 1268:
      if (lookahead == 'i') ADVANCE(1427);
      END_STATE();
    case 1269:
      if (lookahead == 'o') ADVANCE(1428);
      END_STATE();
    case 1270:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 1271:
      if (lookahead == 'u') ADVANCE(1430);
      END_STATE();
    case 1272:
      if (lookahead == 'm') ADVANCE(1431);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(1432);
      END_STATE();
    case 1274:
      if (lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 1276:
      if (lookahead == 'h') ADVANCE(1435);
      END_STATE();
    case 1277:
      if (lookahead == 'I') ADVANCE(1436);
      END_STATE();
    case 1278:
      if (lookahead == 's') ADVANCE(1437);
      END_STATE();
    case 1279:
      if (lookahead == 'o') ADVANCE(1438);
      END_STATE();
    case 1280:
      if (lookahead == 'l') ADVANCE(1439);
      END_STATE();
    case 1281:
      if (lookahead == '.') ADVANCE(1440);
      END_STATE();
    case 1282:
      if (lookahead == 'A') ADVANCE(1441);
      END_STATE();
    case 1283:
      if (lookahead == 'p') ADVANCE(1442);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(1443);
      END_STATE();
    case 1285:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 1286:
      if (lookahead == '.') ADVANCE(1445);
      END_STATE();
    case 1287:
      if (lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 1288:
      if (lookahead == 'd') ADVANCE(1447);
      END_STATE();
    case 1289:
      if (lookahead == 'a') ADVANCE(1448);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1449);
      END_STATE();
    case 1291:
      if (lookahead == 'r') ADVANCE(1450);
      END_STATE();
    case 1292:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1293:
      if (lookahead == 'g') ADVANCE(1452);
      END_STATE();
    case 1294:
      if (lookahead == 'r') ADVANCE(1453);
      END_STATE();
    case 1295:
      if (lookahead == 'e') ADVANCE(1454);
      END_STATE();
    case 1296:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1297:
      if (lookahead == 'o') ADVANCE(1455);
      END_STATE();
    case 1298:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 1299:
      if (lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1300:
      if (lookahead == 'h') ADVANCE(1457);
      END_STATE();
    case 1301:
      if (lookahead == 'r') ADVANCE(1458);
      END_STATE();
    case 1302:
      if (lookahead == 't') ADVANCE(1459);
      END_STATE();
    case 1303:
      if (lookahead == 'f') ADVANCE(1460);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1461);
      END_STATE();
    case 1305:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1306:
      if (lookahead == 'l') ADVANCE(1462);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1463);
      END_STATE();
    case 1308:
      if (lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1309:
      if (lookahead == 'k') ADVANCE(1465);
      END_STATE();
    case 1310:
      if (lookahead == 'r') ADVANCE(1466);
      END_STATE();
    case 1311:
      if (lookahead == 't') ADVANCE(1467);
      END_STATE();
    case 1312:
      if (lookahead == 'p') ADVANCE(1468);
      END_STATE();
    case 1313:
      if (lookahead == 'e') ADVANCE(1469);
      END_STATE();
    case 1314:
      if (lookahead == 'd') ADVANCE(1470);
      END_STATE();
    case 1315:
      if (lookahead == 'n') ADVANCE(1471);
      END_STATE();
    case 1316:
      if (lookahead == 'c') ADVANCE(1472);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(1473);
      END_STATE();
    case 1318:
      if (lookahead == 'I') ADVANCE(1474);
      END_STATE();
    case 1319:
      if (lookahead == 'r') ADVANCE(1475);
      END_STATE();
    case 1320:
      if (lookahead == 'e') ADVANCE(1476);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(1477);
      END_STATE();
    case 1322:
      if (lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 1323:
      if (lookahead == 's') ADVANCE(1479);
      END_STATE();
    case 1324:
      if (lookahead == 't') ADVANCE(1480);
      END_STATE();
    case 1325:
      if (lookahead == 'e') ADVANCE(1481);
      END_STATE();
    case 1326:
      if (lookahead == 'l') ADVANCE(1482);
      END_STATE();
    case 1327:
      if (lookahead == 'a') ADVANCE(1483);
      END_STATE();
    case 1328:
      if (lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_VelocityX);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_VelocityY);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_VelocityZ);
      END_STATE();
    case 1332:
      if (lookahead == 'r') ADVANCE(1485);
      END_STATE();
    case 1333:
      if (lookahead == 'a') ADVANCE(1486);
      END_STATE();
    case 1334:
      if (lookahead == 'a') ADVANCE(1487);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(1488);
      END_STATE();
    case 1336:
      if (lookahead == 'h') ADVANCE(1489);
      END_STATE();
    case 1337:
      if (lookahead == 's') ADVANCE(1490);
      END_STATE();
    case 1338:
      if (lookahead == 'o') ADVANCE(1491);
      END_STATE();
    case 1339:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 1340:
      if (lookahead == '.') ADVANCE(1492);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_AirRelease);
      END_STATE();
    case 1342:
      if (lookahead == 'r') ADVANCE(1493);
      END_STATE();
    case 1343:
      if (lookahead == 'f') ADVANCE(1494);
      END_STATE();
    case 1344:
      if (lookahead == 'm') ADVANCE(1495);
      END_STATE();
    case 1345:
      if (lookahead == 'a') ADVANCE(1496);
      END_STATE();
    case 1346:
      if (lookahead == 'a') ADVANCE(1497);
      END_STATE();
    case 1347:
      if (lookahead == 'o') ADVANCE(1498);
      END_STATE();
    case 1348:
      if (lookahead == 'P') ADVANCE(1499);
      END_STATE();
    case 1349:
      if (lookahead == 'y') ADVANCE(1500);
      END_STATE();
    case 1350:
      if (lookahead == 'e') ADVANCE(1501);
      END_STATE();
    case 1351:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 1352:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 1353:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 1355:
      if (lookahead == 'g') ADVANCE(1502);
      END_STATE();
    case 1356:
      if (lookahead == 'l') ADVANCE(1503);
      END_STATE();
    case 1357:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1358:
      if (lookahead == 'o') ADVANCE(1504);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_Combustion);
      if (lookahead == 'I') ADVANCE(1505);
      if (lookahead == 'L') ADVANCE(1506);
      if (lookahead == 'O') ADVANCE(1507);
      END_STATE();
    case 1360:
      if (lookahead == 'R') ADVANCE(1508);
      END_STATE();
    case 1361:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 1362:
      if (lookahead == 'e') ADVANCE(1510);
      END_STATE();
    case 1363:
      if (lookahead == 'e') ADVANCE(1511);
      END_STATE();
    case 1364:
      if (lookahead == 'n') ADVANCE(1512);
      END_STATE();
    case 1365:
      if (lookahead == 'n') ADVANCE(1513);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_DistanceAu);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_DistanceKm);
      END_STATE();
    case 1368:
      if (lookahead == 't') ADVANCE(1514);
      END_STATE();
    case 1369:
      if (lookahead == 't') ADVANCE(1515);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_Efficiency);
      END_STATE();
    case 1371:
      if (lookahead == 'v') ADVANCE(1516);
      END_STATE();
    case 1372:
      if (lookahead == 'd') ADVANCE(1517);
      END_STATE();
    case 1373:
      if (lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 1374:
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 1375:
      if (lookahead == 't') ADVANCE(1520);
      END_STATE();
    case 1376:
      if (lookahead == 'o') ADVANCE(1521);
      END_STATE();
    case 1377:
      if (lookahead == 't') ADVANCE(1522);
      END_STATE();
    case 1378:
      if (lookahead == 't') ADVANCE(1523);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_FilterType);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_Filtration);
      END_STATE();
    case 1381:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_ForceWrite);
      END_STATE();
    case 1383:
      if (lookahead == 'r') ADVANCE(1525);
      END_STATE();
    case 1384:
      if (lookahead == 'd') ADVANCE(1526);
      END_STATE();
    case 1385:
      if (lookahead == 'q') ADVANCE(1527);
      END_STATE();
    case 1386:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1387:
      if (lookahead == 'y') ADVANCE(1529);
      END_STATE();
    case 1388:
      if (lookahead == 'l') ADVANCE(1530);
      END_STATE();
    case 1389:
      if (lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 1390:
      if (lookahead == 'd') ADVANCE(1532);
      END_STATE();
    case 1391:
      if (lookahead == 'l') ADVANCE(1533);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1534);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_Horizontal);
      if (lookahead == 'R') ADVANCE(1535);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(1536);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1537);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(1538);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(1539);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_LineNumber);
      END_STATE();
    case 1399:
      if (lookahead == 'y') ADVANCE(1540);
      END_STATE();
    case 1400:
      ADVANCE_MAP(
        'A', 1541,
        'B', 1542,
        'C', 1543,
        'D', 1544,
        'E', 1545,
        'F', 1546,
        'H', 1547,
        'I', 1548,
        'L', 1549,
        'M', 1550,
        'N', 1551,
        'O', 1552,
        'P', 1553,
        'Q', 1554,
        'R', 1555,
        'S', 1556,
        'T', 1557,
        'V', 1558,
        'W', 1559,
      );
      END_STATE();
    case 1401:
      if (lookahead == 'a') ADVANCE(1560);
      END_STATE();
    case 1402:
      if (lookahead == 'y') ADVANCE(1561);
      END_STATE();
    case 1403:
      if (lookahead == 'n') ADVANCE(1562);
      END_STATE();
    case 1404:
      if (lookahead == 'i') ADVANCE(1563);
      END_STATE();
    case 1405:
      if (lookahead == 't') ADVANCE(1564);
      END_STATE();
    case 1406:
      if (lookahead == 'r') ADVANCE(1565);
      END_STATE();
    case 1407:
      if (lookahead == 's') ADVANCE(1566);
      END_STATE();
    case 1408:
      if (lookahead == 'l') ADVANCE(1567);
      END_STATE();
    case 1409:
      if (lookahead == 'd') ADVANCE(1568);
      END_STATE();
    case 1410:
      if (lookahead == 'n') ADVANCE(1569);
      END_STATE();
    case 1411:
      if (lookahead == 's') ADVANCE(1570);
      END_STATE();
    case 1412:
      if (lookahead == 'l') ADVANCE(1571);
      END_STATE();
    case 1413:
      if (lookahead == 'a') ADVANCE(1572);
      END_STATE();
    case 1414:
      if (lookahead == 'C') ADVANCE(1573);
      if (lookahead == 'D') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(1575);
      END_STATE();
    case 1415:
      if (lookahead == 't') ADVANCE(1576);
      END_STATE();
    case 1416:
      if (lookahead == 'r') ADVANCE(1577);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_PrefabHash);
      END_STATE();
    case 1418:
      if (lookahead == 'r') ADVANCE(1578);
      END_STATE();
    case 1419:
      if (lookahead == 'f') ADVANCE(1579);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1580);
      END_STATE();
    case 1421:
      if (lookahead == 'p') ADVANCE(1581);
      if (lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 1422:
      if (lookahead == 't') ADVANCE(1583);
      END_STATE();
    case 1423:
      if (lookahead == 't') ADVANCE(1584);
      END_STATE();
    case 1424:
      if (lookahead == 's') ADVANCE(1585);
      END_STATE();
    case 1425:
      if (lookahead == 'n') ADVANCE(1586);
      END_STATE();
    case 1426:
      if (lookahead == 'g') ADVANCE(1587);
      END_STATE();
    case 1427:
      if (lookahead == 'd') ADVANCE(1588);
      END_STATE();
    case 1428:
      if (lookahead == 'g') ADVANCE(1589);
      if (lookahead == 'u') ADVANCE(1590);
      END_STATE();
    case 1429:
      if (lookahead == 'n') ADVANCE(1591);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(1592);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_RatioSteam);
      if (lookahead == 'I') ADVANCE(1593);
      if (lookahead == 'O') ADVANCE(1594);
      END_STATE();
    case 1432:
      if (lookahead == 'i') ADVANCE(1595);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_RatioWater);
      if (lookahead == 'I') ADVANCE(1596);
      if (lookahead == 'O') ADVANCE(1597);
      END_STATE();
    case 1434:
      if (lookahead == 'i') ADVANCE(1598);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_RecipeHash);
      END_STATE();
    case 1436:
      if (lookahead == 'd') ADVANCE(1599);
      END_STATE();
    case 1437:
      if (lookahead == 'h') ADVANCE(1600);
      END_STATE();
    case 1438:
      if (lookahead == 'w') ADVANCE(1601);
      END_STATE();
    case 1439:
      if (lookahead == 'C') ADVANCE(1602);
      END_STATE();
    case 1440:
      if (lookahead == 'F') ADVANCE(1603);
      if (lookahead == 'M') ADVANCE(1604);
      if (lookahead == 'N') ADVANCE(1605);
      if (lookahead == 'P') ADVANCE(1606);
      if (lookahead == 'R') ADVANCE(1607);
      if (lookahead == 'S') ADVANCE(1608);
      if (lookahead == 'U') ADVANCE(1609);
      END_STATE();
    case 1441:
      if (lookahead == 'x') ADVANCE(1610);
      END_STATE();
    case 1442:
      if (lookahead == 'u') ADVANCE(1611);
      END_STATE();
    case 1443:
      if (lookahead == 'p') ADVANCE(1612);
      END_STATE();
    case 1444:
      if (lookahead == 'n') ADVANCE(1613);
      END_STATE();
    case 1445:
      ADVANCE_MAP(
        'A', 1614,
        'B', 1615,
        'C', 1616,
        'D', 1617,
        'E', 1618,
        'F', 1619,
        'G', 1620,
        'H', 1621,
        'I', 1622,
        'L', 1623,
        'M', 1624,
        'N', 1625,
        'O', 1626,
        'P', 1627,
        'S', 1628,
        'T', 1629,
        'U', 1630,
        'W', 1631,
      );
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_SolarAngle);
      END_STATE();
    case 1447:
      if (lookahead == 'i') ADVANCE(1632);
      END_STATE();
    case 1448:
      if (lookahead == 's') ADVANCE(1633);
      END_STATE();
    case 1449:
      if (lookahead == 'o') ADVANCE(1634);
      END_STATE();
    case 1450:
      if (lookahead == 'm') ADVANCE(1635);
      END_STATE();
    case 1451:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 1452:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 1453:
      if (lookahead == 'e') ADVANCE(1637);
      END_STATE();
    case 1454:
      if (lookahead == 'F') ADVANCE(1638);
      END_STATE();
    case 1455:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 1456:
      if (lookahead == 'W') ADVANCE(1639);
      END_STATE();
    case 1457:
      if (lookahead == 'C') ADVANCE(1640);
      END_STATE();
    case 1458:
      if (lookahead == 'u') ADVANCE(1641);
      END_STATE();
    case 1459:
      if (lookahead == 'O') ADVANCE(1642);
      END_STATE();
    case 1460:
      if (lookahead == 'u') ADVANCE(1643);
      END_STATE();
    case 1461:
      if (lookahead == 'c') ADVANCE(1644);
      END_STATE();
    case 1462:
      if (lookahead == 'u') ADVANCE(1645);
      END_STATE();
    case 1463:
      if (lookahead == 'r') ADVANCE(1646);
      END_STATE();
    case 1464:
      if (lookahead == 's') ADVANCE(1647);
      END_STATE();
    case 1465:
      if (lookahead == 'e') ADVANCE(1648);
      END_STATE();
    case 1466:
      if (lookahead == 'm') ADVANCE(1649);
      END_STATE();
    case 1467:
      if (lookahead == 'e') ADVANCE(1650);
      END_STATE();
    case 1468:
      if (lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 1469:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1470:
      if (lookahead == 'e') ADVANCE(1652);
      END_STATE();
    case 1471:
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1472:
      if (lookahead == 'o') ADVANCE(1654);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_SoundAlert);
      END_STATE();
    case 1474:
      if (lookahead == 'n') ADVANCE(1655);
      END_STATE();
    case 1475:
      if (lookahead == 'e') ADVANCE(1656);
      END_STATE();
    case 1476:
      if (lookahead == 'i') ADVANCE(1657);
      END_STATE();
    case 1477:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1478:
      if (lookahead == 'n') ADVANCE(1659);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_TotalMoles);
      if (lookahead == 'I') ADVANCE(1660);
      if (lookahead == 'O') ADVANCE(1661);
      END_STATE();
    case 1480:
      if (lookahead == 'i') ADVANCE(1662);
      END_STATE();
    case 1481:
      if (lookahead == 'r') ADVANCE(1663);
      END_STATE();
    case 1482:
      if (lookahead == 'y') ADVANCE(1664);
      END_STATE();
    case 1483:
      if (lookahead == 'g') ADVANCE(1665);
      END_STATE();
    case 1484:
      if (lookahead == 'l') ADVANCE(1666);
      END_STATE();
    case 1485:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 1486:
      if (lookahead == 'r') ADVANCE(1667);
      END_STATE();
    case 1487:
      if (lookahead == 't') ADVANCE(1668);
      END_STATE();
    case 1488:
      if (lookahead == 'q') ADVANCE(1669);
      END_STATE();
    case 1489:
      if (lookahead == 'i') ADVANCE(1670);
      END_STATE();
    case 1490:
      if (lookahead == 'E') ADVANCE(1671);
      END_STATE();
    case 1491:
      if (lookahead == 'n') ADVANCE(1672);
      END_STATE();
    case 1492:
      if (lookahead == 'D') ADVANCE(1673);
      if (lookahead == 'N') ADVANCE(1674);
      if (lookahead == 'O') ADVANCE(1675);
      if (lookahead == 'P') ADVANCE(1676);
      END_STATE();
    case 1493:
      if (lookahead == 'r') ADVANCE(1677);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_AutoShutOff);
      END_STATE();
    case 1495:
      if (lookahead == 'a') ADVANCE(1678);
      END_STATE();
    case 1496:
      if (lookahead == 's') ADVANCE(1679);
      END_STATE();
    case 1497:
      if (lookahead == 'r') ADVANCE(1680);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_ChargeRatio);
      END_STATE();
    case 1499:
      if (lookahead == 'o') ADVANCE(1681);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_ClearMemory);
      END_STATE();
    case 1501:
      if (lookahead == 'G') ADVANCE(1682);
      END_STATE();
    case 1502:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1503:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1504:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 1505:
      if (lookahead == 'n') ADVANCE(1683);
      END_STATE();
    case 1506:
      if (lookahead == 'i') ADVANCE(1684);
      END_STATE();
    case 1507:
      if (lookahead == 'u') ADVANCE(1685);
      END_STATE();
    case 1508:
      if (lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 1509:
      if (lookahead == 'I') ADVANCE(1687);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_CurrentCode);
      END_STATE();
    case 1511:
      if (lookahead == 'a') ADVANCE(1688);
      END_STATE();
    case 1512:
      if (lookahead == 's') ADVANCE(1689);
      END_STATE();
    case 1513:
      if (lookahead == 'C') ADVANCE(1690);
      END_STATE();
    case 1514:
      if (lookahead == 'i') ADVANCE(1691);
      END_STATE();
    case 1515:
      if (lookahead == 'y') ADVANCE(1692);
      END_STATE();
    case 1516:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 1517:
      if (lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 1518:
      if (lookahead == 'e') ADVANCE(1695);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_EntityState);
      if (lookahead == '.') ADVANCE(1696);
      END_STATE();
    case 1520:
      if (lookahead == 'E') ADVANCE(1697);
      END_STATE();
    case 1521:
      if (lookahead == 'c') ADVANCE(1698);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_ExportCount);
      END_STATE();
    case 1523:
      if (lookahead == 'i') ADVANCE(1699);
      END_STATE();
    case 1524:
      if (lookahead == 'o') ADVANCE(1700);
      END_STATE();
    case 1525:
      if (lookahead == 'b') ADVANCE(1701);
      END_STATE();
    case 1526:
      if (lookahead == 'r') ADVANCE(1702);
      END_STATE();
    case 1527:
      if (lookahead == 'u') ADVANCE(1703);
      END_STATE();
    case 1528:
      if (lookahead == 'r') ADVANCE(1704);
      END_STATE();
    case 1529:
      if (lookahead == 'g') ADVANCE(1705);
      END_STATE();
    case 1530:
      if (lookahead == 'l') ADVANCE(1706);
      END_STATE();
    case 1531:
      if (lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 1532:
      if (lookahead == 'e') ADVANCE(1708);
      END_STATE();
    case 1533:
      if (lookahead == 'a') ADVANCE(1709);
      END_STATE();
    case 1534:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 1535:
      if (lookahead == 'a') ADVANCE(1711);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_ImportCount);
      END_STATE();
    case 1537:
      if (lookahead == 'i') ADVANCE(1712);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_Inclination);
      END_STATE();
    case 1539:
      if (lookahead == 'o') ADVANCE(1713);
      END_STATE();
    case 1540:
      if (lookahead == 'p') ADVANCE(1714);
      END_STATE();
    case 1541:
      if (lookahead == 'c') ADVANCE(1715);
      if (lookahead == 'i') ADVANCE(1716);
      if (lookahead == 'l') ADVANCE(1717);
      if (lookahead == 'p') ADVANCE(1718);
      if (lookahead == 'u') ADVANCE(1719);
      END_STATE();
    case 1542:
      if (lookahead == 'p') ADVANCE(1720);
      if (lookahead == 'u') ADVANCE(1721);
      END_STATE();
    case 1543:
      if (lookahead == 'e') ADVANCE(1722);
      if (lookahead == 'h') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(1724);
      if (lookahead == 'o') ADVANCE(1725);
      if (lookahead == 'u') ADVANCE(1726);
      END_STATE();
    case 1544:
      if (lookahead == 'e') ADVANCE(1727);
      if (lookahead == 'i') ADVANCE(1728);
      if (lookahead == 'r') ADVANCE(1729);
      END_STATE();
    case 1545:
      if (lookahead == 'c') ADVANCE(1730);
      if (lookahead == 'l') ADVANCE(1731);
      if (lookahead == 'n') ADVANCE(1732);
      if (lookahead == 'r') ADVANCE(1733);
      if (lookahead == 'x') ADVANCE(1734);
      END_STATE();
    case 1546:
      if (lookahead == 'i') ADVANCE(1735);
      if (lookahead == 'l') ADVANCE(1736);
      if (lookahead == 'o') ADVANCE(1737);
      if (lookahead == 'u') ADVANCE(1738);
      END_STATE();
    case 1547:
      if (lookahead == 'a') ADVANCE(1739);
      if (lookahead == 'o') ADVANCE(1740);
      END_STATE();
    case 1548:
      if (lookahead == 'd') ADVANCE(1741);
      if (lookahead == 'm') ADVANCE(1742);
      if (lookahead == 'n') ADVANCE(1743);
      END_STATE();
    case 1549:
      if (lookahead == 'i') ADVANCE(1744);
      if (lookahead == 'o') ADVANCE(1745);
      END_STATE();
    case 1550:
      if (lookahead == 'a') ADVANCE(1746);
      if (lookahead == 'i') ADVANCE(1747);
      if (lookahead == 'o') ADVANCE(1748);
      END_STATE();
    case 1551:
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'e') ADVANCE(1750);
      if (lookahead == 'o') ADVANCE(1751);
      END_STATE();
    case 1552:
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(1752);
      if (lookahead == 'r') ADVANCE(1753);
      if (lookahead == 'u') ADVANCE(1754);
      END_STATE();
    case 1553:
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead == 'l') ADVANCE(1756);
      if (lookahead == 'o') ADVANCE(1757);
      if (lookahead == 'r') ADVANCE(1758);
      END_STATE();
    case 1554:
      if (lookahead == 'u') ADVANCE(1759);
      END_STATE();
    case 1555:
      if (lookahead == 'a') ADVANCE(1760);
      if (lookahead == 'e') ADVANCE(1761);
      if (lookahead == 'i') ADVANCE(1762);
      if (lookahead == 'p') ADVANCE(1763);
      END_STATE();
    case 1556:
      if (lookahead == 'e') ADVANCE(1764);
      if (lookahead == 'i') ADVANCE(1765);
      if (lookahead == 'o') ADVANCE(1766);
      if (lookahead == 't') ADVANCE(1767);
      if (lookahead == 'u') ADVANCE(1768);
      END_STATE();
    case 1557:
      if (lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'e') ADVANCE(1770);
      if (lookahead == 'h') ADVANCE(1771);
      if (lookahead == 'i') ADVANCE(1772);
      if (lookahead == 'o') ADVANCE(1773);
      if (lookahead == 'r') ADVANCE(1774);
      END_STATE();
    case 1558:
      if (lookahead == 'e') ADVANCE(1775);
      if (lookahead == 'o') ADVANCE(1776);
      END_STATE();
    case 1559:
      if (lookahead == 'a') ADVANCE(1777);
      if (lookahead == 'e') ADVANCE(1778);
      if (lookahead == 'o') ADVANCE(1779);
      END_STATE();
    case 1560:
      if (lookahead == 'r') ADVANCE(1780);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_MaxQuantity);
      END_STATE();
    case 1562:
      if (lookahead == 'Q') ADVANCE(1781);
      if (lookahead == 'V') ADVANCE(1782);
      END_STATE();
    case 1563:
      if (lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1564:
      if (lookahead == 's') ADVANCE(1784);
      END_STATE();
    case 1565:
      if (lookahead == 'E') ADVANCE(1785);
      END_STATE();
    case 1566:
      if (lookahead == 'h') ADVANCE(1786);
      END_STATE();
    case 1567:
      if (lookahead == 'T') ADVANCE(1787);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_OrbitPeriod);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_Orientation);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_PassedMoles);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_PowerActual);
      END_STATE();
    case 1572:
      if (lookahead == 't') ADVANCE(1788);
      END_STATE();
    case 1573:
      if (lookahead == 'h') ADVANCE(1789);
      END_STATE();
    case 1574:
      if (lookahead == 'i') ADVANCE(1790);
      END_STATE();
    case 1575:
      if (lookahead == 'd') ADVANCE(1791);
      END_STATE();
    case 1576:
      if (lookahead == 'i') ADVANCE(1792);
      END_STATE();
    case 1577:
      if (lookahead == 'e') ADVANCE(1793);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_PressureAir);
      END_STATE();
    case 1579:
      if (lookahead == 'i') ADVANCE(1794);
      END_STATE();
    case 1580:
      if (lookahead == 'e') ADVANCE(1795);
      END_STATE();
    case 1581:
      if (lookahead == 'u') ADVANCE(1796);
      END_STATE();
    case 1582:
      if (lookahead == 'e') ADVANCE(1797);
      END_STATE();
    case 1583:
      if (lookahead == 'p') ADVANCE(1798);
      END_STATE();
    case 1584:
      if (lookahead == 't') ADVANCE(1799);
      END_STATE();
    case 1585:
      if (lookahead == 't') ADVANCE(1800);
      END_STATE();
    case 1586:
      if (lookahead == 'D') ADVANCE(1801);
      END_STATE();
    case 1587:
      if (lookahead == 'e') ADVANCE(1802);
      END_STATE();
    case 1588:
      if (lookahead == 'C') ADVANCE(1803);
      if (lookahead == 'H') ADVANCE(1804);
      if (lookahead == 'N') ADVANCE(1805);
      if (lookahead == 'O') ADVANCE(1806);
      if (lookahead == 'P') ADVANCE(1807);
      if (lookahead == 'V') ADVANCE(1808);
      END_STATE();
    case 1589:
      if (lookahead == 'e') ADVANCE(1809);
      END_STATE();
    case 1590:
      if (lookahead == 's') ADVANCE(1810);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_RatioOxygen);
      if (lookahead == 'I') ADVANCE(1811);
      if (lookahead == 'O') ADVANCE(1812);
      END_STATE();
    case 1592:
      if (lookahead == 'a') ADVANCE(1813);
      if (lookahead == 'e') ADVANCE(1814);
      END_STATE();
    case 1593:
      if (lookahead == 'n') ADVANCE(1815);
      END_STATE();
    case 1594:
      if (lookahead == 'u') ADVANCE(1816);
      END_STATE();
    case 1595:
      if (lookahead == 'l') ADVANCE(1817);
      END_STATE();
    case 1596:
      if (lookahead == 'n') ADVANCE(1818);
      END_STATE();
    case 1597:
      if (lookahead == 'u') ADVANCE(1819);
      END_STATE();
    case 1598:
      if (lookahead == 't') ADVANCE(1820);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_ReferenceId);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_RequestHash);
      END_STATE();
    case 1601:
      if (lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 1602:
      if (lookahead == 'o') ADVANCE(1822);
      END_STATE();
    case 1603:
      if (lookahead == 'o') ADVANCE(1823);
      END_STATE();
    case 1604:
      if (lookahead == 'o') ADVANCE(1824);
      END_STATE();
    case 1605:
      if (lookahead == 'o') ADVANCE(1825);
      END_STATE();
    case 1606:
      if (lookahead == 'a') ADVANCE(1826);
      END_STATE();
    case 1607:
      if (lookahead == 'o') ADVANCE(1827);
      END_STATE();
    case 1608:
      if (lookahead == 't') ADVANCE(1828);
      END_STATE();
    case 1609:
      if (lookahead == 'n') ADVANCE(1829);
      END_STATE();
    case 1610:
      if (lookahead == 'i') ADVANCE(1830);
      END_STATE();
    case 1611:
      if (lookahead == 't') ADVANCE(1831);
      END_STATE();
    case 1612:
      if (lookahead == 'u') ADVANCE(1832);
      END_STATE();
    case 1613:
      if (lookahead == 'g') ADVANCE(1833);
      END_STATE();
    case 1614:
      if (lookahead == 'c') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1835);
      END_STATE();
    case 1615:
      if (lookahead == 'a') ADVANCE(1836);
      if (lookahead == 'e') ADVANCE(1837);
      if (lookahead == 'l') ADVANCE(1838);
      if (lookahead == 'o') ADVANCE(1839);
      END_STATE();
    case 1616:
      if (lookahead == 'a') ADVANCE(1840);
      if (lookahead == 'i') ADVANCE(1841);
      if (lookahead == 'r') ADVANCE(1842);
      END_STATE();
    case 1617:
      if (lookahead == 'a') ADVANCE(1843);
      if (lookahead == 'i') ADVANCE(1844);
      if (lookahead == 'r') ADVANCE(1845);
      END_STATE();
    case 1618:
      if (lookahead == 'g') ADVANCE(1846);
      if (lookahead == 'n') ADVANCE(1847);
      END_STATE();
    case 1619:
      if (lookahead == 'l') ADVANCE(1848);
      END_STATE();
    case 1620:
      if (lookahead == 'a') ADVANCE(1849);
      if (lookahead == 'l') ADVANCE(1850);
      END_STATE();
    case 1621:
      if (lookahead == 'e') ADVANCE(1851);
      END_STATE();
    case 1622:
      if (lookahead == 'n') ADVANCE(1852);
      END_STATE();
    case 1623:
      if (lookahead == 'i') ADVANCE(1853);
      END_STATE();
    case 1624:
      if (lookahead == 'a') ADVANCE(1854);
      if (lookahead == 'o') ADVANCE(1855);
      END_STATE();
    case 1625:
      if (lookahead == 'o') ADVANCE(1856);
      END_STATE();
    case 1626:
      if (lookahead == 'r') ADVANCE(1857);
      END_STATE();
    case 1627:
      if (lookahead == 'l') ADVANCE(1858);
      if (lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1628:
      if (lookahead == 'c') ADVANCE(1860);
      if (lookahead == 'e') ADVANCE(1861);
      if (lookahead == 'o') ADVANCE(1862);
      if (lookahead == 'u') ADVANCE(1863);
      END_STATE();
    case 1629:
      if (lookahead == 'o') ADVANCE(1864);
      END_STATE();
    case 1630:
      if (lookahead == 'n') ADVANCE(1865);
      END_STATE();
    case 1631:
      if (lookahead == 'r') ADVANCE(1866);
      END_STATE();
    case 1632:
      if (lookahead == 'a') ADVANCE(1867);
      END_STATE();
    case 1633:
      if (lookahead == 's') ADVANCE(1868);
      END_STATE();
    case 1634:
      if (lookahead == 'c') ADVANCE(1869);
      END_STATE();
    case 1635:
      if (lookahead == '1') ADVANCE(1870);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 1636:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 1637:
      if (lookahead == 's') ADVANCE(1871);
      END_STATE();
    case 1638:
      if (lookahead == 'i') ADVANCE(1872);
      END_STATE();
    case 1639:
      if (lookahead == 'h') ADVANCE(1873);
      END_STATE();
    case 1640:
      if (lookahead == 'a') ADVANCE(1874);
      END_STATE();
    case 1641:
      if (lookahead == 'd') ADVANCE(1875);
      END_STATE();
    case 1642:
      if (lookahead == 'f') ADVANCE(1876);
      END_STATE();
    case 1643:
      if (lookahead == 'n') ADVANCE(1877);
      END_STATE();
    case 1644:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(428);
      END_STATE();
    case 1645:
      if (lookahead == 't') ADVANCE(1878);
      END_STATE();
    case 1646:
      if (lookahead == 'L') ADVANCE(1879);
      END_STATE();
    case 1647:
      if (lookahead == 'u') ADVANCE(1880);
      END_STATE();
    case 1648:
      if (lookahead == 't') ADVANCE(1881);
      END_STATE();
    case 1649:
      if (lookahead == 'I') ADVANCE(1882);
      END_STATE();
    case 1650:
      if (lookahead == 'm') ADVANCE(1883);
      END_STATE();
    case 1651:
      if (lookahead == 'r') ADVANCE(1884);
      END_STATE();
    case 1652:
      if (lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 1653:
      if (lookahead == 'n') ADVANCE(1886);
      END_STATE();
    case 1654:
      if (lookahead == 'm') ADVANCE(1887);
      END_STATE();
    case 1655:
      if (lookahead == 'd') ADVANCE(1888);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_Temperature);
      if (lookahead == 'D') ADVANCE(1889);
      if (lookahead == 'E') ADVANCE(1890);
      if (lookahead == 'I') ADVANCE(1891);
      if (lookahead == 'O') ADVANCE(1892);
      if (lookahead == 'S') ADVANCE(1893);
      END_STATE();
    case 1657:
      if (lookahead == 'g') ADVANCE(1894);
      END_STATE();
    case 1658:
      if (lookahead == 'n') ADVANCE(1895);
      END_STATE();
    case 1659:
      if (lookahead == 't') ADVANCE(1896);
      END_STATE();
    case 1660:
      if (lookahead == 'n') ADVANCE(1897);
      END_STATE();
    case 1661:
      if (lookahead == 'u') ADVANCE(1898);
      END_STATE();
    case 1662:
      if (lookahead == 't') ADVANCE(1899);
      END_STATE();
    case 1663:
      if (lookahead == 'M') ADVANCE(1900);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_TrueAnomaly);
      END_STATE();
    case 1665:
      if (lookahead == 'n') ADVANCE(1901);
      END_STATE();
    case 1666:
      if (lookahead == 'a') ADVANCE(1902);
      END_STATE();
    case 1667:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 1668:
      if (lookahead == 'i') ADVANCE(1903);
      END_STATE();
    case 1669:
      if (lookahead == 'u') ADVANCE(1904);
      END_STATE();
    case 1670:
      if (lookahead == 'n') ADVANCE(1905);
      END_STATE();
    case 1671:
      if (lookahead == 'f') ADVANCE(1906);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_Acceleration);
      END_STATE();
    case 1673:
      if (lookahead == 'r') ADVANCE(1907);
      END_STATE();
    case 1674:
      if (lookahead == 'o') ADVANCE(1908);
      END_STATE();
    case 1675:
      if (lookahead == 'f') ADVANCE(1909);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(1910);
      END_STATE();
    case 1677:
      if (lookahead == 'o') ADVANCE(1911);
      END_STATE();
    case 1678:
      if (lookahead == 'i') ADVANCE(1912);
      END_STATE();
    case 1679:
      if (lookahead == 'h') ADVANCE(1913);
      END_STATE();
    case 1680:
      if (lookahead == 'e') ADVANCE(1914);
      END_STATE();
    case 1681:
      if (lookahead == 'i') ADVANCE(1915);
      END_STATE();
    case 1682:
      if (lookahead == 'o') ADVANCE(1916);
      END_STATE();
    case 1683:
      if (lookahead == 'p') ADVANCE(1917);
      END_STATE();
    case 1684:
      if (lookahead == 'm') ADVANCE(1918);
      END_STATE();
    case 1685:
      if (lookahead == 't') ADVANCE(1919);
      END_STATE();
    case 1686:
      if (lookahead == 't') ADVANCE(1920);
      END_STATE();
    case 1687:
      if (lookahead == 'd') ADVANCE(1921);
      END_STATE();
    case 1688:
      if (lookahead == 'r') ADVANCE(1922);
      END_STATE();
    case 1689:
      if (lookahead == 'o') ADVANCE(1923);
      END_STATE();
    case 1690:
      if (lookahead == 'o') ADVANCE(1924);
      END_STATE();
    case 1691:
      if (lookahead == 'o') ADVANCE(1925);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_Eccentricity);
      END_STATE();
    case 1693:
      if (lookahead == 'l') ADVANCE(1926);
      END_STATE();
    case 1694:
      if (lookahead == '.') ADVANCE(1927);
      END_STATE();
    case 1695:
      if (lookahead == 'd') ADVANCE(1928);
      END_STATE();
    case 1696:
      if (lookahead == 'A') ADVANCE(1929);
      if (lookahead == 'D') ADVANCE(1930);
      if (lookahead == 'U') ADVANCE(1931);
      END_STATE();
    case 1697:
      if (lookahead == 'f') ADVANCE(1932);
      END_STATE();
    case 1698:
      if (lookahead == 'i') ADVANCE(1933);
      END_STATE();
    case 1699:
      if (lookahead == 't') ADVANCE(1934);
      END_STATE();
    case 1700:
      if (lookahead == 'l') ADVANCE(1935);
      END_STATE();
    case 1701:
      if (lookahead == 'o') ADVANCE(1936);
      END_STATE();
    case 1702:
      if (lookahead == 'o') ADVANCE(1937);
      END_STATE();
    case 1703:
      if (lookahead == 'i') ADVANCE(1938);
      END_STATE();
    case 1704:
      if (lookahead == 'o') ADVANCE(1939);
      END_STATE();
    case 1705:
      if (lookahead == 'e') ADVANCE(1940);
      END_STATE();
    case 1706:
      if (lookahead == 'u') ADVANCE(1941);
      END_STATE();
    case 1707:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 1708:
      if (lookahead == 'f') ADVANCE(1942);
      END_STATE();
    case 1709:
      if (lookahead == 't') ADVANCE(1943);
      END_STATE();
    case 1710:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 1711:
      if (lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 1712:
      if (lookahead == 't') ADVANCE(1945);
      END_STATE();
    case 1713:
      if (lookahead == 'n') ADVANCE(1946);
      END_STATE();
    case 1714:
      if (lookahead == 'e') ADVANCE(1947);
      END_STATE();
    case 1715:
      if (lookahead == 'c') ADVANCE(1948);
      if (lookahead == 't') ADVANCE(1949);
      END_STATE();
    case 1716:
      if (lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 1717:
      if (lookahead == 'i') ADVANCE(1951);
      END_STATE();
    case 1718:
      if (lookahead == 'e') ADVANCE(1952);
      END_STATE();
    case 1719:
      if (lookahead == 't') ADVANCE(1953);
      END_STATE();
    case 1720:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 1721:
      if (lookahead == 'r') ADVANCE(1954);
      END_STATE();
    case 1722:
      if (lookahead == 'l') ADVANCE(1955);
      END_STATE();
    case 1723:
      if (lookahead == 'a') ADVANCE(1956);
      END_STATE();
    case 1724:
      if (lookahead == 'e') ADVANCE(1957);
      END_STATE();
    case 1725:
      if (lookahead == 'l') ADVANCE(1958);
      if (lookahead == 'm') ADVANCE(1959);
      if (lookahead == 'n') ADVANCE(1960);
      END_STATE();
    case 1726:
      if (lookahead == 'r') ADVANCE(1961);
      END_STATE();
    case 1727:
      if (lookahead == 'n') ADVANCE(1962);
      if (lookahead == 's') ADVANCE(1963);
      END_STATE();
    case 1728:
      if (lookahead == 's') ADVANCE(1964);
      END_STATE();
    case 1729:
      if (lookahead == 'i') ADVANCE(1965);
      if (lookahead == 'y') ADVANCE(1966);
      END_STATE();
    case 1730:
      if (lookahead == 'c') ADVANCE(1967);
      END_STATE();
    case 1731:
      if (lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 1732:
      if (lookahead == 't') ADVANCE(1969);
      if (lookahead == 'v') ADVANCE(1970);
      END_STATE();
    case 1733:
      if (lookahead == 'r') ADVANCE(1971);
      END_STATE();
    case 1734:
      if (lookahead == 'h') ADVANCE(1972);
      if (lookahead == 'p') ADVANCE(1973);
      END_STATE();
    case 1735:
      if (lookahead == 'l') ADVANCE(1974);
      END_STATE();
    case 1736:
      if (lookahead == 'i') ADVANCE(1975);
      if (lookahead == 'u') ADVANCE(1976);
      END_STATE();
    case 1737:
      if (lookahead == 'r') ADVANCE(1977);
      END_STATE();
    case 1738:
      if (lookahead == 'e') ADVANCE(1978);
      END_STATE();
    case 1739:
      if (lookahead == 'r') ADVANCE(1979);
      END_STATE();
    case 1740:
      if (lookahead == 'r') ADVANCE(1980);
      END_STATE();
    case 1741:
      if (lookahead == 'l') ADVANCE(1981);
      END_STATE();
    case 1742:
      if (lookahead == 'p') ADVANCE(1982);
      END_STATE();
    case 1743:
      if (lookahead == 'c') ADVANCE(1983);
      if (lookahead == 'd') ADVANCE(1984);
      if (lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 1744:
      if (lookahead == 'n') ADVANCE(1986);
      END_STATE();
    case 1745:
      if (lookahead == 'c') ADVANCE(1987);
      END_STATE();
    case 1746:
      if (lookahead == 'n') ADVANCE(1988);
      if (lookahead == 's') ADVANCE(1989);
      if (lookahead == 'x') ADVANCE(1990);
      END_STATE();
    case 1747:
      if (lookahead == 'n') ADVANCE(1991);
      END_STATE();
    case 1748:
      if (lookahead == 'd') ADVANCE(1992);
      END_STATE();
    case 1749:
      if (lookahead == 'v') ADVANCE(1993);
      END_STATE();
    case 1750:
      if (lookahead == 'x') ADVANCE(1994);
      END_STATE();
    case 1751:
      if (lookahead == 'n') ADVANCE(1995);
      END_STATE();
    case 1752:
      if (lookahead == 'e') ADVANCE(1996);
      END_STATE();
    case 1753:
      if (lookahead == 'b') ADVANCE(1997);
      if (lookahead == 'i') ADVANCE(1998);
      END_STATE();
    case 1754:
      if (lookahead == 't') ADVANCE(1999);
      END_STATE();
    case 1755:
      if (lookahead == 's') ADVANCE(2000);
      END_STATE();
    case 1756:
      if (lookahead == 'a') ADVANCE(2001);
      END_STATE();
    case 1757:
      if (lookahead == 's') ADVANCE(2002);
      if (lookahead == 'w') ADVANCE(2003);
      END_STATE();
    case 1758:
      if (lookahead == 'e') ADVANCE(2004);
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 1759:
      if (lookahead == 'a') ADVANCE(2006);
      END_STATE();
    case 1760:
      if (lookahead == 't') ADVANCE(2007);
      END_STATE();
    case 1761:
      if (lookahead == 'E') ADVANCE(2008);
      if (lookahead == 'a') ADVANCE(2009);
      if (lookahead == 'c') ADVANCE(2010);
      if (lookahead == 'f') ADVANCE(2011);
      if (lookahead == 'q') ADVANCE(2012);
      if (lookahead == 't') ADVANCE(2013);
      END_STATE();
    case 1762:
      if (lookahead == 'c') ADVANCE(2014);
      END_STATE();
    case 1763:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 1764:
      if (lookahead == 'm') ADVANCE(2015);
      if (lookahead == 't') ADVANCE(2016);
      END_STATE();
    case 1765:
      if (lookahead == 'g') ADVANCE(2017);
      if (lookahead == 't') ADVANCE(2018);
      if (lookahead == 'z') ADVANCE(2019);
      END_STATE();
    case 1766:
      if (lookahead == 'l') ADVANCE(2020);
      if (lookahead == 'u') ADVANCE(2021);
      END_STATE();
    case 1767:
      if (lookahead == 'r') ADVANCE(2022);
      END_STATE();
    case 1768:
      if (lookahead == 'r') ADVANCE(2023);
      END_STATE();
    case 1769:
      if (lookahead == 'r') ADVANCE(2024);
      END_STATE();
    case 1770:
      if (lookahead == 'm') ADVANCE(2025);
      END_STATE();
    case 1771:
      if (lookahead == 'r') ADVANCE(2026);
      END_STATE();
    case 1772:
      if (lookahead == 'm') ADVANCE(2027);
      END_STATE();
    case 1773:
      if (lookahead == 't') ADVANCE(2028);
      END_STATE();
    case 1774:
      if (lookahead == 'u') ADVANCE(2029);
      END_STATE();
    case 1775:
      if (lookahead == 'l') ADVANCE(2030);
      if (lookahead == 'r') ADVANCE(2031);
      END_STATE();
    case 1776:
      if (lookahead == 'l') ADVANCE(2032);
      END_STATE();
    case 1777:
      if (lookahead == 't') ADVANCE(2033);
      END_STATE();
    case 1778:
      if (lookahead == 'i') ADVANCE(2034);
      END_STATE();
    case 1779:
      if (lookahead == 'r') ADVANCE(2035);
      END_STATE();
    case 1780:
      if (lookahead == 'c') ADVANCE(2036);
      END_STATE();
    case 1781:
      if (lookahead == 'u') ADVANCE(2037);
      END_STATE();
    case 1782:
      if (lookahead == 'i') ADVANCE(2038);
      END_STATE();
    case 1783:
      if (lookahead == 'y') ADVANCE(2039);
      END_STATE();
    case 1784:
      if (lookahead == 'T') ADVANCE(2040);
      END_STATE();
    case 1785:
      if (lookahead == 'v') ADVANCE(2041);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_OccupantHash);
      END_STATE();
    case 1787:
      if (lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1788:
      if (lookahead == 'i') ADVANCE(2043);
      END_STATE();
    case 1789:
      if (lookahead == 'a') ADVANCE(2044);
      END_STATE();
    case 1790:
      if (lookahead == 's') ADVANCE(2045);
      END_STATE();
    case 1791:
      if (lookahead == 'l') ADVANCE(2046);
      END_STATE();
    case 1792:
      if (lookahead == 'a') ADVANCE(2047);
      END_STATE();
    case 1793:
      if (lookahead == 'd') ADVANCE(2048);
      END_STATE();
    case 1794:
      if (lookahead == 'c') ADVANCE(2049);
      END_STATE();
    case 1795:
      if (lookahead == 'r') ADVANCE(2050);
      END_STATE();
    case 1796:
      if (lookahead == 't') ADVANCE(2051);
      END_STATE();
    case 1797:
      if (lookahead == 'r') ADVANCE(2052);
      END_STATE();
    case 1798:
      if (lookahead == 'u') ADVANCE(2053);
      END_STATE();
    case 1799:
      if (lookahead == 'i') ADVANCE(2054);
      END_STATE();
    case 1800:
      if (lookahead == 'e') ADVANCE(2055);
      END_STATE();
    case 1801:
      if (lookahead == 'i') ADVANCE(2056);
      END_STATE();
    case 1802:
      if (lookahead == 'n') ADVANCE(2057);
      END_STATE();
    case 1803:
      if (lookahead == 'a') ADVANCE(2058);
      END_STATE();
    case 1804:
      if (lookahead == 'y') ADVANCE(2059);
      END_STATE();
    case 1805:
      if (lookahead == 'i') ADVANCE(2060);
      END_STATE();
    case 1806:
      if (lookahead == 'x') ADVANCE(2061);
      END_STATE();
    case 1807:
      if (lookahead == 'o') ADVANCE(2062);
      END_STATE();
    case 1808:
      if (lookahead == 'o') ADVANCE(2063);
      END_STATE();
    case 1809:
      if (lookahead == 'n') ADVANCE(2064);
      END_STATE();
    case 1810:
      if (lookahead == 'O') ADVANCE(2065);
      END_STATE();
    case 1811:
      if (lookahead == 'n') ADVANCE(2066);
      END_STATE();
    case 1812:
      if (lookahead == 'u') ADVANCE(2067);
      END_STATE();
    case 1813:
      if (lookahead == 'n') ADVANCE(2068);
      END_STATE();
    case 1814:
      if (lookahead == 'd') ADVANCE(2069);
      END_STATE();
    case 1815:
      if (lookahead == 'p') ADVANCE(2070);
      END_STATE();
    case 1816:
      if (lookahead == 't') ADVANCE(2071);
      END_STATE();
    case 1817:
      if (lookahead == 'e') ADVANCE(2072);
      END_STATE();
    case 1818:
      if (lookahead == 'p') ADVANCE(2073);
      END_STATE();
    case 1819:
      if (lookahead == 't') ADVANCE(2074);
      END_STATE();
    case 1820:
      if (lookahead == 'u') ADVANCE(2075);
      END_STATE();
    case 1821:
      if (lookahead == 'r') ADVANCE(2076);
      END_STATE();
    case 1822:
      if (lookahead == 's') ADVANCE(2077);
      END_STATE();
    case 1823:
      if (lookahead == 'l') ADVANCE(2078);
      END_STATE();
    case 1824:
      if (lookahead == 'v') ADVANCE(2079);
      END_STATE();
    case 1825:
      if (lookahead == 'n') ADVANCE(2080);
      END_STATE();
    case 1826:
      if (lookahead == 't') ADVANCE(2081);
      END_STATE();
    case 1827:
      if (lookahead == 'a') ADVANCE(2082);
      END_STATE();
    case 1828:
      if (lookahead == 'o') ADVANCE(2083);
      END_STATE();
    case 1829:
      if (lookahead == 'l') ADVANCE(2084);
      END_STATE();
    case 1830:
      if (lookahead == 's') ADVANCE(2085);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_SettingInput);
      END_STATE();
    case 1832:
      if (lookahead == 't') ADVANCE(2086);
      END_STATE();
    case 1833:
      if (lookahead == 't') ADVANCE(2087);
      END_STATE();
    case 1834:
      if (lookahead == 'c') ADVANCE(2088);
      END_STATE();
    case 1835:
      if (lookahead == 'p') ADVANCE(2089);
      END_STATE();
    case 1836:
      if (lookahead == 'c') ADVANCE(2090);
      if (lookahead == 't') ADVANCE(2091);
      END_STATE();
    case 1837:
      if (lookahead == 'l') ADVANCE(2092);
      END_STATE();
    case 1838:
      if (lookahead == 'o') ADVANCE(2093);
      END_STATE();
    case 1839:
      if (lookahead == 't') ADVANCE(2094);
      END_STATE();
    case 1840:
      if (lookahead == 'r') ADVANCE(2095);
      END_STATE();
    case 1841:
      if (lookahead == 'r') ADVANCE(2096);
      END_STATE();
    case 1842:
      if (lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 1843:
      if (lookahead == 't') ADVANCE(2098);
      END_STATE();
    case 1844:
      if (lookahead == 'r') ADVANCE(2099);
      END_STATE();
    case 1845:
      if (lookahead == 'i') ADVANCE(2100);
      END_STATE();
    case 1846:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 1847:
      if (lookahead == 't') ADVANCE(2101);
      END_STATE();
    case 1848:
      if (lookahead == 'a') ADVANCE(2102);
      END_STATE();
    case 1849:
      if (lookahead == 's') ADVANCE(2103);
      END_STATE();
    case 1850:
      if (lookahead == 'a') ADVANCE(2104);
      END_STATE();
    case 1851:
      if (lookahead == 'l') ADVANCE(2105);
      END_STATE();
    case 1852:
      if (lookahead == 'g') ADVANCE(2106);
      END_STATE();
    case 1853:
      if (lookahead == 'q') ADVANCE(2107);
      END_STATE();
    case 1854:
      if (lookahead == 'g') ADVANCE(2108);
      END_STATE();
    case 1855:
      if (lookahead == 't') ADVANCE(2109);
      END_STATE();
    case 1856:
      if (lookahead == 'n') ADVANCE(2110);
      END_STATE();
    case 1857:
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'g') ADVANCE(2111);
      END_STATE();
    case 1858:
      if (lookahead == 'a') ADVANCE(2112);
      END_STATE();
    case 1859:
      if (lookahead == 'o') ADVANCE(2113);
      END_STATE();
    case 1860:
      if (lookahead == 'a') ADVANCE(2114);
      END_STATE();
    case 1861:
      if (lookahead == 'n') ADVANCE(2115);
      END_STATE();
    case 1862:
      if (lookahead == 'u') ADVANCE(2116);
      END_STATE();
    case 1863:
      if (lookahead == 'i') ADVANCE(2117);
      END_STATE();
    case 1864:
      if (lookahead == 'o') ADVANCE(2118);
      if (lookahead == 'r') ADVANCE(2119);
      END_STATE();
    case 1865:
      if (lookahead == 'i') ADVANCE(2120);
      END_STATE();
    case 1866:
      if (lookahead == 'e') ADVANCE(2121);
      END_STATE();
    case 1867:
      if (lookahead == 'n') ADVANCE(2122);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_SortingClass);
      if (lookahead == '.') ADVANCE(2123);
      END_STATE();
    case 1869:
      if (lookahead == 'k') ADVANCE(2124);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_enum);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(428);
      END_STATE();
    case 1871:
      if (lookahead == 's') ADVANCE(2125);
      END_STATE();
    case 1872:
      if (lookahead == 'r') ADVANCE(2126);
      END_STATE();
    case 1873:
      if (lookahead == 'o') ADVANCE(2127);
      END_STATE();
    case 1874:
      if (lookahead == 'r') ADVANCE(2128);
      END_STATE();
    case 1875:
      if (lookahead == 'e') ADVANCE(2129);
      END_STATE();
    case 1876:
      if (lookahead == 'f') ADVANCE(428);
      END_STATE();
    case 1877:
      if (lookahead == 'c') ADVANCE(2130);
      END_STATE();
    case 1878:
      if (lookahead == 'a') ADVANCE(2131);
      END_STATE();
    case 1879:
      if (lookahead == 'o') ADVANCE(2132);
      END_STATE();
    case 1880:
      if (lookahead == 'r') ADVANCE(2133);
      END_STATE();
    case 1881:
      if (lookahead == 'L') ADVANCE(2134);
      END_STATE();
    case 1882:
      if (lookahead == 'n') ADVANCE(2135);
      END_STATE();
    case 1883:
      if (lookahead == 'F') ADVANCE(2136);
      END_STATE();
    case 1884:
      if (lookahead == 'a') ADVANCE(2137);
      END_STATE();
    case 1885:
      if (lookahead == 'I') ADVANCE(2138);
      if (lookahead == 'L') ADVANCE(2139);
      END_STATE();
    case 1886:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 1887:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1888:
      if (lookahead == 'e') ADVANCE(2140);
      END_STATE();
    case 1889:
      if (lookahead == 'i') ADVANCE(2141);
      END_STATE();
    case 1890:
      if (lookahead == 'x') ADVANCE(2142);
      END_STATE();
    case 1891:
      if (lookahead == 'n') ADVANCE(2143);
      END_STATE();
    case 1892:
      if (lookahead == 'u') ADVANCE(2144);
      END_STATE();
    case 1893:
      if (lookahead == 'e') ADVANCE(2145);
      END_STATE();
    case 1894:
      if (lookahead == 'h') ADVANCE(2146);
      END_STATE();
    case 1895:
      if (lookahead == 'a') ADVANCE(2147);
      END_STATE();
    case 1896:
      if (lookahead == 's') ADVANCE(2148);
      END_STATE();
    case 1897:
      if (lookahead == 'p') ADVANCE(2149);
      END_STATE();
    case 1898:
      if (lookahead == 't') ADVANCE(2150);
      END_STATE();
    case 1899:
      if (lookahead == 'y') ADVANCE(2151);
      END_STATE();
    case 1900:
      if (lookahead == 'o') ADVANCE(2152);
      END_STATE();
    case 1901:
      if (lookahead == 'i') ADVANCE(2153);
      END_STATE();
    case 1902:
      if (lookahead == 't') ADVANCE(2154);
      END_STATE();
    case 1903:
      if (lookahead == 'o') ADVANCE(2155);
      END_STATE();
    case 1904:
      if (lookahead == 'i') ADVANCE(2156);
      END_STATE();
    case 1905:
      if (lookahead == 'g') ADVANCE(2157);
      END_STATE();
    case 1906:
      if (lookahead == 'f') ADVANCE(2158);
      END_STATE();
    case 1907:
      if (lookahead == 'a') ADVANCE(2159);
      END_STATE();
    case 1908:
      if (lookahead == 'n') ADVANCE(2160);
      END_STATE();
    case 1909:
      if (lookahead == 'f') ADVANCE(2161);
      END_STATE();
    case 1910:
      if (lookahead == 'e') ADVANCE(2162);
      END_STATE();
    case 1911:
      if (lookahead == 'r') ADVANCE(2163);
      END_STATE();
    case 1912:
      if (lookahead == 'n') ADVANCE(2164);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_CelestialHash);
      END_STATE();
    case 1914:
      if (lookahead == 'n') ADVANCE(2165);
      END_STATE();
    case 1915:
      if (lookahead == 'n') ADVANCE(2166);
      END_STATE();
    case 1916:
      if (lookahead == 'o') ADVANCE(2167);
      END_STATE();
    case 1917:
      if (lookahead == 'u') ADVANCE(2168);
      END_STATE();
    case 1918:
      if (lookahead == 'i') ADVANCE(2169);
      END_STATE();
    case 1919:
      if (lookahead == 'p') ADVANCE(2170);
      END_STATE();
    case 1920:
      if (lookahead == 'i') ADVANCE(2171);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_ContactTypeId);
      END_STATE();
    case 1922:
      if (lookahead == 'c') ADVANCE(2172);
      END_STATE();
    case 1923:
      if (lookahead == 'r') ADVANCE(2173);
      END_STATE();
    case 1924:
      if (lookahead == 'd') ADVANCE(2174);
      END_STATE();
    case 1925:
      if (lookahead == 'n') ADVANCE(2175);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_ElevatorLevel);
      END_STATE();
    case 1927:
      if (lookahead == 'D') ADVANCE(2176);
      if (lookahead == 'S') ADVANCE(2177);
      if (lookahead == 'U') ADVANCE(2178);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_ElevatorSpeed);
      END_STATE();
    case 1929:
      if (lookahead == 'l') ADVANCE(2179);
      END_STATE();
    case 1930:
      if (lookahead == 'e') ADVANCE(2180);
      END_STATE();
    case 1931:
      if (lookahead == 'n') ADVANCE(2181);
      END_STATE();
    case 1932:
      if (lookahead == 'f') ADVANCE(2182);
      END_STATE();
    case 1933:
      if (lookahead == 't') ADVANCE(2183);
      END_STATE();
    case 1934:
      if (lookahead == 'y') ADVANCE(2184);
      END_STATE();
    case 1935:
      if (lookahead == 'R') ADVANCE(2185);
      END_STATE();
    case 1936:
      if (lookahead == 'n') ADVANCE(2186);
      END_STATE();
    case 1937:
      if (lookahead == 'g') ADVANCE(2187);
      END_STATE();
    case 1938:
      if (lookahead == 'd') ADVANCE(2188);
      END_STATE();
    case 1939:
      if (lookahead == 'g') ADVANCE(2189);
      if (lookahead == 'u') ADVANCE(2190);
      END_STATE();
    case 1940:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 1941:
      if (lookahead == 't') ADVANCE(2191);
      END_STATE();
    case 1942:
      if (lookahead == 'i') ADVANCE(2192);
      END_STATE();
    case 1943:
      if (lookahead == 'i') ADVANCE(2193);
      END_STATE();
    case 1944:
      if (lookahead == 'i') ADVANCE(2194);
      END_STATE();
    case 1945:
      if (lookahead == 'y') ADVANCE(2195);
      END_STATE();
    case 1946:
      if (lookahead == 'P') ADVANCE(2196);
      END_STATE();
    case 1947:
      if (lookahead == '.') ADVANCE(2197);
      END_STATE();
    case 1948:
      if (lookahead == 'e') ADVANCE(2198);
      END_STATE();
    case 1949:
      if (lookahead == 'i') ADVANCE(2199);
      END_STATE();
    case 1950:
      if (lookahead == 'R') ADVANCE(2200);
      END_STATE();
    case 1951:
      if (lookahead == 'g') ADVANCE(2201);
      END_STATE();
    case 1952:
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 1953:
      if (lookahead == 'o') ADVANCE(2202);
      END_STATE();
    case 1954:
      if (lookahead == 'n') ADVANCE(2203);
      END_STATE();
    case 1955:
      if (lookahead == 'e') ADVANCE(2204);
      END_STATE();
    case 1956:
      if (lookahead == 'n') ADVANCE(2205);
      if (lookahead == 'r') ADVANCE(2206);
      END_STATE();
    case 1957:
      if (lookahead == 'a') ADVANCE(2207);
      END_STATE();
    case 1958:
      if (lookahead == 'l') ADVANCE(2208);
      if (lookahead == 'o') ADVANCE(2209);
      END_STATE();
    case 1959:
      if (lookahead == 'b') ADVANCE(2210);
      if (lookahead == 'p') ADVANCE(2211);
      END_STATE();
    case 1960:
      if (lookahead == 't') ADVANCE(2212);
      END_STATE();
    case 1961:
      if (lookahead == 'r') ADVANCE(2213);
      END_STATE();
    case 1962:
      if (lookahead == 's') ADVANCE(2214);
      END_STATE();
    case 1963:
      if (lookahead == 't') ADVANCE(2215);
      END_STATE();
    case 1964:
      if (lookahead == 'c') ADVANCE(2216);
      if (lookahead == 't') ADVANCE(2217);
      END_STATE();
    case 1965:
      if (lookahead == 'l') ADVANCE(2218);
      END_STATE();
    case 1966:
      if (lookahead == 'M') ADVANCE(2219);
      END_STATE();
    case 1967:
      if (lookahead == 'e') ADVANCE(2220);
      END_STATE();
    case 1968:
      if (lookahead == 'v') ADVANCE(2221);
      END_STATE();
    case 1969:
      if (lookahead == 'i') ADVANCE(2222);
      END_STATE();
    case 1970:
      if (lookahead == 'i') ADVANCE(2223);
      END_STATE();
    case 1971:
      if (lookahead == 'o') ADVANCE(2224);
      END_STATE();
    case 1972:
      if (lookahead == 'a') ADVANCE(2225);
      END_STATE();
    case 1973:
      if (lookahead == 'o') ADVANCE(2226);
      END_STATE();
    case 1974:
      if (lookahead == 't') ADVANCE(2227);
      END_STATE();
    case 1975:
      if (lookahead == 'g') ADVANCE(2228);
      END_STATE();
    case 1976:
      if (lookahead == 's') ADVANCE(2229);
      END_STATE();
    case 1977:
      if (lookahead == 'c') ADVANCE(2230);
      if (lookahead == 'w') ADVANCE(2231);
      END_STATE();
    case 1978:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 1979:
      if (lookahead == 'v') ADVANCE(2232);
      END_STATE();
    case 1980:
      if (lookahead == 'i') ADVANCE(2233);
      END_STATE();
    case 1981:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1982:
      if (lookahead == 'o') ADVANCE(2234);
      END_STATE();
    case 1983:
      if (lookahead == 'l') ADVANCE(2235);
      END_STATE();
    case 1984:
      if (lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 1985:
      if (lookahead == 'e') ADVANCE(2237);
      END_STATE();
    case 1986:
      if (lookahead == 'e') ADVANCE(2238);
      END_STATE();
    case 1987:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 1988:
      if (lookahead == 'u') ADVANCE(2239);
      END_STATE();
    case 1989:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 1990:
      if (lookahead == 'i') ADVANCE(2240);
      END_STATE();
    case 1991:
      if (lookahead == 'e') ADVANCE(2241);
      if (lookahead == 'i') ADVANCE(2242);
      END_STATE();
    case 1992:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1993:
      if (lookahead == 'P') ADVANCE(2243);
      END_STATE();
    case 1994:
      if (lookahead == 't') ADVANCE(2244);
      END_STATE();
    case 1995:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 1996:
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(2245);
      END_STATE();
    case 1997:
      if (lookahead == 'i') ADVANCE(2246);
      END_STATE();
    case 1998:
      if (lookahead == 'e') ADVANCE(2247);
      END_STATE();
    case 1999:
      if (lookahead == 'p') ADVANCE(2248);
      END_STATE();
    case 2000:
      if (lookahead == 's') ADVANCE(2249);
      END_STATE();
    case 2001:
      if (lookahead == 'n') ADVANCE(2250);
      END_STATE();
    case 2002:
      if (lookahead == 'i') ADVANCE(2251);
      END_STATE();
    case 2003:
      if (lookahead == 'e') ADVANCE(2252);
      END_STATE();
    case 2004:
      if (lookahead == 'f') ADVANCE(2253);
      if (lookahead == 's') ADVANCE(2254);
      END_STATE();
    case 2005:
      if (lookahead == 'g') ADVANCE(2255);
      END_STATE();
    case 2006:
      if (lookahead == 'n') ADVANCE(2256);
      END_STATE();
    case 2007:
      if (lookahead == 'i') ADVANCE(2257);
      END_STATE();
    case 2008:
      if (lookahead == 'n') ADVANCE(2258);
      END_STATE();
    case 2009:
      if (lookahead == 'g') ADVANCE(2259);
      END_STATE();
    case 2010:
      if (lookahead == 'i') ADVANCE(2260);
      END_STATE();
    case 2011:
      if (lookahead == 'e') ADVANCE(2261);
      END_STATE();
    case 2012:
      if (lookahead == 'u') ADVANCE(2262);
      END_STATE();
    case 2013:
      if (lookahead == 'u') ADVANCE(2263);
      END_STATE();
    case 2014:
      if (lookahead == 'h') ADVANCE(2264);
      END_STATE();
    case 2015:
      if (lookahead == 'i') ADVANCE(2265);
      END_STATE();
    case 2016:
      if (lookahead == 't') ADVANCE(2266);
      END_STATE();
    case 2017:
      if (lookahead == 'n') ADVANCE(2267);
      END_STATE();
    case 2018:
      if (lookahead == 'e') ADVANCE(2268);
      END_STATE();
    case 2019:
      if (lookahead == 'e') ADVANCE(2269);
      END_STATE();
    case 2020:
      if (lookahead == 'a') ADVANCE(2270);
      END_STATE();
    case 2021:
      if (lookahead == 'n') ADVANCE(2271);
      END_STATE();
    case 2022:
      if (lookahead == 'e') ADVANCE(2272);
      END_STATE();
    case 2023:
      if (lookahead == 'v') ADVANCE(2273);
      END_STATE();
    case 2024:
      if (lookahead == 'g') ADVANCE(2274);
      END_STATE();
    case 2025:
      if (lookahead == 'p') ADVANCE(2275);
      END_STATE();
    case 2026:
      if (lookahead == 'o') ADVANCE(2276);
      if (lookahead == 'u') ADVANCE(2277);
      END_STATE();
    case 2027:
      if (lookahead == 'e') ADVANCE(2278);
      END_STATE();
    case 2028:
      if (lookahead == 'a') ADVANCE(2279);
      END_STATE();
    case 2029:
      if (lookahead == 'e') ADVANCE(2280);
      END_STATE();
    case 2030:
      if (lookahead == 'o') ADVANCE(2281);
      END_STATE();
    case 2031:
      if (lookahead == 't') ADVANCE(2282);
      END_STATE();
    case 2032:
      if (lookahead == 'u') ADVANCE(2283);
      END_STATE();
    case 2033:
      if (lookahead == 't') ADVANCE(2284);
      END_STATE();
    case 2034:
      if (lookahead == 'g') ADVANCE(2285);
      END_STATE();
    case 2035:
      if (lookahead == 'k') ADVANCE(2286);
      END_STATE();
    case 2036:
      if (lookahead == 'h') ADVANCE(2287);
      END_STATE();
    case 2037:
      if (lookahead == 'e') ADVANCE(2288);
      END_STATE();
    case 2038:
      if (lookahead == 'c') ADVANCE(2289);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_MinedQuantity);
      END_STATE();
    case 2040:
      if (lookahead == 'o') ADVANCE(2290);
      END_STATE();
    case 2041:
      if (lookahead == 'e') ADVANCE(2291);
      END_STATE();
    case 2042:
      if (lookahead == 'm') ADVANCE(2292);
      END_STATE();
    case 2043:
      if (lookahead == 'o') ADVANCE(2293);
      END_STATE();
    case 2044:
      if (lookahead == 'r') ADVANCE(2294);
      END_STATE();
    case 2045:
      if (lookahead == 'c') ADVANCE(2295);
      END_STATE();
    case 2046:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2047:
      if (lookahead == 'l') ADVANCE(2296);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_PowerRequired);
      END_STATE();
    case 2049:
      if (lookahead == 'i') ADVANCE(2297);
      END_STATE();
    case 2050:
      if (lookahead == 'n') ADVANCE(2298);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_PressureInput);
      if (lookahead == '2') ADVANCE(2299);
      END_STATE();
    case 2052:
      if (lookahead == 'n') ADVANCE(2300);
      END_STATE();
    case 2053:
      if (lookahead == 't') ADVANCE(2301);
      END_STATE();
    case 2054:
      if (lookahead == 'n') ADVANCE(2302);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_PressureWaste);
      END_STATE();
    case 2056:
      if (lookahead == 'o') ADVANCE(2303);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_RatioHydrogen);
      END_STATE();
    case 2058:
      if (lookahead == 'r') ADVANCE(2304);
      END_STATE();
    case 2059:
      if (lookahead == 'd') ADVANCE(2305);
      END_STATE();
    case 2060:
      if (lookahead == 't') ADVANCE(2306);
      END_STATE();
    case 2061:
      if (lookahead == 'y') ADVANCE(2307);
      END_STATE();
    case 2062:
      if (lookahead == 'l') ADVANCE(2308);
      END_STATE();
    case 2063:
      if (lookahead == 'l') ADVANCE(2309);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_RatioNitrogen);
      if (lookahead == 'I') ADVANCE(2310);
      if (lookahead == 'O') ADVANCE(2311);
      END_STATE();
    case 2065:
      if (lookahead == 'x') ADVANCE(2312);
      END_STATE();
    case 2066:
      if (lookahead == 'p') ADVANCE(2313);
      END_STATE();
    case 2067:
      if (lookahead == 't') ADVANCE(2314);
      END_STATE();
    case 2068:
      if (lookahead == 't') ADVANCE(2315);
      END_STATE();
    case 2069:
      if (lookahead == 'W') ADVANCE(2316);
      END_STATE();
    case 2070:
      if (lookahead == 'u') ADVANCE(2317);
      END_STATE();
    case 2071:
      if (lookahead == 'p') ADVANCE(2318);
      END_STATE();
    case 2072:
      if (lookahead == 's') ADVANCE(2319);
      END_STATE();
    case 2073:
      if (lookahead == 'u') ADVANCE(2320);
      END_STATE();
    case 2074:
      if (lookahead == 'p') ADVANCE(2321);
      END_STATE();
    case 2075:
      if (lookahead == 'd') ADVANCE(2322);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_RequiredPower);
      END_STATE();
    case 2077:
      if (lookahead == 't') ADVANCE(2323);
      END_STATE();
    case 2078:
      if (lookahead == 'l') ADVANCE(2324);
      END_STATE();
    case 2079:
      if (lookahead == 'e') ADVANCE(2325);
      END_STATE();
    case 2080:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2081:
      if (lookahead == 'h') ADVANCE(2326);
      END_STATE();
    case 2082:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 2083:
      if (lookahead == 'r') ADVANCE(2327);
      END_STATE();
    case 2084:
      if (lookahead == 'o') ADVANCE(2328);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_SemiMajorAxis);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_SettingOutput);
      END_STATE();
    case 2087:
      if (lookahead == 'h') ADVANCE(2329);
      END_STATE();
    case 2088:
      if (lookahead == 'e') ADVANCE(2330);
      END_STATE();
    case 2089:
      if (lookahead == 'l') ADVANCE(2331);
      END_STATE();
    case 2090:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 2091:
      if (lookahead == 't') ADVANCE(2332);
      END_STATE();
    case 2092:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2093:
      if (lookahead == 'c') ADVANCE(2333);
      END_STATE();
    case 2094:
      if (lookahead == 't') ADVANCE(2334);
      END_STATE();
    case 2095:
      if (lookahead == 't') ADVANCE(2335);
      END_STATE();
    case 2096:
      if (lookahead == 'c') ADVANCE(2336);
      END_STATE();
    case 2097:
      if (lookahead == 'd') ADVANCE(2337);
      END_STATE();
    case 2098:
      if (lookahead == 'a') ADVANCE(2338);
      END_STATE();
    case 2099:
      if (lookahead == 't') ADVANCE(2339);
      END_STATE();
    case 2100:
      if (lookahead == 'l') ADVANCE(2340);
      END_STATE();
    case 2101:
      if (lookahead == 'i') ADVANCE(2341);
      END_STATE();
    case 2102:
      if (lookahead == 'r') ADVANCE(2342);
      END_STATE();
    case 2103:
      if (lookahead == 'C') ADVANCE(2343);
      if (lookahead == 'F') ADVANCE(2344);
      END_STATE();
    case 2104:
      if (lookahead == 's') ADVANCE(2345);
      END_STATE();
    case 2105:
      if (lookahead == 'm') ADVANCE(2346);
      END_STATE();
    case 2106:
      if (lookahead == 'o') ADVANCE(2347);
      END_STATE();
    case 2107:
      if (lookahead == 'u') ADVANCE(2348);
      END_STATE();
    case 2108:
      if (lookahead == 'a') ADVANCE(2349);
      END_STATE();
    case 2109:
      if (lookahead == 'h') ADVANCE(2350);
      END_STATE();
    case 2110:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2111:
      if (lookahead == 'a') ADVANCE(2351);
      END_STATE();
    case 2112:
      if (lookahead == 'n') ADVANCE(2352);
      END_STATE();
    case 2113:
      if (lookahead == 'g') ADVANCE(2353);
      END_STATE();
    case 2114:
      if (lookahead == 'n') ADVANCE(2354);
      END_STATE();
    case 2115:
      if (lookahead == 's') ADVANCE(2355);
      END_STATE();
    case 2116:
      if (lookahead == 'n') ADVANCE(2356);
      END_STATE();
    case 2117:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2118:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 2119:
      if (lookahead == 'p') ADVANCE(2357);
      END_STATE();
    case 2120:
      if (lookahead == 'f') ADVANCE(2358);
      END_STATE();
    case 2121:
      if (lookahead == 'c') ADVANCE(2359);
      END_STATE();
    case 2122:
      if (lookahead == 'c') ADVANCE(2360);
      END_STATE();
    case 2123:
      ADVANCE_MAP(
        'A', 2361,
        'C', 2362,
        'D', 2363,
        'F', 2364,
        'I', 2365,
        'K', 2366,
        'O', 2367,
        'R', 2368,
        'S', 2369,
        'T', 2370,
      );
      END_STATE();
    case 2124:
      if (lookahead == 'C') ADVANCE(2371);
      END_STATE();
    case 2125:
      if (lookahead == 'u') ADVANCE(2372);
      END_STATE();
    case 2126:
      if (lookahead == 'e') ADVANCE(2373);
      END_STATE();
    case 2127:
      if (lookahead == 'G') ADVANCE(2374);
      END_STATE();
    case 2128:
      if (lookahead == 'b') ADVANCE(2375);
      END_STATE();
    case 2129:
      if (lookahead == 'r') ADVANCE(2376);
      END_STATE();
    case 2130:
      if (lookahead == 't') ADVANCE(2377);
      END_STATE();
    case 2131:
      if (lookahead == 'n') ADVANCE(2378);
      END_STATE();
    case 2132:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 2133:
      if (lookahead == 'e') ADVANCE(2379);
      if (lookahead == 'i') ADVANCE(2380);
      END_STATE();
    case 2134:
      if (lookahead == 'a') ADVANCE(2381);
      END_STATE();
    case 2135:
      if (lookahead == 'c') ADVANCE(2382);
      END_STATE();
    case 2136:
      if (lookahead == 'a') ADVANCE(2383);
      END_STATE();
    case 2137:
      if (lookahead == 't') ADVANCE(2384);
      END_STATE();
    case 2138:
      if (lookahead == 'n') ADVANCE(2385);
      END_STATE();
    case 2139:
      if (lookahead == 'a') ADVANCE(2386);
      END_STATE();
    case 2140:
      if (lookahead == 'x') ADVANCE(2387);
      END_STATE();
    case 2141:
      if (lookahead == 'f') ADVANCE(2388);
      END_STATE();
    case 2142:
      if (lookahead == 't') ADVANCE(2389);
      END_STATE();
    case 2143:
      if (lookahead == 'p') ADVANCE(2390);
      END_STATE();
    case 2144:
      if (lookahead == 't') ADVANCE(2391);
      END_STATE();
    case 2145:
      if (lookahead == 't') ADVANCE(2392);
      END_STATE();
    case 2146:
      if (lookahead == 't') ADVANCE(2393);
      END_STATE();
    case 2147:
      if (lookahead == 't') ADVANCE(2394);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(anon_sym_TotalContents);
      END_STATE();
    case 2149:
      if (lookahead == 'u') ADVANCE(2395);
      END_STATE();
    case 2150:
      if (lookahead == 'p') ADVANCE(2396);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_TotalQuantity);
      END_STATE();
    case 2152:
      if (lookahead == 'd') ADVANCE(2397);
      END_STATE();
    case 2153:
      if (lookahead == 't') ADVANCE(2398);
      END_STATE();
    case 2154:
      if (lookahead == 'i') ADVANCE(2399);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(anon_sym_VerticalRatio);
      END_STATE();
    case 2156:
      if (lookahead == 'd') ADVANCE(2400);
      END_STATE();
    case 2157:
      if (lookahead == 'C') ADVANCE(2401);
      END_STATE();
    case 2158:
      if (lookahead == 'i') ADVANCE(2402);
      END_STATE();
    case 2159:
      if (lookahead == 'u') ADVANCE(2403);
      END_STATE();
    case 2160:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2161:
      if (lookahead == 'l') ADVANCE(2404);
      END_STATE();
    case 2162:
      if (lookahead == 's') ADVANCE(2405);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(anon_sym_AlignmentError);
      END_STATE();
    case 2164:
      if (lookahead == 'i') ADVANCE(2406);
      END_STATE();
    case 2165:
      if (lookahead == 't') ADVANCE(2407);
      END_STATE();
    case 2166:
      if (lookahead == 't') ADVANCE(2408);
      END_STATE();
    case 2167:
      if (lookahead == 'd') ADVANCE(2409);
      END_STATE();
    case 2168:
      if (lookahead == 't') ADVANCE(2410);
      END_STATE();
    case 2169:
      if (lookahead == 't') ADVANCE(2411);
      END_STATE();
    case 2170:
      if (lookahead == 'u') ADVANCE(2412);
      END_STATE();
    case 2171:
      if (lookahead == 'o') ADVANCE(2413);
      END_STATE();
    case 2172:
      if (lookahead == 'h') ADVANCE(2414);
      END_STATE();
    case 2173:
      if (lookahead == 'M') ADVANCE(2415);
      END_STATE();
    case 2174:
      if (lookahead == 'e') ADVANCE(2416);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(anon_sym_DrillCondition);
      END_STATE();
    case 2176:
      if (lookahead == 'o') ADVANCE(2417);
      END_STATE();
    case 2177:
      if (lookahead == 't') ADVANCE(2418);
      END_STATE();
    case 2178:
      if (lookahead == 'p') ADVANCE(2419);
      END_STATE();
    case 2179:
      if (lookahead == 'i') ADVANCE(2420);
      END_STATE();
    case 2180:
      if (lookahead == 'a') ADVANCE(2421);
      if (lookahead == 'c') ADVANCE(2422);
      END_STATE();
    case 2181:
      if (lookahead == 'c') ADVANCE(2423);
      END_STATE();
    case 2182:
      if (lookahead == 'i') ADVANCE(2424);
      END_STATE();
    case 2183:
      if (lookahead == 'y') ADVANCE(2425);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(anon_sym_ExportQuantity);
      END_STATE();
    case 2185:
      if (lookahead == 'u') ADVANCE(2426);
      END_STATE();
    case 2186:
      if (lookahead == 'D') ADVANCE(2427);
      END_STATE();
    case 2187:
      if (lookahead == 'e') ADVANCE(2428);
      END_STATE();
    case 2188:
      if (lookahead == 'C') ADVANCE(2429);
      if (lookahead == 'H') ADVANCE(2430);
      if (lookahead == 'N') ADVANCE(2431);
      if (lookahead == 'O') ADVANCE(2432);
      if (lookahead == 'P') ADVANCE(2433);
      if (lookahead == 'V') ADVANCE(2434);
      END_STATE();
    case 2189:
      if (lookahead == 'e') ADVANCE(2435);
      END_STATE();
    case 2190:
      if (lookahead == 's') ADVANCE(2436);
      END_STATE();
    case 2191:
      if (lookahead == 'a') ADVANCE(2437);
      if (lookahead == 'e') ADVANCE(2438);
      END_STATE();
    case 2192:
      if (lookahead == 'n') ADVANCE(2439);
      END_STATE();
    case 2193:
      if (lookahead == 'l') ADVANCE(2440);
      END_STATE();
    case 2194:
      if (lookahead == 'o') ADVANCE(2441);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(anon_sym_ImportQuantity);
      END_STATE();
    case 2196:
      if (lookahead == 'r') ADVANCE(2442);
      END_STATE();
    case 2197:
      ADVANCE_MAP(
        'C', 2443,
        'D', 2444,
        'E', 2445,
        'F', 2446,
        'G', 2447,
        'H', 2448,
        'L', 2449,
        'M', 2450,
        'N', 2451,
        'O', 2452,
        'P', 2453,
        'Q', 2454,
        'R', 2455,
        'S', 2456,
        'T', 2457,
        'V', 2458,
      );
      END_STATE();
    case 2198:
      if (lookahead == 'l') ADVANCE(2459);
      END_STATE();
    case 2199:
      if (lookahead == 'v') ADVANCE(2460);
      END_STATE();
    case 2200:
      if (lookahead == 'e') ADVANCE(2461);
      END_STATE();
    case 2201:
      if (lookahead == 'n') ADVANCE(2462);
      END_STATE();
    case 2202:
      if (lookahead == 'L') ADVANCE(2463);
      if (lookahead == 'S') ADVANCE(2464);
      END_STATE();
    case 2203:
      if (lookahead == 'T') ADVANCE(2465);
      END_STATE();
    case 2204:
      if (lookahead == 's') ADVANCE(2466);
      END_STATE();
    case 2205:
      if (lookahead == 'n') ADVANCE(2467);
      END_STATE();
    case 2206:
      if (lookahead == 'g') ADVANCE(2468);
      if (lookahead == 't') ADVANCE(2469);
      END_STATE();
    case 2207:
      if (lookahead == 'r') ADVANCE(2470);
      END_STATE();
    case 2208:
      if (lookahead == 'e') ADVANCE(2471);
      END_STATE();
    case 2209:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 2210:
      if (lookahead == 'u') ADVANCE(2472);
      END_STATE();
    case 2211:
      if (lookahead == 'l') ADVANCE(2473);
      END_STATE();
    case 2212:
      if (lookahead == 'a') ADVANCE(2474);
      END_STATE();
    case 2213:
      if (lookahead == 'e') ADVANCE(2475);
      END_STATE();
    case 2214:
      if (lookahead == 'i') ADVANCE(2476);
      END_STATE();
    case 2215:
      if (lookahead == 'i') ADVANCE(2477);
      END_STATE();
    case 2216:
      if (lookahead == 'o') ADVANCE(2478);
      END_STATE();
    case 2217:
      if (lookahead == 'a') ADVANCE(2479);
      END_STATE();
    case 2218:
      if (lookahead == 'l') ADVANCE(2480);
      END_STATE();
    case 2219:
      if (lookahead == 'a') ADVANCE(2481);
      END_STATE();
    case 2220:
      if (lookahead == 'n') ADVANCE(2482);
      END_STATE();
    case 2221:
      if (lookahead == 'a') ADVANCE(2483);
      END_STATE();
    case 2222:
      if (lookahead == 't') ADVANCE(2484);
      END_STATE();
    case 2223:
      if (lookahead == 'r') ADVANCE(2485);
      END_STATE();
    case 2224:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 2225:
      if (lookahead == 'u') ADVANCE(2486);
      END_STATE();
    case 2226:
      if (lookahead == 'r') ADVANCE(2487);
      END_STATE();
    case 2227:
      if (lookahead == 'r') ADVANCE(2488);
      END_STATE();
    case 2228:
      if (lookahead == 'h') ADVANCE(2489);
      END_STATE();
    case 2229:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 2230:
      if (lookahead == 'e') ADVANCE(2490);
      END_STATE();
    case 2231:
      if (lookahead == 'a') ADVANCE(2491);
      END_STATE();
    case 2232:
      if (lookahead == 'e') ADVANCE(2492);
      END_STATE();
    case 2233:
      if (lookahead == 'z') ADVANCE(2493);
      END_STATE();
    case 2234:
      if (lookahead == 'r') ADVANCE(2494);
      END_STATE();
    case 2235:
      if (lookahead == 'i') ADVANCE(2495);
      END_STATE();
    case 2236:
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 2237:
      if (lookahead == 'r') ADVANCE(2496);
      END_STATE();
    case 2238:
      if (lookahead == 'N') ADVANCE(2497);
      END_STATE();
    case 2239:
      if (lookahead == 'a') ADVANCE(2498);
      END_STATE();
    case 2240:
      if (lookahead == 'm') ADVANCE(2499);
      END_STATE();
    case 2241:
      if (lookahead == 'a') ADVANCE(2500);
      if (lookahead == 'd') ADVANCE(2501);
      END_STATE();
    case 2242:
      if (lookahead == 'm') ADVANCE(2502);
      END_STATE();
    case 2243:
      if (lookahead == 'o') ADVANCE(2503);
      END_STATE();
    case 2244:
      if (lookahead == 'W') ADVANCE(2504);
      END_STATE();
    case 2245:
      if (lookahead == 'a') ADVANCE(2505);
      END_STATE();
    case 2246:
      if (lookahead == 't') ADVANCE(2506);
      END_STATE();
    case 2247:
      if (lookahead == 'n') ADVANCE(2507);
      END_STATE();
    case 2248:
      if (lookahead == 'u') ADVANCE(2508);
      END_STATE();
    case 2249:
      if (lookahead == 'e') ADVANCE(2509);
      END_STATE();
    case 2250:
      if (lookahead == 't') ADVANCE(2510);
      END_STATE();
    case 2251:
      if (lookahead == 't') ADVANCE(2511);
      END_STATE();
    case 2252:
      if (lookahead == 'r') ADVANCE(2512);
      END_STATE();
    case 2253:
      if (lookahead == 'a') ADVANCE(2513);
      END_STATE();
    case 2254:
      if (lookahead == 's') ADVANCE(2514);
      END_STATE();
    case 2255:
      if (lookahead == 'r') ADVANCE(2515);
      END_STATE();
    case 2256:
      if (lookahead == 't') ADVANCE(2516);
      END_STATE();
    case 2257:
      if (lookahead == 'o') ADVANCE(2517);
      END_STATE();
    case 2258:
      if (lookahead == 't') ADVANCE(2518);
      END_STATE();
    case 2259:
      if (lookahead == 'e') ADVANCE(2519);
      END_STATE();
    case 2260:
      if (lookahead == 'p') ADVANCE(2520);
      END_STATE();
    case 2261:
      if (lookahead == 'r') ADVANCE(2521);
      END_STATE();
    case 2262:
      if (lookahead == 'e') ADVANCE(2522);
      if (lookahead == 'i') ADVANCE(2523);
      END_STATE();
    case 2263:
      if (lookahead == 'r') ADVANCE(2524);
      END_STATE();
    case 2264:
      if (lookahead == 'n') ADVANCE(2525);
      END_STATE();
    case 2265:
      if (lookahead == 'M') ADVANCE(2526);
      END_STATE();
    case 2266:
      if (lookahead == 'i') ADVANCE(2527);
      END_STATE();
    case 2267:
      if (lookahead == 'a') ADVANCE(2528);
      END_STATE();
    case 2268:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(sym_enum);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 2270:
      if (lookahead == 'r') ADVANCE(2529);
      END_STATE();
    case 2271:
      if (lookahead == 'd') ADVANCE(2530);
      END_STATE();
    case 2272:
      if (lookahead == 's') ADVANCE(2531);
      END_STATE();
    case 2273:
      if (lookahead == 'e') ADVANCE(2532);
      END_STATE();
    case 2274:
      if (lookahead == 'e') ADVANCE(2533);
      END_STATE();
    case 2275:
      if (lookahead == 'e') ADVANCE(2534);
      END_STATE();
    case 2276:
      if (lookahead == 't') ADVANCE(2535);
      END_STATE();
    case 2277:
      if (lookahead == 's') ADVANCE(2536);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(2537);
      END_STATE();
    case 2279:
      if (lookahead == 'l') ADVANCE(2538);
      END_STATE();
    case 2280:
      if (lookahead == 'A') ADVANCE(2539);
      END_STATE();
    case 2281:
      if (lookahead == 'c') ADVANCE(2540);
      END_STATE();
    case 2282:
      if (lookahead == 'i') ADVANCE(2541);
      END_STATE();
    case 2283:
      if (lookahead == 'm') ADVANCE(2542);
      END_STATE();
    case 2284:
      if (lookahead == 's') ADVANCE(2543);
      END_STATE();
    case 2285:
      if (lookahead == 'h') ADVANCE(2544);
      END_STATE();
    case 2286:
      if (lookahead == 'i') ADVANCE(2545);
      END_STATE();
    case 2287:
      if (lookahead == 'R') ADVANCE(2546);
      END_STATE();
    case 2288:
      if (lookahead == 'u') ADVANCE(2547);
      END_STATE();
    case 2289:
      if (lookahead == 'i') ADVANCE(2548);
      END_STATE();
    case 2290:
      if (lookahead == 'C') ADVANCE(2549);
      END_STATE();
    case 2291:
      if (lookahead == 'n') ADVANCE(2550);
      END_STATE();
    case 2292:
      if (lookahead == 'p') ADVANCE(2551);
      END_STATE();
    case 2293:
      if (lookahead == 'n') ADVANCE(2552);
      END_STATE();
    case 2294:
      if (lookahead == 'g') ADVANCE(2553);
      END_STATE();
    case 2295:
      if (lookahead == 'h') ADVANCE(2554);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(anon_sym_PowerPotential);
      END_STATE();
    case 2297:
      if (lookahead == 'e') ADVANCE(2555);
      END_STATE();
    case 2298:
      if (lookahead == 'a') ADVANCE(2556);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_PressureInput2);
      END_STATE();
    case 2300:
      if (lookahead == 'a') ADVANCE(2557);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_PressureOutput);
      if (lookahead == '2') ADVANCE(2558);
      END_STATE();
    case 2302:
      if (lookahead == 'g') ADVANCE(2559);
      END_STATE();
    case 2303:
      if (lookahead == 'x') ADVANCE(2560);
      END_STATE();
    case 2304:
      if (lookahead == 'b') ADVANCE(2561);
      END_STATE();
    case 2305:
      if (lookahead == 'r') ADVANCE(2562);
      END_STATE();
    case 2306:
      if (lookahead == 'r') ADVANCE(2563);
      END_STATE();
    case 2307:
      if (lookahead == 'g') ADVANCE(2564);
      END_STATE();
    case 2308:
      if (lookahead == 'l') ADVANCE(2565);
      END_STATE();
    case 2309:
      if (lookahead == 'a') ADVANCE(2566);
      END_STATE();
    case 2310:
      if (lookahead == 'n') ADVANCE(2567);
      END_STATE();
    case 2311:
      if (lookahead == 'u') ADVANCE(2568);
      END_STATE();
    case 2312:
      if (lookahead == 'i') ADVANCE(2569);
      END_STATE();
    case 2313:
      if (lookahead == 'u') ADVANCE(2570);
      END_STATE();
    case 2314:
      if (lookahead == 'p') ADVANCE(2571);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(anon_sym_RatioPollutant);
      if (lookahead == 'I') ADVANCE(2572);
      if (lookahead == 'O') ADVANCE(2573);
      END_STATE();
    case 2316:
      if (lookahead == 'a') ADVANCE(2574);
      END_STATE();
    case 2317:
      if (lookahead == 't') ADVANCE(2575);
      END_STATE();
    case 2318:
      if (lookahead == 'u') ADVANCE(2576);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_RatioVolatiles);
      if (lookahead == 'I') ADVANCE(2577);
      if (lookahead == 'O') ADVANCE(2578);
      END_STATE();
    case 2320:
      if (lookahead == 't') ADVANCE(2579);
      END_STATE();
    case 2321:
      if (lookahead == 'u') ADVANCE(2580);
      END_STATE();
    case 2322:
      if (lookahead == 'e') ADVANCE(2581);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(anon_sym_ReturnFuelCost);
      END_STATE();
    case 2324:
      if (lookahead == 'o') ADVANCE(2582);
      END_STATE();
    case 2325:
      if (lookahead == 'T') ADVANCE(2583);
      END_STATE();
    case 2326:
      if (lookahead == 'T') ADVANCE(2584);
      END_STATE();
    case 2327:
      if (lookahead == 'a') ADVANCE(2585);
      END_STATE();
    case 2328:
      if (lookahead == 'a') ADVANCE(2586);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(anon_sym_SignalStrength);
      END_STATE();
    case 2330:
      if (lookahead == 's') ADVANCE(2587);
      END_STATE();
    case 2331:
      if (lookahead == 'i') ADVANCE(2588);
      END_STATE();
    case 2332:
      if (lookahead == 'e') ADVANCE(2589);
      END_STATE();
    case 2333:
      if (lookahead == 'k') ADVANCE(2590);
      END_STATE();
    case 2334:
      if (lookahead == 'l') ADVANCE(2591);
      END_STATE();
    case 2335:
      if (lookahead == 'r') ADVANCE(2592);
      END_STATE();
    case 2336:
      if (lookahead == 'u') ADVANCE(2593);
      END_STATE();
    case 2337:
      if (lookahead == 'i') ADVANCE(2594);
      END_STATE();
    case 2338:
      if (lookahead == 'D') ADVANCE(2595);
      END_STATE();
    case 2339:
      if (lookahead == 'C') ADVANCE(2596);
      END_STATE();
    case 2340:
      if (lookahead == 'l') ADVANCE(2597);
      END_STATE();
    case 2341:
      if (lookahead == 't') ADVANCE(2598);
      END_STATE();
    case 2342:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2343:
      if (lookahead == 'a') ADVANCE(2599);
      END_STATE();
    case 2344:
      if (lookahead == 'i') ADVANCE(2600);
      END_STATE();
    case 2345:
      if (lookahead == 's') ADVANCE(2601);
      END_STATE();
    case 2346:
      if (lookahead == 'e') ADVANCE(2602);
      END_STATE();
    case 2347:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2348:
      if (lookahead == 'i') ADVANCE(2603);
      END_STATE();
    case 2349:
      if (lookahead == 'z') ADVANCE(2604);
      END_STATE();
    case 2350:
      if (lookahead == 'e') ADVANCE(2605);
      END_STATE();
    case 2351:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 2352:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2353:
      if (lookahead == 'r') ADVANCE(2606);
      END_STATE();
    case 2354:
      if (lookahead == 'n') ADVANCE(2607);
      END_STATE();
    case 2355:
      if (lookahead == 'o') ADVANCE(2608);
      END_STATE();
    case 2356:
      if (lookahead == 'd') ADVANCE(2609);
      END_STATE();
    case 2357:
      if (lookahead == 'e') ADVANCE(2610);
      END_STATE();
    case 2358:
      if (lookahead == 'o') ADVANCE(2611);
      END_STATE();
    case 2359:
      if (lookahead == 'k') ADVANCE(2612);
      END_STATE();
    case 2360:
      if (lookahead == 'e') ADVANCE(2613);
      END_STATE();
    case 2361:
      if (lookahead == 'p') ADVANCE(2614);
      if (lookahead == 't') ADVANCE(2615);
      END_STATE();
    case 2362:
      if (lookahead == 'l') ADVANCE(2616);
      END_STATE();
    case 2363:
      if (lookahead == 'e') ADVANCE(2617);
      END_STATE();
    case 2364:
      if (lookahead == 'o') ADVANCE(2618);
      END_STATE();
    case 2365:
      if (lookahead == 'c') ADVANCE(2619);
      END_STATE();
    case 2366:
      if (lookahead == 'i') ADVANCE(2620);
      END_STATE();
    case 2367:
      if (lookahead == 'r') ADVANCE(2621);
      END_STATE();
    case 2368:
      if (lookahead == 'e') ADVANCE(2622);
      END_STATE();
    case 2369:
      if (lookahead == 't') ADVANCE(2623);
      END_STATE();
    case 2370:
      if (lookahead == 'o') ADVANCE(2624);
      END_STATE();
    case 2371:
      if (lookahead == 'y') ADVANCE(2625);
      END_STATE();
    case 2372:
      if (lookahead == 'r') ADVANCE(2626);
      END_STATE();
    case 2373:
      if (lookahead == 'F') ADVANCE(2627);
      END_STATE();
    case 2374:
      if (lookahead == 'o') ADVANCE(2628);
      END_STATE();
    case 2375:
      if (lookahead == 'o') ADVANCE(2629);
      END_STATE();
    case 2376:
      if (lookahead == 'A') ADVANCE(2630);
      END_STATE();
    case 2377:
      if (lookahead == 'i') ADVANCE(2631);
      END_STATE();
    case 2378:
      if (lookahead == 't') ADVANCE(2632);
      END_STATE();
    case 2379:
      if (lookahead == 'H') ADVANCE(2633);
      if (lookahead == 'L') ADVANCE(2634);
      END_STATE();
    case 2380:
      if (lookahead == 's') ADVANCE(2635);
      END_STATE();
    case 2381:
      if (lookahead == 'u') ADVANCE(2636);
      END_STATE();
    case 2382:
      if (lookahead == 'o') ADVANCE(2637);
      END_STATE();
    case 2383:
      if (lookahead == 'i') ADVANCE(2638);
      END_STATE();
    case 2384:
      if (lookahead == 'u') ADVANCE(2639);
      END_STATE();
    case 2385:
      if (lookahead == 'c') ADVANCE(2640);
      END_STATE();
    case 2386:
      if (lookahead == 'n') ADVANCE(2641);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_TargetPadIndex);
      END_STATE();
    case 2388:
      if (lookahead == 'f') ADVANCE(2642);
      END_STATE();
    case 2389:
      if (lookahead == 'e') ADVANCE(2643);
      END_STATE();
    case 2390:
      if (lookahead == 'u') ADVANCE(2644);
      END_STATE();
    case 2391:
      if (lookahead == 'p') ADVANCE(2645);
      END_STATE();
    case 2392:
      if (lookahead == 't') ADVANCE(2646);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_ThrustToWeight);
      END_STATE();
    case 2394:
      if (lookahead == 'i') ADVANCE(2647);
      END_STATE();
    case 2395:
      if (lookahead == 't') ADVANCE(2648);
      END_STATE();
    case 2396:
      if (lookahead == 'u') ADVANCE(2649);
      END_STATE();
    case 2397:
      if (lookahead == 'e') ADVANCE(2650);
      END_STATE();
    case 2398:
      if (lookahead == 'u') ADVANCE(2651);
      END_STATE();
    case 2399:
      if (lookahead == 'v') ADVANCE(2652);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(anon_sym_VolumeOfLiquid);
      END_STATE();
    case 2401:
      if (lookahead == 'o') ADVANCE(2653);
      END_STATE();
    case 2402:
      if (lookahead == 'c') ADVANCE(2654);
      END_STATE();
    case 2403:
      if (lookahead == 'g') ADVANCE(2655);
      END_STATE();
    case 2404:
      if (lookahead == 'i') ADVANCE(2656);
      END_STATE();
    case 2405:
      if (lookahead == 's') ADVANCE(2657);
      END_STATE();
    case 2406:
      if (lookahead == 'n') ADVANCE(2658);
      END_STATE();
    case 2407:
      if (lookahead == 'H') ADVANCE(2659);
      END_STATE();
    case 2408:
      if (lookahead == 's') ADVANCE(2660);
      END_STATE();
    case 2409:
      if (lookahead == 's') ADVANCE(2661);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_CombustionInput);
      if (lookahead == '2') ADVANCE(2662);
      END_STATE();
    case 2411:
      if (lookahead == 'e') ADVANCE(2663);
      END_STATE();
    case 2412:
      if (lookahead == 't') ADVANCE(2664);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(anon_sym_CompletionRatio);
      END_STATE();
    case 2414:
      if (lookahead == 'P') ADVANCE(2665);
      END_STATE();
    case 2415:
      if (lookahead == 'o') ADVANCE(2666);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_DestinationCode);
      END_STATE();
    case 2417:
      if (lookahead == 'w') ADVANCE(2667);
      END_STATE();
    case 2418:
      if (lookahead == 'a') ADVANCE(2668);
      END_STATE();
    case 2419:
      if (lookahead == 'w') ADVANCE(2669);
      END_STATE();
    case 2420:
      if (lookahead == 'v') ADVANCE(2670);
      END_STATE();
    case 2421:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2422:
      if (lookahead == 'a') ADVANCE(2671);
      END_STATE();
    case 2423:
      if (lookahead == 'o') ADVANCE(2672);
      END_STATE();
    case 2424:
      if (lookahead == 'c') ADVANCE(2673);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(anon_sym_ExhaustVelocity);
      END_STATE();
    case 2426:
      if (lookahead == 'l') ADVANCE(2674);
      END_STATE();
    case 2427:
      if (lookahead == 'i') ADVANCE(2675);
      END_STATE();
    case 2428:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 2429:
      if (lookahead == 'a') ADVANCE(2676);
      END_STATE();
    case 2430:
      if (lookahead == 'y') ADVANCE(2677);
      END_STATE();
    case 2431:
      if (lookahead == 'i') ADVANCE(2678);
      END_STATE();
    case 2432:
      if (lookahead == 'x') ADVANCE(2679);
      END_STATE();
    case 2433:
      if (lookahead == 'o') ADVANCE(2680);
      END_STATE();
    case 2434:
      if (lookahead == 'o') ADVANCE(2681);
      END_STATE();
    case 2435:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 2436:
      if (lookahead == 'O') ADVANCE(2682);
      END_STATE();
    case 2437:
      if (lookahead == 'n') ADVANCE(2683);
      END_STATE();
    case 2438:
      if (lookahead == 'd') ADVANCE(2684);
      END_STATE();
    case 2439:
      if (lookahead == 'e') ADVANCE(2685);
      END_STATE();
    case 2440:
      if (lookahead == 'e') ADVANCE(2686);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(anon_sym_HorizontalRatio);
      END_STATE();
    case 2442:
      if (lookahead == 'o') ADVANCE(2687);
      END_STATE();
    case 2443:
      if (lookahead == 'h') ADVANCE(2688);
      if (lookahead == 'l') ADVANCE(2689);
      END_STATE();
    case 2444:
      if (lookahead == 'a') ADVANCE(2690);
      END_STATE();
    case 2445:
      if (lookahead == 'f') ADVANCE(2691);
      END_STATE();
    case 2446:
      if (lookahead == 'i') ADVANCE(2692);
      END_STATE();
    case 2447:
      if (lookahead == 'r') ADVANCE(2693);
      END_STATE();
    case 2448:
      if (lookahead == 'e') ADVANCE(2694);
      END_STATE();
    case 2449:
      if (lookahead == 'i') ADVANCE(2695);
      if (lookahead == 'o') ADVANCE(2696);
      END_STATE();
    case 2450:
      if (lookahead == 'a') ADVANCE(2697);
      END_STATE();
    case 2451:
      if (lookahead == 'o') ADVANCE(2698);
      END_STATE();
    case 2452:
      if (lookahead == 'c') ADVANCE(2699);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(2700);
      END_STATE();
    case 2453:
      if (lookahead == 'r') ADVANCE(2701);
      END_STATE();
    case 2454:
      if (lookahead == 'u') ADVANCE(2702);
      END_STATE();
    case 2455:
      if (lookahead == 'e') ADVANCE(2703);
      END_STATE();
    case 2456:
      if (lookahead == 'e') ADVANCE(2704);
      if (lookahead == 'o') ADVANCE(2705);
      END_STATE();
    case 2457:
      if (lookahead == 'e') ADVANCE(2706);
      END_STATE();
    case 2458:
      if (lookahead == 'o') ADVANCE(2707);
      END_STATE();
    case 2459:
      if (lookahead == 'e') ADVANCE(2708);
      END_STATE();
    case 2460:
      if (lookahead == 'a') ADVANCE(2709);
      END_STATE();
    case 2461:
      if (lookahead == 'l') ADVANCE(2710);
      END_STATE();
    case 2462:
      if (lookahead == 'm') ADVANCE(2711);
      END_STATE();
    case 2463:
      if (lookahead == 'a') ADVANCE(2712);
      END_STATE();
    case 2464:
      if (lookahead == 'h') ADVANCE(2713);
      END_STATE();
    case 2465:
      if (lookahead == 'i') ADVANCE(2714);
      END_STATE();
    case 2466:
      if (lookahead == 't') ADVANCE(2715);
      END_STATE();
    case 2467:
      if (lookahead == 'e') ADVANCE(2716);
      END_STATE();
    case 2468:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(2717);
      END_STATE();
    case 2470:
      if (lookahead == 'M') ADVANCE(2718);
      END_STATE();
    case 2471:
      if (lookahead == 'c') ADVANCE(2719);
      END_STATE();
    case 2472:
      if (lookahead == 's') ADVANCE(2720);
      END_STATE();
    case 2473:
      if (lookahead == 'e') ADVANCE(2721);
      END_STATE();
    case 2474:
      if (lookahead == 'c') ADVANCE(2722);
      END_STATE();
    case 2475:
      if (lookahead == 'n') ADVANCE(2723);
      END_STATE();
    case 2476:
      if (lookahead == 't') ADVANCE(2724);
      END_STATE();
    case 2477:
      if (lookahead == 'n') ADVANCE(2725);
      END_STATE();
    case 2478:
      if (lookahead == 'v') ADVANCE(2726);
      END_STATE();
    case 2479:
      if (lookahead == 'n') ADVANCE(2727);
      END_STATE();
    case 2480:
      if (lookahead == 'C') ADVANCE(2728);
      END_STATE();
    case 2481:
      if (lookahead == 's') ADVANCE(2729);
      END_STATE();
    case 2482:
      if (lookahead == 't') ADVANCE(2730);
      END_STATE();
    case 2483:
      if (lookahead == 't') ADVANCE(2731);
      END_STATE();
    case 2484:
      if (lookahead == 'y') ADVANCE(2732);
      END_STATE();
    case 2485:
      if (lookahead == 'o') ADVANCE(2733);
      END_STATE();
    case 2486:
      if (lookahead == 's') ADVANCE(2734);
      END_STATE();
    case 2487:
      if (lookahead == 't') ADVANCE(2735);
      END_STATE();
    case 2488:
      if (lookahead == 'a') ADVANCE(2736);
      END_STATE();
    case 2489:
      if (lookahead == 't') ADVANCE(2737);
      END_STATE();
    case 2490:
      if (lookahead == 'W') ADVANCE(2738);
      END_STATE();
    case 2491:
      if (lookahead == 'r') ADVANCE(2739);
      END_STATE();
    case 2492:
      if (lookahead == 's') ADVANCE(2740);
      END_STATE();
    case 2493:
      if (lookahead == 'o') ADVANCE(2741);
      END_STATE();
    case 2494:
      if (lookahead == 't') ADVANCE(2742);
      END_STATE();
    case 2495:
      if (lookahead == 'n') ADVANCE(2743);
      END_STATE();
    case 2496:
      if (lookahead == 'r') ADVANCE(2744);
      END_STATE();
    case 2497:
      if (lookahead == 'u') ADVANCE(2745);
      END_STATE();
    case 2498:
      if (lookahead == 'l') ADVANCE(2746);
      END_STATE();
    case 2499:
      if (lookahead == 'u') ADVANCE(2747);
      END_STATE();
    case 2500:
      if (lookahead == 'b') ADVANCE(2748);
      END_STATE();
    case 2501:
      if (lookahead == 'Q') ADVANCE(2749);
      END_STATE();
    case 2502:
      if (lookahead == 'u') ADVANCE(2750);
      END_STATE();
    case 2503:
      if (lookahead == 'i') ADVANCE(2751);
      END_STATE();
    case 2504:
      if (lookahead == 'e') ADVANCE(2752);
      END_STATE();
    case 2505:
      if (lookahead == 't') ADVANCE(2753);
      END_STATE();
    case 2506:
      if (lookahead == 'P') ADVANCE(2754);
      END_STATE();
    case 2507:
      if (lookahead == 't') ADVANCE(2755);
      END_STATE();
    case 2508:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2509:
      if (lookahead == 'd') ADVANCE(2756);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'E') ADVANCE(2757);
      if (lookahead == 'G') ADVANCE(2758);
      if (lookahead == 'H') ADVANCE(2759);
      END_STATE();
    case 2511:
      if (lookahead == 'i') ADVANCE(2760);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(2761);
      if (lookahead == 'G') ADVANCE(2762);
      if (lookahead == 'P') ADVANCE(2763);
      if (lookahead == 'R') ADVANCE(2764);
      END_STATE();
    case 2513:
      if (lookahead == 'b') ADVANCE(2765);
      END_STATE();
    case 2514:
      if (lookahead == 'u') ADVANCE(2766);
      END_STATE();
    case 2515:
      if (lookahead == 'e') ADVANCE(2767);
      END_STATE();
    case 2516:
      if (lookahead == 'i') ADVANCE(2768);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(sym_enum);
      ADVANCE_MAP(
        'C', 2769,
        'H', 2770,
        'L', 2771,
        'N', 2772,
        'O', 2773,
        'P', 2774,
        'S', 2775,
        'V', 2776,
        'W', 2777,
      );
      END_STATE();
    case 2518:
      if (lookahead == 'r') ADVANCE(2778);
      END_STATE();
    case 2519:
      if (lookahead == 'n') ADVANCE(2779);
      END_STATE();
    case 2520:
      if (lookahead == 'e') ADVANCE(2780);
      END_STATE();
    case 2521:
      if (lookahead == 'e') ADVANCE(2781);
      END_STATE();
    case 2522:
      if (lookahead == 's') ADVANCE(2782);
      END_STATE();
    case 2523:
      if (lookahead == 'r') ADVANCE(2783);
      END_STATE();
    case 2524:
      if (lookahead == 'n') ADVANCE(2784);
      END_STATE();
    case 2525:
      if (lookahead == 'e') ADVANCE(2785);
      END_STATE();
    case 2526:
      if (lookahead == 'a') ADVANCE(2786);
      END_STATE();
    case 2527:
      if (lookahead == 'n') ADVANCE(2787);
      END_STATE();
    case 2528:
      if (lookahead == 'l') ADVANCE(2788);
      END_STATE();
    case 2529:
      if (lookahead == 'A') ADVANCE(2789);
      if (lookahead == 'I') ADVANCE(2790);
      END_STATE();
    case 2530:
      if (lookahead == 'A') ADVANCE(2791);
      END_STATE();
    case 2531:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2532:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 2533:
      if (lookahead == 't') ADVANCE(2792);
      END_STATE();
    case 2534:
      if (lookahead == 'r') ADVANCE(2793);
      END_STATE();
    case 2535:
      if (lookahead == 't') ADVANCE(2794);
      END_STATE();
    case 2536:
      if (lookahead == 't') ADVANCE(2795);
      END_STATE();
    case 2537:
      if (lookahead == 'o') ADVANCE(2796);
      END_STATE();
    case 2538:
      if (lookahead == 'M') ADVANCE(2797);
      if (lookahead == 'Q') ADVANCE(2798);
      END_STATE();
    case 2539:
      if (lookahead == 'n') ADVANCE(2799);
      END_STATE();
    case 2540:
      if (lookahead == 'i') ADVANCE(2800);
      END_STATE();
    case 2541:
      if (lookahead == 'c') ADVANCE(2801);
      END_STATE();
    case 2542:
      if (lookahead == 'e') ADVANCE(2802);
      END_STATE();
    case 2543:
      if (lookahead == 'R') ADVANCE(2803);
      END_STATE();
    case 2544:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2545:
      if (lookahead == 'n') ADVANCE(2804);
      END_STATE();
    case 2546:
      if (lookahead == 'e') ADVANCE(2805);
      END_STATE();
    case 2547:
      if (lookahead == 'e') ADVANCE(2806);
      END_STATE();
    case 2548:
      if (lookahead == 'n') ADVANCE(2807);
      END_STATE();
    case 2549:
      if (lookahead == 'o') ADVANCE(2808);
      END_STATE();
    case 2550:
      if (lookahead == 't') ADVANCE(2809);
      END_STATE();
    case 2551:
      if (lookahead == 'e') ADVANCE(2810);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(anon_sym_PowerGeneration);
      END_STATE();
    case 2553:
      if (lookahead == 'e') ADVANCE(2811);
      if (lookahead == 'i') ADVANCE(2812);
      END_STATE();
    case 2554:
      if (lookahead == 'a') ADVANCE(2813);
      END_STATE();
    case 2555:
      if (lookahead == 'n') ADVANCE(2814);
      END_STATE();
    case 2556:
      if (lookahead == 'l') ADVANCE(2815);
      END_STATE();
    case 2557:
      if (lookahead == 'l') ADVANCE(2816);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(anon_sym_PressureOutput2);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(anon_sym_PressureSetting);
      END_STATE();
    case 2560:
      if (lookahead == 'i') ADVANCE(2817);
      END_STATE();
    case 2561:
      if (lookahead == 'o') ADVANCE(2818);
      END_STATE();
    case 2562:
      if (lookahead == 'o') ADVANCE(2819);
      END_STATE();
    case 2563:
      if (lookahead == 'o') ADVANCE(2820);
      END_STATE();
    case 2564:
      if (lookahead == 'e') ADVANCE(2821);
      END_STATE();
    case 2565:
      if (lookahead == 'u') ADVANCE(2822);
      END_STATE();
    case 2566:
      if (lookahead == 't') ADVANCE(2823);
      END_STATE();
    case 2567:
      if (lookahead == 'p') ADVANCE(2824);
      END_STATE();
    case 2568:
      if (lookahead == 't') ADVANCE(2825);
      END_STATE();
    case 2569:
      if (lookahead == 'd') ADVANCE(2826);
      END_STATE();
    case 2570:
      if (lookahead == 't') ADVANCE(2827);
      END_STATE();
    case 2571:
      if (lookahead == 'u') ADVANCE(2828);
      END_STATE();
    case 2572:
      if (lookahead == 'n') ADVANCE(2829);
      END_STATE();
    case 2573:
      if (lookahead == 'u') ADVANCE(2830);
      END_STATE();
    case 2574:
      if (lookahead == 't') ADVANCE(2831);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(anon_sym_RatioSteamInput);
      if (lookahead == '2') ADVANCE(2832);
      END_STATE();
    case 2576:
      if (lookahead == 't') ADVANCE(2833);
      END_STATE();
    case 2577:
      if (lookahead == 'n') ADVANCE(2834);
      END_STATE();
    case 2578:
      if (lookahead == 'u') ADVANCE(2835);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(anon_sym_RatioWaterInput);
      if (lookahead == '2') ADVANCE(2836);
      END_STATE();
    case 2580:
      if (lookahead == 't') ADVANCE(2837);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(anon_sym_ReEntryAltitude);
      END_STATE();
    case 2582:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 2583:
      if (lookahead == 'o') ADVANCE(2838);
      END_STATE();
    case 2584:
      if (lookahead == 'o') ADVANCE(2839);
      END_STATE();
    case 2585:
      if (lookahead == 'g') ADVANCE(2840);
      END_STATE();
    case 2586:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2587:
      if (lookahead == 's') ADVANCE(2841);
      END_STATE();
    case 2588:
      if (lookahead == 'a') ADVANCE(2842);
      END_STATE();
    case 2589:
      if (lookahead == 'r') ADVANCE(2843);
      END_STATE();
    case 2590:
      if (lookahead == 'e') ADVANCE(2844);
      END_STATE();
    case 2591:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2592:
      if (lookahead == 'i') ADVANCE(2845);
      END_STATE();
    case 2593:
      if (lookahead == 'i') ADVANCE(2846);
      END_STATE();
    case 2594:
      if (lookahead == 't') ADVANCE(2847);
      END_STATE();
    case 2595:
      if (lookahead == 'i') ADVANCE(2848);
      END_STATE();
    case 2596:
      if (lookahead == 'a') ADVANCE(2849);
      END_STATE();
    case 2597:
      if (lookahead == 'H') ADVANCE(2850);
      END_STATE();
    case 2598:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 2599:
      if (lookahead == 'n') ADVANCE(2851);
      END_STATE();
    case 2600:
      if (lookahead == 'l') ADVANCE(2852);
      END_STATE();
    case 2601:
      if (lookahead == 'e') ADVANCE(2853);
      END_STATE();
    case 2602:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2603:
      if (lookahead == 'd') ADVANCE(2854);
      END_STATE();
    case 2604:
      if (lookahead == 'i') ADVANCE(2855);
      END_STATE();
    case 2605:
      if (lookahead == 'r') ADVANCE(2856);
      END_STATE();
    case 2606:
      if (lookahead == 'a') ADVANCE(2857);
      END_STATE();
    case 2607:
      if (lookahead == 'i') ADVANCE(2858);
      END_STATE();
    case 2608:
      if (lookahead == 'r') ADVANCE(2859);
      END_STATE();
    case 2609:
      if (lookahead == 'C') ADVANCE(2860);
      END_STATE();
    case 2610:
      if (lookahead == 'd') ADVANCE(2861);
      END_STATE();
    case 2611:
      if (lookahead == 'r') ADVANCE(2862);
      END_STATE();
    case 2612:
      if (lookahead == 'a') ADVANCE(2863);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(anon_sym_SolarIrradiance);
      END_STATE();
    case 2614:
      if (lookahead == 'p') ADVANCE(2864);
      END_STATE();
    case 2615:
      if (lookahead == 'm') ADVANCE(2865);
      END_STATE();
    case 2616:
      if (lookahead == 'o') ADVANCE(2866);
      END_STATE();
    case 2617:
      if (lookahead == 'f') ADVANCE(2867);
      END_STATE();
    case 2618:
      if (lookahead == 'o') ADVANCE(2868);
      END_STATE();
    case 2619:
      if (lookahead == 'e') ADVANCE(2869);
      END_STATE();
    case 2620:
      if (lookahead == 't') ADVANCE(2870);
      END_STATE();
    case 2621:
      if (lookahead == 'e') ADVANCE(2871);
      END_STATE();
    case 2622:
      if (lookahead == 's') ADVANCE(2872);
      END_STATE();
    case 2623:
      if (lookahead == 'o') ADVANCE(2873);
      END_STATE();
    case 2624:
      if (lookahead == 'o') ADVANCE(2874);
      END_STATE();
    case 2625:
      if (lookahead == 'c') ADVANCE(2875);
      END_STATE();
    case 2626:
      if (lookahead == 'i') ADVANCE(2876);
      END_STATE();
    case 2627:
      if (lookahead == 'i') ADVANCE(2877);
      END_STATE();
    case 2628:
      if (lookahead == 'e') ADVANCE(2878);
      END_STATE();
    case 2629:
      if (lookahead == 'n') ADVANCE(2879);
      END_STATE();
    case 2630:
      if (lookahead == 'l') ADVANCE(2880);
      END_STATE();
    case 2631:
      if (lookahead == 'o') ADVANCE(2881);
      END_STATE();
    case 2632:
      if (lookahead == 's') ADVANCE(2882);
      END_STATE();
    case 2633:
      if (lookahead == 'i') ADVANCE(2883);
      END_STATE();
    case 2634:
      if (lookahead == 'o') ADVANCE(2884);
      END_STATE();
    case 2635:
      if (lookahead == 'i') ADVANCE(2885);
      END_STATE();
    case 2636:
      if (lookahead == 'n') ADVANCE(2886);
      END_STATE();
    case 2637:
      if (lookahead == 'm') ADVANCE(2887);
      END_STATE();
    case 2638:
      if (lookahead == 'l') ADVANCE(2888);
      END_STATE();
    case 2639:
      if (lookahead == 'r') ADVANCE(2889);
      END_STATE();
    case 2640:
      if (lookahead == 'o') ADVANCE(2890);
      END_STATE();
    case 2641:
      if (lookahead == 'd') ADVANCE(2891);
      END_STATE();
    case 2642:
      if (lookahead == 'e') ADVANCE(2892);
      END_STATE();
    case 2643:
      if (lookahead == 'r') ADVANCE(2893);
      END_STATE();
    case 2644:
      if (lookahead == 't') ADVANCE(2894);
      END_STATE();
    case 2645:
      if (lookahead == 'u') ADVANCE(2895);
      END_STATE();
    case 2646:
      if (lookahead == 'i') ADVANCE(2896);
      END_STATE();
    case 2647:
      if (lookahead == 'o') ADVANCE(2897);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(anon_sym_TotalMolesInput);
      if (lookahead == '2') ADVANCE(2898);
      END_STATE();
    case 2649:
      if (lookahead == 't') ADVANCE(2899);
      END_STATE();
    case 2650:
      if (lookahead == '.') ADVANCE(2900);
      END_STATE();
    case 2651:
      if (lookahead == 'd') ADVANCE(2901);
      END_STATE();
    case 2652:
      if (lookahead == 'e') ADVANCE(2902);
      END_STATE();
    case 2653:
      if (lookahead == 'n') ADVANCE(2903);
      END_STATE();
    case 2654:
      if (lookahead == 'i') ADVANCE(2904);
      END_STATE();
    case 2655:
      if (lookahead == 'h') ADVANCE(2905);
      END_STATE();
    case 2656:
      if (lookahead == 'n') ADVANCE(2906);
      END_STATE();
    case 2657:
      if (lookahead == 'u') ADVANCE(2907);
      END_STATE();
    case 2658:
      if (lookahead == 'g') ADVANCE(2908);
      END_STATE();
    case 2659:
      if (lookahead == 'a') ADVANCE(2909);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(anon_sym_ChartedNavPoints);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(anon_sym_CollectableGoods);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(anon_sym_CombustionInput2);
      END_STATE();
    case 2663:
      if (lookahead == 'r') ADVANCE(2910);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(anon_sym_CombustionOutput);
      if (lookahead == '2') ADVANCE(2911);
      END_STATE();
    case 2665:
      if (lookahead == 'o') ADVANCE(2912);
      END_STATE();
    case 2666:
      if (lookahead == 'd') ADVANCE(2913);
      END_STATE();
    case 2667:
      if (lookahead == 'n') ADVANCE(2914);
      END_STATE();
    case 2668:
      if (lookahead == 't') ADVANCE(2915);
      END_STATE();
    case 2669:
      if (lookahead == 'a') ADVANCE(2916);
      END_STATE();
    case 2670:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2671:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 2672:
      if (lookahead == 'n') ADVANCE(2917);
      END_STATE();
    case 2673:
      if (lookahead == 'i') ADVANCE(2918);
      END_STATE();
    case 2674:
      if (lookahead == 'e') ADVANCE(2919);
      END_STATE();
    case 2675:
      if (lookahead == 'o') ADVANCE(2920);
      END_STATE();
    case 2676:
      if (lookahead == 'r') ADVANCE(2921);
      END_STATE();
    case 2677:
      if (lookahead == 'd') ADVANCE(2922);
      END_STATE();
    case 2678:
      if (lookahead == 't') ADVANCE(2923);
      END_STATE();
    case 2679:
      if (lookahead == 'y') ADVANCE(2924);
      END_STATE();
    case 2680:
      if (lookahead == 'l') ADVANCE(2925);
      END_STATE();
    case 2681:
      if (lookahead == 'l') ADVANCE(2926);
      END_STATE();
    case 2682:
      if (lookahead == 'x') ADVANCE(2927);
      END_STATE();
    case 2683:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2684:
      if (lookahead == 'W') ADVANCE(2928);
      END_STATE();
    case 2685:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2686:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2687:
      if (lookahead == 'g') ADVANCE(2929);
      END_STATE();
    case 2688:
      if (lookahead == 'a') ADVANCE(2930);
      END_STATE();
    case 2689:
      if (lookahead == 'a') ADVANCE(2931);
      END_STATE();
    case 2690:
      if (lookahead == 'm') ADVANCE(2932);
      END_STATE();
    case 2691:
      if (lookahead == 'f') ADVANCE(2933);
      END_STATE();
    case 2692:
      if (lookahead == 'l') ADVANCE(2934);
      END_STATE();
    case 2693:
      if (lookahead == 'o') ADVANCE(2935);
      END_STATE();
    case 2694:
      if (lookahead == 'a') ADVANCE(2936);
      END_STATE();
    case 2695:
      if (lookahead == 'n') ADVANCE(2937);
      END_STATE();
    case 2696:
      if (lookahead == 'c') ADVANCE(2938);
      END_STATE();
    case 2697:
      if (lookahead == 't') ADVANCE(2939);
      if (lookahead == 'x') ADVANCE(2940);
      END_STATE();
    case 2698:
      if (lookahead == 'n') ADVANCE(2941);
      END_STATE();
    case 2699:
      if (lookahead == 'c') ADVANCE(2942);
      END_STATE();
    case 2700:
      if (lookahead == 'e') ADVANCE(2943);
      END_STATE();
    case 2701:
      if (lookahead == 'e') ADVANCE(2944);
      END_STATE();
    case 2702:
      if (lookahead == 'a') ADVANCE(2945);
      END_STATE();
    case 2703:
      if (lookahead == 'f') ADVANCE(2946);
      END_STATE();
    case 2704:
      if (lookahead == 'e') ADVANCE(2947);
      END_STATE();
    case 2705:
      if (lookahead == 'r') ADVANCE(2948);
      END_STATE();
    case 2706:
      if (lookahead == 'm') ADVANCE(2949);
      END_STATE();
    case 2707:
      if (lookahead == 'l') ADVANCE(2950);
      END_STATE();
    case 2708:
      if (lookahead == 'r') ADVANCE(2951);
      END_STATE();
    case 2709:
      if (lookahead == 't') ADVANCE(2952);
      END_STATE();
    case 2710:
      if (lookahead == 'e') ADVANCE(2953);
      END_STATE();
    case 2711:
      if (lookahead == 'e') ADVANCE(2954);
      END_STATE();
    case 2712:
      if (lookahead == 'n') ADVANCE(2955);
      END_STATE();
    case 2713:
      if (lookahead == 'u') ADVANCE(2956);
      END_STATE();
    case 2714:
      if (lookahead == 'm') ADVANCE(2957);
      END_STATE();
    case 2715:
      if (lookahead == 'i') ADVANCE(2958);
      END_STATE();
    case 2716:
      if (lookahead == 'l') ADVANCE(2959);
      END_STATE();
    case 2717:
      if (lookahead == 'd') ADVANCE(2960);
      END_STATE();
    case 2718:
      if (lookahead == 'e') ADVANCE(2961);
      END_STATE();
    case 2719:
      if (lookahead == 't') ADVANCE(2962);
      END_STATE();
    case 2720:
      if (lookahead == 't') ADVANCE(2963);
      END_STATE();
    case 2721:
      if (lookahead == 't') ADVANCE(2964);
      END_STATE();
    case 2722:
      if (lookahead == 't') ADVANCE(2965);
      END_STATE();
    case 2723:
      if (lookahead == 't') ADVANCE(2966);
      END_STATE();
    case 2724:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 2725:
      if (lookahead == 'a') ADVANCE(2967);
      END_STATE();
    case 2726:
      if (lookahead == 'e') ADVANCE(2968);
      END_STATE();
    case 2727:
      if (lookahead == 'c') ADVANCE(2969);
      END_STATE();
    case 2728:
      if (lookahead == 'o') ADVANCE(2970);
      END_STATE();
    case 2729:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2730:
      if (lookahead == 'r') ADVANCE(2971);
      END_STATE();
    case 2731:
      if (lookahead == 'o') ADVANCE(2972);
      END_STATE();
    case 2732:
      if (lookahead == 'S') ADVANCE(2973);
      END_STATE();
    case 2733:
      if (lookahead == 'n') ADVANCE(2974);
      END_STATE();
    case 2734:
      if (lookahead == 't') ADVANCE(2975);
      END_STATE();
    case 2735:
      if (lookahead == 'C') ADVANCE(2976);
      if (lookahead == 'Q') ADVANCE(2977);
      if (lookahead == 'S') ADVANCE(2978);
      END_STATE();
    case 2736:
      if (lookahead == 't') ADVANCE(2979);
      END_STATE();
    case 2737:
      if (lookahead == 'C') ADVANCE(2980);
      END_STATE();
    case 2738:
      if (lookahead == 'r') ADVANCE(2981);
      END_STATE();
    case 2739:
      if (lookahead == 'd') ADVANCE(2982);
      END_STATE();
    case 2740:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2741:
      if (lookahead == 'n') ADVANCE(2983);
      END_STATE();
    case 2742:
      if (lookahead == 'C') ADVANCE(2984);
      if (lookahead == 'Q') ADVANCE(2985);
      if (lookahead == 'S') ADVANCE(2986);
      END_STATE();
    case 2743:
      if (lookahead == 'a') ADVANCE(2987);
      END_STATE();
    case 2744:
      if (lookahead == 'o') ADVANCE(2988);
      END_STATE();
    case 2745:
      if (lookahead == 'm') ADVANCE(2989);
      END_STATE();
    case 2746:
      if (lookahead == 'R') ADVANCE(2990);
      END_STATE();
    case 2747:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 2748:
      if (lookahead == 'l') ADVANCE(2991);
      END_STATE();
    case 2749:
      if (lookahead == 'u') ADVANCE(2992);
      END_STATE();
    case 2750:
      if (lookahead == 'm') ADVANCE(2993);
      END_STATE();
    case 2751:
      if (lookahead == 'n') ADVANCE(2994);
      END_STATE();
    case 2752:
      if (lookahead == 'a') ADVANCE(2995);
      END_STATE();
    case 2753:
      if (lookahead == 'i') ADVANCE(2996);
      END_STATE();
    case 2754:
      if (lookahead == 'e') ADVANCE(2997);
      END_STATE();
    case 2755:
      if (lookahead == 'a') ADVANCE(2998);
      END_STATE();
    case 2756:
      if (lookahead == 'M') ADVANCE(2999);
      END_STATE();
    case 2757:
      if (lookahead == 'f') ADVANCE(3000);
      END_STATE();
    case 2758:
      if (lookahead == 'r') ADVANCE(3001);
      END_STATE();
    case 2759:
      if (lookahead == 'a') ADVANCE(3002);
      if (lookahead == 'e') ADVANCE(3003);
      END_STATE();
    case 2760:
      if (lookahead == 'o') ADVANCE(3004);
      END_STATE();
    case 2761:
      if (lookahead == 'c') ADVANCE(3005);
      END_STATE();
    case 2762:
      if (lookahead == 'e') ADVANCE(3006);
      END_STATE();
    case 2763:
      if (lookahead == 'o') ADVANCE(3007);
      END_STATE();
    case 2764:
      if (lookahead == 'e') ADVANCE(3008);
      END_STATE();
    case 2765:
      if (lookahead == 'H') ADVANCE(3009);
      END_STATE();
    case 2766:
      if (lookahead == 'r') ADVANCE(3010);
      END_STATE();
    case 2767:
      if (lookahead == 's') ADVANCE(3011);
      END_STATE();
    case 2768:
      if (lookahead == 't') ADVANCE(3012);
      END_STATE();
    case 2769:
      if (lookahead == 'a') ADVANCE(3013);
      END_STATE();
    case 2770:
      if (lookahead == 'y') ADVANCE(3014);
      END_STATE();
    case 2771:
      if (lookahead == 'i') ADVANCE(3015);
      END_STATE();
    case 2772:
      if (lookahead == 'i') ADVANCE(3016);
      END_STATE();
    case 2773:
      if (lookahead == 'x') ADVANCE(3017);
      END_STATE();
    case 2774:
      if (lookahead == 'o') ADVANCE(3018);
      END_STATE();
    case 2775:
      if (lookahead == 't') ADVANCE(3019);
      END_STATE();
    case 2776:
      if (lookahead == 'o') ADVANCE(3020);
      END_STATE();
    case 2777:
      if (lookahead == 'a') ADVANCE(3021);
      END_STATE();
    case 2778:
      if (lookahead == 'y') ADVANCE(3022);
      END_STATE();
    case 2779:
      if (lookahead == 't') ADVANCE(3023);
      END_STATE();
    case 2780:
      if (lookahead == 'H') ADVANCE(3024);
      END_STATE();
    case 2781:
      if (lookahead == 'n') ADVANCE(3025);
      END_STATE();
    case 2782:
      if (lookahead == 't') ADVANCE(3026);
      END_STATE();
    case 2783:
      if (lookahead == 'e') ADVANCE(3027);
      END_STATE();
    case 2784:
      if (lookahead == 'F') ADVANCE(3028);
      END_STATE();
    case 2785:
      if (lookahead == 's') ADVANCE(3029);
      END_STATE();
    case 2786:
      if (lookahead == 'j') ADVANCE(3030);
      END_STATE();
    case 2787:
      if (lookahead == 'g') ADVANCE(3031);
      END_STATE();
    case 2788:
      if (lookahead == 'I') ADVANCE(3032);
      if (lookahead == 'S') ADVANCE(3033);
      END_STATE();
    case 2789:
      if (lookahead == 'n') ADVANCE(3034);
      END_STATE();
    case 2790:
      if (lookahead == 'r') ADVANCE(3035);
      END_STATE();
    case 2791:
      if (lookahead == 'l') ADVANCE(3036);
      END_STATE();
    case 2792:
      if (lookahead == 'P') ADVANCE(3037);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 2793:
      if (lookahead == 'a') ADVANCE(3038);
      END_STATE();
    case 2794:
      if (lookahead == 'l') ADVANCE(3039);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(3040);
      END_STATE();
    case 2796:
      if (lookahead == 'D') ADVANCE(3041);
      END_STATE();
    case 2797:
      if (lookahead == 'o') ADVANCE(3042);
      END_STATE();
    case 2798:
      if (lookahead == 'u') ADVANCE(3043);
      END_STATE();
    case 2799:
      if (lookahead == 'o') ADVANCE(3044);
      END_STATE();
    case 2800:
      if (lookahead == 't') ADVANCE(3045);
      END_STATE();
    case 2801:
      if (lookahead == 'a') ADVANCE(3046);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'O') ADVANCE(3047);
      END_STATE();
    case 2803:
      if (lookahead == 'e') ADVANCE(3048);
      END_STATE();
    case 2804:
      if (lookahead == 'g') ADVANCE(3049);
      END_STATE();
    case 2805:
      if (lookahead == 'q') ADVANCE(3050);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(anon_sym_MineablesInQueue);
      END_STATE();
    case 2807:
      if (lookahead == 'i') ADVANCE(3051);
      END_STATE();
    case 2808:
      if (lookahead == 'n') ADVANCE(3052);
      END_STATE();
    case 2809:
      if (lookahead == 'T') ADVANCE(3053);
      END_STATE();
    case 2810:
      if (lookahead == 'r') ADVANCE(3054);
      END_STATE();
    case 2811:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2812:
      if (lookahead == 'n') ADVANCE(3055);
      END_STATE();
    case 2813:
      if (lookahead == 'r') ADVANCE(3056);
      END_STATE();
    case 2814:
      if (lookahead == 'c') ADVANCE(3057);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(anon_sym_PressureExternal);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(anon_sym_PressureInternal);
      END_STATE();
    case 2817:
      if (lookahead == 'd') ADVANCE(3058);
      END_STATE();
    case 2818:
      if (lookahead == 'n') ADVANCE(3059);
      END_STATE();
    case 2819:
      if (lookahead == 'g') ADVANCE(3060);
      END_STATE();
    case 2820:
      if (lookahead == 'g') ADVANCE(3061);
      if (lookahead == 'u') ADVANCE(3062);
      END_STATE();
    case 2821:
      if (lookahead == 'n') ADVANCE(3063);
      END_STATE();
    case 2822:
      if (lookahead == 't') ADVANCE(3064);
      END_STATE();
    case 2823:
      if (lookahead == 'i') ADVANCE(3065);
      END_STATE();
    case 2824:
      if (lookahead == 'u') ADVANCE(3066);
      END_STATE();
    case 2825:
      if (lookahead == 'p') ADVANCE(3067);
      END_STATE();
    case 2826:
      if (lookahead == 'e') ADVANCE(3068);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(anon_sym_RatioOxygenInput);
      if (lookahead == '2') ADVANCE(3069);
      END_STATE();
    case 2828:
      if (lookahead == 't') ADVANCE(3070);
      END_STATE();
    case 2829:
      if (lookahead == 'p') ADVANCE(3071);
      END_STATE();
    case 2830:
      if (lookahead == 't') ADVANCE(3072);
      END_STATE();
    case 2831:
      if (lookahead == 'e') ADVANCE(3073);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(anon_sym_RatioSteamInput2);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(anon_sym_RatioSteamOutput);
      if (lookahead == '2') ADVANCE(3074);
      END_STATE();
    case 2834:
      if (lookahead == 'p') ADVANCE(3075);
      END_STATE();
    case 2835:
      if (lookahead == 't') ADVANCE(3076);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(anon_sym_RatioWaterInput2);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(anon_sym_RatioWaterOutput);
      if (lookahead == '2') ADVANCE(3077);
      END_STATE();
    case 2838:
      if (lookahead == 'T') ADVANCE(3078);
      END_STATE();
    case 2839:
      if (lookahead == 'T') ADVANCE(3079);
      END_STATE();
    case 2840:
      if (lookahead == 'e') ADVANCE(3080);
      END_STATE();
    case 2841:
      if (lookahead == 'C') ADVANCE(3081);
      END_STATE();
    case 2842:
      if (lookahead == 'n') ADVANCE(3082);
      END_STATE();
    case 2843:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 2844:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2845:
      if (lookahead == 'd') ADVANCE(3083);
      END_STATE();
    case 2846:
      if (lookahead == 't') ADVANCE(3084);
      END_STATE();
    case 2847:
      if (lookahead == 'C') ADVANCE(3085);
      END_STATE();
    case 2848:
      if (lookahead == 's') ADVANCE(3086);
      END_STATE();
    case 2849:
      if (lookahead == 'n') ADVANCE(3087);
      END_STATE();
    case 2850:
      if (lookahead == 'e') ADVANCE(3088);
      END_STATE();
    case 2851:
      if (lookahead == 'i') ADVANCE(3089);
      END_STATE();
    case 2852:
      if (lookahead == 't') ADVANCE(3090);
      END_STATE();
    case 2853:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2854:
      if (lookahead == 'B') ADVANCE(3091);
      if (lookahead == 'C') ADVANCE(3092);
      END_STATE();
    case 2855:
      if (lookahead == 'n') ADVANCE(3093);
      END_STATE();
    case 2856:
      if (lookahead == 'b') ADVANCE(3094);
      END_STATE();
    case 2857:
      if (lookahead == 'm') ADVANCE(3095);
      END_STATE();
    case 2858:
      if (lookahead == 'n') ADVANCE(3096);
      END_STATE();
    case 2859:
      if (lookahead == 'P') ADVANCE(3097);
      END_STATE();
    case 2860:
      if (lookahead == 'a') ADVANCE(3098);
      END_STATE();
    case 2861:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 2862:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 2863:
      if (lookahead == 'g') ADVANCE(3099);
      END_STATE();
    case 2864:
      if (lookahead == 'l') ADVANCE(3100);
      END_STATE();
    case 2865:
      if (lookahead == 'o') ADVANCE(3101);
      END_STATE();
    case 2866:
      if (lookahead == 't') ADVANCE(3102);
      END_STATE();
    case 2867:
      if (lookahead == 'a') ADVANCE(3103);
      END_STATE();
    case 2868:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2869:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2870:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2871:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 2872:
      if (lookahead == 'o') ADVANCE(3104);
      END_STATE();
    case 2873:
      if (lookahead == 'r') ADVANCE(3105);
      END_STATE();
    case 2874:
      if (lookahead == 'l') ADVANCE(3106);
      END_STATE();
    case 2875:
      if (lookahead == 'l') ADVANCE(3107);
      END_STATE();
    case 2876:
      if (lookahead == 's') ADVANCE(3108);
      END_STATE();
    case 2877:
      if (lookahead == 'r') ADVANCE(3109);
      END_STATE();
    case 2878:
      if (lookahead == 's') ADVANCE(3110);
      END_STATE();
    case 2879:
      if (lookahead == 'D') ADVANCE(3111);
      END_STATE();
    case 2880:
      if (lookahead == 'e') ADVANCE(3112);
      END_STATE();
    case 2881:
      if (lookahead == 'n') ADVANCE(3113);
      END_STATE();
    case 2882:
      if (lookahead == 'D') ADVANCE(3114);
      END_STATE();
    case 2883:
      if (lookahead == 'g') ADVANCE(3115);
      END_STATE();
    case 2884:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 2885:
      if (lookahead == 'n') ADVANCE(3116);
      END_STATE();
    case 2886:
      if (lookahead == 'c') ADVANCE(3117);
      END_STATE();
    case 2887:
      if (lookahead == 'i') ADVANCE(3118);
      END_STATE();
    case 2888:
      if (lookahead == 'u') ADVANCE(3119);
      END_STATE();
    case 2889:
      if (lookahead == 'e') ADVANCE(3120);
      END_STATE();
    case 2890:
      if (lookahead == 'm') ADVANCE(3121);
      END_STATE();
    case 2891:
      if (lookahead == 'e') ADVANCE(3122);
      END_STATE();
    case 2892:
      if (lookahead == 'r') ADVANCE(3123);
      END_STATE();
    case 2893:
      if (lookahead == 'n') ADVANCE(3124);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(anon_sym_TemperatureInput);
      if (lookahead == '2') ADVANCE(3125);
      END_STATE();
    case 2895:
      if (lookahead == 't') ADVANCE(3126);
      END_STATE();
    case 2896:
      if (lookahead == 'n') ADVANCE(3127);
      END_STATE();
    case 2897:
      if (lookahead == 'n') ADVANCE(3128);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(anon_sym_TotalMolesInput2);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(anon_sym_TotalMolesOutput);
      if (lookahead == '2') ADVANCE(3129);
      END_STATE();
    case 2900:
      if (lookahead == 'A') ADVANCE(3130);
      if (lookahead == 'P') ADVANCE(3131);
      END_STATE();
    case 2901:
      if (lookahead == 'e') ADVANCE(3132);
      END_STATE();
    case 2902:
      if (lookahead == 'X') ADVANCE(3133);
      if (lookahead == 'Y') ADVANCE(3134);
      if (lookahead == 'Z') ADVANCE(3135);
      END_STATE();
    case 2903:
      if (lookahead == 't') ADVANCE(3136);
      END_STATE();
    case 2904:
      if (lookahead == 'e') ADVANCE(3137);
      END_STATE();
    case 2905:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 2906:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2907:
      if (lookahead == 'r') ADVANCE(3138);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(anon_sym_BurnTimeRemaining);
      END_STATE();
    case 2909:
      if (lookahead == 's') ADVANCE(3139);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(anon_sym_CombustionLimiter);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(anon_sym_CombustionOutput2);
      END_STATE();
    case 2912:
      if (lookahead == 'd') ADVANCE(3140);
      END_STATE();
    case 2913:
      if (lookahead == 'e') ADVANCE(3141);
      END_STATE();
    case 2914:
      if (lookahead == 'w') ADVANCE(3142);
      END_STATE();
    case 2915:
      if (lookahead == 'i') ADVANCE(3143);
      END_STATE();
    case 2916:
      if (lookahead == 'r') ADVANCE(3144);
      END_STATE();
    case 2917:
      if (lookahead == 's') ADVANCE(3145);
      END_STATE();
    case 2918:
      if (lookahead == 'e') ADVANCE(3146);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(anon_sym_FlightControlRule);
      END_STATE();
    case 2920:
      if (lookahead == 'x') ADVANCE(3147);
      END_STATE();
    case 2921:
      if (lookahead == 'b') ADVANCE(3148);
      END_STATE();
    case 2922:
      if (lookahead == 'r') ADVANCE(3149);
      END_STATE();
    case 2923:
      if (lookahead == 'r') ADVANCE(3150);
      END_STATE();
    case 2924:
      if (lookahead == 'g') ADVANCE(3151);
      END_STATE();
    case 2925:
      if (lookahead == 'l') ADVANCE(3152);
      END_STATE();
    case 2926:
      if (lookahead == 'a') ADVANCE(3153);
      END_STATE();
    case 2927:
      if (lookahead == 'i') ADVANCE(3154);
      END_STATE();
    case 2928:
      if (lookahead == 'a') ADVANCE(3155);
      END_STATE();
    case 2929:
      if (lookahead == 'r') ADVANCE(3156);
      END_STATE();
    case 2930:
      if (lookahead == 'r') ADVANCE(3157);
      END_STATE();
    case 2931:
      if (lookahead == 's') ADVANCE(3158);
      END_STATE();
    case 2932:
      if (lookahead == 'a') ADVANCE(3159);
      END_STATE();
    case 2933:
      if (lookahead == 'i') ADVANCE(3160);
      END_STATE();
    case 2934:
      if (lookahead == 't') ADVANCE(3161);
      END_STATE();
    case 2935:
      if (lookahead == 'w') ADVANCE(3162);
      END_STATE();
    case 2936:
      if (lookahead == 'l') ADVANCE(3163);
      END_STATE();
    case 2937:
      if (lookahead == 'e') ADVANCE(3164);
      END_STATE();
    case 2938:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 2939:
      if (lookahead == 'u') ADVANCE(3165);
      END_STATE();
    case 2940:
      if (lookahead == 'Q') ADVANCE(3166);
      END_STATE();
    case 2941:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2942:
      if (lookahead == 'u') ADVANCE(3167);
      END_STATE();
    case 2943:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 2944:
      if (lookahead == 'f') ADVANCE(3168);
      if (lookahead == 's') ADVANCE(3169);
      END_STATE();
    case 2945:
      if (lookahead == 'n') ADVANCE(3170);
      END_STATE();
    case 2946:
      if (lookahead == 'e') ADVANCE(3171);
      END_STATE();
    case 2947:
      if (lookahead == 'd') ADVANCE(3172);
      END_STATE();
    case 2948:
      if (lookahead == 't') ADVANCE(3173);
      END_STATE();
    case 2949:
      if (lookahead == 'p') ADVANCE(3174);
      END_STATE();
    case 2950:
      if (lookahead == 'u') ADVANCE(3175);
      END_STATE();
    case 2951:
      if (lookahead == 'a') ADVANCE(3176);
      END_STATE();
    case 2952:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 2953:
      if (lookahead == 'a') ADVANCE(3177);
      END_STATE();
    case 2954:
      if (lookahead == 'n') ADVANCE(3178);
      END_STATE();
    case 2955:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 2956:
      if (lookahead == 't') ADVANCE(3179);
      END_STATE();
    case 2957:
      if (lookahead == 'e') ADVANCE(3180);
      END_STATE();
    case 2958:
      if (lookahead == 'a') ADVANCE(3181);
      END_STATE();
    case 2959:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(428);
      END_STATE();
    case 2960:
      if (lookahead == 'N') ADVANCE(3182);
      END_STATE();
    case 2961:
      if (lookahead == 'm') ADVANCE(3183);
      END_STATE();
    case 2962:
      if (lookahead == 'a') ADVANCE(3184);
      END_STATE();
    case 2963:
      if (lookahead == 'i') ADVANCE(3185);
      END_STATE();
    case 2964:
      if (lookahead == 'i') ADVANCE(3186);
      END_STATE();
    case 2965:
      if (lookahead == 'T') ADVANCE(3187);
      END_STATE();
    case 2966:
      if (lookahead == 'C') ADVANCE(3188);
      if (lookahead == 'R') ADVANCE(3189);
      END_STATE();
    case 2967:
      if (lookahead == 't') ADVANCE(3190);
      END_STATE();
    case 2968:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 2969:
      if (lookahead == 'e') ADVANCE(3191);
      END_STATE();
    case 2970:
      if (lookahead == 'n') ADVANCE(3192);
      END_STATE();
    case 2971:
      if (lookahead == 'i') ADVANCE(3193);
      END_STATE();
    case 2972:
      if (lookahead == 'r') ADVANCE(3194);
      END_STATE();
    case 2973:
      if (lookahead == 't') ADVANCE(3195);
      END_STATE();
    case 2974:
      if (lookahead == 'm') ADVANCE(3196);
      END_STATE();
    case 2975:
      if (lookahead == 'V') ADVANCE(3197);
      END_STATE();
    case 2976:
      if (lookahead == 'o') ADVANCE(3198);
      END_STATE();
    case 2977:
      if (lookahead == 'u') ADVANCE(3199);
      END_STATE();
    case 2978:
      if (lookahead == 'l') ADVANCE(3200);
      END_STATE();
    case 2979:
      if (lookahead == 'i') ADVANCE(3201);
      END_STATE();
    case 2980:
      if (lookahead == 'o') ADVANCE(3202);
      END_STATE();
    case 2981:
      if (lookahead == 'i') ADVANCE(3203);
      END_STATE();
    case 2982:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 2983:
      if (lookahead == 't') ADVANCE(3204);
      END_STATE();
    case 2984:
      if (lookahead == 'o') ADVANCE(3205);
      END_STATE();
    case 2985:
      if (lookahead == 'u') ADVANCE(3206);
      END_STATE();
    case 2986:
      if (lookahead == 'l') ADVANCE(3207);
      END_STATE();
    case 2987:
      if (lookahead == 't') ADVANCE(3208);
      END_STATE();
    case 2988:
      if (lookahead == 'g') ADVANCE(3209);
      END_STATE();
    case 2989:
      if (lookahead == 'b') ADVANCE(3210);
      END_STATE();
    case 2990:
      if (lookahead == 'e') ADVANCE(3211);
      END_STATE();
    case 2991:
      if (lookahead == 'e') ADVANCE(3212);
      END_STATE();
    case 2992:
      if (lookahead == 'a') ADVANCE(3213);
      END_STATE();
    case 2993:
      if (lookahead == 'W') ADVANCE(3214);
      END_STATE();
    case 2994:
      if (lookahead == 't') ADVANCE(3215);
      END_STATE();
    case 2995:
      if (lookahead == 't') ADVANCE(3216);
      END_STATE();
    case 2996:
      if (lookahead == 'o') ADVANCE(3217);
      END_STATE();
    case 2997:
      if (lookahead == 'r') ADVANCE(3218);
      END_STATE();
    case 2998:
      if (lookahead == 't') ADVANCE(3219);
      END_STATE();
    case 2999:
      if (lookahead == 'o') ADVANCE(3220);
      END_STATE();
    case 3000:
      if (lookahead == 'f') ADVANCE(3221);
      END_STATE();
    case 3001:
      if (lookahead == 'o') ADVANCE(3222);
      END_STATE();
    case 3002:
      if (lookahead == 's') ADVANCE(3223);
      END_STATE();
    case 3003:
      if (lookahead == 'a') ADVANCE(3224);
      END_STATE();
    case 3004:
      if (lookahead == 'n') ADVANCE(3225);
      END_STATE();
    case 3005:
      if (lookahead == 't') ADVANCE(3226);
      END_STATE();
    case 3006:
      if (lookahead == 'n') ADVANCE(3227);
      END_STATE();
    case 3007:
      if (lookahead == 't') ADVANCE(3228);
      END_STATE();
    case 3008:
      if (lookahead == 'q') ADVANCE(3229);
      END_STATE();
    case 3009:
      if (lookahead == 'a') ADVANCE(3230);
      END_STATE();
    case 3010:
      if (lookahead == 'e') ADVANCE(3231);
      END_STATE();
    case 3011:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3012:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3013:
      if (lookahead == 'r') ADVANCE(3232);
      END_STATE();
    case 3014:
      if (lookahead == 'd') ADVANCE(3233);
      END_STATE();
    case 3015:
      if (lookahead == 'q') ADVANCE(3234);
      END_STATE();
    case 3016:
      if (lookahead == 't') ADVANCE(3235);
      END_STATE();
    case 3017:
      if (lookahead == 'y') ADVANCE(3236);
      END_STATE();
    case 3018:
      if (lookahead == 'l') ADVANCE(3237);
      END_STATE();
    case 3019:
      if (lookahead == 'e') ADVANCE(3238);
      END_STATE();
    case 3020:
      if (lookahead == 'l') ADVANCE(3239);
      END_STATE();
    case 3021:
      if (lookahead == 't') ADVANCE(3240);
      END_STATE();
    case 3022:
      if (lookahead == 'A') ADVANCE(3241);
      END_STATE();
    case 3023:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3024:
      if (lookahead == 'a') ADVANCE(3242);
      END_STATE();
    case 3025:
      if (lookahead == 'c') ADVANCE(3243);
      END_STATE();
    case 3026:
      if (lookahead == 'H') ADVANCE(3244);
      END_STATE();
    case 3027:
      if (lookahead == 'd') ADVANCE(3245);
      END_STATE();
    case 3028:
      if (lookahead == 'u') ADVANCE(3246);
      END_STATE();
    case 3029:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3030:
      if (lookahead == 'o') ADVANCE(3247);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3248);
      if (lookahead == 'O') ADVANCE(3249);
      END_STATE();
    case 3032:
      if (lookahead == 'D') ADVANCE(428);
      END_STATE();
    case 3033:
      if (lookahead == 't') ADVANCE(3250);
      END_STATE();
    case 3034:
      if (lookahead == 'g') ADVANCE(3251);
      END_STATE();
    case 3035:
      if (lookahead == 'r') ADVANCE(3252);
      END_STATE();
    case 3036:
      if (lookahead == 'e') ADVANCE(3253);
      END_STATE();
    case 3037:
      if (lookahead == 'a') ADVANCE(3254);
      END_STATE();
    case 3038:
      if (lookahead == 't') ADVANCE(3255);
      END_STATE();
    case 3039:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3040:
      if (lookahead == 'o') ADVANCE(3256);
      END_STATE();
    case 3041:
      if (lookahead == 'e') ADVANCE(3257);
      END_STATE();
    case 3042:
      if (lookahead == 'l') ADVANCE(3258);
      END_STATE();
    case 3043:
      if (lookahead == 'a') ADVANCE(3259);
      END_STATE();
    case 3044:
      if (lookahead == 'm') ADVANCE(3260);
      END_STATE();
    case 3045:
      if (lookahead == 'y') ADVANCE(3261);
      END_STATE();
    case 3046:
      if (lookahead == 'l') ADVANCE(3262);
      END_STATE();
    case 3047:
      if (lookahead == 'f') ADVANCE(3263);
      END_STATE();
    case 3048:
      if (lookahead == 'a') ADVANCE(3264);
      END_STATE();
    case 3049:
      if (lookahead == 'G') ADVANCE(3265);
      END_STATE();
    case 3050:
      if (lookahead == 'u') ADVANCE(3266);
      END_STATE();
    case 3051:
      if (lookahead == 't') ADVANCE(3267);
      END_STATE();
    case 3052:
      if (lookahead == 't') ADVANCE(3268);
      END_STATE();
    case 3053:
      if (lookahead == 'i') ADVANCE(3269);
      END_STATE();
    case 3054:
      if (lookahead == 'a') ADVANCE(3270);
      END_STATE();
    case 3055:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3056:
      if (lookahead == 'g') ADVANCE(3271);
      END_STATE();
    case 3057:
      if (lookahead == 'y') ADVANCE(3272);
      END_STATE();
    case 3058:
      if (lookahead == 'e') ADVANCE(3273);
      END_STATE();
    case 3059:
      if (lookahead == 'D') ADVANCE(3274);
      END_STATE();
    case 3060:
      if (lookahead == 'e') ADVANCE(3275);
      END_STATE();
    case 3061:
      if (lookahead == 'e') ADVANCE(3276);
      END_STATE();
    case 3062:
      if (lookahead == 's') ADVANCE(3277);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygen);
      if (lookahead == 'I') ADVANCE(3278);
      if (lookahead == 'O') ADVANCE(3279);
      END_STATE();
    case 3064:
      if (lookahead == 'a') ADVANCE(3280);
      END_STATE();
    case 3065:
      if (lookahead == 'l') ADVANCE(3281);
      END_STATE();
    case 3066:
      if (lookahead == 't') ADVANCE(3282);
      END_STATE();
    case 3067:
      if (lookahead == 'u') ADVANCE(3283);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxide);
      if (lookahead == 'I') ADVANCE(3284);
      if (lookahead == 'O') ADVANCE(3285);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(anon_sym_RatioOxygenInput2);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(anon_sym_RatioOxygenOutput);
      if (lookahead == '2') ADVANCE(3286);
      END_STATE();
    case 3071:
      if (lookahead == 'u') ADVANCE(3287);
      END_STATE();
    case 3072:
      if (lookahead == 'p') ADVANCE(3288);
      END_STATE();
    case 3073:
      if (lookahead == 'r') ADVANCE(3289);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_RatioSteamOutput2);
      END_STATE();
    case 3075:
      if (lookahead == 'u') ADVANCE(3290);
      END_STATE();
    case 3076:
      if (lookahead == 'p') ADVANCE(3291);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(anon_sym_RatioWaterOutput2);
      END_STATE();
    case 3078:
      if (lookahead == 'a') ADVANCE(3292);
      END_STATE();
    case 3079:
      if (lookahead == 'a') ADVANCE(3293);
      END_STATE();
    case 3080:
      if (lookahead == 'F') ADVANCE(3294);
      END_STATE();
    case 3081:
      if (lookahead == 'a') ADVANCE(3295);
      END_STATE();
    case 3082:
      if (lookahead == 'c') ADVANCE(3296);
      END_STATE();
    case 3083:
      if (lookahead == 'g') ADVANCE(3297);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'b') ADVANCE(3298);
      END_STATE();
    case 3085:
      if (lookahead == 'a') ADVANCE(3299);
      END_STATE();
    case 3086:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 3087:
      if (lookahead == 'i') ADVANCE(3300);
      END_STATE();
    case 3088:
      if (lookahead == 'a') ADVANCE(3301);
      END_STATE();
    case 3089:
      if (lookahead == 's') ADVANCE(3302);
      END_STATE();
    case 3090:
      if (lookahead == 'e') ADVANCE(3303);
      END_STATE();
    case 3091:
      if (lookahead == 'o') ADVANCE(3304);
      END_STATE();
    case 3092:
      if (lookahead == 'a') ADVANCE(3305);
      END_STATE();
    case 3093:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3094:
      if (lookahead == 'o') ADVANCE(3306);
      END_STATE();
    case 3095:
      if (lookahead == 'm') ADVANCE(3307);
      END_STATE();
    case 3096:
      if (lookahead == 'g') ADVANCE(3308);
      END_STATE();
    case 3097:
      if (lookahead == 'r') ADVANCE(3309);
      END_STATE();
    case 3098:
      if (lookahead == 'r') ADVANCE(3310);
      END_STATE();
    case 3099:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3100:
      if (lookahead == 'i') ADVANCE(3311);
      END_STATE();
    case 3101:
      if (lookahead == 's') ADVANCE(3312);
      END_STATE();
    case 3102:
      if (lookahead == 'h') ADVANCE(3313);
      END_STATE();
    case 3103:
      if (lookahead == 'u') ADVANCE(3314);
      END_STATE();
    case 3104:
      if (lookahead == 'u') ADVANCE(3315);
      END_STATE();
    case 3105:
      if (lookahead == 'a') ADVANCE(3316);
      END_STATE();
    case 3106:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3107:
      if (lookahead == 'i') ADVANCE(3317);
      END_STATE();
    case 3108:
      if (lookahead == 'i') ADVANCE(3318);
      END_STATE();
    case 3109:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3110:
      if (lookahead == 'T') ADVANCE(3319);
      END_STATE();
    case 3111:
      if (lookahead == 'i') ADVANCE(3320);
      END_STATE();
    case 3112:
      if (lookahead == 'r') ADVANCE(3321);
      END_STATE();
    case 3113:
      if (lookahead == 'D') ADVANCE(3322);
      END_STATE();
    case 3114:
      if (lookahead == 'e') ADVANCE(3323);
      END_STATE();
    case 3115:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3116:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3117:
      if (lookahead == 'h') ADVANCE(3324);
      END_STATE();
    case 3118:
      if (lookahead == 'n') ADVANCE(3325);
      END_STATE();
    case 3119:
      if (lookahead == 'r') ADVANCE(3326);
      END_STATE();
    case 3120:
      if (lookahead == 'H') ADVANCE(3327);
      if (lookahead == 'L') ADVANCE(3328);
      END_STATE();
    case 3121:
      if (lookahead == 'i') ADVANCE(3329);
      END_STATE();
    case 3122:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3123:
      if (lookahead == 'e') ADVANCE(3330);
      END_STATE();
    case 3124:
      if (lookahead == 'a') ADVANCE(3331);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(anon_sym_TemperatureInput2);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(anon_sym_TemperatureOutput);
      if (lookahead == '2') ADVANCE(3332);
      END_STATE();
    case 3127:
      if (lookahead == 'g') ADVANCE(3333);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(anon_sym_TimeToDestination);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(anon_sym_TotalMolesOutput2);
      END_STATE();
    case 3130:
      if (lookahead == 'c') ADVANCE(3334);
      END_STATE();
    case 3131:
      if (lookahead == 'a') ADVANCE(3335);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(anon_sym_VelocityMagnitude);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeX);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeY);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeZ);
      END_STATE();
    case 3136:
      if (lookahead == 'a') ADVANCE(3336);
      END_STATE();
    case 3137:
      if (lookahead == 'n') ADVANCE(3337);
      END_STATE();
    case 3138:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3139:
      if (lookahead == 'h') ADVANCE(3338);
      END_STATE();
    case 3140:
      if (lookahead == 'T') ADVANCE(3339);
      END_STATE();
    case 3141:
      if (lookahead == '.') ADVANCE(3340);
      END_STATE();
    case 3142:
      if (lookahead == 'a') ADVANCE(3341);
      END_STATE();
    case 3143:
      if (lookahead == 'o') ADVANCE(3342);
      END_STATE();
    case 3144:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3145:
      if (lookahead == 'c') ADVANCE(3343);
      END_STATE();
    case 3146:
      if (lookahead == 'n') ADVANCE(3344);
      END_STATE();
    case 3147:
      if (lookahead == 'i') ADVANCE(3345);
      END_STATE();
    case 3148:
      if (lookahead == 'o') ADVANCE(3346);
      END_STATE();
    case 3149:
      if (lookahead == 'o') ADVANCE(3347);
      END_STATE();
    case 3150:
      if (lookahead == 'o') ADVANCE(3348);
      END_STATE();
    case 3151:
      if (lookahead == 'e') ADVANCE(3349);
      END_STATE();
    case 3152:
      if (lookahead == 'u') ADVANCE(3350);
      END_STATE();
    case 3153:
      if (lookahead == 't') ADVANCE(3351);
      END_STATE();
    case 3154:
      if (lookahead == 'd') ADVANCE(3352);
      END_STATE();
    case 3155:
      if (lookahead == 't') ADVANCE(3353);
      END_STATE();
    case 3156:
      if (lookahead == 'e') ADVANCE(3354);
      END_STATE();
    case 3157:
      if (lookahead == 'g') ADVANCE(3355);
      END_STATE();
    case 3158:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3159:
      if (lookahead == 'g') ADVANCE(3356);
      END_STATE();
    case 3160:
      if (lookahead == 'c') ADVANCE(3357);
      END_STATE();
    case 3161:
      if (lookahead == 'e') ADVANCE(3358);
      END_STATE();
    case 3162:
      if (lookahead == 't') ADVANCE(3359);
      END_STATE();
    case 3163:
      if (lookahead == 't') ADVANCE(3360);
      END_STATE();
    case 3164:
      if (lookahead == 'N') ADVANCE(3361);
      END_STATE();
    case 3165:
      if (lookahead == 'r') ADVANCE(3362);
      END_STATE();
    case 3166:
      if (lookahead == 'u') ADVANCE(3363);
      END_STATE();
    case 3167:
      if (lookahead == 'p') ADVANCE(3364);
      END_STATE();
    case 3168:
      if (lookahead == 'a') ADVANCE(3365);
      END_STATE();
    case 3169:
      if (lookahead == 's') ADVANCE(3366);
      END_STATE();
    case 3170:
      if (lookahead == 't') ADVANCE(3367);
      END_STATE();
    case 3171:
      if (lookahead == 'r') ADVANCE(3368);
      END_STATE();
    case 3172:
      if (lookahead == 'i') ADVANCE(3369);
      END_STATE();
    case 3173:
      if (lookahead == 'i') ADVANCE(3370);
      END_STATE();
    case 3174:
      if (lookahead == 'e') ADVANCE(3371);
      END_STATE();
    case 3175:
      if (lookahead == 'm') ADVANCE(3372);
      END_STATE();
    case 3176:
      if (lookahead == 't') ADVANCE(3373);
      END_STATE();
    case 3177:
      if (lookahead == 's') ADVANCE(3374);
      END_STATE();
    case 3178:
      if (lookahead == 't') ADVANCE(3375);
      END_STATE();
    case 3179:
      if (lookahead == 'O') ADVANCE(3376);
      END_STATE();
    case 3180:
      if (lookahead == 'R') ADVANCE(3377);
      END_STATE();
    case 3181:
      if (lookahead == 'l') ADVANCE(3378);
      END_STATE();
    case 3182:
      if (lookahead == 'a') ADVANCE(3379);
      END_STATE();
    case 3183:
      if (lookahead == 'o') ADVANCE(3380);
      END_STATE();
    case 3184:
      if (lookahead == 'b') ADVANCE(3381);
      END_STATE();
    case 3185:
      if (lookahead == 'o') ADVANCE(3382);
      END_STATE();
    case 3186:
      if (lookahead == 'o') ADVANCE(3383);
      END_STATE();
    case 3187:
      if (lookahead == 'y') ADVANCE(3384);
      END_STATE();
    case 3188:
      if (lookahead == 'o') ADVANCE(3385);
      END_STATE();
    case 3189:
      if (lookahead == 'e') ADVANCE(3386);
      END_STATE();
    case 3190:
      if (lookahead == 'i') ADVANCE(3387);
      END_STATE();
    case 3191:
      if (lookahead == 'A') ADVANCE(3388);
      if (lookahead == 'K') ADVANCE(3389);
      END_STATE();
    case 3192:
      if (lookahead == 'd') ADVANCE(3390);
      END_STATE();
    case 3193:
      if (lookahead == 'c') ADVANCE(3391);
      END_STATE();
    case 3194:
      if (lookahead == 'L') ADVANCE(3392);
      if (lookahead == 'S') ADVANCE(3393);
      END_STATE();
    case 3195:
      if (lookahead == 'a') ADVANCE(3394);
      END_STATE();
    case 3196:
      if (lookahead == 'e') ADVANCE(3395);
      END_STATE();
    case 3197:
      if (lookahead == 'e') ADVANCE(3396);
      END_STATE();
    case 3198:
      if (lookahead == 'u') ADVANCE(3397);
      END_STATE();
    case 3199:
      if (lookahead == 'a') ADVANCE(3398);
      END_STATE();
    case 3200:
      if (lookahead == 'o') ADVANCE(3399);
      END_STATE();
    case 3201:
      if (lookahead == 'o') ADVANCE(3400);
      END_STATE();
    case 3202:
      if (lookahead == 'n') ADVANCE(3401);
      END_STATE();
    case 3203:
      if (lookahead == 't') ADVANCE(3402);
      END_STATE();
    case 3204:
      if (lookahead == 'a') ADVANCE(3403);
      END_STATE();
    case 3205:
      if (lookahead == 'u') ADVANCE(3404);
      END_STATE();
    case 3206:
      if (lookahead == 'a') ADVANCE(3405);
      END_STATE();
    case 3207:
      if (lookahead == 'o') ADVANCE(3406);
      END_STATE();
    case 3208:
      if (lookahead == 'i') ADVANCE(3407);
      END_STATE();
    case 3209:
      if (lookahead == 'a') ADVANCE(3408);
      END_STATE();
    case 3210:
      if (lookahead == 'e') ADVANCE(3409);
      END_STATE();
    case 3211:
      if (lookahead == 's') ADVANCE(3410);
      END_STATE();
    case 3212:
      if (lookahead == 's') ADVANCE(3411);
      END_STATE();
    case 3213:
      if (lookahead == 'n') ADVANCE(3412);
      END_STATE();
    case 3214:
      if (lookahead == 'a') ADVANCE(3413);
      END_STATE();
    case 3215:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3216:
      if (lookahead == 'h') ADVANCE(3414);
      END_STATE();
    case 3217:
      if (lookahead == 'n') ADVANCE(3415);
      END_STATE();
    case 3218:
      if (lookahead == 'i') ADVANCE(3416);
      END_STATE();
    case 3219:
      if (lookahead == 'i') ADVANCE(3417);
      END_STATE();
    case 3220:
      if (lookahead == 'l') ADVANCE(3418);
      END_STATE();
    case 3221:
      if (lookahead == 'i') ADVANCE(3419);
      END_STATE();
    case 3222:
      if (lookahead == 'w') ADVANCE(3420);
      END_STATE();
    case 3223:
      if (lookahead == 'h') ADVANCE(3421);
      END_STATE();
    case 3224:
      if (lookahead == 'l') ADVANCE(3422);
      END_STATE();
    case 3225:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 3226:
      if (lookahead == 'u') ADVANCE(3423);
      END_STATE();
    case 3227:
      if (lookahead == 'e') ADVANCE(3424);
      END_STATE();
    case 3228:
      if (lookahead == 'e') ADVANCE(3425);
      END_STATE();
    case 3229:
      if (lookahead == 'u') ADVANCE(3426);
      END_STATE();
    case 3230:
      if (lookahead == 's') ADVANCE(3427);
      END_STATE();
    case 3231:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'E') ADVANCE(3428);
      if (lookahead == 'I') ADVANCE(3429);
      if (lookahead == 'O') ADVANCE(3430);
      if (lookahead == 'S') ADVANCE(3431);
      END_STATE();
    case 3232:
      if (lookahead == 'b') ADVANCE(3432);
      END_STATE();
    case 3233:
      if (lookahead == 'r') ADVANCE(3433);
      END_STATE();
    case 3234:
      if (lookahead == 'u') ADVANCE(3434);
      END_STATE();
    case 3235:
      if (lookahead == 'r') ADVANCE(3435);
      END_STATE();
    case 3236:
      if (lookahead == 'g') ADVANCE(3436);
      END_STATE();
    case 3237:
      if (lookahead == 'l') ADVANCE(3437);
      END_STATE();
    case 3238:
      if (lookahead == 'a') ADVANCE(3438);
      END_STATE();
    case 3239:
      if (lookahead == 'a') ADVANCE(3439);
      END_STATE();
    case 3240:
      if (lookahead == 'e') ADVANCE(3440);
      END_STATE();
    case 3241:
      if (lookahead == 'l') ADVANCE(3441);
      END_STATE();
    case 3242:
      if (lookahead == 's') ADVANCE(3442);
      END_STATE();
    case 3243:
      if (lookahead == 'e') ADVANCE(3443);
      END_STATE();
    case 3244:
      if (lookahead == 'a') ADVANCE(3444);
      END_STATE();
    case 3245:
      if (lookahead == 'P') ADVANCE(3445);
      END_STATE();
    case 3246:
      if (lookahead == 'e') ADVANCE(3446);
      END_STATE();
    case 3247:
      if (lookahead == 'r') ADVANCE(3447);
      END_STATE();
    case 3248:
      if (lookahead == 'n') ADVANCE(3448);
      END_STATE();
    case 3249:
      if (lookahead == 'u') ADVANCE(3449);
      END_STATE();
    case 3250:
      if (lookahead == 'r') ADVANCE(3450);
      END_STATE();
    case 3251:
      if (lookahead == 'l') ADVANCE(3451);
      END_STATE();
    case 3252:
      if (lookahead == 'a') ADVANCE(3452);
      END_STATE();
    case 3253:
      if (lookahead == 'r') ADVANCE(3453);
      END_STATE();
    case 3254:
      if (lookahead == 'd') ADVANCE(3454);
      END_STATE();
    case 3255:
      if (lookahead == 'u') ADVANCE(3455);
      END_STATE();
    case 3256:
      if (lookahead == 'W') ADVANCE(3456);
      END_STATE();
    case 3257:
      if (lookahead == 's') ADVANCE(3457);
      END_STATE();
    case 3258:
      if (lookahead == 'e') ADVANCE(3458);
      END_STATE();
    case 3259:
      if (lookahead == 'n') ADVANCE(3459);
      END_STATE();
    case 3260:
      if (lookahead == 'a') ADVANCE(3460);
      END_STATE();
    case 3261:
      if (lookahead == 'M') ADVANCE(3461);
      if (lookahead == 'R') ADVANCE(3462);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 3262:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3463);
      END_STATE();
    case 3263:
      if (lookahead == 'L') ADVANCE(3464);
      END_STATE();
    case 3264:
      if (lookahead == 'c') ADVANCE(3465);
      END_STATE();
    case 3265:
      if (lookahead == 'a') ADVANCE(3466);
      END_STATE();
    case 3266:
      if (lookahead == 'i') ADVANCE(3467);
      END_STATE();
    case 3267:
      if (lookahead == 'y') ADVANCE(3468);
      END_STATE();
    case 3268:
      if (lookahead == 'a') ADVANCE(3469);
      END_STATE();
    case 3269:
      if (lookahead == 'm') ADVANCE(3470);
      END_STATE();
    case 3270:
      if (lookahead == 't') ADVANCE(3471);
      END_STATE();
    case 3271:
      if (lookahead == 'e') ADVANCE(3472);
      if (lookahead == 'i') ADVANCE(3473);
      END_STATE();
    case 3272:
      ACCEPT_TOKEN(anon_sym_PressureEfficiency);
      END_STATE();
    case 3273:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxide);
      if (lookahead == 'I') ADVANCE(3474);
      if (lookahead == 'O') ADVANCE(3475);
      END_STATE();
    case 3274:
      if (lookahead == 'i') ADVANCE(3476);
      END_STATE();
    case 3275:
      if (lookahead == 'n') ADVANCE(3477);
      END_STATE();
    case 3276:
      if (lookahead == 'n') ADVANCE(3478);
      END_STATE();
    case 3277:
      if (lookahead == 'O') ADVANCE(3479);
      END_STATE();
    case 3278:
      if (lookahead == 'n') ADVANCE(3480);
      END_STATE();
    case 3279:
      if (lookahead == 'u') ADVANCE(3481);
      END_STATE();
    case 3280:
      if (lookahead == 'n') ADVANCE(3482);
      END_STATE();
    case 3281:
      if (lookahead == 'e') ADVANCE(3483);
      END_STATE();
    case 3282:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenInput);
      if (lookahead == '2') ADVANCE(3484);
      END_STATE();
    case 3283:
      if (lookahead == 't') ADVANCE(3485);
      END_STATE();
    case 3284:
      if (lookahead == 'n') ADVANCE(3486);
      END_STATE();
    case 3285:
      if (lookahead == 'u') ADVANCE(3487);
      END_STATE();
    case 3286:
      ACCEPT_TOKEN(anon_sym_RatioOxygenOutput2);
      END_STATE();
    case 3287:
      if (lookahead == 't') ADVANCE(3488);
      END_STATE();
    case 3288:
      if (lookahead == 'u') ADVANCE(3489);
      END_STATE();
    case 3289:
      ACCEPT_TOKEN(anon_sym_RatioPollutedWater);
      END_STATE();
    case 3290:
      if (lookahead == 't') ADVANCE(3490);
      END_STATE();
    case 3291:
      if (lookahead == 'u') ADVANCE(3491);
      END_STATE();
    case 3292:
      if (lookahead == 'r') ADVANCE(3492);
      END_STATE();
    case 3293:
      if (lookahead == 'r') ADVANCE(3493);
      END_STATE();
    case 3294:
      if (lookahead == 'u') ADVANCE(3494);
      END_STATE();
    case 3295:
      if (lookahead == 'r') ADVANCE(3495);
      END_STATE();
    case 3296:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3297:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3298:
      if (lookahead == 'o') ADVANCE(3496);
      END_STATE();
    case 3299:
      if (lookahead == 'r') ADVANCE(3497);
      END_STATE();
    case 3300:
      if (lookahead == 's') ADVANCE(3498);
      END_STATE();
    case 3301:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3302:
      if (lookahead == 't') ADVANCE(3499);
      END_STATE();
    case 3303:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3304:
      if (lookahead == 't') ADVANCE(3500);
      END_STATE();
    case 3305:
      if (lookahead == 'n') ADVANCE(3501);
      END_STATE();
    case 3306:
      if (lookahead == 'a') ADVANCE(3502);
      END_STATE();
    case 3307:
      if (lookahead == 'a') ADVANCE(3503);
      END_STATE();
    case 3308:
      if (lookahead == 'H') ADVANCE(3504);
      END_STATE();
    case 3309:
      if (lookahead == 'o') ADVANCE(3505);
      END_STATE();
    case 3310:
      if (lookahead == 't') ADVANCE(3506);
      END_STATE();
    case 3311:
      if (lookahead == 'a') ADVANCE(3507);
      END_STATE();
    case 3312:
      if (lookahead == 'p') ADVANCE(3508);
      END_STATE();
    case 3313:
      if (lookahead == 'i') ADVANCE(3509);
      END_STATE();
    case 3314:
      if (lookahead == 'l') ADVANCE(3510);
      END_STATE();
    case 3315:
      if (lookahead == 'r') ADVANCE(3511);
      END_STATE();
    case 3316:
      if (lookahead == 'g') ADVANCE(3512);
      END_STATE();
    case 3317:
      if (lookahead == 'n') ADVANCE(3513);
      END_STATE();
    case 3318:
      if (lookahead == 'n') ADVANCE(3514);
      END_STATE();
    case 3319:
      if (lookahead == 'h') ADVANCE(3515);
      END_STATE();
    case 3320:
      if (lookahead == 'o') ADVANCE(3516);
      END_STATE();
    case 3321:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3322:
      if (lookahead == 'e') ADVANCE(3517);
      END_STATE();
    case 3323:
      if (lookahead == 't') ADVANCE(3518);
      END_STATE();
    case 3324:
      if (lookahead == 'i') ADVANCE(3519);
      END_STATE();
    case 3325:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3326:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3327:
      if (lookahead == 'i') ADVANCE(3520);
      END_STATE();
    case 3328:
      if (lookahead == 'o') ADVANCE(3521);
      END_STATE();
    case 3329:
      if (lookahead == 'n') ADVANCE(3522);
      END_STATE();
    case 3330:
      if (lookahead == 'n') ADVANCE(3523);
      END_STATE();
    case 3331:
      if (lookahead == 'l') ADVANCE(3524);
      END_STATE();
    case 3332:
      ACCEPT_TOKEN(anon_sym_TemperatureOutput2);
      END_STATE();
    case 3333:
      ACCEPT_TOKEN(anon_sym_TemperatureSetting);
      END_STATE();
    case 3334:
      if (lookahead == 't') ADVANCE(3525);
      END_STATE();
    case 3335:
      if (lookahead == 's') ADVANCE(3526);
      END_STATE();
    case 3336:
      if (lookahead == 'c') ADVANCE(3527);
      END_STATE();
    case 3337:
      if (lookahead == 'c') ADVANCE(3528);
      END_STATE();
    case 3338:
      ACCEPT_TOKEN(anon_sym_CelestialParentHash);
      END_STATE();
    case 3339:
      if (lookahead == 'y') ADVANCE(3529);
      END_STATE();
    case 3340:
      if (lookahead == 'D') ADVANCE(3530);
      if (lookahead == 'H') ADVANCE(3531);
      if (lookahead == 'V') ADVANCE(3532);
      END_STATE();
    case 3341:
      if (lookahead == 'r') ADVANCE(3533);
      END_STATE();
    case 3342:
      if (lookahead == 'n') ADVANCE(3534);
      END_STATE();
    case 3343:
      if (lookahead == 'i') ADVANCE(3535);
      END_STATE();
    case 3344:
      if (lookahead == 'c') ADVANCE(3536);
      END_STATE();
    case 3345:
      if (lookahead == 'd') ADVANCE(3537);
      END_STATE();
    case 3346:
      if (lookahead == 'n') ADVANCE(3538);
      END_STATE();
    case 3347:
      if (lookahead == 'g') ADVANCE(3539);
      END_STATE();
    case 3348:
      if (lookahead == 'g') ADVANCE(3540);
      if (lookahead == 'u') ADVANCE(3541);
      END_STATE();
    case 3349:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3350:
      if (lookahead == 't') ADVANCE(3542);
      END_STATE();
    case 3351:
      if (lookahead == 'i') ADVANCE(3543);
      END_STATE();
    case 3352:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3353:
      if (lookahead == 'e') ADVANCE(3544);
      END_STATE();
    case 3354:
      if (lookahead == 's') ADVANCE(3545);
      END_STATE();
    case 3355:
      if (lookahead == 'e') ADVANCE(3546);
      END_STATE();
    case 3356:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3357:
      if (lookahead == 'i') ADVANCE(3547);
      END_STATE();
    case 3358:
      if (lookahead == 'r') ADVANCE(3548);
      END_STATE();
    case 3359:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3360:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3361:
      if (lookahead == 'u') ADVANCE(3549);
      END_STATE();
    case 3362:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3363:
      if (lookahead == 'a') ADVANCE(3550);
      END_STATE();
    case 3364:
      if (lookahead == 'a') ADVANCE(3551);
      if (lookahead == 'i') ADVANCE(3552);
      END_STATE();
    case 3365:
      if (lookahead == 'b') ADVANCE(3553);
      END_STATE();
    case 3366:
      if (lookahead == 'u') ADVANCE(3554);
      END_STATE();
    case 3367:
      if (lookahead == 'i') ADVANCE(3555);
      END_STATE();
    case 3368:
      if (lookahead == 'e') ADVANCE(3556);
      END_STATE();
    case 3369:
      if (lookahead == 'n') ADVANCE(3557);
      END_STATE();
    case 3370:
      if (lookahead == 'n') ADVANCE(3558);
      END_STATE();
    case 3371:
      if (lookahead == 'r') ADVANCE(3559);
      END_STATE();
    case 3372:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3373:
      if (lookahead == 'i') ADVANCE(3560);
      END_STATE();
    case 3374:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3375:
      if (lookahead == 'E') ADVANCE(3561);
      END_STATE();
    case 3376:
      if (lookahead == 'f') ADVANCE(3562);
      END_STATE();
    case 3377:
      if (lookahead == 'e') ADVANCE(3563);
      END_STATE();
    case 3378:
      if (lookahead == 'H') ADVANCE(3564);
      if (lookahead == 'P') ADVANCE(3565);
      END_STATE();
    case 3379:
      if (lookahead == 'v') ADVANCE(3566);
      END_STATE();
    case 3380:
      if (lookahead == 'r') ADVANCE(3567);
      END_STATE();
    case 3381:
      if (lookahead == 'l') ADVANCE(3568);
      END_STATE();
    case 3382:
      if (lookahead == 'n') ADVANCE(3569);
      END_STATE();
    case 3383:
      if (lookahead == 'n') ADVANCE(3570);
      END_STATE();
    case 3384:
      if (lookahead == 'p') ADVANCE(3571);
      END_STATE();
    case 3385:
      if (lookahead == 'd') ADVANCE(3572);
      END_STATE();
    case 3386:
      if (lookahead == 's') ADVANCE(3573);
      END_STATE();
    case 3387:
      if (lookahead == 'o') ADVANCE(3574);
      END_STATE();
    case 3388:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 3389:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 3390:
      if (lookahead == 'i') ADVANCE(3575);
      END_STATE();
    case 3391:
      if (lookahead == 'i') ADVANCE(3576);
      END_STATE();
    case 3392:
      if (lookahead == 'e') ADVANCE(3577);
      END_STATE();
    case 3393:
      if (lookahead == 'p') ADVANCE(3578);
      END_STATE();
    case 3394:
      if (lookahead == 't') ADVANCE(3579);
      END_STATE();
    case 3395:
      if (lookahead == 'n') ADVANCE(3580);
      END_STATE();
    case 3396:
      if (lookahead == 'l') ADVANCE(3581);
      END_STATE();
    case 3397:
      if (lookahead == 'n') ADVANCE(3582);
      END_STATE();
    case 3398:
      if (lookahead == 'n') ADVANCE(3583);
      END_STATE();
    case 3399:
      if (lookahead == 't') ADVANCE(3584);
      END_STATE();
    case 3400:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3401:
      if (lookahead == 't') ADVANCE(3585);
      END_STATE();
    case 3402:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3403:
      if (lookahead == 'l') ADVANCE(3586);
      END_STATE();
    case 3404:
      if (lookahead == 'n') ADVANCE(3587);
      END_STATE();
    case 3405:
      if (lookahead == 'n') ADVANCE(3588);
      END_STATE();
    case 3406:
      if (lookahead == 't') ADVANCE(3589);
      END_STATE();
    case 3407:
      if (lookahead == 'o') ADVANCE(3590);
      END_STATE();
    case 3408:
      if (lookahead == 't') ADVANCE(3591);
      END_STATE();
    case 3409:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3410:
      if (lookahead == 'e') ADVANCE(3592);
      END_STATE();
    case 3411:
      if (lookahead == 'I') ADVANCE(3593);
      END_STATE();
    case 3412:
      if (lookahead == 't') ADVANCE(3594);
      END_STATE();
    case 3413:
      if (lookahead == 't') ADVANCE(3595);
      END_STATE();
    case 3414:
      if (lookahead == 'e') ADVANCE(3596);
      END_STATE();
    case 3415:
      if (lookahead == 'a') ADVANCE(3597);
      END_STATE();
    case 3416:
      if (lookahead == 'o') ADVANCE(3598);
      END_STATE();
    case 3417:
      if (lookahead == 'o') ADVANCE(3599);
      END_STATE();
    case 3418:
      if (lookahead == 'e') ADVANCE(3600);
      END_STATE();
    case 3419:
      if (lookahead == 'c') ADVANCE(3601);
      END_STATE();
    case 3420:
      if (lookahead == 't') ADVANCE(3602);
      END_STATE();
    case 3421:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(428);
      END_STATE();
    case 3422:
      if (lookahead == 't') ADVANCE(3603);
      END_STATE();
    case 3423:
      if (lookahead == 'a') ADVANCE(3604);
      END_STATE();
    case 3424:
      if (lookahead == 'r') ADVANCE(3605);
      END_STATE();
    case 3425:
      if (lookahead == 'n') ADVANCE(3606);
      END_STATE();
    case 3426:
      if (lookahead == 'i') ADVANCE(3607);
      END_STATE();
    case 3427:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3428:
      if (lookahead == 'f') ADVANCE(3608);
      if (lookahead == 'x') ADVANCE(3609);
      END_STATE();
    case 3429:
      if (lookahead == 'n') ADVANCE(3610);
      END_STATE();
    case 3430:
      if (lookahead == 'u') ADVANCE(3611);
      END_STATE();
    case 3431:
      if (lookahead == 'e') ADVANCE(3612);
      END_STATE();
    case 3432:
      if (lookahead == 'o') ADVANCE(3613);
      END_STATE();
    case 3433:
      if (lookahead == 'o') ADVANCE(3614);
      END_STATE();
    case 3434:
      if (lookahead == 'i') ADVANCE(3615);
      END_STATE();
    case 3435:
      if (lookahead == 'o') ADVANCE(3616);
      END_STATE();
    case 3436:
      if (lookahead == 'e') ADVANCE(3617);
      END_STATE();
    case 3437:
      if (lookahead == 'u') ADVANCE(3618);
      END_STATE();
    case 3438:
      if (lookahead == 'm') ADVANCE(3619);
      END_STATE();
    case 3439:
      if (lookahead == 't') ADVANCE(3620);
      END_STATE();
    case 3440:
      if (lookahead == 'r') ADVANCE(3621);
      END_STATE();
    case 3441:
      if (lookahead == 't') ADVANCE(3622);
      END_STATE();
    case 3442:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3443:
      if (lookahead == 'I') ADVANCE(3623);
      END_STATE();
    case 3444:
      if (lookahead == 's') ADVANCE(3624);
      END_STATE();
    case 3445:
      if (lookahead == 'o') ADVANCE(3625);
      END_STATE();
    case 3446:
      if (lookahead == 'l') ADVANCE(3626);
      END_STATE();
    case 3447:
      if (lookahead == 'A') ADVANCE(3627);
      END_STATE();
    case 3448:
      if (lookahead == 'p') ADVANCE(3628);
      END_STATE();
    case 3449:
      if (lookahead == 't') ADVANCE(3629);
      END_STATE();
    case 3450:
      if (lookahead == 'e') ADVANCE(3630);
      END_STATE();
    case 3451:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3452:
      if (lookahead == 'd') ADVANCE(3631);
      END_STATE();
    case 3453:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3454:
      if (lookahead == 'I') ADVANCE(3632);
      END_STATE();
    case 3455:
      if (lookahead == 'r') ADVANCE(3633);
      END_STATE();
    case 3456:
      if (lookahead == 'e') ADVANCE(3634);
      END_STATE();
    case 3457:
      if (lookahead == 't') ADVANCE(3635);
      END_STATE();
    case 3458:
      if (lookahead == 's') ADVANCE(3636);
      END_STATE();
    case 3459:
      if (lookahead == 't') ADVANCE(3637);
      END_STATE();
    case 3460:
      if (lookahead == 'l') ADVANCE(3638);
      END_STATE();
    case 3461:
      if (lookahead == 'a') ADVANCE(3639);
      END_STATE();
    case 3462:
      if (lookahead == 'e') ADVANCE(3640);
      END_STATE();
    case 3463:
      if (lookahead == 'a') ADVANCE(3641);
      END_STATE();
    case 3464:
      if (lookahead == 'i') ADVANCE(3642);
      END_STATE();
    case 3465:
      if (lookahead == 'h') ADVANCE(3643);
      END_STATE();
    case 3466:
      if (lookahead == 's') ADVANCE(3644);
      END_STATE();
    case 3467:
      if (lookahead == 'r') ADVANCE(3645);
      END_STATE();
    case 3468:
      ACCEPT_TOKEN(anon_sym_MineablesInVicinity);
      END_STATE();
    case 3469:
      if (lookahead == 'c') ADVANCE(3646);
      END_STATE();
    case 3470:
      if (lookahead == 'e') ADVANCE(3647);
      END_STATE();
    case 3471:
      if (lookahead == 'u') ADVANCE(3648);
      END_STATE();
    case 3472:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3473:
      if (lookahead == 'n') ADVANCE(3649);
      END_STATE();
    case 3474:
      if (lookahead == 'n') ADVANCE(3650);
      END_STATE();
    case 3475:
      if (lookahead == 'u') ADVANCE(3651);
      END_STATE();
    case 3476:
      if (lookahead == 'o') ADVANCE(3652);
      END_STATE();
    case 3477:
      ACCEPT_TOKEN(anon_sym_RatioLiquidHydrogen);
      END_STATE();
    case 3478:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogen);
      if (lookahead == 'I') ADVANCE(3653);
      if (lookahead == 'O') ADVANCE(3654);
      END_STATE();
    case 3479:
      if (lookahead == 'x') ADVANCE(3655);
      END_STATE();
    case 3480:
      if (lookahead == 'p') ADVANCE(3656);
      END_STATE();
    case 3481:
      if (lookahead == 't') ADVANCE(3657);
      END_STATE();
    case 3482:
      if (lookahead == 't') ADVANCE(3658);
      END_STATE();
    case 3483:
      if (lookahead == 's') ADVANCE(3659);
      END_STATE();
    case 3484:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenInput2);
      END_STATE();
    case 3485:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenOutput);
      if (lookahead == '2') ADVANCE(3660);
      END_STATE();
    case 3486:
      if (lookahead == 'p') ADVANCE(3661);
      END_STATE();
    case 3487:
      if (lookahead == 't') ADVANCE(3662);
      END_STATE();
    case 3488:
      ACCEPT_TOKEN(anon_sym_RatioPollutantInput);
      if (lookahead == '2') ADVANCE(3663);
      END_STATE();
    case 3489:
      if (lookahead == 't') ADVANCE(3664);
      END_STATE();
    case 3490:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesInput);
      if (lookahead == '2') ADVANCE(3665);
      END_STATE();
    case 3491:
      if (lookahead == 't') ADVANCE(3666);
      END_STATE();
    case 3492:
      if (lookahead == 'g') ADVANCE(3667);
      END_STATE();
    case 3493:
      if (lookahead == 'g') ADVANCE(3668);
      END_STATE();
    case 3494:
      if (lookahead == 'l') ADVANCE(3669);
      END_STATE();
    case 3495:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3496:
      if (lookahead == 'a') ADVANCE(3670);
      END_STATE();
    case 3497:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3498:
      if (lookahead == 't') ADVANCE(3671);
      END_STATE();
    case 3499:
      if (lookahead == 'e') ADVANCE(3672);
      END_STATE();
    case 3500:
      if (lookahead == 't') ADVANCE(3673);
      END_STATE();
    case 3501:
      if (lookahead == 'i') ADVANCE(3674);
      END_STATE();
    case 3502:
      if (lookahead == 'r') ADVANCE(3675);
      END_STATE();
    case 3503:
      if (lookahead == 'b') ADVANCE(3676);
      END_STATE();
    case 3504:
      if (lookahead == 'e') ADVANCE(3677);
      END_STATE();
    case 3505:
      if (lookahead == 'c') ADVANCE(3678);
      END_STATE();
    case 3506:
      if (lookahead == 'r') ADVANCE(3679);
      END_STATE();
    case 3507:
      if (lookahead == 'n') ADVANCE(3680);
      END_STATE();
    case 3508:
      if (lookahead == 'h') ADVANCE(3681);
      END_STATE();
    case 3509:
      if (lookahead == 'n') ADVANCE(3682);
      END_STATE();
    case 3510:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3511:
      if (lookahead == 'c') ADVANCE(3683);
      END_STATE();
    case 3512:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3513:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3514:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3515:
      if (lookahead == 'e') ADVANCE(3684);
      END_STATE();
    case 3516:
      if (lookahead == 'x') ADVANCE(3685);
      END_STATE();
    case 3517:
      if (lookahead == 't') ADVANCE(3686);
      END_STATE();
    case 3518:
      if (lookahead == 'e') ADVANCE(3687);
      END_STATE();
    case 3519:
      if (lookahead == 'n') ADVANCE(3688);
      END_STATE();
    case 3520:
      if (lookahead == 'g') ADVANCE(3689);
      END_STATE();
    case 3521:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 3522:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3523:
      if (lookahead == 't') ADVANCE(3690);
      END_STATE();
    case 3524:
      ACCEPT_TOKEN(anon_sym_TemperatureExternal);
      END_STATE();
    case 3525:
      if (lookahead == 'i') ADVANCE(3691);
      END_STATE();
    case 3526:
      if (lookahead == 's') ADVANCE(3692);
      END_STATE();
    case 3527:
      if (lookahead == 't') ADVANCE(3693);
      END_STATE();
    case 3528:
      if (lookahead == 'y') ADVANCE(3694);
      END_STATE();
    case 3529:
      if (lookahead == 'p') ADVANCE(3695);
      END_STATE();
    case 3530:
      if (lookahead == 'e') ADVANCE(3696);
      END_STATE();
    case 3531:
      if (lookahead == 'o') ADVANCE(3697);
      END_STATE();
    case 3532:
      if (lookahead == 'e') ADVANCE(3698);
      END_STATE();
    case 3533:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3534:
      if (lookahead == 'a') ADVANCE(3699);
      END_STATE();
    case 3535:
      if (lookahead == 'o') ADVANCE(3700);
      END_STATE();
    case 3536:
      if (lookahead == 'y') ADVANCE(3701);
      END_STATE();
    case 3537:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3538:
      if (lookahead == 'D') ADVANCE(3702);
      END_STATE();
    case 3539:
      if (lookahead == 'e') ADVANCE(3703);
      END_STATE();
    case 3540:
      if (lookahead == 'e') ADVANCE(3704);
      END_STATE();
    case 3541:
      if (lookahead == 's') ADVANCE(3705);
      END_STATE();
    case 3542:
      if (lookahead == 'a') ADVANCE(3706);
      END_STATE();
    case 3543:
      if (lookahead == 'l') ADVANCE(3707);
      END_STATE();
    case 3544:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3545:
      if (lookahead == 's') ADVANCE(3708);
      END_STATE();
    case 3546:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3709);
      END_STATE();
    case 3547:
      if (lookahead == 'e') ADVANCE(3710);
      END_STATE();
    case 3548:
      if (lookahead == 'T') ADVANCE(3711);
      END_STATE();
    case 3549:
      if (lookahead == 'm') ADVANCE(3712);
      END_STATE();
    case 3550:
      if (lookahead == 'n') ADVANCE(3713);
      END_STATE();
    case 3551:
      if (lookahead == 'n') ADVANCE(3714);
      END_STATE();
    case 3552:
      if (lookahead == 'e') ADVANCE(3715);
      END_STATE();
    case 3553:
      if (lookahead == 'H') ADVANCE(3716);
      END_STATE();
    case 3554:
      if (lookahead == 'r') ADVANCE(3717);
      END_STATE();
    case 3555:
      if (lookahead == 't') ADVANCE(3718);
      END_STATE();
    case 3556:
      if (lookahead == 'n') ADVANCE(3719);
      END_STATE();
    case 3557:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3558:
      if (lookahead == 'g') ADVANCE(3720);
      END_STATE();
    case 3559:
      if (lookahead == 'a') ADVANCE(3721);
      END_STATE();
    case 3560:
      if (lookahead == 'o') ADVANCE(3722);
      END_STATE();
    case 3561:
      if (lookahead == 'r') ADVANCE(3723);
      END_STATE();
    case 3562:
      if (lookahead == 'f') ADVANCE(428);
      END_STATE();
    case 3563:
      if (lookahead == 'm') ADVANCE(3724);
      END_STATE();
    case 3564:
      if (lookahead == 'a') ADVANCE(3725);
      END_STATE();
    case 3565:
      if (lookahead == 'a') ADVANCE(3726);
      END_STATE();
    case 3566:
      if (lookahead == 'P') ADVANCE(3727);
      END_STATE();
    case 3567:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3568:
      if (lookahead == 'e') ADVANCE(3728);
      END_STATE();
    case 3569:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3729);
      if (lookahead == 'L') ADVANCE(3730);
      if (lookahead == 'O') ADVANCE(3731);
      END_STATE();
    case 3570:
      if (lookahead == 'R') ADVANCE(3732);
      END_STATE();
    case 3571:
      if (lookahead == 'e') ADVANCE(3733);
      END_STATE();
    case 3572:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3573:
      if (lookahead == 'e') ADVANCE(3734);
      END_STATE();
    case 3574:
      if (lookahead == 'n') ADVANCE(3735);
      END_STATE();
    case 3575:
      if (lookahead == 't') ADVANCE(3736);
      END_STATE();
    case 3576:
      if (lookahead == 't') ADVANCE(3737);
      END_STATE();
    case 3577:
      if (lookahead == 'v') ADVANCE(3738);
      END_STATE();
    case 3578:
      if (lookahead == 'e') ADVANCE(3739);
      END_STATE();
    case 3579:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3580:
      if (lookahead == 't') ADVANCE(3740);
      END_STATE();
    case 3581:
      if (lookahead == 'o') ADVANCE(3741);
      END_STATE();
    case 3582:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3583:
      if (lookahead == 't') ADVANCE(3742);
      END_STATE();
    case 3584:
      if (lookahead == 'H') ADVANCE(3743);
      if (lookahead == 'O') ADVANCE(3744);
      END_STATE();
    case 3585:
      if (lookahead == 'r') ADVANCE(3745);
      END_STATE();
    case 3586:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3746);
      END_STATE();
    case 3587:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3588:
      if (lookahead == 't') ADVANCE(3747);
      END_STATE();
    case 3589:
      if (lookahead == 'H') ADVANCE(3748);
      if (lookahead == 'O') ADVANCE(3749);
      END_STATE();
    case 3590:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3591:
      if (lookahead == 'i') ADVANCE(3750);
      END_STATE();
    case 3592:
      if (lookahead == 'a') ADVANCE(3751);
      END_STATE();
    case 3593:
      if (lookahead == 'n') ADVANCE(3752);
      END_STATE();
    case 3594:
      if (lookahead == 'i') ADVANCE(3753);
      END_STATE();
    case 3595:
      if (lookahead == 't') ADVANCE(3754);
      END_STATE();
    case 3596:
      if (lookahead == 'r') ADVANCE(3755);
      END_STATE();
    case 3597:
      if (lookahead == 'l') ADVANCE(3756);
      END_STATE();
    case 3598:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3599:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3600:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3601:
      if (lookahead == 'i') ADVANCE(3757);
      END_STATE();
    case 3602:
      if (lookahead == 'h') ADVANCE(3758);
      END_STATE();
    case 3603:
      if (lookahead == 'h') ADVANCE(3759);
      END_STATE();
    case 3604:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 3605:
      if (lookahead == 'a') ADVANCE(3760);
      END_STATE();
    case 3606:
      if (lookahead == 't') ADVANCE(3761);
      END_STATE();
    case 3607:
      if (lookahead == 'r') ADVANCE(3762);
      END_STATE();
    case 3608:
      if (lookahead == 'f') ADVANCE(3763);
      END_STATE();
    case 3609:
      if (lookahead == 't') ADVANCE(3764);
      END_STATE();
    case 3610:
      if (lookahead == 'p') ADVANCE(3765);
      if (lookahead == 't') ADVANCE(3766);
      END_STATE();
    case 3611:
      if (lookahead == 't') ADVANCE(3767);
      END_STATE();
    case 3612:
      if (lookahead == 't') ADVANCE(3768);
      END_STATE();
    case 3613:
      if (lookahead == 'n') ADVANCE(3769);
      END_STATE();
    case 3614:
      if (lookahead == 'g') ADVANCE(3770);
      END_STATE();
    case 3615:
      if (lookahead == 'd') ADVANCE(3771);
      END_STATE();
    case 3616:
      if (lookahead == 'g') ADVANCE(3772);
      if (lookahead == 'u') ADVANCE(3773);
      END_STATE();
    case 3617:
      if (lookahead == 'n') ADVANCE(3774);
      END_STATE();
    case 3618:
      if (lookahead == 't') ADVANCE(3775);
      END_STATE();
    case 3619:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3776);
      if (lookahead == 'O') ADVANCE(3777);
      END_STATE();
    case 3620:
      if (lookahead == 'i') ADVANCE(3778);
      END_STATE();
    case 3621:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3779);
      if (lookahead == 'O') ADVANCE(3780);
      END_STATE();
    case 3622:
      if (lookahead == 'i') ADVANCE(3781);
      END_STATE();
    case 3623:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3624:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3625:
      if (lookahead == 'w') ADVANCE(3782);
      END_STATE();
    case 3626:
      if (lookahead == 'C') ADVANCE(3783);
      END_STATE();
    case 3627:
      if (lookahead == 'x') ADVANCE(3784);
      END_STATE();
    case 3628:
      if (lookahead == 'u') ADVANCE(3785);
      END_STATE();
    case 3629:
      if (lookahead == 'p') ADVANCE(3786);
      END_STATE();
    case 3630:
      if (lookahead == 'n') ADVANCE(3787);
      END_STATE();
    case 3631:
      if (lookahead == 'i') ADVANCE(3788);
      END_STATE();
    case 3632:
      if (lookahead == 'n') ADVANCE(3789);
      END_STATE();
    case 3633:
      if (lookahead == 'e') ADVANCE(3790);
      END_STATE();
    case 3634:
      if (lookahead == 'i') ADVANCE(3791);
      END_STATE();
    case 3635:
      if (lookahead == 'i') ADVANCE(3792);
      END_STATE();
    case 3636:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3793);
      if (lookahead == 'O') ADVANCE(3794);
      END_STATE();
    case 3637:
      if (lookahead == 'i') ADVANCE(3795);
      END_STATE();
    case 3638:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3639:
      if (lookahead == 'g') ADVANCE(3796);
      END_STATE();
    case 3640:
      if (lookahead == 'l') ADVANCE(3797);
      END_STATE();
    case 3641:
      if (lookahead == 't') ADVANCE(3798);
      END_STATE();
    case 3642:
      if (lookahead == 'q') ADVANCE(3799);
      END_STATE();
    case 3643:
      if (lookahead == 'i') ADVANCE(3800);
      END_STATE();
    case 3644:
      if (lookahead == 'E') ADVANCE(3801);
      END_STATE();
    case 3645:
      if (lookahead == 'e') ADVANCE(3802);
      END_STATE();
    case 3646:
      if (lookahead == 't') ADVANCE(3803);
      END_STATE();
    case 3647:
      ACCEPT_TOKEN(anon_sym_NextWeatherEventTime);
      END_STATE();
    case 3648:
      if (lookahead == 'r') ADVANCE(3804);
      END_STATE();
    case 3649:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3650:
      if (lookahead == 'p') ADVANCE(3805);
      END_STATE();
    case 3651:
      if (lookahead == 't') ADVANCE(3806);
      END_STATE();
    case 3652:
      if (lookahead == 'x') ADVANCE(3807);
      END_STATE();
    case 3653:
      if (lookahead == 'n') ADVANCE(3808);
      END_STATE();
    case 3654:
      if (lookahead == 'u') ADVANCE(3809);
      END_STATE();
    case 3655:
      if (lookahead == 'i') ADVANCE(3810);
      END_STATE();
    case 3656:
      if (lookahead == 'u') ADVANCE(3811);
      END_STATE();
    case 3657:
      if (lookahead == 'p') ADVANCE(3812);
      END_STATE();
    case 3658:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutant);
      if (lookahead == 'I') ADVANCE(3813);
      if (lookahead == 'O') ADVANCE(3814);
      END_STATE();
    case 3659:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatiles);
      if (lookahead == 'I') ADVANCE(3815);
      if (lookahead == 'O') ADVANCE(3816);
      END_STATE();
    case 3660:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenOutput2);
      END_STATE();
    case 3661:
      if (lookahead == 'u') ADVANCE(3817);
      END_STATE();
    case 3662:
      if (lookahead == 'p') ADVANCE(3818);
      END_STATE();
    case 3663:
      ACCEPT_TOKEN(anon_sym_RatioPollutantInput2);
      END_STATE();
    case 3664:
      ACCEPT_TOKEN(anon_sym_RatioPollutantOutput);
      if (lookahead == '2') ADVANCE(3819);
      END_STATE();
    case 3665:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesInput2);
      END_STATE();
    case 3666:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesOutput);
      if (lookahead == '2') ADVANCE(3820);
      END_STATE();
    case 3667:
      if (lookahead == 'e') ADVANCE(3821);
      END_STATE();
    case 3668:
      if (lookahead == 'e') ADVANCE(3822);
      END_STATE();
    case 3669:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 3670:
      if (lookahead == 'r') ADVANCE(3823);
      END_STATE();
    case 3671:
      if (lookahead == 'e') ADVANCE(3824);
      END_STATE();
    case 3672:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3673:
      if (lookahead == 'l') ADVANCE(3825);
      END_STATE();
    case 3674:
      if (lookahead == 's') ADVANCE(3826);
      END_STATE();
    case 3675:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3676:
      if (lookahead == 'l') ADVANCE(3827);
      END_STATE();
    case 3677:
      if (lookahead == 'a') ADVANCE(3828);
      END_STATE();
    case 3678:
      if (lookahead == 'e') ADVANCE(3829);
      END_STATE();
    case 3679:
      if (lookahead == 'i') ADVANCE(3830);
      END_STATE();
    case 3680:
      if (lookahead == 'c') ADVANCE(3831);
      END_STATE();
    case 3681:
      if (lookahead == 'e') ADVANCE(3832);
      END_STATE();
    case 3682:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3683:
      if (lookahead == 'e') ADVANCE(3833);
      END_STATE();
    case 3684:
      if (lookahead == 'r') ADVANCE(3834);
      END_STATE();
    case 3685:
      if (lookahead == 'i') ADVANCE(3835);
      END_STATE();
    case 3686:
      if (lookahead == 'e') ADVANCE(3836);
      END_STATE();
    case 3687:
      if (lookahead == 'c') ADVANCE(3837);
      END_STATE();
    case 3688:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 3689:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3690:
      if (lookahead == 'i') ADVANCE(3838);
      END_STATE();
    case 3691:
      if (lookahead == 'v') ADVANCE(3839);
      END_STATE();
    case 3692:
      if (lookahead == 'i') ADVANCE(3840);
      END_STATE();
    case 3693:
      ACCEPT_TOKEN(anon_sym_WattsReachingContact);
      END_STATE();
    case 3694:
      ACCEPT_TOKEN(anon_sym_WorkingGasEfficiency);
      END_STATE();
    case 3695:
      if (lookahead == 'e') ADVANCE(3841);
      END_STATE();
    case 3696:
      if (lookahead == 'f') ADVANCE(3842);
      END_STATE();
    case 3697:
      if (lookahead == 'r') ADVANCE(3843);
      END_STATE();
    case 3698:
      if (lookahead == 'r') ADVANCE(3844);
      END_STATE();
    case 3699:
      if (lookahead == 'r') ADVANCE(3845);
      END_STATE();
    case 3700:
      if (lookahead == 'u') ADVANCE(3846);
      END_STATE();
    case 3701:
      ACCEPT_TOKEN(anon_sym_EnvironmentEfficiency);
      END_STATE();
    case 3702:
      if (lookahead == 'i') ADVANCE(3847);
      END_STATE();
    case 3703:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3704:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3705:
      if (lookahead == 'O') ADVANCE(3848);
      END_STATE();
    case 3706:
      if (lookahead == 'n') ADVANCE(3849);
      END_STATE();
    case 3707:
      if (lookahead == 'e') ADVANCE(3850);
      END_STATE();
    case 3708:
      ACCEPT_TOKEN(anon_sym_InterrogationProgress);
      END_STATE();
    case 3709:
      if (lookahead == 'a') ADVANCE(3851);
      END_STATE();
    case 3710:
      if (lookahead == 'n') ADVANCE(3852);
      END_STATE();
    case 3711:
      if (lookahead == 'y') ADVANCE(3853);
      END_STATE();
    case 3712:
      if (lookahead == 'b') ADVANCE(3854);
      END_STATE();
    case 3713:
      if (lookahead == 't') ADVANCE(3855);
      END_STATE();
    case 3714:
      if (lookahead == 't') ADVANCE(3856);
      END_STATE();
    case 3715:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3716:
      if (lookahead == 'a') ADVANCE(3857);
      END_STATE();
    case 3717:
      if (lookahead == 'e') ADVANCE(3858);
      END_STATE();
    case 3718:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3719:
      if (lookahead == 'c') ADVANCE(3859);
      END_STATE();
    case 3720:
      if (lookahead == 'C') ADVANCE(3860);
      END_STATE();
    case 3721:
      if (lookahead == 't') ADVANCE(3861);
      END_STATE();
    case 3722:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3723:
      if (lookahead == 'r') ADVANCE(3862);
      END_STATE();
    case 3724:
      if (lookahead == 'a') ADVANCE(3863);
      END_STATE();
    case 3725:
      if (lookahead == 's') ADVANCE(3864);
      END_STATE();
    case 3726:
      if (lookahead == 'r') ADVANCE(3865);
      END_STATE();
    case 3727:
      if (lookahead == 'o') ADVANCE(3866);
      END_STATE();
    case 3728:
      if (lookahead == 'G') ADVANCE(3867);
      END_STATE();
    case 3729:
      if (lookahead == 'n') ADVANCE(3868);
      END_STATE();
    case 3730:
      if (lookahead == 'i') ADVANCE(3869);
      END_STATE();
    case 3731:
      if (lookahead == 'u') ADVANCE(3870);
      END_STATE();
    case 3732:
      if (lookahead == 'a') ADVANCE(3871);
      END_STATE();
    case 3733:
      if (lookahead == 'I') ADVANCE(3872);
      END_STATE();
    case 3734:
      if (lookahead == 'a') ADVANCE(3873);
      END_STATE();
    case 3735:
      if (lookahead == 'C') ADVANCE(3874);
      END_STATE();
    case 3736:
      if (lookahead == 'i') ADVANCE(3875);
      END_STATE();
    case 3737:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3738:
      if (lookahead == 'e') ADVANCE(3876);
      END_STATE();
    case 3739:
      if (lookahead == 'e') ADVANCE(3877);
      END_STATE();
    case 3740:
      if (lookahead == 'E') ADVANCE(3878);
      END_STATE();
    case 3741:
      if (lookahead == 'c') ADVANCE(3879);
      END_STATE();
    case 3742:
      if (lookahead == 'i') ADVANCE(3880);
      END_STATE();
    case 3743:
      if (lookahead == 'a') ADVANCE(3881);
      END_STATE();
    case 3744:
      if (lookahead == 'c') ADVANCE(3882);
      END_STATE();
    case 3745:
      if (lookahead == 'o') ADVANCE(3883);
      END_STATE();
    case 3746:
      if (lookahead == 'a') ADVANCE(3884);
      END_STATE();
    case 3747:
      if (lookahead == 'i') ADVANCE(3885);
      END_STATE();
    case 3748:
      if (lookahead == 'a') ADVANCE(3886);
      END_STATE();
    case 3749:
      if (lookahead == 'c') ADVANCE(3887);
      END_STATE();
    case 3750:
      if (lookahead == 'o') ADVANCE(3888);
      END_STATE();
    case 3751:
      if (lookahead == 'r') ADVANCE(3889);
      END_STATE();
    case 3752:
      if (lookahead == 'Q') ADVANCE(3890);
      if (lookahead == 'V') ADVANCE(3891);
      END_STATE();
    case 3753:
      if (lookahead == 't') ADVANCE(3892);
      END_STATE();
    case 3754:
      if (lookahead == 's') ADVANCE(3893);
      END_STATE();
    case 3755:
      if (lookahead == 'E') ADVANCE(3894);
      END_STATE();
    case 3756:
      if (lookahead == 'T') ADVANCE(3895);
      END_STATE();
    case 3757:
      if (lookahead == 'e') ADVANCE(3896);
      END_STATE();
    case 3758:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(428);
      END_STATE();
    case 3759:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(428);
      END_STATE();
    case 3760:
      if (lookahead == 't') ADVANCE(3897);
      END_STATE();
    case 3761:
      if (lookahead == 'i') ADVANCE(3898);
      END_STATE();
    case 3762:
      if (lookahead == 'e') ADVANCE(3899);
      END_STATE();
    case 3763:
      if (lookahead == 'i') ADVANCE(3900);
      END_STATE();
    case 3764:
      if (lookahead == 'e') ADVANCE(3901);
      END_STATE();
    case 3765:
      if (lookahead == 'u') ADVANCE(3902);
      END_STATE();
    case 3766:
      if (lookahead == 'e') ADVANCE(3903);
      END_STATE();
    case 3767:
      if (lookahead == 'p') ADVANCE(3904);
      END_STATE();
    case 3768:
      if (lookahead == 't') ADVANCE(3905);
      END_STATE();
    case 3769:
      if (lookahead == 'D') ADVANCE(3906);
      END_STATE();
    case 3770:
      if (lookahead == 'e') ADVANCE(3907);
      END_STATE();
    case 3771:
      if (lookahead == 'C') ADVANCE(3908);
      if (lookahead == 'H') ADVANCE(3909);
      if (lookahead == 'N') ADVANCE(3910);
      if (lookahead == 'O') ADVANCE(3911);
      if (lookahead == 'P') ADVANCE(3912);
      if (lookahead == 'V') ADVANCE(3913);
      END_STATE();
    case 3772:
      if (lookahead == 'e') ADVANCE(3914);
      END_STATE();
    case 3773:
      if (lookahead == 's') ADVANCE(3915);
      END_STATE();
    case 3774:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3916);
      if (lookahead == 'O') ADVANCE(3917);
      END_STATE();
    case 3775:
      if (lookahead == 'a') ADVANCE(3918);
      if (lookahead == 'e') ADVANCE(3919);
      END_STATE();
    case 3776:
      if (lookahead == 'n') ADVANCE(3920);
      END_STATE();
    case 3777:
      if (lookahead == 'u') ADVANCE(3921);
      END_STATE();
    case 3778:
      if (lookahead == 'l') ADVANCE(3922);
      END_STATE();
    case 3779:
      if (lookahead == 'n') ADVANCE(3923);
      END_STATE();
    case 3780:
      if (lookahead == 'u') ADVANCE(3924);
      END_STATE();
    case 3781:
      if (lookahead == 't') ADVANCE(3925);
      END_STATE();
    case 3782:
      if (lookahead == 'e') ADVANCE(3926);
      END_STATE();
    case 3783:
      if (lookahead == 'o') ADVANCE(3927);
      END_STATE();
    case 3784:
      if (lookahead == 'i') ADVANCE(3928);
      END_STATE();
    case 3785:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3786:
      if (lookahead == 'u') ADVANCE(3929);
      END_STATE();
    case 3787:
      if (lookahead == 'g') ADVANCE(3930);
      END_STATE();
    case 3788:
      if (lookahead == 'a') ADVANCE(3931);
      END_STATE();
    case 3789:
      if (lookahead == 'd') ADVANCE(3932);
      END_STATE();
    case 3790:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'D') ADVANCE(3933);
      if (lookahead == 'E') ADVANCE(3934);
      if (lookahead == 'I') ADVANCE(3935);
      if (lookahead == 'O') ADVANCE(3936);
      if (lookahead == 'S') ADVANCE(3937);
      END_STATE();
    case 3791:
      if (lookahead == 'g') ADVANCE(3938);
      END_STATE();
    case 3792:
      if (lookahead == 'n') ADVANCE(3939);
      END_STATE();
    case 3793:
      if (lookahead == 'n') ADVANCE(3940);
      END_STATE();
    case 3794:
      if (lookahead == 'u') ADVANCE(3941);
      END_STATE();
    case 3795:
      if (lookahead == 't') ADVANCE(3942);
      END_STATE();
    case 3796:
      if (lookahead == 'n') ADVANCE(3943);
      END_STATE();
    case 3797:
      if (lookahead == 'a') ADVANCE(3944);
      END_STATE();
    case 3798:
      if (lookahead == 'i') ADVANCE(3945);
      END_STATE();
    case 3799:
      if (lookahead == 'u') ADVANCE(3946);
      END_STATE();
    case 3800:
      if (lookahead == 'n') ADVANCE(3947);
      END_STATE();
    case 3801:
      if (lookahead == 'f') ADVANCE(3948);
      END_STATE();
    case 3802:
      if (lookahead == 'd') ADVANCE(3949);
      END_STATE();
    case 3803:
      ACCEPT_TOKEN(anon_sym_MinimumWattsToContact);
      END_STATE();
    case 3804:
      if (lookahead == 'e') ADVANCE(3950);
      END_STATE();
    case 3805:
      if (lookahead == 'u') ADVANCE(3951);
      END_STATE();
    case 3806:
      if (lookahead == 'p') ADVANCE(3952);
      END_STATE();
    case 3807:
      if (lookahead == 'i') ADVANCE(3953);
      END_STATE();
    case 3808:
      if (lookahead == 'p') ADVANCE(3954);
      END_STATE();
    case 3809:
      if (lookahead == 't') ADVANCE(3955);
      END_STATE();
    case 3810:
      if (lookahead == 'd') ADVANCE(3956);
      END_STATE();
    case 3811:
      if (lookahead == 't') ADVANCE(3957);
      END_STATE();
    case 3812:
      if (lookahead == 'u') ADVANCE(3958);
      END_STATE();
    case 3813:
      if (lookahead == 'n') ADVANCE(3959);
      END_STATE();
    case 3814:
      if (lookahead == 'u') ADVANCE(3960);
      END_STATE();
    case 3815:
      if (lookahead == 'n') ADVANCE(3961);
      END_STATE();
    case 3816:
      if (lookahead == 'u') ADVANCE(3962);
      END_STATE();
    case 3817:
      if (lookahead == 't') ADVANCE(3963);
      END_STATE();
    case 3818:
      if (lookahead == 'u') ADVANCE(3964);
      END_STATE();
    case 3819:
      ACCEPT_TOKEN(anon_sym_RatioPollutantOutput2);
      END_STATE();
    case 3820:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesOutput2);
      END_STATE();
    case 3821:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3822:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3823:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3824:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3825:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3826:
      if (lookahead == 't') ADVANCE(3965);
      END_STATE();
    case 3827:
      if (lookahead == 'e') ADVANCE(3966);
      END_STATE();
    case 3828:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3829:
      if (lookahead == 's') ADVANCE(3967);
      END_STATE();
    case 3830:
      if (lookahead == 'd') ADVANCE(3968);
      END_STATE();
    case 3831:
      if (lookahead == 'e') ADVANCE(3969);
      END_STATE();
    case 3832:
      if (lookahead == 'r') ADVANCE(3970);
      END_STATE();
    case 3833:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3834:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3835:
      if (lookahead == 'd') ADVANCE(3971);
      END_STATE();
    case 3836:
      if (lookahead == 'c') ADVANCE(3972);
      END_STATE();
    case 3837:
      if (lookahead == 't') ADVANCE(3973);
      END_STATE();
    case 3838:
      if (lookahead == 'a') ADVANCE(3974);
      END_STATE();
    case 3839:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3840:
      if (lookahead == 'v') ADVANCE(3975);
      END_STATE();
    case 3841:
      ACCEPT_TOKEN(anon_sym_CurrentResearchPodType);
      END_STATE();
    case 3842:
      if (lookahead == 'a') ADVANCE(3976);
      END_STATE();
    case 3843:
      if (lookahead == 'i') ADVANCE(3977);
      END_STATE();
    case 3844:
      if (lookahead == 't') ADVANCE(3978);
      END_STATE();
    case 3845:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3846:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3847:
      if (lookahead == 'o') ADVANCE(3979);
      END_STATE();
    case 3848:
      if (lookahead == 'x') ADVANCE(3980);
      END_STATE();
    case 3849:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3850:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3851:
      if (lookahead == 't') ADVANCE(3981);
      END_STATE();
    case 3852:
      if (lookahead == 'c') ADVANCE(3982);
      END_STATE();
    case 3853:
      if (lookahead == 'p') ADVANCE(3983);
      END_STATE();
    case 3854:
      if (lookahead == 'e') ADVANCE(3984);
      END_STATE();
    case 3855:
      if (lookahead == 'i') ADVANCE(3985);
      END_STATE();
    case 3856:
      if (lookahead == 'H') ADVANCE(3986);
      END_STATE();
    case 3857:
      if (lookahead == 's') ADVANCE(3987);
      END_STATE();
    case 3858:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(3988);
      if (lookahead == 'W') ADVANCE(3989);
      END_STATE();
    case 3859:
      if (lookahead == 'e') ADVANCE(3990);
      END_STATE();
    case 3860:
      if (lookahead == 'l') ADVANCE(3991);
      END_STATE();
    case 3861:
      if (lookahead == 'u') ADVANCE(3992);
      END_STATE();
    case 3862:
      if (lookahead == 'o') ADVANCE(3993);
      END_STATE();
    case 3863:
      if (lookahead == 'i') ADVANCE(3994);
      END_STATE();
    case 3864:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3865:
      if (lookahead == 'e') ADVANCE(3995);
      END_STATE();
    case 3866:
      if (lookahead == 'i') ADVANCE(3996);
      END_STATE();
    case 3867:
      if (lookahead == 'o') ADVANCE(3997);
      END_STATE();
    case 3868:
      if (lookahead == 'p') ADVANCE(3998);
      END_STATE();
    case 3869:
      if (lookahead == 'm') ADVANCE(3999);
      END_STATE();
    case 3870:
      if (lookahead == 't') ADVANCE(4000);
      END_STATE();
    case 3871:
      if (lookahead == 't') ADVANCE(4001);
      END_STATE();
    case 3872:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3873:
      if (lookahead == 'r') ADVANCE(4002);
      END_STATE();
    case 3874:
      if (lookahead == 'o') ADVANCE(4003);
      END_STATE();
    case 3875:
      if (lookahead == 'o') ADVANCE(4004);
      END_STATE();
    case 3876:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 3877:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3878:
      if (lookahead == 'f') ADVANCE(4005);
      END_STATE();
    case 3879:
      if (lookahead == 'i') ADVANCE(4006);
      END_STATE();
    case 3880:
      if (lookahead == 't') ADVANCE(4007);
      END_STATE();
    case 3881:
      if (lookahead == 's') ADVANCE(4008);
      END_STATE();
    case 3882:
      if (lookahead == 'c') ADVANCE(4009);
      END_STATE();
    case 3883:
      if (lookahead == 'l') ADVANCE(4010);
      END_STATE();
    case 3884:
      if (lookahead == 't') ADVANCE(4011);
      END_STATE();
    case 3885:
      if (lookahead == 't') ADVANCE(4012);
      END_STATE();
    case 3886:
      if (lookahead == 's') ADVANCE(4013);
      END_STATE();
    case 3887:
      if (lookahead == 'c') ADVANCE(4014);
      END_STATE();
    case 3888:
      if (lookahead == 'n') ADVANCE(4015);
      END_STATE();
    case 3889:
      if (lookahead == 'c') ADVANCE(4016);
      END_STATE();
    case 3890:
      if (lookahead == 'u') ADVANCE(4017);
      END_STATE();
    case 3891:
      if (lookahead == 'i') ADVANCE(4018);
      END_STATE();
    case 3892:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3893:
      if (lookahead == 'T') ADVANCE(4019);
      END_STATE();
    case 3894:
      if (lookahead == 'v') ADVANCE(4020);
      END_STATE();
    case 3895:
      if (lookahead == 'e') ADVANCE(4021);
      END_STATE();
    case 3896:
      if (lookahead == 'n') ADVANCE(4022);
      END_STATE();
    case 3897:
      if (lookahead == 'i') ADVANCE(4023);
      END_STATE();
    case 3898:
      if (lookahead == 'a') ADVANCE(4024);
      END_STATE();
    case 3899:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 3900:
      if (lookahead == 'c') ADVANCE(4025);
      END_STATE();
    case 3901:
      if (lookahead == 'r') ADVANCE(4026);
      END_STATE();
    case 3902:
      if (lookahead == 't') ADVANCE(4027);
      END_STATE();
    case 3903:
      if (lookahead == 'r') ADVANCE(4028);
      END_STATE();
    case 3904:
      if (lookahead == 'u') ADVANCE(4029);
      END_STATE();
    case 3905:
      if (lookahead == 'i') ADVANCE(4030);
      END_STATE();
    case 3906:
      if (lookahead == 'i') ADVANCE(4031);
      END_STATE();
    case 3907:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 3908:
      if (lookahead == 'a') ADVANCE(4032);
      END_STATE();
    case 3909:
      if (lookahead == 'y') ADVANCE(4033);
      END_STATE();
    case 3910:
      if (lookahead == 'i') ADVANCE(4034);
      END_STATE();
    case 3911:
      if (lookahead == 'x') ADVANCE(4035);
      END_STATE();
    case 3912:
      if (lookahead == 'o') ADVANCE(4036);
      END_STATE();
    case 3913:
      if (lookahead == 'o') ADVANCE(4037);
      END_STATE();
    case 3914:
      if (lookahead == 'n') ADVANCE(4038);
      END_STATE();
    case 3915:
      if (lookahead == 'O') ADVANCE(4039);
      END_STATE();
    case 3916:
      if (lookahead == 'n') ADVANCE(4040);
      END_STATE();
    case 3917:
      if (lookahead == 'u') ADVANCE(4041);
      END_STATE();
    case 3918:
      if (lookahead == 'n') ADVANCE(4042);
      END_STATE();
    case 3919:
      if (lookahead == 'd') ADVANCE(4043);
      END_STATE();
    case 3920:
      if (lookahead == 'p') ADVANCE(4044);
      END_STATE();
    case 3921:
      if (lookahead == 't') ADVANCE(4045);
      END_STATE();
    case 3922:
      if (lookahead == 'e') ADVANCE(4046);
      END_STATE();
    case 3923:
      if (lookahead == 'p') ADVANCE(4047);
      END_STATE();
    case 3924:
      if (lookahead == 't') ADVANCE(4048);
      END_STATE();
    case 3925:
      if (lookahead == 'u') ADVANCE(4049);
      END_STATE();
    case 3926:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3927:
      if (lookahead == 's') ADVANCE(4050);
      END_STATE();
    case 3928:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3929:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 3930:
      if (lookahead == 't') ADVANCE(4051);
      END_STATE();
    case 3931:
      if (lookahead == 'n') ADVANCE(4052);
      END_STATE();
    case 3932:
      if (lookahead == 'e') ADVANCE(4053);
      END_STATE();
    case 3933:
      if (lookahead == 'i') ADVANCE(4054);
      END_STATE();
    case 3934:
      if (lookahead == 'x') ADVANCE(4055);
      END_STATE();
    case 3935:
      if (lookahead == 'n') ADVANCE(4056);
      END_STATE();
    case 3936:
      if (lookahead == 'u') ADVANCE(4057);
      END_STATE();
    case 3937:
      if (lookahead == 'e') ADVANCE(4058);
      END_STATE();
    case 3938:
      if (lookahead == 'h') ADVANCE(4059);
      END_STATE();
    case 3939:
      if (lookahead == 'a') ADVANCE(4060);
      END_STATE();
    case 3940:
      if (lookahead == 'p') ADVANCE(4061);
      END_STATE();
    case 3941:
      if (lookahead == 't') ADVANCE(4062);
      END_STATE();
    case 3942:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3943:
      if (lookahead == 'i') ADVANCE(4063);
      END_STATE();
    case 3944:
      if (lookahead == 't') ADVANCE(4064);
      END_STATE();
    case 3945:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 3946:
      if (lookahead == 'i') ADVANCE(4065);
      END_STATE();
    case 3947:
      if (lookahead == 'g') ADVANCE(4066);
      END_STATE();
    case 3948:
      if (lookahead == 'f') ADVANCE(4067);
      END_STATE();
    case 3949:
      if (lookahead == 'P') ADVANCE(4068);
      END_STATE();
    case 3950:
      if (lookahead == 'E') ADVANCE(4069);
      END_STATE();
    case 3951:
      if (lookahead == 't') ADVANCE(4070);
      END_STATE();
    case 3952:
      if (lookahead == 'u') ADVANCE(4071);
      END_STATE();
    case 3953:
      if (lookahead == 'd') ADVANCE(4072);
      END_STATE();
    case 3954:
      if (lookahead == 'u') ADVANCE(4073);
      END_STATE();
    case 3955:
      if (lookahead == 'p') ADVANCE(4074);
      END_STATE();
    case 3956:
      if (lookahead == 'e') ADVANCE(4075);
      END_STATE();
    case 3957:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenInput);
      if (lookahead == '2') ADVANCE(4076);
      END_STATE();
    case 3958:
      if (lookahead == 't') ADVANCE(4077);
      END_STATE();
    case 3959:
      if (lookahead == 'p') ADVANCE(4078);
      END_STATE();
    case 3960:
      if (lookahead == 't') ADVANCE(4079);
      END_STATE();
    case 3961:
      if (lookahead == 'p') ADVANCE(4080);
      END_STATE();
    case 3962:
      if (lookahead == 't') ADVANCE(4081);
      END_STATE();
    case 3963:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideInput);
      if (lookahead == '2') ADVANCE(4082);
      END_STATE();
    case 3964:
      if (lookahead == 't') ADVANCE(4083);
      END_STATE();
    case 3965:
      if (lookahead == 'e') ADVANCE(4084);
      END_STATE();
    case 3966:
      if (lookahead == 'C') ADVANCE(4085);
      END_STATE();
    case 3967:
      if (lookahead == 's') ADVANCE(4086);
      END_STATE();
    case 3968:
      if (lookahead == 'g') ADVANCE(4087);
      END_STATE();
    case 3969:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 3970:
      if (lookahead == 'i') ADVANCE(4088);
      END_STATE();
    case 3971:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3972:
      if (lookahead == 't') ADVANCE(4089);
      END_STATE();
    case 3973:
      if (lookahead == 'e') ADVANCE(4090);
      END_STATE();
    case 3974:
      if (lookahead == 'l') ADVANCE(4091);
      END_STATE();
    case 3975:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3976:
      if (lookahead == 'u') ADVANCE(4092);
      END_STATE();
    case 3977:
      if (lookahead == 'z') ADVANCE(4093);
      END_STATE();
    case 3978:
      if (lookahead == 'i') ADVANCE(4094);
      END_STATE();
    case 3979:
      if (lookahead == 'x') ADVANCE(4095);
      END_STATE();
    case 3980:
      if (lookahead == 'i') ADVANCE(4096);
      END_STATE();
    case 3981:
      if (lookahead == 'i') ADVANCE(4097);
      END_STATE();
    case 3982:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 3983:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 3984:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3985:
      if (lookahead == 't') ADVANCE(4098);
      END_STATE();
    case 3986:
      if (lookahead == 'a') ADVANCE(4099);
      END_STATE();
    case 3987:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 3988:
      if (lookahead == 'i') ADVANCE(4100);
      END_STATE();
    case 3989:
      if (lookahead == 'a') ADVANCE(4101);
      END_STATE();
    case 3990:
      if (lookahead == 'I') ADVANCE(4102);
      END_STATE();
    case 3991:
      if (lookahead == 'a') ADVANCE(4103);
      END_STATE();
    case 3992:
      if (lookahead == 'r') ADVANCE(4104);
      END_STATE();
    case 3993:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 3994:
      if (lookahead == 'n') ADVANCE(4105);
      END_STATE();
    case 3995:
      if (lookahead == 'n') ADVANCE(4106);
      END_STATE();
    case 3996:
      if (lookahead == 'n') ADVANCE(4107);
      END_STATE();
    case 3997:
      if (lookahead == 'o') ADVANCE(4108);
      END_STATE();
    case 3998:
      if (lookahead == 'u') ADVANCE(4109);
      END_STATE();
    case 3999:
      if (lookahead == 'i') ADVANCE(4110);
      END_STATE();
    case 4000:
      if (lookahead == 'p') ADVANCE(4111);
      END_STATE();
    case 4001:
      if (lookahead == 'i') ADVANCE(4112);
      END_STATE();
    case 4002:
      if (lookahead == 'c') ADVANCE(4113);
      END_STATE();
    case 4003:
      if (lookahead == 'd') ADVANCE(4114);
      END_STATE();
    case 4004:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 4005:
      if (lookahead == 'f') ADVANCE(4115);
      END_STATE();
    case 4006:
      if (lookahead == 't') ADVANCE(4116);
      END_STATE();
    case 4007:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4008:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 4009:
      if (lookahead == 'u') ADVANCE(4117);
      END_STATE();
    case 4010:
      if (lookahead == 'R') ADVANCE(4118);
      END_STATE();
    case 4011:
      if (lookahead == 'i') ADVANCE(4119);
      END_STATE();
    case 4012:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4013:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 4014:
      if (lookahead == 'u') ADVANCE(4120);
      END_STATE();
    case 4015:
      if (lookahead == 'P') ADVANCE(4121);
      END_STATE();
    case 4016:
      if (lookahead == 'h') ADVANCE(4122);
      END_STATE();
    case 4017:
      if (lookahead == 'e') ADVANCE(4123);
      END_STATE();
    case 4018:
      if (lookahead == 'c') ADVANCE(4124);
      END_STATE();
    case 4019:
      if (lookahead == 'o') ADVANCE(4125);
      END_STATE();
    case 4020:
      if (lookahead == 'e') ADVANCE(4126);
      END_STATE();
    case 4021:
      if (lookahead == 'm') ADVANCE(4127);
      END_STATE();
    case 4022:
      if (lookahead == 'c') ADVANCE(4128);
      END_STATE();
    case 4023:
      if (lookahead == 'o') ADVANCE(4129);
      END_STATE();
    case 4024:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4025:
      if (lookahead == 'i') ADVANCE(4130);
      END_STATE();
    case 4026:
      if (lookahead == 'n') ADVANCE(4131);
      END_STATE();
    case 4027:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4028:
      if (lookahead == 'n') ADVANCE(4132);
      END_STATE();
    case 4029:
      if (lookahead == 't') ADVANCE(4133);
      END_STATE();
    case 4030:
      if (lookahead == 'n') ADVANCE(4134);
      END_STATE();
    case 4031:
      if (lookahead == 'o') ADVANCE(4135);
      END_STATE();
    case 4032:
      if (lookahead == 'r') ADVANCE(4136);
      END_STATE();
    case 4033:
      if (lookahead == 'd') ADVANCE(4137);
      END_STATE();
    case 4034:
      if (lookahead == 't') ADVANCE(4138);
      END_STATE();
    case 4035:
      if (lookahead == 'y') ADVANCE(4139);
      END_STATE();
    case 4036:
      if (lookahead == 'l') ADVANCE(4140);
      END_STATE();
    case 4037:
      if (lookahead == 'l') ADVANCE(4141);
      END_STATE();
    case 4038:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4142);
      if (lookahead == 'O') ADVANCE(4143);
      END_STATE();
    case 4039:
      if (lookahead == 'x') ADVANCE(4144);
      END_STATE();
    case 4040:
      if (lookahead == 'p') ADVANCE(4145);
      END_STATE();
    case 4041:
      if (lookahead == 't') ADVANCE(4146);
      END_STATE();
    case 4042:
      if (lookahead == 't') ADVANCE(4147);
      END_STATE();
    case 4043:
      if (lookahead == 'W') ADVANCE(4148);
      END_STATE();
    case 4044:
      if (lookahead == 'u') ADVANCE(4149);
      END_STATE();
    case 4045:
      if (lookahead == 'p') ADVANCE(4150);
      END_STATE();
    case 4046:
      if (lookahead == 's') ADVANCE(4151);
      END_STATE();
    case 4047:
      if (lookahead == 'u') ADVANCE(4152);
      END_STATE();
    case 4048:
      if (lookahead == 'p') ADVANCE(4153);
      END_STATE();
    case 4049:
      if (lookahead == 'd') ADVANCE(4154);
      END_STATE();
    case 4050:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4051:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 4052:
      if (lookahead == 'c') ADVANCE(4155);
      END_STATE();
    case 4053:
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 4054:
      if (lookahead == 'f') ADVANCE(4156);
      END_STATE();
    case 4055:
      if (lookahead == 't') ADVANCE(4157);
      END_STATE();
    case 4056:
      if (lookahead == 'p') ADVANCE(4158);
      END_STATE();
    case 4057:
      if (lookahead == 't') ADVANCE(4159);
      END_STATE();
    case 4058:
      if (lookahead == 't') ADVANCE(4160);
      END_STATE();
    case 4059:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4060:
      if (lookahead == 't') ADVANCE(4161);
      END_STATE();
    case 4061:
      if (lookahead == 'u') ADVANCE(4162);
      END_STATE();
    case 4062:
      if (lookahead == 'p') ADVANCE(4163);
      END_STATE();
    case 4063:
      if (lookahead == 't') ADVANCE(4164);
      END_STATE();
    case 4064:
      if (lookahead == 'i') ADVANCE(4165);
      END_STATE();
    case 4065:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 4066:
      if (lookahead == 'C') ADVANCE(4166);
      END_STATE();
    case 4067:
      if (lookahead == 'i') ADVANCE(4167);
      END_STATE();
    case 4068:
      if (lookahead == 'o') ADVANCE(4168);
      END_STATE();
    case 4069:
      if (lookahead == 'f') ADVANCE(4169);
      END_STATE();
    case 4070:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideInput);
      if (lookahead == '2') ADVANCE(4170);
      END_STATE();
    case 4071:
      if (lookahead == 't') ADVANCE(4171);
      END_STATE();
    case 4072:
      if (lookahead == 'e') ADVANCE(4172);
      END_STATE();
    case 4073:
      if (lookahead == 't') ADVANCE(4173);
      END_STATE();
    case 4074:
      if (lookahead == 'u') ADVANCE(4174);
      END_STATE();
    case 4075:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxide);
      if (lookahead == 'I') ADVANCE(4175);
      if (lookahead == 'O') ADVANCE(4176);
      END_STATE();
    case 4076:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenInput2);
      END_STATE();
    case 4077:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenOutput);
      if (lookahead == '2') ADVANCE(4177);
      END_STATE();
    case 4078:
      if (lookahead == 'u') ADVANCE(4178);
      END_STATE();
    case 4079:
      if (lookahead == 'p') ADVANCE(4179);
      END_STATE();
    case 4080:
      if (lookahead == 'u') ADVANCE(4180);
      END_STATE();
    case 4081:
      if (lookahead == 'p') ADVANCE(4181);
      END_STATE();
    case 4082:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideInput2);
      END_STATE();
    case 4083:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideOutput);
      if (lookahead == '2') ADVANCE(4182);
      END_STATE();
    case 4084:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 4085:
      if (lookahead == 'h') ADVANCE(4183);
      END_STATE();
    case 4086:
      if (lookahead == 'i') ADVANCE(4184);
      END_STATE();
    case 4087:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4088:
      if (lookahead == 'c') ADVANCE(4185);
      END_STATE();
    case 4089:
      if (lookahead == 'e') ADVANCE(4186);
      END_STATE();
    case 4090:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 4091:
      if (lookahead == 'E') ADVANCE(4187);
      END_STATE();
    case 4092:
      if (lookahead == 'l') ADVANCE(4188);
      END_STATE();
    case 4093:
      if (lookahead == 'o') ADVANCE(4189);
      END_STATE();
    case 4094:
      if (lookahead == 'c') ADVANCE(4190);
      END_STATE();
    case 4095:
      if (lookahead == 'i') ADVANCE(4191);
      END_STATE();
    case 4096:
      if (lookahead == 'd') ADVANCE(4192);
      END_STATE();
    case 4097:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 4098:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4099:
      if (lookahead == 's') ADVANCE(4193);
      END_STATE();
    case 4100:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 4101:
      if (lookahead == 's') ADVANCE(4194);
      END_STATE();
    case 4102:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 4103:
      if (lookahead == 's') ADVANCE(4195);
      END_STATE();
    case 4104:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4105:
      if (lookahead == 'i') ADVANCE(4196);
      END_STATE();
    case 4106:
      if (lookahead == 't') ADVANCE(4197);
      END_STATE();
    case 4107:
      if (lookahead == 't') ADVANCE(4198);
      END_STATE();
    case 4108:
      if (lookahead == 'd') ADVANCE(4199);
      END_STATE();
    case 4109:
      if (lookahead == 't') ADVANCE(4200);
      END_STATE();
    case 4110:
      if (lookahead == 't') ADVANCE(4201);
      END_STATE();
    case 4111:
      if (lookahead == 'u') ADVANCE(4202);
      END_STATE();
    case 4112:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 4113:
      if (lookahead == 'h') ADVANCE(4203);
      END_STATE();
    case 4114:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4115:
      if (lookahead == 'i') ADVANCE(4204);
      END_STATE();
    case 4116:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4117:
      if (lookahead == 'p') ADVANCE(4205);
      END_STATE();
    case 4118:
      if (lookahead == 'u') ADVANCE(4206);
      END_STATE();
    case 4119:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 4120:
      if (lookahead == 'p') ADVANCE(4207);
      END_STATE();
    case 4121:
      if (lookahead == 'r') ADVANCE(4208);
      END_STATE();
    case 4122:
      if (lookahead == 'R') ADVANCE(4209);
      END_STATE();
    case 4123:
      if (lookahead == 'u') ADVANCE(4210);
      END_STATE();
    case 4124:
      if (lookahead == 'i') ADVANCE(4211);
      END_STATE();
    case 4125:
      if (lookahead == 'C') ADVANCE(4212);
      END_STATE();
    case 4126:
      if (lookahead == 'n') ADVANCE(4213);
      END_STATE();
    case 4127:
      if (lookahead == 'p') ADVANCE(4214);
      END_STATE();
    case 4128:
      if (lookahead == 'y') ADVANCE(4215);
      END_STATE();
    case 4129:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 4130:
      if (lookahead == 'e') ADVANCE(4216);
      END_STATE();
    case 4131:
      if (lookahead == 'a') ADVANCE(4217);
      END_STATE();
    case 4132:
      if (lookahead == 'a') ADVANCE(4218);
      END_STATE();
    case 4133:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4134:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 4135:
      if (lookahead == 'x') ADVANCE(4219);
      END_STATE();
    case 4136:
      if (lookahead == 'b') ADVANCE(4220);
      END_STATE();
    case 4137:
      if (lookahead == 'r') ADVANCE(4221);
      END_STATE();
    case 4138:
      if (lookahead == 'r') ADVANCE(4222);
      END_STATE();
    case 4139:
      if (lookahead == 'g') ADVANCE(4223);
      END_STATE();
    case 4140:
      if (lookahead == 'l') ADVANCE(4224);
      END_STATE();
    case 4141:
      if (lookahead == 'a') ADVANCE(4225);
      END_STATE();
    case 4142:
      if (lookahead == 'n') ADVANCE(4226);
      END_STATE();
    case 4143:
      if (lookahead == 'u') ADVANCE(4227);
      END_STATE();
    case 4144:
      if (lookahead == 'i') ADVANCE(4228);
      END_STATE();
    case 4145:
      if (lookahead == 'u') ADVANCE(4229);
      END_STATE();
    case 4146:
      if (lookahead == 'p') ADVANCE(4230);
      END_STATE();
    case 4147:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4231);
      if (lookahead == 'O') ADVANCE(4232);
      END_STATE();
    case 4148:
      if (lookahead == 'a') ADVANCE(4233);
      END_STATE();
    case 4149:
      if (lookahead == 't') ADVANCE(4234);
      END_STATE();
    case 4150:
      if (lookahead == 'u') ADVANCE(4235);
      END_STATE();
    case 4151:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4236);
      if (lookahead == 'O') ADVANCE(4237);
      END_STATE();
    case 4152:
      if (lookahead == 't') ADVANCE(4238);
      END_STATE();
    case 4153:
      if (lookahead == 'u') ADVANCE(4239);
      END_STATE();
    case 4154:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4155:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4156:
      if (lookahead == 'f') ADVANCE(4240);
      END_STATE();
    case 4157:
      if (lookahead == 'e') ADVANCE(4241);
      END_STATE();
    case 4158:
      if (lookahead == 'u') ADVANCE(4242);
      END_STATE();
    case 4159:
      if (lookahead == 'p') ADVANCE(4243);
      END_STATE();
    case 4160:
      if (lookahead == 't') ADVANCE(4244);
      END_STATE();
    case 4161:
      if (lookahead == 'i') ADVANCE(4245);
      END_STATE();
    case 4162:
      if (lookahead == 't') ADVANCE(4246);
      END_STATE();
    case 4163:
      if (lookahead == 'u') ADVANCE(4247);
      END_STATE();
    case 4164:
      if (lookahead == 'u') ADVANCE(4248);
      END_STATE();
    case 4165:
      if (lookahead == 'v') ADVANCE(4249);
      END_STATE();
    case 4166:
      if (lookahead == 'o') ADVANCE(4250);
      END_STATE();
    case 4167:
      if (lookahead == 'c') ADVANCE(4251);
      END_STATE();
    case 4168:
      if (lookahead == 'd') ADVANCE(4252);
      END_STATE();
    case 4169:
      if (lookahead == 'f') ADVANCE(4253);
      END_STATE();
    case 4170:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideInput2);
      END_STATE();
    case 4171:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideOutput);
      if (lookahead == '2') ADVANCE(4254);
      END_STATE();
    case 4172:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxide);
      if (lookahead == 'I') ADVANCE(4255);
      if (lookahead == 'O') ADVANCE(4256);
      END_STATE();
    case 4173:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenInput);
      if (lookahead == '2') ADVANCE(4257);
      END_STATE();
    case 4174:
      if (lookahead == 't') ADVANCE(4258);
      END_STATE();
    case 4175:
      if (lookahead == 'n') ADVANCE(4259);
      END_STATE();
    case 4176:
      if (lookahead == 'u') ADVANCE(4260);
      END_STATE();
    case 4177:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenOutput2);
      END_STATE();
    case 4178:
      if (lookahead == 't') ADVANCE(4261);
      END_STATE();
    case 4179:
      if (lookahead == 'u') ADVANCE(4262);
      END_STATE();
    case 4180:
      if (lookahead == 't') ADVANCE(4263);
      END_STATE();
    case 4181:
      if (lookahead == 'u') ADVANCE(4264);
      END_STATE();
    case 4182:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideOutput2);
      END_STATE();
    case 4183:
      if (lookahead == 'i') ADVANCE(4265);
      END_STATE();
    case 4184:
      if (lookahead == 'n') ADVANCE(4266);
      END_STATE();
    case 4185:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 4186:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 4187:
      if (lookahead == 'f') ADVANCE(4267);
      END_STATE();
    case 4188:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4189:
      if (lookahead == 'n') ADVANCE(4268);
      END_STATE();
    case 4190:
      if (lookahead == 'a') ADVANCE(4269);
      END_STATE();
    case 4191:
      if (lookahead == 'd') ADVANCE(4270);
      END_STATE();
    case 4192:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4193:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 4194:
      if (lookahead == 't') ADVANCE(4271);
      END_STATE();
    case 4195:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 4196:
      if (lookahead == 'n') ADVANCE(4272);
      END_STATE();
    case 4197:
      if (lookahead == 'H') ADVANCE(4273);
      END_STATE();
    case 4198:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 4199:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 4200:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4201:
      if (lookahead == 'e') ADVANCE(4274);
      END_STATE();
    case 4202:
      if (lookahead == 't') ADVANCE(4275);
      END_STATE();
    case 4203:
      if (lookahead == 'P') ADVANCE(4276);
      END_STATE();
    case 4204:
      if (lookahead == 'c') ADVANCE(4277);
      END_STATE();
    case 4205:
      if (lookahead == 'a') ADVANCE(4278);
      END_STATE();
    case 4206:
      if (lookahead == 'l') ADVANCE(4279);
      END_STATE();
    case 4207:
      if (lookahead == 'a') ADVANCE(4280);
      END_STATE();
    case 4208:
      if (lookahead == 'o') ADVANCE(4281);
      END_STATE();
    case 4209:
      if (lookahead == 'e') ADVANCE(4282);
      END_STATE();
    case 4210:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4211:
      if (lookahead == 'n') ADVANCE(4283);
      END_STATE();
    case 4212:
      if (lookahead == 'o') ADVANCE(4284);
      END_STATE();
    case 4213:
      if (lookahead == 't') ADVANCE(4285);
      END_STATE();
    case 4214:
      if (lookahead == 'e') ADVANCE(4286);
      END_STATE();
    case 4215:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(428);
      END_STATE();
    case 4216:
      if (lookahead == 'n') ADVANCE(4287);
      END_STATE();
    case 4217:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4218:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4219:
      if (lookahead == 'i') ADVANCE(4288);
      END_STATE();
    case 4220:
      if (lookahead == 'o') ADVANCE(4289);
      END_STATE();
    case 4221:
      if (lookahead == 'o') ADVANCE(4290);
      END_STATE();
    case 4222:
      if (lookahead == 'o') ADVANCE(4291);
      END_STATE();
    case 4223:
      if (lookahead == 'e') ADVANCE(4292);
      END_STATE();
    case 4224:
      if (lookahead == 'u') ADVANCE(4293);
      END_STATE();
    case 4225:
      if (lookahead == 't') ADVANCE(4294);
      END_STATE();
    case 4226:
      if (lookahead == 'p') ADVANCE(4295);
      END_STATE();
    case 4227:
      if (lookahead == 't') ADVANCE(4296);
      END_STATE();
    case 4228:
      if (lookahead == 'd') ADVANCE(4297);
      END_STATE();
    case 4229:
      if (lookahead == 't') ADVANCE(4298);
      END_STATE();
    case 4230:
      if (lookahead == 'u') ADVANCE(4299);
      END_STATE();
    case 4231:
      if (lookahead == 'n') ADVANCE(4300);
      END_STATE();
    case 4232:
      if (lookahead == 'u') ADVANCE(4301);
      END_STATE();
    case 4233:
      if (lookahead == 't') ADVANCE(4302);
      END_STATE();
    case 4234:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4235:
      if (lookahead == 't') ADVANCE(4303);
      END_STATE();
    case 4236:
      if (lookahead == 'n') ADVANCE(4304);
      END_STATE();
    case 4237:
      if (lookahead == 'u') ADVANCE(4305);
      END_STATE();
    case 4238:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4239:
      if (lookahead == 't') ADVANCE(4306);
      END_STATE();
    case 4240:
      if (lookahead == 'e') ADVANCE(4307);
      END_STATE();
    case 4241:
      if (lookahead == 'r') ADVANCE(4308);
      END_STATE();
    case 4242:
      if (lookahead == 't') ADVANCE(4309);
      END_STATE();
    case 4243:
      if (lookahead == 'u') ADVANCE(4310);
      END_STATE();
    case 4244:
      if (lookahead == 'i') ADVANCE(4311);
      END_STATE();
    case 4245:
      if (lookahead == 'o') ADVANCE(4312);
      END_STATE();
    case 4246:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4247:
      if (lookahead == 't') ADVANCE(4313);
      END_STATE();
    case 4248:
      if (lookahead == 'd') ADVANCE(4314);
      END_STATE();
    case 4249:
      if (lookahead == 'e') ADVANCE(4315);
      END_STATE();
    case 4250:
      if (lookahead == 'n') ADVANCE(4316);
      END_STATE();
    case 4251:
      if (lookahead == 'i') ADVANCE(4317);
      END_STATE();
    case 4252:
      ACCEPT_TOKEN(anon_sym_ManualResearchRequiredPod);
      END_STATE();
    case 4253:
      if (lookahead == 'i') ADVANCE(4318);
      END_STATE();
    case 4254:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideOutput2);
      END_STATE();
    case 4255:
      if (lookahead == 'n') ADVANCE(4319);
      END_STATE();
    case 4256:
      if (lookahead == 'u') ADVANCE(4320);
      END_STATE();
    case 4257:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenInput2);
      END_STATE();
    case 4258:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenOutput);
      if (lookahead == '2') ADVANCE(4321);
      END_STATE();
    case 4259:
      if (lookahead == 'p') ADVANCE(4322);
      END_STATE();
    case 4260:
      if (lookahead == 't') ADVANCE(4323);
      END_STATE();
    case 4261:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantInput);
      if (lookahead == '2') ADVANCE(4324);
      END_STATE();
    case 4262:
      if (lookahead == 't') ADVANCE(4325);
      END_STATE();
    case 4263:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesInput);
      if (lookahead == '2') ADVANCE(4326);
      END_STATE();
    case 4264:
      if (lookahead == 't') ADVANCE(4327);
      END_STATE();
    case 4265:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 4266:
      if (lookahead == 'g') ADVANCE(4328);
      END_STATE();
    case 4267:
      if (lookahead == 'f') ADVANCE(4329);
      END_STATE();
    case 4268:
      if (lookahead == 't') ADVANCE(4330);
      END_STATE();
    case 4269:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4270:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4271:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4272:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 4273:
      if (lookahead == 'a') ADVANCE(4331);
      END_STATE();
    case 4274:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 4275:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4276:
      if (lookahead == 'o') ADVANCE(4332);
      END_STATE();
    case 4277:
      if (lookahead == 'i') ADVANCE(4333);
      END_STATE();
    case 4278:
      if (lookahead == 'n') ADVANCE(4334);
      END_STATE();
    case 4279:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4280:
      if (lookahead == 'n') ADVANCE(4335);
      END_STATE();
    case 4281:
      if (lookahead == 'g') ADVANCE(4336);
      END_STATE();
    case 4282:
      if (lookahead == 'q') ADVANCE(4337);
      END_STATE();
    case 4283:
      if (lookahead == 'i') ADVANCE(4338);
      END_STATE();
    case 4284:
      if (lookahead == 'n') ADVANCE(4339);
      END_STATE();
    case 4285:
      if (lookahead == 'T') ADVANCE(4340);
      END_STATE();
    case 4286:
      if (lookahead == 'r') ADVANCE(4341);
      END_STATE();
    case 4287:
      if (lookahead == 'c') ADVANCE(4342);
      END_STATE();
    case 4288:
      if (lookahead == 'd') ADVANCE(4343);
      END_STATE();
    case 4289:
      if (lookahead == 'n') ADVANCE(4344);
      END_STATE();
    case 4290:
      if (lookahead == 'g') ADVANCE(4345);
      END_STATE();
    case 4291:
      if (lookahead == 'g') ADVANCE(4346);
      if (lookahead == 'u') ADVANCE(4347);
      END_STATE();
    case 4292:
      if (lookahead == 'n') ADVANCE(4348);
      END_STATE();
    case 4293:
      if (lookahead == 't') ADVANCE(4349);
      END_STATE();
    case 4294:
      if (lookahead == 'i') ADVANCE(4350);
      END_STATE();
    case 4295:
      if (lookahead == 'u') ADVANCE(4351);
      END_STATE();
    case 4296:
      if (lookahead == 'p') ADVANCE(4352);
      END_STATE();
    case 4297:
      if (lookahead == 'e') ADVANCE(4353);
      END_STATE();
    case 4298:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4299:
      if (lookahead == 't') ADVANCE(4354);
      END_STATE();
    case 4300:
      if (lookahead == 'p') ADVANCE(4355);
      END_STATE();
    case 4301:
      if (lookahead == 't') ADVANCE(4356);
      END_STATE();
    case 4302:
      if (lookahead == 'e') ADVANCE(4357);
      END_STATE();
    case 4303:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4304:
      if (lookahead == 'p') ADVANCE(4358);
      END_STATE();
    case 4305:
      if (lookahead == 't') ADVANCE(4359);
      END_STATE();
    case 4306:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4307:
      if (lookahead == 'r') ADVANCE(4360);
      END_STATE();
    case 4308:
      if (lookahead == 'n') ADVANCE(4361);
      END_STATE();
    case 4309:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4310:
      if (lookahead == 't') ADVANCE(4362);
      END_STATE();
    case 4311:
      if (lookahead == 'n') ADVANCE(4363);
      END_STATE();
    case 4312:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 4313:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4314:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4315:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(428);
      END_STATE();
    case 4316:
      if (lookahead == 't') ADVANCE(4364);
      END_STATE();
    case 4317:
      if (lookahead == 'e') ADVANCE(4365);
      END_STATE();
    case 4318:
      if (lookahead == 'c') ADVANCE(4366);
      END_STATE();
    case 4319:
      if (lookahead == 'p') ADVANCE(4367);
      END_STATE();
    case 4320:
      if (lookahead == 't') ADVANCE(4368);
      END_STATE();
    case 4321:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenOutput2);
      END_STATE();
    case 4322:
      if (lookahead == 'u') ADVANCE(4369);
      END_STATE();
    case 4323:
      if (lookahead == 'p') ADVANCE(4370);
      END_STATE();
    case 4324:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantInput2);
      END_STATE();
    case 4325:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantOutput);
      if (lookahead == '2') ADVANCE(4371);
      END_STATE();
    case 4326:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesInput2);
      END_STATE();
    case 4327:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesOutput);
      if (lookahead == '2') ADVANCE(4372);
      END_STATE();
    case 4328:
      if (lookahead == 'U') ADVANCE(4373);
      END_STATE();
    case 4329:
      if (lookahead == 'i') ADVANCE(4374);
      END_STATE();
    case 4330:
      if (lookahead == 'a') ADVANCE(4375);
      END_STATE();
    case 4331:
      if (lookahead == 's') ADVANCE(4376);
      END_STATE();
    case 4332:
      if (lookahead == 'd') ADVANCE(4377);
      END_STATE();
    case 4333:
      if (lookahead == 'e') ADVANCE(4378);
      END_STATE();
    case 4334:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4335:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4336:
      if (lookahead == 'r') ADVANCE(4379);
      END_STATE();
    case 4337:
      if (lookahead == 'u') ADVANCE(4380);
      END_STATE();
    case 4338:
      if (lookahead == 't') ADVANCE(4381);
      END_STATE();
    case 4339:
      if (lookahead == 't') ADVANCE(4382);
      END_STATE();
    case 4340:
      if (lookahead == 'i') ADVANCE(4383);
      END_STATE();
    case 4341:
      if (lookahead == 'a') ADVANCE(4384);
      END_STATE();
    case 4342:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4343:
      if (lookahead == 'e') ADVANCE(4385);
      END_STATE();
    case 4344:
      if (lookahead == 'D') ADVANCE(4386);
      END_STATE();
    case 4345:
      if (lookahead == 'e') ADVANCE(4387);
      END_STATE();
    case 4346:
      if (lookahead == 'e') ADVANCE(4388);
      END_STATE();
    case 4347:
      if (lookahead == 's') ADVANCE(4389);
      END_STATE();
    case 4348:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4390);
      if (lookahead == 'O') ADVANCE(4391);
      END_STATE();
    case 4349:
      if (lookahead == 'a') ADVANCE(4392);
      END_STATE();
    case 4350:
      if (lookahead == 'l') ADVANCE(4393);
      END_STATE();
    case 4351:
      if (lookahead == 't') ADVANCE(4394);
      END_STATE();
    case 4352:
      if (lookahead == 'u') ADVANCE(4395);
      END_STATE();
    case 4353:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4396);
      if (lookahead == 'O') ADVANCE(4397);
      END_STATE();
    case 4354:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4355:
      if (lookahead == 'u') ADVANCE(4398);
      END_STATE();
    case 4356:
      if (lookahead == 'p') ADVANCE(4399);
      END_STATE();
    case 4357:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 4358:
      if (lookahead == 'u') ADVANCE(4400);
      END_STATE();
    case 4359:
      if (lookahead == 'p') ADVANCE(4401);
      END_STATE();
    case 4360:
      if (lookahead == 'e') ADVANCE(4402);
      END_STATE();
    case 4361:
      if (lookahead == 'a') ADVANCE(4403);
      END_STATE();
    case 4362:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4363:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 4364:
      if (lookahead == 'a') ADVANCE(4404);
      END_STATE();
    case 4365:
      if (lookahead == 'n') ADVANCE(4405);
      END_STATE();
    case 4366:
      if (lookahead == 'i') ADVANCE(4406);
      END_STATE();
    case 4367:
      if (lookahead == 'u') ADVANCE(4407);
      END_STATE();
    case 4368:
      if (lookahead == 'p') ADVANCE(4408);
      END_STATE();
    case 4369:
      if (lookahead == 't') ADVANCE(4409);
      END_STATE();
    case 4370:
      if (lookahead == 'u') ADVANCE(4410);
      END_STATE();
    case 4371:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantOutput2);
      END_STATE();
    case 4372:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesOutput2);
      END_STATE();
    case 4373:
      if (lookahead == 'n') ADVANCE(4411);
      END_STATE();
    case 4374:
      if (lookahead == 'c') ADVANCE(4412);
      END_STATE();
    case 4375:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4376:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 4377:
      if (lookahead == 'T') ADVANCE(4413);
      END_STATE();
    case 4378:
      if (lookahead == 'n') ADVANCE(4414);
      END_STATE();
    case 4379:
      if (lookahead == 'e') ADVANCE(4415);
      END_STATE();
    case 4380:
      if (lookahead == 'i') ADVANCE(4416);
      END_STATE();
    case 4381:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4382:
      if (lookahead == 'a') ADVANCE(4417);
      END_STATE();
    case 4383:
      if (lookahead == 'm') ADVANCE(4418);
      END_STATE();
    case 4384:
      if (lookahead == 't') ADVANCE(4419);
      END_STATE();
    case 4385:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4420);
      if (lookahead == 'O') ADVANCE(4421);
      END_STATE();
    case 4386:
      if (lookahead == 'i') ADVANCE(4422);
      END_STATE();
    case 4387:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 4388:
      if (lookahead == 'n') ADVANCE(4423);
      END_STATE();
    case 4389:
      if (lookahead == 'O') ADVANCE(4424);
      END_STATE();
    case 4390:
      if (lookahead == 'n') ADVANCE(4425);
      END_STATE();
    case 4391:
      if (lookahead == 'u') ADVANCE(4426);
      END_STATE();
    case 4392:
      if (lookahead == 'n') ADVANCE(4427);
      END_STATE();
    case 4393:
      if (lookahead == 'e') ADVANCE(4428);
      END_STATE();
    case 4394:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4395:
      if (lookahead == 't') ADVANCE(4429);
      END_STATE();
    case 4396:
      if (lookahead == 'n') ADVANCE(4430);
      END_STATE();
    case 4397:
      if (lookahead == 'u') ADVANCE(4431);
      END_STATE();
    case 4398:
      if (lookahead == 't') ADVANCE(4432);
      END_STATE();
    case 4399:
      if (lookahead == 'u') ADVANCE(4433);
      END_STATE();
    case 4400:
      if (lookahead == 't') ADVANCE(4434);
      END_STATE();
    case 4401:
      if (lookahead == 'u') ADVANCE(4435);
      END_STATE();
    case 4402:
      if (lookahead == 'n') ADVANCE(4436);
      END_STATE();
    case 4403:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 4404:
      if (lookahead == 'c') ADVANCE(4437);
      END_STATE();
    case 4405:
      if (lookahead == 'c') ADVANCE(4438);
      END_STATE();
    case 4406:
      if (lookahead == 'e') ADVANCE(4439);
      END_STATE();
    case 4407:
      if (lookahead == 't') ADVANCE(4440);
      END_STATE();
    case 4408:
      if (lookahead == 'u') ADVANCE(4441);
      END_STATE();
    case 4409:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideInput);
      if (lookahead == '2') ADVANCE(4442);
      END_STATE();
    case 4410:
      if (lookahead == 't') ADVANCE(4443);
      END_STATE();
    case 4411:
      if (lookahead == 'i') ADVANCE(4444);
      END_STATE();
    case 4412:
      if (lookahead == 'i') ADVANCE(4445);
      END_STATE();
    case 4413:
      if (lookahead == 'y') ADVANCE(4446);
      END_STATE();
    case 4414:
      if (lookahead == 'c') ADVANCE(4447);
      END_STATE();
    case 4415:
      if (lookahead == 's') ADVANCE(4448);
      END_STATE();
    case 4416:
      if (lookahead == 'r') ADVANCE(4449);
      END_STATE();
    case 4417:
      if (lookahead == 'c') ADVANCE(4450);
      END_STATE();
    case 4418:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4419:
      if (lookahead == 'u') ADVANCE(4451);
      END_STATE();
    case 4420:
      if (lookahead == 'n') ADVANCE(4452);
      END_STATE();
    case 4421:
      if (lookahead == 'u') ADVANCE(4453);
      END_STATE();
    case 4422:
      if (lookahead == 'o') ADVANCE(4454);
      END_STATE();
    case 4423:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4455);
      if (lookahead == 'O') ADVANCE(4456);
      END_STATE();
    case 4424:
      if (lookahead == 'x') ADVANCE(4457);
      END_STATE();
    case 4425:
      if (lookahead == 'p') ADVANCE(4458);
      END_STATE();
    case 4426:
      if (lookahead == 't') ADVANCE(4459);
      END_STATE();
    case 4427:
      if (lookahead == 't') ADVANCE(4460);
      END_STATE();
    case 4428:
      if (lookahead == 's') ADVANCE(4461);
      END_STATE();
    case 4429:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4430:
      if (lookahead == 'p') ADVANCE(4462);
      END_STATE();
    case 4431:
      if (lookahead == 't') ADVANCE(4463);
      END_STATE();
    case 4432:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4433:
      if (lookahead == 't') ADVANCE(4464);
      END_STATE();
    case 4434:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4435:
      if (lookahead == 't') ADVANCE(4465);
      END_STATE();
    case 4436:
      if (lookahead == 't') ADVANCE(4466);
      END_STATE();
    case 4437:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4438:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4439:
      if (lookahead == 'n') ADVANCE(4467);
      END_STATE();
    case 4440:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideInput);
      if (lookahead == '2') ADVANCE(4468);
      END_STATE();
    case 4441:
      if (lookahead == 't') ADVANCE(4469);
      END_STATE();
    case 4442:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideInput2);
      END_STATE();
    case 4443:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideOutput);
      if (lookahead == '2') ADVANCE(4470);
      END_STATE();
    case 4444:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4445:
      if (lookahead == 'e') ADVANCE(4471);
      END_STATE();
    case 4446:
      if (lookahead == 'p') ADVANCE(4472);
      END_STATE();
    case 4447:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4448:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 4449:
      if (lookahead == 'e') ADVANCE(4473);
      END_STATE();
    case 4450:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 4451:
      if (lookahead == 'r') ADVANCE(4474);
      END_STATE();
    case 4452:
      if (lookahead == 'p') ADVANCE(4475);
      END_STATE();
    case 4453:
      if (lookahead == 't') ADVANCE(4476);
      END_STATE();
    case 4454:
      if (lookahead == 'x') ADVANCE(4477);
      END_STATE();
    case 4455:
      if (lookahead == 'n') ADVANCE(4478);
      END_STATE();
    case 4456:
      if (lookahead == 'u') ADVANCE(4479);
      END_STATE();
    case 4457:
      if (lookahead == 'i') ADVANCE(4480);
      END_STATE();
    case 4458:
      if (lookahead == 'u') ADVANCE(4481);
      END_STATE();
    case 4459:
      if (lookahead == 'p') ADVANCE(4482);
      END_STATE();
    case 4460:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4483);
      if (lookahead == 'O') ADVANCE(4484);
      END_STATE();
    case 4461:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4485);
      if (lookahead == 'O') ADVANCE(4486);
      END_STATE();
    case 4462:
      if (lookahead == 'u') ADVANCE(4487);
      END_STATE();
    case 4463:
      if (lookahead == 'p') ADVANCE(4488);
      END_STATE();
    case 4464:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4465:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4466:
      if (lookahead == 'i') ADVANCE(4489);
      END_STATE();
    case 4467:
      if (lookahead == 'c') ADVANCE(4490);
      END_STATE();
    case 4468:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideInput2);
      END_STATE();
    case 4469:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideOutput);
      if (lookahead == '2') ADVANCE(4491);
      END_STATE();
    case 4470:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideOutput2);
      END_STATE();
    case 4471:
      if (lookahead == 'n') ADVANCE(4492);
      END_STATE();
    case 4472:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 4473:
      if (lookahead == 'd') ADVANCE(4493);
      END_STATE();
    case 4474:
      if (lookahead == 'e') ADVANCE(4494);
      END_STATE();
    case 4475:
      if (lookahead == 'u') ADVANCE(4495);
      END_STATE();
    case 4476:
      if (lookahead == 'p') ADVANCE(4496);
      END_STATE();
    case 4477:
      if (lookahead == 'i') ADVANCE(4497);
      END_STATE();
    case 4478:
      if (lookahead == 'p') ADVANCE(4498);
      END_STATE();
    case 4479:
      if (lookahead == 't') ADVANCE(4499);
      END_STATE();
    case 4480:
      if (lookahead == 'd') ADVANCE(4500);
      END_STATE();
    case 4481:
      if (lookahead == 't') ADVANCE(4501);
      END_STATE();
    case 4482:
      if (lookahead == 'u') ADVANCE(4502);
      END_STATE();
    case 4483:
      if (lookahead == 'n') ADVANCE(4503);
      END_STATE();
    case 4484:
      if (lookahead == 'u') ADVANCE(4504);
      END_STATE();
    case 4485:
      if (lookahead == 'n') ADVANCE(4505);
      END_STATE();
    case 4486:
      if (lookahead == 'u') ADVANCE(4506);
      END_STATE();
    case 4487:
      if (lookahead == 't') ADVANCE(4507);
      END_STATE();
    case 4488:
      if (lookahead == 'u') ADVANCE(4508);
      END_STATE();
    case 4489:
      if (lookahead == 'a') ADVANCE(4509);
      END_STATE();
    case 4490:
      if (lookahead == 'y') ADVANCE(4510);
      END_STATE();
    case 4491:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideOutput2);
      END_STATE();
    case 4492:
      if (lookahead == 'c') ADVANCE(4511);
      END_STATE();
    case 4493:
      if (lookahead == 'P') ADVANCE(4512);
      END_STATE();
    case 4494:
      if (lookahead == 'E') ADVANCE(4513);
      END_STATE();
    case 4495:
      if (lookahead == 't') ADVANCE(4514);
      END_STATE();
    case 4496:
      if (lookahead == 'u') ADVANCE(4515);
      END_STATE();
    case 4497:
      if (lookahead == 'd') ADVANCE(4516);
      END_STATE();
    case 4498:
      if (lookahead == 'u') ADVANCE(4517);
      END_STATE();
    case 4499:
      if (lookahead == 'p') ADVANCE(4518);
      END_STATE();
    case 4500:
      if (lookahead == 'e') ADVANCE(4519);
      END_STATE();
    case 4501:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4502:
      if (lookahead == 't') ADVANCE(4520);
      END_STATE();
    case 4503:
      if (lookahead == 'p') ADVANCE(4521);
      END_STATE();
    case 4504:
      if (lookahead == 't') ADVANCE(4522);
      END_STATE();
    case 4505:
      if (lookahead == 'p') ADVANCE(4523);
      END_STATE();
    case 4506:
      if (lookahead == 't') ADVANCE(4524);
      END_STATE();
    case 4507:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4508:
      if (lookahead == 't') ADVANCE(4525);
      END_STATE();
    case 4509:
      if (lookahead == 'l') ADVANCE(4526);
      END_STATE();
    case 4510:
      ACCEPT_TOKEN(anon_sym_OperationalTemperatureEfficiency);
      END_STATE();
    case 4511:
      if (lookahead == 'y') ADVANCE(4527);
      END_STATE();
    case 4512:
      if (lookahead == 'o') ADVANCE(4528);
      END_STATE();
    case 4513:
      if (lookahead == 'f') ADVANCE(4529);
      END_STATE();
    case 4514:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4515:
      if (lookahead == 't') ADVANCE(4530);
      END_STATE();
    case 4516:
      if (lookahead == 'e') ADVANCE(4531);
      END_STATE();
    case 4517:
      if (lookahead == 't') ADVANCE(4532);
      END_STATE();
    case 4518:
      if (lookahead == 'u') ADVANCE(4533);
      END_STATE();
    case 4519:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4534);
      if (lookahead == 'O') ADVANCE(4535);
      END_STATE();
    case 4520:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4521:
      if (lookahead == 'u') ADVANCE(4536);
      END_STATE();
    case 4522:
      if (lookahead == 'p') ADVANCE(4537);
      END_STATE();
    case 4523:
      if (lookahead == 'u') ADVANCE(4538);
      END_STATE();
    case 4524:
      if (lookahead == 'p') ADVANCE(4539);
      END_STATE();
    case 4525:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4526:
      if (lookahead == 'E') ADVANCE(4540);
      END_STATE();
    case 4527:
      ACCEPT_TOKEN(anon_sym_TemperatureDifferentialEfficiency);
      END_STATE();
    case 4528:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 4529:
      if (lookahead == 'f') ADVANCE(4541);
      END_STATE();
    case 4530:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4531:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4542);
      if (lookahead == 'O') ADVANCE(4543);
      END_STATE();
    case 4532:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4533:
      if (lookahead == 't') ADVANCE(4544);
      END_STATE();
    case 4534:
      if (lookahead == 'n') ADVANCE(4545);
      END_STATE();
    case 4535:
      if (lookahead == 'u') ADVANCE(4546);
      END_STATE();
    case 4536:
      if (lookahead == 't') ADVANCE(4547);
      END_STATE();
    case 4537:
      if (lookahead == 'u') ADVANCE(4548);
      END_STATE();
    case 4538:
      if (lookahead == 't') ADVANCE(4549);
      END_STATE();
    case 4539:
      if (lookahead == 'u') ADVANCE(4550);
      END_STATE();
    case 4540:
      if (lookahead == 'f') ADVANCE(4551);
      END_STATE();
    case 4541:
      if (lookahead == 'i') ADVANCE(4552);
      END_STATE();
    case 4542:
      if (lookahead == 'n') ADVANCE(4553);
      END_STATE();
    case 4543:
      if (lookahead == 'u') ADVANCE(4554);
      END_STATE();
    case 4544:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4545:
      if (lookahead == 'p') ADVANCE(4555);
      END_STATE();
    case 4546:
      if (lookahead == 't') ADVANCE(4556);
      END_STATE();
    case 4547:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4548:
      if (lookahead == 't') ADVANCE(4557);
      END_STATE();
    case 4549:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4550:
      if (lookahead == 't') ADVANCE(4558);
      END_STATE();
    case 4551:
      if (lookahead == 'f') ADVANCE(4559);
      END_STATE();
    case 4552:
      if (lookahead == 'c') ADVANCE(4560);
      END_STATE();
    case 4553:
      if (lookahead == 'p') ADVANCE(4561);
      END_STATE();
    case 4554:
      if (lookahead == 't') ADVANCE(4562);
      END_STATE();
    case 4555:
      if (lookahead == 'u') ADVANCE(4563);
      END_STATE();
    case 4556:
      if (lookahead == 'p') ADVANCE(4564);
      END_STATE();
    case 4557:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4558:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4559:
      if (lookahead == 'i') ADVANCE(4565);
      END_STATE();
    case 4560:
      if (lookahead == 'i') ADVANCE(4566);
      END_STATE();
    case 4561:
      if (lookahead == 'u') ADVANCE(4567);
      END_STATE();
    case 4562:
      if (lookahead == 'p') ADVANCE(4568);
      END_STATE();
    case 4563:
      if (lookahead == 't') ADVANCE(4569);
      END_STATE();
    case 4564:
      if (lookahead == 'u') ADVANCE(4570);
      END_STATE();
    case 4565:
      if (lookahead == 'c') ADVANCE(4571);
      END_STATE();
    case 4566:
      if (lookahead == 'e') ADVANCE(4572);
      END_STATE();
    case 4567:
      if (lookahead == 't') ADVANCE(4573);
      END_STATE();
    case 4568:
      if (lookahead == 'u') ADVANCE(4574);
      END_STATE();
    case 4569:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4570:
      if (lookahead == 't') ADVANCE(4575);
      END_STATE();
    case 4571:
      if (lookahead == 'i') ADVANCE(4576);
      END_STATE();
    case 4572:
      if (lookahead == 'n') ADVANCE(4577);
      END_STATE();
    case 4573:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4574:
      if (lookahead == 't') ADVANCE(4578);
      END_STATE();
    case 4575:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4576:
      if (lookahead == 'e') ADVANCE(4579);
      END_STATE();
    case 4577:
      if (lookahead == 'c') ADVANCE(4580);
      END_STATE();
    case 4578:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 4579:
      if (lookahead == 'n') ADVANCE(4581);
      END_STATE();
    case 4580:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 4581:
      if (lookahead == 'c') ADVANCE(4582);
      END_STATE();
    case 4582:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_network_index] = ACTIONS(1),
    [sym_device] = ACTIONS(1),
    [anon_sym_nan] = ACTIONS(1),
    [anon_sym_pinf] = ACTIONS(1),
    [anon_sym_ninf] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_deg2rad] = ACTIONS(1),
    [anon_sym_rad2deg] = ACTIONS(1),
    [anon_sym_epsilon] = ACTIONS(1),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_RPAREN] = ACTIONS(1),
    [anon_sym_abs] = ACTIONS(1),
    [anon_sym_acos] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_asin] = ACTIONS(1),
    [anon_sym_atan] = ACTIONS(1),
    [anon_sym_atan2] = ACTIONS(1),
    [anon_sym_bap] = ACTIONS(1),
    [anon_sym_bapal] = ACTIONS(1),
    [anon_sym_bapz] = ACTIONS(1),
    [anon_sym_bapzal] = ACTIONS(1),
    [anon_sym_bdns] = ACTIONS(1),
    [anon_sym_bdnsal] = ACTIONS(1),
    [anon_sym_bdse] = ACTIONS(1),
    [anon_sym_bdseal] = ACTIONS(1),
    [anon_sym_beq] = ACTIONS(1),
    [anon_sym_beqal] = ACTIONS(1),
    [anon_sym_beqz] = ACTIONS(1),
    [anon_sym_beqzal] = ACTIONS(1),
    [anon_sym_bge] = ACTIONS(1),
    [anon_sym_bgeal] = ACTIONS(1),
    [anon_sym_bgez] = ACTIONS(1),
    [anon_sym_bgezal] = ACTIONS(1),
    [anon_sym_bgt] = ACTIONS(1),
    [anon_sym_bgtal] = ACTIONS(1),
    [anon_sym_bgtz] = ACTIONS(1),
    [anon_sym_bgtzal] = ACTIONS(1),
    [anon_sym_ble] = ACTIONS(1),
    [anon_sym_bleal] = ACTIONS(1),
    [anon_sym_blez] = ACTIONS(1),
    [anon_sym_blezal] = ACTIONS(1),
    [anon_sym_blt] = ACTIONS(1),
    [anon_sym_bltal] = ACTIONS(1),
    [anon_sym_bltz] = ACTIONS(1),
    [anon_sym_bltzal] = ACTIONS(1),
    [anon_sym_bna] = ACTIONS(1),
    [anon_sym_bnaal] = ACTIONS(1),
    [anon_sym_bnan] = ACTIONS(1),
    [anon_sym_bnaz] = ACTIONS(1),
    [anon_sym_bnazal] = ACTIONS(1),
    [anon_sym_bne] = ACTIONS(1),
    [anon_sym_bneal] = ACTIONS(1),
    [anon_sym_bnez] = ACTIONS(1),
    [anon_sym_bnezal] = ACTIONS(1),
    [anon_sym_brap] = ACTIONS(1),
    [anon_sym_brapz] = ACTIONS(1),
    [anon_sym_brdns] = ACTIONS(1),
    [anon_sym_brdse] = ACTIONS(1),
    [anon_sym_breq] = ACTIONS(1),
    [anon_sym_breqz] = ACTIONS(1),
    [anon_sym_brge] = ACTIONS(1),
    [anon_sym_brgez] = ACTIONS(1),
    [anon_sym_brgt] = ACTIONS(1),
    [anon_sym_brgtz] = ACTIONS(1),
    [anon_sym_brle] = ACTIONS(1),
    [anon_sym_brlez] = ACTIONS(1),
    [anon_sym_brlt] = ACTIONS(1),
    [anon_sym_brltz] = ACTIONS(1),
    [anon_sym_brna] = ACTIONS(1),
    [anon_sym_brnan] = ACTIONS(1),
    [anon_sym_brnaz] = ACTIONS(1),
    [anon_sym_brne] = ACTIONS(1),
    [anon_sym_brnez] = ACTIONS(1),
    [anon_sym_ceil] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_getd] = ACTIONS(1),
    [anon_sym_hcf] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_jal] = ACTIONS(1),
    [anon_sym_jr] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_lb] = ACTIONS(1),
    [anon_sym_lbn] = ACTIONS(1),
    [anon_sym_lbns] = ACTIONS(1),
    [anon_sym_lbs] = ACTIONS(1),
    [anon_sym_ld] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_lr] = ACTIONS(1),
    [anon_sym_ls] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_peek] = ACTIONS(1),
    [anon_sym_poke] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_putd] = ACTIONS(1),
    [anon_sym_rand] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_sap] = ACTIONS(1),
    [anon_sym_sapz] = ACTIONS(1),
    [anon_sym_sb] = ACTIONS(1),
    [anon_sym_sbn] = ACTIONS(1),
    [anon_sym_sbs] = ACTIONS(1),
    [anon_sym_sd] = ACTIONS(1),
    [anon_sym_sdns] = ACTIONS(1),
    [anon_sym_sdse] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_seqz] = ACTIONS(1),
    [anon_sym_sge] = ACTIONS(1),
    [anon_sym_sgez] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_sgtz] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_sla] = ACTIONS(1),
    [anon_sym_sle] = ACTIONS(1),
    [anon_sym_sleep] = ACTIONS(1),
    [anon_sym_slez] = ACTIONS(1),
    [anon_sym_sll] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_sltz] = ACTIONS(1),
    [anon_sym_sna] = ACTIONS(1),
    [anon_sym_snan] = ACTIONS(1),
    [anon_sym_snanz] = ACTIONS(1),
    [anon_sym_snaz] = ACTIONS(1),
    [anon_sym_sne] = ACTIONS(1),
    [anon_sym_snez] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_sra] = ACTIONS(1),
    [anon_sym_srl] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_tan] = ACTIONS(1),
    [anon_sym_trunc] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_Acceleration] = ACTIONS(1),
    [anon_sym_Activate] = ACTIONS(1),
    [anon_sym_AirRelease] = ACTIONS(1),
    [anon_sym_AlignmentError] = ACTIONS(1),
    [anon_sym_Apex] = ACTIONS(1),
    [anon_sym_AutoLand] = ACTIONS(1),
    [anon_sym_AutoShutOff] = ACTIONS(1),
    [anon_sym_Bpm] = ACTIONS(1),
    [anon_sym_BurnTimeRemaining] = ACTIONS(1),
    [anon_sym_CelestialHash] = ACTIONS(1),
    [anon_sym_CelestialParentHash] = ACTIONS(1),
    [anon_sym_Channel0] = ACTIONS(1),
    [anon_sym_Channel1] = ACTIONS(1),
    [anon_sym_Channel2] = ACTIONS(1),
    [anon_sym_Channel3] = ACTIONS(1),
    [anon_sym_Channel4] = ACTIONS(1),
    [anon_sym_Channel5] = ACTIONS(1),
    [anon_sym_Channel6] = ACTIONS(1),
    [anon_sym_Channel7] = ACTIONS(1),
    [anon_sym_Charge] = ACTIONS(1),
    [anon_sym_Chart] = ACTIONS(1),
    [anon_sym_ChartedNavPoints] = ACTIONS(1),
    [anon_sym_ClearMemory] = ACTIONS(1),
    [anon_sym_CollectableGoods] = ACTIONS(1),
    [anon_sym_Color] = ACTIONS(1),
    [anon_sym_Combustion] = ACTIONS(1),
    [anon_sym_CombustionInput] = ACTIONS(1),
    [anon_sym_CombustionInput2] = ACTIONS(1),
    [anon_sym_CombustionLimiter] = ACTIONS(1),
    [anon_sym_CombustionOutput] = ACTIONS(1),
    [anon_sym_CombustionOutput2] = ACTIONS(1),
    [anon_sym_CompletionRatio] = ACTIONS(1),
    [anon_sym_ContactTypeId] = ACTIONS(1),
    [anon_sym_CurrentCode] = ACTIONS(1),
    [anon_sym_CurrentResearchPodType] = ACTIONS(1),
    [anon_sym_Density] = ACTIONS(1),
    [anon_sym_DestinationCode] = ACTIONS(1),
    [anon_sym_Discover] = ACTIONS(1),
    [anon_sym_DistanceAu] = ACTIONS(1),
    [anon_sym_DistanceKm] = ACTIONS(1),
    [anon_sym_DrillCondition] = ACTIONS(1),
    [anon_sym_DryMass] = ACTIONS(1),
    [anon_sym_Eccentricity] = ACTIONS(1),
    [anon_sym_ElevatorLevel] = ACTIONS(1),
    [anon_sym_ElevatorSpeed] = ACTIONS(1),
    [anon_sym_EntityState] = ACTIONS(1),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_ExhaustVelocity] = ACTIONS(1),
    [anon_sym_ExportCount] = ACTIONS(1),
    [anon_sym_ExportQuantity] = ACTIONS(1),
    [anon_sym_ExportSlotHash] = ACTIONS(1),
    [anon_sym_ExportSlotOccupant] = ACTIONS(1),
    [anon_sym_Filtration] = ACTIONS(1),
    [anon_sym_FlightControlRule] = ACTIONS(1),
    [anon_sym_Flush] = ACTIONS(1),
    [anon_sym_ForceWrite] = ACTIONS(1),
    [anon_sym_ForwardX] = ACTIONS(1),
    [anon_sym_ForwardY] = ACTIONS(1),
    [anon_sym_ForwardZ] = ACTIONS(1),
    [anon_sym_Fuel] = ACTIONS(1),
    [anon_sym_Harvest] = ACTIONS(1),
    [anon_sym_Horizontal] = ACTIONS(1),
    [anon_sym_HorizontalRatio] = ACTIONS(1),
    [anon_sym_Idle] = ACTIONS(1),
    [anon_sym_ImportCount] = ACTIONS(1),
    [anon_sym_ImportQuantity] = ACTIONS(1),
    [anon_sym_ImportSlotHash] = ACTIONS(1),
    [anon_sym_ImportSlotOccupant] = ACTIONS(1),
    [anon_sym_Inclination] = ACTIONS(1),
    [anon_sym_Index] = ACTIONS(1),
    [anon_sym_InterrogationProgress] = ACTIONS(1),
    [anon_sym_LineNumber] = ACTIONS(1),
    [anon_sym_Lock] = ACTIONS(1),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(1),
    [anon_sym_Mass] = ACTIONS(1),
    [anon_sym_Maximum] = ACTIONS(1),
    [anon_sym_MineablesInQueue] = ACTIONS(1),
    [anon_sym_MineablesInVicinity] = ACTIONS(1),
    [anon_sym_MinedQuantity] = ACTIONS(1),
    [anon_sym_MinimumWattsToContact] = ACTIONS(1),
    [anon_sym_Mode] = ACTIONS(1),
    [anon_sym_NavPoints] = ACTIONS(1),
    [anon_sym_NextWeatherEventTime] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_Open] = ACTIONS(1),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(1),
    [anon_sym_OrbitPeriod] = ACTIONS(1),
    [anon_sym_Orientation] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_PassedMoles] = ACTIONS(1),
    [anon_sym_Plant] = ACTIONS(1),
    [anon_sym_PlantEfficiency1] = ACTIONS(1),
    [anon_sym_PlantEfficiency2] = ACTIONS(1),
    [anon_sym_PlantEfficiency3] = ACTIONS(1),
    [anon_sym_PlantEfficiency4] = ACTIONS(1),
    [anon_sym_PlantGrowth1] = ACTIONS(1),
    [anon_sym_PlantGrowth2] = ACTIONS(1),
    [anon_sym_PlantGrowth3] = ACTIONS(1),
    [anon_sym_PlantGrowth4] = ACTIONS(1),
    [anon_sym_PlantHash1] = ACTIONS(1),
    [anon_sym_PlantHash2] = ACTIONS(1),
    [anon_sym_PlantHash3] = ACTIONS(1),
    [anon_sym_PlantHash4] = ACTIONS(1),
    [anon_sym_PlantHealth1] = ACTIONS(1),
    [anon_sym_PlantHealth2] = ACTIONS(1),
    [anon_sym_PlantHealth3] = ACTIONS(1),
    [anon_sym_PlantHealth4] = ACTIONS(1),
    [anon_sym_PositionX] = ACTIONS(1),
    [anon_sym_PositionY] = ACTIONS(1),
    [anon_sym_PositionZ] = ACTIONS(1),
    [anon_sym_Power] = ACTIONS(1),
    [anon_sym_PowerActual] = ACTIONS(1),
    [anon_sym_PowerGeneration] = ACTIONS(1),
    [anon_sym_PowerPotential] = ACTIONS(1),
    [anon_sym_PowerRequired] = ACTIONS(1),
    [anon_sym_PrefabHash] = ACTIONS(1),
    [anon_sym_Pressure] = ACTIONS(1),
    [anon_sym_PressureEfficiency] = ACTIONS(1),
    [anon_sym_PressureExternal] = ACTIONS(1),
    [anon_sym_PressureInput] = ACTIONS(1),
    [anon_sym_PressureInput2] = ACTIONS(1),
    [anon_sym_PressureInternal] = ACTIONS(1),
    [anon_sym_PressureOutput] = ACTIONS(1),
    [anon_sym_PressureOutput2] = ACTIONS(1),
    [anon_sym_PressureSetting] = ACTIONS(1),
    [anon_sym_Progress] = ACTIONS(1),
    [anon_sym_Quantity] = ACTIONS(1),
    [anon_sym_Ratio] = ACTIONS(1),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(1),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(1),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(1),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(1),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(1),
    [anon_sym_RatioHydrogen] = ACTIONS(1),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(1),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(1),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(1),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(1),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(1),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(1),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(1),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(1),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(1),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(1),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(1),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(1),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(1),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(1),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(1),
    [anon_sym_RatioNitrogen] = ACTIONS(1),
    [anon_sym_RatioNitrogenInput] = ACTIONS(1),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(1),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(1),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(1),
    [anon_sym_RatioNitrousOxide] = ACTIONS(1),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(1),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(1),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(1),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(1),
    [anon_sym_RatioOxygen] = ACTIONS(1),
    [anon_sym_RatioOxygenInput] = ACTIONS(1),
    [anon_sym_RatioOxygenInput2] = ACTIONS(1),
    [anon_sym_RatioOxygenOutput] = ACTIONS(1),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(1),
    [anon_sym_RatioPollutant] = ACTIONS(1),
    [anon_sym_RatioPollutantInput] = ACTIONS(1),
    [anon_sym_RatioPollutantInput2] = ACTIONS(1),
    [anon_sym_RatioPollutantOutput] = ACTIONS(1),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(1),
    [anon_sym_RatioPollutedWater] = ACTIONS(1),
    [anon_sym_RatioSteam] = ACTIONS(1),
    [anon_sym_RatioSteamInput] = ACTIONS(1),
    [anon_sym_RatioSteamInput2] = ACTIONS(1),
    [anon_sym_RatioSteamOutput] = ACTIONS(1),
    [anon_sym_RatioSteamOutput2] = ACTIONS(1),
    [anon_sym_RatioVolatiles] = ACTIONS(1),
    [anon_sym_RatioVolatilesInput] = ACTIONS(1),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(1),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(1),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(1),
    [anon_sym_RatioWater] = ACTIONS(1),
    [anon_sym_RatioWaterInput] = ACTIONS(1),
    [anon_sym_RatioWaterInput2] = ACTIONS(1),
    [anon_sym_RatioWaterOutput] = ACTIONS(1),
    [anon_sym_RatioWaterOutput2] = ACTIONS(1),
    [anon_sym_ReEntryAltitude] = ACTIONS(1),
    [anon_sym_Reagents] = ACTIONS(1),
    [anon_sym_RecipeHash] = ACTIONS(1),
    [anon_sym_ReferenceId] = ACTIONS(1),
    [anon_sym_RequestHash] = ACTIONS(1),
    [anon_sym_RequiredPower] = ACTIONS(1),
    [anon_sym_ReturnFuelCost] = ACTIONS(1),
    [anon_sym_Richness] = ACTIONS(1),
    [anon_sym_Rpm] = ACTIONS(1),
    [anon_sym_SemiMajorAxis] = ACTIONS(1),
    [anon_sym_Setting] = ACTIONS(1),
    [anon_sym_SettingInput] = ACTIONS(1),
    [anon_sym_SettingOutput] = ACTIONS(1),
    [anon_sym_SignalID] = ACTIONS(1),
    [anon_sym_SignalStrength] = ACTIONS(1),
    [anon_sym_Sites] = ACTIONS(1),
    [anon_sym_Size] = ACTIONS(1),
    [anon_sym_SizeX] = ACTIONS(1),
    [anon_sym_SizeY] = ACTIONS(1),
    [anon_sym_SizeZ] = ACTIONS(1),
    [anon_sym_SolarAngle] = ACTIONS(1),
    [anon_sym_SolarIrradiance] = ACTIONS(1),
    [anon_sym_SoundAlert] = ACTIONS(1),
    [anon_sym_Stress] = ACTIONS(1),
    [anon_sym_Survey] = ACTIONS(1),
    [anon_sym_TargetPadIndex] = ACTIONS(1),
    [anon_sym_TargetX] = ACTIONS(1),
    [anon_sym_TargetY] = ACTIONS(1),
    [anon_sym_TargetZ] = ACTIONS(1),
    [anon_sym_Temperature] = ACTIONS(1),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(1),
    [anon_sym_TemperatureExternal] = ACTIONS(1),
    [anon_sym_TemperatureInput] = ACTIONS(1),
    [anon_sym_TemperatureInput2] = ACTIONS(1),
    [anon_sym_TemperatureOutput] = ACTIONS(1),
    [anon_sym_TemperatureOutput2] = ACTIONS(1),
    [anon_sym_TemperatureSetting] = ACTIONS(1),
    [anon_sym_Throttle] = ACTIONS(1),
    [anon_sym_Thrust] = ACTIONS(1),
    [anon_sym_ThrustToWeight] = ACTIONS(1),
    [anon_sym_Time] = ACTIONS(1),
    [anon_sym_TimeToDestination] = ACTIONS(1),
    [anon_sym_TotalMoles] = ACTIONS(1),
    [anon_sym_TotalMolesInput] = ACTIONS(1),
    [anon_sym_TotalMolesInput2] = ACTIONS(1),
    [anon_sym_TotalMolesOutput] = ACTIONS(1),
    [anon_sym_TotalMolesOutput2] = ACTIONS(1),
    [anon_sym_TotalQuantity] = ACTIONS(1),
    [anon_sym_TrueAnomaly] = ACTIONS(1),
    [anon_sym_VelocityMagnitude] = ACTIONS(1),
    [anon_sym_VelocityRelativeX] = ACTIONS(1),
    [anon_sym_VelocityRelativeY] = ACTIONS(1),
    [anon_sym_VelocityRelativeZ] = ACTIONS(1),
    [anon_sym_VelocityX] = ACTIONS(1),
    [anon_sym_VelocityY] = ACTIONS(1),
    [anon_sym_VelocityZ] = ACTIONS(1),
    [anon_sym_Vertical] = ACTIONS(1),
    [anon_sym_VerticalRatio] = ACTIONS(1),
    [anon_sym_Volume] = ACTIONS(1),
    [anon_sym_VolumeOfLiquid] = ACTIONS(1),
    [anon_sym_WattsReachingContact] = ACTIONS(1),
    [anon_sym_Weight] = ACTIONS(1),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(1),
    [anon_sym_ChargeRatio] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_Damage] = ACTIONS(1),
    [anon_sym_Efficiency] = ACTIONS(1),
    [anon_sym_FilterType] = ACTIONS(1),
    [anon_sym_Growth] = ACTIONS(1),
    [anon_sym_Health] = ACTIONS(1),
    [anon_sym_Mature] = ACTIONS(1),
    [anon_sym_MaxQuantity] = ACTIONS(1),
    [anon_sym_OccupantHash] = ACTIONS(1),
    [anon_sym_Occupied] = ACTIONS(1),
    [anon_sym_PressureAir] = ACTIONS(1),
    [anon_sym_PressureWaste] = ACTIONS(1),
    [anon_sym_Seeding] = ACTIONS(1),
    [anon_sym_SortingClass] = ACTIONS(1),
    [anon_sym_Average] = ACTIONS(1),
    [anon_sym_Minimum] = ACTIONS(1),
    [anon_sym_Sum] = ACTIONS(1),
    [anon_sym_Contents] = ACTIONS(1),
    [anon_sym_Recipe] = ACTIONS(1),
    [anon_sym_Required] = ACTIONS(1),
    [anon_sym_TotalContents] = ACTIONS(1),
    [sym_enum] = ACTIONS(1),
    [sym_deprecated] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_line] = STATE(28),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(25),
    [sym_comment] = STATE(31),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_atan2] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_get] = ACTIONS(15),
    [anon_sym_getd] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_ld] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_poke] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_put] = ACTIONS(15),
    [anon_sym_putd] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sd] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
  },
  [2] = {
    [sym_operand] = STATE(19),
    [sym_device_spec] = STATE(14),
    [sym_constant] = STATE(11),
    [sym_hash_preproc] = STATE(11),
    [sym_number] = STATE(14),
    [sym_logicable] = STATE(14),
    [sym_logictype] = STATE(18),
    [sym_logicslottype] = STATE(18),
    [sym_batchmode] = STATE(18),
    [sym_reagentmode] = STATE(18),
    [aux_sym_instruction_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [anon_sym_CR] = ACTIONS(23),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(21),
    [sym_register] = ACTIONS(25),
    [sym_device] = ACTIONS(27),
    [anon_sym_nan] = ACTIONS(29),
    [anon_sym_pinf] = ACTIONS(29),
    [anon_sym_ninf] = ACTIONS(29),
    [anon_sym_pi] = ACTIONS(29),
    [anon_sym_deg2rad] = ACTIONS(29),
    [anon_sym_rad2deg] = ACTIONS(29),
    [anon_sym_epsilon] = ACTIONS(29),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [anon_sym_Acceleration] = ACTIONS(35),
    [anon_sym_Activate] = ACTIONS(35),
    [anon_sym_AirRelease] = ACTIONS(35),
    [anon_sym_AlignmentError] = ACTIONS(35),
    [anon_sym_Apex] = ACTIONS(35),
    [anon_sym_AutoLand] = ACTIONS(35),
    [anon_sym_AutoShutOff] = ACTIONS(35),
    [anon_sym_Bpm] = ACTIONS(35),
    [anon_sym_BurnTimeRemaining] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel0] = ACTIONS(35),
    [anon_sym_Channel1] = ACTIONS(35),
    [anon_sym_Channel2] = ACTIONS(35),
    [anon_sym_Channel3] = ACTIONS(35),
    [anon_sym_Channel4] = ACTIONS(35),
    [anon_sym_Channel5] = ACTIONS(35),
    [anon_sym_Channel6] = ACTIONS(35),
    [anon_sym_Channel7] = ACTIONS(35),
    [anon_sym_Charge] = ACTIONS(37),
    [anon_sym_Chart] = ACTIONS(35),
    [anon_sym_ChartedNavPoints] = ACTIONS(35),
    [anon_sym_ClearMemory] = ACTIONS(35),
    [anon_sym_CollectableGoods] = ACTIONS(35),
    [anon_sym_Color] = ACTIONS(35),
    [anon_sym_Combustion] = ACTIONS(35),
    [anon_sym_CombustionInput] = ACTIONS(35),
    [anon_sym_CombustionInput2] = ACTIONS(35),
    [anon_sym_CombustionLimiter] = ACTIONS(35),
    [anon_sym_CombustionOutput] = ACTIONS(35),
    [anon_sym_CombustionOutput2] = ACTIONS(35),
    [anon_sym_CompletionRatio] = ACTIONS(35),
    [anon_sym_ContactTypeId] = ACTIONS(35),
    [anon_sym_CurrentCode] = ACTIONS(35),
    [anon_sym_CurrentResearchPodType] = ACTIONS(35),
    [anon_sym_Density] = ACTIONS(35),
    [anon_sym_DestinationCode] = ACTIONS(35),
    [anon_sym_Discover] = ACTIONS(35),
    [anon_sym_DistanceAu] = ACTIONS(35),
    [anon_sym_DistanceKm] = ACTIONS(35),
    [anon_sym_DrillCondition] = ACTIONS(35),
    [anon_sym_DryMass] = ACTIONS(35),
    [anon_sym_Eccentricity] = ACTIONS(35),
    [anon_sym_ElevatorLevel] = ACTIONS(35),
    [anon_sym_ElevatorSpeed] = ACTIONS(35),
    [anon_sym_EntityState] = ACTIONS(35),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(35),
    [anon_sym_Error] = ACTIONS(35),
    [anon_sym_ExhaustVelocity] = ACTIONS(35),
    [anon_sym_ExportCount] = ACTIONS(35),
    [anon_sym_ExportQuantity] = ACTIONS(35),
    [anon_sym_ExportSlotHash] = ACTIONS(35),
    [anon_sym_ExportSlotOccupant] = ACTIONS(35),
    [anon_sym_Filtration] = ACTIONS(35),
    [anon_sym_FlightControlRule] = ACTIONS(35),
    [anon_sym_Flush] = ACTIONS(35),
    [anon_sym_ForceWrite] = ACTIONS(35),
    [anon_sym_ForwardX] = ACTIONS(35),
    [anon_sym_ForwardY] = ACTIONS(35),
    [anon_sym_ForwardZ] = ACTIONS(35),
    [anon_sym_Fuel] = ACTIONS(35),
    [anon_sym_Harvest] = ACTIONS(35),
    [anon_sym_Horizontal] = ACTIONS(35),
    [anon_sym_HorizontalRatio] = ACTIONS(35),
    [anon_sym_Idle] = ACTIONS(35),
    [anon_sym_ImportCount] = ACTIONS(35),
    [anon_sym_ImportQuantity] = ACTIONS(35),
    [anon_sym_ImportSlotHash] = ACTIONS(35),
    [anon_sym_ImportSlotOccupant] = ACTIONS(35),
    [anon_sym_Inclination] = ACTIONS(35),
    [anon_sym_Index] = ACTIONS(35),
    [anon_sym_InterrogationProgress] = ACTIONS(35),
    [anon_sym_LineNumber] = ACTIONS(37),
    [anon_sym_Lock] = ACTIONS(37),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(35),
    [anon_sym_Mass] = ACTIONS(35),
    [anon_sym_Maximum] = ACTIONS(39),
    [anon_sym_MineablesInQueue] = ACTIONS(35),
    [anon_sym_MineablesInVicinity] = ACTIONS(35),
    [anon_sym_MinedQuantity] = ACTIONS(35),
    [anon_sym_MinimumWattsToContact] = ACTIONS(35),
    [anon_sym_Mode] = ACTIONS(35),
    [anon_sym_NavPoints] = ACTIONS(35),
    [anon_sym_NextWeatherEventTime] = ACTIONS(35),
    [anon_sym_None] = ACTIONS(37),
    [anon_sym_On] = ACTIONS(37),
    [anon_sym_Open] = ACTIONS(37),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(35),
    [anon_sym_OrbitPeriod] = ACTIONS(35),
    [anon_sym_Orientation] = ACTIONS(35),
    [anon_sym_Output] = ACTIONS(35),
    [anon_sym_PassedMoles] = ACTIONS(35),
    [anon_sym_Plant] = ACTIONS(35),
    [anon_sym_PlantEfficiency1] = ACTIONS(35),
    [anon_sym_PlantEfficiency2] = ACTIONS(35),
    [anon_sym_PlantEfficiency3] = ACTIONS(35),
    [anon_sym_PlantEfficiency4] = ACTIONS(35),
    [anon_sym_PlantGrowth1] = ACTIONS(35),
    [anon_sym_PlantGrowth2] = ACTIONS(35),
    [anon_sym_PlantGrowth3] = ACTIONS(35),
    [anon_sym_PlantGrowth4] = ACTIONS(35),
    [anon_sym_PlantHash1] = ACTIONS(35),
    [anon_sym_PlantHash2] = ACTIONS(35),
    [anon_sym_PlantHash3] = ACTIONS(35),
    [anon_sym_PlantHash4] = ACTIONS(35),
    [anon_sym_PlantHealth1] = ACTIONS(35),
    [anon_sym_PlantHealth2] = ACTIONS(35),
    [anon_sym_PlantHealth3] = ACTIONS(35),
    [anon_sym_PlantHealth4] = ACTIONS(35),
    [anon_sym_PositionX] = ACTIONS(35),
    [anon_sym_PositionY] = ACTIONS(35),
    [anon_sym_PositionZ] = ACTIONS(35),
    [anon_sym_Power] = ACTIONS(35),
    [anon_sym_PowerActual] = ACTIONS(35),
    [anon_sym_PowerGeneration] = ACTIONS(35),
    [anon_sym_PowerPotential] = ACTIONS(35),
    [anon_sym_PowerRequired] = ACTIONS(35),
    [anon_sym_PrefabHash] = ACTIONS(37),
    [anon_sym_Pressure] = ACTIONS(37),
    [anon_sym_PressureEfficiency] = ACTIONS(35),
    [anon_sym_PressureExternal] = ACTIONS(35),
    [anon_sym_PressureInput] = ACTIONS(35),
    [anon_sym_PressureInput2] = ACTIONS(35),
    [anon_sym_PressureInternal] = ACTIONS(35),
    [anon_sym_PressureOutput] = ACTIONS(35),
    [anon_sym_PressureOutput2] = ACTIONS(35),
    [anon_sym_PressureSetting] = ACTIONS(35),
    [anon_sym_Progress] = ACTIONS(35),
    [anon_sym_Quantity] = ACTIONS(37),
    [anon_sym_Ratio] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrogen] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioOxygen] = ACTIONS(35),
    [anon_sym_RatioOxygenInput] = ACTIONS(35),
    [anon_sym_RatioOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutant] = ACTIONS(35),
    [anon_sym_RatioPollutantInput] = ACTIONS(35),
    [anon_sym_RatioPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutedWater] = ACTIONS(35),
    [anon_sym_RatioSteam] = ACTIONS(35),
    [anon_sym_RatioSteamInput] = ACTIONS(35),
    [anon_sym_RatioSteamInput2] = ACTIONS(35),
    [anon_sym_RatioSteamOutput] = ACTIONS(35),
    [anon_sym_RatioSteamOutput2] = ACTIONS(35),
    [anon_sym_RatioVolatiles] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioWater] = ACTIONS(35),
    [anon_sym_RatioWaterInput] = ACTIONS(35),
    [anon_sym_RatioWaterInput2] = ACTIONS(35),
    [anon_sym_RatioWaterOutput] = ACTIONS(35),
    [anon_sym_RatioWaterOutput2] = ACTIONS(35),
    [anon_sym_ReEntryAltitude] = ACTIONS(35),
    [anon_sym_Reagents] = ACTIONS(35),
    [anon_sym_RecipeHash] = ACTIONS(35),
    [anon_sym_ReferenceId] = ACTIONS(37),
    [anon_sym_RequestHash] = ACTIONS(35),
    [anon_sym_RequiredPower] = ACTIONS(35),
    [anon_sym_ReturnFuelCost] = ACTIONS(35),
    [anon_sym_Richness] = ACTIONS(35),
    [anon_sym_Rpm] = ACTIONS(35),
    [anon_sym_SemiMajorAxis] = ACTIONS(35),
    [anon_sym_Setting] = ACTIONS(35),
    [anon_sym_SettingInput] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarIrradiance] = ACTIONS(35),
    [anon_sym_SoundAlert] = ACTIONS(35),
    [anon_sym_Stress] = ACTIONS(35),
    [anon_sym_Survey] = ACTIONS(35),
    [anon_sym_TargetPadIndex] = ACTIONS(35),
    [anon_sym_TargetX] = ACTIONS(35),
    [anon_sym_TargetY] = ACTIONS(35),
    [anon_sym_TargetZ] = ACTIONS(35),
    [anon_sym_Temperature] = ACTIONS(37),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(35),
    [anon_sym_TemperatureExternal] = ACTIONS(35),
    [anon_sym_TemperatureInput] = ACTIONS(35),
    [anon_sym_TemperatureInput2] = ACTIONS(35),
    [anon_sym_TemperatureOutput] = ACTIONS(35),
    [anon_sym_TemperatureOutput2] = ACTIONS(35),
    [anon_sym_TemperatureSetting] = ACTIONS(35),
    [anon_sym_Throttle] = ACTIONS(35),
    [anon_sym_Thrust] = ACTIONS(35),
    [anon_sym_ThrustToWeight] = ACTIONS(35),
    [anon_sym_Time] = ACTIONS(35),
    [anon_sym_TimeToDestination] = ACTIONS(35),
    [anon_sym_TotalMoles] = ACTIONS(35),
    [anon_sym_TotalMolesInput] = ACTIONS(35),
    [anon_sym_TotalMolesInput2] = ACTIONS(35),
    [anon_sym_TotalMolesOutput] = ACTIONS(35),
    [anon_sym_TotalMolesOutput2] = ACTIONS(35),
    [anon_sym_TotalQuantity] = ACTIONS(35),
    [anon_sym_TrueAnomaly] = ACTIONS(35),
    [anon_sym_VelocityMagnitude] = ACTIONS(35),
    [anon_sym_VelocityRelativeX] = ACTIONS(35),
    [anon_sym_VelocityRelativeY] = ACTIONS(35),
    [anon_sym_VelocityRelativeZ] = ACTIONS(35),
    [anon_sym_VelocityX] = ACTIONS(35),
    [anon_sym_VelocityY] = ACTIONS(35),
    [anon_sym_VelocityZ] = ACTIONS(35),
    [anon_sym_Vertical] = ACTIONS(35),
    [anon_sym_VerticalRatio] = ACTIONS(35),
    [anon_sym_Volume] = ACTIONS(37),
    [anon_sym_VolumeOfLiquid] = ACTIONS(35),
    [anon_sym_WattsReachingContact] = ACTIONS(35),
    [anon_sym_Weight] = ACTIONS(35),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(35),
    [anon_sym_ChargeRatio] = ACTIONS(41),
    [anon_sym_Class] = ACTIONS(41),
    [anon_sym_Damage] = ACTIONS(41),
    [anon_sym_Efficiency] = ACTIONS(41),
    [anon_sym_FilterType] = ACTIONS(41),
    [anon_sym_Growth] = ACTIONS(41),
    [anon_sym_Health] = ACTIONS(41),
    [anon_sym_Mature] = ACTIONS(41),
    [anon_sym_MaxQuantity] = ACTIONS(41),
    [anon_sym_OccupantHash] = ACTIONS(41),
    [anon_sym_Occupied] = ACTIONS(41),
    [anon_sym_PressureAir] = ACTIONS(41),
    [anon_sym_PressureWaste] = ACTIONS(41),
    [anon_sym_Seeding] = ACTIONS(41),
    [anon_sym_SortingClass] = ACTIONS(41),
    [anon_sym_Average] = ACTIONS(43),
    [anon_sym_Minimum] = ACTIONS(43),
    [anon_sym_Sum] = ACTIONS(43),
    [anon_sym_Contents] = ACTIONS(45),
    [anon_sym_Recipe] = ACTIONS(45),
    [anon_sym_Required] = ACTIONS(45),
    [anon_sym_TotalContents] = ACTIONS(45),
    [sym_enum] = ACTIONS(33),
    [sym_deprecated] = ACTIONS(47),
  },
  [3] = {
    [sym_operand] = STATE(19),
    [sym_device_spec] = STATE(14),
    [sym_constant] = STATE(11),
    [sym_hash_preproc] = STATE(11),
    [sym_number] = STATE(14),
    [sym_logicable] = STATE(14),
    [sym_logictype] = STATE(18),
    [sym_logicslottype] = STATE(18),
    [sym_batchmode] = STATE(18),
    [sym_reagentmode] = STATE(18),
    [aux_sym_instruction_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(51),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(49),
    [sym_register] = ACTIONS(25),
    [sym_device] = ACTIONS(27),
    [anon_sym_nan] = ACTIONS(29),
    [anon_sym_pinf] = ACTIONS(29),
    [anon_sym_ninf] = ACTIONS(29),
    [anon_sym_pi] = ACTIONS(29),
    [anon_sym_deg2rad] = ACTIONS(29),
    [anon_sym_rad2deg] = ACTIONS(29),
    [anon_sym_epsilon] = ACTIONS(29),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [anon_sym_Acceleration] = ACTIONS(35),
    [anon_sym_Activate] = ACTIONS(35),
    [anon_sym_AirRelease] = ACTIONS(35),
    [anon_sym_AlignmentError] = ACTIONS(35),
    [anon_sym_Apex] = ACTIONS(35),
    [anon_sym_AutoLand] = ACTIONS(35),
    [anon_sym_AutoShutOff] = ACTIONS(35),
    [anon_sym_Bpm] = ACTIONS(35),
    [anon_sym_BurnTimeRemaining] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel0] = ACTIONS(35),
    [anon_sym_Channel1] = ACTIONS(35),
    [anon_sym_Channel2] = ACTIONS(35),
    [anon_sym_Channel3] = ACTIONS(35),
    [anon_sym_Channel4] = ACTIONS(35),
    [anon_sym_Channel5] = ACTIONS(35),
    [anon_sym_Channel6] = ACTIONS(35),
    [anon_sym_Channel7] = ACTIONS(35),
    [anon_sym_Charge] = ACTIONS(37),
    [anon_sym_Chart] = ACTIONS(35),
    [anon_sym_ChartedNavPoints] = ACTIONS(35),
    [anon_sym_ClearMemory] = ACTIONS(35),
    [anon_sym_CollectableGoods] = ACTIONS(35),
    [anon_sym_Color] = ACTIONS(35),
    [anon_sym_Combustion] = ACTIONS(35),
    [anon_sym_CombustionInput] = ACTIONS(35),
    [anon_sym_CombustionInput2] = ACTIONS(35),
    [anon_sym_CombustionLimiter] = ACTIONS(35),
    [anon_sym_CombustionOutput] = ACTIONS(35),
    [anon_sym_CombustionOutput2] = ACTIONS(35),
    [anon_sym_CompletionRatio] = ACTIONS(35),
    [anon_sym_ContactTypeId] = ACTIONS(35),
    [anon_sym_CurrentCode] = ACTIONS(35),
    [anon_sym_CurrentResearchPodType] = ACTIONS(35),
    [anon_sym_Density] = ACTIONS(35),
    [anon_sym_DestinationCode] = ACTIONS(35),
    [anon_sym_Discover] = ACTIONS(35),
    [anon_sym_DistanceAu] = ACTIONS(35),
    [anon_sym_DistanceKm] = ACTIONS(35),
    [anon_sym_DrillCondition] = ACTIONS(35),
    [anon_sym_DryMass] = ACTIONS(35),
    [anon_sym_Eccentricity] = ACTIONS(35),
    [anon_sym_ElevatorLevel] = ACTIONS(35),
    [anon_sym_ElevatorSpeed] = ACTIONS(35),
    [anon_sym_EntityState] = ACTIONS(35),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(35),
    [anon_sym_Error] = ACTIONS(35),
    [anon_sym_ExhaustVelocity] = ACTIONS(35),
    [anon_sym_ExportCount] = ACTIONS(35),
    [anon_sym_ExportQuantity] = ACTIONS(35),
    [anon_sym_ExportSlotHash] = ACTIONS(35),
    [anon_sym_ExportSlotOccupant] = ACTIONS(35),
    [anon_sym_Filtration] = ACTIONS(35),
    [anon_sym_FlightControlRule] = ACTIONS(35),
    [anon_sym_Flush] = ACTIONS(35),
    [anon_sym_ForceWrite] = ACTIONS(35),
    [anon_sym_ForwardX] = ACTIONS(35),
    [anon_sym_ForwardY] = ACTIONS(35),
    [anon_sym_ForwardZ] = ACTIONS(35),
    [anon_sym_Fuel] = ACTIONS(35),
    [anon_sym_Harvest] = ACTIONS(35),
    [anon_sym_Horizontal] = ACTIONS(35),
    [anon_sym_HorizontalRatio] = ACTIONS(35),
    [anon_sym_Idle] = ACTIONS(35),
    [anon_sym_ImportCount] = ACTIONS(35),
    [anon_sym_ImportQuantity] = ACTIONS(35),
    [anon_sym_ImportSlotHash] = ACTIONS(35),
    [anon_sym_ImportSlotOccupant] = ACTIONS(35),
    [anon_sym_Inclination] = ACTIONS(35),
    [anon_sym_Index] = ACTIONS(35),
    [anon_sym_InterrogationProgress] = ACTIONS(35),
    [anon_sym_LineNumber] = ACTIONS(37),
    [anon_sym_Lock] = ACTIONS(37),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(35),
    [anon_sym_Mass] = ACTIONS(35),
    [anon_sym_Maximum] = ACTIONS(39),
    [anon_sym_MineablesInQueue] = ACTIONS(35),
    [anon_sym_MineablesInVicinity] = ACTIONS(35),
    [anon_sym_MinedQuantity] = ACTIONS(35),
    [anon_sym_MinimumWattsToContact] = ACTIONS(35),
    [anon_sym_Mode] = ACTIONS(35),
    [anon_sym_NavPoints] = ACTIONS(35),
    [anon_sym_NextWeatherEventTime] = ACTIONS(35),
    [anon_sym_None] = ACTIONS(37),
    [anon_sym_On] = ACTIONS(37),
    [anon_sym_Open] = ACTIONS(37),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(35),
    [anon_sym_OrbitPeriod] = ACTIONS(35),
    [anon_sym_Orientation] = ACTIONS(35),
    [anon_sym_Output] = ACTIONS(35),
    [anon_sym_PassedMoles] = ACTIONS(35),
    [anon_sym_Plant] = ACTIONS(35),
    [anon_sym_PlantEfficiency1] = ACTIONS(35),
    [anon_sym_PlantEfficiency2] = ACTIONS(35),
    [anon_sym_PlantEfficiency3] = ACTIONS(35),
    [anon_sym_PlantEfficiency4] = ACTIONS(35),
    [anon_sym_PlantGrowth1] = ACTIONS(35),
    [anon_sym_PlantGrowth2] = ACTIONS(35),
    [anon_sym_PlantGrowth3] = ACTIONS(35),
    [anon_sym_PlantGrowth4] = ACTIONS(35),
    [anon_sym_PlantHash1] = ACTIONS(35),
    [anon_sym_PlantHash2] = ACTIONS(35),
    [anon_sym_PlantHash3] = ACTIONS(35),
    [anon_sym_PlantHash4] = ACTIONS(35),
    [anon_sym_PlantHealth1] = ACTIONS(35),
    [anon_sym_PlantHealth2] = ACTIONS(35),
    [anon_sym_PlantHealth3] = ACTIONS(35),
    [anon_sym_PlantHealth4] = ACTIONS(35),
    [anon_sym_PositionX] = ACTIONS(35),
    [anon_sym_PositionY] = ACTIONS(35),
    [anon_sym_PositionZ] = ACTIONS(35),
    [anon_sym_Power] = ACTIONS(35),
    [anon_sym_PowerActual] = ACTIONS(35),
    [anon_sym_PowerGeneration] = ACTIONS(35),
    [anon_sym_PowerPotential] = ACTIONS(35),
    [anon_sym_PowerRequired] = ACTIONS(35),
    [anon_sym_PrefabHash] = ACTIONS(37),
    [anon_sym_Pressure] = ACTIONS(37),
    [anon_sym_PressureEfficiency] = ACTIONS(35),
    [anon_sym_PressureExternal] = ACTIONS(35),
    [anon_sym_PressureInput] = ACTIONS(35),
    [anon_sym_PressureInput2] = ACTIONS(35),
    [anon_sym_PressureInternal] = ACTIONS(35),
    [anon_sym_PressureOutput] = ACTIONS(35),
    [anon_sym_PressureOutput2] = ACTIONS(35),
    [anon_sym_PressureSetting] = ACTIONS(35),
    [anon_sym_Progress] = ACTIONS(35),
    [anon_sym_Quantity] = ACTIONS(37),
    [anon_sym_Ratio] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrogen] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioOxygen] = ACTIONS(35),
    [anon_sym_RatioOxygenInput] = ACTIONS(35),
    [anon_sym_RatioOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutant] = ACTIONS(35),
    [anon_sym_RatioPollutantInput] = ACTIONS(35),
    [anon_sym_RatioPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutedWater] = ACTIONS(35),
    [anon_sym_RatioSteam] = ACTIONS(35),
    [anon_sym_RatioSteamInput] = ACTIONS(35),
    [anon_sym_RatioSteamInput2] = ACTIONS(35),
    [anon_sym_RatioSteamOutput] = ACTIONS(35),
    [anon_sym_RatioSteamOutput2] = ACTIONS(35),
    [anon_sym_RatioVolatiles] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioWater] = ACTIONS(35),
    [anon_sym_RatioWaterInput] = ACTIONS(35),
    [anon_sym_RatioWaterInput2] = ACTIONS(35),
    [anon_sym_RatioWaterOutput] = ACTIONS(35),
    [anon_sym_RatioWaterOutput2] = ACTIONS(35),
    [anon_sym_ReEntryAltitude] = ACTIONS(35),
    [anon_sym_Reagents] = ACTIONS(35),
    [anon_sym_RecipeHash] = ACTIONS(35),
    [anon_sym_ReferenceId] = ACTIONS(37),
    [anon_sym_RequestHash] = ACTIONS(35),
    [anon_sym_RequiredPower] = ACTIONS(35),
    [anon_sym_ReturnFuelCost] = ACTIONS(35),
    [anon_sym_Richness] = ACTIONS(35),
    [anon_sym_Rpm] = ACTIONS(35),
    [anon_sym_SemiMajorAxis] = ACTIONS(35),
    [anon_sym_Setting] = ACTIONS(35),
    [anon_sym_SettingInput] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarIrradiance] = ACTIONS(35),
    [anon_sym_SoundAlert] = ACTIONS(35),
    [anon_sym_Stress] = ACTIONS(35),
    [anon_sym_Survey] = ACTIONS(35),
    [anon_sym_TargetPadIndex] = ACTIONS(35),
    [anon_sym_TargetX] = ACTIONS(35),
    [anon_sym_TargetY] = ACTIONS(35),
    [anon_sym_TargetZ] = ACTIONS(35),
    [anon_sym_Temperature] = ACTIONS(37),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(35),
    [anon_sym_TemperatureExternal] = ACTIONS(35),
    [anon_sym_TemperatureInput] = ACTIONS(35),
    [anon_sym_TemperatureInput2] = ACTIONS(35),
    [anon_sym_TemperatureOutput] = ACTIONS(35),
    [anon_sym_TemperatureOutput2] = ACTIONS(35),
    [anon_sym_TemperatureSetting] = ACTIONS(35),
    [anon_sym_Throttle] = ACTIONS(35),
    [anon_sym_Thrust] = ACTIONS(35),
    [anon_sym_ThrustToWeight] = ACTIONS(35),
    [anon_sym_Time] = ACTIONS(35),
    [anon_sym_TimeToDestination] = ACTIONS(35),
    [anon_sym_TotalMoles] = ACTIONS(35),
    [anon_sym_TotalMolesInput] = ACTIONS(35),
    [anon_sym_TotalMolesInput2] = ACTIONS(35),
    [anon_sym_TotalMolesOutput] = ACTIONS(35),
    [anon_sym_TotalMolesOutput2] = ACTIONS(35),
    [anon_sym_TotalQuantity] = ACTIONS(35),
    [anon_sym_TrueAnomaly] = ACTIONS(35),
    [anon_sym_VelocityMagnitude] = ACTIONS(35),
    [anon_sym_VelocityRelativeX] = ACTIONS(35),
    [anon_sym_VelocityRelativeY] = ACTIONS(35),
    [anon_sym_VelocityRelativeZ] = ACTIONS(35),
    [anon_sym_VelocityX] = ACTIONS(35),
    [anon_sym_VelocityY] = ACTIONS(35),
    [anon_sym_VelocityZ] = ACTIONS(35),
    [anon_sym_Vertical] = ACTIONS(35),
    [anon_sym_VerticalRatio] = ACTIONS(35),
    [anon_sym_Volume] = ACTIONS(37),
    [anon_sym_VolumeOfLiquid] = ACTIONS(35),
    [anon_sym_WattsReachingContact] = ACTIONS(35),
    [anon_sym_Weight] = ACTIONS(35),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(35),
    [anon_sym_ChargeRatio] = ACTIONS(41),
    [anon_sym_Class] = ACTIONS(41),
    [anon_sym_Damage] = ACTIONS(41),
    [anon_sym_Efficiency] = ACTIONS(41),
    [anon_sym_FilterType] = ACTIONS(41),
    [anon_sym_Growth] = ACTIONS(41),
    [anon_sym_Health] = ACTIONS(41),
    [anon_sym_Mature] = ACTIONS(41),
    [anon_sym_MaxQuantity] = ACTIONS(41),
    [anon_sym_OccupantHash] = ACTIONS(41),
    [anon_sym_Occupied] = ACTIONS(41),
    [anon_sym_PressureAir] = ACTIONS(41),
    [anon_sym_PressureWaste] = ACTIONS(41),
    [anon_sym_Seeding] = ACTIONS(41),
    [anon_sym_SortingClass] = ACTIONS(41),
    [anon_sym_Average] = ACTIONS(43),
    [anon_sym_Minimum] = ACTIONS(43),
    [anon_sym_Sum] = ACTIONS(43),
    [anon_sym_Contents] = ACTIONS(45),
    [anon_sym_Recipe] = ACTIONS(45),
    [anon_sym_Required] = ACTIONS(45),
    [anon_sym_TotalContents] = ACTIONS(45),
    [sym_enum] = ACTIONS(33),
    [sym_deprecated] = ACTIONS(47),
  },
  [4] = {
    [sym_operand] = STATE(19),
    [sym_device_spec] = STATE(14),
    [sym_constant] = STATE(11),
    [sym_hash_preproc] = STATE(11),
    [sym_number] = STATE(14),
    [sym_logicable] = STATE(14),
    [sym_logictype] = STATE(18),
    [sym_logicslottype] = STATE(18),
    [sym_batchmode] = STATE(18),
    [sym_reagentmode] = STATE(18),
    [aux_sym_instruction_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(55),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(53),
    [sym_register] = ACTIONS(25),
    [sym_device] = ACTIONS(27),
    [anon_sym_nan] = ACTIONS(29),
    [anon_sym_pinf] = ACTIONS(29),
    [anon_sym_ninf] = ACTIONS(29),
    [anon_sym_pi] = ACTIONS(29),
    [anon_sym_deg2rad] = ACTIONS(29),
    [anon_sym_rad2deg] = ACTIONS(29),
    [anon_sym_epsilon] = ACTIONS(29),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [anon_sym_Acceleration] = ACTIONS(35),
    [anon_sym_Activate] = ACTIONS(35),
    [anon_sym_AirRelease] = ACTIONS(35),
    [anon_sym_AlignmentError] = ACTIONS(35),
    [anon_sym_Apex] = ACTIONS(35),
    [anon_sym_AutoLand] = ACTIONS(35),
    [anon_sym_AutoShutOff] = ACTIONS(35),
    [anon_sym_Bpm] = ACTIONS(35),
    [anon_sym_BurnTimeRemaining] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel0] = ACTIONS(35),
    [anon_sym_Channel1] = ACTIONS(35),
    [anon_sym_Channel2] = ACTIONS(35),
    [anon_sym_Channel3] = ACTIONS(35),
    [anon_sym_Channel4] = ACTIONS(35),
    [anon_sym_Channel5] = ACTIONS(35),
    [anon_sym_Channel6] = ACTIONS(35),
    [anon_sym_Channel7] = ACTIONS(35),
    [anon_sym_Charge] = ACTIONS(37),
    [anon_sym_Chart] = ACTIONS(35),
    [anon_sym_ChartedNavPoints] = ACTIONS(35),
    [anon_sym_ClearMemory] = ACTIONS(35),
    [anon_sym_CollectableGoods] = ACTIONS(35),
    [anon_sym_Color] = ACTIONS(35),
    [anon_sym_Combustion] = ACTIONS(35),
    [anon_sym_CombustionInput] = ACTIONS(35),
    [anon_sym_CombustionInput2] = ACTIONS(35),
    [anon_sym_CombustionLimiter] = ACTIONS(35),
    [anon_sym_CombustionOutput] = ACTIONS(35),
    [anon_sym_CombustionOutput2] = ACTIONS(35),
    [anon_sym_CompletionRatio] = ACTIONS(35),
    [anon_sym_ContactTypeId] = ACTIONS(35),
    [anon_sym_CurrentCode] = ACTIONS(35),
    [anon_sym_CurrentResearchPodType] = ACTIONS(35),
    [anon_sym_Density] = ACTIONS(35),
    [anon_sym_DestinationCode] = ACTIONS(35),
    [anon_sym_Discover] = ACTIONS(35),
    [anon_sym_DistanceAu] = ACTIONS(35),
    [anon_sym_DistanceKm] = ACTIONS(35),
    [anon_sym_DrillCondition] = ACTIONS(35),
    [anon_sym_DryMass] = ACTIONS(35),
    [anon_sym_Eccentricity] = ACTIONS(35),
    [anon_sym_ElevatorLevel] = ACTIONS(35),
    [anon_sym_ElevatorSpeed] = ACTIONS(35),
    [anon_sym_EntityState] = ACTIONS(35),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(35),
    [anon_sym_Error] = ACTIONS(35),
    [anon_sym_ExhaustVelocity] = ACTIONS(35),
    [anon_sym_ExportCount] = ACTIONS(35),
    [anon_sym_ExportQuantity] = ACTIONS(35),
    [anon_sym_ExportSlotHash] = ACTIONS(35),
    [anon_sym_ExportSlotOccupant] = ACTIONS(35),
    [anon_sym_Filtration] = ACTIONS(35),
    [anon_sym_FlightControlRule] = ACTIONS(35),
    [anon_sym_Flush] = ACTIONS(35),
    [anon_sym_ForceWrite] = ACTIONS(35),
    [anon_sym_ForwardX] = ACTIONS(35),
    [anon_sym_ForwardY] = ACTIONS(35),
    [anon_sym_ForwardZ] = ACTIONS(35),
    [anon_sym_Fuel] = ACTIONS(35),
    [anon_sym_Harvest] = ACTIONS(35),
    [anon_sym_Horizontal] = ACTIONS(35),
    [anon_sym_HorizontalRatio] = ACTIONS(35),
    [anon_sym_Idle] = ACTIONS(35),
    [anon_sym_ImportCount] = ACTIONS(35),
    [anon_sym_ImportQuantity] = ACTIONS(35),
    [anon_sym_ImportSlotHash] = ACTIONS(35),
    [anon_sym_ImportSlotOccupant] = ACTIONS(35),
    [anon_sym_Inclination] = ACTIONS(35),
    [anon_sym_Index] = ACTIONS(35),
    [anon_sym_InterrogationProgress] = ACTIONS(35),
    [anon_sym_LineNumber] = ACTIONS(37),
    [anon_sym_Lock] = ACTIONS(37),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(35),
    [anon_sym_Mass] = ACTIONS(35),
    [anon_sym_Maximum] = ACTIONS(39),
    [anon_sym_MineablesInQueue] = ACTIONS(35),
    [anon_sym_MineablesInVicinity] = ACTIONS(35),
    [anon_sym_MinedQuantity] = ACTIONS(35),
    [anon_sym_MinimumWattsToContact] = ACTIONS(35),
    [anon_sym_Mode] = ACTIONS(35),
    [anon_sym_NavPoints] = ACTIONS(35),
    [anon_sym_NextWeatherEventTime] = ACTIONS(35),
    [anon_sym_None] = ACTIONS(37),
    [anon_sym_On] = ACTIONS(37),
    [anon_sym_Open] = ACTIONS(37),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(35),
    [anon_sym_OrbitPeriod] = ACTIONS(35),
    [anon_sym_Orientation] = ACTIONS(35),
    [anon_sym_Output] = ACTIONS(35),
    [anon_sym_PassedMoles] = ACTIONS(35),
    [anon_sym_Plant] = ACTIONS(35),
    [anon_sym_PlantEfficiency1] = ACTIONS(35),
    [anon_sym_PlantEfficiency2] = ACTIONS(35),
    [anon_sym_PlantEfficiency3] = ACTIONS(35),
    [anon_sym_PlantEfficiency4] = ACTIONS(35),
    [anon_sym_PlantGrowth1] = ACTIONS(35),
    [anon_sym_PlantGrowth2] = ACTIONS(35),
    [anon_sym_PlantGrowth3] = ACTIONS(35),
    [anon_sym_PlantGrowth4] = ACTIONS(35),
    [anon_sym_PlantHash1] = ACTIONS(35),
    [anon_sym_PlantHash2] = ACTIONS(35),
    [anon_sym_PlantHash3] = ACTIONS(35),
    [anon_sym_PlantHash4] = ACTIONS(35),
    [anon_sym_PlantHealth1] = ACTIONS(35),
    [anon_sym_PlantHealth2] = ACTIONS(35),
    [anon_sym_PlantHealth3] = ACTIONS(35),
    [anon_sym_PlantHealth4] = ACTIONS(35),
    [anon_sym_PositionX] = ACTIONS(35),
    [anon_sym_PositionY] = ACTIONS(35),
    [anon_sym_PositionZ] = ACTIONS(35),
    [anon_sym_Power] = ACTIONS(35),
    [anon_sym_PowerActual] = ACTIONS(35),
    [anon_sym_PowerGeneration] = ACTIONS(35),
    [anon_sym_PowerPotential] = ACTIONS(35),
    [anon_sym_PowerRequired] = ACTIONS(35),
    [anon_sym_PrefabHash] = ACTIONS(37),
    [anon_sym_Pressure] = ACTIONS(37),
    [anon_sym_PressureEfficiency] = ACTIONS(35),
    [anon_sym_PressureExternal] = ACTIONS(35),
    [anon_sym_PressureInput] = ACTIONS(35),
    [anon_sym_PressureInput2] = ACTIONS(35),
    [anon_sym_PressureInternal] = ACTIONS(35),
    [anon_sym_PressureOutput] = ACTIONS(35),
    [anon_sym_PressureOutput2] = ACTIONS(35),
    [anon_sym_PressureSetting] = ACTIONS(35),
    [anon_sym_Progress] = ACTIONS(35),
    [anon_sym_Quantity] = ACTIONS(37),
    [anon_sym_Ratio] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrogen] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioOxygen] = ACTIONS(35),
    [anon_sym_RatioOxygenInput] = ACTIONS(35),
    [anon_sym_RatioOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutant] = ACTIONS(35),
    [anon_sym_RatioPollutantInput] = ACTIONS(35),
    [anon_sym_RatioPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutedWater] = ACTIONS(35),
    [anon_sym_RatioSteam] = ACTIONS(35),
    [anon_sym_RatioSteamInput] = ACTIONS(35),
    [anon_sym_RatioSteamInput2] = ACTIONS(35),
    [anon_sym_RatioSteamOutput] = ACTIONS(35),
    [anon_sym_RatioSteamOutput2] = ACTIONS(35),
    [anon_sym_RatioVolatiles] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioWater] = ACTIONS(35),
    [anon_sym_RatioWaterInput] = ACTIONS(35),
    [anon_sym_RatioWaterInput2] = ACTIONS(35),
    [anon_sym_RatioWaterOutput] = ACTIONS(35),
    [anon_sym_RatioWaterOutput2] = ACTIONS(35),
    [anon_sym_ReEntryAltitude] = ACTIONS(35),
    [anon_sym_Reagents] = ACTIONS(35),
    [anon_sym_RecipeHash] = ACTIONS(35),
    [anon_sym_ReferenceId] = ACTIONS(37),
    [anon_sym_RequestHash] = ACTIONS(35),
    [anon_sym_RequiredPower] = ACTIONS(35),
    [anon_sym_ReturnFuelCost] = ACTIONS(35),
    [anon_sym_Richness] = ACTIONS(35),
    [anon_sym_Rpm] = ACTIONS(35),
    [anon_sym_SemiMajorAxis] = ACTIONS(35),
    [anon_sym_Setting] = ACTIONS(35),
    [anon_sym_SettingInput] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarIrradiance] = ACTIONS(35),
    [anon_sym_SoundAlert] = ACTIONS(35),
    [anon_sym_Stress] = ACTIONS(35),
    [anon_sym_Survey] = ACTIONS(35),
    [anon_sym_TargetPadIndex] = ACTIONS(35),
    [anon_sym_TargetX] = ACTIONS(35),
    [anon_sym_TargetY] = ACTIONS(35),
    [anon_sym_TargetZ] = ACTIONS(35),
    [anon_sym_Temperature] = ACTIONS(37),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(35),
    [anon_sym_TemperatureExternal] = ACTIONS(35),
    [anon_sym_TemperatureInput] = ACTIONS(35),
    [anon_sym_TemperatureInput2] = ACTIONS(35),
    [anon_sym_TemperatureOutput] = ACTIONS(35),
    [anon_sym_TemperatureOutput2] = ACTIONS(35),
    [anon_sym_TemperatureSetting] = ACTIONS(35),
    [anon_sym_Throttle] = ACTIONS(35),
    [anon_sym_Thrust] = ACTIONS(35),
    [anon_sym_ThrustToWeight] = ACTIONS(35),
    [anon_sym_Time] = ACTIONS(35),
    [anon_sym_TimeToDestination] = ACTIONS(35),
    [anon_sym_TotalMoles] = ACTIONS(35),
    [anon_sym_TotalMolesInput] = ACTIONS(35),
    [anon_sym_TotalMolesInput2] = ACTIONS(35),
    [anon_sym_TotalMolesOutput] = ACTIONS(35),
    [anon_sym_TotalMolesOutput2] = ACTIONS(35),
    [anon_sym_TotalQuantity] = ACTIONS(35),
    [anon_sym_TrueAnomaly] = ACTIONS(35),
    [anon_sym_VelocityMagnitude] = ACTIONS(35),
    [anon_sym_VelocityRelativeX] = ACTIONS(35),
    [anon_sym_VelocityRelativeY] = ACTIONS(35),
    [anon_sym_VelocityRelativeZ] = ACTIONS(35),
    [anon_sym_VelocityX] = ACTIONS(35),
    [anon_sym_VelocityY] = ACTIONS(35),
    [anon_sym_VelocityZ] = ACTIONS(35),
    [anon_sym_Vertical] = ACTIONS(35),
    [anon_sym_VerticalRatio] = ACTIONS(35),
    [anon_sym_Volume] = ACTIONS(37),
    [anon_sym_VolumeOfLiquid] = ACTIONS(35),
    [anon_sym_WattsReachingContact] = ACTIONS(35),
    [anon_sym_Weight] = ACTIONS(35),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(35),
    [anon_sym_ChargeRatio] = ACTIONS(41),
    [anon_sym_Class] = ACTIONS(41),
    [anon_sym_Damage] = ACTIONS(41),
    [anon_sym_Efficiency] = ACTIONS(41),
    [anon_sym_FilterType] = ACTIONS(41),
    [anon_sym_Growth] = ACTIONS(41),
    [anon_sym_Health] = ACTIONS(41),
    [anon_sym_Mature] = ACTIONS(41),
    [anon_sym_MaxQuantity] = ACTIONS(41),
    [anon_sym_OccupantHash] = ACTIONS(41),
    [anon_sym_Occupied] = ACTIONS(41),
    [anon_sym_PressureAir] = ACTIONS(41),
    [anon_sym_PressureWaste] = ACTIONS(41),
    [anon_sym_Seeding] = ACTIONS(41),
    [anon_sym_SortingClass] = ACTIONS(41),
    [anon_sym_Average] = ACTIONS(43),
    [anon_sym_Minimum] = ACTIONS(43),
    [anon_sym_Sum] = ACTIONS(43),
    [anon_sym_Contents] = ACTIONS(45),
    [anon_sym_Recipe] = ACTIONS(45),
    [anon_sym_Required] = ACTIONS(45),
    [anon_sym_TotalContents] = ACTIONS(45),
    [sym_enum] = ACTIONS(33),
    [sym_deprecated] = ACTIONS(47),
  },
  [5] = {
    [sym_operand] = STATE(19),
    [sym_device_spec] = STATE(14),
    [sym_constant] = STATE(11),
    [sym_hash_preproc] = STATE(11),
    [sym_number] = STATE(14),
    [sym_logicable] = STATE(14),
    [sym_logictype] = STATE(18),
    [sym_logicslottype] = STATE(18),
    [sym_batchmode] = STATE(18),
    [sym_reagentmode] = STATE(18),
    [aux_sym_instruction_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_CR_LF] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(57),
    [sym_register] = ACTIONS(25),
    [sym_device] = ACTIONS(27),
    [anon_sym_nan] = ACTIONS(29),
    [anon_sym_pinf] = ACTIONS(29),
    [anon_sym_ninf] = ACTIONS(29),
    [anon_sym_pi] = ACTIONS(29),
    [anon_sym_deg2rad] = ACTIONS(29),
    [anon_sym_rad2deg] = ACTIONS(29),
    [anon_sym_epsilon] = ACTIONS(29),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [anon_sym_Acceleration] = ACTIONS(35),
    [anon_sym_Activate] = ACTIONS(35),
    [anon_sym_AirRelease] = ACTIONS(35),
    [anon_sym_AlignmentError] = ACTIONS(35),
    [anon_sym_Apex] = ACTIONS(35),
    [anon_sym_AutoLand] = ACTIONS(35),
    [anon_sym_AutoShutOff] = ACTIONS(35),
    [anon_sym_Bpm] = ACTIONS(35),
    [anon_sym_BurnTimeRemaining] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel0] = ACTIONS(35),
    [anon_sym_Channel1] = ACTIONS(35),
    [anon_sym_Channel2] = ACTIONS(35),
    [anon_sym_Channel3] = ACTIONS(35),
    [anon_sym_Channel4] = ACTIONS(35),
    [anon_sym_Channel5] = ACTIONS(35),
    [anon_sym_Channel6] = ACTIONS(35),
    [anon_sym_Channel7] = ACTIONS(35),
    [anon_sym_Charge] = ACTIONS(37),
    [anon_sym_Chart] = ACTIONS(35),
    [anon_sym_ChartedNavPoints] = ACTIONS(35),
    [anon_sym_ClearMemory] = ACTIONS(35),
    [anon_sym_CollectableGoods] = ACTIONS(35),
    [anon_sym_Color] = ACTIONS(35),
    [anon_sym_Combustion] = ACTIONS(35),
    [anon_sym_CombustionInput] = ACTIONS(35),
    [anon_sym_CombustionInput2] = ACTIONS(35),
    [anon_sym_CombustionLimiter] = ACTIONS(35),
    [anon_sym_CombustionOutput] = ACTIONS(35),
    [anon_sym_CombustionOutput2] = ACTIONS(35),
    [anon_sym_CompletionRatio] = ACTIONS(35),
    [anon_sym_ContactTypeId] = ACTIONS(35),
    [anon_sym_CurrentCode] = ACTIONS(35),
    [anon_sym_CurrentResearchPodType] = ACTIONS(35),
    [anon_sym_Density] = ACTIONS(35),
    [anon_sym_DestinationCode] = ACTIONS(35),
    [anon_sym_Discover] = ACTIONS(35),
    [anon_sym_DistanceAu] = ACTIONS(35),
    [anon_sym_DistanceKm] = ACTIONS(35),
    [anon_sym_DrillCondition] = ACTIONS(35),
    [anon_sym_DryMass] = ACTIONS(35),
    [anon_sym_Eccentricity] = ACTIONS(35),
    [anon_sym_ElevatorLevel] = ACTIONS(35),
    [anon_sym_ElevatorSpeed] = ACTIONS(35),
    [anon_sym_EntityState] = ACTIONS(35),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(35),
    [anon_sym_Error] = ACTIONS(35),
    [anon_sym_ExhaustVelocity] = ACTIONS(35),
    [anon_sym_ExportCount] = ACTIONS(35),
    [anon_sym_ExportQuantity] = ACTIONS(35),
    [anon_sym_ExportSlotHash] = ACTIONS(35),
    [anon_sym_ExportSlotOccupant] = ACTIONS(35),
    [anon_sym_Filtration] = ACTIONS(35),
    [anon_sym_FlightControlRule] = ACTIONS(35),
    [anon_sym_Flush] = ACTIONS(35),
    [anon_sym_ForceWrite] = ACTIONS(35),
    [anon_sym_ForwardX] = ACTIONS(35),
    [anon_sym_ForwardY] = ACTIONS(35),
    [anon_sym_ForwardZ] = ACTIONS(35),
    [anon_sym_Fuel] = ACTIONS(35),
    [anon_sym_Harvest] = ACTIONS(35),
    [anon_sym_Horizontal] = ACTIONS(35),
    [anon_sym_HorizontalRatio] = ACTIONS(35),
    [anon_sym_Idle] = ACTIONS(35),
    [anon_sym_ImportCount] = ACTIONS(35),
    [anon_sym_ImportQuantity] = ACTIONS(35),
    [anon_sym_ImportSlotHash] = ACTIONS(35),
    [anon_sym_ImportSlotOccupant] = ACTIONS(35),
    [anon_sym_Inclination] = ACTIONS(35),
    [anon_sym_Index] = ACTIONS(35),
    [anon_sym_InterrogationProgress] = ACTIONS(35),
    [anon_sym_LineNumber] = ACTIONS(37),
    [anon_sym_Lock] = ACTIONS(37),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(35),
    [anon_sym_Mass] = ACTIONS(35),
    [anon_sym_Maximum] = ACTIONS(39),
    [anon_sym_MineablesInQueue] = ACTIONS(35),
    [anon_sym_MineablesInVicinity] = ACTIONS(35),
    [anon_sym_MinedQuantity] = ACTIONS(35),
    [anon_sym_MinimumWattsToContact] = ACTIONS(35),
    [anon_sym_Mode] = ACTIONS(35),
    [anon_sym_NavPoints] = ACTIONS(35),
    [anon_sym_NextWeatherEventTime] = ACTIONS(35),
    [anon_sym_None] = ACTIONS(37),
    [anon_sym_On] = ACTIONS(37),
    [anon_sym_Open] = ACTIONS(37),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(35),
    [anon_sym_OrbitPeriod] = ACTIONS(35),
    [anon_sym_Orientation] = ACTIONS(35),
    [anon_sym_Output] = ACTIONS(35),
    [anon_sym_PassedMoles] = ACTIONS(35),
    [anon_sym_Plant] = ACTIONS(35),
    [anon_sym_PlantEfficiency1] = ACTIONS(35),
    [anon_sym_PlantEfficiency2] = ACTIONS(35),
    [anon_sym_PlantEfficiency3] = ACTIONS(35),
    [anon_sym_PlantEfficiency4] = ACTIONS(35),
    [anon_sym_PlantGrowth1] = ACTIONS(35),
    [anon_sym_PlantGrowth2] = ACTIONS(35),
    [anon_sym_PlantGrowth3] = ACTIONS(35),
    [anon_sym_PlantGrowth4] = ACTIONS(35),
    [anon_sym_PlantHash1] = ACTIONS(35),
    [anon_sym_PlantHash2] = ACTIONS(35),
    [anon_sym_PlantHash3] = ACTIONS(35),
    [anon_sym_PlantHash4] = ACTIONS(35),
    [anon_sym_PlantHealth1] = ACTIONS(35),
    [anon_sym_PlantHealth2] = ACTIONS(35),
    [anon_sym_PlantHealth3] = ACTIONS(35),
    [anon_sym_PlantHealth4] = ACTIONS(35),
    [anon_sym_PositionX] = ACTIONS(35),
    [anon_sym_PositionY] = ACTIONS(35),
    [anon_sym_PositionZ] = ACTIONS(35),
    [anon_sym_Power] = ACTIONS(35),
    [anon_sym_PowerActual] = ACTIONS(35),
    [anon_sym_PowerGeneration] = ACTIONS(35),
    [anon_sym_PowerPotential] = ACTIONS(35),
    [anon_sym_PowerRequired] = ACTIONS(35),
    [anon_sym_PrefabHash] = ACTIONS(37),
    [anon_sym_Pressure] = ACTIONS(37),
    [anon_sym_PressureEfficiency] = ACTIONS(35),
    [anon_sym_PressureExternal] = ACTIONS(35),
    [anon_sym_PressureInput] = ACTIONS(35),
    [anon_sym_PressureInput2] = ACTIONS(35),
    [anon_sym_PressureInternal] = ACTIONS(35),
    [anon_sym_PressureOutput] = ACTIONS(35),
    [anon_sym_PressureOutput2] = ACTIONS(35),
    [anon_sym_PressureSetting] = ACTIONS(35),
    [anon_sym_Progress] = ACTIONS(35),
    [anon_sym_Quantity] = ACTIONS(37),
    [anon_sym_Ratio] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrogen] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput] = ACTIONS(35),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(35),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxide] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(35),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(35),
    [anon_sym_RatioOxygen] = ACTIONS(35),
    [anon_sym_RatioOxygenInput] = ACTIONS(35),
    [anon_sym_RatioOxygenInput2] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput] = ACTIONS(35),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutant] = ACTIONS(35),
    [anon_sym_RatioPollutantInput] = ACTIONS(35),
    [anon_sym_RatioPollutantInput2] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput] = ACTIONS(35),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(35),
    [anon_sym_RatioPollutedWater] = ACTIONS(35),
    [anon_sym_RatioSteam] = ACTIONS(35),
    [anon_sym_RatioSteamInput] = ACTIONS(35),
    [anon_sym_RatioSteamInput2] = ACTIONS(35),
    [anon_sym_RatioSteamOutput] = ACTIONS(35),
    [anon_sym_RatioSteamOutput2] = ACTIONS(35),
    [anon_sym_RatioVolatiles] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput] = ACTIONS(35),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(35),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(35),
    [anon_sym_RatioWater] = ACTIONS(35),
    [anon_sym_RatioWaterInput] = ACTIONS(35),
    [anon_sym_RatioWaterInput2] = ACTIONS(35),
    [anon_sym_RatioWaterOutput] = ACTIONS(35),
    [anon_sym_RatioWaterOutput2] = ACTIONS(35),
    [anon_sym_ReEntryAltitude] = ACTIONS(35),
    [anon_sym_Reagents] = ACTIONS(35),
    [anon_sym_RecipeHash] = ACTIONS(35),
    [anon_sym_ReferenceId] = ACTIONS(37),
    [anon_sym_RequestHash] = ACTIONS(35),
    [anon_sym_RequiredPower] = ACTIONS(35),
    [anon_sym_ReturnFuelCost] = ACTIONS(35),
    [anon_sym_Richness] = ACTIONS(35),
    [anon_sym_Rpm] = ACTIONS(35),
    [anon_sym_SemiMajorAxis] = ACTIONS(35),
    [anon_sym_Setting] = ACTIONS(35),
    [anon_sym_SettingInput] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarIrradiance] = ACTIONS(35),
    [anon_sym_SoundAlert] = ACTIONS(35),
    [anon_sym_Stress] = ACTIONS(35),
    [anon_sym_Survey] = ACTIONS(35),
    [anon_sym_TargetPadIndex] = ACTIONS(35),
    [anon_sym_TargetX] = ACTIONS(35),
    [anon_sym_TargetY] = ACTIONS(35),
    [anon_sym_TargetZ] = ACTIONS(35),
    [anon_sym_Temperature] = ACTIONS(37),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(35),
    [anon_sym_TemperatureExternal] = ACTIONS(35),
    [anon_sym_TemperatureInput] = ACTIONS(35),
    [anon_sym_TemperatureInput2] = ACTIONS(35),
    [anon_sym_TemperatureOutput] = ACTIONS(35),
    [anon_sym_TemperatureOutput2] = ACTIONS(35),
    [anon_sym_TemperatureSetting] = ACTIONS(35),
    [anon_sym_Throttle] = ACTIONS(35),
    [anon_sym_Thrust] = ACTIONS(35),
    [anon_sym_ThrustToWeight] = ACTIONS(35),
    [anon_sym_Time] = ACTIONS(35),
    [anon_sym_TimeToDestination] = ACTIONS(35),
    [anon_sym_TotalMoles] = ACTIONS(35),
    [anon_sym_TotalMolesInput] = ACTIONS(35),
    [anon_sym_TotalMolesInput2] = ACTIONS(35),
    [anon_sym_TotalMolesOutput] = ACTIONS(35),
    [anon_sym_TotalMolesOutput2] = ACTIONS(35),
    [anon_sym_TotalQuantity] = ACTIONS(35),
    [anon_sym_TrueAnomaly] = ACTIONS(35),
    [anon_sym_VelocityMagnitude] = ACTIONS(35),
    [anon_sym_VelocityRelativeX] = ACTIONS(35),
    [anon_sym_VelocityRelativeY] = ACTIONS(35),
    [anon_sym_VelocityRelativeZ] = ACTIONS(35),
    [anon_sym_VelocityX] = ACTIONS(35),
    [anon_sym_VelocityY] = ACTIONS(35),
    [anon_sym_VelocityZ] = ACTIONS(35),
    [anon_sym_Vertical] = ACTIONS(35),
    [anon_sym_VerticalRatio] = ACTIONS(35),
    [anon_sym_Volume] = ACTIONS(37),
    [anon_sym_VolumeOfLiquid] = ACTIONS(35),
    [anon_sym_WattsReachingContact] = ACTIONS(35),
    [anon_sym_Weight] = ACTIONS(35),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(35),
    [anon_sym_ChargeRatio] = ACTIONS(41),
    [anon_sym_Class] = ACTIONS(41),
    [anon_sym_Damage] = ACTIONS(41),
    [anon_sym_Efficiency] = ACTIONS(41),
    [anon_sym_FilterType] = ACTIONS(41),
    [anon_sym_Growth] = ACTIONS(41),
    [anon_sym_Health] = ACTIONS(41),
    [anon_sym_Mature] = ACTIONS(41),
    [anon_sym_MaxQuantity] = ACTIONS(41),
    [anon_sym_OccupantHash] = ACTIONS(41),
    [anon_sym_Occupied] = ACTIONS(41),
    [anon_sym_PressureAir] = ACTIONS(41),
    [anon_sym_PressureWaste] = ACTIONS(41),
    [anon_sym_Seeding] = ACTIONS(41),
    [anon_sym_SortingClass] = ACTIONS(41),
    [anon_sym_Average] = ACTIONS(43),
    [anon_sym_Minimum] = ACTIONS(43),
    [anon_sym_Sum] = ACTIONS(43),
    [anon_sym_Contents] = ACTIONS(45),
    [anon_sym_Recipe] = ACTIONS(45),
    [anon_sym_Required] = ACTIONS(45),
    [anon_sym_TotalContents] = ACTIONS(45),
    [sym_enum] = ACTIONS(33),
    [sym_deprecated] = ACTIONS(47),
  },
  [6] = {
    [sym_operand] = STATE(19),
    [sym_device_spec] = STATE(14),
    [sym_constant] = STATE(11),
    [sym_hash_preproc] = STATE(11),
    [sym_number] = STATE(14),
    [sym_logicable] = STATE(14),
    [sym_logictype] = STATE(18),
    [sym_logicslottype] = STATE(18),
    [sym_batchmode] = STATE(18),
    [sym_reagentmode] = STATE(18),
    [aux_sym_instruction_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_CR_LF] = ACTIONS(64),
    [anon_sym_CR] = ACTIONS(66),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(64),
    [sym_register] = ACTIONS(68),
    [sym_device] = ACTIONS(71),
    [anon_sym_nan] = ACTIONS(74),
    [anon_sym_pinf] = ACTIONS(74),
    [anon_sym_ninf] = ACTIONS(74),
    [anon_sym_pi] = ACTIONS(74),
    [anon_sym_deg2rad] = ACTIONS(74),
    [anon_sym_rad2deg] = ACTIONS(74),
    [anon_sym_epsilon] = ACTIONS(74),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(77),
    [aux_sym_number_token1] = ACTIONS(80),
    [anon_sym_Acceleration] = ACTIONS(83),
    [anon_sym_Activate] = ACTIONS(83),
    [anon_sym_AirRelease] = ACTIONS(83),
    [anon_sym_AlignmentError] = ACTIONS(83),
    [anon_sym_Apex] = ACTIONS(83),
    [anon_sym_AutoLand] = ACTIONS(83),
    [anon_sym_AutoShutOff] = ACTIONS(83),
    [anon_sym_Bpm] = ACTIONS(83),
    [anon_sym_BurnTimeRemaining] = ACTIONS(83),
    [anon_sym_CelestialHash] = ACTIONS(83),
    [anon_sym_CelestialParentHash] = ACTIONS(83),
    [anon_sym_Channel0] = ACTIONS(83),
    [anon_sym_Channel1] = ACTIONS(83),
    [anon_sym_Channel2] = ACTIONS(83),
    [anon_sym_Channel3] = ACTIONS(83),
    [anon_sym_Channel4] = ACTIONS(83),
    [anon_sym_Channel5] = ACTIONS(83),
    [anon_sym_Channel6] = ACTIONS(83),
    [anon_sym_Channel7] = ACTIONS(83),
    [anon_sym_Charge] = ACTIONS(86),
    [anon_sym_Chart] = ACTIONS(83),
    [anon_sym_ChartedNavPoints] = ACTIONS(83),
    [anon_sym_ClearMemory] = ACTIONS(83),
    [anon_sym_CollectableGoods] = ACTIONS(83),
    [anon_sym_Color] = ACTIONS(83),
    [anon_sym_Combustion] = ACTIONS(83),
    [anon_sym_CombustionInput] = ACTIONS(83),
    [anon_sym_CombustionInput2] = ACTIONS(83),
    [anon_sym_CombustionLimiter] = ACTIONS(83),
    [anon_sym_CombustionOutput] = ACTIONS(83),
    [anon_sym_CombustionOutput2] = ACTIONS(83),
    [anon_sym_CompletionRatio] = ACTIONS(83),
    [anon_sym_ContactTypeId] = ACTIONS(83),
    [anon_sym_CurrentCode] = ACTIONS(83),
    [anon_sym_CurrentResearchPodType] = ACTIONS(83),
    [anon_sym_Density] = ACTIONS(83),
    [anon_sym_DestinationCode] = ACTIONS(83),
    [anon_sym_Discover] = ACTIONS(83),
    [anon_sym_DistanceAu] = ACTIONS(83),
    [anon_sym_DistanceKm] = ACTIONS(83),
    [anon_sym_DrillCondition] = ACTIONS(83),
    [anon_sym_DryMass] = ACTIONS(83),
    [anon_sym_Eccentricity] = ACTIONS(83),
    [anon_sym_ElevatorLevel] = ACTIONS(83),
    [anon_sym_ElevatorSpeed] = ACTIONS(83),
    [anon_sym_EntityState] = ACTIONS(83),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(83),
    [anon_sym_Error] = ACTIONS(83),
    [anon_sym_ExhaustVelocity] = ACTIONS(83),
    [anon_sym_ExportCount] = ACTIONS(83),
    [anon_sym_ExportQuantity] = ACTIONS(83),
    [anon_sym_ExportSlotHash] = ACTIONS(83),
    [anon_sym_ExportSlotOccupant] = ACTIONS(83),
    [anon_sym_Filtration] = ACTIONS(83),
    [anon_sym_FlightControlRule] = ACTIONS(83),
    [anon_sym_Flush] = ACTIONS(83),
    [anon_sym_ForceWrite] = ACTIONS(83),
    [anon_sym_ForwardX] = ACTIONS(83),
    [anon_sym_ForwardY] = ACTIONS(83),
    [anon_sym_ForwardZ] = ACTIONS(83),
    [anon_sym_Fuel] = ACTIONS(83),
    [anon_sym_Harvest] = ACTIONS(83),
    [anon_sym_Horizontal] = ACTIONS(83),
    [anon_sym_HorizontalRatio] = ACTIONS(83),
    [anon_sym_Idle] = ACTIONS(83),
    [anon_sym_ImportCount] = ACTIONS(83),
    [anon_sym_ImportQuantity] = ACTIONS(83),
    [anon_sym_ImportSlotHash] = ACTIONS(83),
    [anon_sym_ImportSlotOccupant] = ACTIONS(83),
    [anon_sym_Inclination] = ACTIONS(83),
    [anon_sym_Index] = ACTIONS(83),
    [anon_sym_InterrogationProgress] = ACTIONS(83),
    [anon_sym_LineNumber] = ACTIONS(86),
    [anon_sym_Lock] = ACTIONS(86),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(83),
    [anon_sym_Mass] = ACTIONS(83),
    [anon_sym_Maximum] = ACTIONS(89),
    [anon_sym_MineablesInQueue] = ACTIONS(83),
    [anon_sym_MineablesInVicinity] = ACTIONS(83),
    [anon_sym_MinedQuantity] = ACTIONS(83),
    [anon_sym_MinimumWattsToContact] = ACTIONS(83),
    [anon_sym_Mode] = ACTIONS(83),
    [anon_sym_NavPoints] = ACTIONS(83),
    [anon_sym_NextWeatherEventTime] = ACTIONS(83),
    [anon_sym_None] = ACTIONS(86),
    [anon_sym_On] = ACTIONS(86),
    [anon_sym_Open] = ACTIONS(86),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(83),
    [anon_sym_OrbitPeriod] = ACTIONS(83),
    [anon_sym_Orientation] = ACTIONS(83),
    [anon_sym_Output] = ACTIONS(83),
    [anon_sym_PassedMoles] = ACTIONS(83),
    [anon_sym_Plant] = ACTIONS(83),
    [anon_sym_PlantEfficiency1] = ACTIONS(83),
    [anon_sym_PlantEfficiency2] = ACTIONS(83),
    [anon_sym_PlantEfficiency3] = ACTIONS(83),
    [anon_sym_PlantEfficiency4] = ACTIONS(83),
    [anon_sym_PlantGrowth1] = ACTIONS(83),
    [anon_sym_PlantGrowth2] = ACTIONS(83),
    [anon_sym_PlantGrowth3] = ACTIONS(83),
    [anon_sym_PlantGrowth4] = ACTIONS(83),
    [anon_sym_PlantHash1] = ACTIONS(83),
    [anon_sym_PlantHash2] = ACTIONS(83),
    [anon_sym_PlantHash3] = ACTIONS(83),
    [anon_sym_PlantHash4] = ACTIONS(83),
    [anon_sym_PlantHealth1] = ACTIONS(83),
    [anon_sym_PlantHealth2] = ACTIONS(83),
    [anon_sym_PlantHealth3] = ACTIONS(83),
    [anon_sym_PlantHealth4] = ACTIONS(83),
    [anon_sym_PositionX] = ACTIONS(83),
    [anon_sym_PositionY] = ACTIONS(83),
    [anon_sym_PositionZ] = ACTIONS(83),
    [anon_sym_Power] = ACTIONS(83),
    [anon_sym_PowerActual] = ACTIONS(83),
    [anon_sym_PowerGeneration] = ACTIONS(83),
    [anon_sym_PowerPotential] = ACTIONS(83),
    [anon_sym_PowerRequired] = ACTIONS(83),
    [anon_sym_PrefabHash] = ACTIONS(86),
    [anon_sym_Pressure] = ACTIONS(86),
    [anon_sym_PressureEfficiency] = ACTIONS(83),
    [anon_sym_PressureExternal] = ACTIONS(83),
    [anon_sym_PressureInput] = ACTIONS(83),
    [anon_sym_PressureInput2] = ACTIONS(83),
    [anon_sym_PressureInternal] = ACTIONS(83),
    [anon_sym_PressureOutput] = ACTIONS(83),
    [anon_sym_PressureOutput2] = ACTIONS(83),
    [anon_sym_PressureSetting] = ACTIONS(83),
    [anon_sym_Progress] = ACTIONS(83),
    [anon_sym_Quantity] = ACTIONS(86),
    [anon_sym_Ratio] = ACTIONS(83),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(83),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(83),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(83),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(83),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(83),
    [anon_sym_RatioHydrogen] = ACTIONS(83),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(83),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(83),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(83),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(83),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(83),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(83),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(83),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(83),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(83),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(83),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(83),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(83),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(83),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(83),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(83),
    [anon_sym_RatioNitrogen] = ACTIONS(83),
    [anon_sym_RatioNitrogenInput] = ACTIONS(83),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(83),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(83),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(83),
    [anon_sym_RatioNitrousOxide] = ACTIONS(83),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(83),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(83),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(83),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(83),
    [anon_sym_RatioOxygen] = ACTIONS(83),
    [anon_sym_RatioOxygenInput] = ACTIONS(83),
    [anon_sym_RatioOxygenInput2] = ACTIONS(83),
    [anon_sym_RatioOxygenOutput] = ACTIONS(83),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(83),
    [anon_sym_RatioPollutant] = ACTIONS(83),
    [anon_sym_RatioPollutantInput] = ACTIONS(83),
    [anon_sym_RatioPollutantInput2] = ACTIONS(83),
    [anon_sym_RatioPollutantOutput] = ACTIONS(83),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(83),
    [anon_sym_RatioPollutedWater] = ACTIONS(83),
    [anon_sym_RatioSteam] = ACTIONS(83),
    [anon_sym_RatioSteamInput] = ACTIONS(83),
    [anon_sym_RatioSteamInput2] = ACTIONS(83),
    [anon_sym_RatioSteamOutput] = ACTIONS(83),
    [anon_sym_RatioSteamOutput2] = ACTIONS(83),
    [anon_sym_RatioVolatiles] = ACTIONS(83),
    [anon_sym_RatioVolatilesInput] = ACTIONS(83),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(83),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(83),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(83),
    [anon_sym_RatioWater] = ACTIONS(83),
    [anon_sym_RatioWaterInput] = ACTIONS(83),
    [anon_sym_RatioWaterInput2] = ACTIONS(83),
    [anon_sym_RatioWaterOutput] = ACTIONS(83),
    [anon_sym_RatioWaterOutput2] = ACTIONS(83),
    [anon_sym_ReEntryAltitude] = ACTIONS(83),
    [anon_sym_Reagents] = ACTIONS(83),
    [anon_sym_RecipeHash] = ACTIONS(83),
    [anon_sym_ReferenceId] = ACTIONS(86),
    [anon_sym_RequestHash] = ACTIONS(83),
    [anon_sym_RequiredPower] = ACTIONS(83),
    [anon_sym_ReturnFuelCost] = ACTIONS(83),
    [anon_sym_Richness] = ACTIONS(83),
    [anon_sym_Rpm] = ACTIONS(83),
    [anon_sym_SemiMajorAxis] = ACTIONS(83),
    [anon_sym_Setting] = ACTIONS(83),
    [anon_sym_SettingInput] = ACTIONS(83),
    [anon_sym_SettingOutput] = ACTIONS(83),
    [anon_sym_SignalID] = ACTIONS(83),
    [anon_sym_SignalStrength] = ACTIONS(83),
    [anon_sym_Sites] = ACTIONS(83),
    [anon_sym_Size] = ACTIONS(83),
    [anon_sym_SizeX] = ACTIONS(83),
    [anon_sym_SizeY] = ACTIONS(83),
    [anon_sym_SizeZ] = ACTIONS(83),
    [anon_sym_SolarAngle] = ACTIONS(83),
    [anon_sym_SolarIrradiance] = ACTIONS(83),
    [anon_sym_SoundAlert] = ACTIONS(83),
    [anon_sym_Stress] = ACTIONS(83),
    [anon_sym_Survey] = ACTIONS(83),
    [anon_sym_TargetPadIndex] = ACTIONS(83),
    [anon_sym_TargetX] = ACTIONS(83),
    [anon_sym_TargetY] = ACTIONS(83),
    [anon_sym_TargetZ] = ACTIONS(83),
    [anon_sym_Temperature] = ACTIONS(86),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(83),
    [anon_sym_TemperatureExternal] = ACTIONS(83),
    [anon_sym_TemperatureInput] = ACTIONS(83),
    [anon_sym_TemperatureInput2] = ACTIONS(83),
    [anon_sym_TemperatureOutput] = ACTIONS(83),
    [anon_sym_TemperatureOutput2] = ACTIONS(83),
    [anon_sym_TemperatureSetting] = ACTIONS(83),
    [anon_sym_Throttle] = ACTIONS(83),
    [anon_sym_Thrust] = ACTIONS(83),
    [anon_sym_ThrustToWeight] = ACTIONS(83),
    [anon_sym_Time] = ACTIONS(83),
    [anon_sym_TimeToDestination] = ACTIONS(83),
    [anon_sym_TotalMoles] = ACTIONS(83),
    [anon_sym_TotalMolesInput] = ACTIONS(83),
    [anon_sym_TotalMolesInput2] = ACTIONS(83),
    [anon_sym_TotalMolesOutput] = ACTIONS(83),
    [anon_sym_TotalMolesOutput2] = ACTIONS(83),
    [anon_sym_TotalQuantity] = ACTIONS(83),
    [anon_sym_TrueAnomaly] = ACTIONS(83),
    [anon_sym_VelocityMagnitude] = ACTIONS(83),
    [anon_sym_VelocityRelativeX] = ACTIONS(83),
    [anon_sym_VelocityRelativeY] = ACTIONS(83),
    [anon_sym_VelocityRelativeZ] = ACTIONS(83),
    [anon_sym_VelocityX] = ACTIONS(83),
    [anon_sym_VelocityY] = ACTIONS(83),
    [anon_sym_VelocityZ] = ACTIONS(83),
    [anon_sym_Vertical] = ACTIONS(83),
    [anon_sym_VerticalRatio] = ACTIONS(83),
    [anon_sym_Volume] = ACTIONS(86),
    [anon_sym_VolumeOfLiquid] = ACTIONS(83),
    [anon_sym_WattsReachingContact] = ACTIONS(83),
    [anon_sym_Weight] = ACTIONS(83),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(83),
    [anon_sym_ChargeRatio] = ACTIONS(92),
    [anon_sym_Class] = ACTIONS(92),
    [anon_sym_Damage] = ACTIONS(92),
    [anon_sym_Efficiency] = ACTIONS(92),
    [anon_sym_FilterType] = ACTIONS(92),
    [anon_sym_Growth] = ACTIONS(92),
    [anon_sym_Health] = ACTIONS(92),
    [anon_sym_Mature] = ACTIONS(92),
    [anon_sym_MaxQuantity] = ACTIONS(92),
    [anon_sym_OccupantHash] = ACTIONS(92),
    [anon_sym_Occupied] = ACTIONS(92),
    [anon_sym_PressureAir] = ACTIONS(92),
    [anon_sym_PressureWaste] = ACTIONS(92),
    [anon_sym_Seeding] = ACTIONS(92),
    [anon_sym_SortingClass] = ACTIONS(92),
    [anon_sym_Average] = ACTIONS(95),
    [anon_sym_Minimum] = ACTIONS(95),
    [anon_sym_Sum] = ACTIONS(95),
    [anon_sym_Contents] = ACTIONS(98),
    [anon_sym_Recipe] = ACTIONS(98),
    [anon_sym_Required] = ACTIONS(98),
    [anon_sym_TotalContents] = ACTIONS(98),
    [sym_enum] = ACTIONS(80),
    [sym_deprecated] = ACTIONS(101),
  },
  [7] = {
    [sym_identifier] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_CR_LF] = ACTIONS(108),
    [anon_sym_CR] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(108),
    [sym_register] = ACTIONS(108),
    [sym_device] = ACTIONS(108),
    [anon_sym_nan] = ACTIONS(104),
    [anon_sym_pinf] = ACTIONS(104),
    [anon_sym_ninf] = ACTIONS(104),
    [anon_sym_pi] = ACTIONS(104),
    [anon_sym_deg2rad] = ACTIONS(104),
    [anon_sym_rad2deg] = ACTIONS(104),
    [anon_sym_epsilon] = ACTIONS(104),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(108),
    [aux_sym_number_token1] = ACTIONS(108),
    [anon_sym_Acceleration] = ACTIONS(104),
    [anon_sym_Activate] = ACTIONS(104),
    [anon_sym_AirRelease] = ACTIONS(104),
    [anon_sym_AlignmentError] = ACTIONS(104),
    [anon_sym_Apex] = ACTIONS(104),
    [anon_sym_AutoLand] = ACTIONS(104),
    [anon_sym_AutoShutOff] = ACTIONS(104),
    [anon_sym_Bpm] = ACTIONS(104),
    [anon_sym_BurnTimeRemaining] = ACTIONS(104),
    [anon_sym_CelestialHash] = ACTIONS(104),
    [anon_sym_CelestialParentHash] = ACTIONS(104),
    [anon_sym_Channel0] = ACTIONS(104),
    [anon_sym_Channel1] = ACTIONS(104),
    [anon_sym_Channel2] = ACTIONS(104),
    [anon_sym_Channel3] = ACTIONS(104),
    [anon_sym_Channel4] = ACTIONS(104),
    [anon_sym_Channel5] = ACTIONS(104),
    [anon_sym_Channel6] = ACTIONS(104),
    [anon_sym_Channel7] = ACTIONS(104),
    [anon_sym_Charge] = ACTIONS(104),
    [anon_sym_Chart] = ACTIONS(104),
    [anon_sym_ChartedNavPoints] = ACTIONS(104),
    [anon_sym_ClearMemory] = ACTIONS(104),
    [anon_sym_CollectableGoods] = ACTIONS(104),
    [anon_sym_Color] = ACTIONS(104),
    [anon_sym_Combustion] = ACTIONS(104),
    [anon_sym_CombustionInput] = ACTIONS(104),
    [anon_sym_CombustionInput2] = ACTIONS(104),
    [anon_sym_CombustionLimiter] = ACTIONS(104),
    [anon_sym_CombustionOutput] = ACTIONS(104),
    [anon_sym_CombustionOutput2] = ACTIONS(104),
    [anon_sym_CompletionRatio] = ACTIONS(104),
    [anon_sym_ContactTypeId] = ACTIONS(104),
    [anon_sym_CurrentCode] = ACTIONS(104),
    [anon_sym_CurrentResearchPodType] = ACTIONS(104),
    [anon_sym_Density] = ACTIONS(104),
    [anon_sym_DestinationCode] = ACTIONS(104),
    [anon_sym_Discover] = ACTIONS(104),
    [anon_sym_DistanceAu] = ACTIONS(104),
    [anon_sym_DistanceKm] = ACTIONS(104),
    [anon_sym_DrillCondition] = ACTIONS(104),
    [anon_sym_DryMass] = ACTIONS(104),
    [anon_sym_Eccentricity] = ACTIONS(104),
    [anon_sym_ElevatorLevel] = ACTIONS(104),
    [anon_sym_ElevatorSpeed] = ACTIONS(104),
    [anon_sym_EntityState] = ACTIONS(104),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(104),
    [anon_sym_Error] = ACTIONS(104),
    [anon_sym_ExhaustVelocity] = ACTIONS(104),
    [anon_sym_ExportCount] = ACTIONS(104),
    [anon_sym_ExportQuantity] = ACTIONS(104),
    [anon_sym_ExportSlotHash] = ACTIONS(104),
    [anon_sym_ExportSlotOccupant] = ACTIONS(104),
    [anon_sym_Filtration] = ACTIONS(104),
    [anon_sym_FlightControlRule] = ACTIONS(104),
    [anon_sym_Flush] = ACTIONS(104),
    [anon_sym_ForceWrite] = ACTIONS(104),
    [anon_sym_ForwardX] = ACTIONS(104),
    [anon_sym_ForwardY] = ACTIONS(104),
    [anon_sym_ForwardZ] = ACTIONS(104),
    [anon_sym_Fuel] = ACTIONS(104),
    [anon_sym_Harvest] = ACTIONS(104),
    [anon_sym_Horizontal] = ACTIONS(104),
    [anon_sym_HorizontalRatio] = ACTIONS(104),
    [anon_sym_Idle] = ACTIONS(104),
    [anon_sym_ImportCount] = ACTIONS(104),
    [anon_sym_ImportQuantity] = ACTIONS(104),
    [anon_sym_ImportSlotHash] = ACTIONS(104),
    [anon_sym_ImportSlotOccupant] = ACTIONS(104),
    [anon_sym_Inclination] = ACTIONS(104),
    [anon_sym_Index] = ACTIONS(104),
    [anon_sym_InterrogationProgress] = ACTIONS(104),
    [anon_sym_LineNumber] = ACTIONS(104),
    [anon_sym_Lock] = ACTIONS(104),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(104),
    [anon_sym_Mass] = ACTIONS(104),
    [anon_sym_Maximum] = ACTIONS(104),
    [anon_sym_MineablesInQueue] = ACTIONS(104),
    [anon_sym_MineablesInVicinity] = ACTIONS(104),
    [anon_sym_MinedQuantity] = ACTIONS(104),
    [anon_sym_MinimumWattsToContact] = ACTIONS(104),
    [anon_sym_Mode] = ACTIONS(104),
    [anon_sym_NavPoints] = ACTIONS(104),
    [anon_sym_NextWeatherEventTime] = ACTIONS(104),
    [anon_sym_None] = ACTIONS(104),
    [anon_sym_On] = ACTIONS(104),
    [anon_sym_Open] = ACTIONS(104),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(104),
    [anon_sym_OrbitPeriod] = ACTIONS(104),
    [anon_sym_Orientation] = ACTIONS(104),
    [anon_sym_Output] = ACTIONS(104),
    [anon_sym_PassedMoles] = ACTIONS(104),
    [anon_sym_Plant] = ACTIONS(104),
    [anon_sym_PlantEfficiency1] = ACTIONS(104),
    [anon_sym_PlantEfficiency2] = ACTIONS(104),
    [anon_sym_PlantEfficiency3] = ACTIONS(104),
    [anon_sym_PlantEfficiency4] = ACTIONS(104),
    [anon_sym_PlantGrowth1] = ACTIONS(104),
    [anon_sym_PlantGrowth2] = ACTIONS(104),
    [anon_sym_PlantGrowth3] = ACTIONS(104),
    [anon_sym_PlantGrowth4] = ACTIONS(104),
    [anon_sym_PlantHash1] = ACTIONS(104),
    [anon_sym_PlantHash2] = ACTIONS(104),
    [anon_sym_PlantHash3] = ACTIONS(104),
    [anon_sym_PlantHash4] = ACTIONS(104),
    [anon_sym_PlantHealth1] = ACTIONS(104),
    [anon_sym_PlantHealth2] = ACTIONS(104),
    [anon_sym_PlantHealth3] = ACTIONS(104),
    [anon_sym_PlantHealth4] = ACTIONS(104),
    [anon_sym_PositionX] = ACTIONS(104),
    [anon_sym_PositionY] = ACTIONS(104),
    [anon_sym_PositionZ] = ACTIONS(104),
    [anon_sym_Power] = ACTIONS(104),
    [anon_sym_PowerActual] = ACTIONS(104),
    [anon_sym_PowerGeneration] = ACTIONS(104),
    [anon_sym_PowerPotential] = ACTIONS(104),
    [anon_sym_PowerRequired] = ACTIONS(104),
    [anon_sym_PrefabHash] = ACTIONS(104),
    [anon_sym_Pressure] = ACTIONS(104),
    [anon_sym_PressureEfficiency] = ACTIONS(104),
    [anon_sym_PressureExternal] = ACTIONS(104),
    [anon_sym_PressureInput] = ACTIONS(104),
    [anon_sym_PressureInput2] = ACTIONS(104),
    [anon_sym_PressureInternal] = ACTIONS(104),
    [anon_sym_PressureOutput] = ACTIONS(104),
    [anon_sym_PressureOutput2] = ACTIONS(104),
    [anon_sym_PressureSetting] = ACTIONS(104),
    [anon_sym_Progress] = ACTIONS(104),
    [anon_sym_Quantity] = ACTIONS(104),
    [anon_sym_Ratio] = ACTIONS(104),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(104),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(104),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(104),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(104),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(104),
    [anon_sym_RatioHydrogen] = ACTIONS(104),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(104),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(104),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(104),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(104),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(104),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(104),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(104),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(104),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(104),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(104),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(104),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(104),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(104),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(104),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(104),
    [anon_sym_RatioNitrogen] = ACTIONS(104),
    [anon_sym_RatioNitrogenInput] = ACTIONS(104),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(104),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(104),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(104),
    [anon_sym_RatioNitrousOxide] = ACTIONS(104),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(104),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(104),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(104),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(104),
    [anon_sym_RatioOxygen] = ACTIONS(104),
    [anon_sym_RatioOxygenInput] = ACTIONS(104),
    [anon_sym_RatioOxygenInput2] = ACTIONS(104),
    [anon_sym_RatioOxygenOutput] = ACTIONS(104),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(104),
    [anon_sym_RatioPollutant] = ACTIONS(104),
    [anon_sym_RatioPollutantInput] = ACTIONS(104),
    [anon_sym_RatioPollutantInput2] = ACTIONS(104),
    [anon_sym_RatioPollutantOutput] = ACTIONS(104),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(104),
    [anon_sym_RatioPollutedWater] = ACTIONS(104),
    [anon_sym_RatioSteam] = ACTIONS(104),
    [anon_sym_RatioSteamInput] = ACTIONS(104),
    [anon_sym_RatioSteamInput2] = ACTIONS(104),
    [anon_sym_RatioSteamOutput] = ACTIONS(104),
    [anon_sym_RatioSteamOutput2] = ACTIONS(104),
    [anon_sym_RatioVolatiles] = ACTIONS(104),
    [anon_sym_RatioVolatilesInput] = ACTIONS(104),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(104),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(104),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(104),
    [anon_sym_RatioWater] = ACTIONS(104),
    [anon_sym_RatioWaterInput] = ACTIONS(104),
    [anon_sym_RatioWaterInput2] = ACTIONS(104),
    [anon_sym_RatioWaterOutput] = ACTIONS(104),
    [anon_sym_RatioWaterOutput2] = ACTIONS(104),
    [anon_sym_ReEntryAltitude] = ACTIONS(104),
    [anon_sym_Reagents] = ACTIONS(104),
    [anon_sym_RecipeHash] = ACTIONS(104),
    [anon_sym_ReferenceId] = ACTIONS(104),
    [anon_sym_RequestHash] = ACTIONS(104),
    [anon_sym_RequiredPower] = ACTIONS(104),
    [anon_sym_ReturnFuelCost] = ACTIONS(104),
    [anon_sym_Richness] = ACTIONS(104),
    [anon_sym_Rpm] = ACTIONS(104),
    [anon_sym_SemiMajorAxis] = ACTIONS(104),
    [anon_sym_Setting] = ACTIONS(104),
    [anon_sym_SettingInput] = ACTIONS(104),
    [anon_sym_SettingOutput] = ACTIONS(104),
    [anon_sym_SignalID] = ACTIONS(104),
    [anon_sym_SignalStrength] = ACTIONS(104),
    [anon_sym_Sites] = ACTIONS(104),
    [anon_sym_Size] = ACTIONS(104),
    [anon_sym_SizeX] = ACTIONS(104),
    [anon_sym_SizeY] = ACTIONS(104),
    [anon_sym_SizeZ] = ACTIONS(104),
    [anon_sym_SolarAngle] = ACTIONS(104),
    [anon_sym_SolarIrradiance] = ACTIONS(104),
    [anon_sym_SoundAlert] = ACTIONS(104),
    [anon_sym_Stress] = ACTIONS(104),
    [anon_sym_Survey] = ACTIONS(104),
    [anon_sym_TargetPadIndex] = ACTIONS(104),
    [anon_sym_TargetX] = ACTIONS(104),
    [anon_sym_TargetY] = ACTIONS(104),
    [anon_sym_TargetZ] = ACTIONS(104),
    [anon_sym_Temperature] = ACTIONS(104),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(104),
    [anon_sym_TemperatureExternal] = ACTIONS(104),
    [anon_sym_TemperatureInput] = ACTIONS(104),
    [anon_sym_TemperatureInput2] = ACTIONS(104),
    [anon_sym_TemperatureOutput] = ACTIONS(104),
    [anon_sym_TemperatureOutput2] = ACTIONS(104),
    [anon_sym_TemperatureSetting] = ACTIONS(104),
    [anon_sym_Throttle] = ACTIONS(104),
    [anon_sym_Thrust] = ACTIONS(104),
    [anon_sym_ThrustToWeight] = ACTIONS(104),
    [anon_sym_Time] = ACTIONS(104),
    [anon_sym_TimeToDestination] = ACTIONS(104),
    [anon_sym_TotalMoles] = ACTIONS(104),
    [anon_sym_TotalMolesInput] = ACTIONS(104),
    [anon_sym_TotalMolesInput2] = ACTIONS(104),
    [anon_sym_TotalMolesOutput] = ACTIONS(104),
    [anon_sym_TotalMolesOutput2] = ACTIONS(104),
    [anon_sym_TotalQuantity] = ACTIONS(104),
    [anon_sym_TrueAnomaly] = ACTIONS(104),
    [anon_sym_VelocityMagnitude] = ACTIONS(104),
    [anon_sym_VelocityRelativeX] = ACTIONS(104),
    [anon_sym_VelocityRelativeY] = ACTIONS(104),
    [anon_sym_VelocityRelativeZ] = ACTIONS(104),
    [anon_sym_VelocityX] = ACTIONS(104),
    [anon_sym_VelocityY] = ACTIONS(104),
    [anon_sym_VelocityZ] = ACTIONS(104),
    [anon_sym_Vertical] = ACTIONS(104),
    [anon_sym_VerticalRatio] = ACTIONS(104),
    [anon_sym_Volume] = ACTIONS(104),
    [anon_sym_VolumeOfLiquid] = ACTIONS(104),
    [anon_sym_WattsReachingContact] = ACTIONS(104),
    [anon_sym_Weight] = ACTIONS(104),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(104),
    [anon_sym_ChargeRatio] = ACTIONS(104),
    [anon_sym_Class] = ACTIONS(104),
    [anon_sym_Damage] = ACTIONS(104),
    [anon_sym_Efficiency] = ACTIONS(104),
    [anon_sym_FilterType] = ACTIONS(104),
    [anon_sym_Growth] = ACTIONS(104),
    [anon_sym_Health] = ACTIONS(104),
    [anon_sym_Mature] = ACTIONS(104),
    [anon_sym_MaxQuantity] = ACTIONS(104),
    [anon_sym_OccupantHash] = ACTIONS(104),
    [anon_sym_Occupied] = ACTIONS(104),
    [anon_sym_PressureAir] = ACTIONS(104),
    [anon_sym_PressureWaste] = ACTIONS(104),
    [anon_sym_Seeding] = ACTIONS(104),
    [anon_sym_SortingClass] = ACTIONS(104),
    [anon_sym_Average] = ACTIONS(104),
    [anon_sym_Minimum] = ACTIONS(104),
    [anon_sym_Sum] = ACTIONS(104),
    [anon_sym_Contents] = ACTIONS(104),
    [anon_sym_Recipe] = ACTIONS(104),
    [anon_sym_Required] = ACTIONS(104),
    [anon_sym_TotalContents] = ACTIONS(104),
    [sym_enum] = ACTIONS(108),
    [sym_deprecated] = ACTIONS(104),
  },
  [8] = {
    [sym_identifier] = ACTIONS(110),
    [anon_sym_LF] = ACTIONS(112),
    [anon_sym_CR_LF] = ACTIONS(112),
    [anon_sym_CR] = ACTIONS(110),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(112),
    [sym_register] = ACTIONS(112),
    [sym_device] = ACTIONS(112),
    [anon_sym_nan] = ACTIONS(110),
    [anon_sym_pinf] = ACTIONS(110),
    [anon_sym_ninf] = ACTIONS(110),
    [anon_sym_pi] = ACTIONS(110),
    [anon_sym_deg2rad] = ACTIONS(110),
    [anon_sym_rad2deg] = ACTIONS(110),
    [anon_sym_epsilon] = ACTIONS(110),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(112),
    [aux_sym_number_token1] = ACTIONS(112),
    [anon_sym_Acceleration] = ACTIONS(110),
    [anon_sym_Activate] = ACTIONS(110),
    [anon_sym_AirRelease] = ACTIONS(110),
    [anon_sym_AlignmentError] = ACTIONS(110),
    [anon_sym_Apex] = ACTIONS(110),
    [anon_sym_AutoLand] = ACTIONS(110),
    [anon_sym_AutoShutOff] = ACTIONS(110),
    [anon_sym_Bpm] = ACTIONS(110),
    [anon_sym_BurnTimeRemaining] = ACTIONS(110),
    [anon_sym_CelestialHash] = ACTIONS(110),
    [anon_sym_CelestialParentHash] = ACTIONS(110),
    [anon_sym_Channel0] = ACTIONS(110),
    [anon_sym_Channel1] = ACTIONS(110),
    [anon_sym_Channel2] = ACTIONS(110),
    [anon_sym_Channel3] = ACTIONS(110),
    [anon_sym_Channel4] = ACTIONS(110),
    [anon_sym_Channel5] = ACTIONS(110),
    [anon_sym_Channel6] = ACTIONS(110),
    [anon_sym_Channel7] = ACTIONS(110),
    [anon_sym_Charge] = ACTIONS(110),
    [anon_sym_Chart] = ACTIONS(110),
    [anon_sym_ChartedNavPoints] = ACTIONS(110),
    [anon_sym_ClearMemory] = ACTIONS(110),
    [anon_sym_CollectableGoods] = ACTIONS(110),
    [anon_sym_Color] = ACTIONS(110),
    [anon_sym_Combustion] = ACTIONS(110),
    [anon_sym_CombustionInput] = ACTIONS(110),
    [anon_sym_CombustionInput2] = ACTIONS(110),
    [anon_sym_CombustionLimiter] = ACTIONS(110),
    [anon_sym_CombustionOutput] = ACTIONS(110),
    [anon_sym_CombustionOutput2] = ACTIONS(110),
    [anon_sym_CompletionRatio] = ACTIONS(110),
    [anon_sym_ContactTypeId] = ACTIONS(110),
    [anon_sym_CurrentCode] = ACTIONS(110),
    [anon_sym_CurrentResearchPodType] = ACTIONS(110),
    [anon_sym_Density] = ACTIONS(110),
    [anon_sym_DestinationCode] = ACTIONS(110),
    [anon_sym_Discover] = ACTIONS(110),
    [anon_sym_DistanceAu] = ACTIONS(110),
    [anon_sym_DistanceKm] = ACTIONS(110),
    [anon_sym_DrillCondition] = ACTIONS(110),
    [anon_sym_DryMass] = ACTIONS(110),
    [anon_sym_Eccentricity] = ACTIONS(110),
    [anon_sym_ElevatorLevel] = ACTIONS(110),
    [anon_sym_ElevatorSpeed] = ACTIONS(110),
    [anon_sym_EntityState] = ACTIONS(110),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(110),
    [anon_sym_Error] = ACTIONS(110),
    [anon_sym_ExhaustVelocity] = ACTIONS(110),
    [anon_sym_ExportCount] = ACTIONS(110),
    [anon_sym_ExportQuantity] = ACTIONS(110),
    [anon_sym_ExportSlotHash] = ACTIONS(110),
    [anon_sym_ExportSlotOccupant] = ACTIONS(110),
    [anon_sym_Filtration] = ACTIONS(110),
    [anon_sym_FlightControlRule] = ACTIONS(110),
    [anon_sym_Flush] = ACTIONS(110),
    [anon_sym_ForceWrite] = ACTIONS(110),
    [anon_sym_ForwardX] = ACTIONS(110),
    [anon_sym_ForwardY] = ACTIONS(110),
    [anon_sym_ForwardZ] = ACTIONS(110),
    [anon_sym_Fuel] = ACTIONS(110),
    [anon_sym_Harvest] = ACTIONS(110),
    [anon_sym_Horizontal] = ACTIONS(110),
    [anon_sym_HorizontalRatio] = ACTIONS(110),
    [anon_sym_Idle] = ACTIONS(110),
    [anon_sym_ImportCount] = ACTIONS(110),
    [anon_sym_ImportQuantity] = ACTIONS(110),
    [anon_sym_ImportSlotHash] = ACTIONS(110),
    [anon_sym_ImportSlotOccupant] = ACTIONS(110),
    [anon_sym_Inclination] = ACTIONS(110),
    [anon_sym_Index] = ACTIONS(110),
    [anon_sym_InterrogationProgress] = ACTIONS(110),
    [anon_sym_LineNumber] = ACTIONS(110),
    [anon_sym_Lock] = ACTIONS(110),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(110),
    [anon_sym_Mass] = ACTIONS(110),
    [anon_sym_Maximum] = ACTIONS(110),
    [anon_sym_MineablesInQueue] = ACTIONS(110),
    [anon_sym_MineablesInVicinity] = ACTIONS(110),
    [anon_sym_MinedQuantity] = ACTIONS(110),
    [anon_sym_MinimumWattsToContact] = ACTIONS(110),
    [anon_sym_Mode] = ACTIONS(110),
    [anon_sym_NavPoints] = ACTIONS(110),
    [anon_sym_NextWeatherEventTime] = ACTIONS(110),
    [anon_sym_None] = ACTIONS(110),
    [anon_sym_On] = ACTIONS(110),
    [anon_sym_Open] = ACTIONS(110),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(110),
    [anon_sym_OrbitPeriod] = ACTIONS(110),
    [anon_sym_Orientation] = ACTIONS(110),
    [anon_sym_Output] = ACTIONS(110),
    [anon_sym_PassedMoles] = ACTIONS(110),
    [anon_sym_Plant] = ACTIONS(110),
    [anon_sym_PlantEfficiency1] = ACTIONS(110),
    [anon_sym_PlantEfficiency2] = ACTIONS(110),
    [anon_sym_PlantEfficiency3] = ACTIONS(110),
    [anon_sym_PlantEfficiency4] = ACTIONS(110),
    [anon_sym_PlantGrowth1] = ACTIONS(110),
    [anon_sym_PlantGrowth2] = ACTIONS(110),
    [anon_sym_PlantGrowth3] = ACTIONS(110),
    [anon_sym_PlantGrowth4] = ACTIONS(110),
    [anon_sym_PlantHash1] = ACTIONS(110),
    [anon_sym_PlantHash2] = ACTIONS(110),
    [anon_sym_PlantHash3] = ACTIONS(110),
    [anon_sym_PlantHash4] = ACTIONS(110),
    [anon_sym_PlantHealth1] = ACTIONS(110),
    [anon_sym_PlantHealth2] = ACTIONS(110),
    [anon_sym_PlantHealth3] = ACTIONS(110),
    [anon_sym_PlantHealth4] = ACTIONS(110),
    [anon_sym_PositionX] = ACTIONS(110),
    [anon_sym_PositionY] = ACTIONS(110),
    [anon_sym_PositionZ] = ACTIONS(110),
    [anon_sym_Power] = ACTIONS(110),
    [anon_sym_PowerActual] = ACTIONS(110),
    [anon_sym_PowerGeneration] = ACTIONS(110),
    [anon_sym_PowerPotential] = ACTIONS(110),
    [anon_sym_PowerRequired] = ACTIONS(110),
    [anon_sym_PrefabHash] = ACTIONS(110),
    [anon_sym_Pressure] = ACTIONS(110),
    [anon_sym_PressureEfficiency] = ACTIONS(110),
    [anon_sym_PressureExternal] = ACTIONS(110),
    [anon_sym_PressureInput] = ACTIONS(110),
    [anon_sym_PressureInput2] = ACTIONS(110),
    [anon_sym_PressureInternal] = ACTIONS(110),
    [anon_sym_PressureOutput] = ACTIONS(110),
    [anon_sym_PressureOutput2] = ACTIONS(110),
    [anon_sym_PressureSetting] = ACTIONS(110),
    [anon_sym_Progress] = ACTIONS(110),
    [anon_sym_Quantity] = ACTIONS(110),
    [anon_sym_Ratio] = ACTIONS(110),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(110),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(110),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(110),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(110),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(110),
    [anon_sym_RatioHydrogen] = ACTIONS(110),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(110),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(110),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(110),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(110),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(110),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(110),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(110),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(110),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(110),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(110),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(110),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(110),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(110),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(110),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(110),
    [anon_sym_RatioNitrogen] = ACTIONS(110),
    [anon_sym_RatioNitrogenInput] = ACTIONS(110),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(110),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(110),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(110),
    [anon_sym_RatioNitrousOxide] = ACTIONS(110),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(110),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(110),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(110),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(110),
    [anon_sym_RatioOxygen] = ACTIONS(110),
    [anon_sym_RatioOxygenInput] = ACTIONS(110),
    [anon_sym_RatioOxygenInput2] = ACTIONS(110),
    [anon_sym_RatioOxygenOutput] = ACTIONS(110),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(110),
    [anon_sym_RatioPollutant] = ACTIONS(110),
    [anon_sym_RatioPollutantInput] = ACTIONS(110),
    [anon_sym_RatioPollutantInput2] = ACTIONS(110),
    [anon_sym_RatioPollutantOutput] = ACTIONS(110),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(110),
    [anon_sym_RatioPollutedWater] = ACTIONS(110),
    [anon_sym_RatioSteam] = ACTIONS(110),
    [anon_sym_RatioSteamInput] = ACTIONS(110),
    [anon_sym_RatioSteamInput2] = ACTIONS(110),
    [anon_sym_RatioSteamOutput] = ACTIONS(110),
    [anon_sym_RatioSteamOutput2] = ACTIONS(110),
    [anon_sym_RatioVolatiles] = ACTIONS(110),
    [anon_sym_RatioVolatilesInput] = ACTIONS(110),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(110),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(110),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(110),
    [anon_sym_RatioWater] = ACTIONS(110),
    [anon_sym_RatioWaterInput] = ACTIONS(110),
    [anon_sym_RatioWaterInput2] = ACTIONS(110),
    [anon_sym_RatioWaterOutput] = ACTIONS(110),
    [anon_sym_RatioWaterOutput2] = ACTIONS(110),
    [anon_sym_ReEntryAltitude] = ACTIONS(110),
    [anon_sym_Reagents] = ACTIONS(110),
    [anon_sym_RecipeHash] = ACTIONS(110),
    [anon_sym_ReferenceId] = ACTIONS(110),
    [anon_sym_RequestHash] = ACTIONS(110),
    [anon_sym_RequiredPower] = ACTIONS(110),
    [anon_sym_ReturnFuelCost] = ACTIONS(110),
    [anon_sym_Richness] = ACTIONS(110),
    [anon_sym_Rpm] = ACTIONS(110),
    [anon_sym_SemiMajorAxis] = ACTIONS(110),
    [anon_sym_Setting] = ACTIONS(110),
    [anon_sym_SettingInput] = ACTIONS(110),
    [anon_sym_SettingOutput] = ACTIONS(110),
    [anon_sym_SignalID] = ACTIONS(110),
    [anon_sym_SignalStrength] = ACTIONS(110),
    [anon_sym_Sites] = ACTIONS(110),
    [anon_sym_Size] = ACTIONS(110),
    [anon_sym_SizeX] = ACTIONS(110),
    [anon_sym_SizeY] = ACTIONS(110),
    [anon_sym_SizeZ] = ACTIONS(110),
    [anon_sym_SolarAngle] = ACTIONS(110),
    [anon_sym_SolarIrradiance] = ACTIONS(110),
    [anon_sym_SoundAlert] = ACTIONS(110),
    [anon_sym_Stress] = ACTIONS(110),
    [anon_sym_Survey] = ACTIONS(110),
    [anon_sym_TargetPadIndex] = ACTIONS(110),
    [anon_sym_TargetX] = ACTIONS(110),
    [anon_sym_TargetY] = ACTIONS(110),
    [anon_sym_TargetZ] = ACTIONS(110),
    [anon_sym_Temperature] = ACTIONS(110),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(110),
    [anon_sym_TemperatureExternal] = ACTIONS(110),
    [anon_sym_TemperatureInput] = ACTIONS(110),
    [anon_sym_TemperatureInput2] = ACTIONS(110),
    [anon_sym_TemperatureOutput] = ACTIONS(110),
    [anon_sym_TemperatureOutput2] = ACTIONS(110),
    [anon_sym_TemperatureSetting] = ACTIONS(110),
    [anon_sym_Throttle] = ACTIONS(110),
    [anon_sym_Thrust] = ACTIONS(110),
    [anon_sym_ThrustToWeight] = ACTIONS(110),
    [anon_sym_Time] = ACTIONS(110),
    [anon_sym_TimeToDestination] = ACTIONS(110),
    [anon_sym_TotalMoles] = ACTIONS(110),
    [anon_sym_TotalMolesInput] = ACTIONS(110),
    [anon_sym_TotalMolesInput2] = ACTIONS(110),
    [anon_sym_TotalMolesOutput] = ACTIONS(110),
    [anon_sym_TotalMolesOutput2] = ACTIONS(110),
    [anon_sym_TotalQuantity] = ACTIONS(110),
    [anon_sym_TrueAnomaly] = ACTIONS(110),
    [anon_sym_VelocityMagnitude] = ACTIONS(110),
    [anon_sym_VelocityRelativeX] = ACTIONS(110),
    [anon_sym_VelocityRelativeY] = ACTIONS(110),
    [anon_sym_VelocityRelativeZ] = ACTIONS(110),
    [anon_sym_VelocityX] = ACTIONS(110),
    [anon_sym_VelocityY] = ACTIONS(110),
    [anon_sym_VelocityZ] = ACTIONS(110),
    [anon_sym_Vertical] = ACTIONS(110),
    [anon_sym_VerticalRatio] = ACTIONS(110),
    [anon_sym_Volume] = ACTIONS(110),
    [anon_sym_VolumeOfLiquid] = ACTIONS(110),
    [anon_sym_WattsReachingContact] = ACTIONS(110),
    [anon_sym_Weight] = ACTIONS(110),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(110),
    [anon_sym_ChargeRatio] = ACTIONS(110),
    [anon_sym_Class] = ACTIONS(110),
    [anon_sym_Damage] = ACTIONS(110),
    [anon_sym_Efficiency] = ACTIONS(110),
    [anon_sym_FilterType] = ACTIONS(110),
    [anon_sym_Growth] = ACTIONS(110),
    [anon_sym_Health] = ACTIONS(110),
    [anon_sym_Mature] = ACTIONS(110),
    [anon_sym_MaxQuantity] = ACTIONS(110),
    [anon_sym_OccupantHash] = ACTIONS(110),
    [anon_sym_Occupied] = ACTIONS(110),
    [anon_sym_PressureAir] = ACTIONS(110),
    [anon_sym_PressureWaste] = ACTIONS(110),
    [anon_sym_Seeding] = ACTIONS(110),
    [anon_sym_SortingClass] = ACTIONS(110),
    [anon_sym_Average] = ACTIONS(110),
    [anon_sym_Minimum] = ACTIONS(110),
    [anon_sym_Sum] = ACTIONS(110),
    [anon_sym_Contents] = ACTIONS(110),
    [anon_sym_Recipe] = ACTIONS(110),
    [anon_sym_Required] = ACTIONS(110),
    [anon_sym_TotalContents] = ACTIONS(110),
    [sym_enum] = ACTIONS(112),
    [sym_deprecated] = ACTIONS(110),
  },
  [9] = {
    [sym_identifier] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_CR_LF] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(116),
    [sym_register] = ACTIONS(116),
    [sym_device] = ACTIONS(116),
    [anon_sym_nan] = ACTIONS(114),
    [anon_sym_pinf] = ACTIONS(114),
    [anon_sym_ninf] = ACTIONS(114),
    [anon_sym_pi] = ACTIONS(114),
    [anon_sym_deg2rad] = ACTIONS(114),
    [anon_sym_rad2deg] = ACTIONS(114),
    [anon_sym_epsilon] = ACTIONS(114),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(116),
    [anon_sym_Acceleration] = ACTIONS(114),
    [anon_sym_Activate] = ACTIONS(114),
    [anon_sym_AirRelease] = ACTIONS(114),
    [anon_sym_AlignmentError] = ACTIONS(114),
    [anon_sym_Apex] = ACTIONS(114),
    [anon_sym_AutoLand] = ACTIONS(114),
    [anon_sym_AutoShutOff] = ACTIONS(114),
    [anon_sym_Bpm] = ACTIONS(114),
    [anon_sym_BurnTimeRemaining] = ACTIONS(114),
    [anon_sym_CelestialHash] = ACTIONS(114),
    [anon_sym_CelestialParentHash] = ACTIONS(114),
    [anon_sym_Channel0] = ACTIONS(114),
    [anon_sym_Channel1] = ACTIONS(114),
    [anon_sym_Channel2] = ACTIONS(114),
    [anon_sym_Channel3] = ACTIONS(114),
    [anon_sym_Channel4] = ACTIONS(114),
    [anon_sym_Channel5] = ACTIONS(114),
    [anon_sym_Channel6] = ACTIONS(114),
    [anon_sym_Channel7] = ACTIONS(114),
    [anon_sym_Charge] = ACTIONS(114),
    [anon_sym_Chart] = ACTIONS(114),
    [anon_sym_ChartedNavPoints] = ACTIONS(114),
    [anon_sym_ClearMemory] = ACTIONS(114),
    [anon_sym_CollectableGoods] = ACTIONS(114),
    [anon_sym_Color] = ACTIONS(114),
    [anon_sym_Combustion] = ACTIONS(114),
    [anon_sym_CombustionInput] = ACTIONS(114),
    [anon_sym_CombustionInput2] = ACTIONS(114),
    [anon_sym_CombustionLimiter] = ACTIONS(114),
    [anon_sym_CombustionOutput] = ACTIONS(114),
    [anon_sym_CombustionOutput2] = ACTIONS(114),
    [anon_sym_CompletionRatio] = ACTIONS(114),
    [anon_sym_ContactTypeId] = ACTIONS(114),
    [anon_sym_CurrentCode] = ACTIONS(114),
    [anon_sym_CurrentResearchPodType] = ACTIONS(114),
    [anon_sym_Density] = ACTIONS(114),
    [anon_sym_DestinationCode] = ACTIONS(114),
    [anon_sym_Discover] = ACTIONS(114),
    [anon_sym_DistanceAu] = ACTIONS(114),
    [anon_sym_DistanceKm] = ACTIONS(114),
    [anon_sym_DrillCondition] = ACTIONS(114),
    [anon_sym_DryMass] = ACTIONS(114),
    [anon_sym_Eccentricity] = ACTIONS(114),
    [anon_sym_ElevatorLevel] = ACTIONS(114),
    [anon_sym_ElevatorSpeed] = ACTIONS(114),
    [anon_sym_EntityState] = ACTIONS(114),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(114),
    [anon_sym_Error] = ACTIONS(114),
    [anon_sym_ExhaustVelocity] = ACTIONS(114),
    [anon_sym_ExportCount] = ACTIONS(114),
    [anon_sym_ExportQuantity] = ACTIONS(114),
    [anon_sym_ExportSlotHash] = ACTIONS(114),
    [anon_sym_ExportSlotOccupant] = ACTIONS(114),
    [anon_sym_Filtration] = ACTIONS(114),
    [anon_sym_FlightControlRule] = ACTIONS(114),
    [anon_sym_Flush] = ACTIONS(114),
    [anon_sym_ForceWrite] = ACTIONS(114),
    [anon_sym_ForwardX] = ACTIONS(114),
    [anon_sym_ForwardY] = ACTIONS(114),
    [anon_sym_ForwardZ] = ACTIONS(114),
    [anon_sym_Fuel] = ACTIONS(114),
    [anon_sym_Harvest] = ACTIONS(114),
    [anon_sym_Horizontal] = ACTIONS(114),
    [anon_sym_HorizontalRatio] = ACTIONS(114),
    [anon_sym_Idle] = ACTIONS(114),
    [anon_sym_ImportCount] = ACTIONS(114),
    [anon_sym_ImportQuantity] = ACTIONS(114),
    [anon_sym_ImportSlotHash] = ACTIONS(114),
    [anon_sym_ImportSlotOccupant] = ACTIONS(114),
    [anon_sym_Inclination] = ACTIONS(114),
    [anon_sym_Index] = ACTIONS(114),
    [anon_sym_InterrogationProgress] = ACTIONS(114),
    [anon_sym_LineNumber] = ACTIONS(114),
    [anon_sym_Lock] = ACTIONS(114),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(114),
    [anon_sym_Mass] = ACTIONS(114),
    [anon_sym_Maximum] = ACTIONS(114),
    [anon_sym_MineablesInQueue] = ACTIONS(114),
    [anon_sym_MineablesInVicinity] = ACTIONS(114),
    [anon_sym_MinedQuantity] = ACTIONS(114),
    [anon_sym_MinimumWattsToContact] = ACTIONS(114),
    [anon_sym_Mode] = ACTIONS(114),
    [anon_sym_NavPoints] = ACTIONS(114),
    [anon_sym_NextWeatherEventTime] = ACTIONS(114),
    [anon_sym_None] = ACTIONS(114),
    [anon_sym_On] = ACTIONS(114),
    [anon_sym_Open] = ACTIONS(114),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(114),
    [anon_sym_OrbitPeriod] = ACTIONS(114),
    [anon_sym_Orientation] = ACTIONS(114),
    [anon_sym_Output] = ACTIONS(114),
    [anon_sym_PassedMoles] = ACTIONS(114),
    [anon_sym_Plant] = ACTIONS(114),
    [anon_sym_PlantEfficiency1] = ACTIONS(114),
    [anon_sym_PlantEfficiency2] = ACTIONS(114),
    [anon_sym_PlantEfficiency3] = ACTIONS(114),
    [anon_sym_PlantEfficiency4] = ACTIONS(114),
    [anon_sym_PlantGrowth1] = ACTIONS(114),
    [anon_sym_PlantGrowth2] = ACTIONS(114),
    [anon_sym_PlantGrowth3] = ACTIONS(114),
    [anon_sym_PlantGrowth4] = ACTIONS(114),
    [anon_sym_PlantHash1] = ACTIONS(114),
    [anon_sym_PlantHash2] = ACTIONS(114),
    [anon_sym_PlantHash3] = ACTIONS(114),
    [anon_sym_PlantHash4] = ACTIONS(114),
    [anon_sym_PlantHealth1] = ACTIONS(114),
    [anon_sym_PlantHealth2] = ACTIONS(114),
    [anon_sym_PlantHealth3] = ACTIONS(114),
    [anon_sym_PlantHealth4] = ACTIONS(114),
    [anon_sym_PositionX] = ACTIONS(114),
    [anon_sym_PositionY] = ACTIONS(114),
    [anon_sym_PositionZ] = ACTIONS(114),
    [anon_sym_Power] = ACTIONS(114),
    [anon_sym_PowerActual] = ACTIONS(114),
    [anon_sym_PowerGeneration] = ACTIONS(114),
    [anon_sym_PowerPotential] = ACTIONS(114),
    [anon_sym_PowerRequired] = ACTIONS(114),
    [anon_sym_PrefabHash] = ACTIONS(114),
    [anon_sym_Pressure] = ACTIONS(114),
    [anon_sym_PressureEfficiency] = ACTIONS(114),
    [anon_sym_PressureExternal] = ACTIONS(114),
    [anon_sym_PressureInput] = ACTIONS(114),
    [anon_sym_PressureInput2] = ACTIONS(114),
    [anon_sym_PressureInternal] = ACTIONS(114),
    [anon_sym_PressureOutput] = ACTIONS(114),
    [anon_sym_PressureOutput2] = ACTIONS(114),
    [anon_sym_PressureSetting] = ACTIONS(114),
    [anon_sym_Progress] = ACTIONS(114),
    [anon_sym_Quantity] = ACTIONS(114),
    [anon_sym_Ratio] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrogen] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioOxygen] = ACTIONS(114),
    [anon_sym_RatioOxygenInput] = ACTIONS(114),
    [anon_sym_RatioOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutant] = ACTIONS(114),
    [anon_sym_RatioPollutantInput] = ACTIONS(114),
    [anon_sym_RatioPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutedWater] = ACTIONS(114),
    [anon_sym_RatioSteam] = ACTIONS(114),
    [anon_sym_RatioSteamInput] = ACTIONS(114),
    [anon_sym_RatioSteamInput2] = ACTIONS(114),
    [anon_sym_RatioSteamOutput] = ACTIONS(114),
    [anon_sym_RatioSteamOutput2] = ACTIONS(114),
    [anon_sym_RatioVolatiles] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioWater] = ACTIONS(114),
    [anon_sym_RatioWaterInput] = ACTIONS(114),
    [anon_sym_RatioWaterInput2] = ACTIONS(114),
    [anon_sym_RatioWaterOutput] = ACTIONS(114),
    [anon_sym_RatioWaterOutput2] = ACTIONS(114),
    [anon_sym_ReEntryAltitude] = ACTIONS(114),
    [anon_sym_Reagents] = ACTIONS(114),
    [anon_sym_RecipeHash] = ACTIONS(114),
    [anon_sym_ReferenceId] = ACTIONS(114),
    [anon_sym_RequestHash] = ACTIONS(114),
    [anon_sym_RequiredPower] = ACTIONS(114),
    [anon_sym_ReturnFuelCost] = ACTIONS(114),
    [anon_sym_Richness] = ACTIONS(114),
    [anon_sym_Rpm] = ACTIONS(114),
    [anon_sym_SemiMajorAxis] = ACTIONS(114),
    [anon_sym_Setting] = ACTIONS(114),
    [anon_sym_SettingInput] = ACTIONS(114),
    [anon_sym_SettingOutput] = ACTIONS(114),
    [anon_sym_SignalID] = ACTIONS(114),
    [anon_sym_SignalStrength] = ACTIONS(114),
    [anon_sym_Sites] = ACTIONS(114),
    [anon_sym_Size] = ACTIONS(114),
    [anon_sym_SizeX] = ACTIONS(114),
    [anon_sym_SizeY] = ACTIONS(114),
    [anon_sym_SizeZ] = ACTIONS(114),
    [anon_sym_SolarAngle] = ACTIONS(114),
    [anon_sym_SolarIrradiance] = ACTIONS(114),
    [anon_sym_SoundAlert] = ACTIONS(114),
    [anon_sym_Stress] = ACTIONS(114),
    [anon_sym_Survey] = ACTIONS(114),
    [anon_sym_TargetPadIndex] = ACTIONS(114),
    [anon_sym_TargetX] = ACTIONS(114),
    [anon_sym_TargetY] = ACTIONS(114),
    [anon_sym_TargetZ] = ACTIONS(114),
    [anon_sym_Temperature] = ACTIONS(114),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(114),
    [anon_sym_TemperatureExternal] = ACTIONS(114),
    [anon_sym_TemperatureInput] = ACTIONS(114),
    [anon_sym_TemperatureInput2] = ACTIONS(114),
    [anon_sym_TemperatureOutput] = ACTIONS(114),
    [anon_sym_TemperatureOutput2] = ACTIONS(114),
    [anon_sym_TemperatureSetting] = ACTIONS(114),
    [anon_sym_Throttle] = ACTIONS(114),
    [anon_sym_Thrust] = ACTIONS(114),
    [anon_sym_ThrustToWeight] = ACTIONS(114),
    [anon_sym_Time] = ACTIONS(114),
    [anon_sym_TimeToDestination] = ACTIONS(114),
    [anon_sym_TotalMoles] = ACTIONS(114),
    [anon_sym_TotalMolesInput] = ACTIONS(114),
    [anon_sym_TotalMolesInput2] = ACTIONS(114),
    [anon_sym_TotalMolesOutput] = ACTIONS(114),
    [anon_sym_TotalMolesOutput2] = ACTIONS(114),
    [anon_sym_TotalQuantity] = ACTIONS(114),
    [anon_sym_TrueAnomaly] = ACTIONS(114),
    [anon_sym_VelocityMagnitude] = ACTIONS(114),
    [anon_sym_VelocityRelativeX] = ACTIONS(114),
    [anon_sym_VelocityRelativeY] = ACTIONS(114),
    [anon_sym_VelocityRelativeZ] = ACTIONS(114),
    [anon_sym_VelocityX] = ACTIONS(114),
    [anon_sym_VelocityY] = ACTIONS(114),
    [anon_sym_VelocityZ] = ACTIONS(114),
    [anon_sym_Vertical] = ACTIONS(114),
    [anon_sym_VerticalRatio] = ACTIONS(114),
    [anon_sym_Volume] = ACTIONS(114),
    [anon_sym_VolumeOfLiquid] = ACTIONS(114),
    [anon_sym_WattsReachingContact] = ACTIONS(114),
    [anon_sym_Weight] = ACTIONS(114),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(114),
    [anon_sym_ChargeRatio] = ACTIONS(114),
    [anon_sym_Class] = ACTIONS(114),
    [anon_sym_Damage] = ACTIONS(114),
    [anon_sym_Efficiency] = ACTIONS(114),
    [anon_sym_FilterType] = ACTIONS(114),
    [anon_sym_Growth] = ACTIONS(114),
    [anon_sym_Health] = ACTIONS(114),
    [anon_sym_Mature] = ACTIONS(114),
    [anon_sym_MaxQuantity] = ACTIONS(114),
    [anon_sym_OccupantHash] = ACTIONS(114),
    [anon_sym_Occupied] = ACTIONS(114),
    [anon_sym_PressureAir] = ACTIONS(114),
    [anon_sym_PressureWaste] = ACTIONS(114),
    [anon_sym_Seeding] = ACTIONS(114),
    [anon_sym_SortingClass] = ACTIONS(114),
    [anon_sym_Average] = ACTIONS(114),
    [anon_sym_Minimum] = ACTIONS(114),
    [anon_sym_Sum] = ACTIONS(114),
    [anon_sym_Contents] = ACTIONS(114),
    [anon_sym_Recipe] = ACTIONS(114),
    [anon_sym_Required] = ACTIONS(114),
    [anon_sym_TotalContents] = ACTIONS(114),
    [sym_enum] = ACTIONS(116),
    [sym_deprecated] = ACTIONS(114),
  },
  [10] = {
    [sym_identifier] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_CR_LF] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(116),
    [sym_register] = ACTIONS(116),
    [sym_device] = ACTIONS(116),
    [anon_sym_nan] = ACTIONS(114),
    [anon_sym_pinf] = ACTIONS(114),
    [anon_sym_ninf] = ACTIONS(114),
    [anon_sym_pi] = ACTIONS(114),
    [anon_sym_deg2rad] = ACTIONS(114),
    [anon_sym_rad2deg] = ACTIONS(114),
    [anon_sym_epsilon] = ACTIONS(114),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(116),
    [anon_sym_Acceleration] = ACTIONS(114),
    [anon_sym_Activate] = ACTIONS(114),
    [anon_sym_AirRelease] = ACTIONS(114),
    [anon_sym_AlignmentError] = ACTIONS(114),
    [anon_sym_Apex] = ACTIONS(114),
    [anon_sym_AutoLand] = ACTIONS(114),
    [anon_sym_AutoShutOff] = ACTIONS(114),
    [anon_sym_Bpm] = ACTIONS(114),
    [anon_sym_BurnTimeRemaining] = ACTIONS(114),
    [anon_sym_CelestialHash] = ACTIONS(114),
    [anon_sym_CelestialParentHash] = ACTIONS(114),
    [anon_sym_Channel0] = ACTIONS(114),
    [anon_sym_Channel1] = ACTIONS(114),
    [anon_sym_Channel2] = ACTIONS(114),
    [anon_sym_Channel3] = ACTIONS(114),
    [anon_sym_Channel4] = ACTIONS(114),
    [anon_sym_Channel5] = ACTIONS(114),
    [anon_sym_Channel6] = ACTIONS(114),
    [anon_sym_Channel7] = ACTIONS(114),
    [anon_sym_Charge] = ACTIONS(114),
    [anon_sym_Chart] = ACTIONS(114),
    [anon_sym_ChartedNavPoints] = ACTIONS(114),
    [anon_sym_ClearMemory] = ACTIONS(114),
    [anon_sym_CollectableGoods] = ACTIONS(114),
    [anon_sym_Color] = ACTIONS(114),
    [anon_sym_Combustion] = ACTIONS(114),
    [anon_sym_CombustionInput] = ACTIONS(114),
    [anon_sym_CombustionInput2] = ACTIONS(114),
    [anon_sym_CombustionLimiter] = ACTIONS(114),
    [anon_sym_CombustionOutput] = ACTIONS(114),
    [anon_sym_CombustionOutput2] = ACTIONS(114),
    [anon_sym_CompletionRatio] = ACTIONS(114),
    [anon_sym_ContactTypeId] = ACTIONS(114),
    [anon_sym_CurrentCode] = ACTIONS(114),
    [anon_sym_CurrentResearchPodType] = ACTIONS(114),
    [anon_sym_Density] = ACTIONS(114),
    [anon_sym_DestinationCode] = ACTIONS(114),
    [anon_sym_Discover] = ACTIONS(114),
    [anon_sym_DistanceAu] = ACTIONS(114),
    [anon_sym_DistanceKm] = ACTIONS(114),
    [anon_sym_DrillCondition] = ACTIONS(114),
    [anon_sym_DryMass] = ACTIONS(114),
    [anon_sym_Eccentricity] = ACTIONS(114),
    [anon_sym_ElevatorLevel] = ACTIONS(114),
    [anon_sym_ElevatorSpeed] = ACTIONS(114),
    [anon_sym_EntityState] = ACTIONS(114),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(114),
    [anon_sym_Error] = ACTIONS(114),
    [anon_sym_ExhaustVelocity] = ACTIONS(114),
    [anon_sym_ExportCount] = ACTIONS(114),
    [anon_sym_ExportQuantity] = ACTIONS(114),
    [anon_sym_ExportSlotHash] = ACTIONS(114),
    [anon_sym_ExportSlotOccupant] = ACTIONS(114),
    [anon_sym_Filtration] = ACTIONS(114),
    [anon_sym_FlightControlRule] = ACTIONS(114),
    [anon_sym_Flush] = ACTIONS(114),
    [anon_sym_ForceWrite] = ACTIONS(114),
    [anon_sym_ForwardX] = ACTIONS(114),
    [anon_sym_ForwardY] = ACTIONS(114),
    [anon_sym_ForwardZ] = ACTIONS(114),
    [anon_sym_Fuel] = ACTIONS(114),
    [anon_sym_Harvest] = ACTIONS(114),
    [anon_sym_Horizontal] = ACTIONS(114),
    [anon_sym_HorizontalRatio] = ACTIONS(114),
    [anon_sym_Idle] = ACTIONS(114),
    [anon_sym_ImportCount] = ACTIONS(114),
    [anon_sym_ImportQuantity] = ACTIONS(114),
    [anon_sym_ImportSlotHash] = ACTIONS(114),
    [anon_sym_ImportSlotOccupant] = ACTIONS(114),
    [anon_sym_Inclination] = ACTIONS(114),
    [anon_sym_Index] = ACTIONS(114),
    [anon_sym_InterrogationProgress] = ACTIONS(114),
    [anon_sym_LineNumber] = ACTIONS(114),
    [anon_sym_Lock] = ACTIONS(114),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(114),
    [anon_sym_Mass] = ACTIONS(114),
    [anon_sym_Maximum] = ACTIONS(114),
    [anon_sym_MineablesInQueue] = ACTIONS(114),
    [anon_sym_MineablesInVicinity] = ACTIONS(114),
    [anon_sym_MinedQuantity] = ACTIONS(114),
    [anon_sym_MinimumWattsToContact] = ACTIONS(114),
    [anon_sym_Mode] = ACTIONS(114),
    [anon_sym_NavPoints] = ACTIONS(114),
    [anon_sym_NextWeatherEventTime] = ACTIONS(114),
    [anon_sym_None] = ACTIONS(114),
    [anon_sym_On] = ACTIONS(114),
    [anon_sym_Open] = ACTIONS(114),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(114),
    [anon_sym_OrbitPeriod] = ACTIONS(114),
    [anon_sym_Orientation] = ACTIONS(114),
    [anon_sym_Output] = ACTIONS(114),
    [anon_sym_PassedMoles] = ACTIONS(114),
    [anon_sym_Plant] = ACTIONS(114),
    [anon_sym_PlantEfficiency1] = ACTIONS(114),
    [anon_sym_PlantEfficiency2] = ACTIONS(114),
    [anon_sym_PlantEfficiency3] = ACTIONS(114),
    [anon_sym_PlantEfficiency4] = ACTIONS(114),
    [anon_sym_PlantGrowth1] = ACTIONS(114),
    [anon_sym_PlantGrowth2] = ACTIONS(114),
    [anon_sym_PlantGrowth3] = ACTIONS(114),
    [anon_sym_PlantGrowth4] = ACTIONS(114),
    [anon_sym_PlantHash1] = ACTIONS(114),
    [anon_sym_PlantHash2] = ACTIONS(114),
    [anon_sym_PlantHash3] = ACTIONS(114),
    [anon_sym_PlantHash4] = ACTIONS(114),
    [anon_sym_PlantHealth1] = ACTIONS(114),
    [anon_sym_PlantHealth2] = ACTIONS(114),
    [anon_sym_PlantHealth3] = ACTIONS(114),
    [anon_sym_PlantHealth4] = ACTIONS(114),
    [anon_sym_PositionX] = ACTIONS(114),
    [anon_sym_PositionY] = ACTIONS(114),
    [anon_sym_PositionZ] = ACTIONS(114),
    [anon_sym_Power] = ACTIONS(114),
    [anon_sym_PowerActual] = ACTIONS(114),
    [anon_sym_PowerGeneration] = ACTIONS(114),
    [anon_sym_PowerPotential] = ACTIONS(114),
    [anon_sym_PowerRequired] = ACTIONS(114),
    [anon_sym_PrefabHash] = ACTIONS(114),
    [anon_sym_Pressure] = ACTIONS(114),
    [anon_sym_PressureEfficiency] = ACTIONS(114),
    [anon_sym_PressureExternal] = ACTIONS(114),
    [anon_sym_PressureInput] = ACTIONS(114),
    [anon_sym_PressureInput2] = ACTIONS(114),
    [anon_sym_PressureInternal] = ACTIONS(114),
    [anon_sym_PressureOutput] = ACTIONS(114),
    [anon_sym_PressureOutput2] = ACTIONS(114),
    [anon_sym_PressureSetting] = ACTIONS(114),
    [anon_sym_Progress] = ACTIONS(114),
    [anon_sym_Quantity] = ACTIONS(114),
    [anon_sym_Ratio] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrogen] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioOxygen] = ACTIONS(114),
    [anon_sym_RatioOxygenInput] = ACTIONS(114),
    [anon_sym_RatioOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutant] = ACTIONS(114),
    [anon_sym_RatioPollutantInput] = ACTIONS(114),
    [anon_sym_RatioPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutedWater] = ACTIONS(114),
    [anon_sym_RatioSteam] = ACTIONS(114),
    [anon_sym_RatioSteamInput] = ACTIONS(114),
    [anon_sym_RatioSteamInput2] = ACTIONS(114),
    [anon_sym_RatioSteamOutput] = ACTIONS(114),
    [anon_sym_RatioSteamOutput2] = ACTIONS(114),
    [anon_sym_RatioVolatiles] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioWater] = ACTIONS(114),
    [anon_sym_RatioWaterInput] = ACTIONS(114),
    [anon_sym_RatioWaterInput2] = ACTIONS(114),
    [anon_sym_RatioWaterOutput] = ACTIONS(114),
    [anon_sym_RatioWaterOutput2] = ACTIONS(114),
    [anon_sym_ReEntryAltitude] = ACTIONS(114),
    [anon_sym_Reagents] = ACTIONS(114),
    [anon_sym_RecipeHash] = ACTIONS(114),
    [anon_sym_ReferenceId] = ACTIONS(114),
    [anon_sym_RequestHash] = ACTIONS(114),
    [anon_sym_RequiredPower] = ACTIONS(114),
    [anon_sym_ReturnFuelCost] = ACTIONS(114),
    [anon_sym_Richness] = ACTIONS(114),
    [anon_sym_Rpm] = ACTIONS(114),
    [anon_sym_SemiMajorAxis] = ACTIONS(114),
    [anon_sym_Setting] = ACTIONS(114),
    [anon_sym_SettingInput] = ACTIONS(114),
    [anon_sym_SettingOutput] = ACTIONS(114),
    [anon_sym_SignalID] = ACTIONS(114),
    [anon_sym_SignalStrength] = ACTIONS(114),
    [anon_sym_Sites] = ACTIONS(114),
    [anon_sym_Size] = ACTIONS(114),
    [anon_sym_SizeX] = ACTIONS(114),
    [anon_sym_SizeY] = ACTIONS(114),
    [anon_sym_SizeZ] = ACTIONS(114),
    [anon_sym_SolarAngle] = ACTIONS(114),
    [anon_sym_SolarIrradiance] = ACTIONS(114),
    [anon_sym_SoundAlert] = ACTIONS(114),
    [anon_sym_Stress] = ACTIONS(114),
    [anon_sym_Survey] = ACTIONS(114),
    [anon_sym_TargetPadIndex] = ACTIONS(114),
    [anon_sym_TargetX] = ACTIONS(114),
    [anon_sym_TargetY] = ACTIONS(114),
    [anon_sym_TargetZ] = ACTIONS(114),
    [anon_sym_Temperature] = ACTIONS(114),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(114),
    [anon_sym_TemperatureExternal] = ACTIONS(114),
    [anon_sym_TemperatureInput] = ACTIONS(114),
    [anon_sym_TemperatureInput2] = ACTIONS(114),
    [anon_sym_TemperatureOutput] = ACTIONS(114),
    [anon_sym_TemperatureOutput2] = ACTIONS(114),
    [anon_sym_TemperatureSetting] = ACTIONS(114),
    [anon_sym_Throttle] = ACTIONS(114),
    [anon_sym_Thrust] = ACTIONS(114),
    [anon_sym_ThrustToWeight] = ACTIONS(114),
    [anon_sym_Time] = ACTIONS(114),
    [anon_sym_TimeToDestination] = ACTIONS(114),
    [anon_sym_TotalMoles] = ACTIONS(114),
    [anon_sym_TotalMolesInput] = ACTIONS(114),
    [anon_sym_TotalMolesInput2] = ACTIONS(114),
    [anon_sym_TotalMolesOutput] = ACTIONS(114),
    [anon_sym_TotalMolesOutput2] = ACTIONS(114),
    [anon_sym_TotalQuantity] = ACTIONS(114),
    [anon_sym_TrueAnomaly] = ACTIONS(114),
    [anon_sym_VelocityMagnitude] = ACTIONS(114),
    [anon_sym_VelocityRelativeX] = ACTIONS(114),
    [anon_sym_VelocityRelativeY] = ACTIONS(114),
    [anon_sym_VelocityRelativeZ] = ACTIONS(114),
    [anon_sym_VelocityX] = ACTIONS(114),
    [anon_sym_VelocityY] = ACTIONS(114),
    [anon_sym_VelocityZ] = ACTIONS(114),
    [anon_sym_Vertical] = ACTIONS(114),
    [anon_sym_VerticalRatio] = ACTIONS(114),
    [anon_sym_Volume] = ACTIONS(114),
    [anon_sym_VolumeOfLiquid] = ACTIONS(114),
    [anon_sym_WattsReachingContact] = ACTIONS(114),
    [anon_sym_Weight] = ACTIONS(114),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(114),
    [anon_sym_ChargeRatio] = ACTIONS(114),
    [anon_sym_Class] = ACTIONS(114),
    [anon_sym_Damage] = ACTIONS(114),
    [anon_sym_Efficiency] = ACTIONS(114),
    [anon_sym_FilterType] = ACTIONS(114),
    [anon_sym_Growth] = ACTIONS(114),
    [anon_sym_Health] = ACTIONS(114),
    [anon_sym_Mature] = ACTIONS(114),
    [anon_sym_MaxQuantity] = ACTIONS(114),
    [anon_sym_OccupantHash] = ACTIONS(114),
    [anon_sym_Occupied] = ACTIONS(114),
    [anon_sym_PressureAir] = ACTIONS(114),
    [anon_sym_PressureWaste] = ACTIONS(114),
    [anon_sym_Seeding] = ACTIONS(114),
    [anon_sym_SortingClass] = ACTIONS(114),
    [anon_sym_Average] = ACTIONS(114),
    [anon_sym_Minimum] = ACTIONS(114),
    [anon_sym_Sum] = ACTIONS(114),
    [anon_sym_Contents] = ACTIONS(114),
    [anon_sym_Recipe] = ACTIONS(114),
    [anon_sym_Required] = ACTIONS(114),
    [anon_sym_TotalContents] = ACTIONS(114),
    [sym_enum] = ACTIONS(116),
    [sym_deprecated] = ACTIONS(114),
  },
  [11] = {
    [sym_identifier] = ACTIONS(118),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_CR_LF] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(118),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(120),
    [sym_register] = ACTIONS(120),
    [sym_device] = ACTIONS(120),
    [anon_sym_nan] = ACTIONS(118),
    [anon_sym_pinf] = ACTIONS(118),
    [anon_sym_ninf] = ACTIONS(118),
    [anon_sym_pi] = ACTIONS(118),
    [anon_sym_deg2rad] = ACTIONS(118),
    [anon_sym_rad2deg] = ACTIONS(118),
    [anon_sym_epsilon] = ACTIONS(118),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(120),
    [aux_sym_number_token1] = ACTIONS(120),
    [anon_sym_Acceleration] = ACTIONS(118),
    [anon_sym_Activate] = ACTIONS(118),
    [anon_sym_AirRelease] = ACTIONS(118),
    [anon_sym_AlignmentError] = ACTIONS(118),
    [anon_sym_Apex] = ACTIONS(118),
    [anon_sym_AutoLand] = ACTIONS(118),
    [anon_sym_AutoShutOff] = ACTIONS(118),
    [anon_sym_Bpm] = ACTIONS(118),
    [anon_sym_BurnTimeRemaining] = ACTIONS(118),
    [anon_sym_CelestialHash] = ACTIONS(118),
    [anon_sym_CelestialParentHash] = ACTIONS(118),
    [anon_sym_Channel0] = ACTIONS(118),
    [anon_sym_Channel1] = ACTIONS(118),
    [anon_sym_Channel2] = ACTIONS(118),
    [anon_sym_Channel3] = ACTIONS(118),
    [anon_sym_Channel4] = ACTIONS(118),
    [anon_sym_Channel5] = ACTIONS(118),
    [anon_sym_Channel6] = ACTIONS(118),
    [anon_sym_Channel7] = ACTIONS(118),
    [anon_sym_Charge] = ACTIONS(118),
    [anon_sym_Chart] = ACTIONS(118),
    [anon_sym_ChartedNavPoints] = ACTIONS(118),
    [anon_sym_ClearMemory] = ACTIONS(118),
    [anon_sym_CollectableGoods] = ACTIONS(118),
    [anon_sym_Color] = ACTIONS(118),
    [anon_sym_Combustion] = ACTIONS(118),
    [anon_sym_CombustionInput] = ACTIONS(118),
    [anon_sym_CombustionInput2] = ACTIONS(118),
    [anon_sym_CombustionLimiter] = ACTIONS(118),
    [anon_sym_CombustionOutput] = ACTIONS(118),
    [anon_sym_CombustionOutput2] = ACTIONS(118),
    [anon_sym_CompletionRatio] = ACTIONS(118),
    [anon_sym_ContactTypeId] = ACTIONS(118),
    [anon_sym_CurrentCode] = ACTIONS(118),
    [anon_sym_CurrentResearchPodType] = ACTIONS(118),
    [anon_sym_Density] = ACTIONS(118),
    [anon_sym_DestinationCode] = ACTIONS(118),
    [anon_sym_Discover] = ACTIONS(118),
    [anon_sym_DistanceAu] = ACTIONS(118),
    [anon_sym_DistanceKm] = ACTIONS(118),
    [anon_sym_DrillCondition] = ACTIONS(118),
    [anon_sym_DryMass] = ACTIONS(118),
    [anon_sym_Eccentricity] = ACTIONS(118),
    [anon_sym_ElevatorLevel] = ACTIONS(118),
    [anon_sym_ElevatorSpeed] = ACTIONS(118),
    [anon_sym_EntityState] = ACTIONS(118),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(118),
    [anon_sym_Error] = ACTIONS(118),
    [anon_sym_ExhaustVelocity] = ACTIONS(118),
    [anon_sym_ExportCount] = ACTIONS(118),
    [anon_sym_ExportQuantity] = ACTIONS(118),
    [anon_sym_ExportSlotHash] = ACTIONS(118),
    [anon_sym_ExportSlotOccupant] = ACTIONS(118),
    [anon_sym_Filtration] = ACTIONS(118),
    [anon_sym_FlightControlRule] = ACTIONS(118),
    [anon_sym_Flush] = ACTIONS(118),
    [anon_sym_ForceWrite] = ACTIONS(118),
    [anon_sym_ForwardX] = ACTIONS(118),
    [anon_sym_ForwardY] = ACTIONS(118),
    [anon_sym_ForwardZ] = ACTIONS(118),
    [anon_sym_Fuel] = ACTIONS(118),
    [anon_sym_Harvest] = ACTIONS(118),
    [anon_sym_Horizontal] = ACTIONS(118),
    [anon_sym_HorizontalRatio] = ACTIONS(118),
    [anon_sym_Idle] = ACTIONS(118),
    [anon_sym_ImportCount] = ACTIONS(118),
    [anon_sym_ImportQuantity] = ACTIONS(118),
    [anon_sym_ImportSlotHash] = ACTIONS(118),
    [anon_sym_ImportSlotOccupant] = ACTIONS(118),
    [anon_sym_Inclination] = ACTIONS(118),
    [anon_sym_Index] = ACTIONS(118),
    [anon_sym_InterrogationProgress] = ACTIONS(118),
    [anon_sym_LineNumber] = ACTIONS(118),
    [anon_sym_Lock] = ACTIONS(118),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(118),
    [anon_sym_Mass] = ACTIONS(118),
    [anon_sym_Maximum] = ACTIONS(118),
    [anon_sym_MineablesInQueue] = ACTIONS(118),
    [anon_sym_MineablesInVicinity] = ACTIONS(118),
    [anon_sym_MinedQuantity] = ACTIONS(118),
    [anon_sym_MinimumWattsToContact] = ACTIONS(118),
    [anon_sym_Mode] = ACTIONS(118),
    [anon_sym_NavPoints] = ACTIONS(118),
    [anon_sym_NextWeatherEventTime] = ACTIONS(118),
    [anon_sym_None] = ACTIONS(118),
    [anon_sym_On] = ACTIONS(118),
    [anon_sym_Open] = ACTIONS(118),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(118),
    [anon_sym_OrbitPeriod] = ACTIONS(118),
    [anon_sym_Orientation] = ACTIONS(118),
    [anon_sym_Output] = ACTIONS(118),
    [anon_sym_PassedMoles] = ACTIONS(118),
    [anon_sym_Plant] = ACTIONS(118),
    [anon_sym_PlantEfficiency1] = ACTIONS(118),
    [anon_sym_PlantEfficiency2] = ACTIONS(118),
    [anon_sym_PlantEfficiency3] = ACTIONS(118),
    [anon_sym_PlantEfficiency4] = ACTIONS(118),
    [anon_sym_PlantGrowth1] = ACTIONS(118),
    [anon_sym_PlantGrowth2] = ACTIONS(118),
    [anon_sym_PlantGrowth3] = ACTIONS(118),
    [anon_sym_PlantGrowth4] = ACTIONS(118),
    [anon_sym_PlantHash1] = ACTIONS(118),
    [anon_sym_PlantHash2] = ACTIONS(118),
    [anon_sym_PlantHash3] = ACTIONS(118),
    [anon_sym_PlantHash4] = ACTIONS(118),
    [anon_sym_PlantHealth1] = ACTIONS(118),
    [anon_sym_PlantHealth2] = ACTIONS(118),
    [anon_sym_PlantHealth3] = ACTIONS(118),
    [anon_sym_PlantHealth4] = ACTIONS(118),
    [anon_sym_PositionX] = ACTIONS(118),
    [anon_sym_PositionY] = ACTIONS(118),
    [anon_sym_PositionZ] = ACTIONS(118),
    [anon_sym_Power] = ACTIONS(118),
    [anon_sym_PowerActual] = ACTIONS(118),
    [anon_sym_PowerGeneration] = ACTIONS(118),
    [anon_sym_PowerPotential] = ACTIONS(118),
    [anon_sym_PowerRequired] = ACTIONS(118),
    [anon_sym_PrefabHash] = ACTIONS(118),
    [anon_sym_Pressure] = ACTIONS(118),
    [anon_sym_PressureEfficiency] = ACTIONS(118),
    [anon_sym_PressureExternal] = ACTIONS(118),
    [anon_sym_PressureInput] = ACTIONS(118),
    [anon_sym_PressureInput2] = ACTIONS(118),
    [anon_sym_PressureInternal] = ACTIONS(118),
    [anon_sym_PressureOutput] = ACTIONS(118),
    [anon_sym_PressureOutput2] = ACTIONS(118),
    [anon_sym_PressureSetting] = ACTIONS(118),
    [anon_sym_Progress] = ACTIONS(118),
    [anon_sym_Quantity] = ACTIONS(118),
    [anon_sym_Ratio] = ACTIONS(118),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(118),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(118),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(118),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(118),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(118),
    [anon_sym_RatioHydrogen] = ACTIONS(118),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(118),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(118),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(118),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(118),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(118),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(118),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(118),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(118),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(118),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(118),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(118),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(118),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(118),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(118),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(118),
    [anon_sym_RatioNitrogen] = ACTIONS(118),
    [anon_sym_RatioNitrogenInput] = ACTIONS(118),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(118),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(118),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(118),
    [anon_sym_RatioNitrousOxide] = ACTIONS(118),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(118),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(118),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(118),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(118),
    [anon_sym_RatioOxygen] = ACTIONS(118),
    [anon_sym_RatioOxygenInput] = ACTIONS(118),
    [anon_sym_RatioOxygenInput2] = ACTIONS(118),
    [anon_sym_RatioOxygenOutput] = ACTIONS(118),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(118),
    [anon_sym_RatioPollutant] = ACTIONS(118),
    [anon_sym_RatioPollutantInput] = ACTIONS(118),
    [anon_sym_RatioPollutantInput2] = ACTIONS(118),
    [anon_sym_RatioPollutantOutput] = ACTIONS(118),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(118),
    [anon_sym_RatioPollutedWater] = ACTIONS(118),
    [anon_sym_RatioSteam] = ACTIONS(118),
    [anon_sym_RatioSteamInput] = ACTIONS(118),
    [anon_sym_RatioSteamInput2] = ACTIONS(118),
    [anon_sym_RatioSteamOutput] = ACTIONS(118),
    [anon_sym_RatioSteamOutput2] = ACTIONS(118),
    [anon_sym_RatioVolatiles] = ACTIONS(118),
    [anon_sym_RatioVolatilesInput] = ACTIONS(118),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(118),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(118),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(118),
    [anon_sym_RatioWater] = ACTIONS(118),
    [anon_sym_RatioWaterInput] = ACTIONS(118),
    [anon_sym_RatioWaterInput2] = ACTIONS(118),
    [anon_sym_RatioWaterOutput] = ACTIONS(118),
    [anon_sym_RatioWaterOutput2] = ACTIONS(118),
    [anon_sym_ReEntryAltitude] = ACTIONS(118),
    [anon_sym_Reagents] = ACTIONS(118),
    [anon_sym_RecipeHash] = ACTIONS(118),
    [anon_sym_ReferenceId] = ACTIONS(118),
    [anon_sym_RequestHash] = ACTIONS(118),
    [anon_sym_RequiredPower] = ACTIONS(118),
    [anon_sym_ReturnFuelCost] = ACTIONS(118),
    [anon_sym_Richness] = ACTIONS(118),
    [anon_sym_Rpm] = ACTIONS(118),
    [anon_sym_SemiMajorAxis] = ACTIONS(118),
    [anon_sym_Setting] = ACTIONS(118),
    [anon_sym_SettingInput] = ACTIONS(118),
    [anon_sym_SettingOutput] = ACTIONS(118),
    [anon_sym_SignalID] = ACTIONS(118),
    [anon_sym_SignalStrength] = ACTIONS(118),
    [anon_sym_Sites] = ACTIONS(118),
    [anon_sym_Size] = ACTIONS(118),
    [anon_sym_SizeX] = ACTIONS(118),
    [anon_sym_SizeY] = ACTIONS(118),
    [anon_sym_SizeZ] = ACTIONS(118),
    [anon_sym_SolarAngle] = ACTIONS(118),
    [anon_sym_SolarIrradiance] = ACTIONS(118),
    [anon_sym_SoundAlert] = ACTIONS(118),
    [anon_sym_Stress] = ACTIONS(118),
    [anon_sym_Survey] = ACTIONS(118),
    [anon_sym_TargetPadIndex] = ACTIONS(118),
    [anon_sym_TargetX] = ACTIONS(118),
    [anon_sym_TargetY] = ACTIONS(118),
    [anon_sym_TargetZ] = ACTIONS(118),
    [anon_sym_Temperature] = ACTIONS(118),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(118),
    [anon_sym_TemperatureExternal] = ACTIONS(118),
    [anon_sym_TemperatureInput] = ACTIONS(118),
    [anon_sym_TemperatureInput2] = ACTIONS(118),
    [anon_sym_TemperatureOutput] = ACTIONS(118),
    [anon_sym_TemperatureOutput2] = ACTIONS(118),
    [anon_sym_TemperatureSetting] = ACTIONS(118),
    [anon_sym_Throttle] = ACTIONS(118),
    [anon_sym_Thrust] = ACTIONS(118),
    [anon_sym_ThrustToWeight] = ACTIONS(118),
    [anon_sym_Time] = ACTIONS(118),
    [anon_sym_TimeToDestination] = ACTIONS(118),
    [anon_sym_TotalMoles] = ACTIONS(118),
    [anon_sym_TotalMolesInput] = ACTIONS(118),
    [anon_sym_TotalMolesInput2] = ACTIONS(118),
    [anon_sym_TotalMolesOutput] = ACTIONS(118),
    [anon_sym_TotalMolesOutput2] = ACTIONS(118),
    [anon_sym_TotalQuantity] = ACTIONS(118),
    [anon_sym_TrueAnomaly] = ACTIONS(118),
    [anon_sym_VelocityMagnitude] = ACTIONS(118),
    [anon_sym_VelocityRelativeX] = ACTIONS(118),
    [anon_sym_VelocityRelativeY] = ACTIONS(118),
    [anon_sym_VelocityRelativeZ] = ACTIONS(118),
    [anon_sym_VelocityX] = ACTIONS(118),
    [anon_sym_VelocityY] = ACTIONS(118),
    [anon_sym_VelocityZ] = ACTIONS(118),
    [anon_sym_Vertical] = ACTIONS(118),
    [anon_sym_VerticalRatio] = ACTIONS(118),
    [anon_sym_Volume] = ACTIONS(118),
    [anon_sym_VolumeOfLiquid] = ACTIONS(118),
    [anon_sym_WattsReachingContact] = ACTIONS(118),
    [anon_sym_Weight] = ACTIONS(118),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(118),
    [anon_sym_ChargeRatio] = ACTIONS(118),
    [anon_sym_Class] = ACTIONS(118),
    [anon_sym_Damage] = ACTIONS(118),
    [anon_sym_Efficiency] = ACTIONS(118),
    [anon_sym_FilterType] = ACTIONS(118),
    [anon_sym_Growth] = ACTIONS(118),
    [anon_sym_Health] = ACTIONS(118),
    [anon_sym_Mature] = ACTIONS(118),
    [anon_sym_MaxQuantity] = ACTIONS(118),
    [anon_sym_OccupantHash] = ACTIONS(118),
    [anon_sym_Occupied] = ACTIONS(118),
    [anon_sym_PressureAir] = ACTIONS(118),
    [anon_sym_PressureWaste] = ACTIONS(118),
    [anon_sym_Seeding] = ACTIONS(118),
    [anon_sym_SortingClass] = ACTIONS(118),
    [anon_sym_Average] = ACTIONS(118),
    [anon_sym_Minimum] = ACTIONS(118),
    [anon_sym_Sum] = ACTIONS(118),
    [anon_sym_Contents] = ACTIONS(118),
    [anon_sym_Recipe] = ACTIONS(118),
    [anon_sym_Required] = ACTIONS(118),
    [anon_sym_TotalContents] = ACTIONS(118),
    [sym_enum] = ACTIONS(120),
    [sym_deprecated] = ACTIONS(118),
  },
  [12] = {
    [sym_identifier] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(124),
    [anon_sym_CR_LF] = ACTIONS(124),
    [anon_sym_CR] = ACTIONS(122),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(124),
    [sym_register] = ACTIONS(124),
    [sym_device] = ACTIONS(124),
    [anon_sym_nan] = ACTIONS(122),
    [anon_sym_pinf] = ACTIONS(122),
    [anon_sym_ninf] = ACTIONS(122),
    [anon_sym_pi] = ACTIONS(122),
    [anon_sym_deg2rad] = ACTIONS(122),
    [anon_sym_rad2deg] = ACTIONS(122),
    [anon_sym_epsilon] = ACTIONS(122),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(124),
    [aux_sym_number_token1] = ACTIONS(124),
    [anon_sym_Acceleration] = ACTIONS(122),
    [anon_sym_Activate] = ACTIONS(122),
    [anon_sym_AirRelease] = ACTIONS(122),
    [anon_sym_AlignmentError] = ACTIONS(122),
    [anon_sym_Apex] = ACTIONS(122),
    [anon_sym_AutoLand] = ACTIONS(122),
    [anon_sym_AutoShutOff] = ACTIONS(122),
    [anon_sym_Bpm] = ACTIONS(122),
    [anon_sym_BurnTimeRemaining] = ACTIONS(122),
    [anon_sym_CelestialHash] = ACTIONS(122),
    [anon_sym_CelestialParentHash] = ACTIONS(122),
    [anon_sym_Channel0] = ACTIONS(122),
    [anon_sym_Channel1] = ACTIONS(122),
    [anon_sym_Channel2] = ACTIONS(122),
    [anon_sym_Channel3] = ACTIONS(122),
    [anon_sym_Channel4] = ACTIONS(122),
    [anon_sym_Channel5] = ACTIONS(122),
    [anon_sym_Channel6] = ACTIONS(122),
    [anon_sym_Channel7] = ACTIONS(122),
    [anon_sym_Charge] = ACTIONS(122),
    [anon_sym_Chart] = ACTIONS(122),
    [anon_sym_ChartedNavPoints] = ACTIONS(122),
    [anon_sym_ClearMemory] = ACTIONS(122),
    [anon_sym_CollectableGoods] = ACTIONS(122),
    [anon_sym_Color] = ACTIONS(122),
    [anon_sym_Combustion] = ACTIONS(122),
    [anon_sym_CombustionInput] = ACTIONS(122),
    [anon_sym_CombustionInput2] = ACTIONS(122),
    [anon_sym_CombustionLimiter] = ACTIONS(122),
    [anon_sym_CombustionOutput] = ACTIONS(122),
    [anon_sym_CombustionOutput2] = ACTIONS(122),
    [anon_sym_CompletionRatio] = ACTIONS(122),
    [anon_sym_ContactTypeId] = ACTIONS(122),
    [anon_sym_CurrentCode] = ACTIONS(122),
    [anon_sym_CurrentResearchPodType] = ACTIONS(122),
    [anon_sym_Density] = ACTIONS(122),
    [anon_sym_DestinationCode] = ACTIONS(122),
    [anon_sym_Discover] = ACTIONS(122),
    [anon_sym_DistanceAu] = ACTIONS(122),
    [anon_sym_DistanceKm] = ACTIONS(122),
    [anon_sym_DrillCondition] = ACTIONS(122),
    [anon_sym_DryMass] = ACTIONS(122),
    [anon_sym_Eccentricity] = ACTIONS(122),
    [anon_sym_ElevatorLevel] = ACTIONS(122),
    [anon_sym_ElevatorSpeed] = ACTIONS(122),
    [anon_sym_EntityState] = ACTIONS(122),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(122),
    [anon_sym_Error] = ACTIONS(122),
    [anon_sym_ExhaustVelocity] = ACTIONS(122),
    [anon_sym_ExportCount] = ACTIONS(122),
    [anon_sym_ExportQuantity] = ACTIONS(122),
    [anon_sym_ExportSlotHash] = ACTIONS(122),
    [anon_sym_ExportSlotOccupant] = ACTIONS(122),
    [anon_sym_Filtration] = ACTIONS(122),
    [anon_sym_FlightControlRule] = ACTIONS(122),
    [anon_sym_Flush] = ACTIONS(122),
    [anon_sym_ForceWrite] = ACTIONS(122),
    [anon_sym_ForwardX] = ACTIONS(122),
    [anon_sym_ForwardY] = ACTIONS(122),
    [anon_sym_ForwardZ] = ACTIONS(122),
    [anon_sym_Fuel] = ACTIONS(122),
    [anon_sym_Harvest] = ACTIONS(122),
    [anon_sym_Horizontal] = ACTIONS(122),
    [anon_sym_HorizontalRatio] = ACTIONS(122),
    [anon_sym_Idle] = ACTIONS(122),
    [anon_sym_ImportCount] = ACTIONS(122),
    [anon_sym_ImportQuantity] = ACTIONS(122),
    [anon_sym_ImportSlotHash] = ACTIONS(122),
    [anon_sym_ImportSlotOccupant] = ACTIONS(122),
    [anon_sym_Inclination] = ACTIONS(122),
    [anon_sym_Index] = ACTIONS(122),
    [anon_sym_InterrogationProgress] = ACTIONS(122),
    [anon_sym_LineNumber] = ACTIONS(122),
    [anon_sym_Lock] = ACTIONS(122),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(122),
    [anon_sym_Mass] = ACTIONS(122),
    [anon_sym_Maximum] = ACTIONS(122),
    [anon_sym_MineablesInQueue] = ACTIONS(122),
    [anon_sym_MineablesInVicinity] = ACTIONS(122),
    [anon_sym_MinedQuantity] = ACTIONS(122),
    [anon_sym_MinimumWattsToContact] = ACTIONS(122),
    [anon_sym_Mode] = ACTIONS(122),
    [anon_sym_NavPoints] = ACTIONS(122),
    [anon_sym_NextWeatherEventTime] = ACTIONS(122),
    [anon_sym_None] = ACTIONS(122),
    [anon_sym_On] = ACTIONS(122),
    [anon_sym_Open] = ACTIONS(122),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(122),
    [anon_sym_OrbitPeriod] = ACTIONS(122),
    [anon_sym_Orientation] = ACTIONS(122),
    [anon_sym_Output] = ACTIONS(122),
    [anon_sym_PassedMoles] = ACTIONS(122),
    [anon_sym_Plant] = ACTIONS(122),
    [anon_sym_PlantEfficiency1] = ACTIONS(122),
    [anon_sym_PlantEfficiency2] = ACTIONS(122),
    [anon_sym_PlantEfficiency3] = ACTIONS(122),
    [anon_sym_PlantEfficiency4] = ACTIONS(122),
    [anon_sym_PlantGrowth1] = ACTIONS(122),
    [anon_sym_PlantGrowth2] = ACTIONS(122),
    [anon_sym_PlantGrowth3] = ACTIONS(122),
    [anon_sym_PlantGrowth4] = ACTIONS(122),
    [anon_sym_PlantHash1] = ACTIONS(122),
    [anon_sym_PlantHash2] = ACTIONS(122),
    [anon_sym_PlantHash3] = ACTIONS(122),
    [anon_sym_PlantHash4] = ACTIONS(122),
    [anon_sym_PlantHealth1] = ACTIONS(122),
    [anon_sym_PlantHealth2] = ACTIONS(122),
    [anon_sym_PlantHealth3] = ACTIONS(122),
    [anon_sym_PlantHealth4] = ACTIONS(122),
    [anon_sym_PositionX] = ACTIONS(122),
    [anon_sym_PositionY] = ACTIONS(122),
    [anon_sym_PositionZ] = ACTIONS(122),
    [anon_sym_Power] = ACTIONS(122),
    [anon_sym_PowerActual] = ACTIONS(122),
    [anon_sym_PowerGeneration] = ACTIONS(122),
    [anon_sym_PowerPotential] = ACTIONS(122),
    [anon_sym_PowerRequired] = ACTIONS(122),
    [anon_sym_PrefabHash] = ACTIONS(122),
    [anon_sym_Pressure] = ACTIONS(122),
    [anon_sym_PressureEfficiency] = ACTIONS(122),
    [anon_sym_PressureExternal] = ACTIONS(122),
    [anon_sym_PressureInput] = ACTIONS(122),
    [anon_sym_PressureInput2] = ACTIONS(122),
    [anon_sym_PressureInternal] = ACTIONS(122),
    [anon_sym_PressureOutput] = ACTIONS(122),
    [anon_sym_PressureOutput2] = ACTIONS(122),
    [anon_sym_PressureSetting] = ACTIONS(122),
    [anon_sym_Progress] = ACTIONS(122),
    [anon_sym_Quantity] = ACTIONS(122),
    [anon_sym_Ratio] = ACTIONS(122),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(122),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(122),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(122),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(122),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(122),
    [anon_sym_RatioHydrogen] = ACTIONS(122),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(122),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(122),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(122),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(122),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(122),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(122),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(122),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(122),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(122),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(122),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(122),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(122),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(122),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(122),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(122),
    [anon_sym_RatioNitrogen] = ACTIONS(122),
    [anon_sym_RatioNitrogenInput] = ACTIONS(122),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(122),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(122),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(122),
    [anon_sym_RatioNitrousOxide] = ACTIONS(122),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(122),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(122),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(122),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(122),
    [anon_sym_RatioOxygen] = ACTIONS(122),
    [anon_sym_RatioOxygenInput] = ACTIONS(122),
    [anon_sym_RatioOxygenInput2] = ACTIONS(122),
    [anon_sym_RatioOxygenOutput] = ACTIONS(122),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(122),
    [anon_sym_RatioPollutant] = ACTIONS(122),
    [anon_sym_RatioPollutantInput] = ACTIONS(122),
    [anon_sym_RatioPollutantInput2] = ACTIONS(122),
    [anon_sym_RatioPollutantOutput] = ACTIONS(122),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(122),
    [anon_sym_RatioPollutedWater] = ACTIONS(122),
    [anon_sym_RatioSteam] = ACTIONS(122),
    [anon_sym_RatioSteamInput] = ACTIONS(122),
    [anon_sym_RatioSteamInput2] = ACTIONS(122),
    [anon_sym_RatioSteamOutput] = ACTIONS(122),
    [anon_sym_RatioSteamOutput2] = ACTIONS(122),
    [anon_sym_RatioVolatiles] = ACTIONS(122),
    [anon_sym_RatioVolatilesInput] = ACTIONS(122),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(122),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(122),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(122),
    [anon_sym_RatioWater] = ACTIONS(122),
    [anon_sym_RatioWaterInput] = ACTIONS(122),
    [anon_sym_RatioWaterInput2] = ACTIONS(122),
    [anon_sym_RatioWaterOutput] = ACTIONS(122),
    [anon_sym_RatioWaterOutput2] = ACTIONS(122),
    [anon_sym_ReEntryAltitude] = ACTIONS(122),
    [anon_sym_Reagents] = ACTIONS(122),
    [anon_sym_RecipeHash] = ACTIONS(122),
    [anon_sym_ReferenceId] = ACTIONS(122),
    [anon_sym_RequestHash] = ACTIONS(122),
    [anon_sym_RequiredPower] = ACTIONS(122),
    [anon_sym_ReturnFuelCost] = ACTIONS(122),
    [anon_sym_Richness] = ACTIONS(122),
    [anon_sym_Rpm] = ACTIONS(122),
    [anon_sym_SemiMajorAxis] = ACTIONS(122),
    [anon_sym_Setting] = ACTIONS(122),
    [anon_sym_SettingInput] = ACTIONS(122),
    [anon_sym_SettingOutput] = ACTIONS(122),
    [anon_sym_SignalID] = ACTIONS(122),
    [anon_sym_SignalStrength] = ACTIONS(122),
    [anon_sym_Sites] = ACTIONS(122),
    [anon_sym_Size] = ACTIONS(122),
    [anon_sym_SizeX] = ACTIONS(122),
    [anon_sym_SizeY] = ACTIONS(122),
    [anon_sym_SizeZ] = ACTIONS(122),
    [anon_sym_SolarAngle] = ACTIONS(122),
    [anon_sym_SolarIrradiance] = ACTIONS(122),
    [anon_sym_SoundAlert] = ACTIONS(122),
    [anon_sym_Stress] = ACTIONS(122),
    [anon_sym_Survey] = ACTIONS(122),
    [anon_sym_TargetPadIndex] = ACTIONS(122),
    [anon_sym_TargetX] = ACTIONS(122),
    [anon_sym_TargetY] = ACTIONS(122),
    [anon_sym_TargetZ] = ACTIONS(122),
    [anon_sym_Temperature] = ACTIONS(122),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(122),
    [anon_sym_TemperatureExternal] = ACTIONS(122),
    [anon_sym_TemperatureInput] = ACTIONS(122),
    [anon_sym_TemperatureInput2] = ACTIONS(122),
    [anon_sym_TemperatureOutput] = ACTIONS(122),
    [anon_sym_TemperatureOutput2] = ACTIONS(122),
    [anon_sym_TemperatureSetting] = ACTIONS(122),
    [anon_sym_Throttle] = ACTIONS(122),
    [anon_sym_Thrust] = ACTIONS(122),
    [anon_sym_ThrustToWeight] = ACTIONS(122),
    [anon_sym_Time] = ACTIONS(122),
    [anon_sym_TimeToDestination] = ACTIONS(122),
    [anon_sym_TotalMoles] = ACTIONS(122),
    [anon_sym_TotalMolesInput] = ACTIONS(122),
    [anon_sym_TotalMolesInput2] = ACTIONS(122),
    [anon_sym_TotalMolesOutput] = ACTIONS(122),
    [anon_sym_TotalMolesOutput2] = ACTIONS(122),
    [anon_sym_TotalQuantity] = ACTIONS(122),
    [anon_sym_TrueAnomaly] = ACTIONS(122),
    [anon_sym_VelocityMagnitude] = ACTIONS(122),
    [anon_sym_VelocityRelativeX] = ACTIONS(122),
    [anon_sym_VelocityRelativeY] = ACTIONS(122),
    [anon_sym_VelocityRelativeZ] = ACTIONS(122),
    [anon_sym_VelocityX] = ACTIONS(122),
    [anon_sym_VelocityY] = ACTIONS(122),
    [anon_sym_VelocityZ] = ACTIONS(122),
    [anon_sym_Vertical] = ACTIONS(122),
    [anon_sym_VerticalRatio] = ACTIONS(122),
    [anon_sym_Volume] = ACTIONS(122),
    [anon_sym_VolumeOfLiquid] = ACTIONS(122),
    [anon_sym_WattsReachingContact] = ACTIONS(122),
    [anon_sym_Weight] = ACTIONS(122),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(122),
    [anon_sym_ChargeRatio] = ACTIONS(122),
    [anon_sym_Class] = ACTIONS(122),
    [anon_sym_Damage] = ACTIONS(122),
    [anon_sym_Efficiency] = ACTIONS(122),
    [anon_sym_FilterType] = ACTIONS(122),
    [anon_sym_Growth] = ACTIONS(122),
    [anon_sym_Health] = ACTIONS(122),
    [anon_sym_Mature] = ACTIONS(122),
    [anon_sym_MaxQuantity] = ACTIONS(122),
    [anon_sym_OccupantHash] = ACTIONS(122),
    [anon_sym_Occupied] = ACTIONS(122),
    [anon_sym_PressureAir] = ACTIONS(122),
    [anon_sym_PressureWaste] = ACTIONS(122),
    [anon_sym_Seeding] = ACTIONS(122),
    [anon_sym_SortingClass] = ACTIONS(122),
    [anon_sym_Average] = ACTIONS(122),
    [anon_sym_Minimum] = ACTIONS(122),
    [anon_sym_Sum] = ACTIONS(122),
    [anon_sym_Contents] = ACTIONS(122),
    [anon_sym_Recipe] = ACTIONS(122),
    [anon_sym_Required] = ACTIONS(122),
    [anon_sym_TotalContents] = ACTIONS(122),
    [sym_enum] = ACTIONS(124),
    [sym_deprecated] = ACTIONS(122),
  },
  [13] = {
    [sym_identifier] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_CR_LF] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(116),
    [sym_register] = ACTIONS(116),
    [sym_device] = ACTIONS(116),
    [anon_sym_nan] = ACTIONS(114),
    [anon_sym_pinf] = ACTIONS(114),
    [anon_sym_ninf] = ACTIONS(114),
    [anon_sym_pi] = ACTIONS(114),
    [anon_sym_deg2rad] = ACTIONS(114),
    [anon_sym_rad2deg] = ACTIONS(114),
    [anon_sym_epsilon] = ACTIONS(114),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(116),
    [anon_sym_Acceleration] = ACTIONS(114),
    [anon_sym_Activate] = ACTIONS(114),
    [anon_sym_AirRelease] = ACTIONS(114),
    [anon_sym_AlignmentError] = ACTIONS(114),
    [anon_sym_Apex] = ACTIONS(114),
    [anon_sym_AutoLand] = ACTIONS(114),
    [anon_sym_AutoShutOff] = ACTIONS(114),
    [anon_sym_Bpm] = ACTIONS(114),
    [anon_sym_BurnTimeRemaining] = ACTIONS(114),
    [anon_sym_CelestialHash] = ACTIONS(114),
    [anon_sym_CelestialParentHash] = ACTIONS(114),
    [anon_sym_Channel0] = ACTIONS(114),
    [anon_sym_Channel1] = ACTIONS(114),
    [anon_sym_Channel2] = ACTIONS(114),
    [anon_sym_Channel3] = ACTIONS(114),
    [anon_sym_Channel4] = ACTIONS(114),
    [anon_sym_Channel5] = ACTIONS(114),
    [anon_sym_Channel6] = ACTIONS(114),
    [anon_sym_Channel7] = ACTIONS(114),
    [anon_sym_Charge] = ACTIONS(114),
    [anon_sym_Chart] = ACTIONS(114),
    [anon_sym_ChartedNavPoints] = ACTIONS(114),
    [anon_sym_ClearMemory] = ACTIONS(114),
    [anon_sym_CollectableGoods] = ACTIONS(114),
    [anon_sym_Color] = ACTIONS(114),
    [anon_sym_Combustion] = ACTIONS(114),
    [anon_sym_CombustionInput] = ACTIONS(114),
    [anon_sym_CombustionInput2] = ACTIONS(114),
    [anon_sym_CombustionLimiter] = ACTIONS(114),
    [anon_sym_CombustionOutput] = ACTIONS(114),
    [anon_sym_CombustionOutput2] = ACTIONS(114),
    [anon_sym_CompletionRatio] = ACTIONS(114),
    [anon_sym_ContactTypeId] = ACTIONS(114),
    [anon_sym_CurrentCode] = ACTIONS(114),
    [anon_sym_CurrentResearchPodType] = ACTIONS(114),
    [anon_sym_Density] = ACTIONS(114),
    [anon_sym_DestinationCode] = ACTIONS(114),
    [anon_sym_Discover] = ACTIONS(114),
    [anon_sym_DistanceAu] = ACTIONS(114),
    [anon_sym_DistanceKm] = ACTIONS(114),
    [anon_sym_DrillCondition] = ACTIONS(114),
    [anon_sym_DryMass] = ACTIONS(114),
    [anon_sym_Eccentricity] = ACTIONS(114),
    [anon_sym_ElevatorLevel] = ACTIONS(114),
    [anon_sym_ElevatorSpeed] = ACTIONS(114),
    [anon_sym_EntityState] = ACTIONS(114),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(114),
    [anon_sym_Error] = ACTIONS(114),
    [anon_sym_ExhaustVelocity] = ACTIONS(114),
    [anon_sym_ExportCount] = ACTIONS(114),
    [anon_sym_ExportQuantity] = ACTIONS(114),
    [anon_sym_ExportSlotHash] = ACTIONS(114),
    [anon_sym_ExportSlotOccupant] = ACTIONS(114),
    [anon_sym_Filtration] = ACTIONS(114),
    [anon_sym_FlightControlRule] = ACTIONS(114),
    [anon_sym_Flush] = ACTIONS(114),
    [anon_sym_ForceWrite] = ACTIONS(114),
    [anon_sym_ForwardX] = ACTIONS(114),
    [anon_sym_ForwardY] = ACTIONS(114),
    [anon_sym_ForwardZ] = ACTIONS(114),
    [anon_sym_Fuel] = ACTIONS(114),
    [anon_sym_Harvest] = ACTIONS(114),
    [anon_sym_Horizontal] = ACTIONS(114),
    [anon_sym_HorizontalRatio] = ACTIONS(114),
    [anon_sym_Idle] = ACTIONS(114),
    [anon_sym_ImportCount] = ACTIONS(114),
    [anon_sym_ImportQuantity] = ACTIONS(114),
    [anon_sym_ImportSlotHash] = ACTIONS(114),
    [anon_sym_ImportSlotOccupant] = ACTIONS(114),
    [anon_sym_Inclination] = ACTIONS(114),
    [anon_sym_Index] = ACTIONS(114),
    [anon_sym_InterrogationProgress] = ACTIONS(114),
    [anon_sym_LineNumber] = ACTIONS(114),
    [anon_sym_Lock] = ACTIONS(114),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(114),
    [anon_sym_Mass] = ACTIONS(114),
    [anon_sym_Maximum] = ACTIONS(114),
    [anon_sym_MineablesInQueue] = ACTIONS(114),
    [anon_sym_MineablesInVicinity] = ACTIONS(114),
    [anon_sym_MinedQuantity] = ACTIONS(114),
    [anon_sym_MinimumWattsToContact] = ACTIONS(114),
    [anon_sym_Mode] = ACTIONS(114),
    [anon_sym_NavPoints] = ACTIONS(114),
    [anon_sym_NextWeatherEventTime] = ACTIONS(114),
    [anon_sym_None] = ACTIONS(114),
    [anon_sym_On] = ACTIONS(114),
    [anon_sym_Open] = ACTIONS(114),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(114),
    [anon_sym_OrbitPeriod] = ACTIONS(114),
    [anon_sym_Orientation] = ACTIONS(114),
    [anon_sym_Output] = ACTIONS(114),
    [anon_sym_PassedMoles] = ACTIONS(114),
    [anon_sym_Plant] = ACTIONS(114),
    [anon_sym_PlantEfficiency1] = ACTIONS(114),
    [anon_sym_PlantEfficiency2] = ACTIONS(114),
    [anon_sym_PlantEfficiency3] = ACTIONS(114),
    [anon_sym_PlantEfficiency4] = ACTIONS(114),
    [anon_sym_PlantGrowth1] = ACTIONS(114),
    [anon_sym_PlantGrowth2] = ACTIONS(114),
    [anon_sym_PlantGrowth3] = ACTIONS(114),
    [anon_sym_PlantGrowth4] = ACTIONS(114),
    [anon_sym_PlantHash1] = ACTIONS(114),
    [anon_sym_PlantHash2] = ACTIONS(114),
    [anon_sym_PlantHash3] = ACTIONS(114),
    [anon_sym_PlantHash4] = ACTIONS(114),
    [anon_sym_PlantHealth1] = ACTIONS(114),
    [anon_sym_PlantHealth2] = ACTIONS(114),
    [anon_sym_PlantHealth3] = ACTIONS(114),
    [anon_sym_PlantHealth4] = ACTIONS(114),
    [anon_sym_PositionX] = ACTIONS(114),
    [anon_sym_PositionY] = ACTIONS(114),
    [anon_sym_PositionZ] = ACTIONS(114),
    [anon_sym_Power] = ACTIONS(114),
    [anon_sym_PowerActual] = ACTIONS(114),
    [anon_sym_PowerGeneration] = ACTIONS(114),
    [anon_sym_PowerPotential] = ACTIONS(114),
    [anon_sym_PowerRequired] = ACTIONS(114),
    [anon_sym_PrefabHash] = ACTIONS(114),
    [anon_sym_Pressure] = ACTIONS(114),
    [anon_sym_PressureEfficiency] = ACTIONS(114),
    [anon_sym_PressureExternal] = ACTIONS(114),
    [anon_sym_PressureInput] = ACTIONS(114),
    [anon_sym_PressureInput2] = ACTIONS(114),
    [anon_sym_PressureInternal] = ACTIONS(114),
    [anon_sym_PressureOutput] = ACTIONS(114),
    [anon_sym_PressureOutput2] = ACTIONS(114),
    [anon_sym_PressureSetting] = ACTIONS(114),
    [anon_sym_Progress] = ACTIONS(114),
    [anon_sym_Quantity] = ACTIONS(114),
    [anon_sym_Ratio] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrogen] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput] = ACTIONS(114),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(114),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxide] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(114),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(114),
    [anon_sym_RatioOxygen] = ACTIONS(114),
    [anon_sym_RatioOxygenInput] = ACTIONS(114),
    [anon_sym_RatioOxygenInput2] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput] = ACTIONS(114),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutant] = ACTIONS(114),
    [anon_sym_RatioPollutantInput] = ACTIONS(114),
    [anon_sym_RatioPollutantInput2] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput] = ACTIONS(114),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(114),
    [anon_sym_RatioPollutedWater] = ACTIONS(114),
    [anon_sym_RatioSteam] = ACTIONS(114),
    [anon_sym_RatioSteamInput] = ACTIONS(114),
    [anon_sym_RatioSteamInput2] = ACTIONS(114),
    [anon_sym_RatioSteamOutput] = ACTIONS(114),
    [anon_sym_RatioSteamOutput2] = ACTIONS(114),
    [anon_sym_RatioVolatiles] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput] = ACTIONS(114),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(114),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(114),
    [anon_sym_RatioWater] = ACTIONS(114),
    [anon_sym_RatioWaterInput] = ACTIONS(114),
    [anon_sym_RatioWaterInput2] = ACTIONS(114),
    [anon_sym_RatioWaterOutput] = ACTIONS(114),
    [anon_sym_RatioWaterOutput2] = ACTIONS(114),
    [anon_sym_ReEntryAltitude] = ACTIONS(114),
    [anon_sym_Reagents] = ACTIONS(114),
    [anon_sym_RecipeHash] = ACTIONS(114),
    [anon_sym_ReferenceId] = ACTIONS(114),
    [anon_sym_RequestHash] = ACTIONS(114),
    [anon_sym_RequiredPower] = ACTIONS(114),
    [anon_sym_ReturnFuelCost] = ACTIONS(114),
    [anon_sym_Richness] = ACTIONS(114),
    [anon_sym_Rpm] = ACTIONS(114),
    [anon_sym_SemiMajorAxis] = ACTIONS(114),
    [anon_sym_Setting] = ACTIONS(114),
    [anon_sym_SettingInput] = ACTIONS(114),
    [anon_sym_SettingOutput] = ACTIONS(114),
    [anon_sym_SignalID] = ACTIONS(114),
    [anon_sym_SignalStrength] = ACTIONS(114),
    [anon_sym_Sites] = ACTIONS(114),
    [anon_sym_Size] = ACTIONS(114),
    [anon_sym_SizeX] = ACTIONS(114),
    [anon_sym_SizeY] = ACTIONS(114),
    [anon_sym_SizeZ] = ACTIONS(114),
    [anon_sym_SolarAngle] = ACTIONS(114),
    [anon_sym_SolarIrradiance] = ACTIONS(114),
    [anon_sym_SoundAlert] = ACTIONS(114),
    [anon_sym_Stress] = ACTIONS(114),
    [anon_sym_Survey] = ACTIONS(114),
    [anon_sym_TargetPadIndex] = ACTIONS(114),
    [anon_sym_TargetX] = ACTIONS(114),
    [anon_sym_TargetY] = ACTIONS(114),
    [anon_sym_TargetZ] = ACTIONS(114),
    [anon_sym_Temperature] = ACTIONS(114),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(114),
    [anon_sym_TemperatureExternal] = ACTIONS(114),
    [anon_sym_TemperatureInput] = ACTIONS(114),
    [anon_sym_TemperatureInput2] = ACTIONS(114),
    [anon_sym_TemperatureOutput] = ACTIONS(114),
    [anon_sym_TemperatureOutput2] = ACTIONS(114),
    [anon_sym_TemperatureSetting] = ACTIONS(114),
    [anon_sym_Throttle] = ACTIONS(114),
    [anon_sym_Thrust] = ACTIONS(114),
    [anon_sym_ThrustToWeight] = ACTIONS(114),
    [anon_sym_Time] = ACTIONS(114),
    [anon_sym_TimeToDestination] = ACTIONS(114),
    [anon_sym_TotalMoles] = ACTIONS(114),
    [anon_sym_TotalMolesInput] = ACTIONS(114),
    [anon_sym_TotalMolesInput2] = ACTIONS(114),
    [anon_sym_TotalMolesOutput] = ACTIONS(114),
    [anon_sym_TotalMolesOutput2] = ACTIONS(114),
    [anon_sym_TotalQuantity] = ACTIONS(114),
    [anon_sym_TrueAnomaly] = ACTIONS(114),
    [anon_sym_VelocityMagnitude] = ACTIONS(114),
    [anon_sym_VelocityRelativeX] = ACTIONS(114),
    [anon_sym_VelocityRelativeY] = ACTIONS(114),
    [anon_sym_VelocityRelativeZ] = ACTIONS(114),
    [anon_sym_VelocityX] = ACTIONS(114),
    [anon_sym_VelocityY] = ACTIONS(114),
    [anon_sym_VelocityZ] = ACTIONS(114),
    [anon_sym_Vertical] = ACTIONS(114),
    [anon_sym_VerticalRatio] = ACTIONS(114),
    [anon_sym_Volume] = ACTIONS(114),
    [anon_sym_VolumeOfLiquid] = ACTIONS(114),
    [anon_sym_WattsReachingContact] = ACTIONS(114),
    [anon_sym_Weight] = ACTIONS(114),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(114),
    [anon_sym_ChargeRatio] = ACTIONS(114),
    [anon_sym_Class] = ACTIONS(114),
    [anon_sym_Damage] = ACTIONS(114),
    [anon_sym_Efficiency] = ACTIONS(114),
    [anon_sym_FilterType] = ACTIONS(114),
    [anon_sym_Growth] = ACTIONS(114),
    [anon_sym_Health] = ACTIONS(114),
    [anon_sym_Mature] = ACTIONS(114),
    [anon_sym_MaxQuantity] = ACTIONS(114),
    [anon_sym_OccupantHash] = ACTIONS(114),
    [anon_sym_Occupied] = ACTIONS(114),
    [anon_sym_PressureAir] = ACTIONS(114),
    [anon_sym_PressureWaste] = ACTIONS(114),
    [anon_sym_Seeding] = ACTIONS(114),
    [anon_sym_SortingClass] = ACTIONS(114),
    [anon_sym_Average] = ACTIONS(114),
    [anon_sym_Minimum] = ACTIONS(114),
    [anon_sym_Sum] = ACTIONS(114),
    [anon_sym_Contents] = ACTIONS(114),
    [anon_sym_Recipe] = ACTIONS(114),
    [anon_sym_Required] = ACTIONS(114),
    [anon_sym_TotalContents] = ACTIONS(114),
    [sym_enum] = ACTIONS(116),
    [sym_deprecated] = ACTIONS(114),
  },
  [14] = {
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_CR_LF] = ACTIONS(128),
    [anon_sym_CR] = ACTIONS(126),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(128),
    [sym_register] = ACTIONS(128),
    [sym_device] = ACTIONS(128),
    [anon_sym_nan] = ACTIONS(126),
    [anon_sym_pinf] = ACTIONS(126),
    [anon_sym_ninf] = ACTIONS(126),
    [anon_sym_pi] = ACTIONS(126),
    [anon_sym_deg2rad] = ACTIONS(126),
    [anon_sym_rad2deg] = ACTIONS(126),
    [anon_sym_epsilon] = ACTIONS(126),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(128),
    [aux_sym_number_token1] = ACTIONS(128),
    [anon_sym_Acceleration] = ACTIONS(126),
    [anon_sym_Activate] = ACTIONS(126),
    [anon_sym_AirRelease] = ACTIONS(126),
    [anon_sym_AlignmentError] = ACTIONS(126),
    [anon_sym_Apex] = ACTIONS(126),
    [anon_sym_AutoLand] = ACTIONS(126),
    [anon_sym_AutoShutOff] = ACTIONS(126),
    [anon_sym_Bpm] = ACTIONS(126),
    [anon_sym_BurnTimeRemaining] = ACTIONS(126),
    [anon_sym_CelestialHash] = ACTIONS(126),
    [anon_sym_CelestialParentHash] = ACTIONS(126),
    [anon_sym_Channel0] = ACTIONS(126),
    [anon_sym_Channel1] = ACTIONS(126),
    [anon_sym_Channel2] = ACTIONS(126),
    [anon_sym_Channel3] = ACTIONS(126),
    [anon_sym_Channel4] = ACTIONS(126),
    [anon_sym_Channel5] = ACTIONS(126),
    [anon_sym_Channel6] = ACTIONS(126),
    [anon_sym_Channel7] = ACTIONS(126),
    [anon_sym_Charge] = ACTIONS(126),
    [anon_sym_Chart] = ACTIONS(126),
    [anon_sym_ChartedNavPoints] = ACTIONS(126),
    [anon_sym_ClearMemory] = ACTIONS(126),
    [anon_sym_CollectableGoods] = ACTIONS(126),
    [anon_sym_Color] = ACTIONS(126),
    [anon_sym_Combustion] = ACTIONS(126),
    [anon_sym_CombustionInput] = ACTIONS(126),
    [anon_sym_CombustionInput2] = ACTIONS(126),
    [anon_sym_CombustionLimiter] = ACTIONS(126),
    [anon_sym_CombustionOutput] = ACTIONS(126),
    [anon_sym_CombustionOutput2] = ACTIONS(126),
    [anon_sym_CompletionRatio] = ACTIONS(126),
    [anon_sym_ContactTypeId] = ACTIONS(126),
    [anon_sym_CurrentCode] = ACTIONS(126),
    [anon_sym_CurrentResearchPodType] = ACTIONS(126),
    [anon_sym_Density] = ACTIONS(126),
    [anon_sym_DestinationCode] = ACTIONS(126),
    [anon_sym_Discover] = ACTIONS(126),
    [anon_sym_DistanceAu] = ACTIONS(126),
    [anon_sym_DistanceKm] = ACTIONS(126),
    [anon_sym_DrillCondition] = ACTIONS(126),
    [anon_sym_DryMass] = ACTIONS(126),
    [anon_sym_Eccentricity] = ACTIONS(126),
    [anon_sym_ElevatorLevel] = ACTIONS(126),
    [anon_sym_ElevatorSpeed] = ACTIONS(126),
    [anon_sym_EntityState] = ACTIONS(126),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(126),
    [anon_sym_Error] = ACTIONS(126),
    [anon_sym_ExhaustVelocity] = ACTIONS(126),
    [anon_sym_ExportCount] = ACTIONS(126),
    [anon_sym_ExportQuantity] = ACTIONS(126),
    [anon_sym_ExportSlotHash] = ACTIONS(126),
    [anon_sym_ExportSlotOccupant] = ACTIONS(126),
    [anon_sym_Filtration] = ACTIONS(126),
    [anon_sym_FlightControlRule] = ACTIONS(126),
    [anon_sym_Flush] = ACTIONS(126),
    [anon_sym_ForceWrite] = ACTIONS(126),
    [anon_sym_ForwardX] = ACTIONS(126),
    [anon_sym_ForwardY] = ACTIONS(126),
    [anon_sym_ForwardZ] = ACTIONS(126),
    [anon_sym_Fuel] = ACTIONS(126),
    [anon_sym_Harvest] = ACTIONS(126),
    [anon_sym_Horizontal] = ACTIONS(126),
    [anon_sym_HorizontalRatio] = ACTIONS(126),
    [anon_sym_Idle] = ACTIONS(126),
    [anon_sym_ImportCount] = ACTIONS(126),
    [anon_sym_ImportQuantity] = ACTIONS(126),
    [anon_sym_ImportSlotHash] = ACTIONS(126),
    [anon_sym_ImportSlotOccupant] = ACTIONS(126),
    [anon_sym_Inclination] = ACTIONS(126),
    [anon_sym_Index] = ACTIONS(126),
    [anon_sym_InterrogationProgress] = ACTIONS(126),
    [anon_sym_LineNumber] = ACTIONS(126),
    [anon_sym_Lock] = ACTIONS(126),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(126),
    [anon_sym_Mass] = ACTIONS(126),
    [anon_sym_Maximum] = ACTIONS(126),
    [anon_sym_MineablesInQueue] = ACTIONS(126),
    [anon_sym_MineablesInVicinity] = ACTIONS(126),
    [anon_sym_MinedQuantity] = ACTIONS(126),
    [anon_sym_MinimumWattsToContact] = ACTIONS(126),
    [anon_sym_Mode] = ACTIONS(126),
    [anon_sym_NavPoints] = ACTIONS(126),
    [anon_sym_NextWeatherEventTime] = ACTIONS(126),
    [anon_sym_None] = ACTIONS(126),
    [anon_sym_On] = ACTIONS(126),
    [anon_sym_Open] = ACTIONS(126),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(126),
    [anon_sym_OrbitPeriod] = ACTIONS(126),
    [anon_sym_Orientation] = ACTIONS(126),
    [anon_sym_Output] = ACTIONS(126),
    [anon_sym_PassedMoles] = ACTIONS(126),
    [anon_sym_Plant] = ACTIONS(126),
    [anon_sym_PlantEfficiency1] = ACTIONS(126),
    [anon_sym_PlantEfficiency2] = ACTIONS(126),
    [anon_sym_PlantEfficiency3] = ACTIONS(126),
    [anon_sym_PlantEfficiency4] = ACTIONS(126),
    [anon_sym_PlantGrowth1] = ACTIONS(126),
    [anon_sym_PlantGrowth2] = ACTIONS(126),
    [anon_sym_PlantGrowth3] = ACTIONS(126),
    [anon_sym_PlantGrowth4] = ACTIONS(126),
    [anon_sym_PlantHash1] = ACTIONS(126),
    [anon_sym_PlantHash2] = ACTIONS(126),
    [anon_sym_PlantHash3] = ACTIONS(126),
    [anon_sym_PlantHash4] = ACTIONS(126),
    [anon_sym_PlantHealth1] = ACTIONS(126),
    [anon_sym_PlantHealth2] = ACTIONS(126),
    [anon_sym_PlantHealth3] = ACTIONS(126),
    [anon_sym_PlantHealth4] = ACTIONS(126),
    [anon_sym_PositionX] = ACTIONS(126),
    [anon_sym_PositionY] = ACTIONS(126),
    [anon_sym_PositionZ] = ACTIONS(126),
    [anon_sym_Power] = ACTIONS(126),
    [anon_sym_PowerActual] = ACTIONS(126),
    [anon_sym_PowerGeneration] = ACTIONS(126),
    [anon_sym_PowerPotential] = ACTIONS(126),
    [anon_sym_PowerRequired] = ACTIONS(126),
    [anon_sym_PrefabHash] = ACTIONS(126),
    [anon_sym_Pressure] = ACTIONS(126),
    [anon_sym_PressureEfficiency] = ACTIONS(126),
    [anon_sym_PressureExternal] = ACTIONS(126),
    [anon_sym_PressureInput] = ACTIONS(126),
    [anon_sym_PressureInput2] = ACTIONS(126),
    [anon_sym_PressureInternal] = ACTIONS(126),
    [anon_sym_PressureOutput] = ACTIONS(126),
    [anon_sym_PressureOutput2] = ACTIONS(126),
    [anon_sym_PressureSetting] = ACTIONS(126),
    [anon_sym_Progress] = ACTIONS(126),
    [anon_sym_Quantity] = ACTIONS(126),
    [anon_sym_Ratio] = ACTIONS(126),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(126),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(126),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(126),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(126),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(126),
    [anon_sym_RatioHydrogen] = ACTIONS(126),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(126),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(126),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(126),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(126),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(126),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(126),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(126),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(126),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(126),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(126),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(126),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(126),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(126),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(126),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(126),
    [anon_sym_RatioNitrogen] = ACTIONS(126),
    [anon_sym_RatioNitrogenInput] = ACTIONS(126),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(126),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(126),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(126),
    [anon_sym_RatioNitrousOxide] = ACTIONS(126),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(126),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(126),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(126),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(126),
    [anon_sym_RatioOxygen] = ACTIONS(126),
    [anon_sym_RatioOxygenInput] = ACTIONS(126),
    [anon_sym_RatioOxygenInput2] = ACTIONS(126),
    [anon_sym_RatioOxygenOutput] = ACTIONS(126),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(126),
    [anon_sym_RatioPollutant] = ACTIONS(126),
    [anon_sym_RatioPollutantInput] = ACTIONS(126),
    [anon_sym_RatioPollutantInput2] = ACTIONS(126),
    [anon_sym_RatioPollutantOutput] = ACTIONS(126),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(126),
    [anon_sym_RatioPollutedWater] = ACTIONS(126),
    [anon_sym_RatioSteam] = ACTIONS(126),
    [anon_sym_RatioSteamInput] = ACTIONS(126),
    [anon_sym_RatioSteamInput2] = ACTIONS(126),
    [anon_sym_RatioSteamOutput] = ACTIONS(126),
    [anon_sym_RatioSteamOutput2] = ACTIONS(126),
    [anon_sym_RatioVolatiles] = ACTIONS(126),
    [anon_sym_RatioVolatilesInput] = ACTIONS(126),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(126),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(126),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(126),
    [anon_sym_RatioWater] = ACTIONS(126),
    [anon_sym_RatioWaterInput] = ACTIONS(126),
    [anon_sym_RatioWaterInput2] = ACTIONS(126),
    [anon_sym_RatioWaterOutput] = ACTIONS(126),
    [anon_sym_RatioWaterOutput2] = ACTIONS(126),
    [anon_sym_ReEntryAltitude] = ACTIONS(126),
    [anon_sym_Reagents] = ACTIONS(126),
    [anon_sym_RecipeHash] = ACTIONS(126),
    [anon_sym_ReferenceId] = ACTIONS(126),
    [anon_sym_RequestHash] = ACTIONS(126),
    [anon_sym_RequiredPower] = ACTIONS(126),
    [anon_sym_ReturnFuelCost] = ACTIONS(126),
    [anon_sym_Richness] = ACTIONS(126),
    [anon_sym_Rpm] = ACTIONS(126),
    [anon_sym_SemiMajorAxis] = ACTIONS(126),
    [anon_sym_Setting] = ACTIONS(126),
    [anon_sym_SettingInput] = ACTIONS(126),
    [anon_sym_SettingOutput] = ACTIONS(126),
    [anon_sym_SignalID] = ACTIONS(126),
    [anon_sym_SignalStrength] = ACTIONS(126),
    [anon_sym_Sites] = ACTIONS(126),
    [anon_sym_Size] = ACTIONS(126),
    [anon_sym_SizeX] = ACTIONS(126),
    [anon_sym_SizeY] = ACTIONS(126),
    [anon_sym_SizeZ] = ACTIONS(126),
    [anon_sym_SolarAngle] = ACTIONS(126),
    [anon_sym_SolarIrradiance] = ACTIONS(126),
    [anon_sym_SoundAlert] = ACTIONS(126),
    [anon_sym_Stress] = ACTIONS(126),
    [anon_sym_Survey] = ACTIONS(126),
    [anon_sym_TargetPadIndex] = ACTIONS(126),
    [anon_sym_TargetX] = ACTIONS(126),
    [anon_sym_TargetY] = ACTIONS(126),
    [anon_sym_TargetZ] = ACTIONS(126),
    [anon_sym_Temperature] = ACTIONS(126),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(126),
    [anon_sym_TemperatureExternal] = ACTIONS(126),
    [anon_sym_TemperatureInput] = ACTIONS(126),
    [anon_sym_TemperatureInput2] = ACTIONS(126),
    [anon_sym_TemperatureOutput] = ACTIONS(126),
    [anon_sym_TemperatureOutput2] = ACTIONS(126),
    [anon_sym_TemperatureSetting] = ACTIONS(126),
    [anon_sym_Throttle] = ACTIONS(126),
    [anon_sym_Thrust] = ACTIONS(126),
    [anon_sym_ThrustToWeight] = ACTIONS(126),
    [anon_sym_Time] = ACTIONS(126),
    [anon_sym_TimeToDestination] = ACTIONS(126),
    [anon_sym_TotalMoles] = ACTIONS(126),
    [anon_sym_TotalMolesInput] = ACTIONS(126),
    [anon_sym_TotalMolesInput2] = ACTIONS(126),
    [anon_sym_TotalMolesOutput] = ACTIONS(126),
    [anon_sym_TotalMolesOutput2] = ACTIONS(126),
    [anon_sym_TotalQuantity] = ACTIONS(126),
    [anon_sym_TrueAnomaly] = ACTIONS(126),
    [anon_sym_VelocityMagnitude] = ACTIONS(126),
    [anon_sym_VelocityRelativeX] = ACTIONS(126),
    [anon_sym_VelocityRelativeY] = ACTIONS(126),
    [anon_sym_VelocityRelativeZ] = ACTIONS(126),
    [anon_sym_VelocityX] = ACTIONS(126),
    [anon_sym_VelocityY] = ACTIONS(126),
    [anon_sym_VelocityZ] = ACTIONS(126),
    [anon_sym_Vertical] = ACTIONS(126),
    [anon_sym_VerticalRatio] = ACTIONS(126),
    [anon_sym_Volume] = ACTIONS(126),
    [anon_sym_VolumeOfLiquid] = ACTIONS(126),
    [anon_sym_WattsReachingContact] = ACTIONS(126),
    [anon_sym_Weight] = ACTIONS(126),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(126),
    [anon_sym_ChargeRatio] = ACTIONS(126),
    [anon_sym_Class] = ACTIONS(126),
    [anon_sym_Damage] = ACTIONS(126),
    [anon_sym_Efficiency] = ACTIONS(126),
    [anon_sym_FilterType] = ACTIONS(126),
    [anon_sym_Growth] = ACTIONS(126),
    [anon_sym_Health] = ACTIONS(126),
    [anon_sym_Mature] = ACTIONS(126),
    [anon_sym_MaxQuantity] = ACTIONS(126),
    [anon_sym_OccupantHash] = ACTIONS(126),
    [anon_sym_Occupied] = ACTIONS(126),
    [anon_sym_PressureAir] = ACTIONS(126),
    [anon_sym_PressureWaste] = ACTIONS(126),
    [anon_sym_Seeding] = ACTIONS(126),
    [anon_sym_SortingClass] = ACTIONS(126),
    [anon_sym_Average] = ACTIONS(126),
    [anon_sym_Minimum] = ACTIONS(126),
    [anon_sym_Sum] = ACTIONS(126),
    [anon_sym_Contents] = ACTIONS(126),
    [anon_sym_Recipe] = ACTIONS(126),
    [anon_sym_Required] = ACTIONS(126),
    [anon_sym_TotalContents] = ACTIONS(126),
    [sym_enum] = ACTIONS(128),
    [sym_deprecated] = ACTIONS(126),
  },
  [15] = {
    [sym_identifier] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(132),
    [anon_sym_CR_LF] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(132),
    [sym_register] = ACTIONS(132),
    [sym_device] = ACTIONS(132),
    [anon_sym_nan] = ACTIONS(130),
    [anon_sym_pinf] = ACTIONS(130),
    [anon_sym_ninf] = ACTIONS(130),
    [anon_sym_pi] = ACTIONS(130),
    [anon_sym_deg2rad] = ACTIONS(130),
    [anon_sym_rad2deg] = ACTIONS(130),
    [anon_sym_epsilon] = ACTIONS(130),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(132),
    [aux_sym_number_token1] = ACTIONS(132),
    [anon_sym_Acceleration] = ACTIONS(130),
    [anon_sym_Activate] = ACTIONS(130),
    [anon_sym_AirRelease] = ACTIONS(130),
    [anon_sym_AlignmentError] = ACTIONS(130),
    [anon_sym_Apex] = ACTIONS(130),
    [anon_sym_AutoLand] = ACTIONS(130),
    [anon_sym_AutoShutOff] = ACTIONS(130),
    [anon_sym_Bpm] = ACTIONS(130),
    [anon_sym_BurnTimeRemaining] = ACTIONS(130),
    [anon_sym_CelestialHash] = ACTIONS(130),
    [anon_sym_CelestialParentHash] = ACTIONS(130),
    [anon_sym_Channel0] = ACTIONS(130),
    [anon_sym_Channel1] = ACTIONS(130),
    [anon_sym_Channel2] = ACTIONS(130),
    [anon_sym_Channel3] = ACTIONS(130),
    [anon_sym_Channel4] = ACTIONS(130),
    [anon_sym_Channel5] = ACTIONS(130),
    [anon_sym_Channel6] = ACTIONS(130),
    [anon_sym_Channel7] = ACTIONS(130),
    [anon_sym_Charge] = ACTIONS(130),
    [anon_sym_Chart] = ACTIONS(130),
    [anon_sym_ChartedNavPoints] = ACTIONS(130),
    [anon_sym_ClearMemory] = ACTIONS(130),
    [anon_sym_CollectableGoods] = ACTIONS(130),
    [anon_sym_Color] = ACTIONS(130),
    [anon_sym_Combustion] = ACTIONS(130),
    [anon_sym_CombustionInput] = ACTIONS(130),
    [anon_sym_CombustionInput2] = ACTIONS(130),
    [anon_sym_CombustionLimiter] = ACTIONS(130),
    [anon_sym_CombustionOutput] = ACTIONS(130),
    [anon_sym_CombustionOutput2] = ACTIONS(130),
    [anon_sym_CompletionRatio] = ACTIONS(130),
    [anon_sym_ContactTypeId] = ACTIONS(130),
    [anon_sym_CurrentCode] = ACTIONS(130),
    [anon_sym_CurrentResearchPodType] = ACTIONS(130),
    [anon_sym_Density] = ACTIONS(130),
    [anon_sym_DestinationCode] = ACTIONS(130),
    [anon_sym_Discover] = ACTIONS(130),
    [anon_sym_DistanceAu] = ACTIONS(130),
    [anon_sym_DistanceKm] = ACTIONS(130),
    [anon_sym_DrillCondition] = ACTIONS(130),
    [anon_sym_DryMass] = ACTIONS(130),
    [anon_sym_Eccentricity] = ACTIONS(130),
    [anon_sym_ElevatorLevel] = ACTIONS(130),
    [anon_sym_ElevatorSpeed] = ACTIONS(130),
    [anon_sym_EntityState] = ACTIONS(130),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(130),
    [anon_sym_Error] = ACTIONS(130),
    [anon_sym_ExhaustVelocity] = ACTIONS(130),
    [anon_sym_ExportCount] = ACTIONS(130),
    [anon_sym_ExportQuantity] = ACTIONS(130),
    [anon_sym_ExportSlotHash] = ACTIONS(130),
    [anon_sym_ExportSlotOccupant] = ACTIONS(130),
    [anon_sym_Filtration] = ACTIONS(130),
    [anon_sym_FlightControlRule] = ACTIONS(130),
    [anon_sym_Flush] = ACTIONS(130),
    [anon_sym_ForceWrite] = ACTIONS(130),
    [anon_sym_ForwardX] = ACTIONS(130),
    [anon_sym_ForwardY] = ACTIONS(130),
    [anon_sym_ForwardZ] = ACTIONS(130),
    [anon_sym_Fuel] = ACTIONS(130),
    [anon_sym_Harvest] = ACTIONS(130),
    [anon_sym_Horizontal] = ACTIONS(130),
    [anon_sym_HorizontalRatio] = ACTIONS(130),
    [anon_sym_Idle] = ACTIONS(130),
    [anon_sym_ImportCount] = ACTIONS(130),
    [anon_sym_ImportQuantity] = ACTIONS(130),
    [anon_sym_ImportSlotHash] = ACTIONS(130),
    [anon_sym_ImportSlotOccupant] = ACTIONS(130),
    [anon_sym_Inclination] = ACTIONS(130),
    [anon_sym_Index] = ACTIONS(130),
    [anon_sym_InterrogationProgress] = ACTIONS(130),
    [anon_sym_LineNumber] = ACTIONS(130),
    [anon_sym_Lock] = ACTIONS(130),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(130),
    [anon_sym_Mass] = ACTIONS(130),
    [anon_sym_Maximum] = ACTIONS(130),
    [anon_sym_MineablesInQueue] = ACTIONS(130),
    [anon_sym_MineablesInVicinity] = ACTIONS(130),
    [anon_sym_MinedQuantity] = ACTIONS(130),
    [anon_sym_MinimumWattsToContact] = ACTIONS(130),
    [anon_sym_Mode] = ACTIONS(130),
    [anon_sym_NavPoints] = ACTIONS(130),
    [anon_sym_NextWeatherEventTime] = ACTIONS(130),
    [anon_sym_None] = ACTIONS(130),
    [anon_sym_On] = ACTIONS(130),
    [anon_sym_Open] = ACTIONS(130),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(130),
    [anon_sym_OrbitPeriod] = ACTIONS(130),
    [anon_sym_Orientation] = ACTIONS(130),
    [anon_sym_Output] = ACTIONS(130),
    [anon_sym_PassedMoles] = ACTIONS(130),
    [anon_sym_Plant] = ACTIONS(130),
    [anon_sym_PlantEfficiency1] = ACTIONS(130),
    [anon_sym_PlantEfficiency2] = ACTIONS(130),
    [anon_sym_PlantEfficiency3] = ACTIONS(130),
    [anon_sym_PlantEfficiency4] = ACTIONS(130),
    [anon_sym_PlantGrowth1] = ACTIONS(130),
    [anon_sym_PlantGrowth2] = ACTIONS(130),
    [anon_sym_PlantGrowth3] = ACTIONS(130),
    [anon_sym_PlantGrowth4] = ACTIONS(130),
    [anon_sym_PlantHash1] = ACTIONS(130),
    [anon_sym_PlantHash2] = ACTIONS(130),
    [anon_sym_PlantHash3] = ACTIONS(130),
    [anon_sym_PlantHash4] = ACTIONS(130),
    [anon_sym_PlantHealth1] = ACTIONS(130),
    [anon_sym_PlantHealth2] = ACTIONS(130),
    [anon_sym_PlantHealth3] = ACTIONS(130),
    [anon_sym_PlantHealth4] = ACTIONS(130),
    [anon_sym_PositionX] = ACTIONS(130),
    [anon_sym_PositionY] = ACTIONS(130),
    [anon_sym_PositionZ] = ACTIONS(130),
    [anon_sym_Power] = ACTIONS(130),
    [anon_sym_PowerActual] = ACTIONS(130),
    [anon_sym_PowerGeneration] = ACTIONS(130),
    [anon_sym_PowerPotential] = ACTIONS(130),
    [anon_sym_PowerRequired] = ACTIONS(130),
    [anon_sym_PrefabHash] = ACTIONS(130),
    [anon_sym_Pressure] = ACTIONS(130),
    [anon_sym_PressureEfficiency] = ACTIONS(130),
    [anon_sym_PressureExternal] = ACTIONS(130),
    [anon_sym_PressureInput] = ACTIONS(130),
    [anon_sym_PressureInput2] = ACTIONS(130),
    [anon_sym_PressureInternal] = ACTIONS(130),
    [anon_sym_PressureOutput] = ACTIONS(130),
    [anon_sym_PressureOutput2] = ACTIONS(130),
    [anon_sym_PressureSetting] = ACTIONS(130),
    [anon_sym_Progress] = ACTIONS(130),
    [anon_sym_Quantity] = ACTIONS(130),
    [anon_sym_Ratio] = ACTIONS(130),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(130),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(130),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(130),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(130),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(130),
    [anon_sym_RatioHydrogen] = ACTIONS(130),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(130),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(130),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(130),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(130),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(130),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(130),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(130),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(130),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(130),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(130),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(130),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(130),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(130),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(130),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(130),
    [anon_sym_RatioNitrogen] = ACTIONS(130),
    [anon_sym_RatioNitrogenInput] = ACTIONS(130),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(130),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(130),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(130),
    [anon_sym_RatioNitrousOxide] = ACTIONS(130),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(130),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(130),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(130),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(130),
    [anon_sym_RatioOxygen] = ACTIONS(130),
    [anon_sym_RatioOxygenInput] = ACTIONS(130),
    [anon_sym_RatioOxygenInput2] = ACTIONS(130),
    [anon_sym_RatioOxygenOutput] = ACTIONS(130),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(130),
    [anon_sym_RatioPollutant] = ACTIONS(130),
    [anon_sym_RatioPollutantInput] = ACTIONS(130),
    [anon_sym_RatioPollutantInput2] = ACTIONS(130),
    [anon_sym_RatioPollutantOutput] = ACTIONS(130),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(130),
    [anon_sym_RatioPollutedWater] = ACTIONS(130),
    [anon_sym_RatioSteam] = ACTIONS(130),
    [anon_sym_RatioSteamInput] = ACTIONS(130),
    [anon_sym_RatioSteamInput2] = ACTIONS(130),
    [anon_sym_RatioSteamOutput] = ACTIONS(130),
    [anon_sym_RatioSteamOutput2] = ACTIONS(130),
    [anon_sym_RatioVolatiles] = ACTIONS(130),
    [anon_sym_RatioVolatilesInput] = ACTIONS(130),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(130),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(130),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(130),
    [anon_sym_RatioWater] = ACTIONS(130),
    [anon_sym_RatioWaterInput] = ACTIONS(130),
    [anon_sym_RatioWaterInput2] = ACTIONS(130),
    [anon_sym_RatioWaterOutput] = ACTIONS(130),
    [anon_sym_RatioWaterOutput2] = ACTIONS(130),
    [anon_sym_ReEntryAltitude] = ACTIONS(130),
    [anon_sym_Reagents] = ACTIONS(130),
    [anon_sym_RecipeHash] = ACTIONS(130),
    [anon_sym_ReferenceId] = ACTIONS(130),
    [anon_sym_RequestHash] = ACTIONS(130),
    [anon_sym_RequiredPower] = ACTIONS(130),
    [anon_sym_ReturnFuelCost] = ACTIONS(130),
    [anon_sym_Richness] = ACTIONS(130),
    [anon_sym_Rpm] = ACTIONS(130),
    [anon_sym_SemiMajorAxis] = ACTIONS(130),
    [anon_sym_Setting] = ACTIONS(130),
    [anon_sym_SettingInput] = ACTIONS(130),
    [anon_sym_SettingOutput] = ACTIONS(130),
    [anon_sym_SignalID] = ACTIONS(130),
    [anon_sym_SignalStrength] = ACTIONS(130),
    [anon_sym_Sites] = ACTIONS(130),
    [anon_sym_Size] = ACTIONS(130),
    [anon_sym_SizeX] = ACTIONS(130),
    [anon_sym_SizeY] = ACTIONS(130),
    [anon_sym_SizeZ] = ACTIONS(130),
    [anon_sym_SolarAngle] = ACTIONS(130),
    [anon_sym_SolarIrradiance] = ACTIONS(130),
    [anon_sym_SoundAlert] = ACTIONS(130),
    [anon_sym_Stress] = ACTIONS(130),
    [anon_sym_Survey] = ACTIONS(130),
    [anon_sym_TargetPadIndex] = ACTIONS(130),
    [anon_sym_TargetX] = ACTIONS(130),
    [anon_sym_TargetY] = ACTIONS(130),
    [anon_sym_TargetZ] = ACTIONS(130),
    [anon_sym_Temperature] = ACTIONS(130),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(130),
    [anon_sym_TemperatureExternal] = ACTIONS(130),
    [anon_sym_TemperatureInput] = ACTIONS(130),
    [anon_sym_TemperatureInput2] = ACTIONS(130),
    [anon_sym_TemperatureOutput] = ACTIONS(130),
    [anon_sym_TemperatureOutput2] = ACTIONS(130),
    [anon_sym_TemperatureSetting] = ACTIONS(130),
    [anon_sym_Throttle] = ACTIONS(130),
    [anon_sym_Thrust] = ACTIONS(130),
    [anon_sym_ThrustToWeight] = ACTIONS(130),
    [anon_sym_Time] = ACTIONS(130),
    [anon_sym_TimeToDestination] = ACTIONS(130),
    [anon_sym_TotalMoles] = ACTIONS(130),
    [anon_sym_TotalMolesInput] = ACTIONS(130),
    [anon_sym_TotalMolesInput2] = ACTIONS(130),
    [anon_sym_TotalMolesOutput] = ACTIONS(130),
    [anon_sym_TotalMolesOutput2] = ACTIONS(130),
    [anon_sym_TotalQuantity] = ACTIONS(130),
    [anon_sym_TrueAnomaly] = ACTIONS(130),
    [anon_sym_VelocityMagnitude] = ACTIONS(130),
    [anon_sym_VelocityRelativeX] = ACTIONS(130),
    [anon_sym_VelocityRelativeY] = ACTIONS(130),
    [anon_sym_VelocityRelativeZ] = ACTIONS(130),
    [anon_sym_VelocityX] = ACTIONS(130),
    [anon_sym_VelocityY] = ACTIONS(130),
    [anon_sym_VelocityZ] = ACTIONS(130),
    [anon_sym_Vertical] = ACTIONS(130),
    [anon_sym_VerticalRatio] = ACTIONS(130),
    [anon_sym_Volume] = ACTIONS(130),
    [anon_sym_VolumeOfLiquid] = ACTIONS(130),
    [anon_sym_WattsReachingContact] = ACTIONS(130),
    [anon_sym_Weight] = ACTIONS(130),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(130),
    [anon_sym_ChargeRatio] = ACTIONS(130),
    [anon_sym_Class] = ACTIONS(130),
    [anon_sym_Damage] = ACTIONS(130),
    [anon_sym_Efficiency] = ACTIONS(130),
    [anon_sym_FilterType] = ACTIONS(130),
    [anon_sym_Growth] = ACTIONS(130),
    [anon_sym_Health] = ACTIONS(130),
    [anon_sym_Mature] = ACTIONS(130),
    [anon_sym_MaxQuantity] = ACTIONS(130),
    [anon_sym_OccupantHash] = ACTIONS(130),
    [anon_sym_Occupied] = ACTIONS(130),
    [anon_sym_PressureAir] = ACTIONS(130),
    [anon_sym_PressureWaste] = ACTIONS(130),
    [anon_sym_Seeding] = ACTIONS(130),
    [anon_sym_SortingClass] = ACTIONS(130),
    [anon_sym_Average] = ACTIONS(130),
    [anon_sym_Minimum] = ACTIONS(130),
    [anon_sym_Sum] = ACTIONS(130),
    [anon_sym_Contents] = ACTIONS(130),
    [anon_sym_Recipe] = ACTIONS(130),
    [anon_sym_Required] = ACTIONS(130),
    [anon_sym_TotalContents] = ACTIONS(130),
    [sym_enum] = ACTIONS(132),
    [sym_deprecated] = ACTIONS(130),
  },
  [16] = {
    [sym_identifier] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(136),
    [anon_sym_CR_LF] = ACTIONS(136),
    [anon_sym_CR] = ACTIONS(134),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(136),
    [sym_register] = ACTIONS(136),
    [sym_device] = ACTIONS(136),
    [anon_sym_nan] = ACTIONS(134),
    [anon_sym_pinf] = ACTIONS(134),
    [anon_sym_ninf] = ACTIONS(134),
    [anon_sym_pi] = ACTIONS(134),
    [anon_sym_deg2rad] = ACTIONS(134),
    [anon_sym_rad2deg] = ACTIONS(134),
    [anon_sym_epsilon] = ACTIONS(134),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(136),
    [aux_sym_number_token1] = ACTIONS(136),
    [anon_sym_Acceleration] = ACTIONS(134),
    [anon_sym_Activate] = ACTIONS(134),
    [anon_sym_AirRelease] = ACTIONS(134),
    [anon_sym_AlignmentError] = ACTIONS(134),
    [anon_sym_Apex] = ACTIONS(134),
    [anon_sym_AutoLand] = ACTIONS(134),
    [anon_sym_AutoShutOff] = ACTIONS(134),
    [anon_sym_Bpm] = ACTIONS(134),
    [anon_sym_BurnTimeRemaining] = ACTIONS(134),
    [anon_sym_CelestialHash] = ACTIONS(134),
    [anon_sym_CelestialParentHash] = ACTIONS(134),
    [anon_sym_Channel0] = ACTIONS(134),
    [anon_sym_Channel1] = ACTIONS(134),
    [anon_sym_Channel2] = ACTIONS(134),
    [anon_sym_Channel3] = ACTIONS(134),
    [anon_sym_Channel4] = ACTIONS(134),
    [anon_sym_Channel5] = ACTIONS(134),
    [anon_sym_Channel6] = ACTIONS(134),
    [anon_sym_Channel7] = ACTIONS(134),
    [anon_sym_Charge] = ACTIONS(134),
    [anon_sym_Chart] = ACTIONS(134),
    [anon_sym_ChartedNavPoints] = ACTIONS(134),
    [anon_sym_ClearMemory] = ACTIONS(134),
    [anon_sym_CollectableGoods] = ACTIONS(134),
    [anon_sym_Color] = ACTIONS(134),
    [anon_sym_Combustion] = ACTIONS(134),
    [anon_sym_CombustionInput] = ACTIONS(134),
    [anon_sym_CombustionInput2] = ACTIONS(134),
    [anon_sym_CombustionLimiter] = ACTIONS(134),
    [anon_sym_CombustionOutput] = ACTIONS(134),
    [anon_sym_CombustionOutput2] = ACTIONS(134),
    [anon_sym_CompletionRatio] = ACTIONS(134),
    [anon_sym_ContactTypeId] = ACTIONS(134),
    [anon_sym_CurrentCode] = ACTIONS(134),
    [anon_sym_CurrentResearchPodType] = ACTIONS(134),
    [anon_sym_Density] = ACTIONS(134),
    [anon_sym_DestinationCode] = ACTIONS(134),
    [anon_sym_Discover] = ACTIONS(134),
    [anon_sym_DistanceAu] = ACTIONS(134),
    [anon_sym_DistanceKm] = ACTIONS(134),
    [anon_sym_DrillCondition] = ACTIONS(134),
    [anon_sym_DryMass] = ACTIONS(134),
    [anon_sym_Eccentricity] = ACTIONS(134),
    [anon_sym_ElevatorLevel] = ACTIONS(134),
    [anon_sym_ElevatorSpeed] = ACTIONS(134),
    [anon_sym_EntityState] = ACTIONS(134),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(134),
    [anon_sym_Error] = ACTIONS(134),
    [anon_sym_ExhaustVelocity] = ACTIONS(134),
    [anon_sym_ExportCount] = ACTIONS(134),
    [anon_sym_ExportQuantity] = ACTIONS(134),
    [anon_sym_ExportSlotHash] = ACTIONS(134),
    [anon_sym_ExportSlotOccupant] = ACTIONS(134),
    [anon_sym_Filtration] = ACTIONS(134),
    [anon_sym_FlightControlRule] = ACTIONS(134),
    [anon_sym_Flush] = ACTIONS(134),
    [anon_sym_ForceWrite] = ACTIONS(134),
    [anon_sym_ForwardX] = ACTIONS(134),
    [anon_sym_ForwardY] = ACTIONS(134),
    [anon_sym_ForwardZ] = ACTIONS(134),
    [anon_sym_Fuel] = ACTIONS(134),
    [anon_sym_Harvest] = ACTIONS(134),
    [anon_sym_Horizontal] = ACTIONS(134),
    [anon_sym_HorizontalRatio] = ACTIONS(134),
    [anon_sym_Idle] = ACTIONS(134),
    [anon_sym_ImportCount] = ACTIONS(134),
    [anon_sym_ImportQuantity] = ACTIONS(134),
    [anon_sym_ImportSlotHash] = ACTIONS(134),
    [anon_sym_ImportSlotOccupant] = ACTIONS(134),
    [anon_sym_Inclination] = ACTIONS(134),
    [anon_sym_Index] = ACTIONS(134),
    [anon_sym_InterrogationProgress] = ACTIONS(134),
    [anon_sym_LineNumber] = ACTIONS(134),
    [anon_sym_Lock] = ACTIONS(134),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(134),
    [anon_sym_Mass] = ACTIONS(134),
    [anon_sym_Maximum] = ACTIONS(134),
    [anon_sym_MineablesInQueue] = ACTIONS(134),
    [anon_sym_MineablesInVicinity] = ACTIONS(134),
    [anon_sym_MinedQuantity] = ACTIONS(134),
    [anon_sym_MinimumWattsToContact] = ACTIONS(134),
    [anon_sym_Mode] = ACTIONS(134),
    [anon_sym_NavPoints] = ACTIONS(134),
    [anon_sym_NextWeatherEventTime] = ACTIONS(134),
    [anon_sym_None] = ACTIONS(134),
    [anon_sym_On] = ACTIONS(134),
    [anon_sym_Open] = ACTIONS(134),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(134),
    [anon_sym_OrbitPeriod] = ACTIONS(134),
    [anon_sym_Orientation] = ACTIONS(134),
    [anon_sym_Output] = ACTIONS(134),
    [anon_sym_PassedMoles] = ACTIONS(134),
    [anon_sym_Plant] = ACTIONS(134),
    [anon_sym_PlantEfficiency1] = ACTIONS(134),
    [anon_sym_PlantEfficiency2] = ACTIONS(134),
    [anon_sym_PlantEfficiency3] = ACTIONS(134),
    [anon_sym_PlantEfficiency4] = ACTIONS(134),
    [anon_sym_PlantGrowth1] = ACTIONS(134),
    [anon_sym_PlantGrowth2] = ACTIONS(134),
    [anon_sym_PlantGrowth3] = ACTIONS(134),
    [anon_sym_PlantGrowth4] = ACTIONS(134),
    [anon_sym_PlantHash1] = ACTIONS(134),
    [anon_sym_PlantHash2] = ACTIONS(134),
    [anon_sym_PlantHash3] = ACTIONS(134),
    [anon_sym_PlantHash4] = ACTIONS(134),
    [anon_sym_PlantHealth1] = ACTIONS(134),
    [anon_sym_PlantHealth2] = ACTIONS(134),
    [anon_sym_PlantHealth3] = ACTIONS(134),
    [anon_sym_PlantHealth4] = ACTIONS(134),
    [anon_sym_PositionX] = ACTIONS(134),
    [anon_sym_PositionY] = ACTIONS(134),
    [anon_sym_PositionZ] = ACTIONS(134),
    [anon_sym_Power] = ACTIONS(134),
    [anon_sym_PowerActual] = ACTIONS(134),
    [anon_sym_PowerGeneration] = ACTIONS(134),
    [anon_sym_PowerPotential] = ACTIONS(134),
    [anon_sym_PowerRequired] = ACTIONS(134),
    [anon_sym_PrefabHash] = ACTIONS(134),
    [anon_sym_Pressure] = ACTIONS(134),
    [anon_sym_PressureEfficiency] = ACTIONS(134),
    [anon_sym_PressureExternal] = ACTIONS(134),
    [anon_sym_PressureInput] = ACTIONS(134),
    [anon_sym_PressureInput2] = ACTIONS(134),
    [anon_sym_PressureInternal] = ACTIONS(134),
    [anon_sym_PressureOutput] = ACTIONS(134),
    [anon_sym_PressureOutput2] = ACTIONS(134),
    [anon_sym_PressureSetting] = ACTIONS(134),
    [anon_sym_Progress] = ACTIONS(134),
    [anon_sym_Quantity] = ACTIONS(134),
    [anon_sym_Ratio] = ACTIONS(134),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(134),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(134),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(134),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(134),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(134),
    [anon_sym_RatioHydrogen] = ACTIONS(134),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(134),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(134),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(134),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(134),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(134),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(134),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(134),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(134),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(134),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(134),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(134),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(134),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(134),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(134),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(134),
    [anon_sym_RatioNitrogen] = ACTIONS(134),
    [anon_sym_RatioNitrogenInput] = ACTIONS(134),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(134),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(134),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(134),
    [anon_sym_RatioNitrousOxide] = ACTIONS(134),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(134),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(134),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(134),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(134),
    [anon_sym_RatioOxygen] = ACTIONS(134),
    [anon_sym_RatioOxygenInput] = ACTIONS(134),
    [anon_sym_RatioOxygenInput2] = ACTIONS(134),
    [anon_sym_RatioOxygenOutput] = ACTIONS(134),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(134),
    [anon_sym_RatioPollutant] = ACTIONS(134),
    [anon_sym_RatioPollutantInput] = ACTIONS(134),
    [anon_sym_RatioPollutantInput2] = ACTIONS(134),
    [anon_sym_RatioPollutantOutput] = ACTIONS(134),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(134),
    [anon_sym_RatioPollutedWater] = ACTIONS(134),
    [anon_sym_RatioSteam] = ACTIONS(134),
    [anon_sym_RatioSteamInput] = ACTIONS(134),
    [anon_sym_RatioSteamInput2] = ACTIONS(134),
    [anon_sym_RatioSteamOutput] = ACTIONS(134),
    [anon_sym_RatioSteamOutput2] = ACTIONS(134),
    [anon_sym_RatioVolatiles] = ACTIONS(134),
    [anon_sym_RatioVolatilesInput] = ACTIONS(134),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(134),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(134),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(134),
    [anon_sym_RatioWater] = ACTIONS(134),
    [anon_sym_RatioWaterInput] = ACTIONS(134),
    [anon_sym_RatioWaterInput2] = ACTIONS(134),
    [anon_sym_RatioWaterOutput] = ACTIONS(134),
    [anon_sym_RatioWaterOutput2] = ACTIONS(134),
    [anon_sym_ReEntryAltitude] = ACTIONS(134),
    [anon_sym_Reagents] = ACTIONS(134),
    [anon_sym_RecipeHash] = ACTIONS(134),
    [anon_sym_ReferenceId] = ACTIONS(134),
    [anon_sym_RequestHash] = ACTIONS(134),
    [anon_sym_RequiredPower] = ACTIONS(134),
    [anon_sym_ReturnFuelCost] = ACTIONS(134),
    [anon_sym_Richness] = ACTIONS(134),
    [anon_sym_Rpm] = ACTIONS(134),
    [anon_sym_SemiMajorAxis] = ACTIONS(134),
    [anon_sym_Setting] = ACTIONS(134),
    [anon_sym_SettingInput] = ACTIONS(134),
    [anon_sym_SettingOutput] = ACTIONS(134),
    [anon_sym_SignalID] = ACTIONS(134),
    [anon_sym_SignalStrength] = ACTIONS(134),
    [anon_sym_Sites] = ACTIONS(134),
    [anon_sym_Size] = ACTIONS(134),
    [anon_sym_SizeX] = ACTIONS(134),
    [anon_sym_SizeY] = ACTIONS(134),
    [anon_sym_SizeZ] = ACTIONS(134),
    [anon_sym_SolarAngle] = ACTIONS(134),
    [anon_sym_SolarIrradiance] = ACTIONS(134),
    [anon_sym_SoundAlert] = ACTIONS(134),
    [anon_sym_Stress] = ACTIONS(134),
    [anon_sym_Survey] = ACTIONS(134),
    [anon_sym_TargetPadIndex] = ACTIONS(134),
    [anon_sym_TargetX] = ACTIONS(134),
    [anon_sym_TargetY] = ACTIONS(134),
    [anon_sym_TargetZ] = ACTIONS(134),
    [anon_sym_Temperature] = ACTIONS(134),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(134),
    [anon_sym_TemperatureExternal] = ACTIONS(134),
    [anon_sym_TemperatureInput] = ACTIONS(134),
    [anon_sym_TemperatureInput2] = ACTIONS(134),
    [anon_sym_TemperatureOutput] = ACTIONS(134),
    [anon_sym_TemperatureOutput2] = ACTIONS(134),
    [anon_sym_TemperatureSetting] = ACTIONS(134),
    [anon_sym_Throttle] = ACTIONS(134),
    [anon_sym_Thrust] = ACTIONS(134),
    [anon_sym_ThrustToWeight] = ACTIONS(134),
    [anon_sym_Time] = ACTIONS(134),
    [anon_sym_TimeToDestination] = ACTIONS(134),
    [anon_sym_TotalMoles] = ACTIONS(134),
    [anon_sym_TotalMolesInput] = ACTIONS(134),
    [anon_sym_TotalMolesInput2] = ACTIONS(134),
    [anon_sym_TotalMolesOutput] = ACTIONS(134),
    [anon_sym_TotalMolesOutput2] = ACTIONS(134),
    [anon_sym_TotalQuantity] = ACTIONS(134),
    [anon_sym_TrueAnomaly] = ACTIONS(134),
    [anon_sym_VelocityMagnitude] = ACTIONS(134),
    [anon_sym_VelocityRelativeX] = ACTIONS(134),
    [anon_sym_VelocityRelativeY] = ACTIONS(134),
    [anon_sym_VelocityRelativeZ] = ACTIONS(134),
    [anon_sym_VelocityX] = ACTIONS(134),
    [anon_sym_VelocityY] = ACTIONS(134),
    [anon_sym_VelocityZ] = ACTIONS(134),
    [anon_sym_Vertical] = ACTIONS(134),
    [anon_sym_VerticalRatio] = ACTIONS(134),
    [anon_sym_Volume] = ACTIONS(134),
    [anon_sym_VolumeOfLiquid] = ACTIONS(134),
    [anon_sym_WattsReachingContact] = ACTIONS(134),
    [anon_sym_Weight] = ACTIONS(134),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(134),
    [anon_sym_ChargeRatio] = ACTIONS(134),
    [anon_sym_Class] = ACTIONS(134),
    [anon_sym_Damage] = ACTIONS(134),
    [anon_sym_Efficiency] = ACTIONS(134),
    [anon_sym_FilterType] = ACTIONS(134),
    [anon_sym_Growth] = ACTIONS(134),
    [anon_sym_Health] = ACTIONS(134),
    [anon_sym_Mature] = ACTIONS(134),
    [anon_sym_MaxQuantity] = ACTIONS(134),
    [anon_sym_OccupantHash] = ACTIONS(134),
    [anon_sym_Occupied] = ACTIONS(134),
    [anon_sym_PressureAir] = ACTIONS(134),
    [anon_sym_PressureWaste] = ACTIONS(134),
    [anon_sym_Seeding] = ACTIONS(134),
    [anon_sym_SortingClass] = ACTIONS(134),
    [anon_sym_Average] = ACTIONS(134),
    [anon_sym_Minimum] = ACTIONS(134),
    [anon_sym_Sum] = ACTIONS(134),
    [anon_sym_Contents] = ACTIONS(134),
    [anon_sym_Recipe] = ACTIONS(134),
    [anon_sym_Required] = ACTIONS(134),
    [anon_sym_TotalContents] = ACTIONS(134),
    [sym_enum] = ACTIONS(136),
    [sym_deprecated] = ACTIONS(134),
  },
  [17] = {
    [sym_identifier] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(138),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(140),
    [sym_register] = ACTIONS(140),
    [sym_device] = ACTIONS(140),
    [anon_sym_nan] = ACTIONS(138),
    [anon_sym_pinf] = ACTIONS(138),
    [anon_sym_ninf] = ACTIONS(138),
    [anon_sym_pi] = ACTIONS(138),
    [anon_sym_deg2rad] = ACTIONS(138),
    [anon_sym_rad2deg] = ACTIONS(138),
    [anon_sym_epsilon] = ACTIONS(138),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(140),
    [aux_sym_number_token1] = ACTIONS(140),
    [anon_sym_Acceleration] = ACTIONS(138),
    [anon_sym_Activate] = ACTIONS(138),
    [anon_sym_AirRelease] = ACTIONS(138),
    [anon_sym_AlignmentError] = ACTIONS(138),
    [anon_sym_Apex] = ACTIONS(138),
    [anon_sym_AutoLand] = ACTIONS(138),
    [anon_sym_AutoShutOff] = ACTIONS(138),
    [anon_sym_Bpm] = ACTIONS(138),
    [anon_sym_BurnTimeRemaining] = ACTIONS(138),
    [anon_sym_CelestialHash] = ACTIONS(138),
    [anon_sym_CelestialParentHash] = ACTIONS(138),
    [anon_sym_Channel0] = ACTIONS(138),
    [anon_sym_Channel1] = ACTIONS(138),
    [anon_sym_Channel2] = ACTIONS(138),
    [anon_sym_Channel3] = ACTIONS(138),
    [anon_sym_Channel4] = ACTIONS(138),
    [anon_sym_Channel5] = ACTIONS(138),
    [anon_sym_Channel6] = ACTIONS(138),
    [anon_sym_Channel7] = ACTIONS(138),
    [anon_sym_Charge] = ACTIONS(138),
    [anon_sym_Chart] = ACTIONS(138),
    [anon_sym_ChartedNavPoints] = ACTIONS(138),
    [anon_sym_ClearMemory] = ACTIONS(138),
    [anon_sym_CollectableGoods] = ACTIONS(138),
    [anon_sym_Color] = ACTIONS(138),
    [anon_sym_Combustion] = ACTIONS(138),
    [anon_sym_CombustionInput] = ACTIONS(138),
    [anon_sym_CombustionInput2] = ACTIONS(138),
    [anon_sym_CombustionLimiter] = ACTIONS(138),
    [anon_sym_CombustionOutput] = ACTIONS(138),
    [anon_sym_CombustionOutput2] = ACTIONS(138),
    [anon_sym_CompletionRatio] = ACTIONS(138),
    [anon_sym_ContactTypeId] = ACTIONS(138),
    [anon_sym_CurrentCode] = ACTIONS(138),
    [anon_sym_CurrentResearchPodType] = ACTIONS(138),
    [anon_sym_Density] = ACTIONS(138),
    [anon_sym_DestinationCode] = ACTIONS(138),
    [anon_sym_Discover] = ACTIONS(138),
    [anon_sym_DistanceAu] = ACTIONS(138),
    [anon_sym_DistanceKm] = ACTIONS(138),
    [anon_sym_DrillCondition] = ACTIONS(138),
    [anon_sym_DryMass] = ACTIONS(138),
    [anon_sym_Eccentricity] = ACTIONS(138),
    [anon_sym_ElevatorLevel] = ACTIONS(138),
    [anon_sym_ElevatorSpeed] = ACTIONS(138),
    [anon_sym_EntityState] = ACTIONS(138),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(138),
    [anon_sym_Error] = ACTIONS(138),
    [anon_sym_ExhaustVelocity] = ACTIONS(138),
    [anon_sym_ExportCount] = ACTIONS(138),
    [anon_sym_ExportQuantity] = ACTIONS(138),
    [anon_sym_ExportSlotHash] = ACTIONS(138),
    [anon_sym_ExportSlotOccupant] = ACTIONS(138),
    [anon_sym_Filtration] = ACTIONS(138),
    [anon_sym_FlightControlRule] = ACTIONS(138),
    [anon_sym_Flush] = ACTIONS(138),
    [anon_sym_ForceWrite] = ACTIONS(138),
    [anon_sym_ForwardX] = ACTIONS(138),
    [anon_sym_ForwardY] = ACTIONS(138),
    [anon_sym_ForwardZ] = ACTIONS(138),
    [anon_sym_Fuel] = ACTIONS(138),
    [anon_sym_Harvest] = ACTIONS(138),
    [anon_sym_Horizontal] = ACTIONS(138),
    [anon_sym_HorizontalRatio] = ACTIONS(138),
    [anon_sym_Idle] = ACTIONS(138),
    [anon_sym_ImportCount] = ACTIONS(138),
    [anon_sym_ImportQuantity] = ACTIONS(138),
    [anon_sym_ImportSlotHash] = ACTIONS(138),
    [anon_sym_ImportSlotOccupant] = ACTIONS(138),
    [anon_sym_Inclination] = ACTIONS(138),
    [anon_sym_Index] = ACTIONS(138),
    [anon_sym_InterrogationProgress] = ACTIONS(138),
    [anon_sym_LineNumber] = ACTIONS(138),
    [anon_sym_Lock] = ACTIONS(138),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(138),
    [anon_sym_Mass] = ACTIONS(138),
    [anon_sym_Maximum] = ACTIONS(138),
    [anon_sym_MineablesInQueue] = ACTIONS(138),
    [anon_sym_MineablesInVicinity] = ACTIONS(138),
    [anon_sym_MinedQuantity] = ACTIONS(138),
    [anon_sym_MinimumWattsToContact] = ACTIONS(138),
    [anon_sym_Mode] = ACTIONS(138),
    [anon_sym_NavPoints] = ACTIONS(138),
    [anon_sym_NextWeatherEventTime] = ACTIONS(138),
    [anon_sym_None] = ACTIONS(138),
    [anon_sym_On] = ACTIONS(138),
    [anon_sym_Open] = ACTIONS(138),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(138),
    [anon_sym_OrbitPeriod] = ACTIONS(138),
    [anon_sym_Orientation] = ACTIONS(138),
    [anon_sym_Output] = ACTIONS(138),
    [anon_sym_PassedMoles] = ACTIONS(138),
    [anon_sym_Plant] = ACTIONS(138),
    [anon_sym_PlantEfficiency1] = ACTIONS(138),
    [anon_sym_PlantEfficiency2] = ACTIONS(138),
    [anon_sym_PlantEfficiency3] = ACTIONS(138),
    [anon_sym_PlantEfficiency4] = ACTIONS(138),
    [anon_sym_PlantGrowth1] = ACTIONS(138),
    [anon_sym_PlantGrowth2] = ACTIONS(138),
    [anon_sym_PlantGrowth3] = ACTIONS(138),
    [anon_sym_PlantGrowth4] = ACTIONS(138),
    [anon_sym_PlantHash1] = ACTIONS(138),
    [anon_sym_PlantHash2] = ACTIONS(138),
    [anon_sym_PlantHash3] = ACTIONS(138),
    [anon_sym_PlantHash4] = ACTIONS(138),
    [anon_sym_PlantHealth1] = ACTIONS(138),
    [anon_sym_PlantHealth2] = ACTIONS(138),
    [anon_sym_PlantHealth3] = ACTIONS(138),
    [anon_sym_PlantHealth4] = ACTIONS(138),
    [anon_sym_PositionX] = ACTIONS(138),
    [anon_sym_PositionY] = ACTIONS(138),
    [anon_sym_PositionZ] = ACTIONS(138),
    [anon_sym_Power] = ACTIONS(138),
    [anon_sym_PowerActual] = ACTIONS(138),
    [anon_sym_PowerGeneration] = ACTIONS(138),
    [anon_sym_PowerPotential] = ACTIONS(138),
    [anon_sym_PowerRequired] = ACTIONS(138),
    [anon_sym_PrefabHash] = ACTIONS(138),
    [anon_sym_Pressure] = ACTIONS(138),
    [anon_sym_PressureEfficiency] = ACTIONS(138),
    [anon_sym_PressureExternal] = ACTIONS(138),
    [anon_sym_PressureInput] = ACTIONS(138),
    [anon_sym_PressureInput2] = ACTIONS(138),
    [anon_sym_PressureInternal] = ACTIONS(138),
    [anon_sym_PressureOutput] = ACTIONS(138),
    [anon_sym_PressureOutput2] = ACTIONS(138),
    [anon_sym_PressureSetting] = ACTIONS(138),
    [anon_sym_Progress] = ACTIONS(138),
    [anon_sym_Quantity] = ACTIONS(138),
    [anon_sym_Ratio] = ACTIONS(138),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(138),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(138),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(138),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(138),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(138),
    [anon_sym_RatioHydrogen] = ACTIONS(138),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(138),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(138),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(138),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(138),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(138),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(138),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(138),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(138),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(138),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(138),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(138),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(138),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(138),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(138),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(138),
    [anon_sym_RatioNitrogen] = ACTIONS(138),
    [anon_sym_RatioNitrogenInput] = ACTIONS(138),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(138),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(138),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(138),
    [anon_sym_RatioNitrousOxide] = ACTIONS(138),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(138),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(138),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(138),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(138),
    [anon_sym_RatioOxygen] = ACTIONS(138),
    [anon_sym_RatioOxygenInput] = ACTIONS(138),
    [anon_sym_RatioOxygenInput2] = ACTIONS(138),
    [anon_sym_RatioOxygenOutput] = ACTIONS(138),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(138),
    [anon_sym_RatioPollutant] = ACTIONS(138),
    [anon_sym_RatioPollutantInput] = ACTIONS(138),
    [anon_sym_RatioPollutantInput2] = ACTIONS(138),
    [anon_sym_RatioPollutantOutput] = ACTIONS(138),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(138),
    [anon_sym_RatioPollutedWater] = ACTIONS(138),
    [anon_sym_RatioSteam] = ACTIONS(138),
    [anon_sym_RatioSteamInput] = ACTIONS(138),
    [anon_sym_RatioSteamInput2] = ACTIONS(138),
    [anon_sym_RatioSteamOutput] = ACTIONS(138),
    [anon_sym_RatioSteamOutput2] = ACTIONS(138),
    [anon_sym_RatioVolatiles] = ACTIONS(138),
    [anon_sym_RatioVolatilesInput] = ACTIONS(138),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(138),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(138),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(138),
    [anon_sym_RatioWater] = ACTIONS(138),
    [anon_sym_RatioWaterInput] = ACTIONS(138),
    [anon_sym_RatioWaterInput2] = ACTIONS(138),
    [anon_sym_RatioWaterOutput] = ACTIONS(138),
    [anon_sym_RatioWaterOutput2] = ACTIONS(138),
    [anon_sym_ReEntryAltitude] = ACTIONS(138),
    [anon_sym_Reagents] = ACTIONS(138),
    [anon_sym_RecipeHash] = ACTIONS(138),
    [anon_sym_ReferenceId] = ACTIONS(138),
    [anon_sym_RequestHash] = ACTIONS(138),
    [anon_sym_RequiredPower] = ACTIONS(138),
    [anon_sym_ReturnFuelCost] = ACTIONS(138),
    [anon_sym_Richness] = ACTIONS(138),
    [anon_sym_Rpm] = ACTIONS(138),
    [anon_sym_SemiMajorAxis] = ACTIONS(138),
    [anon_sym_Setting] = ACTIONS(138),
    [anon_sym_SettingInput] = ACTIONS(138),
    [anon_sym_SettingOutput] = ACTIONS(138),
    [anon_sym_SignalID] = ACTIONS(138),
    [anon_sym_SignalStrength] = ACTIONS(138),
    [anon_sym_Sites] = ACTIONS(138),
    [anon_sym_Size] = ACTIONS(138),
    [anon_sym_SizeX] = ACTIONS(138),
    [anon_sym_SizeY] = ACTIONS(138),
    [anon_sym_SizeZ] = ACTIONS(138),
    [anon_sym_SolarAngle] = ACTIONS(138),
    [anon_sym_SolarIrradiance] = ACTIONS(138),
    [anon_sym_SoundAlert] = ACTIONS(138),
    [anon_sym_Stress] = ACTIONS(138),
    [anon_sym_Survey] = ACTIONS(138),
    [anon_sym_TargetPadIndex] = ACTIONS(138),
    [anon_sym_TargetX] = ACTIONS(138),
    [anon_sym_TargetY] = ACTIONS(138),
    [anon_sym_TargetZ] = ACTIONS(138),
    [anon_sym_Temperature] = ACTIONS(138),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(138),
    [anon_sym_TemperatureExternal] = ACTIONS(138),
    [anon_sym_TemperatureInput] = ACTIONS(138),
    [anon_sym_TemperatureInput2] = ACTIONS(138),
    [anon_sym_TemperatureOutput] = ACTIONS(138),
    [anon_sym_TemperatureOutput2] = ACTIONS(138),
    [anon_sym_TemperatureSetting] = ACTIONS(138),
    [anon_sym_Throttle] = ACTIONS(138),
    [anon_sym_Thrust] = ACTIONS(138),
    [anon_sym_ThrustToWeight] = ACTIONS(138),
    [anon_sym_Time] = ACTIONS(138),
    [anon_sym_TimeToDestination] = ACTIONS(138),
    [anon_sym_TotalMoles] = ACTIONS(138),
    [anon_sym_TotalMolesInput] = ACTIONS(138),
    [anon_sym_TotalMolesInput2] = ACTIONS(138),
    [anon_sym_TotalMolesOutput] = ACTIONS(138),
    [anon_sym_TotalMolesOutput2] = ACTIONS(138),
    [anon_sym_TotalQuantity] = ACTIONS(138),
    [anon_sym_TrueAnomaly] = ACTIONS(138),
    [anon_sym_VelocityMagnitude] = ACTIONS(138),
    [anon_sym_VelocityRelativeX] = ACTIONS(138),
    [anon_sym_VelocityRelativeY] = ACTIONS(138),
    [anon_sym_VelocityRelativeZ] = ACTIONS(138),
    [anon_sym_VelocityX] = ACTIONS(138),
    [anon_sym_VelocityY] = ACTIONS(138),
    [anon_sym_VelocityZ] = ACTIONS(138),
    [anon_sym_Vertical] = ACTIONS(138),
    [anon_sym_VerticalRatio] = ACTIONS(138),
    [anon_sym_Volume] = ACTIONS(138),
    [anon_sym_VolumeOfLiquid] = ACTIONS(138),
    [anon_sym_WattsReachingContact] = ACTIONS(138),
    [anon_sym_Weight] = ACTIONS(138),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(138),
    [anon_sym_ChargeRatio] = ACTIONS(138),
    [anon_sym_Class] = ACTIONS(138),
    [anon_sym_Damage] = ACTIONS(138),
    [anon_sym_Efficiency] = ACTIONS(138),
    [anon_sym_FilterType] = ACTIONS(138),
    [anon_sym_Growth] = ACTIONS(138),
    [anon_sym_Health] = ACTIONS(138),
    [anon_sym_Mature] = ACTIONS(138),
    [anon_sym_MaxQuantity] = ACTIONS(138),
    [anon_sym_OccupantHash] = ACTIONS(138),
    [anon_sym_Occupied] = ACTIONS(138),
    [anon_sym_PressureAir] = ACTIONS(138),
    [anon_sym_PressureWaste] = ACTIONS(138),
    [anon_sym_Seeding] = ACTIONS(138),
    [anon_sym_SortingClass] = ACTIONS(138),
    [anon_sym_Average] = ACTIONS(138),
    [anon_sym_Minimum] = ACTIONS(138),
    [anon_sym_Sum] = ACTIONS(138),
    [anon_sym_Contents] = ACTIONS(138),
    [anon_sym_Recipe] = ACTIONS(138),
    [anon_sym_Required] = ACTIONS(138),
    [anon_sym_TotalContents] = ACTIONS(138),
    [sym_enum] = ACTIONS(140),
    [sym_deprecated] = ACTIONS(138),
  },
  [18] = {
    [sym_identifier] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(142),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(144),
    [sym_register] = ACTIONS(144),
    [sym_device] = ACTIONS(144),
    [anon_sym_nan] = ACTIONS(142),
    [anon_sym_pinf] = ACTIONS(142),
    [anon_sym_ninf] = ACTIONS(142),
    [anon_sym_pi] = ACTIONS(142),
    [anon_sym_deg2rad] = ACTIONS(142),
    [anon_sym_rad2deg] = ACTIONS(142),
    [anon_sym_epsilon] = ACTIONS(142),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(144),
    [aux_sym_number_token1] = ACTIONS(144),
    [anon_sym_Acceleration] = ACTIONS(142),
    [anon_sym_Activate] = ACTIONS(142),
    [anon_sym_AirRelease] = ACTIONS(142),
    [anon_sym_AlignmentError] = ACTIONS(142),
    [anon_sym_Apex] = ACTIONS(142),
    [anon_sym_AutoLand] = ACTIONS(142),
    [anon_sym_AutoShutOff] = ACTIONS(142),
    [anon_sym_Bpm] = ACTIONS(142),
    [anon_sym_BurnTimeRemaining] = ACTIONS(142),
    [anon_sym_CelestialHash] = ACTIONS(142),
    [anon_sym_CelestialParentHash] = ACTIONS(142),
    [anon_sym_Channel0] = ACTIONS(142),
    [anon_sym_Channel1] = ACTIONS(142),
    [anon_sym_Channel2] = ACTIONS(142),
    [anon_sym_Channel3] = ACTIONS(142),
    [anon_sym_Channel4] = ACTIONS(142),
    [anon_sym_Channel5] = ACTIONS(142),
    [anon_sym_Channel6] = ACTIONS(142),
    [anon_sym_Channel7] = ACTIONS(142),
    [anon_sym_Charge] = ACTIONS(142),
    [anon_sym_Chart] = ACTIONS(142),
    [anon_sym_ChartedNavPoints] = ACTIONS(142),
    [anon_sym_ClearMemory] = ACTIONS(142),
    [anon_sym_CollectableGoods] = ACTIONS(142),
    [anon_sym_Color] = ACTIONS(142),
    [anon_sym_Combustion] = ACTIONS(142),
    [anon_sym_CombustionInput] = ACTIONS(142),
    [anon_sym_CombustionInput2] = ACTIONS(142),
    [anon_sym_CombustionLimiter] = ACTIONS(142),
    [anon_sym_CombustionOutput] = ACTIONS(142),
    [anon_sym_CombustionOutput2] = ACTIONS(142),
    [anon_sym_CompletionRatio] = ACTIONS(142),
    [anon_sym_ContactTypeId] = ACTIONS(142),
    [anon_sym_CurrentCode] = ACTIONS(142),
    [anon_sym_CurrentResearchPodType] = ACTIONS(142),
    [anon_sym_Density] = ACTIONS(142),
    [anon_sym_DestinationCode] = ACTIONS(142),
    [anon_sym_Discover] = ACTIONS(142),
    [anon_sym_DistanceAu] = ACTIONS(142),
    [anon_sym_DistanceKm] = ACTIONS(142),
    [anon_sym_DrillCondition] = ACTIONS(142),
    [anon_sym_DryMass] = ACTIONS(142),
    [anon_sym_Eccentricity] = ACTIONS(142),
    [anon_sym_ElevatorLevel] = ACTIONS(142),
    [anon_sym_ElevatorSpeed] = ACTIONS(142),
    [anon_sym_EntityState] = ACTIONS(142),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(142),
    [anon_sym_Error] = ACTIONS(142),
    [anon_sym_ExhaustVelocity] = ACTIONS(142),
    [anon_sym_ExportCount] = ACTIONS(142),
    [anon_sym_ExportQuantity] = ACTIONS(142),
    [anon_sym_ExportSlotHash] = ACTIONS(142),
    [anon_sym_ExportSlotOccupant] = ACTIONS(142),
    [anon_sym_Filtration] = ACTIONS(142),
    [anon_sym_FlightControlRule] = ACTIONS(142),
    [anon_sym_Flush] = ACTIONS(142),
    [anon_sym_ForceWrite] = ACTIONS(142),
    [anon_sym_ForwardX] = ACTIONS(142),
    [anon_sym_ForwardY] = ACTIONS(142),
    [anon_sym_ForwardZ] = ACTIONS(142),
    [anon_sym_Fuel] = ACTIONS(142),
    [anon_sym_Harvest] = ACTIONS(142),
    [anon_sym_Horizontal] = ACTIONS(142),
    [anon_sym_HorizontalRatio] = ACTIONS(142),
    [anon_sym_Idle] = ACTIONS(142),
    [anon_sym_ImportCount] = ACTIONS(142),
    [anon_sym_ImportQuantity] = ACTIONS(142),
    [anon_sym_ImportSlotHash] = ACTIONS(142),
    [anon_sym_ImportSlotOccupant] = ACTIONS(142),
    [anon_sym_Inclination] = ACTIONS(142),
    [anon_sym_Index] = ACTIONS(142),
    [anon_sym_InterrogationProgress] = ACTIONS(142),
    [anon_sym_LineNumber] = ACTIONS(142),
    [anon_sym_Lock] = ACTIONS(142),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(142),
    [anon_sym_Mass] = ACTIONS(142),
    [anon_sym_Maximum] = ACTIONS(142),
    [anon_sym_MineablesInQueue] = ACTIONS(142),
    [anon_sym_MineablesInVicinity] = ACTIONS(142),
    [anon_sym_MinedQuantity] = ACTIONS(142),
    [anon_sym_MinimumWattsToContact] = ACTIONS(142),
    [anon_sym_Mode] = ACTIONS(142),
    [anon_sym_NavPoints] = ACTIONS(142),
    [anon_sym_NextWeatherEventTime] = ACTIONS(142),
    [anon_sym_None] = ACTIONS(142),
    [anon_sym_On] = ACTIONS(142),
    [anon_sym_Open] = ACTIONS(142),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(142),
    [anon_sym_OrbitPeriod] = ACTIONS(142),
    [anon_sym_Orientation] = ACTIONS(142),
    [anon_sym_Output] = ACTIONS(142),
    [anon_sym_PassedMoles] = ACTIONS(142),
    [anon_sym_Plant] = ACTIONS(142),
    [anon_sym_PlantEfficiency1] = ACTIONS(142),
    [anon_sym_PlantEfficiency2] = ACTIONS(142),
    [anon_sym_PlantEfficiency3] = ACTIONS(142),
    [anon_sym_PlantEfficiency4] = ACTIONS(142),
    [anon_sym_PlantGrowth1] = ACTIONS(142),
    [anon_sym_PlantGrowth2] = ACTIONS(142),
    [anon_sym_PlantGrowth3] = ACTIONS(142),
    [anon_sym_PlantGrowth4] = ACTIONS(142),
    [anon_sym_PlantHash1] = ACTIONS(142),
    [anon_sym_PlantHash2] = ACTIONS(142),
    [anon_sym_PlantHash3] = ACTIONS(142),
    [anon_sym_PlantHash4] = ACTIONS(142),
    [anon_sym_PlantHealth1] = ACTIONS(142),
    [anon_sym_PlantHealth2] = ACTIONS(142),
    [anon_sym_PlantHealth3] = ACTIONS(142),
    [anon_sym_PlantHealth4] = ACTIONS(142),
    [anon_sym_PositionX] = ACTIONS(142),
    [anon_sym_PositionY] = ACTIONS(142),
    [anon_sym_PositionZ] = ACTIONS(142),
    [anon_sym_Power] = ACTIONS(142),
    [anon_sym_PowerActual] = ACTIONS(142),
    [anon_sym_PowerGeneration] = ACTIONS(142),
    [anon_sym_PowerPotential] = ACTIONS(142),
    [anon_sym_PowerRequired] = ACTIONS(142),
    [anon_sym_PrefabHash] = ACTIONS(142),
    [anon_sym_Pressure] = ACTIONS(142),
    [anon_sym_PressureEfficiency] = ACTIONS(142),
    [anon_sym_PressureExternal] = ACTIONS(142),
    [anon_sym_PressureInput] = ACTIONS(142),
    [anon_sym_PressureInput2] = ACTIONS(142),
    [anon_sym_PressureInternal] = ACTIONS(142),
    [anon_sym_PressureOutput] = ACTIONS(142),
    [anon_sym_PressureOutput2] = ACTIONS(142),
    [anon_sym_PressureSetting] = ACTIONS(142),
    [anon_sym_Progress] = ACTIONS(142),
    [anon_sym_Quantity] = ACTIONS(142),
    [anon_sym_Ratio] = ACTIONS(142),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(142),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(142),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(142),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(142),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(142),
    [anon_sym_RatioHydrogen] = ACTIONS(142),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(142),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(142),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(142),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(142),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(142),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(142),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(142),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(142),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(142),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(142),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(142),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(142),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(142),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(142),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(142),
    [anon_sym_RatioNitrogen] = ACTIONS(142),
    [anon_sym_RatioNitrogenInput] = ACTIONS(142),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(142),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(142),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(142),
    [anon_sym_RatioNitrousOxide] = ACTIONS(142),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(142),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(142),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(142),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(142),
    [anon_sym_RatioOxygen] = ACTIONS(142),
    [anon_sym_RatioOxygenInput] = ACTIONS(142),
    [anon_sym_RatioOxygenInput2] = ACTIONS(142),
    [anon_sym_RatioOxygenOutput] = ACTIONS(142),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(142),
    [anon_sym_RatioPollutant] = ACTIONS(142),
    [anon_sym_RatioPollutantInput] = ACTIONS(142),
    [anon_sym_RatioPollutantInput2] = ACTIONS(142),
    [anon_sym_RatioPollutantOutput] = ACTIONS(142),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(142),
    [anon_sym_RatioPollutedWater] = ACTIONS(142),
    [anon_sym_RatioSteam] = ACTIONS(142),
    [anon_sym_RatioSteamInput] = ACTIONS(142),
    [anon_sym_RatioSteamInput2] = ACTIONS(142),
    [anon_sym_RatioSteamOutput] = ACTIONS(142),
    [anon_sym_RatioSteamOutput2] = ACTIONS(142),
    [anon_sym_RatioVolatiles] = ACTIONS(142),
    [anon_sym_RatioVolatilesInput] = ACTIONS(142),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(142),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(142),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(142),
    [anon_sym_RatioWater] = ACTIONS(142),
    [anon_sym_RatioWaterInput] = ACTIONS(142),
    [anon_sym_RatioWaterInput2] = ACTIONS(142),
    [anon_sym_RatioWaterOutput] = ACTIONS(142),
    [anon_sym_RatioWaterOutput2] = ACTIONS(142),
    [anon_sym_ReEntryAltitude] = ACTIONS(142),
    [anon_sym_Reagents] = ACTIONS(142),
    [anon_sym_RecipeHash] = ACTIONS(142),
    [anon_sym_ReferenceId] = ACTIONS(142),
    [anon_sym_RequestHash] = ACTIONS(142),
    [anon_sym_RequiredPower] = ACTIONS(142),
    [anon_sym_ReturnFuelCost] = ACTIONS(142),
    [anon_sym_Richness] = ACTIONS(142),
    [anon_sym_Rpm] = ACTIONS(142),
    [anon_sym_SemiMajorAxis] = ACTIONS(142),
    [anon_sym_Setting] = ACTIONS(142),
    [anon_sym_SettingInput] = ACTIONS(142),
    [anon_sym_SettingOutput] = ACTIONS(142),
    [anon_sym_SignalID] = ACTIONS(142),
    [anon_sym_SignalStrength] = ACTIONS(142),
    [anon_sym_Sites] = ACTIONS(142),
    [anon_sym_Size] = ACTIONS(142),
    [anon_sym_SizeX] = ACTIONS(142),
    [anon_sym_SizeY] = ACTIONS(142),
    [anon_sym_SizeZ] = ACTIONS(142),
    [anon_sym_SolarAngle] = ACTIONS(142),
    [anon_sym_SolarIrradiance] = ACTIONS(142),
    [anon_sym_SoundAlert] = ACTIONS(142),
    [anon_sym_Stress] = ACTIONS(142),
    [anon_sym_Survey] = ACTIONS(142),
    [anon_sym_TargetPadIndex] = ACTIONS(142),
    [anon_sym_TargetX] = ACTIONS(142),
    [anon_sym_TargetY] = ACTIONS(142),
    [anon_sym_TargetZ] = ACTIONS(142),
    [anon_sym_Temperature] = ACTIONS(142),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(142),
    [anon_sym_TemperatureExternal] = ACTIONS(142),
    [anon_sym_TemperatureInput] = ACTIONS(142),
    [anon_sym_TemperatureInput2] = ACTIONS(142),
    [anon_sym_TemperatureOutput] = ACTIONS(142),
    [anon_sym_TemperatureOutput2] = ACTIONS(142),
    [anon_sym_TemperatureSetting] = ACTIONS(142),
    [anon_sym_Throttle] = ACTIONS(142),
    [anon_sym_Thrust] = ACTIONS(142),
    [anon_sym_ThrustToWeight] = ACTIONS(142),
    [anon_sym_Time] = ACTIONS(142),
    [anon_sym_TimeToDestination] = ACTIONS(142),
    [anon_sym_TotalMoles] = ACTIONS(142),
    [anon_sym_TotalMolesInput] = ACTIONS(142),
    [anon_sym_TotalMolesInput2] = ACTIONS(142),
    [anon_sym_TotalMolesOutput] = ACTIONS(142),
    [anon_sym_TotalMolesOutput2] = ACTIONS(142),
    [anon_sym_TotalQuantity] = ACTIONS(142),
    [anon_sym_TrueAnomaly] = ACTIONS(142),
    [anon_sym_VelocityMagnitude] = ACTIONS(142),
    [anon_sym_VelocityRelativeX] = ACTIONS(142),
    [anon_sym_VelocityRelativeY] = ACTIONS(142),
    [anon_sym_VelocityRelativeZ] = ACTIONS(142),
    [anon_sym_VelocityX] = ACTIONS(142),
    [anon_sym_VelocityY] = ACTIONS(142),
    [anon_sym_VelocityZ] = ACTIONS(142),
    [anon_sym_Vertical] = ACTIONS(142),
    [anon_sym_VerticalRatio] = ACTIONS(142),
    [anon_sym_Volume] = ACTIONS(142),
    [anon_sym_VolumeOfLiquid] = ACTIONS(142),
    [anon_sym_WattsReachingContact] = ACTIONS(142),
    [anon_sym_Weight] = ACTIONS(142),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(142),
    [anon_sym_ChargeRatio] = ACTIONS(142),
    [anon_sym_Class] = ACTIONS(142),
    [anon_sym_Damage] = ACTIONS(142),
    [anon_sym_Efficiency] = ACTIONS(142),
    [anon_sym_FilterType] = ACTIONS(142),
    [anon_sym_Growth] = ACTIONS(142),
    [anon_sym_Health] = ACTIONS(142),
    [anon_sym_Mature] = ACTIONS(142),
    [anon_sym_MaxQuantity] = ACTIONS(142),
    [anon_sym_OccupantHash] = ACTIONS(142),
    [anon_sym_Occupied] = ACTIONS(142),
    [anon_sym_PressureAir] = ACTIONS(142),
    [anon_sym_PressureWaste] = ACTIONS(142),
    [anon_sym_Seeding] = ACTIONS(142),
    [anon_sym_SortingClass] = ACTIONS(142),
    [anon_sym_Average] = ACTIONS(142),
    [anon_sym_Minimum] = ACTIONS(142),
    [anon_sym_Sum] = ACTIONS(142),
    [anon_sym_Contents] = ACTIONS(142),
    [anon_sym_Recipe] = ACTIONS(142),
    [anon_sym_Required] = ACTIONS(142),
    [anon_sym_TotalContents] = ACTIONS(142),
    [sym_enum] = ACTIONS(144),
    [sym_deprecated] = ACTIONS(142),
  },
  [19] = {
    [sym_identifier] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(146),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(148),
    [sym_register] = ACTIONS(148),
    [sym_device] = ACTIONS(148),
    [anon_sym_nan] = ACTIONS(146),
    [anon_sym_pinf] = ACTIONS(146),
    [anon_sym_ninf] = ACTIONS(146),
    [anon_sym_pi] = ACTIONS(146),
    [anon_sym_deg2rad] = ACTIONS(146),
    [anon_sym_rad2deg] = ACTIONS(146),
    [anon_sym_epsilon] = ACTIONS(146),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(148),
    [aux_sym_number_token1] = ACTIONS(148),
    [anon_sym_Acceleration] = ACTIONS(146),
    [anon_sym_Activate] = ACTIONS(146),
    [anon_sym_AirRelease] = ACTIONS(146),
    [anon_sym_AlignmentError] = ACTIONS(146),
    [anon_sym_Apex] = ACTIONS(146),
    [anon_sym_AutoLand] = ACTIONS(146),
    [anon_sym_AutoShutOff] = ACTIONS(146),
    [anon_sym_Bpm] = ACTIONS(146),
    [anon_sym_BurnTimeRemaining] = ACTIONS(146),
    [anon_sym_CelestialHash] = ACTIONS(146),
    [anon_sym_CelestialParentHash] = ACTIONS(146),
    [anon_sym_Channel0] = ACTIONS(146),
    [anon_sym_Channel1] = ACTIONS(146),
    [anon_sym_Channel2] = ACTIONS(146),
    [anon_sym_Channel3] = ACTIONS(146),
    [anon_sym_Channel4] = ACTIONS(146),
    [anon_sym_Channel5] = ACTIONS(146),
    [anon_sym_Channel6] = ACTIONS(146),
    [anon_sym_Channel7] = ACTIONS(146),
    [anon_sym_Charge] = ACTIONS(146),
    [anon_sym_Chart] = ACTIONS(146),
    [anon_sym_ChartedNavPoints] = ACTIONS(146),
    [anon_sym_ClearMemory] = ACTIONS(146),
    [anon_sym_CollectableGoods] = ACTIONS(146),
    [anon_sym_Color] = ACTIONS(146),
    [anon_sym_Combustion] = ACTIONS(146),
    [anon_sym_CombustionInput] = ACTIONS(146),
    [anon_sym_CombustionInput2] = ACTIONS(146),
    [anon_sym_CombustionLimiter] = ACTIONS(146),
    [anon_sym_CombustionOutput] = ACTIONS(146),
    [anon_sym_CombustionOutput2] = ACTIONS(146),
    [anon_sym_CompletionRatio] = ACTIONS(146),
    [anon_sym_ContactTypeId] = ACTIONS(146),
    [anon_sym_CurrentCode] = ACTIONS(146),
    [anon_sym_CurrentResearchPodType] = ACTIONS(146),
    [anon_sym_Density] = ACTIONS(146),
    [anon_sym_DestinationCode] = ACTIONS(146),
    [anon_sym_Discover] = ACTIONS(146),
    [anon_sym_DistanceAu] = ACTIONS(146),
    [anon_sym_DistanceKm] = ACTIONS(146),
    [anon_sym_DrillCondition] = ACTIONS(146),
    [anon_sym_DryMass] = ACTIONS(146),
    [anon_sym_Eccentricity] = ACTIONS(146),
    [anon_sym_ElevatorLevel] = ACTIONS(146),
    [anon_sym_ElevatorSpeed] = ACTIONS(146),
    [anon_sym_EntityState] = ACTIONS(146),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(146),
    [anon_sym_Error] = ACTIONS(146),
    [anon_sym_ExhaustVelocity] = ACTIONS(146),
    [anon_sym_ExportCount] = ACTIONS(146),
    [anon_sym_ExportQuantity] = ACTIONS(146),
    [anon_sym_ExportSlotHash] = ACTIONS(146),
    [anon_sym_ExportSlotOccupant] = ACTIONS(146),
    [anon_sym_Filtration] = ACTIONS(146),
    [anon_sym_FlightControlRule] = ACTIONS(146),
    [anon_sym_Flush] = ACTIONS(146),
    [anon_sym_ForceWrite] = ACTIONS(146),
    [anon_sym_ForwardX] = ACTIONS(146),
    [anon_sym_ForwardY] = ACTIONS(146),
    [anon_sym_ForwardZ] = ACTIONS(146),
    [anon_sym_Fuel] = ACTIONS(146),
    [anon_sym_Harvest] = ACTIONS(146),
    [anon_sym_Horizontal] = ACTIONS(146),
    [anon_sym_HorizontalRatio] = ACTIONS(146),
    [anon_sym_Idle] = ACTIONS(146),
    [anon_sym_ImportCount] = ACTIONS(146),
    [anon_sym_ImportQuantity] = ACTIONS(146),
    [anon_sym_ImportSlotHash] = ACTIONS(146),
    [anon_sym_ImportSlotOccupant] = ACTIONS(146),
    [anon_sym_Inclination] = ACTIONS(146),
    [anon_sym_Index] = ACTIONS(146),
    [anon_sym_InterrogationProgress] = ACTIONS(146),
    [anon_sym_LineNumber] = ACTIONS(146),
    [anon_sym_Lock] = ACTIONS(146),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(146),
    [anon_sym_Mass] = ACTIONS(146),
    [anon_sym_Maximum] = ACTIONS(146),
    [anon_sym_MineablesInQueue] = ACTIONS(146),
    [anon_sym_MineablesInVicinity] = ACTIONS(146),
    [anon_sym_MinedQuantity] = ACTIONS(146),
    [anon_sym_MinimumWattsToContact] = ACTIONS(146),
    [anon_sym_Mode] = ACTIONS(146),
    [anon_sym_NavPoints] = ACTIONS(146),
    [anon_sym_NextWeatherEventTime] = ACTIONS(146),
    [anon_sym_None] = ACTIONS(146),
    [anon_sym_On] = ACTIONS(146),
    [anon_sym_Open] = ACTIONS(146),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(146),
    [anon_sym_OrbitPeriod] = ACTIONS(146),
    [anon_sym_Orientation] = ACTIONS(146),
    [anon_sym_Output] = ACTIONS(146),
    [anon_sym_PassedMoles] = ACTIONS(146),
    [anon_sym_Plant] = ACTIONS(146),
    [anon_sym_PlantEfficiency1] = ACTIONS(146),
    [anon_sym_PlantEfficiency2] = ACTIONS(146),
    [anon_sym_PlantEfficiency3] = ACTIONS(146),
    [anon_sym_PlantEfficiency4] = ACTIONS(146),
    [anon_sym_PlantGrowth1] = ACTIONS(146),
    [anon_sym_PlantGrowth2] = ACTIONS(146),
    [anon_sym_PlantGrowth3] = ACTIONS(146),
    [anon_sym_PlantGrowth4] = ACTIONS(146),
    [anon_sym_PlantHash1] = ACTIONS(146),
    [anon_sym_PlantHash2] = ACTIONS(146),
    [anon_sym_PlantHash3] = ACTIONS(146),
    [anon_sym_PlantHash4] = ACTIONS(146),
    [anon_sym_PlantHealth1] = ACTIONS(146),
    [anon_sym_PlantHealth2] = ACTIONS(146),
    [anon_sym_PlantHealth3] = ACTIONS(146),
    [anon_sym_PlantHealth4] = ACTIONS(146),
    [anon_sym_PositionX] = ACTIONS(146),
    [anon_sym_PositionY] = ACTIONS(146),
    [anon_sym_PositionZ] = ACTIONS(146),
    [anon_sym_Power] = ACTIONS(146),
    [anon_sym_PowerActual] = ACTIONS(146),
    [anon_sym_PowerGeneration] = ACTIONS(146),
    [anon_sym_PowerPotential] = ACTIONS(146),
    [anon_sym_PowerRequired] = ACTIONS(146),
    [anon_sym_PrefabHash] = ACTIONS(146),
    [anon_sym_Pressure] = ACTIONS(146),
    [anon_sym_PressureEfficiency] = ACTIONS(146),
    [anon_sym_PressureExternal] = ACTIONS(146),
    [anon_sym_PressureInput] = ACTIONS(146),
    [anon_sym_PressureInput2] = ACTIONS(146),
    [anon_sym_PressureInternal] = ACTIONS(146),
    [anon_sym_PressureOutput] = ACTIONS(146),
    [anon_sym_PressureOutput2] = ACTIONS(146),
    [anon_sym_PressureSetting] = ACTIONS(146),
    [anon_sym_Progress] = ACTIONS(146),
    [anon_sym_Quantity] = ACTIONS(146),
    [anon_sym_Ratio] = ACTIONS(146),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(146),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(146),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(146),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(146),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(146),
    [anon_sym_RatioHydrogen] = ACTIONS(146),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(146),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(146),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(146),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(146),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(146),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(146),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(146),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(146),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(146),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(146),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(146),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(146),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(146),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(146),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(146),
    [anon_sym_RatioNitrogen] = ACTIONS(146),
    [anon_sym_RatioNitrogenInput] = ACTIONS(146),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(146),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(146),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(146),
    [anon_sym_RatioNitrousOxide] = ACTIONS(146),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(146),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(146),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(146),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(146),
    [anon_sym_RatioOxygen] = ACTIONS(146),
    [anon_sym_RatioOxygenInput] = ACTIONS(146),
    [anon_sym_RatioOxygenInput2] = ACTIONS(146),
    [anon_sym_RatioOxygenOutput] = ACTIONS(146),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(146),
    [anon_sym_RatioPollutant] = ACTIONS(146),
    [anon_sym_RatioPollutantInput] = ACTIONS(146),
    [anon_sym_RatioPollutantInput2] = ACTIONS(146),
    [anon_sym_RatioPollutantOutput] = ACTIONS(146),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(146),
    [anon_sym_RatioPollutedWater] = ACTIONS(146),
    [anon_sym_RatioSteam] = ACTIONS(146),
    [anon_sym_RatioSteamInput] = ACTIONS(146),
    [anon_sym_RatioSteamInput2] = ACTIONS(146),
    [anon_sym_RatioSteamOutput] = ACTIONS(146),
    [anon_sym_RatioSteamOutput2] = ACTIONS(146),
    [anon_sym_RatioVolatiles] = ACTIONS(146),
    [anon_sym_RatioVolatilesInput] = ACTIONS(146),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(146),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(146),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(146),
    [anon_sym_RatioWater] = ACTIONS(146),
    [anon_sym_RatioWaterInput] = ACTIONS(146),
    [anon_sym_RatioWaterInput2] = ACTIONS(146),
    [anon_sym_RatioWaterOutput] = ACTIONS(146),
    [anon_sym_RatioWaterOutput2] = ACTIONS(146),
    [anon_sym_ReEntryAltitude] = ACTIONS(146),
    [anon_sym_Reagents] = ACTIONS(146),
    [anon_sym_RecipeHash] = ACTIONS(146),
    [anon_sym_ReferenceId] = ACTIONS(146),
    [anon_sym_RequestHash] = ACTIONS(146),
    [anon_sym_RequiredPower] = ACTIONS(146),
    [anon_sym_ReturnFuelCost] = ACTIONS(146),
    [anon_sym_Richness] = ACTIONS(146),
    [anon_sym_Rpm] = ACTIONS(146),
    [anon_sym_SemiMajorAxis] = ACTIONS(146),
    [anon_sym_Setting] = ACTIONS(146),
    [anon_sym_SettingInput] = ACTIONS(146),
    [anon_sym_SettingOutput] = ACTIONS(146),
    [anon_sym_SignalID] = ACTIONS(146),
    [anon_sym_SignalStrength] = ACTIONS(146),
    [anon_sym_Sites] = ACTIONS(146),
    [anon_sym_Size] = ACTIONS(146),
    [anon_sym_SizeX] = ACTIONS(146),
    [anon_sym_SizeY] = ACTIONS(146),
    [anon_sym_SizeZ] = ACTIONS(146),
    [anon_sym_SolarAngle] = ACTIONS(146),
    [anon_sym_SolarIrradiance] = ACTIONS(146),
    [anon_sym_SoundAlert] = ACTIONS(146),
    [anon_sym_Stress] = ACTIONS(146),
    [anon_sym_Survey] = ACTIONS(146),
    [anon_sym_TargetPadIndex] = ACTIONS(146),
    [anon_sym_TargetX] = ACTIONS(146),
    [anon_sym_TargetY] = ACTIONS(146),
    [anon_sym_TargetZ] = ACTIONS(146),
    [anon_sym_Temperature] = ACTIONS(146),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(146),
    [anon_sym_TemperatureExternal] = ACTIONS(146),
    [anon_sym_TemperatureInput] = ACTIONS(146),
    [anon_sym_TemperatureInput2] = ACTIONS(146),
    [anon_sym_TemperatureOutput] = ACTIONS(146),
    [anon_sym_TemperatureOutput2] = ACTIONS(146),
    [anon_sym_TemperatureSetting] = ACTIONS(146),
    [anon_sym_Throttle] = ACTIONS(146),
    [anon_sym_Thrust] = ACTIONS(146),
    [anon_sym_ThrustToWeight] = ACTIONS(146),
    [anon_sym_Time] = ACTIONS(146),
    [anon_sym_TimeToDestination] = ACTIONS(146),
    [anon_sym_TotalMoles] = ACTIONS(146),
    [anon_sym_TotalMolesInput] = ACTIONS(146),
    [anon_sym_TotalMolesInput2] = ACTIONS(146),
    [anon_sym_TotalMolesOutput] = ACTIONS(146),
    [anon_sym_TotalMolesOutput2] = ACTIONS(146),
    [anon_sym_TotalQuantity] = ACTIONS(146),
    [anon_sym_TrueAnomaly] = ACTIONS(146),
    [anon_sym_VelocityMagnitude] = ACTIONS(146),
    [anon_sym_VelocityRelativeX] = ACTIONS(146),
    [anon_sym_VelocityRelativeY] = ACTIONS(146),
    [anon_sym_VelocityRelativeZ] = ACTIONS(146),
    [anon_sym_VelocityX] = ACTIONS(146),
    [anon_sym_VelocityY] = ACTIONS(146),
    [anon_sym_VelocityZ] = ACTIONS(146),
    [anon_sym_Vertical] = ACTIONS(146),
    [anon_sym_VerticalRatio] = ACTIONS(146),
    [anon_sym_Volume] = ACTIONS(146),
    [anon_sym_VolumeOfLiquid] = ACTIONS(146),
    [anon_sym_WattsReachingContact] = ACTIONS(146),
    [anon_sym_Weight] = ACTIONS(146),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(146),
    [anon_sym_ChargeRatio] = ACTIONS(146),
    [anon_sym_Class] = ACTIONS(146),
    [anon_sym_Damage] = ACTIONS(146),
    [anon_sym_Efficiency] = ACTIONS(146),
    [anon_sym_FilterType] = ACTIONS(146),
    [anon_sym_Growth] = ACTIONS(146),
    [anon_sym_Health] = ACTIONS(146),
    [anon_sym_Mature] = ACTIONS(146),
    [anon_sym_MaxQuantity] = ACTIONS(146),
    [anon_sym_OccupantHash] = ACTIONS(146),
    [anon_sym_Occupied] = ACTIONS(146),
    [anon_sym_PressureAir] = ACTIONS(146),
    [anon_sym_PressureWaste] = ACTIONS(146),
    [anon_sym_Seeding] = ACTIONS(146),
    [anon_sym_SortingClass] = ACTIONS(146),
    [anon_sym_Average] = ACTIONS(146),
    [anon_sym_Minimum] = ACTIONS(146),
    [anon_sym_Sum] = ACTIONS(146),
    [anon_sym_Contents] = ACTIONS(146),
    [anon_sym_Recipe] = ACTIONS(146),
    [anon_sym_Required] = ACTIONS(146),
    [anon_sym_TotalContents] = ACTIONS(146),
    [sym_enum] = ACTIONS(148),
    [sym_deprecated] = ACTIONS(146),
  },
  [20] = {
    [sym_identifier] = ACTIONS(150),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(150),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(152),
    [sym_register] = ACTIONS(152),
    [sym_device] = ACTIONS(152),
    [anon_sym_nan] = ACTIONS(150),
    [anon_sym_pinf] = ACTIONS(150),
    [anon_sym_ninf] = ACTIONS(150),
    [anon_sym_pi] = ACTIONS(150),
    [anon_sym_deg2rad] = ACTIONS(150),
    [anon_sym_rad2deg] = ACTIONS(150),
    [anon_sym_epsilon] = ACTIONS(150),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(152),
    [anon_sym_Acceleration] = ACTIONS(150),
    [anon_sym_Activate] = ACTIONS(150),
    [anon_sym_AirRelease] = ACTIONS(150),
    [anon_sym_AlignmentError] = ACTIONS(150),
    [anon_sym_Apex] = ACTIONS(150),
    [anon_sym_AutoLand] = ACTIONS(150),
    [anon_sym_AutoShutOff] = ACTIONS(150),
    [anon_sym_Bpm] = ACTIONS(150),
    [anon_sym_BurnTimeRemaining] = ACTIONS(150),
    [anon_sym_CelestialHash] = ACTIONS(150),
    [anon_sym_CelestialParentHash] = ACTIONS(150),
    [anon_sym_Channel0] = ACTIONS(150),
    [anon_sym_Channel1] = ACTIONS(150),
    [anon_sym_Channel2] = ACTIONS(150),
    [anon_sym_Channel3] = ACTIONS(150),
    [anon_sym_Channel4] = ACTIONS(150),
    [anon_sym_Channel5] = ACTIONS(150),
    [anon_sym_Channel6] = ACTIONS(150),
    [anon_sym_Channel7] = ACTIONS(150),
    [anon_sym_Charge] = ACTIONS(150),
    [anon_sym_Chart] = ACTIONS(150),
    [anon_sym_ChartedNavPoints] = ACTIONS(150),
    [anon_sym_ClearMemory] = ACTIONS(150),
    [anon_sym_CollectableGoods] = ACTIONS(150),
    [anon_sym_Color] = ACTIONS(150),
    [anon_sym_Combustion] = ACTIONS(150),
    [anon_sym_CombustionInput] = ACTIONS(150),
    [anon_sym_CombustionInput2] = ACTIONS(150),
    [anon_sym_CombustionLimiter] = ACTIONS(150),
    [anon_sym_CombustionOutput] = ACTIONS(150),
    [anon_sym_CombustionOutput2] = ACTIONS(150),
    [anon_sym_CompletionRatio] = ACTIONS(150),
    [anon_sym_ContactTypeId] = ACTIONS(150),
    [anon_sym_CurrentCode] = ACTIONS(150),
    [anon_sym_CurrentResearchPodType] = ACTIONS(150),
    [anon_sym_Density] = ACTIONS(150),
    [anon_sym_DestinationCode] = ACTIONS(150),
    [anon_sym_Discover] = ACTIONS(150),
    [anon_sym_DistanceAu] = ACTIONS(150),
    [anon_sym_DistanceKm] = ACTIONS(150),
    [anon_sym_DrillCondition] = ACTIONS(150),
    [anon_sym_DryMass] = ACTIONS(150),
    [anon_sym_Eccentricity] = ACTIONS(150),
    [anon_sym_ElevatorLevel] = ACTIONS(150),
    [anon_sym_ElevatorSpeed] = ACTIONS(150),
    [anon_sym_EntityState] = ACTIONS(150),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(150),
    [anon_sym_Error] = ACTIONS(150),
    [anon_sym_ExhaustVelocity] = ACTIONS(150),
    [anon_sym_ExportCount] = ACTIONS(150),
    [anon_sym_ExportQuantity] = ACTIONS(150),
    [anon_sym_ExportSlotHash] = ACTIONS(150),
    [anon_sym_ExportSlotOccupant] = ACTIONS(150),
    [anon_sym_Filtration] = ACTIONS(150),
    [anon_sym_FlightControlRule] = ACTIONS(150),
    [anon_sym_Flush] = ACTIONS(150),
    [anon_sym_ForceWrite] = ACTIONS(150),
    [anon_sym_ForwardX] = ACTIONS(150),
    [anon_sym_ForwardY] = ACTIONS(150),
    [anon_sym_ForwardZ] = ACTIONS(150),
    [anon_sym_Fuel] = ACTIONS(150),
    [anon_sym_Harvest] = ACTIONS(150),
    [anon_sym_Horizontal] = ACTIONS(150),
    [anon_sym_HorizontalRatio] = ACTIONS(150),
    [anon_sym_Idle] = ACTIONS(150),
    [anon_sym_ImportCount] = ACTIONS(150),
    [anon_sym_ImportQuantity] = ACTIONS(150),
    [anon_sym_ImportSlotHash] = ACTIONS(150),
    [anon_sym_ImportSlotOccupant] = ACTIONS(150),
    [anon_sym_Inclination] = ACTIONS(150),
    [anon_sym_Index] = ACTIONS(150),
    [anon_sym_InterrogationProgress] = ACTIONS(150),
    [anon_sym_LineNumber] = ACTIONS(150),
    [anon_sym_Lock] = ACTIONS(150),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(150),
    [anon_sym_Mass] = ACTIONS(150),
    [anon_sym_Maximum] = ACTIONS(150),
    [anon_sym_MineablesInQueue] = ACTIONS(150),
    [anon_sym_MineablesInVicinity] = ACTIONS(150),
    [anon_sym_MinedQuantity] = ACTIONS(150),
    [anon_sym_MinimumWattsToContact] = ACTIONS(150),
    [anon_sym_Mode] = ACTIONS(150),
    [anon_sym_NavPoints] = ACTIONS(150),
    [anon_sym_NextWeatherEventTime] = ACTIONS(150),
    [anon_sym_None] = ACTIONS(150),
    [anon_sym_On] = ACTIONS(150),
    [anon_sym_Open] = ACTIONS(150),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(150),
    [anon_sym_OrbitPeriod] = ACTIONS(150),
    [anon_sym_Orientation] = ACTIONS(150),
    [anon_sym_Output] = ACTIONS(150),
    [anon_sym_PassedMoles] = ACTIONS(150),
    [anon_sym_Plant] = ACTIONS(150),
    [anon_sym_PlantEfficiency1] = ACTIONS(150),
    [anon_sym_PlantEfficiency2] = ACTIONS(150),
    [anon_sym_PlantEfficiency3] = ACTIONS(150),
    [anon_sym_PlantEfficiency4] = ACTIONS(150),
    [anon_sym_PlantGrowth1] = ACTIONS(150),
    [anon_sym_PlantGrowth2] = ACTIONS(150),
    [anon_sym_PlantGrowth3] = ACTIONS(150),
    [anon_sym_PlantGrowth4] = ACTIONS(150),
    [anon_sym_PlantHash1] = ACTIONS(150),
    [anon_sym_PlantHash2] = ACTIONS(150),
    [anon_sym_PlantHash3] = ACTIONS(150),
    [anon_sym_PlantHash4] = ACTIONS(150),
    [anon_sym_PlantHealth1] = ACTIONS(150),
    [anon_sym_PlantHealth2] = ACTIONS(150),
    [anon_sym_PlantHealth3] = ACTIONS(150),
    [anon_sym_PlantHealth4] = ACTIONS(150),
    [anon_sym_PositionX] = ACTIONS(150),
    [anon_sym_PositionY] = ACTIONS(150),
    [anon_sym_PositionZ] = ACTIONS(150),
    [anon_sym_Power] = ACTIONS(150),
    [anon_sym_PowerActual] = ACTIONS(150),
    [anon_sym_PowerGeneration] = ACTIONS(150),
    [anon_sym_PowerPotential] = ACTIONS(150),
    [anon_sym_PowerRequired] = ACTIONS(150),
    [anon_sym_PrefabHash] = ACTIONS(150),
    [anon_sym_Pressure] = ACTIONS(150),
    [anon_sym_PressureEfficiency] = ACTIONS(150),
    [anon_sym_PressureExternal] = ACTIONS(150),
    [anon_sym_PressureInput] = ACTIONS(150),
    [anon_sym_PressureInput2] = ACTIONS(150),
    [anon_sym_PressureInternal] = ACTIONS(150),
    [anon_sym_PressureOutput] = ACTIONS(150),
    [anon_sym_PressureOutput2] = ACTIONS(150),
    [anon_sym_PressureSetting] = ACTIONS(150),
    [anon_sym_Progress] = ACTIONS(150),
    [anon_sym_Quantity] = ACTIONS(150),
    [anon_sym_Ratio] = ACTIONS(150),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(150),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(150),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(150),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(150),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(150),
    [anon_sym_RatioHydrogen] = ACTIONS(150),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(150),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(150),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(150),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(150),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(150),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(150),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(150),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(150),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(150),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(150),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(150),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(150),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(150),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(150),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(150),
    [anon_sym_RatioNitrogen] = ACTIONS(150),
    [anon_sym_RatioNitrogenInput] = ACTIONS(150),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(150),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(150),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(150),
    [anon_sym_RatioNitrousOxide] = ACTIONS(150),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(150),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(150),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(150),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(150),
    [anon_sym_RatioOxygen] = ACTIONS(150),
    [anon_sym_RatioOxygenInput] = ACTIONS(150),
    [anon_sym_RatioOxygenInput2] = ACTIONS(150),
    [anon_sym_RatioOxygenOutput] = ACTIONS(150),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(150),
    [anon_sym_RatioPollutant] = ACTIONS(150),
    [anon_sym_RatioPollutantInput] = ACTIONS(150),
    [anon_sym_RatioPollutantInput2] = ACTIONS(150),
    [anon_sym_RatioPollutantOutput] = ACTIONS(150),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(150),
    [anon_sym_RatioPollutedWater] = ACTIONS(150),
    [anon_sym_RatioSteam] = ACTIONS(150),
    [anon_sym_RatioSteamInput] = ACTIONS(150),
    [anon_sym_RatioSteamInput2] = ACTIONS(150),
    [anon_sym_RatioSteamOutput] = ACTIONS(150),
    [anon_sym_RatioSteamOutput2] = ACTIONS(150),
    [anon_sym_RatioVolatiles] = ACTIONS(150),
    [anon_sym_RatioVolatilesInput] = ACTIONS(150),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(150),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(150),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(150),
    [anon_sym_RatioWater] = ACTIONS(150),
    [anon_sym_RatioWaterInput] = ACTIONS(150),
    [anon_sym_RatioWaterInput2] = ACTIONS(150),
    [anon_sym_RatioWaterOutput] = ACTIONS(150),
    [anon_sym_RatioWaterOutput2] = ACTIONS(150),
    [anon_sym_ReEntryAltitude] = ACTIONS(150),
    [anon_sym_Reagents] = ACTIONS(150),
    [anon_sym_RecipeHash] = ACTIONS(150),
    [anon_sym_ReferenceId] = ACTIONS(150),
    [anon_sym_RequestHash] = ACTIONS(150),
    [anon_sym_RequiredPower] = ACTIONS(150),
    [anon_sym_ReturnFuelCost] = ACTIONS(150),
    [anon_sym_Richness] = ACTIONS(150),
    [anon_sym_Rpm] = ACTIONS(150),
    [anon_sym_SemiMajorAxis] = ACTIONS(150),
    [anon_sym_Setting] = ACTIONS(150),
    [anon_sym_SettingInput] = ACTIONS(150),
    [anon_sym_SettingOutput] = ACTIONS(150),
    [anon_sym_SignalID] = ACTIONS(150),
    [anon_sym_SignalStrength] = ACTIONS(150),
    [anon_sym_Sites] = ACTIONS(150),
    [anon_sym_Size] = ACTIONS(150),
    [anon_sym_SizeX] = ACTIONS(150),
    [anon_sym_SizeY] = ACTIONS(150),
    [anon_sym_SizeZ] = ACTIONS(150),
    [anon_sym_SolarAngle] = ACTIONS(150),
    [anon_sym_SolarIrradiance] = ACTIONS(150),
    [anon_sym_SoundAlert] = ACTIONS(150),
    [anon_sym_Stress] = ACTIONS(150),
    [anon_sym_Survey] = ACTIONS(150),
    [anon_sym_TargetPadIndex] = ACTIONS(150),
    [anon_sym_TargetX] = ACTIONS(150),
    [anon_sym_TargetY] = ACTIONS(150),
    [anon_sym_TargetZ] = ACTIONS(150),
    [anon_sym_Temperature] = ACTIONS(150),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(150),
    [anon_sym_TemperatureExternal] = ACTIONS(150),
    [anon_sym_TemperatureInput] = ACTIONS(150),
    [anon_sym_TemperatureInput2] = ACTIONS(150),
    [anon_sym_TemperatureOutput] = ACTIONS(150),
    [anon_sym_TemperatureOutput2] = ACTIONS(150),
    [anon_sym_TemperatureSetting] = ACTIONS(150),
    [anon_sym_Throttle] = ACTIONS(150),
    [anon_sym_Thrust] = ACTIONS(150),
    [anon_sym_ThrustToWeight] = ACTIONS(150),
    [anon_sym_Time] = ACTIONS(150),
    [anon_sym_TimeToDestination] = ACTIONS(150),
    [anon_sym_TotalMoles] = ACTIONS(150),
    [anon_sym_TotalMolesInput] = ACTIONS(150),
    [anon_sym_TotalMolesInput2] = ACTIONS(150),
    [anon_sym_TotalMolesOutput] = ACTIONS(150),
    [anon_sym_TotalMolesOutput2] = ACTIONS(150),
    [anon_sym_TotalQuantity] = ACTIONS(150),
    [anon_sym_TrueAnomaly] = ACTIONS(150),
    [anon_sym_VelocityMagnitude] = ACTIONS(150),
    [anon_sym_VelocityRelativeX] = ACTIONS(150),
    [anon_sym_VelocityRelativeY] = ACTIONS(150),
    [anon_sym_VelocityRelativeZ] = ACTIONS(150),
    [anon_sym_VelocityX] = ACTIONS(150),
    [anon_sym_VelocityY] = ACTIONS(150),
    [anon_sym_VelocityZ] = ACTIONS(150),
    [anon_sym_Vertical] = ACTIONS(150),
    [anon_sym_VerticalRatio] = ACTIONS(150),
    [anon_sym_Volume] = ACTIONS(150),
    [anon_sym_VolumeOfLiquid] = ACTIONS(150),
    [anon_sym_WattsReachingContact] = ACTIONS(150),
    [anon_sym_Weight] = ACTIONS(150),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(150),
    [anon_sym_ChargeRatio] = ACTIONS(150),
    [anon_sym_Class] = ACTIONS(150),
    [anon_sym_Damage] = ACTIONS(150),
    [anon_sym_Efficiency] = ACTIONS(150),
    [anon_sym_FilterType] = ACTIONS(150),
    [anon_sym_Growth] = ACTIONS(150),
    [anon_sym_Health] = ACTIONS(150),
    [anon_sym_Mature] = ACTIONS(150),
    [anon_sym_MaxQuantity] = ACTIONS(150),
    [anon_sym_OccupantHash] = ACTIONS(150),
    [anon_sym_Occupied] = ACTIONS(150),
    [anon_sym_PressureAir] = ACTIONS(150),
    [anon_sym_PressureWaste] = ACTIONS(150),
    [anon_sym_Seeding] = ACTIONS(150),
    [anon_sym_SortingClass] = ACTIONS(150),
    [anon_sym_Average] = ACTIONS(150),
    [anon_sym_Minimum] = ACTIONS(150),
    [anon_sym_Sum] = ACTIONS(150),
    [anon_sym_Contents] = ACTIONS(150),
    [anon_sym_Recipe] = ACTIONS(150),
    [anon_sym_Required] = ACTIONS(150),
    [anon_sym_TotalContents] = ACTIONS(150),
    [sym_enum] = ACTIONS(152),
    [sym_deprecated] = ACTIONS(150),
  },
  [21] = {
    [sym_identifier] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(154),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(156),
    [sym_register] = ACTIONS(156),
    [sym_device] = ACTIONS(156),
    [anon_sym_nan] = ACTIONS(154),
    [anon_sym_pinf] = ACTIONS(154),
    [anon_sym_ninf] = ACTIONS(154),
    [anon_sym_pi] = ACTIONS(154),
    [anon_sym_deg2rad] = ACTIONS(154),
    [anon_sym_rad2deg] = ACTIONS(154),
    [anon_sym_epsilon] = ACTIONS(154),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(156),
    [anon_sym_Acceleration] = ACTIONS(154),
    [anon_sym_Activate] = ACTIONS(154),
    [anon_sym_AirRelease] = ACTIONS(154),
    [anon_sym_AlignmentError] = ACTIONS(154),
    [anon_sym_Apex] = ACTIONS(154),
    [anon_sym_AutoLand] = ACTIONS(154),
    [anon_sym_AutoShutOff] = ACTIONS(154),
    [anon_sym_Bpm] = ACTIONS(154),
    [anon_sym_BurnTimeRemaining] = ACTIONS(154),
    [anon_sym_CelestialHash] = ACTIONS(154),
    [anon_sym_CelestialParentHash] = ACTIONS(154),
    [anon_sym_Channel0] = ACTIONS(154),
    [anon_sym_Channel1] = ACTIONS(154),
    [anon_sym_Channel2] = ACTIONS(154),
    [anon_sym_Channel3] = ACTIONS(154),
    [anon_sym_Channel4] = ACTIONS(154),
    [anon_sym_Channel5] = ACTIONS(154),
    [anon_sym_Channel6] = ACTIONS(154),
    [anon_sym_Channel7] = ACTIONS(154),
    [anon_sym_Charge] = ACTIONS(154),
    [anon_sym_Chart] = ACTIONS(154),
    [anon_sym_ChartedNavPoints] = ACTIONS(154),
    [anon_sym_ClearMemory] = ACTIONS(154),
    [anon_sym_CollectableGoods] = ACTIONS(154),
    [anon_sym_Color] = ACTIONS(154),
    [anon_sym_Combustion] = ACTIONS(154),
    [anon_sym_CombustionInput] = ACTIONS(154),
    [anon_sym_CombustionInput2] = ACTIONS(154),
    [anon_sym_CombustionLimiter] = ACTIONS(154),
    [anon_sym_CombustionOutput] = ACTIONS(154),
    [anon_sym_CombustionOutput2] = ACTIONS(154),
    [anon_sym_CompletionRatio] = ACTIONS(154),
    [anon_sym_ContactTypeId] = ACTIONS(154),
    [anon_sym_CurrentCode] = ACTIONS(154),
    [anon_sym_CurrentResearchPodType] = ACTIONS(154),
    [anon_sym_Density] = ACTIONS(154),
    [anon_sym_DestinationCode] = ACTIONS(154),
    [anon_sym_Discover] = ACTIONS(154),
    [anon_sym_DistanceAu] = ACTIONS(154),
    [anon_sym_DistanceKm] = ACTIONS(154),
    [anon_sym_DrillCondition] = ACTIONS(154),
    [anon_sym_DryMass] = ACTIONS(154),
    [anon_sym_Eccentricity] = ACTIONS(154),
    [anon_sym_ElevatorLevel] = ACTIONS(154),
    [anon_sym_ElevatorSpeed] = ACTIONS(154),
    [anon_sym_EntityState] = ACTIONS(154),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(154),
    [anon_sym_Error] = ACTIONS(154),
    [anon_sym_ExhaustVelocity] = ACTIONS(154),
    [anon_sym_ExportCount] = ACTIONS(154),
    [anon_sym_ExportQuantity] = ACTIONS(154),
    [anon_sym_ExportSlotHash] = ACTIONS(154),
    [anon_sym_ExportSlotOccupant] = ACTIONS(154),
    [anon_sym_Filtration] = ACTIONS(154),
    [anon_sym_FlightControlRule] = ACTIONS(154),
    [anon_sym_Flush] = ACTIONS(154),
    [anon_sym_ForceWrite] = ACTIONS(154),
    [anon_sym_ForwardX] = ACTIONS(154),
    [anon_sym_ForwardY] = ACTIONS(154),
    [anon_sym_ForwardZ] = ACTIONS(154),
    [anon_sym_Fuel] = ACTIONS(154),
    [anon_sym_Harvest] = ACTIONS(154),
    [anon_sym_Horizontal] = ACTIONS(154),
    [anon_sym_HorizontalRatio] = ACTIONS(154),
    [anon_sym_Idle] = ACTIONS(154),
    [anon_sym_ImportCount] = ACTIONS(154),
    [anon_sym_ImportQuantity] = ACTIONS(154),
    [anon_sym_ImportSlotHash] = ACTIONS(154),
    [anon_sym_ImportSlotOccupant] = ACTIONS(154),
    [anon_sym_Inclination] = ACTIONS(154),
    [anon_sym_Index] = ACTIONS(154),
    [anon_sym_InterrogationProgress] = ACTIONS(154),
    [anon_sym_LineNumber] = ACTIONS(154),
    [anon_sym_Lock] = ACTIONS(154),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(154),
    [anon_sym_Mass] = ACTIONS(154),
    [anon_sym_Maximum] = ACTIONS(154),
    [anon_sym_MineablesInQueue] = ACTIONS(154),
    [anon_sym_MineablesInVicinity] = ACTIONS(154),
    [anon_sym_MinedQuantity] = ACTIONS(154),
    [anon_sym_MinimumWattsToContact] = ACTIONS(154),
    [anon_sym_Mode] = ACTIONS(154),
    [anon_sym_NavPoints] = ACTIONS(154),
    [anon_sym_NextWeatherEventTime] = ACTIONS(154),
    [anon_sym_None] = ACTIONS(154),
    [anon_sym_On] = ACTIONS(154),
    [anon_sym_Open] = ACTIONS(154),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(154),
    [anon_sym_OrbitPeriod] = ACTIONS(154),
    [anon_sym_Orientation] = ACTIONS(154),
    [anon_sym_Output] = ACTIONS(154),
    [anon_sym_PassedMoles] = ACTIONS(154),
    [anon_sym_Plant] = ACTIONS(154),
    [anon_sym_PlantEfficiency1] = ACTIONS(154),
    [anon_sym_PlantEfficiency2] = ACTIONS(154),
    [anon_sym_PlantEfficiency3] = ACTIONS(154),
    [anon_sym_PlantEfficiency4] = ACTIONS(154),
    [anon_sym_PlantGrowth1] = ACTIONS(154),
    [anon_sym_PlantGrowth2] = ACTIONS(154),
    [anon_sym_PlantGrowth3] = ACTIONS(154),
    [anon_sym_PlantGrowth4] = ACTIONS(154),
    [anon_sym_PlantHash1] = ACTIONS(154),
    [anon_sym_PlantHash2] = ACTIONS(154),
    [anon_sym_PlantHash3] = ACTIONS(154),
    [anon_sym_PlantHash4] = ACTIONS(154),
    [anon_sym_PlantHealth1] = ACTIONS(154),
    [anon_sym_PlantHealth2] = ACTIONS(154),
    [anon_sym_PlantHealth3] = ACTIONS(154),
    [anon_sym_PlantHealth4] = ACTIONS(154),
    [anon_sym_PositionX] = ACTIONS(154),
    [anon_sym_PositionY] = ACTIONS(154),
    [anon_sym_PositionZ] = ACTIONS(154),
    [anon_sym_Power] = ACTIONS(154),
    [anon_sym_PowerActual] = ACTIONS(154),
    [anon_sym_PowerGeneration] = ACTIONS(154),
    [anon_sym_PowerPotential] = ACTIONS(154),
    [anon_sym_PowerRequired] = ACTIONS(154),
    [anon_sym_PrefabHash] = ACTIONS(154),
    [anon_sym_Pressure] = ACTIONS(154),
    [anon_sym_PressureEfficiency] = ACTIONS(154),
    [anon_sym_PressureExternal] = ACTIONS(154),
    [anon_sym_PressureInput] = ACTIONS(154),
    [anon_sym_PressureInput2] = ACTIONS(154),
    [anon_sym_PressureInternal] = ACTIONS(154),
    [anon_sym_PressureOutput] = ACTIONS(154),
    [anon_sym_PressureOutput2] = ACTIONS(154),
    [anon_sym_PressureSetting] = ACTIONS(154),
    [anon_sym_Progress] = ACTIONS(154),
    [anon_sym_Quantity] = ACTIONS(154),
    [anon_sym_Ratio] = ACTIONS(154),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(154),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(154),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(154),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(154),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(154),
    [anon_sym_RatioHydrogen] = ACTIONS(154),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(154),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(154),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(154),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(154),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(154),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(154),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(154),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(154),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(154),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(154),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(154),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(154),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(154),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(154),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(154),
    [anon_sym_RatioNitrogen] = ACTIONS(154),
    [anon_sym_RatioNitrogenInput] = ACTIONS(154),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(154),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(154),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(154),
    [anon_sym_RatioNitrousOxide] = ACTIONS(154),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(154),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(154),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(154),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(154),
    [anon_sym_RatioOxygen] = ACTIONS(154),
    [anon_sym_RatioOxygenInput] = ACTIONS(154),
    [anon_sym_RatioOxygenInput2] = ACTIONS(154),
    [anon_sym_RatioOxygenOutput] = ACTIONS(154),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(154),
    [anon_sym_RatioPollutant] = ACTIONS(154),
    [anon_sym_RatioPollutantInput] = ACTIONS(154),
    [anon_sym_RatioPollutantInput2] = ACTIONS(154),
    [anon_sym_RatioPollutantOutput] = ACTIONS(154),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(154),
    [anon_sym_RatioPollutedWater] = ACTIONS(154),
    [anon_sym_RatioSteam] = ACTIONS(154),
    [anon_sym_RatioSteamInput] = ACTIONS(154),
    [anon_sym_RatioSteamInput2] = ACTIONS(154),
    [anon_sym_RatioSteamOutput] = ACTIONS(154),
    [anon_sym_RatioSteamOutput2] = ACTIONS(154),
    [anon_sym_RatioVolatiles] = ACTIONS(154),
    [anon_sym_RatioVolatilesInput] = ACTIONS(154),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(154),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(154),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(154),
    [anon_sym_RatioWater] = ACTIONS(154),
    [anon_sym_RatioWaterInput] = ACTIONS(154),
    [anon_sym_RatioWaterInput2] = ACTIONS(154),
    [anon_sym_RatioWaterOutput] = ACTIONS(154),
    [anon_sym_RatioWaterOutput2] = ACTIONS(154),
    [anon_sym_ReEntryAltitude] = ACTIONS(154),
    [anon_sym_Reagents] = ACTIONS(154),
    [anon_sym_RecipeHash] = ACTIONS(154),
    [anon_sym_ReferenceId] = ACTIONS(154),
    [anon_sym_RequestHash] = ACTIONS(154),
    [anon_sym_RequiredPower] = ACTIONS(154),
    [anon_sym_ReturnFuelCost] = ACTIONS(154),
    [anon_sym_Richness] = ACTIONS(154),
    [anon_sym_Rpm] = ACTIONS(154),
    [anon_sym_SemiMajorAxis] = ACTIONS(154),
    [anon_sym_Setting] = ACTIONS(154),
    [anon_sym_SettingInput] = ACTIONS(154),
    [anon_sym_SettingOutput] = ACTIONS(154),
    [anon_sym_SignalID] = ACTIONS(154),
    [anon_sym_SignalStrength] = ACTIONS(154),
    [anon_sym_Sites] = ACTIONS(154),
    [anon_sym_Size] = ACTIONS(154),
    [anon_sym_SizeX] = ACTIONS(154),
    [anon_sym_SizeY] = ACTIONS(154),
    [anon_sym_SizeZ] = ACTIONS(154),
    [anon_sym_SolarAngle] = ACTIONS(154),
    [anon_sym_SolarIrradiance] = ACTIONS(154),
    [anon_sym_SoundAlert] = ACTIONS(154),
    [anon_sym_Stress] = ACTIONS(154),
    [anon_sym_Survey] = ACTIONS(154),
    [anon_sym_TargetPadIndex] = ACTIONS(154),
    [anon_sym_TargetX] = ACTIONS(154),
    [anon_sym_TargetY] = ACTIONS(154),
    [anon_sym_TargetZ] = ACTIONS(154),
    [anon_sym_Temperature] = ACTIONS(154),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(154),
    [anon_sym_TemperatureExternal] = ACTIONS(154),
    [anon_sym_TemperatureInput] = ACTIONS(154),
    [anon_sym_TemperatureInput2] = ACTIONS(154),
    [anon_sym_TemperatureOutput] = ACTIONS(154),
    [anon_sym_TemperatureOutput2] = ACTIONS(154),
    [anon_sym_TemperatureSetting] = ACTIONS(154),
    [anon_sym_Throttle] = ACTIONS(154),
    [anon_sym_Thrust] = ACTIONS(154),
    [anon_sym_ThrustToWeight] = ACTIONS(154),
    [anon_sym_Time] = ACTIONS(154),
    [anon_sym_TimeToDestination] = ACTIONS(154),
    [anon_sym_TotalMoles] = ACTIONS(154),
    [anon_sym_TotalMolesInput] = ACTIONS(154),
    [anon_sym_TotalMolesInput2] = ACTIONS(154),
    [anon_sym_TotalMolesOutput] = ACTIONS(154),
    [anon_sym_TotalMolesOutput2] = ACTIONS(154),
    [anon_sym_TotalQuantity] = ACTIONS(154),
    [anon_sym_TrueAnomaly] = ACTIONS(154),
    [anon_sym_VelocityMagnitude] = ACTIONS(154),
    [anon_sym_VelocityRelativeX] = ACTIONS(154),
    [anon_sym_VelocityRelativeY] = ACTIONS(154),
    [anon_sym_VelocityRelativeZ] = ACTIONS(154),
    [anon_sym_VelocityX] = ACTIONS(154),
    [anon_sym_VelocityY] = ACTIONS(154),
    [anon_sym_VelocityZ] = ACTIONS(154),
    [anon_sym_Vertical] = ACTIONS(154),
    [anon_sym_VerticalRatio] = ACTIONS(154),
    [anon_sym_Volume] = ACTIONS(154),
    [anon_sym_VolumeOfLiquid] = ACTIONS(154),
    [anon_sym_WattsReachingContact] = ACTIONS(154),
    [anon_sym_Weight] = ACTIONS(154),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(154),
    [anon_sym_ChargeRatio] = ACTIONS(154),
    [anon_sym_Class] = ACTIONS(154),
    [anon_sym_Damage] = ACTIONS(154),
    [anon_sym_Efficiency] = ACTIONS(154),
    [anon_sym_FilterType] = ACTIONS(154),
    [anon_sym_Growth] = ACTIONS(154),
    [anon_sym_Health] = ACTIONS(154),
    [anon_sym_Mature] = ACTIONS(154),
    [anon_sym_MaxQuantity] = ACTIONS(154),
    [anon_sym_OccupantHash] = ACTIONS(154),
    [anon_sym_Occupied] = ACTIONS(154),
    [anon_sym_PressureAir] = ACTIONS(154),
    [anon_sym_PressureWaste] = ACTIONS(154),
    [anon_sym_Seeding] = ACTIONS(154),
    [anon_sym_SortingClass] = ACTIONS(154),
    [anon_sym_Average] = ACTIONS(154),
    [anon_sym_Minimum] = ACTIONS(154),
    [anon_sym_Sum] = ACTIONS(154),
    [anon_sym_Contents] = ACTIONS(154),
    [anon_sym_Recipe] = ACTIONS(154),
    [anon_sym_Required] = ACTIONS(154),
    [anon_sym_TotalContents] = ACTIONS(154),
    [sym_enum] = ACTIONS(156),
    [sym_deprecated] = ACTIONS(154),
  },
  [22] = {
    [sym_line] = STATE(28),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(25),
    [sym_comment] = STATE(31),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_atan2] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_get] = ACTIONS(15),
    [anon_sym_getd] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_ld] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_poke] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_put] = ACTIONS(15),
    [anon_sym_putd] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sd] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
  },
  [23] = {
    [sym_line] = STATE(28),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(25),
    [sym_comment] = STATE(31),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_CR_LF] = ACTIONS(165),
    [anon_sym_CR] = ACTIONS(168),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(171),
    [anon_sym_abs] = ACTIONS(174),
    [anon_sym_acos] = ACTIONS(174),
    [anon_sym_add] = ACTIONS(174),
    [anon_sym_alias] = ACTIONS(174),
    [anon_sym_and] = ACTIONS(174),
    [anon_sym_asin] = ACTIONS(174),
    [anon_sym_atan] = ACTIONS(174),
    [anon_sym_atan2] = ACTIONS(174),
    [anon_sym_bap] = ACTIONS(174),
    [anon_sym_bapal] = ACTIONS(174),
    [anon_sym_bapz] = ACTIONS(174),
    [anon_sym_bapzal] = ACTIONS(174),
    [anon_sym_bdns] = ACTIONS(174),
    [anon_sym_bdnsal] = ACTIONS(174),
    [anon_sym_bdse] = ACTIONS(174),
    [anon_sym_bdseal] = ACTIONS(174),
    [anon_sym_beq] = ACTIONS(174),
    [anon_sym_beqal] = ACTIONS(174),
    [anon_sym_beqz] = ACTIONS(174),
    [anon_sym_beqzal] = ACTIONS(174),
    [anon_sym_bge] = ACTIONS(174),
    [anon_sym_bgeal] = ACTIONS(174),
    [anon_sym_bgez] = ACTIONS(174),
    [anon_sym_bgezal] = ACTIONS(174),
    [anon_sym_bgt] = ACTIONS(174),
    [anon_sym_bgtal] = ACTIONS(174),
    [anon_sym_bgtz] = ACTIONS(174),
    [anon_sym_bgtzal] = ACTIONS(174),
    [anon_sym_ble] = ACTIONS(174),
    [anon_sym_bleal] = ACTIONS(174),
    [anon_sym_blez] = ACTIONS(174),
    [anon_sym_blezal] = ACTIONS(174),
    [anon_sym_blt] = ACTIONS(174),
    [anon_sym_bltal] = ACTIONS(174),
    [anon_sym_bltz] = ACTIONS(174),
    [anon_sym_bltzal] = ACTIONS(174),
    [anon_sym_bna] = ACTIONS(174),
    [anon_sym_bnaal] = ACTIONS(174),
    [anon_sym_bnan] = ACTIONS(174),
    [anon_sym_bnaz] = ACTIONS(174),
    [anon_sym_bnazal] = ACTIONS(174),
    [anon_sym_bne] = ACTIONS(174),
    [anon_sym_bneal] = ACTIONS(174),
    [anon_sym_bnez] = ACTIONS(174),
    [anon_sym_bnezal] = ACTIONS(174),
    [anon_sym_brap] = ACTIONS(174),
    [anon_sym_brapz] = ACTIONS(174),
    [anon_sym_brdns] = ACTIONS(174),
    [anon_sym_brdse] = ACTIONS(174),
    [anon_sym_breq] = ACTIONS(174),
    [anon_sym_breqz] = ACTIONS(174),
    [anon_sym_brge] = ACTIONS(174),
    [anon_sym_brgez] = ACTIONS(174),
    [anon_sym_brgt] = ACTIONS(174),
    [anon_sym_brgtz] = ACTIONS(174),
    [anon_sym_brle] = ACTIONS(174),
    [anon_sym_brlez] = ACTIONS(174),
    [anon_sym_brlt] = ACTIONS(174),
    [anon_sym_brltz] = ACTIONS(174),
    [anon_sym_brna] = ACTIONS(174),
    [anon_sym_brnan] = ACTIONS(174),
    [anon_sym_brnaz] = ACTIONS(174),
    [anon_sym_brne] = ACTIONS(174),
    [anon_sym_brnez] = ACTIONS(174),
    [anon_sym_ceil] = ACTIONS(174),
    [anon_sym_cos] = ACTIONS(174),
    [anon_sym_define] = ACTIONS(174),
    [anon_sym_div] = ACTIONS(174),
    [anon_sym_exp] = ACTIONS(174),
    [anon_sym_floor] = ACTIONS(174),
    [anon_sym_get] = ACTIONS(174),
    [anon_sym_getd] = ACTIONS(174),
    [anon_sym_hcf] = ACTIONS(174),
    [anon_sym_j] = ACTIONS(174),
    [anon_sym_jal] = ACTIONS(174),
    [anon_sym_jr] = ACTIONS(174),
    [anon_sym_l] = ACTIONS(174),
    [anon_sym_label] = ACTIONS(174),
    [anon_sym_lb] = ACTIONS(174),
    [anon_sym_lbn] = ACTIONS(174),
    [anon_sym_lbns] = ACTIONS(174),
    [anon_sym_lbs] = ACTIONS(174),
    [anon_sym_ld] = ACTIONS(174),
    [anon_sym_log] = ACTIONS(174),
    [anon_sym_lr] = ACTIONS(174),
    [anon_sym_ls] = ACTIONS(174),
    [anon_sym_max] = ACTIONS(174),
    [anon_sym_min] = ACTIONS(174),
    [anon_sym_mod] = ACTIONS(174),
    [anon_sym_move] = ACTIONS(174),
    [anon_sym_mul] = ACTIONS(174),
    [anon_sym_nor] = ACTIONS(174),
    [anon_sym_not] = ACTIONS(174),
    [anon_sym_or] = ACTIONS(174),
    [anon_sym_peek] = ACTIONS(174),
    [anon_sym_poke] = ACTIONS(174),
    [anon_sym_pop] = ACTIONS(174),
    [anon_sym_push] = ACTIONS(174),
    [anon_sym_put] = ACTIONS(174),
    [anon_sym_putd] = ACTIONS(174),
    [anon_sym_rand] = ACTIONS(174),
    [anon_sym_round] = ACTIONS(174),
    [anon_sym_s] = ACTIONS(174),
    [anon_sym_sap] = ACTIONS(174),
    [anon_sym_sapz] = ACTIONS(174),
    [anon_sym_sb] = ACTIONS(174),
    [anon_sym_sbn] = ACTIONS(174),
    [anon_sym_sbs] = ACTIONS(174),
    [anon_sym_sd] = ACTIONS(174),
    [anon_sym_sdns] = ACTIONS(174),
    [anon_sym_sdse] = ACTIONS(174),
    [anon_sym_select] = ACTIONS(174),
    [anon_sym_seq] = ACTIONS(174),
    [anon_sym_seqz] = ACTIONS(174),
    [anon_sym_sge] = ACTIONS(174),
    [anon_sym_sgez] = ACTIONS(174),
    [anon_sym_sgt] = ACTIONS(174),
    [anon_sym_sgtz] = ACTIONS(174),
    [anon_sym_sin] = ACTIONS(174),
    [anon_sym_sla] = ACTIONS(174),
    [anon_sym_sle] = ACTIONS(174),
    [anon_sym_sleep] = ACTIONS(174),
    [anon_sym_slez] = ACTIONS(174),
    [anon_sym_sll] = ACTIONS(174),
    [anon_sym_slt] = ACTIONS(174),
    [anon_sym_sltz] = ACTIONS(174),
    [anon_sym_sna] = ACTIONS(174),
    [anon_sym_snan] = ACTIONS(174),
    [anon_sym_snanz] = ACTIONS(174),
    [anon_sym_snaz] = ACTIONS(174),
    [anon_sym_sne] = ACTIONS(174),
    [anon_sym_snez] = ACTIONS(174),
    [anon_sym_sqrt] = ACTIONS(174),
    [anon_sym_sra] = ACTIONS(174),
    [anon_sym_srl] = ACTIONS(174),
    [anon_sym_ss] = ACTIONS(174),
    [anon_sym_sub] = ACTIONS(174),
    [anon_sym_tan] = ACTIONS(174),
    [anon_sym_trunc] = ACTIONS(174),
    [anon_sym_xor] = ACTIONS(174),
    [anon_sym_yield] = ACTIONS(174),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(179),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(177),
    [anon_sym_abs] = ACTIONS(179),
    [anon_sym_acos] = ACTIONS(179),
    [anon_sym_add] = ACTIONS(179),
    [anon_sym_alias] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_asin] = ACTIONS(179),
    [anon_sym_atan] = ACTIONS(179),
    [anon_sym_atan2] = ACTIONS(179),
    [anon_sym_bap] = ACTIONS(179),
    [anon_sym_bapal] = ACTIONS(179),
    [anon_sym_bapz] = ACTIONS(179),
    [anon_sym_bapzal] = ACTIONS(179),
    [anon_sym_bdns] = ACTIONS(179),
    [anon_sym_bdnsal] = ACTIONS(179),
    [anon_sym_bdse] = ACTIONS(179),
    [anon_sym_bdseal] = ACTIONS(179),
    [anon_sym_beq] = ACTIONS(179),
    [anon_sym_beqal] = ACTIONS(179),
    [anon_sym_beqz] = ACTIONS(179),
    [anon_sym_beqzal] = ACTIONS(179),
    [anon_sym_bge] = ACTIONS(179),
    [anon_sym_bgeal] = ACTIONS(179),
    [anon_sym_bgez] = ACTIONS(179),
    [anon_sym_bgezal] = ACTIONS(179),
    [anon_sym_bgt] = ACTIONS(179),
    [anon_sym_bgtal] = ACTIONS(179),
    [anon_sym_bgtz] = ACTIONS(179),
    [anon_sym_bgtzal] = ACTIONS(179),
    [anon_sym_ble] = ACTIONS(179),
    [anon_sym_bleal] = ACTIONS(179),
    [anon_sym_blez] = ACTIONS(179),
    [anon_sym_blezal] = ACTIONS(179),
    [anon_sym_blt] = ACTIONS(179),
    [anon_sym_bltal] = ACTIONS(179),
    [anon_sym_bltz] = ACTIONS(179),
    [anon_sym_bltzal] = ACTIONS(179),
    [anon_sym_bna] = ACTIONS(179),
    [anon_sym_bnaal] = ACTIONS(179),
    [anon_sym_bnan] = ACTIONS(179),
    [anon_sym_bnaz] = ACTIONS(179),
    [anon_sym_bnazal] = ACTIONS(179),
    [anon_sym_bne] = ACTIONS(179),
    [anon_sym_bneal] = ACTIONS(179),
    [anon_sym_bnez] = ACTIONS(179),
    [anon_sym_bnezal] = ACTIONS(179),
    [anon_sym_brap] = ACTIONS(179),
    [anon_sym_brapz] = ACTIONS(179),
    [anon_sym_brdns] = ACTIONS(179),
    [anon_sym_brdse] = ACTIONS(179),
    [anon_sym_breq] = ACTIONS(179),
    [anon_sym_breqz] = ACTIONS(179),
    [anon_sym_brge] = ACTIONS(179),
    [anon_sym_brgez] = ACTIONS(179),
    [anon_sym_brgt] = ACTIONS(179),
    [anon_sym_brgtz] = ACTIONS(179),
    [anon_sym_brle] = ACTIONS(179),
    [anon_sym_brlez] = ACTIONS(179),
    [anon_sym_brlt] = ACTIONS(179),
    [anon_sym_brltz] = ACTIONS(179),
    [anon_sym_brna] = ACTIONS(179),
    [anon_sym_brnan] = ACTIONS(179),
    [anon_sym_brnaz] = ACTIONS(179),
    [anon_sym_brne] = ACTIONS(179),
    [anon_sym_brnez] = ACTIONS(179),
    [anon_sym_ceil] = ACTIONS(179),
    [anon_sym_cos] = ACTIONS(179),
    [anon_sym_define] = ACTIONS(179),
    [anon_sym_div] = ACTIONS(179),
    [anon_sym_exp] = ACTIONS(179),
    [anon_sym_floor] = ACTIONS(179),
    [anon_sym_get] = ACTIONS(179),
    [anon_sym_getd] = ACTIONS(179),
    [anon_sym_hcf] = ACTIONS(179),
    [anon_sym_j] = ACTIONS(179),
    [anon_sym_jal] = ACTIONS(179),
    [anon_sym_jr] = ACTIONS(179),
    [anon_sym_l] = ACTIONS(179),
    [anon_sym_label] = ACTIONS(179),
    [anon_sym_lb] = ACTIONS(179),
    [anon_sym_lbn] = ACTIONS(179),
    [anon_sym_lbns] = ACTIONS(179),
    [anon_sym_lbs] = ACTIONS(179),
    [anon_sym_ld] = ACTIONS(179),
    [anon_sym_log] = ACTIONS(179),
    [anon_sym_lr] = ACTIONS(179),
    [anon_sym_ls] = ACTIONS(179),
    [anon_sym_max] = ACTIONS(179),
    [anon_sym_min] = ACTIONS(179),
    [anon_sym_mod] = ACTIONS(179),
    [anon_sym_move] = ACTIONS(179),
    [anon_sym_mul] = ACTIONS(179),
    [anon_sym_nor] = ACTIONS(179),
    [anon_sym_not] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_peek] = ACTIONS(179),
    [anon_sym_poke] = ACTIONS(179),
    [anon_sym_pop] = ACTIONS(179),
    [anon_sym_push] = ACTIONS(179),
    [anon_sym_put] = ACTIONS(179),
    [anon_sym_putd] = ACTIONS(179),
    [anon_sym_rand] = ACTIONS(179),
    [anon_sym_round] = ACTIONS(179),
    [anon_sym_s] = ACTIONS(179),
    [anon_sym_sap] = ACTIONS(179),
    [anon_sym_sapz] = ACTIONS(179),
    [anon_sym_sb] = ACTIONS(179),
    [anon_sym_sbn] = ACTIONS(179),
    [anon_sym_sbs] = ACTIONS(179),
    [anon_sym_sd] = ACTIONS(179),
    [anon_sym_sdns] = ACTIONS(179),
    [anon_sym_sdse] = ACTIONS(179),
    [anon_sym_select] = ACTIONS(179),
    [anon_sym_seq] = ACTIONS(179),
    [anon_sym_seqz] = ACTIONS(179),
    [anon_sym_sge] = ACTIONS(179),
    [anon_sym_sgez] = ACTIONS(179),
    [anon_sym_sgt] = ACTIONS(179),
    [anon_sym_sgtz] = ACTIONS(179),
    [anon_sym_sin] = ACTIONS(179),
    [anon_sym_sla] = ACTIONS(179),
    [anon_sym_sle] = ACTIONS(179),
    [anon_sym_sleep] = ACTIONS(179),
    [anon_sym_slez] = ACTIONS(179),
    [anon_sym_sll] = ACTIONS(179),
    [anon_sym_slt] = ACTIONS(179),
    [anon_sym_sltz] = ACTIONS(179),
    [anon_sym_sna] = ACTIONS(179),
    [anon_sym_snan] = ACTIONS(179),
    [anon_sym_snanz] = ACTIONS(179),
    [anon_sym_snaz] = ACTIONS(179),
    [anon_sym_sne] = ACTIONS(179),
    [anon_sym_snez] = ACTIONS(179),
    [anon_sym_sqrt] = ACTIONS(179),
    [anon_sym_sra] = ACTIONS(179),
    [anon_sym_srl] = ACTIONS(179),
    [anon_sym_ss] = ACTIONS(179),
    [anon_sym_sub] = ACTIONS(179),
    [anon_sym_tan] = ACTIONS(179),
    [anon_sym_trunc] = ACTIONS(179),
    [anon_sym_xor] = ACTIONS(179),
    [anon_sym_yield] = ACTIONS(179),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_CR_LF] = ACTIONS(181),
    [anon_sym_CR] = ACTIONS(183),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(181),
    [anon_sym_abs] = ACTIONS(183),
    [anon_sym_acos] = ACTIONS(183),
    [anon_sym_add] = ACTIONS(183),
    [anon_sym_alias] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_asin] = ACTIONS(183),
    [anon_sym_atan] = ACTIONS(183),
    [anon_sym_atan2] = ACTIONS(183),
    [anon_sym_bap] = ACTIONS(183),
    [anon_sym_bapal] = ACTIONS(183),
    [anon_sym_bapz] = ACTIONS(183),
    [anon_sym_bapzal] = ACTIONS(183),
    [anon_sym_bdns] = ACTIONS(183),
    [anon_sym_bdnsal] = ACTIONS(183),
    [anon_sym_bdse] = ACTIONS(183),
    [anon_sym_bdseal] = ACTIONS(183),
    [anon_sym_beq] = ACTIONS(183),
    [anon_sym_beqal] = ACTIONS(183),
    [anon_sym_beqz] = ACTIONS(183),
    [anon_sym_beqzal] = ACTIONS(183),
    [anon_sym_bge] = ACTIONS(183),
    [anon_sym_bgeal] = ACTIONS(183),
    [anon_sym_bgez] = ACTIONS(183),
    [anon_sym_bgezal] = ACTIONS(183),
    [anon_sym_bgt] = ACTIONS(183),
    [anon_sym_bgtal] = ACTIONS(183),
    [anon_sym_bgtz] = ACTIONS(183),
    [anon_sym_bgtzal] = ACTIONS(183),
    [anon_sym_ble] = ACTIONS(183),
    [anon_sym_bleal] = ACTIONS(183),
    [anon_sym_blez] = ACTIONS(183),
    [anon_sym_blezal] = ACTIONS(183),
    [anon_sym_blt] = ACTIONS(183),
    [anon_sym_bltal] = ACTIONS(183),
    [anon_sym_bltz] = ACTIONS(183),
    [anon_sym_bltzal] = ACTIONS(183),
    [anon_sym_bna] = ACTIONS(183),
    [anon_sym_bnaal] = ACTIONS(183),
    [anon_sym_bnan] = ACTIONS(183),
    [anon_sym_bnaz] = ACTIONS(183),
    [anon_sym_bnazal] = ACTIONS(183),
    [anon_sym_bne] = ACTIONS(183),
    [anon_sym_bneal] = ACTIONS(183),
    [anon_sym_bnez] = ACTIONS(183),
    [anon_sym_bnezal] = ACTIONS(183),
    [anon_sym_brap] = ACTIONS(183),
    [anon_sym_brapz] = ACTIONS(183),
    [anon_sym_brdns] = ACTIONS(183),
    [anon_sym_brdse] = ACTIONS(183),
    [anon_sym_breq] = ACTIONS(183),
    [anon_sym_breqz] = ACTIONS(183),
    [anon_sym_brge] = ACTIONS(183),
    [anon_sym_brgez] = ACTIONS(183),
    [anon_sym_brgt] = ACTIONS(183),
    [anon_sym_brgtz] = ACTIONS(183),
    [anon_sym_brle] = ACTIONS(183),
    [anon_sym_brlez] = ACTIONS(183),
    [anon_sym_brlt] = ACTIONS(183),
    [anon_sym_brltz] = ACTIONS(183),
    [anon_sym_brna] = ACTIONS(183),
    [anon_sym_brnan] = ACTIONS(183),
    [anon_sym_brnaz] = ACTIONS(183),
    [anon_sym_brne] = ACTIONS(183),
    [anon_sym_brnez] = ACTIONS(183),
    [anon_sym_ceil] = ACTIONS(183),
    [anon_sym_cos] = ACTIONS(183),
    [anon_sym_define] = ACTIONS(183),
    [anon_sym_div] = ACTIONS(183),
    [anon_sym_exp] = ACTIONS(183),
    [anon_sym_floor] = ACTIONS(183),
    [anon_sym_get] = ACTIONS(183),
    [anon_sym_getd] = ACTIONS(183),
    [anon_sym_hcf] = ACTIONS(183),
    [anon_sym_j] = ACTIONS(183),
    [anon_sym_jal] = ACTIONS(183),
    [anon_sym_jr] = ACTIONS(183),
    [anon_sym_l] = ACTIONS(183),
    [anon_sym_label] = ACTIONS(183),
    [anon_sym_lb] = ACTIONS(183),
    [anon_sym_lbn] = ACTIONS(183),
    [anon_sym_lbns] = ACTIONS(183),
    [anon_sym_lbs] = ACTIONS(183),
    [anon_sym_ld] = ACTIONS(183),
    [anon_sym_log] = ACTIONS(183),
    [anon_sym_lr] = ACTIONS(183),
    [anon_sym_ls] = ACTIONS(183),
    [anon_sym_max] = ACTIONS(183),
    [anon_sym_min] = ACTIONS(183),
    [anon_sym_mod] = ACTIONS(183),
    [anon_sym_move] = ACTIONS(183),
    [anon_sym_mul] = ACTIONS(183),
    [anon_sym_nor] = ACTIONS(183),
    [anon_sym_not] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_peek] = ACTIONS(183),
    [anon_sym_poke] = ACTIONS(183),
    [anon_sym_pop] = ACTIONS(183),
    [anon_sym_push] = ACTIONS(183),
    [anon_sym_put] = ACTIONS(183),
    [anon_sym_putd] = ACTIONS(183),
    [anon_sym_rand] = ACTIONS(183),
    [anon_sym_round] = ACTIONS(183),
    [anon_sym_s] = ACTIONS(183),
    [anon_sym_sap] = ACTIONS(183),
    [anon_sym_sapz] = ACTIONS(183),
    [anon_sym_sb] = ACTIONS(183),
    [anon_sym_sbn] = ACTIONS(183),
    [anon_sym_sbs] = ACTIONS(183),
    [anon_sym_sd] = ACTIONS(183),
    [anon_sym_sdns] = ACTIONS(183),
    [anon_sym_sdse] = ACTIONS(183),
    [anon_sym_select] = ACTIONS(183),
    [anon_sym_seq] = ACTIONS(183),
    [anon_sym_seqz] = ACTIONS(183),
    [anon_sym_sge] = ACTIONS(183),
    [anon_sym_sgez] = ACTIONS(183),
    [anon_sym_sgt] = ACTIONS(183),
    [anon_sym_sgtz] = ACTIONS(183),
    [anon_sym_sin] = ACTIONS(183),
    [anon_sym_sla] = ACTIONS(183),
    [anon_sym_sle] = ACTIONS(183),
    [anon_sym_sleep] = ACTIONS(183),
    [anon_sym_slez] = ACTIONS(183),
    [anon_sym_sll] = ACTIONS(183),
    [anon_sym_slt] = ACTIONS(183),
    [anon_sym_sltz] = ACTIONS(183),
    [anon_sym_sna] = ACTIONS(183),
    [anon_sym_snan] = ACTIONS(183),
    [anon_sym_snanz] = ACTIONS(183),
    [anon_sym_snaz] = ACTIONS(183),
    [anon_sym_sne] = ACTIONS(183),
    [anon_sym_snez] = ACTIONS(183),
    [anon_sym_sqrt] = ACTIONS(183),
    [anon_sym_sra] = ACTIONS(183),
    [anon_sym_srl] = ACTIONS(183),
    [anon_sym_ss] = ACTIONS(183),
    [anon_sym_sub] = ACTIONS(183),
    [anon_sym_tan] = ACTIONS(183),
    [anon_sym_trunc] = ACTIONS(183),
    [anon_sym_xor] = ACTIONS(183),
    [anon_sym_yield] = ACTIONS(183),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_CR_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(187),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(185),
    [anon_sym_abs] = ACTIONS(187),
    [anon_sym_acos] = ACTIONS(187),
    [anon_sym_add] = ACTIONS(187),
    [anon_sym_alias] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_asin] = ACTIONS(187),
    [anon_sym_atan] = ACTIONS(187),
    [anon_sym_atan2] = ACTIONS(187),
    [anon_sym_bap] = ACTIONS(187),
    [anon_sym_bapal] = ACTIONS(187),
    [anon_sym_bapz] = ACTIONS(187),
    [anon_sym_bapzal] = ACTIONS(187),
    [anon_sym_bdns] = ACTIONS(187),
    [anon_sym_bdnsal] = ACTIONS(187),
    [anon_sym_bdse] = ACTIONS(187),
    [anon_sym_bdseal] = ACTIONS(187),
    [anon_sym_beq] = ACTIONS(187),
    [anon_sym_beqal] = ACTIONS(187),
    [anon_sym_beqz] = ACTIONS(187),
    [anon_sym_beqzal] = ACTIONS(187),
    [anon_sym_bge] = ACTIONS(187),
    [anon_sym_bgeal] = ACTIONS(187),
    [anon_sym_bgez] = ACTIONS(187),
    [anon_sym_bgezal] = ACTIONS(187),
    [anon_sym_bgt] = ACTIONS(187),
    [anon_sym_bgtal] = ACTIONS(187),
    [anon_sym_bgtz] = ACTIONS(187),
    [anon_sym_bgtzal] = ACTIONS(187),
    [anon_sym_ble] = ACTIONS(187),
    [anon_sym_bleal] = ACTIONS(187),
    [anon_sym_blez] = ACTIONS(187),
    [anon_sym_blezal] = ACTIONS(187),
    [anon_sym_blt] = ACTIONS(187),
    [anon_sym_bltal] = ACTIONS(187),
    [anon_sym_bltz] = ACTIONS(187),
    [anon_sym_bltzal] = ACTIONS(187),
    [anon_sym_bna] = ACTIONS(187),
    [anon_sym_bnaal] = ACTIONS(187),
    [anon_sym_bnan] = ACTIONS(187),
    [anon_sym_bnaz] = ACTIONS(187),
    [anon_sym_bnazal] = ACTIONS(187),
    [anon_sym_bne] = ACTIONS(187),
    [anon_sym_bneal] = ACTIONS(187),
    [anon_sym_bnez] = ACTIONS(187),
    [anon_sym_bnezal] = ACTIONS(187),
    [anon_sym_brap] = ACTIONS(187),
    [anon_sym_brapz] = ACTIONS(187),
    [anon_sym_brdns] = ACTIONS(187),
    [anon_sym_brdse] = ACTIONS(187),
    [anon_sym_breq] = ACTIONS(187),
    [anon_sym_breqz] = ACTIONS(187),
    [anon_sym_brge] = ACTIONS(187),
    [anon_sym_brgez] = ACTIONS(187),
    [anon_sym_brgt] = ACTIONS(187),
    [anon_sym_brgtz] = ACTIONS(187),
    [anon_sym_brle] = ACTIONS(187),
    [anon_sym_brlez] = ACTIONS(187),
    [anon_sym_brlt] = ACTIONS(187),
    [anon_sym_brltz] = ACTIONS(187),
    [anon_sym_brna] = ACTIONS(187),
    [anon_sym_brnan] = ACTIONS(187),
    [anon_sym_brnaz] = ACTIONS(187),
    [anon_sym_brne] = ACTIONS(187),
    [anon_sym_brnez] = ACTIONS(187),
    [anon_sym_ceil] = ACTIONS(187),
    [anon_sym_cos] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_exp] = ACTIONS(187),
    [anon_sym_floor] = ACTIONS(187),
    [anon_sym_get] = ACTIONS(187),
    [anon_sym_getd] = ACTIONS(187),
    [anon_sym_hcf] = ACTIONS(187),
    [anon_sym_j] = ACTIONS(187),
    [anon_sym_jal] = ACTIONS(187),
    [anon_sym_jr] = ACTIONS(187),
    [anon_sym_l] = ACTIONS(187),
    [anon_sym_label] = ACTIONS(187),
    [anon_sym_lb] = ACTIONS(187),
    [anon_sym_lbn] = ACTIONS(187),
    [anon_sym_lbns] = ACTIONS(187),
    [anon_sym_lbs] = ACTIONS(187),
    [anon_sym_ld] = ACTIONS(187),
    [anon_sym_log] = ACTIONS(187),
    [anon_sym_lr] = ACTIONS(187),
    [anon_sym_ls] = ACTIONS(187),
    [anon_sym_max] = ACTIONS(187),
    [anon_sym_min] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_move] = ACTIONS(187),
    [anon_sym_mul] = ACTIONS(187),
    [anon_sym_nor] = ACTIONS(187),
    [anon_sym_not] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_peek] = ACTIONS(187),
    [anon_sym_poke] = ACTIONS(187),
    [anon_sym_pop] = ACTIONS(187),
    [anon_sym_push] = ACTIONS(187),
    [anon_sym_put] = ACTIONS(187),
    [anon_sym_putd] = ACTIONS(187),
    [anon_sym_rand] = ACTIONS(187),
    [anon_sym_round] = ACTIONS(187),
    [anon_sym_s] = ACTIONS(187),
    [anon_sym_sap] = ACTIONS(187),
    [anon_sym_sapz] = ACTIONS(187),
    [anon_sym_sb] = ACTIONS(187),
    [anon_sym_sbn] = ACTIONS(187),
    [anon_sym_sbs] = ACTIONS(187),
    [anon_sym_sd] = ACTIONS(187),
    [anon_sym_sdns] = ACTIONS(187),
    [anon_sym_sdse] = ACTIONS(187),
    [anon_sym_select] = ACTIONS(187),
    [anon_sym_seq] = ACTIONS(187),
    [anon_sym_seqz] = ACTIONS(187),
    [anon_sym_sge] = ACTIONS(187),
    [anon_sym_sgez] = ACTIONS(187),
    [anon_sym_sgt] = ACTIONS(187),
    [anon_sym_sgtz] = ACTIONS(187),
    [anon_sym_sin] = ACTIONS(187),
    [anon_sym_sla] = ACTIONS(187),
    [anon_sym_sle] = ACTIONS(187),
    [anon_sym_sleep] = ACTIONS(187),
    [anon_sym_slez] = ACTIONS(187),
    [anon_sym_sll] = ACTIONS(187),
    [anon_sym_slt] = ACTIONS(187),
    [anon_sym_sltz] = ACTIONS(187),
    [anon_sym_sna] = ACTIONS(187),
    [anon_sym_snan] = ACTIONS(187),
    [anon_sym_snanz] = ACTIONS(187),
    [anon_sym_snaz] = ACTIONS(187),
    [anon_sym_sne] = ACTIONS(187),
    [anon_sym_snez] = ACTIONS(187),
    [anon_sym_sqrt] = ACTIONS(187),
    [anon_sym_sra] = ACTIONS(187),
    [anon_sym_srl] = ACTIONS(187),
    [anon_sym_ss] = ACTIONS(187),
    [anon_sym_sub] = ACTIONS(187),
    [anon_sym_tan] = ACTIONS(187),
    [anon_sym_trunc] = ACTIONS(187),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_yield] = ACTIONS(187),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_CR_LF] = ACTIONS(189),
    [anon_sym_CR] = ACTIONS(191),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(189),
    [anon_sym_abs] = ACTIONS(191),
    [anon_sym_acos] = ACTIONS(191),
    [anon_sym_add] = ACTIONS(191),
    [anon_sym_alias] = ACTIONS(191),
    [anon_sym_and] = ACTIONS(191),
    [anon_sym_asin] = ACTIONS(191),
    [anon_sym_atan] = ACTIONS(191),
    [anon_sym_atan2] = ACTIONS(191),
    [anon_sym_bap] = ACTIONS(191),
    [anon_sym_bapal] = ACTIONS(191),
    [anon_sym_bapz] = ACTIONS(191),
    [anon_sym_bapzal] = ACTIONS(191),
    [anon_sym_bdns] = ACTIONS(191),
    [anon_sym_bdnsal] = ACTIONS(191),
    [anon_sym_bdse] = ACTIONS(191),
    [anon_sym_bdseal] = ACTIONS(191),
    [anon_sym_beq] = ACTIONS(191),
    [anon_sym_beqal] = ACTIONS(191),
    [anon_sym_beqz] = ACTIONS(191),
    [anon_sym_beqzal] = ACTIONS(191),
    [anon_sym_bge] = ACTIONS(191),
    [anon_sym_bgeal] = ACTIONS(191),
    [anon_sym_bgez] = ACTIONS(191),
    [anon_sym_bgezal] = ACTIONS(191),
    [anon_sym_bgt] = ACTIONS(191),
    [anon_sym_bgtal] = ACTIONS(191),
    [anon_sym_bgtz] = ACTIONS(191),
    [anon_sym_bgtzal] = ACTIONS(191),
    [anon_sym_ble] = ACTIONS(191),
    [anon_sym_bleal] = ACTIONS(191),
    [anon_sym_blez] = ACTIONS(191),
    [anon_sym_blezal] = ACTIONS(191),
    [anon_sym_blt] = ACTIONS(191),
    [anon_sym_bltal] = ACTIONS(191),
    [anon_sym_bltz] = ACTIONS(191),
    [anon_sym_bltzal] = ACTIONS(191),
    [anon_sym_bna] = ACTIONS(191),
    [anon_sym_bnaal] = ACTIONS(191),
    [anon_sym_bnan] = ACTIONS(191),
    [anon_sym_bnaz] = ACTIONS(191),
    [anon_sym_bnazal] = ACTIONS(191),
    [anon_sym_bne] = ACTIONS(191),
    [anon_sym_bneal] = ACTIONS(191),
    [anon_sym_bnez] = ACTIONS(191),
    [anon_sym_bnezal] = ACTIONS(191),
    [anon_sym_brap] = ACTIONS(191),
    [anon_sym_brapz] = ACTIONS(191),
    [anon_sym_brdns] = ACTIONS(191),
    [anon_sym_brdse] = ACTIONS(191),
    [anon_sym_breq] = ACTIONS(191),
    [anon_sym_breqz] = ACTIONS(191),
    [anon_sym_brge] = ACTIONS(191),
    [anon_sym_brgez] = ACTIONS(191),
    [anon_sym_brgt] = ACTIONS(191),
    [anon_sym_brgtz] = ACTIONS(191),
    [anon_sym_brle] = ACTIONS(191),
    [anon_sym_brlez] = ACTIONS(191),
    [anon_sym_brlt] = ACTIONS(191),
    [anon_sym_brltz] = ACTIONS(191),
    [anon_sym_brna] = ACTIONS(191),
    [anon_sym_brnan] = ACTIONS(191),
    [anon_sym_brnaz] = ACTIONS(191),
    [anon_sym_brne] = ACTIONS(191),
    [anon_sym_brnez] = ACTIONS(191),
    [anon_sym_ceil] = ACTIONS(191),
    [anon_sym_cos] = ACTIONS(191),
    [anon_sym_define] = ACTIONS(191),
    [anon_sym_div] = ACTIONS(191),
    [anon_sym_exp] = ACTIONS(191),
    [anon_sym_floor] = ACTIONS(191),
    [anon_sym_get] = ACTIONS(191),
    [anon_sym_getd] = ACTIONS(191),
    [anon_sym_hcf] = ACTIONS(191),
    [anon_sym_j] = ACTIONS(191),
    [anon_sym_jal] = ACTIONS(191),
    [anon_sym_jr] = ACTIONS(191),
    [anon_sym_l] = ACTIONS(191),
    [anon_sym_label] = ACTIONS(191),
    [anon_sym_lb] = ACTIONS(191),
    [anon_sym_lbn] = ACTIONS(191),
    [anon_sym_lbns] = ACTIONS(191),
    [anon_sym_lbs] = ACTIONS(191),
    [anon_sym_ld] = ACTIONS(191),
    [anon_sym_log] = ACTIONS(191),
    [anon_sym_lr] = ACTIONS(191),
    [anon_sym_ls] = ACTIONS(191),
    [anon_sym_max] = ACTIONS(191),
    [anon_sym_min] = ACTIONS(191),
    [anon_sym_mod] = ACTIONS(191),
    [anon_sym_move] = ACTIONS(191),
    [anon_sym_mul] = ACTIONS(191),
    [anon_sym_nor] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(191),
    [anon_sym_or] = ACTIONS(191),
    [anon_sym_peek] = ACTIONS(191),
    [anon_sym_poke] = ACTIONS(191),
    [anon_sym_pop] = ACTIONS(191),
    [anon_sym_push] = ACTIONS(191),
    [anon_sym_put] = ACTIONS(191),
    [anon_sym_putd] = ACTIONS(191),
    [anon_sym_rand] = ACTIONS(191),
    [anon_sym_round] = ACTIONS(191),
    [anon_sym_s] = ACTIONS(191),
    [anon_sym_sap] = ACTIONS(191),
    [anon_sym_sapz] = ACTIONS(191),
    [anon_sym_sb] = ACTIONS(191),
    [anon_sym_sbn] = ACTIONS(191),
    [anon_sym_sbs] = ACTIONS(191),
    [anon_sym_sd] = ACTIONS(191),
    [anon_sym_sdns] = ACTIONS(191),
    [anon_sym_sdse] = ACTIONS(191),
    [anon_sym_select] = ACTIONS(191),
    [anon_sym_seq] = ACTIONS(191),
    [anon_sym_seqz] = ACTIONS(191),
    [anon_sym_sge] = ACTIONS(191),
    [anon_sym_sgez] = ACTIONS(191),
    [anon_sym_sgt] = ACTIONS(191),
    [anon_sym_sgtz] = ACTIONS(191),
    [anon_sym_sin] = ACTIONS(191),
    [anon_sym_sla] = ACTIONS(191),
    [anon_sym_sle] = ACTIONS(191),
    [anon_sym_sleep] = ACTIONS(191),
    [anon_sym_slez] = ACTIONS(191),
    [anon_sym_sll] = ACTIONS(191),
    [anon_sym_slt] = ACTIONS(191),
    [anon_sym_sltz] = ACTIONS(191),
    [anon_sym_sna] = ACTIONS(191),
    [anon_sym_snan] = ACTIONS(191),
    [anon_sym_snanz] = ACTIONS(191),
    [anon_sym_snaz] = ACTIONS(191),
    [anon_sym_sne] = ACTIONS(191),
    [anon_sym_snez] = ACTIONS(191),
    [anon_sym_sqrt] = ACTIONS(191),
    [anon_sym_sra] = ACTIONS(191),
    [anon_sym_srl] = ACTIONS(191),
    [anon_sym_ss] = ACTIONS(191),
    [anon_sym_sub] = ACTIONS(191),
    [anon_sym_tan] = ACTIONS(191),
    [anon_sym_trunc] = ACTIONS(191),
    [anon_sym_xor] = ACTIONS(191),
    [anon_sym_yield] = ACTIONS(191),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(195),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(193),
    [anon_sym_abs] = ACTIONS(195),
    [anon_sym_acos] = ACTIONS(195),
    [anon_sym_add] = ACTIONS(195),
    [anon_sym_alias] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_asin] = ACTIONS(195),
    [anon_sym_atan] = ACTIONS(195),
    [anon_sym_atan2] = ACTIONS(195),
    [anon_sym_bap] = ACTIONS(195),
    [anon_sym_bapal] = ACTIONS(195),
    [anon_sym_bapz] = ACTIONS(195),
    [anon_sym_bapzal] = ACTIONS(195),
    [anon_sym_bdns] = ACTIONS(195),
    [anon_sym_bdnsal] = ACTIONS(195),
    [anon_sym_bdse] = ACTIONS(195),
    [anon_sym_bdseal] = ACTIONS(195),
    [anon_sym_beq] = ACTIONS(195),
    [anon_sym_beqal] = ACTIONS(195),
    [anon_sym_beqz] = ACTIONS(195),
    [anon_sym_beqzal] = ACTIONS(195),
    [anon_sym_bge] = ACTIONS(195),
    [anon_sym_bgeal] = ACTIONS(195),
    [anon_sym_bgez] = ACTIONS(195),
    [anon_sym_bgezal] = ACTIONS(195),
    [anon_sym_bgt] = ACTIONS(195),
    [anon_sym_bgtal] = ACTIONS(195),
    [anon_sym_bgtz] = ACTIONS(195),
    [anon_sym_bgtzal] = ACTIONS(195),
    [anon_sym_ble] = ACTIONS(195),
    [anon_sym_bleal] = ACTIONS(195),
    [anon_sym_blez] = ACTIONS(195),
    [anon_sym_blezal] = ACTIONS(195),
    [anon_sym_blt] = ACTIONS(195),
    [anon_sym_bltal] = ACTIONS(195),
    [anon_sym_bltz] = ACTIONS(195),
    [anon_sym_bltzal] = ACTIONS(195),
    [anon_sym_bna] = ACTIONS(195),
    [anon_sym_bnaal] = ACTIONS(195),
    [anon_sym_bnan] = ACTIONS(195),
    [anon_sym_bnaz] = ACTIONS(195),
    [anon_sym_bnazal] = ACTIONS(195),
    [anon_sym_bne] = ACTIONS(195),
    [anon_sym_bneal] = ACTIONS(195),
    [anon_sym_bnez] = ACTIONS(195),
    [anon_sym_bnezal] = ACTIONS(195),
    [anon_sym_brap] = ACTIONS(195),
    [anon_sym_brapz] = ACTIONS(195),
    [anon_sym_brdns] = ACTIONS(195),
    [anon_sym_brdse] = ACTIONS(195),
    [anon_sym_breq] = ACTIONS(195),
    [anon_sym_breqz] = ACTIONS(195),
    [anon_sym_brge] = ACTIONS(195),
    [anon_sym_brgez] = ACTIONS(195),
    [anon_sym_brgt] = ACTIONS(195),
    [anon_sym_brgtz] = ACTIONS(195),
    [anon_sym_brle] = ACTIONS(195),
    [anon_sym_brlez] = ACTIONS(195),
    [anon_sym_brlt] = ACTIONS(195),
    [anon_sym_brltz] = ACTIONS(195),
    [anon_sym_brna] = ACTIONS(195),
    [anon_sym_brnan] = ACTIONS(195),
    [anon_sym_brnaz] = ACTIONS(195),
    [anon_sym_brne] = ACTIONS(195),
    [anon_sym_brnez] = ACTIONS(195),
    [anon_sym_ceil] = ACTIONS(195),
    [anon_sym_cos] = ACTIONS(195),
    [anon_sym_define] = ACTIONS(195),
    [anon_sym_div] = ACTIONS(195),
    [anon_sym_exp] = ACTIONS(195),
    [anon_sym_floor] = ACTIONS(195),
    [anon_sym_get] = ACTIONS(195),
    [anon_sym_getd] = ACTIONS(195),
    [anon_sym_hcf] = ACTIONS(195),
    [anon_sym_j] = ACTIONS(195),
    [anon_sym_jal] = ACTIONS(195),
    [anon_sym_jr] = ACTIONS(195),
    [anon_sym_l] = ACTIONS(195),
    [anon_sym_label] = ACTIONS(195),
    [anon_sym_lb] = ACTIONS(195),
    [anon_sym_lbn] = ACTIONS(195),
    [anon_sym_lbns] = ACTIONS(195),
    [anon_sym_lbs] = ACTIONS(195),
    [anon_sym_ld] = ACTIONS(195),
    [anon_sym_log] = ACTIONS(195),
    [anon_sym_lr] = ACTIONS(195),
    [anon_sym_ls] = ACTIONS(195),
    [anon_sym_max] = ACTIONS(195),
    [anon_sym_min] = ACTIONS(195),
    [anon_sym_mod] = ACTIONS(195),
    [anon_sym_move] = ACTIONS(195),
    [anon_sym_mul] = ACTIONS(195),
    [anon_sym_nor] = ACTIONS(195),
    [anon_sym_not] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [anon_sym_peek] = ACTIONS(195),
    [anon_sym_poke] = ACTIONS(195),
    [anon_sym_pop] = ACTIONS(195),
    [anon_sym_push] = ACTIONS(195),
    [anon_sym_put] = ACTIONS(195),
    [anon_sym_putd] = ACTIONS(195),
    [anon_sym_rand] = ACTIONS(195),
    [anon_sym_round] = ACTIONS(195),
    [anon_sym_s] = ACTIONS(195),
    [anon_sym_sap] = ACTIONS(195),
    [anon_sym_sapz] = ACTIONS(195),
    [anon_sym_sb] = ACTIONS(195),
    [anon_sym_sbn] = ACTIONS(195),
    [anon_sym_sbs] = ACTIONS(195),
    [anon_sym_sd] = ACTIONS(195),
    [anon_sym_sdns] = ACTIONS(195),
    [anon_sym_sdse] = ACTIONS(195),
    [anon_sym_select] = ACTIONS(195),
    [anon_sym_seq] = ACTIONS(195),
    [anon_sym_seqz] = ACTIONS(195),
    [anon_sym_sge] = ACTIONS(195),
    [anon_sym_sgez] = ACTIONS(195),
    [anon_sym_sgt] = ACTIONS(195),
    [anon_sym_sgtz] = ACTIONS(195),
    [anon_sym_sin] = ACTIONS(195),
    [anon_sym_sla] = ACTIONS(195),
    [anon_sym_sle] = ACTIONS(195),
    [anon_sym_sleep] = ACTIONS(195),
    [anon_sym_slez] = ACTIONS(195),
    [anon_sym_sll] = ACTIONS(195),
    [anon_sym_slt] = ACTIONS(195),
    [anon_sym_sltz] = ACTIONS(195),
    [anon_sym_sna] = ACTIONS(195),
    [anon_sym_snan] = ACTIONS(195),
    [anon_sym_snanz] = ACTIONS(195),
    [anon_sym_snaz] = ACTIONS(195),
    [anon_sym_sne] = ACTIONS(195),
    [anon_sym_snez] = ACTIONS(195),
    [anon_sym_sqrt] = ACTIONS(195),
    [anon_sym_sra] = ACTIONS(195),
    [anon_sym_srl] = ACTIONS(195),
    [anon_sym_ss] = ACTIONS(195),
    [anon_sym_sub] = ACTIONS(195),
    [anon_sym_tan] = ACTIONS(195),
    [anon_sym_trunc] = ACTIONS(195),
    [anon_sym_xor] = ACTIONS(195),
    [anon_sym_yield] = ACTIONS(195),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_newline,
    STATE(32), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [20] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(199), 1,
      anon_sym_CR,
    ACTIONS(197), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
  [32] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(26), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [46] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [60] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(203), 1,
      anon_sym_CR,
    ACTIONS(201), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [71] = 2,
    ACTIONS(205), 1,
      sym__whitespace,
    ACTIONS(207), 1,
      sym_preproc_string,
  [78] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(209), 1,
      sym_network_index,
  [85] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(211), 1,
      anon_sym_DQUOTE_RPAREN,
  [92] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 20,
  [SMALL_STATE(31)] = 32,
  [SMALL_STATE(32)] = 46,
  [SMALL_STATE(33)] = 60,
  [SMALL_STATE(34)] = 71,
  [SMALL_STATE(35)] = 78,
  [SMALL_STATE(36)] = 85,
  [SMALL_STATE(37)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(7),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(11),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(10),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(13),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(9),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(15),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(16),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 7), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logictype, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logictype, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicslottype, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicslottype, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batchmode, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batchmode, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reagentmode, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reagentmode, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicable, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicable, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, 0, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, 0, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_preproc, 3, 0, 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_preproc, 3, 0, 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ic10(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
