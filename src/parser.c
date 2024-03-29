#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 479
#define ALIAS_COUNT 2
#define TOKEN_COUNT 460
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
  anon_sym_Bypass = 172,
  anon_sym_CelestialHash = 173,
  anon_sym_CelestialParentHash = 174,
  anon_sym_Channel = 175,
  anon_sym_Channel0 = 176,
  anon_sym_Channel1 = 177,
  anon_sym_Channel2 = 178,
  anon_sym_Channel3 = 179,
  anon_sym_Channel4 = 180,
  anon_sym_Channel5 = 181,
  anon_sym_Channel6 = 182,
  anon_sym_Channel7 = 183,
  anon_sym_Charge = 184,
  anon_sym_Chart = 185,
  anon_sym_ChartedNavPoints = 186,
  anon_sym_ClearMemory = 187,
  anon_sym_CollectableGoods = 188,
  anon_sym_Color = 189,
  anon_sym_Combustion = 190,
  anon_sym_CombustionInput = 191,
  anon_sym_CombustionInput2 = 192,
  anon_sym_CombustionLimiter = 193,
  anon_sym_CombustionOutput = 194,
  anon_sym_CombustionOutput2 = 195,
  anon_sym_CompletionRatio = 196,
  anon_sym_ContactTypeId = 197,
  anon_sym_CurrentCode = 198,
  anon_sym_CurrentResearchPodType = 199,
  anon_sym_Density = 200,
  anon_sym_DestinationCode = 201,
  anon_sym_Discover = 202,
  anon_sym_DistanceAu = 203,
  anon_sym_DistanceKm = 204,
  anon_sym_DrillCondition = 205,
  anon_sym_DryMass = 206,
  anon_sym_Eccentricity = 207,
  anon_sym_ElevatorLevel = 208,
  anon_sym_ElevatorSpeed = 209,
  anon_sym_EntityState = 210,
  anon_sym_EnvironmentEfficiency = 211,
  anon_sym_Error = 212,
  anon_sym_ExhaustVelocity = 213,
  anon_sym_ExportCount = 214,
  anon_sym_ExportQuantity = 215,
  anon_sym_ExportSlotHash = 216,
  anon_sym_ExportSlotOccupant = 217,
  anon_sym_Filtration = 218,
  anon_sym_FlightControlRule = 219,
  anon_sym_Flush = 220,
  anon_sym_ForceWrite = 221,
  anon_sym_ForwardX = 222,
  anon_sym_ForwardY = 223,
  anon_sym_ForwardZ = 224,
  anon_sym_Fuel = 225,
  anon_sym_Harvest = 226,
  anon_sym_Horizontal = 227,
  anon_sym_HorizontalRatio = 228,
  anon_sym_Idle = 229,
  anon_sym_ImportCount = 230,
  anon_sym_ImportQuantity = 231,
  anon_sym_ImportSlotHash = 232,
  anon_sym_ImportSlotOccupant = 233,
  anon_sym_Inclination = 234,
  anon_sym_Index = 235,
  anon_sym_InterrogationProgress = 236,
  anon_sym_LineNumber = 237,
  anon_sym_Lock = 238,
  anon_sym_ManualResearchRequiredPod = 239,
  anon_sym_Mass = 240,
  anon_sym_Maximum = 241,
  anon_sym_MinWattsToContact = 242,
  anon_sym_MineablesInQueue = 243,
  anon_sym_MineablesInVicinity = 244,
  anon_sym_MinedQuantity = 245,
  anon_sym_MinimumWattsToContact = 246,
  anon_sym_Mode = 247,
  anon_sym_NavPoints = 248,
  anon_sym_NextWeatherEventTime = 249,
  anon_sym_None = 250,
  anon_sym_On = 251,
  anon_sym_Open = 252,
  anon_sym_OperationalTemperatureEfficiency = 253,
  anon_sym_OrbitPeriod = 254,
  anon_sym_Orientation = 255,
  anon_sym_Output = 256,
  anon_sym_OverShootTarget = 257,
  anon_sym_PassedMoles = 258,
  anon_sym_Plant = 259,
  anon_sym_PlantEfficiency1 = 260,
  anon_sym_PlantEfficiency2 = 261,
  anon_sym_PlantEfficiency3 = 262,
  anon_sym_PlantEfficiency4 = 263,
  anon_sym_PlantGrowth1 = 264,
  anon_sym_PlantGrowth2 = 265,
  anon_sym_PlantGrowth3 = 266,
  anon_sym_PlantGrowth4 = 267,
  anon_sym_PlantHash1 = 268,
  anon_sym_PlantHash2 = 269,
  anon_sym_PlantHash3 = 270,
  anon_sym_PlantHash4 = 271,
  anon_sym_PlantHealth1 = 272,
  anon_sym_PlantHealth2 = 273,
  anon_sym_PlantHealth3 = 274,
  anon_sym_PlantHealth4 = 275,
  anon_sym_PositionX = 276,
  anon_sym_PositionY = 277,
  anon_sym_PositionZ = 278,
  anon_sym_Power = 279,
  anon_sym_PowerActual = 280,
  anon_sym_PowerGeneration = 281,
  anon_sym_PowerPotential = 282,
  anon_sym_PowerRequired = 283,
  anon_sym_PrefabHash = 284,
  anon_sym_Pressure = 285,
  anon_sym_PressureEfficiency = 286,
  anon_sym_PressureExternal = 287,
  anon_sym_PressureInput = 288,
  anon_sym_PressureInput2 = 289,
  anon_sym_PressureInternal = 290,
  anon_sym_PressureOutput = 291,
  anon_sym_PressureOutput2 = 292,
  anon_sym_PressureSetting = 293,
  anon_sym_Progress = 294,
  anon_sym_Quantity = 295,
  anon_sym_Ratio = 296,
  anon_sym_RatioCarbonDioxide = 297,
  anon_sym_RatioCarbonDioxideInput = 298,
  anon_sym_RatioCarbonDioxideInput2 = 299,
  anon_sym_RatioCarbonDioxideOutput = 300,
  anon_sym_RatioCarbonDioxideOutput2 = 301,
  anon_sym_RatioHydrogen = 302,
  anon_sym_RatioLiquidCarbonDioxide = 303,
  anon_sym_RatioLiquidCarbonDioxideInput = 304,
  anon_sym_RatioLiquidCarbonDioxideInput2 = 305,
  anon_sym_RatioLiquidCarbonDioxideOutput = 306,
  anon_sym_RatioLiquidCarbonDioxideOutput2 = 307,
  anon_sym_RatioLiquidHydrogen = 308,
  anon_sym_RatioLiquidNitrogen = 309,
  anon_sym_RatioLiquidNitrogenInput = 310,
  anon_sym_RatioLiquidNitrogenInput2 = 311,
  anon_sym_RatioLiquidNitrogenOutput = 312,
  anon_sym_RatioLiquidNitrogenOutput2 = 313,
  anon_sym_RatioLiquidNitrousOxide = 314,
  anon_sym_RatioLiquidNitrousOxideInput = 315,
  anon_sym_RatioLiquidNitrousOxideInput2 = 316,
  anon_sym_RatioLiquidNitrousOxideOutput = 317,
  anon_sym_RatioLiquidNitrousOxideOutput2 = 318,
  anon_sym_RatioLiquidOxygen = 319,
  anon_sym_RatioLiquidOxygenInput = 320,
  anon_sym_RatioLiquidOxygenInput2 = 321,
  anon_sym_RatioLiquidOxygenOutput = 322,
  anon_sym_RatioLiquidOxygenOutput2 = 323,
  anon_sym_RatioLiquidPollutant = 324,
  anon_sym_RatioLiquidPollutantInput = 325,
  anon_sym_RatioLiquidPollutantInput2 = 326,
  anon_sym_RatioLiquidPollutantOutput = 327,
  anon_sym_RatioLiquidPollutantOutput2 = 328,
  anon_sym_RatioLiquidVolatiles = 329,
  anon_sym_RatioLiquidVolatilesInput = 330,
  anon_sym_RatioLiquidVolatilesInput2 = 331,
  anon_sym_RatioLiquidVolatilesOutput = 332,
  anon_sym_RatioLiquidVolatilesOutput2 = 333,
  anon_sym_RatioNitrogen = 334,
  anon_sym_RatioNitrogenInput = 335,
  anon_sym_RatioNitrogenInput2 = 336,
  anon_sym_RatioNitrogenOutput = 337,
  anon_sym_RatioNitrogenOutput2 = 338,
  anon_sym_RatioNitrousOxide = 339,
  anon_sym_RatioNitrousOxideInput = 340,
  anon_sym_RatioNitrousOxideInput2 = 341,
  anon_sym_RatioNitrousOxideOutput = 342,
  anon_sym_RatioNitrousOxideOutput2 = 343,
  anon_sym_RatioOxygen = 344,
  anon_sym_RatioOxygenInput = 345,
  anon_sym_RatioOxygenInput2 = 346,
  anon_sym_RatioOxygenOutput = 347,
  anon_sym_RatioOxygenOutput2 = 348,
  anon_sym_RatioPollutant = 349,
  anon_sym_RatioPollutantInput = 350,
  anon_sym_RatioPollutantInput2 = 351,
  anon_sym_RatioPollutantOutput = 352,
  anon_sym_RatioPollutantOutput2 = 353,
  anon_sym_RatioPollutedWater = 354,
  anon_sym_RatioSteam = 355,
  anon_sym_RatioSteamInput = 356,
  anon_sym_RatioSteamInput2 = 357,
  anon_sym_RatioSteamOutput = 358,
  anon_sym_RatioSteamOutput2 = 359,
  anon_sym_RatioVolatiles = 360,
  anon_sym_RatioVolatilesInput = 361,
  anon_sym_RatioVolatilesInput2 = 362,
  anon_sym_RatioVolatilesOutput = 363,
  anon_sym_RatioVolatilesOutput2 = 364,
  anon_sym_RatioWater = 365,
  anon_sym_RatioWaterInput = 366,
  anon_sym_RatioWaterInput2 = 367,
  anon_sym_RatioWaterOutput = 368,
  anon_sym_RatioWaterOutput2 = 369,
  anon_sym_ReEntryAltitude = 370,
  anon_sym_Reagents = 371,
  anon_sym_RecipeHash = 372,
  anon_sym_ReferenceId = 373,
  anon_sym_RequestHash = 374,
  anon_sym_RequiredPower = 375,
  anon_sym_ReturnFuelCost = 376,
  anon_sym_Richness = 377,
  anon_sym_Rpm = 378,
  anon_sym_SemiMajorAxis = 379,
  anon_sym_Setting = 380,
  anon_sym_SettingInput = 381,
  anon_sym_SettingInputHash = 382,
  anon_sym_SettingOutput = 383,
  anon_sym_SettingOutputHash = 384,
  anon_sym_SignalID = 385,
  anon_sym_SignalStrength = 386,
  anon_sym_Sites = 387,
  anon_sym_Size = 388,
  anon_sym_SizeX = 389,
  anon_sym_SizeY = 390,
  anon_sym_SizeZ = 391,
  anon_sym_SolarAngle = 392,
  anon_sym_SolarConstant = 393,
  anon_sym_SolarIrradiance = 394,
  anon_sym_SoundAlert = 395,
  anon_sym_Stress = 396,
  anon_sym_Survey = 397,
  anon_sym_TargetPadIndex = 398,
  anon_sym_TargetX = 399,
  anon_sym_TargetY = 400,
  anon_sym_TargetZ = 401,
  anon_sym_Temperature = 402,
  anon_sym_TemperatureDifferentialEfficiency = 403,
  anon_sym_TemperatureExternal = 404,
  anon_sym_TemperatureInput = 405,
  anon_sym_TemperatureInput2 = 406,
  anon_sym_TemperatureOutput = 407,
  anon_sym_TemperatureOutput2 = 408,
  anon_sym_TemperatureSetting = 409,
  anon_sym_Throttle = 410,
  anon_sym_Thrust = 411,
  anon_sym_ThrustToWeight = 412,
  anon_sym_Time = 413,
  anon_sym_TimeToDestination = 414,
  anon_sym_TotalMoles = 415,
  anon_sym_TotalMolesInput = 416,
  anon_sym_TotalMolesInput2 = 417,
  anon_sym_TotalMolesOutput = 418,
  anon_sym_TotalMolesOutput2 = 419,
  anon_sym_TotalQuantity = 420,
  anon_sym_TrueAnomaly = 421,
  anon_sym_Unknown = 422,
  anon_sym_VelocityMagnitude = 423,
  anon_sym_VelocityRelativeX = 424,
  anon_sym_VelocityRelativeY = 425,
  anon_sym_VelocityRelativeZ = 426,
  anon_sym_VelocityX = 427,
  anon_sym_VelocityY = 428,
  anon_sym_VelocityZ = 429,
  anon_sym_Vertical = 430,
  anon_sym_VerticalRatio = 431,
  anon_sym_Volume = 432,
  anon_sym_VolumeOfLiquid = 433,
  anon_sym_WattsReachingContact = 434,
  anon_sym_Weight = 435,
  anon_sym_WorkingGasEfficiency = 436,
  anon_sym_ChargeRatio = 437,
  anon_sym_Class = 438,
  anon_sym_Damage = 439,
  anon_sym_Efficiency = 440,
  anon_sym_FilterType = 441,
  anon_sym_Growth = 442,
  anon_sym_Health = 443,
  anon_sym_Mature = 444,
  anon_sym_MaxQuantity = 445,
  anon_sym_OccupantHash = 446,
  anon_sym_Occupied = 447,
  anon_sym_PressureAir = 448,
  anon_sym_PressureWaste = 449,
  anon_sym_Seeding = 450,
  anon_sym_SortingClass = 451,
  anon_sym_Average = 452,
  anon_sym_Minimum = 453,
  anon_sym_Sum = 454,
  anon_sym_Contents = 455,
  anon_sym_Recipe = 456,
  anon_sym_Required = 457,
  anon_sym_TotalContents = 458,
  sym_enum = 459,
  sym_source_file = 460,
  sym_line = 461,
  sym_label = 462,
  sym_newline = 463,
  sym_comment = 464,
  sym_instruction = 465,
  sym_operand = 466,
  sym_device_spec = 467,
  sym_constant = 468,
  sym_hash_preproc = 469,
  sym_number = 470,
  sym_operation = 471,
  sym_logicable = 472,
  sym_logictype = 473,
  sym_logicslottype = 474,
  sym_batchmode = 475,
  sym_reagentmode = 476,
  aux_sym_source_file_repeat1 = 477,
  aux_sym_instruction_repeat1 = 478,
  alias_sym_invalid_instruction = 479,
  alias_sym_program = 480,
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
  [anon_sym_Bypass] = "Bypass",
  [anon_sym_CelestialHash] = "CelestialHash",
  [anon_sym_CelestialParentHash] = "CelestialParentHash",
  [anon_sym_Channel] = "Channel",
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
  [anon_sym_MinWattsToContact] = "MinWattsToContact",
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
  [anon_sym_OverShootTarget] = "OverShootTarget",
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
  [anon_sym_SettingInputHash] = "SettingInputHash",
  [anon_sym_SettingOutput] = "SettingOutput",
  [anon_sym_SettingOutputHash] = "SettingOutputHash",
  [anon_sym_SignalID] = "SignalID",
  [anon_sym_SignalStrength] = "SignalStrength",
  [anon_sym_Sites] = "Sites",
  [anon_sym_Size] = "Size",
  [anon_sym_SizeX] = "SizeX",
  [anon_sym_SizeY] = "SizeY",
  [anon_sym_SizeZ] = "SizeZ",
  [anon_sym_SolarAngle] = "SolarAngle",
  [anon_sym_SolarConstant] = "SolarConstant",
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
  [anon_sym_Unknown] = "Unknown",
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
  [anon_sym_Bypass] = anon_sym_Bypass,
  [anon_sym_CelestialHash] = anon_sym_CelestialHash,
  [anon_sym_CelestialParentHash] = anon_sym_CelestialParentHash,
  [anon_sym_Channel] = anon_sym_Channel,
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
  [anon_sym_MinWattsToContact] = anon_sym_MinWattsToContact,
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
  [anon_sym_OverShootTarget] = anon_sym_OverShootTarget,
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
  [anon_sym_SettingInputHash] = anon_sym_SettingInputHash,
  [anon_sym_SettingOutput] = anon_sym_SettingOutput,
  [anon_sym_SettingOutputHash] = anon_sym_SettingOutputHash,
  [anon_sym_SignalID] = anon_sym_SignalID,
  [anon_sym_SignalStrength] = anon_sym_SignalStrength,
  [anon_sym_Sites] = anon_sym_Sites,
  [anon_sym_Size] = anon_sym_Size,
  [anon_sym_SizeX] = anon_sym_SizeX,
  [anon_sym_SizeY] = anon_sym_SizeY,
  [anon_sym_SizeZ] = anon_sym_SizeZ,
  [anon_sym_SolarAngle] = anon_sym_SolarAngle,
  [anon_sym_SolarConstant] = anon_sym_SolarConstant,
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
  [anon_sym_Unknown] = anon_sym_Unknown,
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
  [anon_sym_Bypass] = {
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
  [anon_sym_Channel] = {
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
  [anon_sym_MinWattsToContact] = {
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
  [anon_sym_OverShootTarget] = {
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
  [anon_sym_SettingInputHash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SettingOutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SettingOutputHash] = {
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
  [anon_sym_SolarConstant] = {
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
  [anon_sym_Unknown] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_network_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_HASH_LPAREN_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(7);
      if (lookahead == 'H') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'Q') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'j') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'q') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'g') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '5') ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'q') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 84:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 85:
      if (lookahead == 'x') ADVANCE(247);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'q') ADVANCE(268);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(273);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(275);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == 'z') ADVANCE(277);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(292);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 129:
      if (lookahead == 'q') ADVANCE(310);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_device);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(327);
      END_STATE();
    case 139:
      if (lookahead == '1') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lb);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ld);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(339);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 168:
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_sb);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_sd);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'q') ADVANCE(361);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(374);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 188:
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(382);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(383);
      END_STATE();
    case 190:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Bpm);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 210:
      if (lookahead == 'M') ADVANCE(407);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 213:
      if (lookahead == 'v') ADVANCE(410);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 225:
      if (lookahead == 'T') ADVANCE(423);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 227:
      if (lookahead == 'w') ADVANCE(425);
      END_STATE();
    case 228:
      if (lookahead == 'v') ADVANCE(426);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(436);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 243:
      if (lookahead == 'Q') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 244:
      if (lookahead == 'W') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 246:
      if (lookahead == 'P') ADVANCE(447);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(451);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(464);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(468);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(473);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Rpm);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Sum);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(485);
      END_STATE();
    case 285:
      if (lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(489);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(500);
      END_STATE();
    case 299:
      if (lookahead == 'k') ADVANCE(501);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bap);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'z') ADVANCE(507);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'z') ADVANCE(511);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'z') ADVANCE(513);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'z') ADVANCE(515);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'z') ADVANCE(517);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'z') ADVANCE(519);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_bna);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == 'z') ADVANCE(522);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'z') ADVANCE(524);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 319:
      if (lookahead == 'q') ADVANCE(528);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 326:
      if (lookahead == '2') ADVANCE(537);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_device);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'd') ADVANCE(540);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_hcf);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_jal);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_lbn);
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_lbs);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(544);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 348:
      if (lookahead == 'k') ADVANCE(545);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(546);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 352:
      if (lookahead == 'h') ADVANCE(548);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == 'd') ADVANCE(549);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_sap);
      if (lookahead == 'z') ADVANCE(551);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_sbn);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_sbs);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == 'z') ADVANCE(555);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == 'z') ADVANCE(556);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'z') ADVANCE(557);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_sin);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_sla);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'z') ADVANCE(559);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_sll);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'z') ADVANCE(560);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_sna);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 'z') ADVANCE(562);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_sne);
      if (lookahead == 'z') ADVANCE(563);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_tan);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 380:
      if (lookahead == 'v') ADVANCE(568);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Apex);
      END_STATE();
    case 385:
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(573);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(575);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(579);
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(590);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 409:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 415:
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(609);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Fuel);
      END_STATE();
    case 423:
      if (lookahead == 'y') ADVANCE(613);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 428:
      if (lookahead == 'z') ADVANCE(618);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Idle);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 432:
      if (lookahead == 'x') ADVANCE(621);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 435:
      if (lookahead == 'N') ADVANCE(623);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Lock);
      END_STATE();
    case 437:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Mass);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(627);
      END_STATE();
    case 442:
      if (lookahead == 'm') ADVANCE(628);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 445:
      if (lookahead == 'm') ADVANCE(632);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Mode);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 448:
      if (lookahead == 'W') ADVANCE(634);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 450:
      if (lookahead == 'q') ADVANCE(635);
      END_STATE();
    case 451:
      if (lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_Open);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 457:
      if (lookahead == 'S') ADVANCE(641);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 469:
      if (lookahead == 'p') ADVANCE(653);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 475:
      if (lookahead == 'M') ADVANCE(660);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Size);
      if (lookahead == 'X') ADVANCE(664);
      if (lookahead == 'Y') ADVANCE(665);
      if (lookahead == 'Z') ADVANCE(666);
      END_STATE();
    case 480:
      if (lookahead == 'C') ADVANCE(667);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 483:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_Time);
      if (lookahead == 'T') ADVANCE(677);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(678);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 493:
      if (lookahead == 'A') ADVANCE(680);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(683);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(685);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 500:
      if (lookahead == 'h') ADVANCE(687);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_acos);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_asin);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_atan);
      if (lookahead == '2') ADVANCE(690);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_bapz);
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bdns);
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_bdse);
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_beqz);
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_bgez);
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_bgtz);
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_blez);
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_bltz);
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_bnan);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_bnaz);
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_bnez);
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_brap);
      if (lookahead == 'z') ADVANCE(709);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_breq);
      if (lookahead == 'z') ADVANCE(712);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_brge);
      if (lookahead == 'z') ADVANCE(713);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_brgt);
      if (lookahead == 'z') ADVANCE(714);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_brle);
      if (lookahead == 'z') ADVANCE(715);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_brlt);
      if (lookahead == 'z') ADVANCE(716);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_brna);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'z') ADVANCE(718);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_brne);
      if (lookahead == 'z') ADVANCE(719);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ceil);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_getd);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_lbns);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_peek);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_pinf);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_poke);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_putd);
      END_STATE();
    case 550:
      if (lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_sapz);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_sdns);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_sdse);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_seqz);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_sgez);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_sgtz);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_slez);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_sltz);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_snan);
      if (lookahead == 'z') ADVANCE(728);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_snaz);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_snez);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 566:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 568:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 571:
      if (lookahead == 'm') ADVANCE(735);
      END_STATE();
    case 572:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 573:
      if (lookahead == 'h') ADVANCE(737);
      END_STATE();
    case 574:
      if (lookahead == 'g') ADVANCE(738);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_Chart);
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 582:
      if (lookahead == 'M') ADVANCE(745);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_Color);
      if (lookahead == '.') ADVANCE(747);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 590:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 591:
      if (lookahead == 'g') ADVANCE(754);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 594:
      if (lookahead == 'v') ADVANCE(757);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 596:
      if (lookahead == 'C') ADVANCE(759);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 599:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 601:
      if (lookahead == 'y') ADVANCE(764);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_Error);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 608:
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Flush);
      END_STATE();
    case 611:
      if (lookahead == 'W') ADVANCE(771);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 615:
      if (lookahead == 'h') ADVANCE(775);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(776);
      END_STATE();
    case 617:
      if (lookahead == 'h') ADVANCE(777);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(779);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Index);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 624:
      if (lookahead == 'S') ADVANCE(783);
      if (lookahead == 'T') ADVANCE(784);
      END_STATE();
    case 625:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 626:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 627:
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(788);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 630:
      if (lookahead == 'b') ADVANCE(790);
      END_STATE();
    case 631:
      if (lookahead == 'Q') ADVANCE(791);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(792);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(795);
      END_STATE();
    case 636:
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 638:
      if (lookahead == 'P') ADVANCE(799);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(802);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(803);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_Plant);
      if (lookahead == 'E') ADVANCE(804);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(806);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_Power);
      if (lookahead == 'A') ADVANCE(808);
      if (lookahead == 'G') ADVANCE(809);
      if (lookahead == 'M') ADVANCE(810);
      if (lookahead == 'P') ADVANCE(811);
      if (lookahead == 'R') ADVANCE(812);
      END_STATE();
    case 646:
      if (lookahead == 'b') ADVANCE(813);
      END_STATE();
    case 647:
      if (lookahead == 'u') ADVANCE(814);
      END_STATE();
    case 648:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_Ratio);
      if (lookahead == 'C') ADVANCE(817);
      if (lookahead == 'H') ADVANCE(818);
      if (lookahead == 'L') ADVANCE(819);
      if (lookahead == 'N') ADVANCE(820);
      if (lookahead == 'O') ADVANCE(821);
      if (lookahead == 'P') ADVANCE(822);
      if (lookahead == 'S') ADVANCE(823);
      if (lookahead == 'V') ADVANCE(824);
      if (lookahead == 'W') ADVANCE(825);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 653:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 658:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 660:
      if (lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 662:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_Sites);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SizeX);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_SizeY);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_SizeZ);
      END_STATE();
    case 667:
      if (lookahead == 'l') ADVANCE(838);
      END_STATE();
    case 668:
      if (lookahead == 'A') ADVANCE(839);
      if (lookahead == 'C') ADVANCE(840);
      if (lookahead == 'I') ADVANCE(841);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(843);
      if (lookahead == 'A') ADVANCE(844);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 672:
      if (lookahead == 'y') ADVANCE(846);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(849);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 678:
      if (lookahead == 'C') ADVANCE(852);
      if (lookahead == 'M') ADVANCE(853);
      if (lookahead == 'Q') ADVANCE(854);
      END_STATE();
    case 679:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 681:
      if (lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(858);
      END_STATE();
    case 683:
      if (lookahead == 'I') ADVANCE(859);
      if (lookahead == 'O') ADVANCE(860);
      END_STATE();
    case 684:
      if (lookahead == 'c') ADVANCE(861);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 686:
      if (lookahead == 'R') ADVANCE(863);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_bapal);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(866);
      END_STATE();
    case 693:
      if (lookahead == 'l') ADVANCE(867);
      END_STATE();
    case 694:
      if (lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_beqal);
      END_STATE();
    case 696:
      if (lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_bgeal);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(870);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_bgtal);
      END_STATE();
    case 700:
      if (lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_bleal);
      END_STATE();
    case 702:
      if (lookahead == 'l') ADVANCE(872);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_bltal);
      END_STATE();
    case 704:
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_bnaal);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(874);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_bneal);
      END_STATE();
    case 708:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_brapz);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_brdns);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_brdse);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_breqz);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_brgez);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_brgtz);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_brlez);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_brltz);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_brnan);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_brnaz);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_brnez);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 721:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_snanz);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_trunc);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 733:
      if (lookahead == '.') ADVANCE(882);
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 736:
      if (lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 737:
      if (lookahead == 'u') ADVANCE(887);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 739:
      if (lookahead == 'm') ADVANCE(889);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_Bypass);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 742:
      if (lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_Charge);
      if (lookahead == 'R') ADVANCE(892);
      END_STATE();
    case 744:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 747:
      if (lookahead == 'B') ADVANCE(896);
      if (lookahead == 'G') ADVANCE(897);
      if (lookahead == 'K') ADVANCE(898);
      if (lookahead == 'O') ADVANCE(899);
      if (lookahead == 'P') ADVANCE(900);
      if (lookahead == 'R') ADVANCE(901);
      if (lookahead == 'W') ADVANCE(902);
      if (lookahead == 'Y') ADVANCE(903);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_Damage);
      END_STATE();
    case 754:
      if (lookahead == 'h') ADVANCE(909);
      END_STATE();
    case 755:
      if (lookahead == 'y') ADVANCE(910);
      END_STATE();
    case 756:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 758:
      if (lookahead == 'c') ADVANCE(913);
      END_STATE();
    case 759:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(915);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 763:
      if (lookahead == 'o') ADVANCE(918);
      END_STATE();
    case 764:
      if (lookahead == 'S') ADVANCE(919);
      END_STATE();
    case 765:
      if (lookahead == 'n') ADVANCE(920);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 767:
      if (lookahead == 'C') ADVANCE(922);
      if (lookahead == 'Q') ADVANCE(923);
      if (lookahead == 'S') ADVANCE(924);
      END_STATE();
    case 768:
      if (lookahead == 'T') ADVANCE(925);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 770:
      if (lookahead == 'C') ADVANCE(927);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 772:
      if (lookahead == 'd') ADVANCE(929);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_Growth);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_Health);
      END_STATE();
    case 778:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 779:
      if (lookahead == 'C') ADVANCE(933);
      if (lookahead == 'Q') ADVANCE(934);
      if (lookahead == 'S') ADVANCE(935);
      END_STATE();
    case 780:
      if (lookahead == 'a') ADVANCE(936);
      END_STATE();
    case 781:
      if (lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 782:
      if (lookahead == 'm') ADVANCE(938);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 784:
      if (lookahead == 'y') ADVANCE(940);
      END_STATE();
    case 785:
      if (lookahead == 'R') ADVANCE(941);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_Mature);
      END_STATE();
    case 787:
      if (lookahead == 'n') ADVANCE(942);
      END_STATE();
    case 788:
      if (lookahead == 'm') ADVANCE(943);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 791:
      if (lookahead == 'u') ADVANCE(946);
      END_STATE();
    case 792:
      if (lookahead == 'm') ADVANCE(947);
      END_STATE();
    case 793:
      if (lookahead == 'n') ADVANCE(948);
      END_STATE();
    case 794:
      if (lookahead == 'a') ADVANCE(949);
      END_STATE();
    case 795:
      if (lookahead == 'a') ADVANCE(950);
      END_STATE();
    case 796:
      if (lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 798:
      if (lookahead == 'i') ADVANCE(953);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 800:
      if (lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 802:
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 803:
      if (lookahead == 'M') ADVANCE(957);
      END_STATE();
    case 804:
      if (lookahead == 'f') ADVANCE(958);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 806:
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 807:
      if (lookahead == 'o') ADVANCE(962);
      END_STATE();
    case 808:
      if (lookahead == 'c') ADVANCE(963);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 810:
      if (lookahead == 'o') ADVANCE(965);
      END_STATE();
    case 811:
      if (lookahead == 'o') ADVANCE(966);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 813:
      if (lookahead == 'H') ADVANCE(968);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 817:
      if (lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 818:
      if (lookahead == 'y') ADVANCE(973);
      END_STATE();
    case 819:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 820:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 821:
      if (lookahead == 'x') ADVANCE(976);
      END_STATE();
    case 822:
      if (lookahead == 'o') ADVANCE(977);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 824:
      if (lookahead == 'o') ADVANCE(979);
      END_STATE();
    case 825:
      if (lookahead == 'a') ADVANCE(980);
      END_STATE();
    case 826:
      if (lookahead == 'y') ADVANCE(981);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(982);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_Recipe);
      if (lookahead == 'H') ADVANCE(983);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(985);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 832:
      if (lookahead == 'F') ADVANCE(987);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(988);
      END_STATE();
    case 834:
      if (lookahead == 'g') ADVANCE(989);
      END_STATE();
    case 835:
      if (lookahead == 'j') ADVANCE(990);
      END_STATE();
    case 836:
      if (lookahead == 'g') ADVANCE(991);
      END_STATE();
    case 837:
      if (lookahead == 'I') ADVANCE(992);
      if (lookahead == 'S') ADVANCE(993);
      END_STATE();
    case 838:
      if (lookahead == 'a') ADVANCE(994);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 840:
      if (lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 841:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 842:
      if (lookahead == 'g') ADVANCE(998);
      END_STATE();
    case 843:
      if (lookahead == 'A') ADVANCE(999);
      if (lookahead == 'D') ADVANCE(1000);
      if (lookahead == 'F') ADVANCE(1001);
      if (lookahead == 'H') ADVANCE(1002);
      if (lookahead == 'I') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(1004);
      if (lookahead == 'M') ADVANCE(1005);
      if (lookahead == 'N') ADVANCE(1006);
      if (lookahead == 'O') ADVANCE(1007);
      if (lookahead == 'P') ADVANCE(1008);
      if (lookahead == 'R') ADVANCE(1009);
      if (lookahead == 'S') ADVANCE(1010);
      if (lookahead == 'T') ADVANCE(1011);
      if (lookahead == 'W') ADVANCE(1012);
      END_STATE();
    case 844:
      if (lookahead == 'l') ADVANCE(1013);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_Stress);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_Survey);
      END_STATE();
    case 847:
      if (lookahead == 'P') ADVANCE(1014);
      if (lookahead == 'X') ADVANCE(1015);
      if (lookahead == 'Y') ADVANCE(1016);
      if (lookahead == 'Z') ADVANCE(1017);
      END_STATE();
    case 848:
      if (lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 849:
      if (lookahead == 'l') ADVANCE(1019);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_Thrust);
      if (lookahead == 'T') ADVANCE(1020);
      END_STATE();
    case 851:
      if (lookahead == 'D') ADVANCE(1021);
      END_STATE();
    case 852:
      if (lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 853:
      if (lookahead == 'o') ADVANCE(1023);
      END_STATE();
    case 854:
      if (lookahead == 'u') ADVANCE(1024);
      END_STATE();
    case 855:
      if (lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 856:
      if (lookahead == 'o') ADVANCE(1026);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(1027);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(1029);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(1030);
      END_STATE();
    case 861:
      if (lookahead == 'a') ADVANCE(1031);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_Volume);
      if (lookahead == 'O') ADVANCE(1032);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_Weight);
      END_STATE();
    case 865:
      if (lookahead == 'g') ADVANCE(1034);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_bapzal);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_bdnsal);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_bdseal);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_beqzal);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_bgezal);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_bgtzal);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_blezal);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_bltzal);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_bnazal);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_bnezal);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 877:
      if (lookahead == 'd') ADVANCE(1035);
      END_STATE();
    case 878:
      if (lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 880:
      if (lookahead == 'a') ADVANCE(1037);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 882:
      if (lookahead == 'C') ADVANCE(1039);
      if (lookahead == 'H') ADVANCE(1040);
      END_STATE();
    case 883:
      if (lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 884:
      if (lookahead == 'a') ADVANCE(1042);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 886:
      if (lookahead == 'd') ADVANCE(1044);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_Average);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(1046);
      END_STATE();
    case 890:
      if (lookahead == 'a') ADVANCE(1047);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_Channel);
      if (lookahead == '0') ADVANCE(1048);
      if (lookahead == '1') ADVANCE(1049);
      if (lookahead == '2') ADVANCE(1050);
      if (lookahead == '3') ADVANCE(1051);
      if (lookahead == '4') ADVANCE(1052);
      if (lookahead == '5') ADVANCE(1053);
      if (lookahead == '6') ADVANCE(1054);
      if (lookahead == '7') ADVANCE(1055);
      END_STATE();
    case 892:
      if (lookahead == 'a') ADVANCE(1056);
      END_STATE();
    case 893:
      if (lookahead == 'N') ADVANCE(1057);
      END_STATE();
    case 894:
      if (lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 895:
      if (lookahead == 'a') ADVANCE(1059);
      END_STATE();
    case 896:
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 897:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 898:
      if (lookahead == 'h') ADVANCE(1063);
      END_STATE();
    case 899:
      if (lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 900:
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == 'u') ADVANCE(1066);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 902:
      if (lookahead == 'h') ADVANCE(1068);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 904:
      if (lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 905:
      if (lookahead == 'i') ADVANCE(1071);
      END_STATE();
    case 906:
      if (lookahead == 'T') ADVANCE(1072);
      END_STATE();
    case 907:
      if (lookahead == 's') ADVANCE(1073);
      END_STATE();
    case 908:
      if (lookahead == 'C') ADVANCE(1074);
      if (lookahead == 'R') ADVANCE(1075);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_Density);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 912:
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 914:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_DryMass);
      END_STATE();
    case 916:
      if (lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 917:
      if (lookahead == 'n') ADVANCE(1082);
      END_STATE();
    case 918:
      if (lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 919:
      if (lookahead == 't') ADVANCE(1084);
      END_STATE();
    case 920:
      if (lookahead == 'm') ADVANCE(1085);
      END_STATE();
    case 921:
      if (lookahead == 'V') ADVANCE(1086);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 923:
      if (lookahead == 'u') ADVANCE(1088);
      END_STATE();
    case 924:
      if (lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 925:
      if (lookahead == 'y') ADVANCE(1090);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(1091);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1092);
      END_STATE();
    case 928:
      if (lookahead == 'i') ADVANCE(1093);
      END_STATE();
    case 929:
      if (lookahead == 'X') ADVANCE(1094);
      if (lookahead == 'Y') ADVANCE(1095);
      if (lookahead == 'Z') ADVANCE(1096);
      END_STATE();
    case 930:
      if (lookahead == '.') ADVANCE(1097);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_Harvest);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(1098);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(1099);
      END_STATE();
    case 934:
      if (lookahead == 'u') ADVANCE(1100);
      END_STATE();
    case 935:
      if (lookahead == 'l') ADVANCE(1101);
      END_STATE();
    case 936:
      if (lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 937:
      if (lookahead == 'g') ADVANCE(1103);
      END_STATE();
    case 938:
      if (lookahead == 'b') ADVANCE(1104);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 940:
      if (lookahead == 'p') ADVANCE(1106);
      END_STATE();
    case 941:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_Maximum);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(1109);
      END_STATE();
    case 945:
      if (lookahead == 'e') ADVANCE(1110);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1111);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_Minimum);
      if (lookahead == 'W') ADVANCE(1112);
      END_STATE();
    case 948:
      if (lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 950:
      if (lookahead == 'l') ADVANCE(1115);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 952:
      if (lookahead == 'd') ADVANCE(1117);
      END_STATE();
    case 953:
      if (lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 954:
      if (lookahead == 'r') ADVANCE(1119);
      END_STATE();
    case 955:
      if (lookahead == 't') ADVANCE(1120);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(1121);
      END_STATE();
    case 957:
      if (lookahead == 'o') ADVANCE(1122);
      END_STATE();
    case 958:
      if (lookahead == 'f') ADVANCE(1123);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(1124);
      END_STATE();
    case 960:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 961:
      if (lookahead == 'a') ADVANCE(1126);
      END_STATE();
    case 962:
      if (lookahead == 'n') ADVANCE(1127);
      END_STATE();
    case 963:
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 964:
      if (lookahead == 'n') ADVANCE(1129);
      END_STATE();
    case 965:
      if (lookahead == 'd') ADVANCE(1130);
      END_STATE();
    case 966:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 967:
      if (lookahead == 'q') ADVANCE(1132);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1133);
      END_STATE();
    case 969:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 970:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 971:
      if (lookahead == 'y') ADVANCE(1136);
      END_STATE();
    case 972:
      if (lookahead == 'r') ADVANCE(1137);
      END_STATE();
    case 973:
      if (lookahead == 'd') ADVANCE(1138);
      END_STATE();
    case 974:
      if (lookahead == 'q') ADVANCE(1139);
      END_STATE();
    case 975:
      if (lookahead == 't') ADVANCE(1140);
      END_STATE();
    case 976:
      if (lookahead == 'y') ADVANCE(1141);
      END_STATE();
    case 977:
      if (lookahead == 'l') ADVANCE(1142);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 979:
      if (lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 980:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 981:
      if (lookahead == 'A') ADVANCE(1146);
      END_STATE();
    case 982:
      if (lookahead == 's') ADVANCE(1147);
      END_STATE();
    case 983:
      if (lookahead == 'a') ADVANCE(1148);
      END_STATE();
    case 984:
      if (lookahead == 'c') ADVANCE(1149);
      END_STATE();
    case 985:
      if (lookahead == 'H') ADVANCE(1150);
      END_STATE();
    case 986:
      if (lookahead == 'd') ADVANCE(1151);
      END_STATE();
    case 987:
      if (lookahead == 'u') ADVANCE(1152);
      END_STATE();
    case 988:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_Seeding);
      END_STATE();
    case 990:
      if (lookahead == 'o') ADVANCE(1154);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_Setting);
      if (lookahead == 'I') ADVANCE(1155);
      if (lookahead == 'O') ADVANCE(1156);
      END_STATE();
    case 992:
      if (lookahead == 'D') ADVANCE(1157);
      END_STATE();
    case 993:
      if (lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 994:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 995:
      if (lookahead == 'g') ADVANCE(1160);
      END_STATE();
    case 996:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 997:
      if (lookahead == 'r') ADVANCE(1162);
      END_STATE();
    case 998:
      if (lookahead == 'C') ADVANCE(1163);
      END_STATE();
    case 999:
      if (lookahead == 'i') ADVANCE(1164);
      if (lookahead == 'l') ADVANCE(1165);
      END_STATE();
    case 1000:
      if (lookahead == 'a') ADVANCE(1166);
      if (lookahead == 'e') ADVANCE(1167);
      END_STATE();
    case 1001:
      if (lookahead == 'i') ADVANCE(1168);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 1002:
      if (lookahead == 'a') ADVANCE(1171);
      if (lookahead == 'i') ADVANCE(1172);
      END_STATE();
    case 1003:
      if (lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 1004:
      if (lookahead == 'i') ADVANCE(1174);
      END_STATE();
    case 1005:
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == 'u') ADVANCE(1176);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(1177);
      END_STATE();
    case 1007:
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead == 'r') ADVANCE(1180);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1181);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(1182);
      if (lookahead == 'y') ADVANCE(1183);
      END_STATE();
    case 1011:
      if (lookahead == 'e') ADVANCE(1184);
      if (lookahead == 'h') ADVANCE(1185);
      if (lookahead == 'r') ADVANCE(1186);
      if (lookahead == 'w') ADVANCE(1187);
      END_STATE();
    case 1012:
      if (lookahead == 'a') ADVANCE(1188);
      if (lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 1013:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_TargetX);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_TargetY);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_TargetZ);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 1019:
      if (lookahead == 'e') ADVANCE(1193);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 1021:
      if (lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 1022:
      if (lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 1023:
      if (lookahead == 'l') ADVANCE(1197);
      END_STATE();
    case 1024:
      if (lookahead == 'a') ADVANCE(1198);
      END_STATE();
    case 1025:
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1026:
      if (lookahead == 'm') ADVANCE(1200);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_Unknown);
      END_STATE();
    case 1028:
      if (lookahead == 'y') ADVANCE(1201);
      END_STATE();
    case 1029:
      if (lookahead == 'w') ADVANCE(1202);
      END_STATE();
    case 1030:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1031:
      if (lookahead == 'l') ADVANCE(1204);
      END_STATE();
    case 1032:
      if (lookahead == 'f') ADVANCE(1205);
      END_STATE();
    case 1033:
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 1034:
      if (lookahead == 'G') ADVANCE(1207);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_deg2rad);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_epsilon);
      END_STATE();
    case 1037:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_Activate);
      END_STATE();
    case 1039:
      if (lookahead == 'o') ADVANCE(1209);
      END_STATE();
    case 1040:
      if (lookahead == 'o') ADVANCE(1210);
      END_STATE();
    case 1041:
      if (lookahead == 'o') ADVANCE(1211);
      END_STATE();
    case 1042:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 1043:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_AutoLand);
      END_STATE();
    case 1045:
      if (lookahead == 'O') ADVANCE(1214);
      END_STATE();
    case 1046:
      if (lookahead == 'R') ADVANCE(1215);
      END_STATE();
    case 1047:
      if (lookahead == 'l') ADVANCE(1216);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_Channel0);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_Channel1);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_Channel2);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_Channel3);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_Channel4);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_Channel5);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_Channel6);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_Channel7);
      END_STATE();
    case 1056:
      if (lookahead == 't') ADVANCE(1217);
      END_STATE();
    case 1057:
      if (lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 1059:
      if (lookahead == 'b') ADVANCE(1220);
      END_STATE();
    case 1060:
      if (lookahead == 'a') ADVANCE(1221);
      if (lookahead == 'u') ADVANCE(1222);
      END_STATE();
    case 1061:
      if (lookahead == 'o') ADVANCE(1223);
      END_STATE();
    case 1062:
      if (lookahead == 'a') ADVANCE(1224);
      if (lookahead == 'e') ADVANCE(1225);
      END_STATE();
    case 1063:
      if (lookahead == 'a') ADVANCE(1226);
      END_STATE();
    case 1064:
      if (lookahead == 'a') ADVANCE(1227);
      END_STATE();
    case 1065:
      if (lookahead == 'n') ADVANCE(1228);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(1229);
      END_STATE();
    case 1067:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 1068:
      if (lookahead == 'i') ADVANCE(1230);
      END_STATE();
    case 1069:
      if (lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 1070:
      if (lookahead == 'o') ADVANCE(1232);
      END_STATE();
    case 1071:
      if (lookahead == 'o') ADVANCE(1233);
      END_STATE();
    case 1072:
      if (lookahead == 'y') ADVANCE(1234);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_Contents);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(1235);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 1076:
      if (lookahead == 'S') ADVANCE(1237);
      END_STATE();
    case 1077:
      if (lookahead == 'i') ADVANCE(1238);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_Discover);
      END_STATE();
    case 1079:
      if (lookahead == 'A') ADVANCE(1239);
      if (lookahead == 'K') ADVANCE(1240);
      END_STATE();
    case 1080:
      if (lookahead == 'd') ADVANCE(1241);
      END_STATE();
    case 1081:
      if (lookahead == 'c') ADVANCE(1242);
      END_STATE();
    case 1082:
      if (lookahead == 'c') ADVANCE(1243);
      END_STATE();
    case 1083:
      if (lookahead == 'L') ADVANCE(1244);
      if (lookahead == 'M') ADVANCE(1245);
      if (lookahead == 'S') ADVANCE(1246);
      END_STATE();
    case 1084:
      if (lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 1085:
      if (lookahead == 'e') ADVANCE(1248);
      END_STATE();
    case 1086:
      if (lookahead == 'e') ADVANCE(1249);
      END_STATE();
    case 1087:
      if (lookahead == 'u') ADVANCE(1250);
      END_STATE();
    case 1088:
      if (lookahead == 'a') ADVANCE(1251);
      END_STATE();
    case 1089:
      if (lookahead == 'o') ADVANCE(1252);
      END_STATE();
    case 1090:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 1091:
      if (lookahead == 'o') ADVANCE(1254);
      END_STATE();
    case 1092:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 1093:
      if (lookahead == 't') ADVANCE(1256);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_ForwardX);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_ForwardY);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_ForwardZ);
      END_STATE();
    case 1097:
      if (lookahead == 'C') ADVANCE(1257);
      if (lookahead == 'H') ADVANCE(1258);
      if (lookahead == 'L') ADVANCE(1259);
      if (lookahead == 'N') ADVANCE(1260);
      if (lookahead == 'O') ADVANCE(1261);
      if (lookahead == 'P') ADVANCE(1262);
      if (lookahead == 'S') ADVANCE(1263);
      if (lookahead == 'U') ADVANCE(1264);
      if (lookahead == 'V') ADVANCE(1265);
      if (lookahead == 'W') ADVANCE(1266);
      END_STATE();
    case 1098:
      if (lookahead == 'a') ADVANCE(1267);
      END_STATE();
    case 1099:
      if (lookahead == 'u') ADVANCE(1268);
      END_STATE();
    case 1100:
      if (lookahead == 'a') ADVANCE(1269);
      END_STATE();
    case 1101:
      if (lookahead == 'o') ADVANCE(1270);
      END_STATE();
    case 1102:
      if (lookahead == 'i') ADVANCE(1271);
      END_STATE();
    case 1103:
      if (lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 1105:
      if (lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(1275);
      END_STATE();
    case 1107:
      if (lookahead == 's') ADVANCE(1276);
      END_STATE();
    case 1108:
      if (lookahead == 'i') ADVANCE(1277);
      END_STATE();
    case 1109:
      if (lookahead == 'T') ADVANCE(1278);
      END_STATE();
    case 1110:
      if (lookahead == 's') ADVANCE(1279);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(1280);
      END_STATE();
    case 1112:
      if (lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 1113:
      if (lookahead == 's') ADVANCE(1282);
      END_STATE();
    case 1114:
      if (lookahead == 'h') ADVANCE(1283);
      END_STATE();
    case 1115:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 1116:
      if (lookahead == 'H') ADVANCE(1284);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_Occupied);
      END_STATE();
    case 1118:
      if (lookahead == 'n') ADVANCE(1285);
      END_STATE();
    case 1119:
      if (lookahead == 'i') ADVANCE(1286);
      END_STATE();
    case 1120:
      if (lookahead == 'i') ADVANCE(1287);
      END_STATE();
    case 1121:
      if (lookahead == 't') ADVANCE(1288);
      END_STATE();
    case 1122:
      if (lookahead == 'l') ADVANCE(1289);
      END_STATE();
    case 1123:
      if (lookahead == 'i') ADVANCE(1290);
      END_STATE();
    case 1124:
      if (lookahead == 'w') ADVANCE(1291);
      END_STATE();
    case 1125:
      if (lookahead == 'h') ADVANCE(1292);
      END_STATE();
    case 1126:
      if (lookahead == 'l') ADVANCE(1293);
      END_STATE();
    case 1127:
      if (lookahead == 'X') ADVANCE(1294);
      if (lookahead == 'Y') ADVANCE(1295);
      if (lookahead == 'Z') ADVANCE(1296);
      END_STATE();
    case 1128:
      if (lookahead == 'u') ADVANCE(1297);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(1298);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 1131:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 1132:
      if (lookahead == 'u') ADVANCE(1301);
      END_STATE();
    case 1133:
      if (lookahead == 's') ADVANCE(1302);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_Pressure);
      if (lookahead == 'A') ADVANCE(1303);
      if (lookahead == 'E') ADVANCE(1304);
      if (lookahead == 'I') ADVANCE(1305);
      if (lookahead == 'O') ADVANCE(1306);
      if (lookahead == 'S') ADVANCE(1307);
      if (lookahead == 'W') ADVANCE(1308);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_Progress);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_Quantity);
      END_STATE();
    case 1137:
      if (lookahead == 'b') ADVANCE(1309);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(1310);
      END_STATE();
    case 1139:
      if (lookahead == 'u') ADVANCE(1311);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(1312);
      END_STATE();
    case 1141:
      if (lookahead == 'g') ADVANCE(1313);
      END_STATE();
    case 1142:
      if (lookahead == 'l') ADVANCE(1314);
      END_STATE();
    case 1143:
      if (lookahead == 'a') ADVANCE(1315);
      END_STATE();
    case 1144:
      if (lookahead == 'a') ADVANCE(1316);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(1317);
      END_STATE();
    case 1146:
      if (lookahead == 'l') ADVANCE(1318);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_Reagents);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(1319);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(1320);
      END_STATE();
    case 1150:
      if (lookahead == 'a') ADVANCE(1321);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_Required);
      if (lookahead == 'P') ADVANCE(1322);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_Richness);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(1324);
      END_STATE();
    case 1155:
      if (lookahead == 'n') ADVANCE(1325);
      END_STATE();
    case 1156:
      if (lookahead == 'u') ADVANCE(1326);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_SignalID);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(1327);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(1328);
      END_STATE();
    case 1160:
      if (lookahead == 'l') ADVANCE(1329);
      END_STATE();
    case 1161:
      if (lookahead == 's') ADVANCE(1330);
      END_STATE();
    case 1162:
      if (lookahead == 'a') ADVANCE(1331);
      END_STATE();
    case 1163:
      if (lookahead == 'l') ADVANCE(1332);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(1333);
      END_STATE();
    case 1165:
      if (lookahead == 'a') ADVANCE(1334);
      if (lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 1166:
      if (lookahead == 'n') ADVANCE(1336);
      END_STATE();
    case 1167:
      if (lookahead == 'p') ADVANCE(1337);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1338);
      if (lookahead == 'v') ADVANCE(1339);
      END_STATE();
    case 1169:
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 1170:
      if (lookahead == 'u') ADVANCE(1341);
      END_STATE();
    case 1171:
      if (lookahead == 'l') ADVANCE(1342);
      END_STATE();
    case 1172:
      if (lookahead == 'g') ADVANCE(1343);
      END_STATE();
    case 1173:
      if (lookahead == 't') ADVANCE(1344);
      END_STATE();
    case 1174:
      if (lookahead == 'f') ADVANCE(1345);
      END_STATE();
    case 1175:
      if (lookahead == 'l') ADVANCE(1346);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(1347);
      END_STATE();
    case 1177:
      if (lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 1178:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1179:
      if (lookahead == 'l') ADVANCE(1349);
      if (lookahead == 'w') ADVANCE(1350);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1351);
      END_STATE();
    case 1181:
      if (lookahead == 'c') ADVANCE(1352);
      END_STATE();
    case 1182:
      if (lookahead == 'o') ADVANCE(1353);
      END_STATE();
    case 1183:
      if (lookahead == 's') ADVANCE(1354);
      END_STATE();
    case 1184:
      if (lookahead == 'm') ADVANCE(1355);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(1356);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 1187:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(1358);
      END_STATE();
    case 1189:
      if (lookahead == 'l') ADVANCE(1359);
      END_STATE();
    case 1190:
      if (lookahead == 'r') ADVANCE(1360);
      END_STATE();
    case 1191:
      if (lookahead == 'd') ADVANCE(1361);
      END_STATE();
    case 1192:
      if (lookahead == 'u') ADVANCE(1362);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_Throttle);
      END_STATE();
    case 1194:
      if (lookahead == 'W') ADVANCE(1363);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(1364);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 1197:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 1198:
      if (lookahead == 'n') ADVANCE(1367);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(1368);
      END_STATE();
    case 1200:
      if (lookahead == 'a') ADVANCE(1369);
      END_STATE();
    case 1201:
      if (lookahead == 'M') ADVANCE(1370);
      if (lookahead == 'R') ADVANCE(1371);
      if (lookahead == 'X') ADVANCE(1372);
      if (lookahead == 'Y') ADVANCE(1373);
      if (lookahead == 'Z') ADVANCE(1374);
      END_STATE();
    case 1202:
      if (lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 1203:
      if (lookahead == 'w') ADVANCE(1376);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_Vertical);
      if (lookahead == 'R') ADVANCE(1377);
      END_STATE();
    case 1205:
      if (lookahead == 'L') ADVANCE(1378);
      END_STATE();
    case 1206:
      if (lookahead == 'c') ADVANCE(1379);
      END_STATE();
    case 1207:
      if (lookahead == 'a') ADVANCE(1380);
      END_STATE();
    case 1208:
      if (lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 1209:
      if (lookahead == 'l') ADVANCE(1382);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 1211:
      if (lookahead == 'l') ADVANCE(1383);
      END_STATE();
    case 1212:
      if (lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 1213:
      if (lookahead == 'E') ADVANCE(1385);
      END_STATE();
    case 1214:
      if (lookahead == 'f') ADVANCE(1386);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 1216:
      if (lookahead == 'H') ADVANCE(1388);
      if (lookahead == 'P') ADVANCE(1389);
      END_STATE();
    case 1217:
      if (lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 1218:
      if (lookahead == 'v') ADVANCE(1391);
      END_STATE();
    case 1219:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 1220:
      if (lookahead == 'l') ADVANCE(1393);
      END_STATE();
    case 1221:
      if (lookahead == 'c') ADVANCE(1394);
      END_STATE();
    case 1222:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1223:
      if (lookahead == 'w') ADVANCE(1395);
      END_STATE();
    case 1224:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 1226:
      if (lookahead == 'k') ADVANCE(1397);
      END_STATE();
    case 1227:
      if (lookahead == 'n') ADVANCE(1398);
      END_STATE();
    case 1228:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 1229:
      if (lookahead == 'p') ADVANCE(1399);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(1400);
      END_STATE();
    case 1231:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 1232:
      if (lookahead == 'n') ADVANCE(1402);
      END_STATE();
    case 1233:
      if (lookahead == 'n') ADVANCE(1403);
      END_STATE();
    case 1234:
      if (lookahead == 'p') ADVANCE(1404);
      END_STATE();
    case 1235:
      if (lookahead == 'd') ADVANCE(1405);
      END_STATE();
    case 1236:
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 1238:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 1239:
      if (lookahead == 'u') ADVANCE(1409);
      END_STATE();
    case 1240:
      if (lookahead == 'm') ADVANCE(1410);
      END_STATE();
    case 1241:
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1242:
      if (lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1243:
      if (lookahead == 'y') ADVANCE(1413);
      END_STATE();
    case 1244:
      if (lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 1245:
      if (lookahead == 'o') ADVANCE(1415);
      END_STATE();
    case 1246:
      if (lookahead == 'p') ADVANCE(1416);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1417);
      END_STATE();
    case 1248:
      if (lookahead == 'n') ADVANCE(1418);
      END_STATE();
    case 1249:
      if (lookahead == 'l') ADVANCE(1419);
      END_STATE();
    case 1250:
      if (lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 1251:
      if (lookahead == 'n') ADVANCE(1421);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(1422);
      END_STATE();
    case 1253:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 1254:
      if (lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(1425);
      END_STATE();
    case 1256:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 1257:
      if (lookahead == 'a') ADVANCE(1427);
      END_STATE();
    case 1258:
      if (lookahead == 'y') ADVANCE(1428);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(1429);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1430);
      END_STATE();
    case 1261:
      if (lookahead == 'x') ADVANCE(1431);
      END_STATE();
    case 1262:
      if (lookahead == 'o') ADVANCE(1432);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(1433);
      END_STATE();
    case 1264:
      if (lookahead == 'n') ADVANCE(1434);
      END_STATE();
    case 1265:
      if (lookahead == 'o') ADVANCE(1435);
      END_STATE();
    case 1266:
      if (lookahead == 'a') ADVANCE(1436);
      END_STATE();
    case 1267:
      if (lookahead == 'l') ADVANCE(1437);
      END_STATE();
    case 1268:
      if (lookahead == 'n') ADVANCE(1438);
      END_STATE();
    case 1269:
      if (lookahead == 'n') ADVANCE(1439);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(1440);
      END_STATE();
    case 1271:
      if (lookahead == 'o') ADVANCE(1441);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(1442);
      END_STATE();
    case 1273:
      if (lookahead == 'r') ADVANCE(1443);
      END_STATE();
    case 1274:
      if (lookahead == 'T') ADVANCE(1444);
      END_STATE();
    case 1275:
      if (lookahead == '.') ADVANCE(1445);
      END_STATE();
    case 1276:
      if (lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(1447);
      END_STATE();
    case 1278:
      if (lookahead == 'o') ADVANCE(1448);
      END_STATE();
    case 1279:
      if (lookahead == 'I') ADVANCE(1449);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(1450);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1451);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_NavPoints);
      END_STATE();
    case 1283:
      if (lookahead == 'e') ADVANCE(1452);
      END_STATE();
    case 1284:
      if (lookahead == 'a') ADVANCE(1453);
      END_STATE();
    case 1285:
      if (lookahead == 'a') ADVANCE(1454);
      END_STATE();
    case 1286:
      if (lookahead == 'o') ADVANCE(1455);
      END_STATE();
    case 1287:
      if (lookahead == 'o') ADVANCE(1456);
      END_STATE();
    case 1288:
      if (lookahead == 'T') ADVANCE(1457);
      END_STATE();
    case 1289:
      if (lookahead == 'e') ADVANCE(1458);
      END_STATE();
    case 1290:
      if (lookahead == 'c') ADVANCE(1459);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(1460);
      END_STATE();
    case 1292:
      if (lookahead == '1') ADVANCE(1461);
      if (lookahead == '2') ADVANCE(1462);
      if (lookahead == '3') ADVANCE(1463);
      if (lookahead == '4') ADVANCE(1464);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(1465);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_PositionX);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_PositionY);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_PositionZ);
      END_STATE();
    case 1297:
      if (lookahead == 'a') ADVANCE(1466);
      END_STATE();
    case 1298:
      if (lookahead == 'r') ADVANCE(1467);
      END_STATE();
    case 1299:
      if (lookahead == '.') ADVANCE(1468);
      END_STATE();
    case 1300:
      if (lookahead == 'n') ADVANCE(1469);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(1470);
      END_STATE();
    case 1302:
      if (lookahead == 'h') ADVANCE(1471);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1472);
      END_STATE();
    case 1304:
      if (lookahead == 'f') ADVANCE(1473);
      if (lookahead == 'x') ADVANCE(1474);
      END_STATE();
    case 1305:
      if (lookahead == 'n') ADVANCE(1475);
      END_STATE();
    case 1306:
      if (lookahead == 'u') ADVANCE(1476);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1477);
      END_STATE();
    case 1308:
      if (lookahead == 'a') ADVANCE(1478);
      END_STATE();
    case 1309:
      if (lookahead == 'o') ADVANCE(1479);
      END_STATE();
    case 1310:
      if (lookahead == 'o') ADVANCE(1480);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1481);
      END_STATE();
    case 1312:
      if (lookahead == 'o') ADVANCE(1482);
      END_STATE();
    case 1313:
      if (lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 1314:
      if (lookahead == 'u') ADVANCE(1484);
      END_STATE();
    case 1315:
      if (lookahead == 'm') ADVANCE(1485);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(1486);
      END_STATE();
    case 1317:
      if (lookahead == 'r') ADVANCE(1487);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(1488);
      END_STATE();
    case 1319:
      if (lookahead == 'h') ADVANCE(1489);
      END_STATE();
    case 1320:
      if (lookahead == 'I') ADVANCE(1490);
      END_STATE();
    case 1321:
      if (lookahead == 's') ADVANCE(1491);
      END_STATE();
    case 1322:
      if (lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 1323:
      if (lookahead == 'l') ADVANCE(1493);
      END_STATE();
    case 1324:
      if (lookahead == 'A') ADVANCE(1494);
      END_STATE();
    case 1325:
      if (lookahead == 'p') ADVANCE(1495);
      END_STATE();
    case 1326:
      if (lookahead == 't') ADVANCE(1496);
      END_STATE();
    case 1327:
      if (lookahead == 'e') ADVANCE(1497);
      END_STATE();
    case 1328:
      if (lookahead == '.') ADVANCE(1498);
      END_STATE();
    case 1329:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 1330:
      if (lookahead == 't') ADVANCE(1500);
      END_STATE();
    case 1331:
      if (lookahead == 'd') ADVANCE(1501);
      END_STATE();
    case 1332:
      if (lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 1333:
      if (lookahead == 'l') ADVANCE(1503);
      END_STATE();
    case 1334:
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1335:
      if (lookahead == 'r') ADVANCE(1505);
      END_STATE();
    case 1336:
      if (lookahead == 'g') ADVANCE(1506);
      END_STATE();
    case 1337:
      if (lookahead == 'r') ADVANCE(1507);
      END_STATE();
    case 1338:
      if (lookahead == 'e') ADVANCE(1508);
      END_STATE();
    case 1339:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1340:
      if (lookahead == 'o') ADVANCE(1509);
      END_STATE();
    case 1341:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 1342:
      if (lookahead == 't') ADVANCE(1510);
      END_STATE();
    case 1343:
      if (lookahead == 'h') ADVANCE(1511);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(1512);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(1513);
      END_STATE();
    case 1346:
      if (lookahead == 'f') ADVANCE(1514);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1515);
      END_STATE();
    case 1348:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1349:
      if (lookahead == 'l') ADVANCE(1516);
      END_STATE();
    case 1350:
      if (lookahead == 'e') ADVANCE(1517);
      END_STATE();
    case 1351:
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 1352:
      if (lookahead == 'k') ADVANCE(1519);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1520);
      END_STATE();
    case 1354:
      if (lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 1355:
      if (lookahead == 'p') ADVANCE(1522);
      END_STATE();
    case 1356:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 1357:
      if (lookahead == 'd') ADVANCE(1524);
      END_STATE();
    case 1358:
      if (lookahead == 'n') ADVANCE(1525);
      END_STATE();
    case 1359:
      if (lookahead == 'c') ADVANCE(1526);
      END_STATE();
    case 1360:
      if (lookahead == 't') ADVANCE(1527);
      END_STATE();
    case 1361:
      if (lookahead == 'I') ADVANCE(1528);
      END_STATE();
    case 1362:
      if (lookahead == 'r') ADVANCE(1529);
      END_STATE();
    case 1363:
      if (lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 1364:
      if (lookahead == 't') ADVANCE(1531);
      END_STATE();
    case 1365:
      if (lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 1366:
      if (lookahead == 's') ADVANCE(1533);
      END_STATE();
    case 1367:
      if (lookahead == 't') ADVANCE(1534);
      END_STATE();
    case 1368:
      if (lookahead == 'e') ADVANCE(1535);
      END_STATE();
    case 1369:
      if (lookahead == 'l') ADVANCE(1536);
      END_STATE();
    case 1370:
      if (lookahead == 'a') ADVANCE(1537);
      END_STATE();
    case 1371:
      if (lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_VelocityX);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_VelocityY);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_VelocityZ);
      END_STATE();
    case 1375:
      if (lookahead == 'r') ADVANCE(1539);
      END_STATE();
    case 1376:
      if (lookahead == 'a') ADVANCE(1540);
      END_STATE();
    case 1377:
      if (lookahead == 'a') ADVANCE(1541);
      END_STATE();
    case 1378:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 1379:
      if (lookahead == 'h') ADVANCE(1543);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1544);
      END_STATE();
    case 1381:
      if (lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1382:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 1383:
      if (lookahead == '.') ADVANCE(1546);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_AirRelease);
      END_STATE();
    case 1385:
      if (lookahead == 'r') ADVANCE(1547);
      END_STATE();
    case 1386:
      if (lookahead == 'f') ADVANCE(1548);
      END_STATE();
    case 1387:
      if (lookahead == 'm') ADVANCE(1549);
      END_STATE();
    case 1388:
      if (lookahead == 'a') ADVANCE(1550);
      END_STATE();
    case 1389:
      if (lookahead == 'a') ADVANCE(1551);
      END_STATE();
    case 1390:
      if (lookahead == 'o') ADVANCE(1552);
      END_STATE();
    case 1391:
      if (lookahead == 'P') ADVANCE(1553);
      END_STATE();
    case 1392:
      if (lookahead == 'y') ADVANCE(1554);
      END_STATE();
    case 1393:
      if (lookahead == 'e') ADVANCE(1555);
      END_STATE();
    case 1394:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 1398:
      if (lookahead == 'g') ADVANCE(1556);
      END_STATE();
    case 1399:
      if (lookahead == 'l') ADVANCE(1557);
      END_STATE();
    case 1400:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1401:
      if (lookahead == 'o') ADVANCE(1558);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_Combustion);
      if (lookahead == 'I') ADVANCE(1559);
      if (lookahead == 'L') ADVANCE(1560);
      if (lookahead == 'O') ADVANCE(1561);
      END_STATE();
    case 1403:
      if (lookahead == 'R') ADVANCE(1562);
      END_STATE();
    case 1404:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 1405:
      if (lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 1406:
      if (lookahead == 'e') ADVANCE(1565);
      END_STATE();
    case 1407:
      if (lookahead == 'n') ADVANCE(1566);
      END_STATE();
    case 1408:
      if (lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_DistanceAu);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_DistanceKm);
      END_STATE();
    case 1411:
      if (lookahead == 't') ADVANCE(1568);
      END_STATE();
    case 1412:
      if (lookahead == 't') ADVANCE(1569);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_Efficiency);
      END_STATE();
    case 1414:
      if (lookahead == 'v') ADVANCE(1570);
      END_STATE();
    case 1415:
      if (lookahead == 'd') ADVANCE(1571);
      END_STATE();
    case 1416:
      if (lookahead == 'e') ADVANCE(1572);
      END_STATE();
    case 1417:
      if (lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 1418:
      if (lookahead == 't') ADVANCE(1574);
      END_STATE();
    case 1419:
      if (lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1576);
      END_STATE();
    case 1421:
      if (lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1422:
      if (lookahead == 'H') ADVANCE(1578);
      if (lookahead == 'O') ADVANCE(1579);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_FilterType);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_Filtration);
      END_STATE();
    case 1425:
      if (lookahead == 'r') ADVANCE(1580);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_ForceWrite);
      END_STATE();
    case 1427:
      if (lookahead == 'r') ADVANCE(1581);
      END_STATE();
    case 1428:
      if (lookahead == 'd') ADVANCE(1582);
      END_STATE();
    case 1429:
      if (lookahead == 'q') ADVANCE(1583);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(1584);
      END_STATE();
    case 1431:
      if (lookahead == 'y') ADVANCE(1585);
      END_STATE();
    case 1432:
      if (lookahead == 'l') ADVANCE(1586);
      END_STATE();
    case 1433:
      if (lookahead == 'e') ADVANCE(1587);
      END_STATE();
    case 1434:
      if (lookahead == 'd') ADVANCE(1588);
      END_STATE();
    case 1435:
      if (lookahead == 'l') ADVANCE(1589);
      END_STATE();
    case 1436:
      if (lookahead == 't') ADVANCE(1590);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_Horizontal);
      if (lookahead == 'R') ADVANCE(1591);
      END_STATE();
    case 1438:
      if (lookahead == 't') ADVANCE(1592);
      END_STATE();
    case 1439:
      if (lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 1440:
      if (lookahead == 'H') ADVANCE(1594);
      if (lookahead == 'O') ADVANCE(1595);
      END_STATE();
    case 1441:
      if (lookahead == 'n') ADVANCE(1596);
      END_STATE();
    case 1442:
      if (lookahead == 'i') ADVANCE(1597);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_LineNumber);
      END_STATE();
    case 1444:
      if (lookahead == 'y') ADVANCE(1598);
      END_STATE();
    case 1445:
      if (lookahead == 'A') ADVANCE(1599);
      if (lookahead == 'B') ADVANCE(1600);
      if (lookahead == 'C') ADVANCE(1601);
      if (lookahead == 'D') ADVANCE(1602);
      if (lookahead == 'E') ADVANCE(1603);
      if (lookahead == 'F') ADVANCE(1604);
      if (lookahead == 'H') ADVANCE(1605);
      if (lookahead == 'I') ADVANCE(1606);
      if (lookahead == 'L') ADVANCE(1607);
      if (lookahead == 'M') ADVANCE(1608);
      if (lookahead == 'N') ADVANCE(1609);
      if (lookahead == 'O') ADVANCE(1610);
      if (lookahead == 'P') ADVANCE(1611);
      if (lookahead == 'Q') ADVANCE(1612);
      if (lookahead == 'R') ADVANCE(1613);
      if (lookahead == 'S') ADVANCE(1614);
      if (lookahead == 'T') ADVANCE(1615);
      if (lookahead == 'V') ADVANCE(1616);
      if (lookahead == 'W') ADVANCE(1617);
      END_STATE();
    case 1446:
      if (lookahead == 'a') ADVANCE(1618);
      END_STATE();
    case 1447:
      if (lookahead == 'y') ADVANCE(1619);
      END_STATE();
    case 1448:
      if (lookahead == 'C') ADVANCE(1620);
      END_STATE();
    case 1449:
      if (lookahead == 'n') ADVANCE(1621);
      END_STATE();
    case 1450:
      if (lookahead == 'i') ADVANCE(1622);
      END_STATE();
    case 1451:
      if (lookahead == 't') ADVANCE(1623);
      END_STATE();
    case 1452:
      if (lookahead == 'r') ADVANCE(1624);
      END_STATE();
    case 1453:
      if (lookahead == 's') ADVANCE(1625);
      END_STATE();
    case 1454:
      if (lookahead == 'l') ADVANCE(1626);
      END_STATE();
    case 1455:
      if (lookahead == 'd') ADVANCE(1627);
      END_STATE();
    case 1456:
      if (lookahead == 'n') ADVANCE(1628);
      END_STATE();
    case 1457:
      if (lookahead == 'a') ADVANCE(1629);
      END_STATE();
    case 1458:
      if (lookahead == 's') ADVANCE(1630);
      END_STATE();
    case 1459:
      if (lookahead == 'i') ADVANCE(1631);
      END_STATE();
    case 1460:
      if (lookahead == 'h') ADVANCE(1632);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_PlantHash1);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_PlantHash2);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_PlantHash3);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_PlantHash4);
      END_STATE();
    case 1465:
      if (lookahead == 'h') ADVANCE(1633);
      END_STATE();
    case 1466:
      if (lookahead == 'l') ADVANCE(1634);
      END_STATE();
    case 1467:
      if (lookahead == 'a') ADVANCE(1635);
      END_STATE();
    case 1468:
      if (lookahead == 'C') ADVANCE(1636);
      if (lookahead == 'D') ADVANCE(1637);
      if (lookahead == 'I') ADVANCE(1638);
      END_STATE();
    case 1469:
      if (lookahead == 't') ADVANCE(1639);
      END_STATE();
    case 1470:
      if (lookahead == 'r') ADVANCE(1640);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_PrefabHash);
      END_STATE();
    case 1472:
      if (lookahead == 'r') ADVANCE(1641);
      END_STATE();
    case 1473:
      if (lookahead == 'f') ADVANCE(1642);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(1643);
      END_STATE();
    case 1475:
      if (lookahead == 'p') ADVANCE(1644);
      if (lookahead == 't') ADVANCE(1645);
      END_STATE();
    case 1476:
      if (lookahead == 't') ADVANCE(1646);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(1647);
      END_STATE();
    case 1478:
      if (lookahead == 's') ADVANCE(1648);
      END_STATE();
    case 1479:
      if (lookahead == 'n') ADVANCE(1649);
      END_STATE();
    case 1480:
      if (lookahead == 'g') ADVANCE(1650);
      END_STATE();
    case 1481:
      if (lookahead == 'd') ADVANCE(1651);
      END_STATE();
    case 1482:
      if (lookahead == 'g') ADVANCE(1652);
      if (lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 1483:
      if (lookahead == 'n') ADVANCE(1654);
      END_STATE();
    case 1484:
      if (lookahead == 't') ADVANCE(1655);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_RatioSteam);
      if (lookahead == 'I') ADVANCE(1656);
      if (lookahead == 'O') ADVANCE(1657);
      END_STATE();
    case 1486:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_RatioWater);
      if (lookahead == 'I') ADVANCE(1659);
      if (lookahead == 'O') ADVANCE(1660);
      END_STATE();
    case 1488:
      if (lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_RecipeHash);
      END_STATE();
    case 1490:
      if (lookahead == 'd') ADVANCE(1662);
      END_STATE();
    case 1491:
      if (lookahead == 'h') ADVANCE(1663);
      END_STATE();
    case 1492:
      if (lookahead == 'w') ADVANCE(1664);
      END_STATE();
    case 1493:
      if (lookahead == 'C') ADVANCE(1665);
      END_STATE();
    case 1494:
      if (lookahead == 'x') ADVANCE(1666);
      END_STATE();
    case 1495:
      if (lookahead == 'u') ADVANCE(1667);
      END_STATE();
    case 1496:
      if (lookahead == 'p') ADVANCE(1668);
      END_STATE();
    case 1497:
      if (lookahead == 'n') ADVANCE(1669);
      END_STATE();
    case 1498:
      if (lookahead == 'A') ADVANCE(1670);
      if (lookahead == 'B') ADVANCE(1671);
      if (lookahead == 'C') ADVANCE(1672);
      if (lookahead == 'D') ADVANCE(1673);
      if (lookahead == 'E') ADVANCE(1674);
      if (lookahead == 'F') ADVANCE(1675);
      if (lookahead == 'G') ADVANCE(1676);
      if (lookahead == 'H') ADVANCE(1677);
      if (lookahead == 'I') ADVANCE(1678);
      if (lookahead == 'L') ADVANCE(1679);
      if (lookahead == 'M') ADVANCE(1680);
      if (lookahead == 'N') ADVANCE(1681);
      if (lookahead == 'O') ADVANCE(1682);
      if (lookahead == 'P') ADVANCE(1683);
      if (lookahead == 'S') ADVANCE(1684);
      if (lookahead == 'T') ADVANCE(1685);
      if (lookahead == 'U') ADVANCE(1686);
      if (lookahead == 'W') ADVANCE(1687);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_SolarAngle);
      END_STATE();
    case 1500:
      if (lookahead == 'a') ADVANCE(1688);
      END_STATE();
    case 1501:
      if (lookahead == 'i') ADVANCE(1689);
      END_STATE();
    case 1502:
      if (lookahead == 's') ADVANCE(1690);
      END_STATE();
    case 1503:
      if (lookahead == 'o') ADVANCE(1691);
      END_STATE();
    case 1504:
      if (lookahead == 'm') ADVANCE(1692);
      END_STATE();
    case 1505:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 1506:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 1507:
      if (lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 1508:
      if (lookahead == 'F') ADVANCE(1695);
      END_STATE();
    case 1509:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 1510:
      if (lookahead == 'W') ADVANCE(1696);
      END_STATE();
    case 1511:
      if (lookahead == 'C') ADVANCE(1697);
      END_STATE();
    case 1512:
      if (lookahead == 'u') ADVANCE(1698);
      END_STATE();
    case 1513:
      if (lookahead == 'O') ADVANCE(1699);
      END_STATE();
    case 1514:
      if (lookahead == 'u') ADVANCE(1700);
      END_STATE();
    case 1515:
      if (lookahead == 'c') ADVANCE(1701);
      END_STATE();
    case 1516:
      if (lookahead == 'u') ADVANCE(1702);
      END_STATE();
    case 1517:
      if (lookahead == 'r') ADVANCE(1703);
      END_STATE();
    case 1518:
      if (lookahead == 's') ADVANCE(1704);
      END_STATE();
    case 1519:
      if (lookahead == 'e') ADVANCE(1705);
      END_STATE();
    case 1520:
      if (lookahead == 'm') ADVANCE(1706);
      END_STATE();
    case 1521:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 1522:
      if (lookahead == 'e') ADVANCE(1708);
      END_STATE();
    case 1523:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1524:
      if (lookahead == 'e') ADVANCE(1709);
      END_STATE();
    case 1525:
      if (lookahead == 'i') ADVANCE(1710);
      END_STATE();
    case 1526:
      if (lookahead == 'o') ADVANCE(1711);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_SoundAlert);
      END_STATE();
    case 1528:
      if (lookahead == 'n') ADVANCE(1712);
      END_STATE();
    case 1529:
      if (lookahead == 'e') ADVANCE(1713);
      END_STATE();
    case 1530:
      if (lookahead == 'i') ADVANCE(1714);
      END_STATE();
    case 1531:
      if (lookahead == 'i') ADVANCE(1715);
      END_STATE();
    case 1532:
      if (lookahead == 'n') ADVANCE(1716);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_TotalMoles);
      if (lookahead == 'I') ADVANCE(1717);
      if (lookahead == 'O') ADVANCE(1718);
      END_STATE();
    case 1534:
      if (lookahead == 'i') ADVANCE(1719);
      END_STATE();
    case 1535:
      if (lookahead == 'r') ADVANCE(1720);
      END_STATE();
    case 1536:
      if (lookahead == 'y') ADVANCE(1721);
      END_STATE();
    case 1537:
      if (lookahead == 'g') ADVANCE(1722);
      END_STATE();
    case 1538:
      if (lookahead == 'l') ADVANCE(1723);
      END_STATE();
    case 1539:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 1540:
      if (lookahead == 'r') ADVANCE(1724);
      END_STATE();
    case 1541:
      if (lookahead == 't') ADVANCE(1725);
      END_STATE();
    case 1542:
      if (lookahead == 'q') ADVANCE(1726);
      END_STATE();
    case 1543:
      if (lookahead == 'i') ADVANCE(1727);
      END_STATE();
    case 1544:
      if (lookahead == 'E') ADVANCE(1728);
      END_STATE();
    case 1545:
      if (lookahead == 'n') ADVANCE(1729);
      END_STATE();
    case 1546:
      if (lookahead == 'D') ADVANCE(1730);
      if (lookahead == 'N') ADVANCE(1731);
      if (lookahead == 'O') ADVANCE(1732);
      if (lookahead == 'P') ADVANCE(1733);
      END_STATE();
    case 1547:
      if (lookahead == 'r') ADVANCE(1734);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_AutoShutOff);
      END_STATE();
    case 1549:
      if (lookahead == 'a') ADVANCE(1735);
      END_STATE();
    case 1550:
      if (lookahead == 's') ADVANCE(1736);
      END_STATE();
    case 1551:
      if (lookahead == 'r') ADVANCE(1737);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_ChargeRatio);
      END_STATE();
    case 1553:
      if (lookahead == 'o') ADVANCE(1738);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_ClearMemory);
      END_STATE();
    case 1555:
      if (lookahead == 'G') ADVANCE(1739);
      END_STATE();
    case 1556:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1557:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1558:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 1559:
      if (lookahead == 'n') ADVANCE(1740);
      END_STATE();
    case 1560:
      if (lookahead == 'i') ADVANCE(1741);
      END_STATE();
    case 1561:
      if (lookahead == 'u') ADVANCE(1742);
      END_STATE();
    case 1562:
      if (lookahead == 'a') ADVANCE(1743);
      END_STATE();
    case 1563:
      if (lookahead == 'I') ADVANCE(1744);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_CurrentCode);
      END_STATE();
    case 1565:
      if (lookahead == 'a') ADVANCE(1745);
      END_STATE();
    case 1566:
      if (lookahead == 's') ADVANCE(1746);
      END_STATE();
    case 1567:
      if (lookahead == 'C') ADVANCE(1747);
      END_STATE();
    case 1568:
      if (lookahead == 'i') ADVANCE(1748);
      END_STATE();
    case 1569:
      if (lookahead == 'y') ADVANCE(1749);
      END_STATE();
    case 1570:
      if (lookahead == 'e') ADVANCE(1750);
      END_STATE();
    case 1571:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1572:
      if (lookahead == 'e') ADVANCE(1752);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_EntityState);
      if (lookahead == '.') ADVANCE(1753);
      END_STATE();
    case 1574:
      if (lookahead == 'E') ADVANCE(1754);
      END_STATE();
    case 1575:
      if (lookahead == 'c') ADVANCE(1755);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_ExportCount);
      END_STATE();
    case 1577:
      if (lookahead == 'i') ADVANCE(1756);
      END_STATE();
    case 1578:
      if (lookahead == 'a') ADVANCE(1757);
      END_STATE();
    case 1579:
      if (lookahead == 'c') ADVANCE(1758);
      END_STATE();
    case 1580:
      if (lookahead == 'o') ADVANCE(1759);
      END_STATE();
    case 1581:
      if (lookahead == 'b') ADVANCE(1760);
      END_STATE();
    case 1582:
      if (lookahead == 'r') ADVANCE(1761);
      END_STATE();
    case 1583:
      if (lookahead == 'u') ADVANCE(1762);
      END_STATE();
    case 1584:
      if (lookahead == 'r') ADVANCE(1763);
      END_STATE();
    case 1585:
      if (lookahead == 'g') ADVANCE(1764);
      END_STATE();
    case 1586:
      if (lookahead == 'l') ADVANCE(1765);
      END_STATE();
    case 1587:
      if (lookahead == 'a') ADVANCE(1766);
      END_STATE();
    case 1588:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1589:
      if (lookahead == 'a') ADVANCE(1768);
      END_STATE();
    case 1590:
      if (lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 1591:
      if (lookahead == 'a') ADVANCE(1770);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_ImportCount);
      END_STATE();
    case 1593:
      if (lookahead == 'i') ADVANCE(1771);
      END_STATE();
    case 1594:
      if (lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 1595:
      if (lookahead == 'c') ADVANCE(1773);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_Inclination);
      END_STATE();
    case 1597:
      if (lookahead == 'o') ADVANCE(1774);
      END_STATE();
    case 1598:
      if (lookahead == 'p') ADVANCE(1775);
      END_STATE();
    case 1599:
      if (lookahead == 'c') ADVANCE(1776);
      if (lookahead == 'i') ADVANCE(1777);
      if (lookahead == 'l') ADVANCE(1778);
      if (lookahead == 'p') ADVANCE(1779);
      if (lookahead == 'u') ADVANCE(1780);
      END_STATE();
    case 1600:
      if (lookahead == 'p') ADVANCE(1781);
      if (lookahead == 'u') ADVANCE(1782);
      END_STATE();
    case 1601:
      if (lookahead == 'e') ADVANCE(1783);
      if (lookahead == 'h') ADVANCE(1784);
      if (lookahead == 'l') ADVANCE(1785);
      if (lookahead == 'o') ADVANCE(1786);
      if (lookahead == 'u') ADVANCE(1787);
      END_STATE();
    case 1602:
      if (lookahead == 'e') ADVANCE(1788);
      if (lookahead == 'i') ADVANCE(1789);
      if (lookahead == 'r') ADVANCE(1790);
      END_STATE();
    case 1603:
      if (lookahead == 'c') ADVANCE(1791);
      if (lookahead == 'l') ADVANCE(1792);
      if (lookahead == 'n') ADVANCE(1793);
      if (lookahead == 'r') ADVANCE(1794);
      if (lookahead == 'x') ADVANCE(1795);
      END_STATE();
    case 1604:
      if (lookahead == 'i') ADVANCE(1796);
      if (lookahead == 'l') ADVANCE(1797);
      if (lookahead == 'o') ADVANCE(1798);
      if (lookahead == 'u') ADVANCE(1799);
      END_STATE();
    case 1605:
      if (lookahead == 'a') ADVANCE(1800);
      if (lookahead == 'o') ADVANCE(1801);
      END_STATE();
    case 1606:
      if (lookahead == 'd') ADVANCE(1802);
      if (lookahead == 'm') ADVANCE(1803);
      if (lookahead == 'n') ADVANCE(1804);
      END_STATE();
    case 1607:
      if (lookahead == 'i') ADVANCE(1805);
      if (lookahead == 'o') ADVANCE(1806);
      END_STATE();
    case 1608:
      if (lookahead == 'a') ADVANCE(1807);
      if (lookahead == 'i') ADVANCE(1808);
      if (lookahead == 'o') ADVANCE(1809);
      END_STATE();
    case 1609:
      if (lookahead == 'a') ADVANCE(1810);
      if (lookahead == 'e') ADVANCE(1811);
      if (lookahead == 'o') ADVANCE(1812);
      END_STATE();
    case 1610:
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(1813);
      if (lookahead == 'r') ADVANCE(1814);
      if (lookahead == 'u') ADVANCE(1815);
      END_STATE();
    case 1611:
      if (lookahead == 'a') ADVANCE(1816);
      if (lookahead == 'l') ADVANCE(1817);
      if (lookahead == 'o') ADVANCE(1818);
      if (lookahead == 'r') ADVANCE(1819);
      END_STATE();
    case 1612:
      if (lookahead == 'u') ADVANCE(1820);
      END_STATE();
    case 1613:
      if (lookahead == 'a') ADVANCE(1821);
      if (lookahead == 'e') ADVANCE(1822);
      if (lookahead == 'i') ADVANCE(1823);
      if (lookahead == 'p') ADVANCE(1824);
      END_STATE();
    case 1614:
      if (lookahead == 'e') ADVANCE(1825);
      if (lookahead == 'i') ADVANCE(1826);
      if (lookahead == 'o') ADVANCE(1827);
      if (lookahead == 't') ADVANCE(1828);
      if (lookahead == 'u') ADVANCE(1829);
      END_STATE();
    case 1615:
      if (lookahead == 'a') ADVANCE(1830);
      if (lookahead == 'e') ADVANCE(1831);
      if (lookahead == 'h') ADVANCE(1832);
      if (lookahead == 'i') ADVANCE(1833);
      if (lookahead == 'o') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1835);
      END_STATE();
    case 1616:
      if (lookahead == 'e') ADVANCE(1836);
      if (lookahead == 'o') ADVANCE(1837);
      END_STATE();
    case 1617:
      if (lookahead == 'a') ADVANCE(1838);
      if (lookahead == 'e') ADVANCE(1839);
      if (lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 1618:
      if (lookahead == 'r') ADVANCE(1841);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_MaxQuantity);
      END_STATE();
    case 1620:
      if (lookahead == 'o') ADVANCE(1842);
      END_STATE();
    case 1621:
      if (lookahead == 'Q') ADVANCE(1843);
      if (lookahead == 'V') ADVANCE(1844);
      END_STATE();
    case 1622:
      if (lookahead == 't') ADVANCE(1845);
      END_STATE();
    case 1623:
      if (lookahead == 's') ADVANCE(1846);
      END_STATE();
    case 1624:
      if (lookahead == 'E') ADVANCE(1847);
      END_STATE();
    case 1625:
      if (lookahead == 'h') ADVANCE(1848);
      END_STATE();
    case 1626:
      if (lookahead == 'T') ADVANCE(1849);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_OrbitPeriod);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_Orientation);
      END_STATE();
    case 1629:
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_PassedMoles);
      END_STATE();
    case 1631:
      if (lookahead == 'e') ADVANCE(1851);
      END_STATE();
    case 1632:
      if (lookahead == '1') ADVANCE(1852);
      if (lookahead == '2') ADVANCE(1853);
      if (lookahead == '3') ADVANCE(1854);
      if (lookahead == '4') ADVANCE(1855);
      END_STATE();
    case 1633:
      if (lookahead == '1') ADVANCE(1856);
      if (lookahead == '2') ADVANCE(1857);
      if (lookahead == '3') ADVANCE(1858);
      if (lookahead == '4') ADVANCE(1859);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_PowerActual);
      END_STATE();
    case 1635:
      if (lookahead == 't') ADVANCE(1860);
      END_STATE();
    case 1636:
      if (lookahead == 'h') ADVANCE(1861);
      END_STATE();
    case 1637:
      if (lookahead == 'i') ADVANCE(1862);
      END_STATE();
    case 1638:
      if (lookahead == 'd') ADVANCE(1863);
      END_STATE();
    case 1639:
      if (lookahead == 'i') ADVANCE(1864);
      END_STATE();
    case 1640:
      if (lookahead == 'e') ADVANCE(1865);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_PressureAir);
      END_STATE();
    case 1642:
      if (lookahead == 'i') ADVANCE(1866);
      END_STATE();
    case 1643:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 1644:
      if (lookahead == 'u') ADVANCE(1868);
      END_STATE();
    case 1645:
      if (lookahead == 'e') ADVANCE(1869);
      END_STATE();
    case 1646:
      if (lookahead == 'p') ADVANCE(1870);
      END_STATE();
    case 1647:
      if (lookahead == 't') ADVANCE(1871);
      END_STATE();
    case 1648:
      if (lookahead == 't') ADVANCE(1872);
      END_STATE();
    case 1649:
      if (lookahead == 'D') ADVANCE(1873);
      END_STATE();
    case 1650:
      if (lookahead == 'e') ADVANCE(1874);
      END_STATE();
    case 1651:
      if (lookahead == 'C') ADVANCE(1875);
      if (lookahead == 'H') ADVANCE(1876);
      if (lookahead == 'N') ADVANCE(1877);
      if (lookahead == 'O') ADVANCE(1878);
      if (lookahead == 'P') ADVANCE(1879);
      if (lookahead == 'V') ADVANCE(1880);
      END_STATE();
    case 1652:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 1653:
      if (lookahead == 's') ADVANCE(1882);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_RatioOxygen);
      if (lookahead == 'I') ADVANCE(1883);
      if (lookahead == 'O') ADVANCE(1884);
      END_STATE();
    case 1655:
      if (lookahead == 'a') ADVANCE(1885);
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 1656:
      if (lookahead == 'n') ADVANCE(1887);
      END_STATE();
    case 1657:
      if (lookahead == 'u') ADVANCE(1888);
      END_STATE();
    case 1658:
      if (lookahead == 'l') ADVANCE(1889);
      END_STATE();
    case 1659:
      if (lookahead == 'n') ADVANCE(1890);
      END_STATE();
    case 1660:
      if (lookahead == 'u') ADVANCE(1891);
      END_STATE();
    case 1661:
      if (lookahead == 't') ADVANCE(1892);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_ReferenceId);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_RequestHash);
      END_STATE();
    case 1664:
      if (lookahead == 'e') ADVANCE(1893);
      END_STATE();
    case 1665:
      if (lookahead == 'o') ADVANCE(1894);
      END_STATE();
    case 1666:
      if (lookahead == 'i') ADVANCE(1895);
      END_STATE();
    case 1667:
      if (lookahead == 't') ADVANCE(1896);
      END_STATE();
    case 1668:
      if (lookahead == 'u') ADVANCE(1897);
      END_STATE();
    case 1669:
      if (lookahead == 'g') ADVANCE(1898);
      END_STATE();
    case 1670:
      if (lookahead == 'c') ADVANCE(1899);
      if (lookahead == 'p') ADVANCE(1900);
      END_STATE();
    case 1671:
      if (lookahead == 'a') ADVANCE(1901);
      if (lookahead == 'e') ADVANCE(1902);
      if (lookahead == 'l') ADVANCE(1903);
      if (lookahead == 'o') ADVANCE(1904);
      END_STATE();
    case 1672:
      if (lookahead == 'a') ADVANCE(1905);
      if (lookahead == 'i') ADVANCE(1906);
      if (lookahead == 'r') ADVANCE(1907);
      END_STATE();
    case 1673:
      if (lookahead == 'a') ADVANCE(1908);
      if (lookahead == 'i') ADVANCE(1909);
      if (lookahead == 'r') ADVANCE(1910);
      END_STATE();
    case 1674:
      if (lookahead == 'g') ADVANCE(1911);
      if (lookahead == 'n') ADVANCE(1912);
      END_STATE();
    case 1675:
      if (lookahead == 'l') ADVANCE(1913);
      END_STATE();
    case 1676:
      if (lookahead == 'a') ADVANCE(1914);
      if (lookahead == 'l') ADVANCE(1915);
      END_STATE();
    case 1677:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 1678:
      if (lookahead == 'n') ADVANCE(1917);
      END_STATE();
    case 1679:
      if (lookahead == 'i') ADVANCE(1918);
      END_STATE();
    case 1680:
      if (lookahead == 'a') ADVANCE(1919);
      if (lookahead == 'o') ADVANCE(1920);
      END_STATE();
    case 1681:
      if (lookahead == 'o') ADVANCE(1921);
      END_STATE();
    case 1682:
      if (lookahead == 'r') ADVANCE(1922);
      END_STATE();
    case 1683:
      if (lookahead == 'l') ADVANCE(1923);
      if (lookahead == 'r') ADVANCE(1924);
      END_STATE();
    case 1684:
      if (lookahead == 'c') ADVANCE(1925);
      if (lookahead == 'e') ADVANCE(1926);
      if (lookahead == 'o') ADVANCE(1927);
      if (lookahead == 'u') ADVANCE(1928);
      END_STATE();
    case 1685:
      if (lookahead == 'o') ADVANCE(1929);
      END_STATE();
    case 1686:
      if (lookahead == 'n') ADVANCE(1930);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(1931);
      END_STATE();
    case 1688:
      if (lookahead == 'n') ADVANCE(1932);
      END_STATE();
    case 1689:
      if (lookahead == 'a') ADVANCE(1933);
      END_STATE();
    case 1690:
      if (lookahead == 's') ADVANCE(1934);
      END_STATE();
    case 1691:
      if (lookahead == 'c') ADVANCE(1935);
      END_STATE();
    case 1692:
      if (lookahead == '1') ADVANCE(1936);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 1693:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 1694:
      if (lookahead == 's') ADVANCE(1937);
      END_STATE();
    case 1695:
      if (lookahead == 'i') ADVANCE(1938);
      END_STATE();
    case 1696:
      if (lookahead == 'h') ADVANCE(1939);
      END_STATE();
    case 1697:
      if (lookahead == 'a') ADVANCE(1940);
      END_STATE();
    case 1698:
      if (lookahead == 'd') ADVANCE(1941);
      END_STATE();
    case 1699:
      if (lookahead == 'f') ADVANCE(1942);
      END_STATE();
    case 1700:
      if (lookahead == 'n') ADVANCE(1943);
      END_STATE();
    case 1701:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(434);
      END_STATE();
    case 1702:
      if (lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 1703:
      if (lookahead == 'L') ADVANCE(1945);
      END_STATE();
    case 1704:
      if (lookahead == 'u') ADVANCE(1946);
      END_STATE();
    case 1705:
      if (lookahead == 't') ADVANCE(1947);
      END_STATE();
    case 1706:
      if (lookahead == 'I') ADVANCE(1948);
      END_STATE();
    case 1707:
      if (lookahead == 'm') ADVANCE(1949);
      END_STATE();
    case 1708:
      if (lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 1709:
      if (lookahead == 'r') ADVANCE(1951);
      END_STATE();
    case 1710:
      if (lookahead == 'n') ADVANCE(1952);
      END_STATE();
    case 1711:
      if (lookahead == 'm') ADVANCE(1953);
      END_STATE();
    case 1712:
      if (lookahead == 'd') ADVANCE(1954);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_Temperature);
      if (lookahead == 'D') ADVANCE(1955);
      if (lookahead == 'E') ADVANCE(1956);
      if (lookahead == 'I') ADVANCE(1957);
      if (lookahead == 'O') ADVANCE(1958);
      if (lookahead == 'S') ADVANCE(1959);
      END_STATE();
    case 1714:
      if (lookahead == 'g') ADVANCE(1960);
      END_STATE();
    case 1715:
      if (lookahead == 'n') ADVANCE(1961);
      END_STATE();
    case 1716:
      if (lookahead == 't') ADVANCE(1962);
      END_STATE();
    case 1717:
      if (lookahead == 'n') ADVANCE(1963);
      END_STATE();
    case 1718:
      if (lookahead == 'u') ADVANCE(1964);
      END_STATE();
    case 1719:
      if (lookahead == 't') ADVANCE(1965);
      END_STATE();
    case 1720:
      if (lookahead == 'M') ADVANCE(1966);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_TrueAnomaly);
      END_STATE();
    case 1722:
      if (lookahead == 'n') ADVANCE(1967);
      END_STATE();
    case 1723:
      if (lookahead == 'a') ADVANCE(1968);
      END_STATE();
    case 1724:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 1725:
      if (lookahead == 'i') ADVANCE(1969);
      END_STATE();
    case 1726:
      if (lookahead == 'u') ADVANCE(1970);
      END_STATE();
    case 1727:
      if (lookahead == 'n') ADVANCE(1971);
      END_STATE();
    case 1728:
      if (lookahead == 'f') ADVANCE(1972);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_Acceleration);
      END_STATE();
    case 1730:
      if (lookahead == 'r') ADVANCE(1973);
      END_STATE();
    case 1731:
      if (lookahead == 'o') ADVANCE(1974);
      END_STATE();
    case 1732:
      if (lookahead == 'f') ADVANCE(1975);
      END_STATE();
    case 1733:
      if (lookahead == 'r') ADVANCE(1976);
      END_STATE();
    case 1734:
      if (lookahead == 'o') ADVANCE(1977);
      END_STATE();
    case 1735:
      if (lookahead == 'i') ADVANCE(1978);
      END_STATE();
    case 1736:
      if (lookahead == 'h') ADVANCE(1979);
      END_STATE();
    case 1737:
      if (lookahead == 'e') ADVANCE(1980);
      END_STATE();
    case 1738:
      if (lookahead == 'i') ADVANCE(1981);
      END_STATE();
    case 1739:
      if (lookahead == 'o') ADVANCE(1982);
      END_STATE();
    case 1740:
      if (lookahead == 'p') ADVANCE(1983);
      END_STATE();
    case 1741:
      if (lookahead == 'm') ADVANCE(1984);
      END_STATE();
    case 1742:
      if (lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 1743:
      if (lookahead == 't') ADVANCE(1986);
      END_STATE();
    case 1744:
      if (lookahead == 'd') ADVANCE(1987);
      END_STATE();
    case 1745:
      if (lookahead == 'r') ADVANCE(1988);
      END_STATE();
    case 1746:
      if (lookahead == 'o') ADVANCE(1989);
      END_STATE();
    case 1747:
      if (lookahead == 'o') ADVANCE(1990);
      END_STATE();
    case 1748:
      if (lookahead == 'o') ADVANCE(1991);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_Eccentricity);
      END_STATE();
    case 1750:
      if (lookahead == 'l') ADVANCE(1992);
      END_STATE();
    case 1751:
      if (lookahead == '.') ADVANCE(1993);
      END_STATE();
    case 1752:
      if (lookahead == 'd') ADVANCE(1994);
      END_STATE();
    case 1753:
      if (lookahead == 'A') ADVANCE(1995);
      if (lookahead == 'D') ADVANCE(1996);
      if (lookahead == 'U') ADVANCE(1997);
      END_STATE();
    case 1754:
      if (lookahead == 'f') ADVANCE(1998);
      END_STATE();
    case 1755:
      if (lookahead == 'i') ADVANCE(1999);
      END_STATE();
    case 1756:
      if (lookahead == 't') ADVANCE(2000);
      END_STATE();
    case 1757:
      if (lookahead == 's') ADVANCE(2001);
      END_STATE();
    case 1758:
      if (lookahead == 'c') ADVANCE(2002);
      END_STATE();
    case 1759:
      if (lookahead == 'l') ADVANCE(2003);
      END_STATE();
    case 1760:
      if (lookahead == 'o') ADVANCE(2004);
      END_STATE();
    case 1761:
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 1762:
      if (lookahead == 'i') ADVANCE(2006);
      END_STATE();
    case 1763:
      if (lookahead == 'o') ADVANCE(2007);
      END_STATE();
    case 1764:
      if (lookahead == 'e') ADVANCE(2008);
      END_STATE();
    case 1765:
      if (lookahead == 'u') ADVANCE(2009);
      END_STATE();
    case 1766:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 1767:
      if (lookahead == 'f') ADVANCE(2010);
      END_STATE();
    case 1768:
      if (lookahead == 't') ADVANCE(2011);
      END_STATE();
    case 1769:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 1770:
      if (lookahead == 't') ADVANCE(2012);
      END_STATE();
    case 1771:
      if (lookahead == 't') ADVANCE(2013);
      END_STATE();
    case 1772:
      if (lookahead == 's') ADVANCE(2014);
      END_STATE();
    case 1773:
      if (lookahead == 'c') ADVANCE(2015);
      END_STATE();
    case 1774:
      if (lookahead == 'n') ADVANCE(2016);
      END_STATE();
    case 1775:
      if (lookahead == 'e') ADVANCE(2017);
      END_STATE();
    case 1776:
      if (lookahead == 'c') ADVANCE(2018);
      if (lookahead == 't') ADVANCE(2019);
      END_STATE();
    case 1777:
      if (lookahead == 'r') ADVANCE(2020);
      END_STATE();
    case 1778:
      if (lookahead == 'i') ADVANCE(2021);
      END_STATE();
    case 1779:
      if (lookahead == 'e') ADVANCE(2022);
      END_STATE();
    case 1780:
      if (lookahead == 't') ADVANCE(2023);
      END_STATE();
    case 1781:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 1782:
      if (lookahead == 'r') ADVANCE(2024);
      END_STATE();
    case 1783:
      if (lookahead == 'l') ADVANCE(2025);
      END_STATE();
    case 1784:
      if (lookahead == 'a') ADVANCE(2026);
      END_STATE();
    case 1785:
      if (lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 1786:
      if (lookahead == 'l') ADVANCE(2028);
      if (lookahead == 'm') ADVANCE(2029);
      if (lookahead == 'n') ADVANCE(2030);
      END_STATE();
    case 1787:
      if (lookahead == 'r') ADVANCE(2031);
      END_STATE();
    case 1788:
      if (lookahead == 'n') ADVANCE(2032);
      if (lookahead == 's') ADVANCE(2033);
      END_STATE();
    case 1789:
      if (lookahead == 's') ADVANCE(2034);
      END_STATE();
    case 1790:
      if (lookahead == 'i') ADVANCE(2035);
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 1791:
      if (lookahead == 'c') ADVANCE(2037);
      END_STATE();
    case 1792:
      if (lookahead == 'e') ADVANCE(2038);
      END_STATE();
    case 1793:
      if (lookahead == 't') ADVANCE(2039);
      if (lookahead == 'v') ADVANCE(2040);
      END_STATE();
    case 1794:
      if (lookahead == 'r') ADVANCE(2041);
      END_STATE();
    case 1795:
      if (lookahead == 'h') ADVANCE(2042);
      if (lookahead == 'p') ADVANCE(2043);
      END_STATE();
    case 1796:
      if (lookahead == 'l') ADVANCE(2044);
      END_STATE();
    case 1797:
      if (lookahead == 'i') ADVANCE(2045);
      if (lookahead == 'u') ADVANCE(2046);
      END_STATE();
    case 1798:
      if (lookahead == 'r') ADVANCE(2047);
      END_STATE();
    case 1799:
      if (lookahead == 'e') ADVANCE(2048);
      END_STATE();
    case 1800:
      if (lookahead == 'r') ADVANCE(2049);
      END_STATE();
    case 1801:
      if (lookahead == 'r') ADVANCE(2050);
      END_STATE();
    case 1802:
      if (lookahead == 'l') ADVANCE(2051);
      END_STATE();
    case 1803:
      if (lookahead == 'p') ADVANCE(2052);
      END_STATE();
    case 1804:
      if (lookahead == 'c') ADVANCE(2053);
      if (lookahead == 'd') ADVANCE(2054);
      if (lookahead == 't') ADVANCE(2055);
      END_STATE();
    case 1805:
      if (lookahead == 'n') ADVANCE(2056);
      END_STATE();
    case 1806:
      if (lookahead == 'c') ADVANCE(2057);
      END_STATE();
    case 1807:
      if (lookahead == 'n') ADVANCE(2058);
      if (lookahead == 's') ADVANCE(2059);
      if (lookahead == 'x') ADVANCE(2060);
      END_STATE();
    case 1808:
      if (lookahead == 'n') ADVANCE(2061);
      END_STATE();
    case 1809:
      if (lookahead == 'd') ADVANCE(2062);
      END_STATE();
    case 1810:
      if (lookahead == 'v') ADVANCE(2063);
      END_STATE();
    case 1811:
      if (lookahead == 'x') ADVANCE(2064);
      END_STATE();
    case 1812:
      if (lookahead == 'n') ADVANCE(2065);
      END_STATE();
    case 1813:
      if (lookahead == 'e') ADVANCE(2066);
      END_STATE();
    case 1814:
      if (lookahead == 'b') ADVANCE(2067);
      if (lookahead == 'i') ADVANCE(2068);
      END_STATE();
    case 1815:
      if (lookahead == 't') ADVANCE(2069);
      END_STATE();
    case 1816:
      if (lookahead == 's') ADVANCE(2070);
      END_STATE();
    case 1817:
      if (lookahead == 'a') ADVANCE(2071);
      END_STATE();
    case 1818:
      if (lookahead == 's') ADVANCE(2072);
      if (lookahead == 'w') ADVANCE(2073);
      END_STATE();
    case 1819:
      if (lookahead == 'e') ADVANCE(2074);
      if (lookahead == 'o') ADVANCE(2075);
      END_STATE();
    case 1820:
      if (lookahead == 'a') ADVANCE(2076);
      END_STATE();
    case 1821:
      if (lookahead == 't') ADVANCE(2077);
      END_STATE();
    case 1822:
      if (lookahead == 'E') ADVANCE(2078);
      if (lookahead == 'a') ADVANCE(2079);
      if (lookahead == 'c') ADVANCE(2080);
      if (lookahead == 'f') ADVANCE(2081);
      if (lookahead == 'q') ADVANCE(2082);
      if (lookahead == 't') ADVANCE(2083);
      END_STATE();
    case 1823:
      if (lookahead == 'c') ADVANCE(2084);
      END_STATE();
    case 1824:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 1825:
      if (lookahead == 'm') ADVANCE(2085);
      if (lookahead == 't') ADVANCE(2086);
      END_STATE();
    case 1826:
      if (lookahead == 'g') ADVANCE(2087);
      if (lookahead == 't') ADVANCE(2088);
      if (lookahead == 'z') ADVANCE(2089);
      END_STATE();
    case 1827:
      if (lookahead == 'l') ADVANCE(2090);
      if (lookahead == 'u') ADVANCE(2091);
      END_STATE();
    case 1828:
      if (lookahead == 'r') ADVANCE(2092);
      END_STATE();
    case 1829:
      if (lookahead == 'r') ADVANCE(2093);
      END_STATE();
    case 1830:
      if (lookahead == 'r') ADVANCE(2094);
      END_STATE();
    case 1831:
      if (lookahead == 'm') ADVANCE(2095);
      END_STATE();
    case 1832:
      if (lookahead == 'r') ADVANCE(2096);
      END_STATE();
    case 1833:
      if (lookahead == 'm') ADVANCE(2097);
      END_STATE();
    case 1834:
      if (lookahead == 't') ADVANCE(2098);
      END_STATE();
    case 1835:
      if (lookahead == 'u') ADVANCE(2099);
      END_STATE();
    case 1836:
      if (lookahead == 'l') ADVANCE(2100);
      if (lookahead == 'r') ADVANCE(2101);
      END_STATE();
    case 1837:
      if (lookahead == 'l') ADVANCE(2102);
      END_STATE();
    case 1838:
      if (lookahead == 't') ADVANCE(2103);
      END_STATE();
    case 1839:
      if (lookahead == 'i') ADVANCE(2104);
      END_STATE();
    case 1840:
      if (lookahead == 'r') ADVANCE(2105);
      END_STATE();
    case 1841:
      if (lookahead == 'c') ADVANCE(2106);
      END_STATE();
    case 1842:
      if (lookahead == 'n') ADVANCE(2107);
      END_STATE();
    case 1843:
      if (lookahead == 'u') ADVANCE(2108);
      END_STATE();
    case 1844:
      if (lookahead == 'i') ADVANCE(2109);
      END_STATE();
    case 1845:
      if (lookahead == 'y') ADVANCE(2110);
      END_STATE();
    case 1846:
      if (lookahead == 'T') ADVANCE(2111);
      END_STATE();
    case 1847:
      if (lookahead == 'v') ADVANCE(2112);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_OccupantHash);
      END_STATE();
    case 1849:
      if (lookahead == 'e') ADVANCE(2113);
      END_STATE();
    case 1850:
      if (lookahead == 'g') ADVANCE(2114);
      END_STATE();
    case 1851:
      if (lookahead == 'n') ADVANCE(2115);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_PlantGrowth1);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_PlantGrowth2);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_PlantGrowth3);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_PlantGrowth4);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_PlantHealth1);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_PlantHealth2);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_PlantHealth3);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_PlantHealth4);
      END_STATE();
    case 1860:
      if (lookahead == 'i') ADVANCE(2116);
      END_STATE();
    case 1861:
      if (lookahead == 'a') ADVANCE(2117);
      END_STATE();
    case 1862:
      if (lookahead == 's') ADVANCE(2118);
      END_STATE();
    case 1863:
      if (lookahead == 'l') ADVANCE(2119);
      END_STATE();
    case 1864:
      if (lookahead == 'a') ADVANCE(2120);
      END_STATE();
    case 1865:
      if (lookahead == 'd') ADVANCE(2121);
      END_STATE();
    case 1866:
      if (lookahead == 'c') ADVANCE(2122);
      END_STATE();
    case 1867:
      if (lookahead == 'r') ADVANCE(2123);
      END_STATE();
    case 1868:
      if (lookahead == 't') ADVANCE(2124);
      END_STATE();
    case 1869:
      if (lookahead == 'r') ADVANCE(2125);
      END_STATE();
    case 1870:
      if (lookahead == 'u') ADVANCE(2126);
      END_STATE();
    case 1871:
      if (lookahead == 'i') ADVANCE(2127);
      END_STATE();
    case 1872:
      if (lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 1873:
      if (lookahead == 'i') ADVANCE(2129);
      END_STATE();
    case 1874:
      if (lookahead == 'n') ADVANCE(2130);
      END_STATE();
    case 1875:
      if (lookahead == 'a') ADVANCE(2131);
      END_STATE();
    case 1876:
      if (lookahead == 'y') ADVANCE(2132);
      END_STATE();
    case 1877:
      if (lookahead == 'i') ADVANCE(2133);
      END_STATE();
    case 1878:
      if (lookahead == 'x') ADVANCE(2134);
      END_STATE();
    case 1879:
      if (lookahead == 'o') ADVANCE(2135);
      END_STATE();
    case 1880:
      if (lookahead == 'o') ADVANCE(2136);
      END_STATE();
    case 1881:
      if (lookahead == 'n') ADVANCE(2137);
      END_STATE();
    case 1882:
      if (lookahead == 'O') ADVANCE(2138);
      END_STATE();
    case 1883:
      if (lookahead == 'n') ADVANCE(2139);
      END_STATE();
    case 1884:
      if (lookahead == 'u') ADVANCE(2140);
      END_STATE();
    case 1885:
      if (lookahead == 'n') ADVANCE(2141);
      END_STATE();
    case 1886:
      if (lookahead == 'd') ADVANCE(2142);
      END_STATE();
    case 1887:
      if (lookahead == 'p') ADVANCE(2143);
      END_STATE();
    case 1888:
      if (lookahead == 't') ADVANCE(2144);
      END_STATE();
    case 1889:
      if (lookahead == 'e') ADVANCE(2145);
      END_STATE();
    case 1890:
      if (lookahead == 'p') ADVANCE(2146);
      END_STATE();
    case 1891:
      if (lookahead == 't') ADVANCE(2147);
      END_STATE();
    case 1892:
      if (lookahead == 'u') ADVANCE(2148);
      END_STATE();
    case 1893:
      if (lookahead == 'r') ADVANCE(2149);
      END_STATE();
    case 1894:
      if (lookahead == 's') ADVANCE(2150);
      END_STATE();
    case 1895:
      if (lookahead == 's') ADVANCE(2151);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_SettingInput);
      if (lookahead == 'H') ADVANCE(2152);
      END_STATE();
    case 1897:
      if (lookahead == 't') ADVANCE(2153);
      END_STATE();
    case 1898:
      if (lookahead == 't') ADVANCE(2154);
      END_STATE();
    case 1899:
      if (lookahead == 'c') ADVANCE(2155);
      END_STATE();
    case 1900:
      if (lookahead == 'p') ADVANCE(2156);
      END_STATE();
    case 1901:
      if (lookahead == 'c') ADVANCE(2157);
      if (lookahead == 't') ADVANCE(2158);
      END_STATE();
    case 1902:
      if (lookahead == 'l') ADVANCE(2159);
      END_STATE();
    case 1903:
      if (lookahead == 'o') ADVANCE(2160);
      END_STATE();
    case 1904:
      if (lookahead == 't') ADVANCE(2161);
      END_STATE();
    case 1905:
      if (lookahead == 'r') ADVANCE(2162);
      END_STATE();
    case 1906:
      if (lookahead == 'r') ADVANCE(2163);
      END_STATE();
    case 1907:
      if (lookahead == 'e') ADVANCE(2164);
      END_STATE();
    case 1908:
      if (lookahead == 't') ADVANCE(2165);
      END_STATE();
    case 1909:
      if (lookahead == 'r') ADVANCE(2166);
      END_STATE();
    case 1910:
      if (lookahead == 'i') ADVANCE(2167);
      END_STATE();
    case 1911:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 1912:
      if (lookahead == 't') ADVANCE(2168);
      END_STATE();
    case 1913:
      if (lookahead == 'a') ADVANCE(2169);
      END_STATE();
    case 1914:
      if (lookahead == 's') ADVANCE(2170);
      END_STATE();
    case 1915:
      if (lookahead == 'a') ADVANCE(2171);
      END_STATE();
    case 1916:
      if (lookahead == 'l') ADVANCE(2172);
      END_STATE();
    case 1917:
      if (lookahead == 'g') ADVANCE(2173);
      END_STATE();
    case 1918:
      if (lookahead == 'q') ADVANCE(2174);
      END_STATE();
    case 1919:
      if (lookahead == 'g') ADVANCE(2175);
      END_STATE();
    case 1920:
      if (lookahead == 't') ADVANCE(2176);
      END_STATE();
    case 1921:
      if (lookahead == 'n') ADVANCE(2177);
      END_STATE();
    case 1922:
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'g') ADVANCE(2178);
      END_STATE();
    case 1923:
      if (lookahead == 'a') ADVANCE(2179);
      END_STATE();
    case 1924:
      if (lookahead == 'o') ADVANCE(2180);
      END_STATE();
    case 1925:
      if (lookahead == 'a') ADVANCE(2181);
      END_STATE();
    case 1926:
      if (lookahead == 'n') ADVANCE(2182);
      END_STATE();
    case 1927:
      if (lookahead == 'u') ADVANCE(2183);
      END_STATE();
    case 1928:
      if (lookahead == 'i') ADVANCE(2184);
      END_STATE();
    case 1929:
      if (lookahead == 'o') ADVANCE(2185);
      if (lookahead == 'r') ADVANCE(2186);
      END_STATE();
    case 1930:
      if (lookahead == 'i') ADVANCE(2187);
      END_STATE();
    case 1931:
      if (lookahead == 'e') ADVANCE(2188);
      END_STATE();
    case 1932:
      if (lookahead == 't') ADVANCE(2189);
      END_STATE();
    case 1933:
      if (lookahead == 'n') ADVANCE(2190);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_SortingClass);
      if (lookahead == '.') ADVANCE(2191);
      END_STATE();
    case 1935:
      if (lookahead == 'k') ADVANCE(2192);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym_enum);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(434);
      END_STATE();
    case 1937:
      if (lookahead == 's') ADVANCE(2193);
      END_STATE();
    case 1938:
      if (lookahead == 'r') ADVANCE(2194);
      END_STATE();
    case 1939:
      if (lookahead == 'o') ADVANCE(2195);
      END_STATE();
    case 1940:
      if (lookahead == 'r') ADVANCE(2196);
      END_STATE();
    case 1941:
      if (lookahead == 'e') ADVANCE(2197);
      END_STATE();
    case 1942:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 1943:
      if (lookahead == 'c') ADVANCE(2198);
      END_STATE();
    case 1944:
      if (lookahead == 'a') ADVANCE(2199);
      END_STATE();
    case 1945:
      if (lookahead == 'o') ADVANCE(2200);
      END_STATE();
    case 1946:
      if (lookahead == 'r') ADVANCE(2201);
      END_STATE();
    case 1947:
      if (lookahead == 'L') ADVANCE(2202);
      END_STATE();
    case 1948:
      if (lookahead == 'n') ADVANCE(2203);
      END_STATE();
    case 1949:
      if (lookahead == 'F') ADVANCE(2204);
      END_STATE();
    case 1950:
      if (lookahead == 'a') ADVANCE(2205);
      END_STATE();
    case 1951:
      if (lookahead == 'I') ADVANCE(2206);
      if (lookahead == 'L') ADVANCE(2207);
      END_STATE();
    case 1952:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 1953:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 1954:
      if (lookahead == 'e') ADVANCE(2208);
      END_STATE();
    case 1955:
      if (lookahead == 'i') ADVANCE(2209);
      END_STATE();
    case 1956:
      if (lookahead == 'x') ADVANCE(2210);
      END_STATE();
    case 1957:
      if (lookahead == 'n') ADVANCE(2211);
      END_STATE();
    case 1958:
      if (lookahead == 'u') ADVANCE(2212);
      END_STATE();
    case 1959:
      if (lookahead == 'e') ADVANCE(2213);
      END_STATE();
    case 1960:
      if (lookahead == 'h') ADVANCE(2214);
      END_STATE();
    case 1961:
      if (lookahead == 'a') ADVANCE(2215);
      END_STATE();
    case 1962:
      if (lookahead == 's') ADVANCE(2216);
      END_STATE();
    case 1963:
      if (lookahead == 'p') ADVANCE(2217);
      END_STATE();
    case 1964:
      if (lookahead == 't') ADVANCE(2218);
      END_STATE();
    case 1965:
      if (lookahead == 'y') ADVANCE(2219);
      END_STATE();
    case 1966:
      if (lookahead == 'o') ADVANCE(2220);
      END_STATE();
    case 1967:
      if (lookahead == 'i') ADVANCE(2221);
      END_STATE();
    case 1968:
      if (lookahead == 't') ADVANCE(2222);
      END_STATE();
    case 1969:
      if (lookahead == 'o') ADVANCE(2223);
      END_STATE();
    case 1970:
      if (lookahead == 'i') ADVANCE(2224);
      END_STATE();
    case 1971:
      if (lookahead == 'g') ADVANCE(2225);
      END_STATE();
    case 1972:
      if (lookahead == 'f') ADVANCE(2226);
      END_STATE();
    case 1973:
      if (lookahead == 'a') ADVANCE(2227);
      END_STATE();
    case 1974:
      if (lookahead == 'n') ADVANCE(2228);
      END_STATE();
    case 1975:
      if (lookahead == 'f') ADVANCE(2229);
      END_STATE();
    case 1976:
      if (lookahead == 'e') ADVANCE(2230);
      END_STATE();
    case 1977:
      if (lookahead == 'r') ADVANCE(2231);
      END_STATE();
    case 1978:
      if (lookahead == 'n') ADVANCE(2232);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_CelestialHash);
      END_STATE();
    case 1980:
      if (lookahead == 'n') ADVANCE(2233);
      END_STATE();
    case 1981:
      if (lookahead == 'n') ADVANCE(2234);
      END_STATE();
    case 1982:
      if (lookahead == 'o') ADVANCE(2235);
      END_STATE();
    case 1983:
      if (lookahead == 'u') ADVANCE(2236);
      END_STATE();
    case 1984:
      if (lookahead == 'i') ADVANCE(2237);
      END_STATE();
    case 1985:
      if (lookahead == 'p') ADVANCE(2238);
      END_STATE();
    case 1986:
      if (lookahead == 'i') ADVANCE(2239);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_ContactTypeId);
      END_STATE();
    case 1988:
      if (lookahead == 'c') ADVANCE(2240);
      END_STATE();
    case 1989:
      if (lookahead == 'r') ADVANCE(2241);
      END_STATE();
    case 1990:
      if (lookahead == 'd') ADVANCE(2242);
      END_STATE();
    case 1991:
      if (lookahead == 'n') ADVANCE(2243);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_ElevatorLevel);
      END_STATE();
    case 1993:
      if (lookahead == 'D') ADVANCE(2244);
      if (lookahead == 'S') ADVANCE(2245);
      if (lookahead == 'U') ADVANCE(2246);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_ElevatorSpeed);
      END_STATE();
    case 1995:
      if (lookahead == 'l') ADVANCE(2247);
      END_STATE();
    case 1996:
      if (lookahead == 'e') ADVANCE(2248);
      END_STATE();
    case 1997:
      if (lookahead == 'n') ADVANCE(2249);
      END_STATE();
    case 1998:
      if (lookahead == 'f') ADVANCE(2250);
      END_STATE();
    case 1999:
      if (lookahead == 't') ADVANCE(2251);
      END_STATE();
    case 2000:
      if (lookahead == 'y') ADVANCE(2252);
      END_STATE();
    case 2001:
      if (lookahead == 'h') ADVANCE(2253);
      END_STATE();
    case 2002:
      if (lookahead == 'u') ADVANCE(2254);
      END_STATE();
    case 2003:
      if (lookahead == 'R') ADVANCE(2255);
      END_STATE();
    case 2004:
      if (lookahead == 'n') ADVANCE(2256);
      END_STATE();
    case 2005:
      if (lookahead == 'g') ADVANCE(2257);
      END_STATE();
    case 2006:
      if (lookahead == 'd') ADVANCE(2258);
      END_STATE();
    case 2007:
      if (lookahead == 'g') ADVANCE(2259);
      if (lookahead == 'u') ADVANCE(2260);
      END_STATE();
    case 2008:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 2009:
      if (lookahead == 't') ADVANCE(2261);
      END_STATE();
    case 2010:
      if (lookahead == 'i') ADVANCE(2262);
      END_STATE();
    case 2011:
      if (lookahead == 'i') ADVANCE(2263);
      END_STATE();
    case 2012:
      if (lookahead == 'i') ADVANCE(2264);
      END_STATE();
    case 2013:
      if (lookahead == 'y') ADVANCE(2265);
      END_STATE();
    case 2014:
      if (lookahead == 'h') ADVANCE(2266);
      END_STATE();
    case 2015:
      if (lookahead == 'u') ADVANCE(2267);
      END_STATE();
    case 2016:
      if (lookahead == 'P') ADVANCE(2268);
      END_STATE();
    case 2017:
      if (lookahead == '.') ADVANCE(2269);
      END_STATE();
    case 2018:
      if (lookahead == 'e') ADVANCE(2270);
      END_STATE();
    case 2019:
      if (lookahead == 'i') ADVANCE(2271);
      END_STATE();
    case 2020:
      if (lookahead == 'R') ADVANCE(2272);
      END_STATE();
    case 2021:
      if (lookahead == 'g') ADVANCE(2273);
      END_STATE();
    case 2022:
      if (lookahead == 'x') ADVANCE(434);
      END_STATE();
    case 2023:
      if (lookahead == 'o') ADVANCE(2274);
      END_STATE();
    case 2024:
      if (lookahead == 'n') ADVANCE(2275);
      END_STATE();
    case 2025:
      if (lookahead == 'e') ADVANCE(2276);
      END_STATE();
    case 2026:
      if (lookahead == 'n') ADVANCE(2277);
      if (lookahead == 'r') ADVANCE(2278);
      END_STATE();
    case 2027:
      if (lookahead == 'a') ADVANCE(2279);
      END_STATE();
    case 2028:
      if (lookahead == 'l') ADVANCE(2280);
      if (lookahead == 'o') ADVANCE(2281);
      END_STATE();
    case 2029:
      if (lookahead == 'b') ADVANCE(2282);
      if (lookahead == 'p') ADVANCE(2283);
      END_STATE();
    case 2030:
      if (lookahead == 't') ADVANCE(2284);
      END_STATE();
    case 2031:
      if (lookahead == 'r') ADVANCE(2285);
      END_STATE();
    case 2032:
      if (lookahead == 's') ADVANCE(2286);
      END_STATE();
    case 2033:
      if (lookahead == 't') ADVANCE(2287);
      END_STATE();
    case 2034:
      if (lookahead == 'c') ADVANCE(2288);
      if (lookahead == 't') ADVANCE(2289);
      END_STATE();
    case 2035:
      if (lookahead == 'l') ADVANCE(2290);
      END_STATE();
    case 2036:
      if (lookahead == 'M') ADVANCE(2291);
      END_STATE();
    case 2037:
      if (lookahead == 'e') ADVANCE(2292);
      END_STATE();
    case 2038:
      if (lookahead == 'v') ADVANCE(2293);
      END_STATE();
    case 2039:
      if (lookahead == 'i') ADVANCE(2294);
      END_STATE();
    case 2040:
      if (lookahead == 'i') ADVANCE(2295);
      END_STATE();
    case 2041:
      if (lookahead == 'o') ADVANCE(2296);
      END_STATE();
    case 2042:
      if (lookahead == 'a') ADVANCE(2297);
      END_STATE();
    case 2043:
      if (lookahead == 'o') ADVANCE(2298);
      END_STATE();
    case 2044:
      if (lookahead == 't') ADVANCE(2299);
      END_STATE();
    case 2045:
      if (lookahead == 'g') ADVANCE(2300);
      END_STATE();
    case 2046:
      if (lookahead == 's') ADVANCE(2301);
      END_STATE();
    case 2047:
      if (lookahead == 'c') ADVANCE(2302);
      if (lookahead == 'w') ADVANCE(2303);
      END_STATE();
    case 2048:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 2049:
      if (lookahead == 'v') ADVANCE(2304);
      END_STATE();
    case 2050:
      if (lookahead == 'i') ADVANCE(2305);
      END_STATE();
    case 2051:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2052:
      if (lookahead == 'o') ADVANCE(2306);
      END_STATE();
    case 2053:
      if (lookahead == 'l') ADVANCE(2307);
      END_STATE();
    case 2054:
      if (lookahead == 'e') ADVANCE(2308);
      END_STATE();
    case 2055:
      if (lookahead == 'e') ADVANCE(2309);
      END_STATE();
    case 2056:
      if (lookahead == 'e') ADVANCE(2310);
      END_STATE();
    case 2057:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 2058:
      if (lookahead == 'u') ADVANCE(2311);
      END_STATE();
    case 2059:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2060:
      if (lookahead == 'i') ADVANCE(2312);
      END_STATE();
    case 2061:
      if (lookahead == 'e') ADVANCE(2313);
      if (lookahead == 'i') ADVANCE(2314);
      END_STATE();
    case 2062:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2063:
      if (lookahead == 'P') ADVANCE(2315);
      END_STATE();
    case 2064:
      if (lookahead == 't') ADVANCE(2316);
      END_STATE();
    case 2065:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2066:
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(2317);
      END_STATE();
    case 2067:
      if (lookahead == 'i') ADVANCE(2318);
      END_STATE();
    case 2068:
      if (lookahead == 'e') ADVANCE(2319);
      END_STATE();
    case 2069:
      if (lookahead == 'p') ADVANCE(2320);
      END_STATE();
    case 2070:
      if (lookahead == 's') ADVANCE(2321);
      END_STATE();
    case 2071:
      if (lookahead == 'n') ADVANCE(2322);
      END_STATE();
    case 2072:
      if (lookahead == 'i') ADVANCE(2323);
      END_STATE();
    case 2073:
      if (lookahead == 'e') ADVANCE(2324);
      END_STATE();
    case 2074:
      if (lookahead == 'f') ADVANCE(2325);
      if (lookahead == 's') ADVANCE(2326);
      END_STATE();
    case 2075:
      if (lookahead == 'g') ADVANCE(2327);
      END_STATE();
    case 2076:
      if (lookahead == 'n') ADVANCE(2328);
      END_STATE();
    case 2077:
      if (lookahead == 'i') ADVANCE(2329);
      END_STATE();
    case 2078:
      if (lookahead == 'n') ADVANCE(2330);
      END_STATE();
    case 2079:
      if (lookahead == 'g') ADVANCE(2331);
      END_STATE();
    case 2080:
      if (lookahead == 'i') ADVANCE(2332);
      END_STATE();
    case 2081:
      if (lookahead == 'e') ADVANCE(2333);
      END_STATE();
    case 2082:
      if (lookahead == 'u') ADVANCE(2334);
      END_STATE();
    case 2083:
      if (lookahead == 'u') ADVANCE(2335);
      END_STATE();
    case 2084:
      if (lookahead == 'h') ADVANCE(2336);
      END_STATE();
    case 2085:
      if (lookahead == 'i') ADVANCE(2337);
      END_STATE();
    case 2086:
      if (lookahead == 't') ADVANCE(2338);
      END_STATE();
    case 2087:
      if (lookahead == 'n') ADVANCE(2339);
      END_STATE();
    case 2088:
      if (lookahead == 'e') ADVANCE(2340);
      END_STATE();
    case 2089:
      if (lookahead == 'e') ADVANCE(2341);
      END_STATE();
    case 2090:
      if (lookahead == 'a') ADVANCE(2342);
      END_STATE();
    case 2091:
      if (lookahead == 'n') ADVANCE(2343);
      END_STATE();
    case 2092:
      if (lookahead == 'e') ADVANCE(2344);
      END_STATE();
    case 2093:
      if (lookahead == 'v') ADVANCE(2345);
      END_STATE();
    case 2094:
      if (lookahead == 'g') ADVANCE(2346);
      END_STATE();
    case 2095:
      if (lookahead == 'p') ADVANCE(2347);
      END_STATE();
    case 2096:
      if (lookahead == 'o') ADVANCE(2348);
      if (lookahead == 'u') ADVANCE(2349);
      END_STATE();
    case 2097:
      if (lookahead == 'e') ADVANCE(2350);
      END_STATE();
    case 2098:
      if (lookahead == 'a') ADVANCE(2351);
      END_STATE();
    case 2099:
      if (lookahead == 'e') ADVANCE(2352);
      END_STATE();
    case 2100:
      if (lookahead == 'o') ADVANCE(2353);
      END_STATE();
    case 2101:
      if (lookahead == 't') ADVANCE(2354);
      END_STATE();
    case 2102:
      if (lookahead == 'u') ADVANCE(2355);
      END_STATE();
    case 2103:
      if (lookahead == 't') ADVANCE(2356);
      END_STATE();
    case 2104:
      if (lookahead == 'g') ADVANCE(2357);
      END_STATE();
    case 2105:
      if (lookahead == 'k') ADVANCE(2358);
      END_STATE();
    case 2106:
      if (lookahead == 'h') ADVANCE(2359);
      END_STATE();
    case 2107:
      if (lookahead == 't') ADVANCE(2360);
      END_STATE();
    case 2108:
      if (lookahead == 'e') ADVANCE(2361);
      END_STATE();
    case 2109:
      if (lookahead == 'c') ADVANCE(2362);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_MinedQuantity);
      END_STATE();
    case 2111:
      if (lookahead == 'o') ADVANCE(2363);
      END_STATE();
    case 2112:
      if (lookahead == 'e') ADVANCE(2364);
      END_STATE();
    case 2113:
      if (lookahead == 'm') ADVANCE(2365);
      END_STATE();
    case 2114:
      if (lookahead == 'e') ADVANCE(2366);
      END_STATE();
    case 2115:
      if (lookahead == 'c') ADVANCE(2367);
      END_STATE();
    case 2116:
      if (lookahead == 'o') ADVANCE(2368);
      END_STATE();
    case 2117:
      if (lookahead == 'r') ADVANCE(2369);
      END_STATE();
    case 2118:
      if (lookahead == 'c') ADVANCE(2370);
      END_STATE();
    case 2119:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2120:
      if (lookahead == 'l') ADVANCE(2371);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_PowerRequired);
      END_STATE();
    case 2122:
      if (lookahead == 'i') ADVANCE(2372);
      END_STATE();
    case 2123:
      if (lookahead == 'n') ADVANCE(2373);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_PressureInput);
      if (lookahead == '2') ADVANCE(2374);
      END_STATE();
    case 2125:
      if (lookahead == 'n') ADVANCE(2375);
      END_STATE();
    case 2126:
      if (lookahead == 't') ADVANCE(2376);
      END_STATE();
    case 2127:
      if (lookahead == 'n') ADVANCE(2377);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_PressureWaste);
      END_STATE();
    case 2129:
      if (lookahead == 'o') ADVANCE(2378);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_RatioHydrogen);
      END_STATE();
    case 2131:
      if (lookahead == 'r') ADVANCE(2379);
      END_STATE();
    case 2132:
      if (lookahead == 'd') ADVANCE(2380);
      END_STATE();
    case 2133:
      if (lookahead == 't') ADVANCE(2381);
      END_STATE();
    case 2134:
      if (lookahead == 'y') ADVANCE(2382);
      END_STATE();
    case 2135:
      if (lookahead == 'l') ADVANCE(2383);
      END_STATE();
    case 2136:
      if (lookahead == 'l') ADVANCE(2384);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(anon_sym_RatioNitrogen);
      if (lookahead == 'I') ADVANCE(2385);
      if (lookahead == 'O') ADVANCE(2386);
      END_STATE();
    case 2138:
      if (lookahead == 'x') ADVANCE(2387);
      END_STATE();
    case 2139:
      if (lookahead == 'p') ADVANCE(2388);
      END_STATE();
    case 2140:
      if (lookahead == 't') ADVANCE(2389);
      END_STATE();
    case 2141:
      if (lookahead == 't') ADVANCE(2390);
      END_STATE();
    case 2142:
      if (lookahead == 'W') ADVANCE(2391);
      END_STATE();
    case 2143:
      if (lookahead == 'u') ADVANCE(2392);
      END_STATE();
    case 2144:
      if (lookahead == 'p') ADVANCE(2393);
      END_STATE();
    case 2145:
      if (lookahead == 's') ADVANCE(2394);
      END_STATE();
    case 2146:
      if (lookahead == 'u') ADVANCE(2395);
      END_STATE();
    case 2147:
      if (lookahead == 'p') ADVANCE(2396);
      END_STATE();
    case 2148:
      if (lookahead == 'd') ADVANCE(2397);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(anon_sym_RequiredPower);
      END_STATE();
    case 2150:
      if (lookahead == 't') ADVANCE(2398);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_SemiMajorAxis);
      END_STATE();
    case 2152:
      if (lookahead == 'a') ADVANCE(2399);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(anon_sym_SettingOutput);
      if (lookahead == 'H') ADVANCE(2400);
      END_STATE();
    case 2154:
      if (lookahead == 'h') ADVANCE(2401);
      END_STATE();
    case 2155:
      if (lookahead == 'e') ADVANCE(2402);
      END_STATE();
    case 2156:
      if (lookahead == 'l') ADVANCE(2403);
      END_STATE();
    case 2157:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 2158:
      if (lookahead == 't') ADVANCE(2404);
      END_STATE();
    case 2159:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2160:
      if (lookahead == 'c') ADVANCE(2405);
      END_STATE();
    case 2161:
      if (lookahead == 't') ADVANCE(2406);
      END_STATE();
    case 2162:
      if (lookahead == 't') ADVANCE(2407);
      END_STATE();
    case 2163:
      if (lookahead == 'c') ADVANCE(2408);
      END_STATE();
    case 2164:
      if (lookahead == 'd') ADVANCE(2409);
      END_STATE();
    case 2165:
      if (lookahead == 'a') ADVANCE(2410);
      END_STATE();
    case 2166:
      if (lookahead == 't') ADVANCE(2411);
      END_STATE();
    case 2167:
      if (lookahead == 'l') ADVANCE(2412);
      END_STATE();
    case 2168:
      if (lookahead == 'i') ADVANCE(2413);
      END_STATE();
    case 2169:
      if (lookahead == 'r') ADVANCE(2414);
      END_STATE();
    case 2170:
      if (lookahead == 'C') ADVANCE(2415);
      if (lookahead == 'F') ADVANCE(2416);
      END_STATE();
    case 2171:
      if (lookahead == 's') ADVANCE(2417);
      END_STATE();
    case 2172:
      if (lookahead == 'm') ADVANCE(2418);
      END_STATE();
    case 2173:
      if (lookahead == 'o') ADVANCE(2419);
      END_STATE();
    case 2174:
      if (lookahead == 'u') ADVANCE(2420);
      END_STATE();
    case 2175:
      if (lookahead == 'a') ADVANCE(2421);
      END_STATE();
    case 2176:
      if (lookahead == 'h') ADVANCE(2422);
      END_STATE();
    case 2177:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2178:
      if (lookahead == 'a') ADVANCE(2423);
      END_STATE();
    case 2179:
      if (lookahead == 'n') ADVANCE(2424);
      END_STATE();
    case 2180:
      if (lookahead == 'g') ADVANCE(2425);
      END_STATE();
    case 2181:
      if (lookahead == 'n') ADVANCE(2426);
      END_STATE();
    case 2182:
      if (lookahead == 's') ADVANCE(2427);
      END_STATE();
    case 2183:
      if (lookahead == 'n') ADVANCE(2428);
      END_STATE();
    case 2184:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2185:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 2186:
      if (lookahead == 'p') ADVANCE(2429);
      END_STATE();
    case 2187:
      if (lookahead == 'f') ADVANCE(2430);
      END_STATE();
    case 2188:
      if (lookahead == 'c') ADVANCE(2431);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(anon_sym_SolarConstant);
      END_STATE();
    case 2190:
      if (lookahead == 'c') ADVANCE(2432);
      END_STATE();
    case 2191:
      if (lookahead == 'A') ADVANCE(2433);
      if (lookahead == 'C') ADVANCE(2434);
      if (lookahead == 'D') ADVANCE(2435);
      if (lookahead == 'F') ADVANCE(2436);
      if (lookahead == 'I') ADVANCE(2437);
      if (lookahead == 'K') ADVANCE(2438);
      if (lookahead == 'O') ADVANCE(2439);
      if (lookahead == 'R') ADVANCE(2440);
      if (lookahead == 'S') ADVANCE(2441);
      if (lookahead == 'T') ADVANCE(2442);
      END_STATE();
    case 2192:
      if (lookahead == 'C') ADVANCE(2443);
      END_STATE();
    case 2193:
      if (lookahead == 'u') ADVANCE(2444);
      END_STATE();
    case 2194:
      if (lookahead == 'e') ADVANCE(2445);
      END_STATE();
    case 2195:
      if (lookahead == 'G') ADVANCE(2446);
      END_STATE();
    case 2196:
      if (lookahead == 'b') ADVANCE(2447);
      END_STATE();
    case 2197:
      if (lookahead == 'r') ADVANCE(2448);
      END_STATE();
    case 2198:
      if (lookahead == 't') ADVANCE(2449);
      END_STATE();
    case 2199:
      if (lookahead == 'n') ADVANCE(2450);
      END_STATE();
    case 2200:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 2201:
      if (lookahead == 'e') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2452);
      END_STATE();
    case 2202:
      if (lookahead == 'a') ADVANCE(2453);
      END_STATE();
    case 2203:
      if (lookahead == 'c') ADVANCE(2454);
      END_STATE();
    case 2204:
      if (lookahead == 'a') ADVANCE(2455);
      END_STATE();
    case 2205:
      if (lookahead == 't') ADVANCE(2456);
      END_STATE();
    case 2206:
      if (lookahead == 'n') ADVANCE(2457);
      END_STATE();
    case 2207:
      if (lookahead == 'a') ADVANCE(2458);
      END_STATE();
    case 2208:
      if (lookahead == 'x') ADVANCE(2459);
      END_STATE();
    case 2209:
      if (lookahead == 'f') ADVANCE(2460);
      END_STATE();
    case 2210:
      if (lookahead == 't') ADVANCE(2461);
      END_STATE();
    case 2211:
      if (lookahead == 'p') ADVANCE(2462);
      END_STATE();
    case 2212:
      if (lookahead == 't') ADVANCE(2463);
      END_STATE();
    case 2213:
      if (lookahead == 't') ADVANCE(2464);
      END_STATE();
    case 2214:
      if (lookahead == 't') ADVANCE(2465);
      END_STATE();
    case 2215:
      if (lookahead == 't') ADVANCE(2466);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(anon_sym_TotalContents);
      END_STATE();
    case 2217:
      if (lookahead == 'u') ADVANCE(2467);
      END_STATE();
    case 2218:
      if (lookahead == 'p') ADVANCE(2468);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(anon_sym_TotalQuantity);
      END_STATE();
    case 2220:
      if (lookahead == 'd') ADVANCE(2469);
      END_STATE();
    case 2221:
      if (lookahead == 't') ADVANCE(2470);
      END_STATE();
    case 2222:
      if (lookahead == 'i') ADVANCE(2471);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_VerticalRatio);
      END_STATE();
    case 2224:
      if (lookahead == 'd') ADVANCE(2472);
      END_STATE();
    case 2225:
      if (lookahead == 'C') ADVANCE(2473);
      END_STATE();
    case 2226:
      if (lookahead == 'i') ADVANCE(2474);
      END_STATE();
    case 2227:
      if (lookahead == 'u') ADVANCE(2475);
      END_STATE();
    case 2228:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2229:
      if (lookahead == 'l') ADVANCE(2476);
      END_STATE();
    case 2230:
      if (lookahead == 's') ADVANCE(2477);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(anon_sym_AlignmentError);
      END_STATE();
    case 2232:
      if (lookahead == 'i') ADVANCE(2478);
      END_STATE();
    case 2233:
      if (lookahead == 't') ADVANCE(2479);
      END_STATE();
    case 2234:
      if (lookahead == 't') ADVANCE(2480);
      END_STATE();
    case 2235:
      if (lookahead == 'd') ADVANCE(2481);
      END_STATE();
    case 2236:
      if (lookahead == 't') ADVANCE(2482);
      END_STATE();
    case 2237:
      if (lookahead == 't') ADVANCE(2483);
      END_STATE();
    case 2238:
      if (lookahead == 'u') ADVANCE(2484);
      END_STATE();
    case 2239:
      if (lookahead == 'o') ADVANCE(2485);
      END_STATE();
    case 2240:
      if (lookahead == 'h') ADVANCE(2486);
      END_STATE();
    case 2241:
      if (lookahead == 'M') ADVANCE(2487);
      END_STATE();
    case 2242:
      if (lookahead == 'e') ADVANCE(2488);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(anon_sym_DrillCondition);
      END_STATE();
    case 2244:
      if (lookahead == 'o') ADVANCE(2489);
      END_STATE();
    case 2245:
      if (lookahead == 't') ADVANCE(2490);
      END_STATE();
    case 2246:
      if (lookahead == 'p') ADVANCE(2491);
      END_STATE();
    case 2247:
      if (lookahead == 'i') ADVANCE(2492);
      END_STATE();
    case 2248:
      if (lookahead == 'a') ADVANCE(2493);
      if (lookahead == 'c') ADVANCE(2494);
      END_STATE();
    case 2249:
      if (lookahead == 'c') ADVANCE(2495);
      END_STATE();
    case 2250:
      if (lookahead == 'i') ADVANCE(2496);
      END_STATE();
    case 2251:
      if (lookahead == 'y') ADVANCE(2497);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(anon_sym_ExportQuantity);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(anon_sym_ExportSlotHash);
      END_STATE();
    case 2254:
      if (lookahead == 'p') ADVANCE(2498);
      END_STATE();
    case 2255:
      if (lookahead == 'u') ADVANCE(2499);
      END_STATE();
    case 2256:
      if (lookahead == 'D') ADVANCE(2500);
      END_STATE();
    case 2257:
      if (lookahead == 'e') ADVANCE(2501);
      END_STATE();
    case 2258:
      if (lookahead == 'C') ADVANCE(2502);
      if (lookahead == 'H') ADVANCE(2503);
      if (lookahead == 'N') ADVANCE(2504);
      if (lookahead == 'O') ADVANCE(2505);
      if (lookahead == 'P') ADVANCE(2506);
      if (lookahead == 'V') ADVANCE(2507);
      END_STATE();
    case 2259:
      if (lookahead == 'e') ADVANCE(2508);
      END_STATE();
    case 2260:
      if (lookahead == 's') ADVANCE(2509);
      END_STATE();
    case 2261:
      if (lookahead == 'a') ADVANCE(2510);
      if (lookahead == 'e') ADVANCE(2511);
      END_STATE();
    case 2262:
      if (lookahead == 'n') ADVANCE(2512);
      END_STATE();
    case 2263:
      if (lookahead == 'l') ADVANCE(2513);
      END_STATE();
    case 2264:
      if (lookahead == 'o') ADVANCE(2514);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(anon_sym_ImportQuantity);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(anon_sym_ImportSlotHash);
      END_STATE();
    case 2267:
      if (lookahead == 'p') ADVANCE(2515);
      END_STATE();
    case 2268:
      if (lookahead == 'r') ADVANCE(2516);
      END_STATE();
    case 2269:
      if (lookahead == 'C') ADVANCE(2517);
      if (lookahead == 'D') ADVANCE(2518);
      if (lookahead == 'E') ADVANCE(2519);
      if (lookahead == 'F') ADVANCE(2520);
      if (lookahead == 'G') ADVANCE(2521);
      if (lookahead == 'H') ADVANCE(2522);
      if (lookahead == 'L') ADVANCE(2523);
      if (lookahead == 'M') ADVANCE(2524);
      if (lookahead == 'N') ADVANCE(2525);
      if (lookahead == 'O') ADVANCE(2526);
      if (lookahead == 'P') ADVANCE(2527);
      if (lookahead == 'Q') ADVANCE(2528);
      if (lookahead == 'R') ADVANCE(2529);
      if (lookahead == 'S') ADVANCE(2530);
      if (lookahead == 'T') ADVANCE(2531);
      if (lookahead == 'V') ADVANCE(2532);
      END_STATE();
    case 2270:
      if (lookahead == 'l') ADVANCE(2533);
      END_STATE();
    case 2271:
      if (lookahead == 'v') ADVANCE(2534);
      END_STATE();
    case 2272:
      if (lookahead == 'e') ADVANCE(2535);
      END_STATE();
    case 2273:
      if (lookahead == 'n') ADVANCE(2536);
      END_STATE();
    case 2274:
      if (lookahead == 'L') ADVANCE(2537);
      if (lookahead == 'S') ADVANCE(2538);
      END_STATE();
    case 2275:
      if (lookahead == 'T') ADVANCE(2539);
      END_STATE();
    case 2276:
      if (lookahead == 's') ADVANCE(2540);
      END_STATE();
    case 2277:
      if (lookahead == 'n') ADVANCE(2541);
      END_STATE();
    case 2278:
      if (lookahead == 'g') ADVANCE(2542);
      if (lookahead == 't') ADVANCE(2543);
      END_STATE();
    case 2279:
      if (lookahead == 'r') ADVANCE(2544);
      END_STATE();
    case 2280:
      if (lookahead == 'e') ADVANCE(2545);
      END_STATE();
    case 2281:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 2282:
      if (lookahead == 'u') ADVANCE(2546);
      END_STATE();
    case 2283:
      if (lookahead == 'l') ADVANCE(2547);
      END_STATE();
    case 2284:
      if (lookahead == 'a') ADVANCE(2548);
      END_STATE();
    case 2285:
      if (lookahead == 'e') ADVANCE(2549);
      END_STATE();
    case 2286:
      if (lookahead == 'i') ADVANCE(2550);
      END_STATE();
    case 2287:
      if (lookahead == 'i') ADVANCE(2551);
      END_STATE();
    case 2288:
      if (lookahead == 'o') ADVANCE(2552);
      END_STATE();
    case 2289:
      if (lookahead == 'a') ADVANCE(2553);
      END_STATE();
    case 2290:
      if (lookahead == 'l') ADVANCE(2554);
      END_STATE();
    case 2291:
      if (lookahead == 'a') ADVANCE(2555);
      END_STATE();
    case 2292:
      if (lookahead == 'n') ADVANCE(2556);
      END_STATE();
    case 2293:
      if (lookahead == 'a') ADVANCE(2557);
      END_STATE();
    case 2294:
      if (lookahead == 't') ADVANCE(2558);
      END_STATE();
    case 2295:
      if (lookahead == 'r') ADVANCE(2559);
      END_STATE();
    case 2296:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 2297:
      if (lookahead == 'u') ADVANCE(2560);
      END_STATE();
    case 2298:
      if (lookahead == 'r') ADVANCE(2561);
      END_STATE();
    case 2299:
      if (lookahead == 'r') ADVANCE(2562);
      END_STATE();
    case 2300:
      if (lookahead == 'h') ADVANCE(2563);
      END_STATE();
    case 2301:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 2302:
      if (lookahead == 'e') ADVANCE(2564);
      END_STATE();
    case 2303:
      if (lookahead == 'a') ADVANCE(2565);
      END_STATE();
    case 2304:
      if (lookahead == 'e') ADVANCE(2566);
      END_STATE();
    case 2305:
      if (lookahead == 'z') ADVANCE(2567);
      END_STATE();
    case 2306:
      if (lookahead == 'r') ADVANCE(2568);
      END_STATE();
    case 2307:
      if (lookahead == 'i') ADVANCE(2569);
      END_STATE();
    case 2308:
      if (lookahead == 'x') ADVANCE(434);
      END_STATE();
    case 2309:
      if (lookahead == 'r') ADVANCE(2570);
      END_STATE();
    case 2310:
      if (lookahead == 'N') ADVANCE(2571);
      END_STATE();
    case 2311:
      if (lookahead == 'a') ADVANCE(2572);
      END_STATE();
    case 2312:
      if (lookahead == 'm') ADVANCE(2573);
      END_STATE();
    case 2313:
      if (lookahead == 'a') ADVANCE(2574);
      if (lookahead == 'd') ADVANCE(2575);
      END_STATE();
    case 2314:
      if (lookahead == 'm') ADVANCE(2576);
      END_STATE();
    case 2315:
      if (lookahead == 'o') ADVANCE(2577);
      END_STATE();
    case 2316:
      if (lookahead == 'W') ADVANCE(2578);
      END_STATE();
    case 2317:
      if (lookahead == 'a') ADVANCE(2579);
      END_STATE();
    case 2318:
      if (lookahead == 't') ADVANCE(2580);
      END_STATE();
    case 2319:
      if (lookahead == 'n') ADVANCE(2581);
      END_STATE();
    case 2320:
      if (lookahead == 'u') ADVANCE(2582);
      END_STATE();
    case 2321:
      if (lookahead == 'e') ADVANCE(2583);
      END_STATE();
    case 2322:
      if (lookahead == 't') ADVANCE(2584);
      END_STATE();
    case 2323:
      if (lookahead == 't') ADVANCE(2585);
      END_STATE();
    case 2324:
      if (lookahead == 'r') ADVANCE(2586);
      END_STATE();
    case 2325:
      if (lookahead == 'a') ADVANCE(2587);
      END_STATE();
    case 2326:
      if (lookahead == 's') ADVANCE(2588);
      END_STATE();
    case 2327:
      if (lookahead == 'r') ADVANCE(2589);
      END_STATE();
    case 2328:
      if (lookahead == 't') ADVANCE(2590);
      END_STATE();
    case 2329:
      if (lookahead == 'o') ADVANCE(2591);
      END_STATE();
    case 2330:
      if (lookahead == 't') ADVANCE(2592);
      END_STATE();
    case 2331:
      if (lookahead == 'e') ADVANCE(2593);
      END_STATE();
    case 2332:
      if (lookahead == 'p') ADVANCE(2594);
      END_STATE();
    case 2333:
      if (lookahead == 'r') ADVANCE(2595);
      END_STATE();
    case 2334:
      if (lookahead == 'e') ADVANCE(2596);
      if (lookahead == 'i') ADVANCE(2597);
      END_STATE();
    case 2335:
      if (lookahead == 'r') ADVANCE(2598);
      END_STATE();
    case 2336:
      if (lookahead == 'n') ADVANCE(2599);
      END_STATE();
    case 2337:
      if (lookahead == 'M') ADVANCE(2600);
      END_STATE();
    case 2338:
      if (lookahead == 'i') ADVANCE(2601);
      END_STATE();
    case 2339:
      if (lookahead == 'a') ADVANCE(2602);
      END_STATE();
    case 2340:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_enum);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 2342:
      if (lookahead == 'r') ADVANCE(2603);
      END_STATE();
    case 2343:
      if (lookahead == 'd') ADVANCE(2604);
      END_STATE();
    case 2344:
      if (lookahead == 's') ADVANCE(2605);
      END_STATE();
    case 2345:
      if (lookahead == 'e') ADVANCE(2606);
      END_STATE();
    case 2346:
      if (lookahead == 'e') ADVANCE(2607);
      END_STATE();
    case 2347:
      if (lookahead == 'e') ADVANCE(2608);
      END_STATE();
    case 2348:
      if (lookahead == 't') ADVANCE(2609);
      END_STATE();
    case 2349:
      if (lookahead == 's') ADVANCE(2610);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(2611);
      END_STATE();
    case 2351:
      if (lookahead == 'l') ADVANCE(2612);
      END_STATE();
    case 2352:
      if (lookahead == 'A') ADVANCE(2613);
      END_STATE();
    case 2353:
      if (lookahead == 'c') ADVANCE(2614);
      END_STATE();
    case 2354:
      if (lookahead == 'i') ADVANCE(2615);
      END_STATE();
    case 2355:
      if (lookahead == 'm') ADVANCE(2616);
      END_STATE();
    case 2356:
      if (lookahead == 's') ADVANCE(2617);
      END_STATE();
    case 2357:
      if (lookahead == 'h') ADVANCE(2618);
      END_STATE();
    case 2358:
      if (lookahead == 'i') ADVANCE(2619);
      END_STATE();
    case 2359:
      if (lookahead == 'R') ADVANCE(2620);
      END_STATE();
    case 2360:
      if (lookahead == 'a') ADVANCE(2621);
      END_STATE();
    case 2361:
      if (lookahead == 'u') ADVANCE(2622);
      END_STATE();
    case 2362:
      if (lookahead == 'i') ADVANCE(2623);
      END_STATE();
    case 2363:
      if (lookahead == 'C') ADVANCE(2624);
      END_STATE();
    case 2364:
      if (lookahead == 'n') ADVANCE(2625);
      END_STATE();
    case 2365:
      if (lookahead == 'p') ADVANCE(2626);
      END_STATE();
    case 2366:
      if (lookahead == 't') ADVANCE(2627);
      END_STATE();
    case 2367:
      if (lookahead == 'y') ADVANCE(2628);
      END_STATE();
    case 2368:
      if (lookahead == 'n') ADVANCE(2629);
      END_STATE();
    case 2369:
      if (lookahead == 'g') ADVANCE(2630);
      END_STATE();
    case 2370:
      if (lookahead == 'h') ADVANCE(2631);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(anon_sym_PowerPotential);
      END_STATE();
    case 2372:
      if (lookahead == 'e') ADVANCE(2632);
      END_STATE();
    case 2373:
      if (lookahead == 'a') ADVANCE(2633);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(anon_sym_PressureInput2);
      END_STATE();
    case 2375:
      if (lookahead == 'a') ADVANCE(2634);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(anon_sym_PressureOutput);
      if (lookahead == '2') ADVANCE(2635);
      END_STATE();
    case 2377:
      if (lookahead == 'g') ADVANCE(2636);
      END_STATE();
    case 2378:
      if (lookahead == 'x') ADVANCE(2637);
      END_STATE();
    case 2379:
      if (lookahead == 'b') ADVANCE(2638);
      END_STATE();
    case 2380:
      if (lookahead == 'r') ADVANCE(2639);
      END_STATE();
    case 2381:
      if (lookahead == 'r') ADVANCE(2640);
      END_STATE();
    case 2382:
      if (lookahead == 'g') ADVANCE(2641);
      END_STATE();
    case 2383:
      if (lookahead == 'l') ADVANCE(2642);
      END_STATE();
    case 2384:
      if (lookahead == 'a') ADVANCE(2643);
      END_STATE();
    case 2385:
      if (lookahead == 'n') ADVANCE(2644);
      END_STATE();
    case 2386:
      if (lookahead == 'u') ADVANCE(2645);
      END_STATE();
    case 2387:
      if (lookahead == 'i') ADVANCE(2646);
      END_STATE();
    case 2388:
      if (lookahead == 'u') ADVANCE(2647);
      END_STATE();
    case 2389:
      if (lookahead == 'p') ADVANCE(2648);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(anon_sym_RatioPollutant);
      if (lookahead == 'I') ADVANCE(2649);
      if (lookahead == 'O') ADVANCE(2650);
      END_STATE();
    case 2391:
      if (lookahead == 'a') ADVANCE(2651);
      END_STATE();
    case 2392:
      if (lookahead == 't') ADVANCE(2652);
      END_STATE();
    case 2393:
      if (lookahead == 'u') ADVANCE(2653);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_RatioVolatiles);
      if (lookahead == 'I') ADVANCE(2654);
      if (lookahead == 'O') ADVANCE(2655);
      END_STATE();
    case 2395:
      if (lookahead == 't') ADVANCE(2656);
      END_STATE();
    case 2396:
      if (lookahead == 'u') ADVANCE(2657);
      END_STATE();
    case 2397:
      if (lookahead == 'e') ADVANCE(2658);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(anon_sym_ReturnFuelCost);
      END_STATE();
    case 2399:
      if (lookahead == 's') ADVANCE(2659);
      END_STATE();
    case 2400:
      if (lookahead == 'a') ADVANCE(2660);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(anon_sym_SignalStrength);
      END_STATE();
    case 2402:
      if (lookahead == 's') ADVANCE(2661);
      END_STATE();
    case 2403:
      if (lookahead == 'i') ADVANCE(2662);
      END_STATE();
    case 2404:
      if (lookahead == 'e') ADVANCE(2663);
      END_STATE();
    case 2405:
      if (lookahead == 'k') ADVANCE(2664);
      END_STATE();
    case 2406:
      if (lookahead == 'l') ADVANCE(2665);
      END_STATE();
    case 2407:
      if (lookahead == 'r') ADVANCE(2666);
      END_STATE();
    case 2408:
      if (lookahead == 'u') ADVANCE(2667);
      END_STATE();
    case 2409:
      if (lookahead == 'i') ADVANCE(2668);
      END_STATE();
    case 2410:
      if (lookahead == 'D') ADVANCE(2669);
      END_STATE();
    case 2411:
      if (lookahead == 'C') ADVANCE(2670);
      END_STATE();
    case 2412:
      if (lookahead == 'l') ADVANCE(2671);
      END_STATE();
    case 2413:
      if (lookahead == 't') ADVANCE(2672);
      END_STATE();
    case 2414:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2415:
      if (lookahead == 'a') ADVANCE(2673);
      END_STATE();
    case 2416:
      if (lookahead == 'i') ADVANCE(2674);
      END_STATE();
    case 2417:
      if (lookahead == 's') ADVANCE(2675);
      END_STATE();
    case 2418:
      if (lookahead == 'e') ADVANCE(2676);
      END_STATE();
    case 2419:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2420:
      if (lookahead == 'i') ADVANCE(2677);
      END_STATE();
    case 2421:
      if (lookahead == 'z') ADVANCE(2678);
      END_STATE();
    case 2422:
      if (lookahead == 'e') ADVANCE(2679);
      END_STATE();
    case 2423:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 2424:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2425:
      if (lookahead == 'r') ADVANCE(2680);
      END_STATE();
    case 2426:
      if (lookahead == 'n') ADVANCE(2681);
      END_STATE();
    case 2427:
      if (lookahead == 'o') ADVANCE(2682);
      END_STATE();
    case 2428:
      if (lookahead == 'd') ADVANCE(2683);
      END_STATE();
    case 2429:
      if (lookahead == 'e') ADVANCE(2684);
      END_STATE();
    case 2430:
      if (lookahead == 'o') ADVANCE(2685);
      END_STATE();
    case 2431:
      if (lookahead == 'k') ADVANCE(2686);
      END_STATE();
    case 2432:
      if (lookahead == 'e') ADVANCE(2687);
      END_STATE();
    case 2433:
      if (lookahead == 'p') ADVANCE(2688);
      if (lookahead == 't') ADVANCE(2689);
      END_STATE();
    case 2434:
      if (lookahead == 'l') ADVANCE(2690);
      END_STATE();
    case 2435:
      if (lookahead == 'e') ADVANCE(2691);
      END_STATE();
    case 2436:
      if (lookahead == 'o') ADVANCE(2692);
      END_STATE();
    case 2437:
      if (lookahead == 'c') ADVANCE(2693);
      END_STATE();
    case 2438:
      if (lookahead == 'i') ADVANCE(2694);
      END_STATE();
    case 2439:
      if (lookahead == 'r') ADVANCE(2695);
      END_STATE();
    case 2440:
      if (lookahead == 'e') ADVANCE(2696);
      END_STATE();
    case 2441:
      if (lookahead == 't') ADVANCE(2697);
      END_STATE();
    case 2442:
      if (lookahead == 'o') ADVANCE(2698);
      END_STATE();
    case 2443:
      if (lookahead == 'y') ADVANCE(2699);
      END_STATE();
    case 2444:
      if (lookahead == 'r') ADVANCE(2700);
      END_STATE();
    case 2445:
      if (lookahead == 'F') ADVANCE(2701);
      END_STATE();
    case 2446:
      if (lookahead == 'o') ADVANCE(2702);
      END_STATE();
    case 2447:
      if (lookahead == 'o') ADVANCE(2703);
      END_STATE();
    case 2448:
      if (lookahead == 'A') ADVANCE(2704);
      END_STATE();
    case 2449:
      if (lookahead == 'i') ADVANCE(2705);
      END_STATE();
    case 2450:
      if (lookahead == 't') ADVANCE(2706);
      END_STATE();
    case 2451:
      if (lookahead == 'H') ADVANCE(2707);
      if (lookahead == 'L') ADVANCE(2708);
      END_STATE();
    case 2452:
      if (lookahead == 's') ADVANCE(2709);
      END_STATE();
    case 2453:
      if (lookahead == 'u') ADVANCE(2710);
      END_STATE();
    case 2454:
      if (lookahead == 'o') ADVANCE(2711);
      END_STATE();
    case 2455:
      if (lookahead == 'i') ADVANCE(2712);
      END_STATE();
    case 2456:
      if (lookahead == 'u') ADVANCE(2713);
      END_STATE();
    case 2457:
      if (lookahead == 'c') ADVANCE(2714);
      END_STATE();
    case 2458:
      if (lookahead == 'n') ADVANCE(2715);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(anon_sym_TargetPadIndex);
      END_STATE();
    case 2460:
      if (lookahead == 'f') ADVANCE(2716);
      END_STATE();
    case 2461:
      if (lookahead == 'e') ADVANCE(2717);
      END_STATE();
    case 2462:
      if (lookahead == 'u') ADVANCE(2718);
      END_STATE();
    case 2463:
      if (lookahead == 'p') ADVANCE(2719);
      END_STATE();
    case 2464:
      if (lookahead == 't') ADVANCE(2720);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(anon_sym_ThrustToWeight);
      END_STATE();
    case 2466:
      if (lookahead == 'i') ADVANCE(2721);
      END_STATE();
    case 2467:
      if (lookahead == 't') ADVANCE(2722);
      END_STATE();
    case 2468:
      if (lookahead == 'u') ADVANCE(2723);
      END_STATE();
    case 2469:
      if (lookahead == 'e') ADVANCE(2724);
      END_STATE();
    case 2470:
      if (lookahead == 'u') ADVANCE(2725);
      END_STATE();
    case 2471:
      if (lookahead == 'v') ADVANCE(2726);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(anon_sym_VolumeOfLiquid);
      END_STATE();
    case 2473:
      if (lookahead == 'o') ADVANCE(2727);
      END_STATE();
    case 2474:
      if (lookahead == 'c') ADVANCE(2728);
      END_STATE();
    case 2475:
      if (lookahead == 'g') ADVANCE(2729);
      END_STATE();
    case 2476:
      if (lookahead == 'i') ADVANCE(2730);
      END_STATE();
    case 2477:
      if (lookahead == 's') ADVANCE(2731);
      END_STATE();
    case 2478:
      if (lookahead == 'n') ADVANCE(2732);
      END_STATE();
    case 2479:
      if (lookahead == 'H') ADVANCE(2733);
      END_STATE();
    case 2480:
      if (lookahead == 's') ADVANCE(2734);
      END_STATE();
    case 2481:
      if (lookahead == 's') ADVANCE(2735);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(anon_sym_CombustionInput);
      if (lookahead == '2') ADVANCE(2736);
      END_STATE();
    case 2483:
      if (lookahead == 'e') ADVANCE(2737);
      END_STATE();
    case 2484:
      if (lookahead == 't') ADVANCE(2738);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(anon_sym_CompletionRatio);
      END_STATE();
    case 2486:
      if (lookahead == 'P') ADVANCE(2739);
      END_STATE();
    case 2487:
      if (lookahead == 'o') ADVANCE(2740);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(anon_sym_DestinationCode);
      END_STATE();
    case 2489:
      if (lookahead == 'w') ADVANCE(2741);
      END_STATE();
    case 2490:
      if (lookahead == 'a') ADVANCE(2742);
      END_STATE();
    case 2491:
      if (lookahead == 'w') ADVANCE(2743);
      END_STATE();
    case 2492:
      if (lookahead == 'v') ADVANCE(2744);
      END_STATE();
    case 2493:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 2494:
      if (lookahead == 'a') ADVANCE(2745);
      END_STATE();
    case 2495:
      if (lookahead == 'o') ADVANCE(2746);
      END_STATE();
    case 2496:
      if (lookahead == 'c') ADVANCE(2747);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(anon_sym_ExhaustVelocity);
      END_STATE();
    case 2498:
      if (lookahead == 'a') ADVANCE(2748);
      END_STATE();
    case 2499:
      if (lookahead == 'l') ADVANCE(2749);
      END_STATE();
    case 2500:
      if (lookahead == 'i') ADVANCE(2750);
      END_STATE();
    case 2501:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 2502:
      if (lookahead == 'a') ADVANCE(2751);
      END_STATE();
    case 2503:
      if (lookahead == 'y') ADVANCE(2752);
      END_STATE();
    case 2504:
      if (lookahead == 'i') ADVANCE(2753);
      END_STATE();
    case 2505:
      if (lookahead == 'x') ADVANCE(2754);
      END_STATE();
    case 2506:
      if (lookahead == 'o') ADVANCE(2755);
      END_STATE();
    case 2507:
      if (lookahead == 'o') ADVANCE(2756);
      END_STATE();
    case 2508:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 2509:
      if (lookahead == 'O') ADVANCE(2757);
      END_STATE();
    case 2510:
      if (lookahead == 'n') ADVANCE(2758);
      END_STATE();
    case 2511:
      if (lookahead == 'd') ADVANCE(2759);
      END_STATE();
    case 2512:
      if (lookahead == 'e') ADVANCE(2760);
      END_STATE();
    case 2513:
      if (lookahead == 'e') ADVANCE(2761);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(anon_sym_HorizontalRatio);
      END_STATE();
    case 2515:
      if (lookahead == 'a') ADVANCE(2762);
      END_STATE();
    case 2516:
      if (lookahead == 'o') ADVANCE(2763);
      END_STATE();
    case 2517:
      if (lookahead == 'h') ADVANCE(2764);
      if (lookahead == 'l') ADVANCE(2765);
      END_STATE();
    case 2518:
      if (lookahead == 'a') ADVANCE(2766);
      END_STATE();
    case 2519:
      if (lookahead == 'f') ADVANCE(2767);
      END_STATE();
    case 2520:
      if (lookahead == 'i') ADVANCE(2768);
      END_STATE();
    case 2521:
      if (lookahead == 'r') ADVANCE(2769);
      END_STATE();
    case 2522:
      if (lookahead == 'e') ADVANCE(2770);
      END_STATE();
    case 2523:
      if (lookahead == 'i') ADVANCE(2771);
      if (lookahead == 'o') ADVANCE(2772);
      END_STATE();
    case 2524:
      if (lookahead == 'a') ADVANCE(2773);
      END_STATE();
    case 2525:
      if (lookahead == 'o') ADVANCE(2774);
      END_STATE();
    case 2526:
      if (lookahead == 'c') ADVANCE(2775);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(2776);
      END_STATE();
    case 2527:
      if (lookahead == 'r') ADVANCE(2777);
      END_STATE();
    case 2528:
      if (lookahead == 'u') ADVANCE(2778);
      END_STATE();
    case 2529:
      if (lookahead == 'e') ADVANCE(2779);
      END_STATE();
    case 2530:
      if (lookahead == 'e') ADVANCE(2780);
      if (lookahead == 'o') ADVANCE(2781);
      END_STATE();
    case 2531:
      if (lookahead == 'e') ADVANCE(2782);
      END_STATE();
    case 2532:
      if (lookahead == 'o') ADVANCE(2783);
      END_STATE();
    case 2533:
      if (lookahead == 'e') ADVANCE(2784);
      END_STATE();
    case 2534:
      if (lookahead == 'a') ADVANCE(2785);
      END_STATE();
    case 2535:
      if (lookahead == 'l') ADVANCE(2786);
      END_STATE();
    case 2536:
      if (lookahead == 'm') ADVANCE(2787);
      END_STATE();
    case 2537:
      if (lookahead == 'a') ADVANCE(2788);
      END_STATE();
    case 2538:
      if (lookahead == 'h') ADVANCE(2789);
      END_STATE();
    case 2539:
      if (lookahead == 'i') ADVANCE(2790);
      END_STATE();
    case 2540:
      if (lookahead == 't') ADVANCE(2791);
      END_STATE();
    case 2541:
      if (lookahead == 'e') ADVANCE(2792);
      END_STATE();
    case 2542:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(2793);
      END_STATE();
    case 2544:
      if (lookahead == 'M') ADVANCE(2794);
      END_STATE();
    case 2545:
      if (lookahead == 'c') ADVANCE(2795);
      END_STATE();
    case 2546:
      if (lookahead == 's') ADVANCE(2796);
      END_STATE();
    case 2547:
      if (lookahead == 'e') ADVANCE(2797);
      END_STATE();
    case 2548:
      if (lookahead == 'c') ADVANCE(2798);
      END_STATE();
    case 2549:
      if (lookahead == 'n') ADVANCE(2799);
      END_STATE();
    case 2550:
      if (lookahead == 't') ADVANCE(2800);
      END_STATE();
    case 2551:
      if (lookahead == 'n') ADVANCE(2801);
      END_STATE();
    case 2552:
      if (lookahead == 'v') ADVANCE(2802);
      END_STATE();
    case 2553:
      if (lookahead == 'n') ADVANCE(2803);
      END_STATE();
    case 2554:
      if (lookahead == 'C') ADVANCE(2804);
      END_STATE();
    case 2555:
      if (lookahead == 's') ADVANCE(2805);
      END_STATE();
    case 2556:
      if (lookahead == 't') ADVANCE(2806);
      END_STATE();
    case 2557:
      if (lookahead == 't') ADVANCE(2807);
      END_STATE();
    case 2558:
      if (lookahead == 'y') ADVANCE(2808);
      END_STATE();
    case 2559:
      if (lookahead == 'o') ADVANCE(2809);
      END_STATE();
    case 2560:
      if (lookahead == 's') ADVANCE(2810);
      END_STATE();
    case 2561:
      if (lookahead == 't') ADVANCE(2811);
      END_STATE();
    case 2562:
      if (lookahead == 'a') ADVANCE(2812);
      END_STATE();
    case 2563:
      if (lookahead == 't') ADVANCE(2813);
      END_STATE();
    case 2564:
      if (lookahead == 'W') ADVANCE(2814);
      END_STATE();
    case 2565:
      if (lookahead == 'r') ADVANCE(2815);
      END_STATE();
    case 2566:
      if (lookahead == 's') ADVANCE(2816);
      END_STATE();
    case 2567:
      if (lookahead == 'o') ADVANCE(2817);
      END_STATE();
    case 2568:
      if (lookahead == 't') ADVANCE(2818);
      END_STATE();
    case 2569:
      if (lookahead == 'n') ADVANCE(2819);
      END_STATE();
    case 2570:
      if (lookahead == 'r') ADVANCE(2820);
      END_STATE();
    case 2571:
      if (lookahead == 'u') ADVANCE(2821);
      END_STATE();
    case 2572:
      if (lookahead == 'l') ADVANCE(2822);
      END_STATE();
    case 2573:
      if (lookahead == 'u') ADVANCE(2823);
      END_STATE();
    case 2574:
      if (lookahead == 'b') ADVANCE(2824);
      END_STATE();
    case 2575:
      if (lookahead == 'Q') ADVANCE(2825);
      END_STATE();
    case 2576:
      if (lookahead == 'u') ADVANCE(2826);
      END_STATE();
    case 2577:
      if (lookahead == 'i') ADVANCE(2827);
      END_STATE();
    case 2578:
      if (lookahead == 'e') ADVANCE(2828);
      END_STATE();
    case 2579:
      if (lookahead == 't') ADVANCE(2829);
      END_STATE();
    case 2580:
      if (lookahead == 'P') ADVANCE(2830);
      END_STATE();
    case 2581:
      if (lookahead == 't') ADVANCE(2831);
      END_STATE();
    case 2582:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2583:
      if (lookahead == 'd') ADVANCE(2832);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'E') ADVANCE(2833);
      if (lookahead == 'G') ADVANCE(2834);
      if (lookahead == 'H') ADVANCE(2835);
      END_STATE();
    case 2585:
      if (lookahead == 'i') ADVANCE(2836);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(2837);
      if (lookahead == 'G') ADVANCE(2838);
      if (lookahead == 'P') ADVANCE(2839);
      if (lookahead == 'R') ADVANCE(2840);
      END_STATE();
    case 2587:
      if (lookahead == 'b') ADVANCE(2841);
      END_STATE();
    case 2588:
      if (lookahead == 'u') ADVANCE(2842);
      END_STATE();
    case 2589:
      if (lookahead == 'e') ADVANCE(2843);
      END_STATE();
    case 2590:
      if (lookahead == 'i') ADVANCE(2844);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'C') ADVANCE(2845);
      if (lookahead == 'H') ADVANCE(2846);
      if (lookahead == 'L') ADVANCE(2847);
      if (lookahead == 'N') ADVANCE(2848);
      if (lookahead == 'O') ADVANCE(2849);
      if (lookahead == 'P') ADVANCE(2850);
      if (lookahead == 'S') ADVANCE(2851);
      if (lookahead == 'V') ADVANCE(2852);
      if (lookahead == 'W') ADVANCE(2853);
      END_STATE();
    case 2592:
      if (lookahead == 'r') ADVANCE(2854);
      END_STATE();
    case 2593:
      if (lookahead == 'n') ADVANCE(2855);
      END_STATE();
    case 2594:
      if (lookahead == 'e') ADVANCE(2856);
      END_STATE();
    case 2595:
      if (lookahead == 'e') ADVANCE(2857);
      END_STATE();
    case 2596:
      if (lookahead == 's') ADVANCE(2858);
      END_STATE();
    case 2597:
      if (lookahead == 'r') ADVANCE(2859);
      END_STATE();
    case 2598:
      if (lookahead == 'n') ADVANCE(2860);
      END_STATE();
    case 2599:
      if (lookahead == 'e') ADVANCE(2861);
      END_STATE();
    case 2600:
      if (lookahead == 'a') ADVANCE(2862);
      END_STATE();
    case 2601:
      if (lookahead == 'n') ADVANCE(2863);
      END_STATE();
    case 2602:
      if (lookahead == 'l') ADVANCE(2864);
      END_STATE();
    case 2603:
      if (lookahead == 'A') ADVANCE(2865);
      if (lookahead == 'I') ADVANCE(2866);
      END_STATE();
    case 2604:
      if (lookahead == 'A') ADVANCE(2867);
      END_STATE();
    case 2605:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2606:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 2607:
      if (lookahead == 't') ADVANCE(2868);
      END_STATE();
    case 2608:
      if (lookahead == 'r') ADVANCE(2869);
      END_STATE();
    case 2609:
      if (lookahead == 't') ADVANCE(2870);
      END_STATE();
    case 2610:
      if (lookahead == 't') ADVANCE(2871);
      END_STATE();
    case 2611:
      if (lookahead == 'o') ADVANCE(2872);
      END_STATE();
    case 2612:
      if (lookahead == 'M') ADVANCE(2873);
      if (lookahead == 'Q') ADVANCE(2874);
      END_STATE();
    case 2613:
      if (lookahead == 'n') ADVANCE(2875);
      END_STATE();
    case 2614:
      if (lookahead == 'i') ADVANCE(2876);
      END_STATE();
    case 2615:
      if (lookahead == 'c') ADVANCE(2877);
      END_STATE();
    case 2616:
      if (lookahead == 'e') ADVANCE(2878);
      END_STATE();
    case 2617:
      if (lookahead == 'R') ADVANCE(2879);
      END_STATE();
    case 2618:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2619:
      if (lookahead == 'n') ADVANCE(2880);
      END_STATE();
    case 2620:
      if (lookahead == 'e') ADVANCE(2881);
      END_STATE();
    case 2621:
      if (lookahead == 'c') ADVANCE(2882);
      END_STATE();
    case 2622:
      if (lookahead == 'e') ADVANCE(2883);
      END_STATE();
    case 2623:
      if (lookahead == 'n') ADVANCE(2884);
      END_STATE();
    case 2624:
      if (lookahead == 'o') ADVANCE(2885);
      END_STATE();
    case 2625:
      if (lookahead == 't') ADVANCE(2886);
      END_STATE();
    case 2626:
      if (lookahead == 'e') ADVANCE(2887);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(anon_sym_OverShootTarget);
      END_STATE();
    case 2628:
      if (lookahead == '1') ADVANCE(2888);
      if (lookahead == '2') ADVANCE(2889);
      if (lookahead == '3') ADVANCE(2890);
      if (lookahead == '4') ADVANCE(2891);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(anon_sym_PowerGeneration);
      END_STATE();
    case 2630:
      if (lookahead == 'e') ADVANCE(2892);
      if (lookahead == 'i') ADVANCE(2893);
      END_STATE();
    case 2631:
      if (lookahead == 'a') ADVANCE(2894);
      END_STATE();
    case 2632:
      if (lookahead == 'n') ADVANCE(2895);
      END_STATE();
    case 2633:
      if (lookahead == 'l') ADVANCE(2896);
      END_STATE();
    case 2634:
      if (lookahead == 'l') ADVANCE(2897);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(anon_sym_PressureOutput2);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(anon_sym_PressureSetting);
      END_STATE();
    case 2637:
      if (lookahead == 'i') ADVANCE(2898);
      END_STATE();
    case 2638:
      if (lookahead == 'o') ADVANCE(2899);
      END_STATE();
    case 2639:
      if (lookahead == 'o') ADVANCE(2900);
      END_STATE();
    case 2640:
      if (lookahead == 'o') ADVANCE(2901);
      END_STATE();
    case 2641:
      if (lookahead == 'e') ADVANCE(2902);
      END_STATE();
    case 2642:
      if (lookahead == 'u') ADVANCE(2903);
      END_STATE();
    case 2643:
      if (lookahead == 't') ADVANCE(2904);
      END_STATE();
    case 2644:
      if (lookahead == 'p') ADVANCE(2905);
      END_STATE();
    case 2645:
      if (lookahead == 't') ADVANCE(2906);
      END_STATE();
    case 2646:
      if (lookahead == 'd') ADVANCE(2907);
      END_STATE();
    case 2647:
      if (lookahead == 't') ADVANCE(2908);
      END_STATE();
    case 2648:
      if (lookahead == 'u') ADVANCE(2909);
      END_STATE();
    case 2649:
      if (lookahead == 'n') ADVANCE(2910);
      END_STATE();
    case 2650:
      if (lookahead == 'u') ADVANCE(2911);
      END_STATE();
    case 2651:
      if (lookahead == 't') ADVANCE(2912);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(anon_sym_RatioSteamInput);
      if (lookahead == '2') ADVANCE(2913);
      END_STATE();
    case 2653:
      if (lookahead == 't') ADVANCE(2914);
      END_STATE();
    case 2654:
      if (lookahead == 'n') ADVANCE(2915);
      END_STATE();
    case 2655:
      if (lookahead == 'u') ADVANCE(2916);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(anon_sym_RatioWaterInput);
      if (lookahead == '2') ADVANCE(2917);
      END_STATE();
    case 2657:
      if (lookahead == 't') ADVANCE(2918);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(anon_sym_ReEntryAltitude);
      END_STATE();
    case 2659:
      if (lookahead == 'h') ADVANCE(2919);
      END_STATE();
    case 2660:
      if (lookahead == 's') ADVANCE(2920);
      END_STATE();
    case 2661:
      if (lookahead == 's') ADVANCE(2921);
      END_STATE();
    case 2662:
      if (lookahead == 'a') ADVANCE(2922);
      END_STATE();
    case 2663:
      if (lookahead == 'r') ADVANCE(2923);
      END_STATE();
    case 2664:
      if (lookahead == 'e') ADVANCE(2924);
      END_STATE();
    case 2665:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2666:
      if (lookahead == 'i') ADVANCE(2925);
      END_STATE();
    case 2667:
      if (lookahead == 'i') ADVANCE(2926);
      END_STATE();
    case 2668:
      if (lookahead == 't') ADVANCE(2927);
      END_STATE();
    case 2669:
      if (lookahead == 'i') ADVANCE(2928);
      END_STATE();
    case 2670:
      if (lookahead == 'a') ADVANCE(2929);
      END_STATE();
    case 2671:
      if (lookahead == 'H') ADVANCE(2930);
      END_STATE();
    case 2672:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 2673:
      if (lookahead == 'n') ADVANCE(2931);
      END_STATE();
    case 2674:
      if (lookahead == 'l') ADVANCE(2932);
      END_STATE();
    case 2675:
      if (lookahead == 'e') ADVANCE(2933);
      END_STATE();
    case 2676:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2677:
      if (lookahead == 'd') ADVANCE(2934);
      END_STATE();
    case 2678:
      if (lookahead == 'i') ADVANCE(2935);
      END_STATE();
    case 2679:
      if (lookahead == 'r') ADVANCE(2936);
      END_STATE();
    case 2680:
      if (lookahead == 'a') ADVANCE(2937);
      END_STATE();
    case 2681:
      if (lookahead == 'i') ADVANCE(2938);
      END_STATE();
    case 2682:
      if (lookahead == 'r') ADVANCE(2939);
      END_STATE();
    case 2683:
      if (lookahead == 'C') ADVANCE(2940);
      END_STATE();
    case 2684:
      if (lookahead == 'd') ADVANCE(2941);
      END_STATE();
    case 2685:
      if (lookahead == 'r') ADVANCE(2942);
      END_STATE();
    case 2686:
      if (lookahead == 'a') ADVANCE(2943);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(anon_sym_SolarIrradiance);
      END_STATE();
    case 2688:
      if (lookahead == 'p') ADVANCE(2944);
      END_STATE();
    case 2689:
      if (lookahead == 'm') ADVANCE(2945);
      END_STATE();
    case 2690:
      if (lookahead == 'o') ADVANCE(2946);
      END_STATE();
    case 2691:
      if (lookahead == 'f') ADVANCE(2947);
      END_STATE();
    case 2692:
      if (lookahead == 'o') ADVANCE(2948);
      END_STATE();
    case 2693:
      if (lookahead == 'e') ADVANCE(2949);
      END_STATE();
    case 2694:
      if (lookahead == 't') ADVANCE(2950);
      END_STATE();
    case 2695:
      if (lookahead == 'e') ADVANCE(2951);
      END_STATE();
    case 2696:
      if (lookahead == 's') ADVANCE(2952);
      END_STATE();
    case 2697:
      if (lookahead == 'o') ADVANCE(2953);
      END_STATE();
    case 2698:
      if (lookahead == 'o') ADVANCE(2954);
      END_STATE();
    case 2699:
      if (lookahead == 'c') ADVANCE(2955);
      END_STATE();
    case 2700:
      if (lookahead == 'i') ADVANCE(2956);
      END_STATE();
    case 2701:
      if (lookahead == 'i') ADVANCE(2957);
      END_STATE();
    case 2702:
      if (lookahead == 'e') ADVANCE(2958);
      END_STATE();
    case 2703:
      if (lookahead == 'n') ADVANCE(2959);
      END_STATE();
    case 2704:
      if (lookahead == 'l') ADVANCE(2960);
      END_STATE();
    case 2705:
      if (lookahead == 'o') ADVANCE(2961);
      END_STATE();
    case 2706:
      if (lookahead == 's') ADVANCE(2962);
      END_STATE();
    case 2707:
      if (lookahead == 'i') ADVANCE(2963);
      END_STATE();
    case 2708:
      if (lookahead == 'o') ADVANCE(2964);
      END_STATE();
    case 2709:
      if (lookahead == 'i') ADVANCE(2965);
      END_STATE();
    case 2710:
      if (lookahead == 'n') ADVANCE(2966);
      END_STATE();
    case 2711:
      if (lookahead == 'm') ADVANCE(2967);
      END_STATE();
    case 2712:
      if (lookahead == 'l') ADVANCE(2968);
      END_STATE();
    case 2713:
      if (lookahead == 'r') ADVANCE(2969);
      END_STATE();
    case 2714:
      if (lookahead == 'o') ADVANCE(2970);
      END_STATE();
    case 2715:
      if (lookahead == 'd') ADVANCE(2971);
      END_STATE();
    case 2716:
      if (lookahead == 'e') ADVANCE(2972);
      END_STATE();
    case 2717:
      if (lookahead == 'r') ADVANCE(2973);
      END_STATE();
    case 2718:
      if (lookahead == 't') ADVANCE(2974);
      END_STATE();
    case 2719:
      if (lookahead == 'u') ADVANCE(2975);
      END_STATE();
    case 2720:
      if (lookahead == 'i') ADVANCE(2976);
      END_STATE();
    case 2721:
      if (lookahead == 'o') ADVANCE(2977);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(anon_sym_TotalMolesInput);
      if (lookahead == '2') ADVANCE(2978);
      END_STATE();
    case 2723:
      if (lookahead == 't') ADVANCE(2979);
      END_STATE();
    case 2724:
      if (lookahead == '.') ADVANCE(2980);
      END_STATE();
    case 2725:
      if (lookahead == 'd') ADVANCE(2981);
      END_STATE();
    case 2726:
      if (lookahead == 'e') ADVANCE(2982);
      END_STATE();
    case 2727:
      if (lookahead == 'n') ADVANCE(2983);
      END_STATE();
    case 2728:
      if (lookahead == 'i') ADVANCE(2984);
      END_STATE();
    case 2729:
      if (lookahead == 'h') ADVANCE(2985);
      END_STATE();
    case 2730:
      if (lookahead == 'n') ADVANCE(2986);
      END_STATE();
    case 2731:
      if (lookahead == 'u') ADVANCE(2987);
      END_STATE();
    case 2732:
      if (lookahead == 'g') ADVANCE(2988);
      END_STATE();
    case 2733:
      if (lookahead == 'a') ADVANCE(2989);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(anon_sym_ChartedNavPoints);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(anon_sym_CollectableGoods);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(anon_sym_CombustionInput2);
      END_STATE();
    case 2737:
      if (lookahead == 'r') ADVANCE(2990);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(anon_sym_CombustionOutput);
      if (lookahead == '2') ADVANCE(2991);
      END_STATE();
    case 2739:
      if (lookahead == 'o') ADVANCE(2992);
      END_STATE();
    case 2740:
      if (lookahead == 'd') ADVANCE(2993);
      END_STATE();
    case 2741:
      if (lookahead == 'n') ADVANCE(2994);
      END_STATE();
    case 2742:
      if (lookahead == 't') ADVANCE(2995);
      END_STATE();
    case 2743:
      if (lookahead == 'a') ADVANCE(2996);
      END_STATE();
    case 2744:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2745:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 2746:
      if (lookahead == 'n') ADVANCE(2997);
      END_STATE();
    case 2747:
      if (lookahead == 'i') ADVANCE(2998);
      END_STATE();
    case 2748:
      if (lookahead == 'n') ADVANCE(2999);
      END_STATE();
    case 2749:
      if (lookahead == 'e') ADVANCE(3000);
      END_STATE();
    case 2750:
      if (lookahead == 'o') ADVANCE(3001);
      END_STATE();
    case 2751:
      if (lookahead == 'r') ADVANCE(3002);
      END_STATE();
    case 2752:
      if (lookahead == 'd') ADVANCE(3003);
      END_STATE();
    case 2753:
      if (lookahead == 't') ADVANCE(3004);
      END_STATE();
    case 2754:
      if (lookahead == 'y') ADVANCE(3005);
      END_STATE();
    case 2755:
      if (lookahead == 'l') ADVANCE(3006);
      END_STATE();
    case 2756:
      if (lookahead == 'l') ADVANCE(3007);
      END_STATE();
    case 2757:
      if (lookahead == 'x') ADVANCE(3008);
      END_STATE();
    case 2758:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2759:
      if (lookahead == 'W') ADVANCE(3009);
      END_STATE();
    case 2760:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 2761:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2762:
      if (lookahead == 'n') ADVANCE(3010);
      END_STATE();
    case 2763:
      if (lookahead == 'g') ADVANCE(3011);
      END_STATE();
    case 2764:
      if (lookahead == 'a') ADVANCE(3012);
      END_STATE();
    case 2765:
      if (lookahead == 'a') ADVANCE(3013);
      END_STATE();
    case 2766:
      if (lookahead == 'm') ADVANCE(3014);
      END_STATE();
    case 2767:
      if (lookahead == 'f') ADVANCE(3015);
      END_STATE();
    case 2768:
      if (lookahead == 'l') ADVANCE(3016);
      END_STATE();
    case 2769:
      if (lookahead == 'o') ADVANCE(3017);
      END_STATE();
    case 2770:
      if (lookahead == 'a') ADVANCE(3018);
      END_STATE();
    case 2771:
      if (lookahead == 'n') ADVANCE(3019);
      END_STATE();
    case 2772:
      if (lookahead == 'c') ADVANCE(3020);
      END_STATE();
    case 2773:
      if (lookahead == 't') ADVANCE(3021);
      if (lookahead == 'x') ADVANCE(3022);
      END_STATE();
    case 2774:
      if (lookahead == 'n') ADVANCE(3023);
      END_STATE();
    case 2775:
      if (lookahead == 'c') ADVANCE(3024);
      END_STATE();
    case 2776:
      if (lookahead == 'e') ADVANCE(3025);
      END_STATE();
    case 2777:
      if (lookahead == 'e') ADVANCE(3026);
      END_STATE();
    case 2778:
      if (lookahead == 'a') ADVANCE(3027);
      END_STATE();
    case 2779:
      if (lookahead == 'f') ADVANCE(3028);
      END_STATE();
    case 2780:
      if (lookahead == 'e') ADVANCE(3029);
      END_STATE();
    case 2781:
      if (lookahead == 'r') ADVANCE(3030);
      END_STATE();
    case 2782:
      if (lookahead == 'm') ADVANCE(3031);
      END_STATE();
    case 2783:
      if (lookahead == 'l') ADVANCE(3032);
      END_STATE();
    case 2784:
      if (lookahead == 'r') ADVANCE(3033);
      END_STATE();
    case 2785:
      if (lookahead == 't') ADVANCE(3034);
      END_STATE();
    case 2786:
      if (lookahead == 'e') ADVANCE(3035);
      END_STATE();
    case 2787:
      if (lookahead == 'e') ADVANCE(3036);
      END_STATE();
    case 2788:
      if (lookahead == 'n') ADVANCE(3037);
      END_STATE();
    case 2789:
      if (lookahead == 'u') ADVANCE(3038);
      END_STATE();
    case 2790:
      if (lookahead == 'm') ADVANCE(3039);
      END_STATE();
    case 2791:
      if (lookahead == 'i') ADVANCE(3040);
      END_STATE();
    case 2792:
      if (lookahead == 'l') ADVANCE(3041);
      END_STATE();
    case 2793:
      if (lookahead == 'd') ADVANCE(3042);
      END_STATE();
    case 2794:
      if (lookahead == 'e') ADVANCE(3043);
      END_STATE();
    case 2795:
      if (lookahead == 't') ADVANCE(3044);
      END_STATE();
    case 2796:
      if (lookahead == 't') ADVANCE(3045);
      END_STATE();
    case 2797:
      if (lookahead == 't') ADVANCE(3046);
      END_STATE();
    case 2798:
      if (lookahead == 't') ADVANCE(3047);
      END_STATE();
    case 2799:
      if (lookahead == 't') ADVANCE(3048);
      END_STATE();
    case 2800:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 2801:
      if (lookahead == 'a') ADVANCE(3049);
      END_STATE();
    case 2802:
      if (lookahead == 'e') ADVANCE(3050);
      END_STATE();
    case 2803:
      if (lookahead == 'c') ADVANCE(3051);
      END_STATE();
    case 2804:
      if (lookahead == 'o') ADVANCE(3052);
      END_STATE();
    case 2805:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2806:
      if (lookahead == 'r') ADVANCE(3053);
      END_STATE();
    case 2807:
      if (lookahead == 'o') ADVANCE(3054);
      END_STATE();
    case 2808:
      if (lookahead == 'S') ADVANCE(3055);
      END_STATE();
    case 2809:
      if (lookahead == 'n') ADVANCE(3056);
      END_STATE();
    case 2810:
      if (lookahead == 't') ADVANCE(3057);
      END_STATE();
    case 2811:
      if (lookahead == 'C') ADVANCE(3058);
      if (lookahead == 'Q') ADVANCE(3059);
      if (lookahead == 'S') ADVANCE(3060);
      END_STATE();
    case 2812:
      if (lookahead == 't') ADVANCE(3061);
      END_STATE();
    case 2813:
      if (lookahead == 'C') ADVANCE(3062);
      END_STATE();
    case 2814:
      if (lookahead == 'r') ADVANCE(3063);
      END_STATE();
    case 2815:
      if (lookahead == 'd') ADVANCE(3064);
      END_STATE();
    case 2816:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2817:
      if (lookahead == 'n') ADVANCE(3065);
      END_STATE();
    case 2818:
      if (lookahead == 'C') ADVANCE(3066);
      if (lookahead == 'Q') ADVANCE(3067);
      if (lookahead == 'S') ADVANCE(3068);
      END_STATE();
    case 2819:
      if (lookahead == 'a') ADVANCE(3069);
      END_STATE();
    case 2820:
      if (lookahead == 'o') ADVANCE(3070);
      END_STATE();
    case 2821:
      if (lookahead == 'm') ADVANCE(3071);
      END_STATE();
    case 2822:
      if (lookahead == 'R') ADVANCE(3072);
      END_STATE();
    case 2823:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 2824:
      if (lookahead == 'l') ADVANCE(3073);
      END_STATE();
    case 2825:
      if (lookahead == 'u') ADVANCE(3074);
      END_STATE();
    case 2826:
      if (lookahead == 'm') ADVANCE(3075);
      END_STATE();
    case 2827:
      if (lookahead == 'n') ADVANCE(3076);
      END_STATE();
    case 2828:
      if (lookahead == 'a') ADVANCE(3077);
      END_STATE();
    case 2829:
      if (lookahead == 'i') ADVANCE(3078);
      END_STATE();
    case 2830:
      if (lookahead == 'e') ADVANCE(3079);
      END_STATE();
    case 2831:
      if (lookahead == 'a') ADVANCE(3080);
      END_STATE();
    case 2832:
      if (lookahead == 'M') ADVANCE(3081);
      END_STATE();
    case 2833:
      if (lookahead == 'f') ADVANCE(3082);
      END_STATE();
    case 2834:
      if (lookahead == 'r') ADVANCE(3083);
      END_STATE();
    case 2835:
      if (lookahead == 'a') ADVANCE(3084);
      if (lookahead == 'e') ADVANCE(3085);
      END_STATE();
    case 2836:
      if (lookahead == 'o') ADVANCE(3086);
      END_STATE();
    case 2837:
      if (lookahead == 'c') ADVANCE(3087);
      END_STATE();
    case 2838:
      if (lookahead == 'e') ADVANCE(3088);
      END_STATE();
    case 2839:
      if (lookahead == 'o') ADVANCE(3089);
      END_STATE();
    case 2840:
      if (lookahead == 'e') ADVANCE(3090);
      END_STATE();
    case 2841:
      if (lookahead == 'H') ADVANCE(3091);
      END_STATE();
    case 2842:
      if (lookahead == 'r') ADVANCE(3092);
      END_STATE();
    case 2843:
      if (lookahead == 's') ADVANCE(3093);
      END_STATE();
    case 2844:
      if (lookahead == 't') ADVANCE(3094);
      END_STATE();
    case 2845:
      if (lookahead == 'a') ADVANCE(3095);
      END_STATE();
    case 2846:
      if (lookahead == 'y') ADVANCE(3096);
      END_STATE();
    case 2847:
      if (lookahead == 'i') ADVANCE(3097);
      END_STATE();
    case 2848:
      if (lookahead == 'i') ADVANCE(3098);
      END_STATE();
    case 2849:
      if (lookahead == 'x') ADVANCE(3099);
      END_STATE();
    case 2850:
      if (lookahead == 'o') ADVANCE(3100);
      END_STATE();
    case 2851:
      if (lookahead == 't') ADVANCE(3101);
      END_STATE();
    case 2852:
      if (lookahead == 'o') ADVANCE(3102);
      END_STATE();
    case 2853:
      if (lookahead == 'a') ADVANCE(3103);
      END_STATE();
    case 2854:
      if (lookahead == 'y') ADVANCE(3104);
      END_STATE();
    case 2855:
      if (lookahead == 't') ADVANCE(3105);
      END_STATE();
    case 2856:
      if (lookahead == 'H') ADVANCE(3106);
      END_STATE();
    case 2857:
      if (lookahead == 'n') ADVANCE(3107);
      END_STATE();
    case 2858:
      if (lookahead == 't') ADVANCE(3108);
      END_STATE();
    case 2859:
      if (lookahead == 'e') ADVANCE(3109);
      END_STATE();
    case 2860:
      if (lookahead == 'F') ADVANCE(3110);
      END_STATE();
    case 2861:
      if (lookahead == 's') ADVANCE(3111);
      END_STATE();
    case 2862:
      if (lookahead == 'j') ADVANCE(3112);
      END_STATE();
    case 2863:
      if (lookahead == 'g') ADVANCE(3113);
      END_STATE();
    case 2864:
      if (lookahead == 'I') ADVANCE(3114);
      if (lookahead == 'S') ADVANCE(3115);
      END_STATE();
    case 2865:
      if (lookahead == 'n') ADVANCE(3116);
      END_STATE();
    case 2866:
      if (lookahead == 'r') ADVANCE(3117);
      END_STATE();
    case 2867:
      if (lookahead == 'l') ADVANCE(3118);
      END_STATE();
    case 2868:
      if (lookahead == 'P') ADVANCE(3119);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 2869:
      if (lookahead == 'a') ADVANCE(3120);
      END_STATE();
    case 2870:
      if (lookahead == 'l') ADVANCE(3121);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(3122);
      END_STATE();
    case 2872:
      if (lookahead == 'D') ADVANCE(3123);
      END_STATE();
    case 2873:
      if (lookahead == 'o') ADVANCE(3124);
      END_STATE();
    case 2874:
      if (lookahead == 'u') ADVANCE(3125);
      END_STATE();
    case 2875:
      if (lookahead == 'o') ADVANCE(3126);
      END_STATE();
    case 2876:
      if (lookahead == 't') ADVANCE(3127);
      END_STATE();
    case 2877:
      if (lookahead == 'a') ADVANCE(3128);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'O') ADVANCE(3129);
      END_STATE();
    case 2879:
      if (lookahead == 'e') ADVANCE(3130);
      END_STATE();
    case 2880:
      if (lookahead == 'g') ADVANCE(3131);
      END_STATE();
    case 2881:
      if (lookahead == 'q') ADVANCE(3132);
      END_STATE();
    case 2882:
      if (lookahead == 't') ADVANCE(3133);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(anon_sym_MineablesInQueue);
      END_STATE();
    case 2884:
      if (lookahead == 'i') ADVANCE(3134);
      END_STATE();
    case 2885:
      if (lookahead == 'n') ADVANCE(3135);
      END_STATE();
    case 2886:
      if (lookahead == 'T') ADVANCE(3136);
      END_STATE();
    case 2887:
      if (lookahead == 'r') ADVANCE(3137);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(anon_sym_PlantEfficiency1);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(anon_sym_PlantEfficiency2);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(anon_sym_PlantEfficiency3);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(anon_sym_PlantEfficiency4);
      END_STATE();
    case 2892:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 2893:
      if (lookahead == 'n') ADVANCE(3138);
      END_STATE();
    case 2894:
      if (lookahead == 'r') ADVANCE(3139);
      END_STATE();
    case 2895:
      if (lookahead == 'c') ADVANCE(3140);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(anon_sym_PressureExternal);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(anon_sym_PressureInternal);
      END_STATE();
    case 2898:
      if (lookahead == 'd') ADVANCE(3141);
      END_STATE();
    case 2899:
      if (lookahead == 'n') ADVANCE(3142);
      END_STATE();
    case 2900:
      if (lookahead == 'g') ADVANCE(3143);
      END_STATE();
    case 2901:
      if (lookahead == 'g') ADVANCE(3144);
      if (lookahead == 'u') ADVANCE(3145);
      END_STATE();
    case 2902:
      if (lookahead == 'n') ADVANCE(3146);
      END_STATE();
    case 2903:
      if (lookahead == 't') ADVANCE(3147);
      END_STATE();
    case 2904:
      if (lookahead == 'i') ADVANCE(3148);
      END_STATE();
    case 2905:
      if (lookahead == 'u') ADVANCE(3149);
      END_STATE();
    case 2906:
      if (lookahead == 'p') ADVANCE(3150);
      END_STATE();
    case 2907:
      if (lookahead == 'e') ADVANCE(3151);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(anon_sym_RatioOxygenInput);
      if (lookahead == '2') ADVANCE(3152);
      END_STATE();
    case 2909:
      if (lookahead == 't') ADVANCE(3153);
      END_STATE();
    case 2910:
      if (lookahead == 'p') ADVANCE(3154);
      END_STATE();
    case 2911:
      if (lookahead == 't') ADVANCE(3155);
      END_STATE();
    case 2912:
      if (lookahead == 'e') ADVANCE(3156);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(anon_sym_RatioSteamInput2);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(anon_sym_RatioSteamOutput);
      if (lookahead == '2') ADVANCE(3157);
      END_STATE();
    case 2915:
      if (lookahead == 'p') ADVANCE(3158);
      END_STATE();
    case 2916:
      if (lookahead == 't') ADVANCE(3159);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(anon_sym_RatioWaterInput2);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(anon_sym_RatioWaterOutput);
      if (lookahead == '2') ADVANCE(3160);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(anon_sym_SettingInputHash);
      END_STATE();
    case 2920:
      if (lookahead == 'h') ADVANCE(3161);
      END_STATE();
    case 2921:
      if (lookahead == 'C') ADVANCE(3162);
      END_STATE();
    case 2922:
      if (lookahead == 'n') ADVANCE(3163);
      END_STATE();
    case 2923:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 2924:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 2925:
      if (lookahead == 'd') ADVANCE(3164);
      END_STATE();
    case 2926:
      if (lookahead == 't') ADVANCE(3165);
      END_STATE();
    case 2927:
      if (lookahead == 'C') ADVANCE(3166);
      END_STATE();
    case 2928:
      if (lookahead == 's') ADVANCE(3167);
      END_STATE();
    case 2929:
      if (lookahead == 'n') ADVANCE(3168);
      END_STATE();
    case 2930:
      if (lookahead == 'e') ADVANCE(3169);
      END_STATE();
    case 2931:
      if (lookahead == 'i') ADVANCE(3170);
      END_STATE();
    case 2932:
      if (lookahead == 't') ADVANCE(3171);
      END_STATE();
    case 2933:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2934:
      if (lookahead == 'B') ADVANCE(3172);
      if (lookahead == 'C') ADVANCE(3173);
      END_STATE();
    case 2935:
      if (lookahead == 'n') ADVANCE(3174);
      END_STATE();
    case 2936:
      if (lookahead == 'b') ADVANCE(3175);
      END_STATE();
    case 2937:
      if (lookahead == 'm') ADVANCE(3176);
      END_STATE();
    case 2938:
      if (lookahead == 'n') ADVANCE(3177);
      END_STATE();
    case 2939:
      if (lookahead == 'P') ADVANCE(3178);
      END_STATE();
    case 2940:
      if (lookahead == 'a') ADVANCE(3179);
      END_STATE();
    case 2941:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 2942:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 2943:
      if (lookahead == 'g') ADVANCE(3180);
      END_STATE();
    case 2944:
      if (lookahead == 'l') ADVANCE(3181);
      END_STATE();
    case 2945:
      if (lookahead == 'o') ADVANCE(3182);
      END_STATE();
    case 2946:
      if (lookahead == 't') ADVANCE(3183);
      END_STATE();
    case 2947:
      if (lookahead == 'a') ADVANCE(3184);
      END_STATE();
    case 2948:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 2949:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2950:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2951:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 2952:
      if (lookahead == 'o') ADVANCE(3185);
      END_STATE();
    case 2953:
      if (lookahead == 'r') ADVANCE(3186);
      END_STATE();
    case 2954:
      if (lookahead == 'l') ADVANCE(3187);
      END_STATE();
    case 2955:
      if (lookahead == 'l') ADVANCE(3188);
      END_STATE();
    case 2956:
      if (lookahead == 's') ADVANCE(3189);
      END_STATE();
    case 2957:
      if (lookahead == 'r') ADVANCE(3190);
      END_STATE();
    case 2958:
      if (lookahead == 's') ADVANCE(3191);
      END_STATE();
    case 2959:
      if (lookahead == 'D') ADVANCE(3192);
      END_STATE();
    case 2960:
      if (lookahead == 'e') ADVANCE(3193);
      END_STATE();
    case 2961:
      if (lookahead == 'n') ADVANCE(3194);
      END_STATE();
    case 2962:
      if (lookahead == 'D') ADVANCE(3195);
      END_STATE();
    case 2963:
      if (lookahead == 'g') ADVANCE(3196);
      END_STATE();
    case 2964:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 2965:
      if (lookahead == 'n') ADVANCE(3197);
      END_STATE();
    case 2966:
      if (lookahead == 'c') ADVANCE(3198);
      END_STATE();
    case 2967:
      if (lookahead == 'i') ADVANCE(3199);
      END_STATE();
    case 2968:
      if (lookahead == 'u') ADVANCE(3200);
      END_STATE();
    case 2969:
      if (lookahead == 'e') ADVANCE(3201);
      END_STATE();
    case 2970:
      if (lookahead == 'm') ADVANCE(3202);
      END_STATE();
    case 2971:
      if (lookahead == 'e') ADVANCE(3203);
      END_STATE();
    case 2972:
      if (lookahead == 'r') ADVANCE(3204);
      END_STATE();
    case 2973:
      if (lookahead == 'n') ADVANCE(3205);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(anon_sym_TemperatureInput);
      if (lookahead == '2') ADVANCE(3206);
      END_STATE();
    case 2975:
      if (lookahead == 't') ADVANCE(3207);
      END_STATE();
    case 2976:
      if (lookahead == 'n') ADVANCE(3208);
      END_STATE();
    case 2977:
      if (lookahead == 'n') ADVANCE(3209);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(anon_sym_TotalMolesInput2);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(anon_sym_TotalMolesOutput);
      if (lookahead == '2') ADVANCE(3210);
      END_STATE();
    case 2980:
      if (lookahead == 'A') ADVANCE(3211);
      if (lookahead == 'P') ADVANCE(3212);
      END_STATE();
    case 2981:
      if (lookahead == 'e') ADVANCE(3213);
      END_STATE();
    case 2982:
      if (lookahead == 'X') ADVANCE(3214);
      if (lookahead == 'Y') ADVANCE(3215);
      if (lookahead == 'Z') ADVANCE(3216);
      END_STATE();
    case 2983:
      if (lookahead == 't') ADVANCE(3217);
      END_STATE();
    case 2984:
      if (lookahead == 'e') ADVANCE(3218);
      END_STATE();
    case 2985:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2986:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 2987:
      if (lookahead == 'r') ADVANCE(3219);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(anon_sym_BurnTimeRemaining);
      END_STATE();
    case 2989:
      if (lookahead == 's') ADVANCE(3220);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(anon_sym_CombustionLimiter);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(anon_sym_CombustionOutput2);
      END_STATE();
    case 2992:
      if (lookahead == 'd') ADVANCE(3221);
      END_STATE();
    case 2993:
      if (lookahead == 'e') ADVANCE(3222);
      END_STATE();
    case 2994:
      if (lookahead == 'w') ADVANCE(3223);
      END_STATE();
    case 2995:
      if (lookahead == 'i') ADVANCE(3224);
      END_STATE();
    case 2996:
      if (lookahead == 'r') ADVANCE(3225);
      END_STATE();
    case 2997:
      if (lookahead == 's') ADVANCE(3226);
      END_STATE();
    case 2998:
      if (lookahead == 'e') ADVANCE(3227);
      END_STATE();
    case 2999:
      if (lookahead == 't') ADVANCE(3228);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(anon_sym_FlightControlRule);
      END_STATE();
    case 3001:
      if (lookahead == 'x') ADVANCE(3229);
      END_STATE();
    case 3002:
      if (lookahead == 'b') ADVANCE(3230);
      END_STATE();
    case 3003:
      if (lookahead == 'r') ADVANCE(3231);
      END_STATE();
    case 3004:
      if (lookahead == 'r') ADVANCE(3232);
      END_STATE();
    case 3005:
      if (lookahead == 'g') ADVANCE(3233);
      END_STATE();
    case 3006:
      if (lookahead == 'l') ADVANCE(3234);
      END_STATE();
    case 3007:
      if (lookahead == 'a') ADVANCE(3235);
      END_STATE();
    case 3008:
      if (lookahead == 'i') ADVANCE(3236);
      END_STATE();
    case 3009:
      if (lookahead == 'a') ADVANCE(3237);
      END_STATE();
    case 3010:
      if (lookahead == 't') ADVANCE(3238);
      END_STATE();
    case 3011:
      if (lookahead == 'r') ADVANCE(3239);
      END_STATE();
    case 3012:
      if (lookahead == 'r') ADVANCE(3240);
      END_STATE();
    case 3013:
      if (lookahead == 's') ADVANCE(3241);
      END_STATE();
    case 3014:
      if (lookahead == 'a') ADVANCE(3242);
      END_STATE();
    case 3015:
      if (lookahead == 'i') ADVANCE(3243);
      END_STATE();
    case 3016:
      if (lookahead == 't') ADVANCE(3244);
      END_STATE();
    case 3017:
      if (lookahead == 'w') ADVANCE(3245);
      END_STATE();
    case 3018:
      if (lookahead == 'l') ADVANCE(3246);
      END_STATE();
    case 3019:
      if (lookahead == 'e') ADVANCE(3247);
      END_STATE();
    case 3020:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 3021:
      if (lookahead == 'u') ADVANCE(3248);
      END_STATE();
    case 3022:
      if (lookahead == 'Q') ADVANCE(3249);
      END_STATE();
    case 3023:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3024:
      if (lookahead == 'u') ADVANCE(3250);
      END_STATE();
    case 3025:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3026:
      if (lookahead == 'f') ADVANCE(3251);
      if (lookahead == 's') ADVANCE(3252);
      END_STATE();
    case 3027:
      if (lookahead == 'n') ADVANCE(3253);
      END_STATE();
    case 3028:
      if (lookahead == 'e') ADVANCE(3254);
      END_STATE();
    case 3029:
      if (lookahead == 'd') ADVANCE(3255);
      END_STATE();
    case 3030:
      if (lookahead == 't') ADVANCE(3256);
      END_STATE();
    case 3031:
      if (lookahead == 'p') ADVANCE(3257);
      END_STATE();
    case 3032:
      if (lookahead == 'u') ADVANCE(3258);
      END_STATE();
    case 3033:
      if (lookahead == 'a') ADVANCE(3259);
      END_STATE();
    case 3034:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3035:
      if (lookahead == 'a') ADVANCE(3260);
      END_STATE();
    case 3036:
      if (lookahead == 'n') ADVANCE(3261);
      END_STATE();
    case 3037:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3038:
      if (lookahead == 't') ADVANCE(3262);
      END_STATE();
    case 3039:
      if (lookahead == 'e') ADVANCE(3263);
      END_STATE();
    case 3040:
      if (lookahead == 'a') ADVANCE(3264);
      END_STATE();
    case 3041:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(434);
      END_STATE();
    case 3042:
      if (lookahead == 'N') ADVANCE(3265);
      END_STATE();
    case 3043:
      if (lookahead == 'm') ADVANCE(3266);
      END_STATE();
    case 3044:
      if (lookahead == 'a') ADVANCE(3267);
      END_STATE();
    case 3045:
      if (lookahead == 'i') ADVANCE(3268);
      END_STATE();
    case 3046:
      if (lookahead == 'i') ADVANCE(3269);
      END_STATE();
    case 3047:
      if (lookahead == 'T') ADVANCE(3270);
      END_STATE();
    case 3048:
      if (lookahead == 'C') ADVANCE(3271);
      if (lookahead == 'R') ADVANCE(3272);
      END_STATE();
    case 3049:
      if (lookahead == 't') ADVANCE(3273);
      END_STATE();
    case 3050:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3051:
      if (lookahead == 'e') ADVANCE(3274);
      END_STATE();
    case 3052:
      if (lookahead == 'n') ADVANCE(3275);
      END_STATE();
    case 3053:
      if (lookahead == 'i') ADVANCE(3276);
      END_STATE();
    case 3054:
      if (lookahead == 'r') ADVANCE(3277);
      END_STATE();
    case 3055:
      if (lookahead == 't') ADVANCE(3278);
      END_STATE();
    case 3056:
      if (lookahead == 'm') ADVANCE(3279);
      END_STATE();
    case 3057:
      if (lookahead == 'V') ADVANCE(3280);
      END_STATE();
    case 3058:
      if (lookahead == 'o') ADVANCE(3281);
      END_STATE();
    case 3059:
      if (lookahead == 'u') ADVANCE(3282);
      END_STATE();
    case 3060:
      if (lookahead == 'l') ADVANCE(3283);
      END_STATE();
    case 3061:
      if (lookahead == 'i') ADVANCE(3284);
      END_STATE();
    case 3062:
      if (lookahead == 'o') ADVANCE(3285);
      END_STATE();
    case 3063:
      if (lookahead == 'i') ADVANCE(3286);
      END_STATE();
    case 3064:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 3065:
      if (lookahead == 't') ADVANCE(3287);
      END_STATE();
    case 3066:
      if (lookahead == 'o') ADVANCE(3288);
      END_STATE();
    case 3067:
      if (lookahead == 'u') ADVANCE(3289);
      END_STATE();
    case 3068:
      if (lookahead == 'l') ADVANCE(3290);
      END_STATE();
    case 3069:
      if (lookahead == 't') ADVANCE(3291);
      END_STATE();
    case 3070:
      if (lookahead == 'g') ADVANCE(3292);
      END_STATE();
    case 3071:
      if (lookahead == 'b') ADVANCE(3293);
      END_STATE();
    case 3072:
      if (lookahead == 'e') ADVANCE(3294);
      END_STATE();
    case 3073:
      if (lookahead == 'e') ADVANCE(3295);
      END_STATE();
    case 3074:
      if (lookahead == 'a') ADVANCE(3296);
      END_STATE();
    case 3075:
      if (lookahead == 'W') ADVANCE(3297);
      END_STATE();
    case 3076:
      if (lookahead == 't') ADVANCE(3298);
      END_STATE();
    case 3077:
      if (lookahead == 't') ADVANCE(3299);
      END_STATE();
    case 3078:
      if (lookahead == 'o') ADVANCE(3300);
      END_STATE();
    case 3079:
      if (lookahead == 'r') ADVANCE(3301);
      END_STATE();
    case 3080:
      if (lookahead == 't') ADVANCE(3302);
      END_STATE();
    case 3081:
      if (lookahead == 'o') ADVANCE(3303);
      END_STATE();
    case 3082:
      if (lookahead == 'f') ADVANCE(3304);
      END_STATE();
    case 3083:
      if (lookahead == 'o') ADVANCE(3305);
      END_STATE();
    case 3084:
      if (lookahead == 's') ADVANCE(3306);
      END_STATE();
    case 3085:
      if (lookahead == 'a') ADVANCE(3307);
      END_STATE();
    case 3086:
      if (lookahead == 'n') ADVANCE(3308);
      END_STATE();
    case 3087:
      if (lookahead == 't') ADVANCE(3309);
      END_STATE();
    case 3088:
      if (lookahead == 'n') ADVANCE(3310);
      END_STATE();
    case 3089:
      if (lookahead == 't') ADVANCE(3311);
      END_STATE();
    case 3090:
      if (lookahead == 'q') ADVANCE(3312);
      END_STATE();
    case 3091:
      if (lookahead == 'a') ADVANCE(3313);
      END_STATE();
    case 3092:
      if (lookahead == 'e') ADVANCE(3314);
      END_STATE();
    case 3093:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3094:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3095:
      if (lookahead == 'r') ADVANCE(3315);
      END_STATE();
    case 3096:
      if (lookahead == 'd') ADVANCE(3316);
      END_STATE();
    case 3097:
      if (lookahead == 'q') ADVANCE(3317);
      END_STATE();
    case 3098:
      if (lookahead == 't') ADVANCE(3318);
      END_STATE();
    case 3099:
      if (lookahead == 'y') ADVANCE(3319);
      END_STATE();
    case 3100:
      if (lookahead == 'l') ADVANCE(3320);
      END_STATE();
    case 3101:
      if (lookahead == 'e') ADVANCE(3321);
      END_STATE();
    case 3102:
      if (lookahead == 'l') ADVANCE(3322);
      END_STATE();
    case 3103:
      if (lookahead == 't') ADVANCE(3323);
      END_STATE();
    case 3104:
      if (lookahead == 'A') ADVANCE(3324);
      END_STATE();
    case 3105:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3106:
      if (lookahead == 'a') ADVANCE(3325);
      END_STATE();
    case 3107:
      if (lookahead == 'c') ADVANCE(3326);
      END_STATE();
    case 3108:
      if (lookahead == 'H') ADVANCE(3327);
      END_STATE();
    case 3109:
      if (lookahead == 'd') ADVANCE(3328);
      END_STATE();
    case 3110:
      if (lookahead == 'u') ADVANCE(3329);
      END_STATE();
    case 3111:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3112:
      if (lookahead == 'o') ADVANCE(3330);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3331);
      if (lookahead == 'O') ADVANCE(3332);
      END_STATE();
    case 3114:
      if (lookahead == 'D') ADVANCE(434);
      END_STATE();
    case 3115:
      if (lookahead == 't') ADVANCE(3333);
      END_STATE();
    case 3116:
      if (lookahead == 'g') ADVANCE(3334);
      END_STATE();
    case 3117:
      if (lookahead == 'r') ADVANCE(3335);
      END_STATE();
    case 3118:
      if (lookahead == 'e') ADVANCE(3336);
      END_STATE();
    case 3119:
      if (lookahead == 'a') ADVANCE(3337);
      END_STATE();
    case 3120:
      if (lookahead == 't') ADVANCE(3338);
      END_STATE();
    case 3121:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3122:
      if (lookahead == 'o') ADVANCE(3339);
      END_STATE();
    case 3123:
      if (lookahead == 'e') ADVANCE(3340);
      END_STATE();
    case 3124:
      if (lookahead == 'l') ADVANCE(3341);
      END_STATE();
    case 3125:
      if (lookahead == 'a') ADVANCE(3342);
      END_STATE();
    case 3126:
      if (lookahead == 'm') ADVANCE(3343);
      END_STATE();
    case 3127:
      if (lookahead == 'y') ADVANCE(3344);
      END_STATE();
    case 3128:
      if (lookahead == 'l') ADVANCE(3345);
      END_STATE();
    case 3129:
      if (lookahead == 'f') ADVANCE(3346);
      END_STATE();
    case 3130:
      if (lookahead == 'a') ADVANCE(3347);
      END_STATE();
    case 3131:
      if (lookahead == 'G') ADVANCE(3348);
      END_STATE();
    case 3132:
      if (lookahead == 'u') ADVANCE(3349);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(anon_sym_MinWattsToContact);
      END_STATE();
    case 3134:
      if (lookahead == 't') ADVANCE(3350);
      END_STATE();
    case 3135:
      if (lookahead == 't') ADVANCE(3351);
      END_STATE();
    case 3136:
      if (lookahead == 'i') ADVANCE(3352);
      END_STATE();
    case 3137:
      if (lookahead == 'a') ADVANCE(3353);
      END_STATE();
    case 3138:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3139:
      if (lookahead == 'g') ADVANCE(3354);
      END_STATE();
    case 3140:
      if (lookahead == 'y') ADVANCE(3355);
      END_STATE();
    case 3141:
      if (lookahead == 'e') ADVANCE(3356);
      END_STATE();
    case 3142:
      if (lookahead == 'D') ADVANCE(3357);
      END_STATE();
    case 3143:
      if (lookahead == 'e') ADVANCE(3358);
      END_STATE();
    case 3144:
      if (lookahead == 'e') ADVANCE(3359);
      END_STATE();
    case 3145:
      if (lookahead == 's') ADVANCE(3360);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygen);
      if (lookahead == 'I') ADVANCE(3361);
      if (lookahead == 'O') ADVANCE(3362);
      END_STATE();
    case 3147:
      if (lookahead == 'a') ADVANCE(3363);
      END_STATE();
    case 3148:
      if (lookahead == 'l') ADVANCE(3364);
      END_STATE();
    case 3149:
      if (lookahead == 't') ADVANCE(3365);
      END_STATE();
    case 3150:
      if (lookahead == 'u') ADVANCE(3366);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxide);
      if (lookahead == 'I') ADVANCE(3367);
      if (lookahead == 'O') ADVANCE(3368);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(anon_sym_RatioOxygenInput2);
      END_STATE();
    case 3153:
      ACCEPT_TOKEN(anon_sym_RatioOxygenOutput);
      if (lookahead == '2') ADVANCE(3369);
      END_STATE();
    case 3154:
      if (lookahead == 'u') ADVANCE(3370);
      END_STATE();
    case 3155:
      if (lookahead == 'p') ADVANCE(3371);
      END_STATE();
    case 3156:
      if (lookahead == 'r') ADVANCE(3372);
      END_STATE();
    case 3157:
      ACCEPT_TOKEN(anon_sym_RatioSteamOutput2);
      END_STATE();
    case 3158:
      if (lookahead == 'u') ADVANCE(3373);
      END_STATE();
    case 3159:
      if (lookahead == 'p') ADVANCE(3374);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(anon_sym_RatioWaterOutput2);
      END_STATE();
    case 3161:
      ACCEPT_TOKEN(anon_sym_SettingOutputHash);
      END_STATE();
    case 3162:
      if (lookahead == 'a') ADVANCE(3375);
      END_STATE();
    case 3163:
      if (lookahead == 'c') ADVANCE(3376);
      END_STATE();
    case 3164:
      if (lookahead == 'g') ADVANCE(3377);
      END_STATE();
    case 3165:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'b') ADVANCE(3378);
      END_STATE();
    case 3166:
      if (lookahead == 'a') ADVANCE(3379);
      END_STATE();
    case 3167:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 3168:
      if (lookahead == 'i') ADVANCE(3380);
      END_STATE();
    case 3169:
      if (lookahead == 'a') ADVANCE(3381);
      END_STATE();
    case 3170:
      if (lookahead == 's') ADVANCE(3382);
      END_STATE();
    case 3171:
      if (lookahead == 'e') ADVANCE(3383);
      END_STATE();
    case 3172:
      if (lookahead == 'o') ADVANCE(3384);
      END_STATE();
    case 3173:
      if (lookahead == 'a') ADVANCE(3385);
      END_STATE();
    case 3174:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3175:
      if (lookahead == 'o') ADVANCE(3386);
      END_STATE();
    case 3176:
      if (lookahead == 'm') ADVANCE(3387);
      END_STATE();
    case 3177:
      if (lookahead == 'g') ADVANCE(3388);
      END_STATE();
    case 3178:
      if (lookahead == 'r') ADVANCE(3389);
      END_STATE();
    case 3179:
      if (lookahead == 'r') ADVANCE(3390);
      END_STATE();
    case 3180:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3181:
      if (lookahead == 'i') ADVANCE(3391);
      END_STATE();
    case 3182:
      if (lookahead == 's') ADVANCE(3392);
      END_STATE();
    case 3183:
      if (lookahead == 'h') ADVANCE(3393);
      END_STATE();
    case 3184:
      if (lookahead == 'u') ADVANCE(3394);
      END_STATE();
    case 3185:
      if (lookahead == 'u') ADVANCE(3395);
      END_STATE();
    case 3186:
      if (lookahead == 'a') ADVANCE(3396);
      END_STATE();
    case 3187:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3188:
      if (lookahead == 'i') ADVANCE(3397);
      END_STATE();
    case 3189:
      if (lookahead == 'i') ADVANCE(3398);
      END_STATE();
    case 3190:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3191:
      if (lookahead == 'T') ADVANCE(3399);
      END_STATE();
    case 3192:
      if (lookahead == 'i') ADVANCE(3400);
      END_STATE();
    case 3193:
      if (lookahead == 'r') ADVANCE(3401);
      END_STATE();
    case 3194:
      if (lookahead == 'D') ADVANCE(3402);
      END_STATE();
    case 3195:
      if (lookahead == 'e') ADVANCE(3403);
      END_STATE();
    case 3196:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3197:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3198:
      if (lookahead == 'h') ADVANCE(3404);
      END_STATE();
    case 3199:
      if (lookahead == 'n') ADVANCE(3405);
      END_STATE();
    case 3200:
      if (lookahead == 'r') ADVANCE(3406);
      END_STATE();
    case 3201:
      if (lookahead == 'H') ADVANCE(3407);
      if (lookahead == 'L') ADVANCE(3408);
      END_STATE();
    case 3202:
      if (lookahead == 'i') ADVANCE(3409);
      END_STATE();
    case 3203:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3204:
      if (lookahead == 'e') ADVANCE(3410);
      END_STATE();
    case 3205:
      if (lookahead == 'a') ADVANCE(3411);
      END_STATE();
    case 3206:
      ACCEPT_TOKEN(anon_sym_TemperatureInput2);
      END_STATE();
    case 3207:
      ACCEPT_TOKEN(anon_sym_TemperatureOutput);
      if (lookahead == '2') ADVANCE(3412);
      END_STATE();
    case 3208:
      if (lookahead == 'g') ADVANCE(3413);
      END_STATE();
    case 3209:
      ACCEPT_TOKEN(anon_sym_TimeToDestination);
      END_STATE();
    case 3210:
      ACCEPT_TOKEN(anon_sym_TotalMolesOutput2);
      END_STATE();
    case 3211:
      if (lookahead == 'c') ADVANCE(3414);
      END_STATE();
    case 3212:
      if (lookahead == 'a') ADVANCE(3415);
      END_STATE();
    case 3213:
      ACCEPT_TOKEN(anon_sym_VelocityMagnitude);
      END_STATE();
    case 3214:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeX);
      END_STATE();
    case 3215:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeY);
      END_STATE();
    case 3216:
      ACCEPT_TOKEN(anon_sym_VelocityRelativeZ);
      END_STATE();
    case 3217:
      if (lookahead == 'a') ADVANCE(3416);
      END_STATE();
    case 3218:
      if (lookahead == 'n') ADVANCE(3417);
      END_STATE();
    case 3219:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3220:
      if (lookahead == 'h') ADVANCE(3418);
      END_STATE();
    case 3221:
      if (lookahead == 'T') ADVANCE(3419);
      END_STATE();
    case 3222:
      if (lookahead == '.') ADVANCE(3420);
      END_STATE();
    case 3223:
      if (lookahead == 'a') ADVANCE(3421);
      END_STATE();
    case 3224:
      if (lookahead == 'o') ADVANCE(3422);
      END_STATE();
    case 3225:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3226:
      if (lookahead == 'c') ADVANCE(3423);
      END_STATE();
    case 3227:
      if (lookahead == 'n') ADVANCE(3424);
      END_STATE();
    case 3228:
      ACCEPT_TOKEN(anon_sym_ExportSlotOccupant);
      END_STATE();
    case 3229:
      if (lookahead == 'i') ADVANCE(3425);
      END_STATE();
    case 3230:
      if (lookahead == 'o') ADVANCE(3426);
      END_STATE();
    case 3231:
      if (lookahead == 'o') ADVANCE(3427);
      END_STATE();
    case 3232:
      if (lookahead == 'o') ADVANCE(3428);
      END_STATE();
    case 3233:
      if (lookahead == 'e') ADVANCE(3429);
      END_STATE();
    case 3234:
      if (lookahead == 'u') ADVANCE(3430);
      END_STATE();
    case 3235:
      if (lookahead == 't') ADVANCE(3431);
      END_STATE();
    case 3236:
      if (lookahead == 'd') ADVANCE(3432);
      END_STATE();
    case 3237:
      if (lookahead == 't') ADVANCE(3433);
      END_STATE();
    case 3238:
      ACCEPT_TOKEN(anon_sym_ImportSlotOccupant);
      END_STATE();
    case 3239:
      if (lookahead == 'e') ADVANCE(3434);
      END_STATE();
    case 3240:
      if (lookahead == 'g') ADVANCE(3435);
      END_STATE();
    case 3241:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3242:
      if (lookahead == 'g') ADVANCE(3436);
      END_STATE();
    case 3243:
      if (lookahead == 'c') ADVANCE(3437);
      END_STATE();
    case 3244:
      if (lookahead == 'e') ADVANCE(3438);
      END_STATE();
    case 3245:
      if (lookahead == 't') ADVANCE(3439);
      END_STATE();
    case 3246:
      if (lookahead == 't') ADVANCE(3440);
      END_STATE();
    case 3247:
      if (lookahead == 'N') ADVANCE(3441);
      END_STATE();
    case 3248:
      if (lookahead == 'r') ADVANCE(3442);
      END_STATE();
    case 3249:
      if (lookahead == 'u') ADVANCE(3443);
      END_STATE();
    case 3250:
      if (lookahead == 'p') ADVANCE(3444);
      END_STATE();
    case 3251:
      if (lookahead == 'a') ADVANCE(3445);
      END_STATE();
    case 3252:
      if (lookahead == 's') ADVANCE(3446);
      END_STATE();
    case 3253:
      if (lookahead == 't') ADVANCE(3447);
      END_STATE();
    case 3254:
      if (lookahead == 'r') ADVANCE(3448);
      END_STATE();
    case 3255:
      if (lookahead == 'i') ADVANCE(3449);
      END_STATE();
    case 3256:
      if (lookahead == 'i') ADVANCE(3450);
      END_STATE();
    case 3257:
      if (lookahead == 'e') ADVANCE(3451);
      END_STATE();
    case 3258:
      if (lookahead == 'm') ADVANCE(3452);
      END_STATE();
    case 3259:
      if (lookahead == 't') ADVANCE(3453);
      END_STATE();
    case 3260:
      if (lookahead == 's') ADVANCE(3454);
      END_STATE();
    case 3261:
      if (lookahead == 't') ADVANCE(3455);
      END_STATE();
    case 3262:
      if (lookahead == 'O') ADVANCE(3456);
      END_STATE();
    case 3263:
      if (lookahead == 'R') ADVANCE(3457);
      END_STATE();
    case 3264:
      if (lookahead == 'l') ADVANCE(3458);
      END_STATE();
    case 3265:
      if (lookahead == 'a') ADVANCE(3459);
      END_STATE();
    case 3266:
      if (lookahead == 'o') ADVANCE(3460);
      END_STATE();
    case 3267:
      if (lookahead == 'b') ADVANCE(3461);
      END_STATE();
    case 3268:
      if (lookahead == 'o') ADVANCE(3462);
      END_STATE();
    case 3269:
      if (lookahead == 'o') ADVANCE(3463);
      END_STATE();
    case 3270:
      if (lookahead == 'y') ADVANCE(3464);
      END_STATE();
    case 3271:
      if (lookahead == 'o') ADVANCE(3465);
      END_STATE();
    case 3272:
      if (lookahead == 'e') ADVANCE(3466);
      END_STATE();
    case 3273:
      if (lookahead == 'i') ADVANCE(3467);
      END_STATE();
    case 3274:
      if (lookahead == 'A') ADVANCE(3468);
      if (lookahead == 'K') ADVANCE(3469);
      END_STATE();
    case 3275:
      if (lookahead == 'd') ADVANCE(3470);
      END_STATE();
    case 3276:
      if (lookahead == 'c') ADVANCE(3471);
      END_STATE();
    case 3277:
      if (lookahead == 'L') ADVANCE(3472);
      if (lookahead == 'S') ADVANCE(3473);
      END_STATE();
    case 3278:
      if (lookahead == 'a') ADVANCE(3474);
      END_STATE();
    case 3279:
      if (lookahead == 'e') ADVANCE(3475);
      END_STATE();
    case 3280:
      if (lookahead == 'e') ADVANCE(3476);
      END_STATE();
    case 3281:
      if (lookahead == 'u') ADVANCE(3477);
      END_STATE();
    case 3282:
      if (lookahead == 'a') ADVANCE(3478);
      END_STATE();
    case 3283:
      if (lookahead == 'o') ADVANCE(3479);
      END_STATE();
    case 3284:
      if (lookahead == 'o') ADVANCE(3480);
      END_STATE();
    case 3285:
      if (lookahead == 'n') ADVANCE(3481);
      END_STATE();
    case 3286:
      if (lookahead == 't') ADVANCE(3482);
      END_STATE();
    case 3287:
      if (lookahead == 'a') ADVANCE(3483);
      END_STATE();
    case 3288:
      if (lookahead == 'u') ADVANCE(3484);
      END_STATE();
    case 3289:
      if (lookahead == 'a') ADVANCE(3485);
      END_STATE();
    case 3290:
      if (lookahead == 'o') ADVANCE(3486);
      END_STATE();
    case 3291:
      if (lookahead == 'i') ADVANCE(3487);
      END_STATE();
    case 3292:
      if (lookahead == 'a') ADVANCE(3488);
      END_STATE();
    case 3293:
      if (lookahead == 'e') ADVANCE(3489);
      END_STATE();
    case 3294:
      if (lookahead == 's') ADVANCE(3490);
      END_STATE();
    case 3295:
      if (lookahead == 's') ADVANCE(3491);
      END_STATE();
    case 3296:
      if (lookahead == 'n') ADVANCE(3492);
      END_STATE();
    case 3297:
      if (lookahead == 'a') ADVANCE(3493);
      END_STATE();
    case 3298:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3299:
      if (lookahead == 'h') ADVANCE(3494);
      END_STATE();
    case 3300:
      if (lookahead == 'n') ADVANCE(3495);
      END_STATE();
    case 3301:
      if (lookahead == 'i') ADVANCE(3496);
      END_STATE();
    case 3302:
      if (lookahead == 'i') ADVANCE(3497);
      END_STATE();
    case 3303:
      if (lookahead == 'l') ADVANCE(3498);
      END_STATE();
    case 3304:
      if (lookahead == 'i') ADVANCE(3499);
      END_STATE();
    case 3305:
      if (lookahead == 'w') ADVANCE(3500);
      END_STATE();
    case 3306:
      if (lookahead == 'h') ADVANCE(3501);
      END_STATE();
    case 3307:
      if (lookahead == 'l') ADVANCE(3502);
      END_STATE();
    case 3308:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 3309:
      if (lookahead == 'u') ADVANCE(3503);
      END_STATE();
    case 3310:
      if (lookahead == 'e') ADVANCE(3504);
      END_STATE();
    case 3311:
      if (lookahead == 'e') ADVANCE(3505);
      END_STATE();
    case 3312:
      if (lookahead == 'u') ADVANCE(3506);
      END_STATE();
    case 3313:
      if (lookahead == 's') ADVANCE(3507);
      END_STATE();
    case 3314:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'E') ADVANCE(3508);
      if (lookahead == 'I') ADVANCE(3509);
      if (lookahead == 'O') ADVANCE(3510);
      if (lookahead == 'S') ADVANCE(3511);
      END_STATE();
    case 3315:
      if (lookahead == 'b') ADVANCE(3512);
      END_STATE();
    case 3316:
      if (lookahead == 'r') ADVANCE(3513);
      END_STATE();
    case 3317:
      if (lookahead == 'u') ADVANCE(3514);
      END_STATE();
    case 3318:
      if (lookahead == 'r') ADVANCE(3515);
      END_STATE();
    case 3319:
      if (lookahead == 'g') ADVANCE(3516);
      END_STATE();
    case 3320:
      if (lookahead == 'l') ADVANCE(3517);
      END_STATE();
    case 3321:
      if (lookahead == 'a') ADVANCE(3518);
      END_STATE();
    case 3322:
      if (lookahead == 'a') ADVANCE(3519);
      END_STATE();
    case 3323:
      if (lookahead == 'e') ADVANCE(3520);
      END_STATE();
    case 3324:
      if (lookahead == 'l') ADVANCE(3521);
      END_STATE();
    case 3325:
      if (lookahead == 's') ADVANCE(3522);
      END_STATE();
    case 3326:
      if (lookahead == 'e') ADVANCE(3523);
      END_STATE();
    case 3327:
      if (lookahead == 'a') ADVANCE(3524);
      END_STATE();
    case 3328:
      if (lookahead == 'P') ADVANCE(3525);
      END_STATE();
    case 3329:
      if (lookahead == 'e') ADVANCE(3526);
      END_STATE();
    case 3330:
      if (lookahead == 'r') ADVANCE(3527);
      END_STATE();
    case 3331:
      if (lookahead == 'n') ADVANCE(3528);
      END_STATE();
    case 3332:
      if (lookahead == 'u') ADVANCE(3529);
      END_STATE();
    case 3333:
      if (lookahead == 'r') ADVANCE(3530);
      END_STATE();
    case 3334:
      if (lookahead == 'l') ADVANCE(3531);
      END_STATE();
    case 3335:
      if (lookahead == 'a') ADVANCE(3532);
      END_STATE();
    case 3336:
      if (lookahead == 'r') ADVANCE(3533);
      END_STATE();
    case 3337:
      if (lookahead == 'd') ADVANCE(3534);
      END_STATE();
    case 3338:
      if (lookahead == 'u') ADVANCE(3535);
      END_STATE();
    case 3339:
      if (lookahead == 'W') ADVANCE(3536);
      END_STATE();
    case 3340:
      if (lookahead == 's') ADVANCE(3537);
      END_STATE();
    case 3341:
      if (lookahead == 'e') ADVANCE(3538);
      END_STATE();
    case 3342:
      if (lookahead == 'n') ADVANCE(3539);
      END_STATE();
    case 3343:
      if (lookahead == 'a') ADVANCE(3540);
      END_STATE();
    case 3344:
      if (lookahead == 'M') ADVANCE(3541);
      if (lookahead == 'R') ADVANCE(3542);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 3345:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3543);
      END_STATE();
    case 3346:
      if (lookahead == 'L') ADVANCE(3544);
      END_STATE();
    case 3347:
      if (lookahead == 'c') ADVANCE(3545);
      END_STATE();
    case 3348:
      if (lookahead == 'a') ADVANCE(3546);
      END_STATE();
    case 3349:
      if (lookahead == 'i') ADVANCE(3547);
      END_STATE();
    case 3350:
      if (lookahead == 'y') ADVANCE(3548);
      END_STATE();
    case 3351:
      if (lookahead == 'a') ADVANCE(3549);
      END_STATE();
    case 3352:
      if (lookahead == 'm') ADVANCE(3550);
      END_STATE();
    case 3353:
      if (lookahead == 't') ADVANCE(3551);
      END_STATE();
    case 3354:
      if (lookahead == 'e') ADVANCE(3552);
      if (lookahead == 'i') ADVANCE(3553);
      END_STATE();
    case 3355:
      ACCEPT_TOKEN(anon_sym_PressureEfficiency);
      END_STATE();
    case 3356:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxide);
      if (lookahead == 'I') ADVANCE(3554);
      if (lookahead == 'O') ADVANCE(3555);
      END_STATE();
    case 3357:
      if (lookahead == 'i') ADVANCE(3556);
      END_STATE();
    case 3358:
      if (lookahead == 'n') ADVANCE(3557);
      END_STATE();
    case 3359:
      if (lookahead == 'n') ADVANCE(3558);
      END_STATE();
    case 3360:
      if (lookahead == 'O') ADVANCE(3559);
      END_STATE();
    case 3361:
      if (lookahead == 'n') ADVANCE(3560);
      END_STATE();
    case 3362:
      if (lookahead == 'u') ADVANCE(3561);
      END_STATE();
    case 3363:
      if (lookahead == 'n') ADVANCE(3562);
      END_STATE();
    case 3364:
      if (lookahead == 'e') ADVANCE(3563);
      END_STATE();
    case 3365:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenInput);
      if (lookahead == '2') ADVANCE(3564);
      END_STATE();
    case 3366:
      if (lookahead == 't') ADVANCE(3565);
      END_STATE();
    case 3367:
      if (lookahead == 'n') ADVANCE(3566);
      END_STATE();
    case 3368:
      if (lookahead == 'u') ADVANCE(3567);
      END_STATE();
    case 3369:
      ACCEPT_TOKEN(anon_sym_RatioOxygenOutput2);
      END_STATE();
    case 3370:
      if (lookahead == 't') ADVANCE(3568);
      END_STATE();
    case 3371:
      if (lookahead == 'u') ADVANCE(3569);
      END_STATE();
    case 3372:
      ACCEPT_TOKEN(anon_sym_RatioPollutedWater);
      END_STATE();
    case 3373:
      if (lookahead == 't') ADVANCE(3570);
      END_STATE();
    case 3374:
      if (lookahead == 'u') ADVANCE(3571);
      END_STATE();
    case 3375:
      if (lookahead == 'r') ADVANCE(3572);
      END_STATE();
    case 3376:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3377:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3378:
      if (lookahead == 'o') ADVANCE(3573);
      END_STATE();
    case 3379:
      if (lookahead == 'r') ADVANCE(3574);
      END_STATE();
    case 3380:
      if (lookahead == 's') ADVANCE(3575);
      END_STATE();
    case 3381:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3382:
      if (lookahead == 't') ADVANCE(3576);
      END_STATE();
    case 3383:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3384:
      if (lookahead == 't') ADVANCE(3577);
      END_STATE();
    case 3385:
      if (lookahead == 'n') ADVANCE(3578);
      END_STATE();
    case 3386:
      if (lookahead == 'a') ADVANCE(3579);
      END_STATE();
    case 3387:
      if (lookahead == 'a') ADVANCE(3580);
      END_STATE();
    case 3388:
      if (lookahead == 'H') ADVANCE(3581);
      END_STATE();
    case 3389:
      if (lookahead == 'o') ADVANCE(3582);
      END_STATE();
    case 3390:
      if (lookahead == 't') ADVANCE(3583);
      END_STATE();
    case 3391:
      if (lookahead == 'a') ADVANCE(3584);
      END_STATE();
    case 3392:
      if (lookahead == 'p') ADVANCE(3585);
      END_STATE();
    case 3393:
      if (lookahead == 'i') ADVANCE(3586);
      END_STATE();
    case 3394:
      if (lookahead == 'l') ADVANCE(3587);
      END_STATE();
    case 3395:
      if (lookahead == 'r') ADVANCE(3588);
      END_STATE();
    case 3396:
      if (lookahead == 'g') ADVANCE(3589);
      END_STATE();
    case 3397:
      if (lookahead == 'n') ADVANCE(3590);
      END_STATE();
    case 3398:
      if (lookahead == 'n') ADVANCE(3591);
      END_STATE();
    case 3399:
      if (lookahead == 'h') ADVANCE(3592);
      END_STATE();
    case 3400:
      if (lookahead == 'o') ADVANCE(3593);
      END_STATE();
    case 3401:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3402:
      if (lookahead == 'e') ADVANCE(3594);
      END_STATE();
    case 3403:
      if (lookahead == 't') ADVANCE(3595);
      END_STATE();
    case 3404:
      if (lookahead == 'i') ADVANCE(3596);
      END_STATE();
    case 3405:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3406:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3407:
      if (lookahead == 'i') ADVANCE(3597);
      END_STATE();
    case 3408:
      if (lookahead == 'o') ADVANCE(3598);
      END_STATE();
    case 3409:
      if (lookahead == 'n') ADVANCE(3599);
      END_STATE();
    case 3410:
      if (lookahead == 'n') ADVANCE(3600);
      END_STATE();
    case 3411:
      if (lookahead == 'l') ADVANCE(3601);
      END_STATE();
    case 3412:
      ACCEPT_TOKEN(anon_sym_TemperatureOutput2);
      END_STATE();
    case 3413:
      ACCEPT_TOKEN(anon_sym_TemperatureSetting);
      END_STATE();
    case 3414:
      if (lookahead == 't') ADVANCE(3602);
      END_STATE();
    case 3415:
      if (lookahead == 's') ADVANCE(3603);
      END_STATE();
    case 3416:
      if (lookahead == 'c') ADVANCE(3604);
      END_STATE();
    case 3417:
      if (lookahead == 'c') ADVANCE(3605);
      END_STATE();
    case 3418:
      ACCEPT_TOKEN(anon_sym_CelestialParentHash);
      END_STATE();
    case 3419:
      if (lookahead == 'y') ADVANCE(3606);
      END_STATE();
    case 3420:
      if (lookahead == 'D') ADVANCE(3607);
      if (lookahead == 'H') ADVANCE(3608);
      if (lookahead == 'V') ADVANCE(3609);
      END_STATE();
    case 3421:
      if (lookahead == 'r') ADVANCE(3610);
      END_STATE();
    case 3422:
      if (lookahead == 'n') ADVANCE(3611);
      END_STATE();
    case 3423:
      if (lookahead == 'i') ADVANCE(3612);
      END_STATE();
    case 3424:
      if (lookahead == 'c') ADVANCE(3613);
      END_STATE();
    case 3425:
      if (lookahead == 'd') ADVANCE(3614);
      END_STATE();
    case 3426:
      if (lookahead == 'n') ADVANCE(3615);
      END_STATE();
    case 3427:
      if (lookahead == 'g') ADVANCE(3616);
      END_STATE();
    case 3428:
      if (lookahead == 'g') ADVANCE(3617);
      if (lookahead == 'u') ADVANCE(3618);
      END_STATE();
    case 3429:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3430:
      if (lookahead == 't') ADVANCE(3619);
      END_STATE();
    case 3431:
      if (lookahead == 'i') ADVANCE(3620);
      END_STATE();
    case 3432:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3433:
      if (lookahead == 'e') ADVANCE(3621);
      END_STATE();
    case 3434:
      if (lookahead == 's') ADVANCE(3622);
      END_STATE();
    case 3435:
      if (lookahead == 'e') ADVANCE(3623);
      END_STATE();
    case 3436:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3437:
      if (lookahead == 'i') ADVANCE(3624);
      END_STATE();
    case 3438:
      if (lookahead == 'r') ADVANCE(3625);
      END_STATE();
    case 3439:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3440:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3441:
      if (lookahead == 'u') ADVANCE(3626);
      END_STATE();
    case 3442:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3443:
      if (lookahead == 'a') ADVANCE(3627);
      END_STATE();
    case 3444:
      if (lookahead == 'a') ADVANCE(3628);
      if (lookahead == 'i') ADVANCE(3629);
      END_STATE();
    case 3445:
      if (lookahead == 'b') ADVANCE(3630);
      END_STATE();
    case 3446:
      if (lookahead == 'u') ADVANCE(3631);
      END_STATE();
    case 3447:
      if (lookahead == 'i') ADVANCE(3632);
      END_STATE();
    case 3448:
      if (lookahead == 'e') ADVANCE(3633);
      END_STATE();
    case 3449:
      if (lookahead == 'n') ADVANCE(3634);
      END_STATE();
    case 3450:
      if (lookahead == 'n') ADVANCE(3635);
      END_STATE();
    case 3451:
      if (lookahead == 'r') ADVANCE(3636);
      END_STATE();
    case 3452:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3453:
      if (lookahead == 'i') ADVANCE(3637);
      END_STATE();
    case 3454:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3455:
      if (lookahead == 'E') ADVANCE(3638);
      END_STATE();
    case 3456:
      if (lookahead == 'f') ADVANCE(3639);
      END_STATE();
    case 3457:
      if (lookahead == 'e') ADVANCE(3640);
      END_STATE();
    case 3458:
      if (lookahead == 'H') ADVANCE(3641);
      if (lookahead == 'P') ADVANCE(3642);
      END_STATE();
    case 3459:
      if (lookahead == 'v') ADVANCE(3643);
      END_STATE();
    case 3460:
      if (lookahead == 'r') ADVANCE(3644);
      END_STATE();
    case 3461:
      if (lookahead == 'l') ADVANCE(3645);
      END_STATE();
    case 3462:
      if (lookahead == 'n') ADVANCE(3646);
      END_STATE();
    case 3463:
      if (lookahead == 'n') ADVANCE(3647);
      END_STATE();
    case 3464:
      if (lookahead == 'p') ADVANCE(3648);
      END_STATE();
    case 3465:
      if (lookahead == 'd') ADVANCE(3649);
      END_STATE();
    case 3466:
      if (lookahead == 's') ADVANCE(3650);
      END_STATE();
    case 3467:
      if (lookahead == 'o') ADVANCE(3651);
      END_STATE();
    case 3468:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 3469:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 3470:
      if (lookahead == 'i') ADVANCE(3652);
      END_STATE();
    case 3471:
      if (lookahead == 'i') ADVANCE(3653);
      END_STATE();
    case 3472:
      if (lookahead == 'e') ADVANCE(3654);
      END_STATE();
    case 3473:
      if (lookahead == 'p') ADVANCE(3655);
      END_STATE();
    case 3474:
      if (lookahead == 't') ADVANCE(3656);
      END_STATE();
    case 3475:
      if (lookahead == 'n') ADVANCE(3657);
      END_STATE();
    case 3476:
      if (lookahead == 'l') ADVANCE(3658);
      END_STATE();
    case 3477:
      if (lookahead == 'n') ADVANCE(3659);
      END_STATE();
    case 3478:
      if (lookahead == 'n') ADVANCE(3660);
      END_STATE();
    case 3479:
      if (lookahead == 't') ADVANCE(3661);
      END_STATE();
    case 3480:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3481:
      if (lookahead == 't') ADVANCE(3662);
      END_STATE();
    case 3482:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3483:
      if (lookahead == 'l') ADVANCE(3663);
      END_STATE();
    case 3484:
      if (lookahead == 'n') ADVANCE(3664);
      END_STATE();
    case 3485:
      if (lookahead == 'n') ADVANCE(3665);
      END_STATE();
    case 3486:
      if (lookahead == 't') ADVANCE(3666);
      END_STATE();
    case 3487:
      if (lookahead == 'o') ADVANCE(3667);
      END_STATE();
    case 3488:
      if (lookahead == 't') ADVANCE(3668);
      END_STATE();
    case 3489:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3490:
      if (lookahead == 'e') ADVANCE(3669);
      END_STATE();
    case 3491:
      if (lookahead == 'I') ADVANCE(3670);
      END_STATE();
    case 3492:
      if (lookahead == 't') ADVANCE(3671);
      END_STATE();
    case 3493:
      if (lookahead == 't') ADVANCE(3672);
      END_STATE();
    case 3494:
      if (lookahead == 'e') ADVANCE(3673);
      END_STATE();
    case 3495:
      if (lookahead == 'a') ADVANCE(3674);
      END_STATE();
    case 3496:
      if (lookahead == 'o') ADVANCE(3675);
      END_STATE();
    case 3497:
      if (lookahead == 'o') ADVANCE(3676);
      END_STATE();
    case 3498:
      if (lookahead == 'e') ADVANCE(3677);
      END_STATE();
    case 3499:
      if (lookahead == 'c') ADVANCE(3678);
      END_STATE();
    case 3500:
      if (lookahead == 't') ADVANCE(3679);
      END_STATE();
    case 3501:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(434);
      END_STATE();
    case 3502:
      if (lookahead == 't') ADVANCE(3680);
      END_STATE();
    case 3503:
      if (lookahead == 'a') ADVANCE(3681);
      END_STATE();
    case 3504:
      if (lookahead == 'r') ADVANCE(3682);
      END_STATE();
    case 3505:
      if (lookahead == 'n') ADVANCE(3683);
      END_STATE();
    case 3506:
      if (lookahead == 'i') ADVANCE(3684);
      END_STATE();
    case 3507:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3508:
      if (lookahead == 'f') ADVANCE(3685);
      if (lookahead == 'x') ADVANCE(3686);
      END_STATE();
    case 3509:
      if (lookahead == 'n') ADVANCE(3687);
      END_STATE();
    case 3510:
      if (lookahead == 'u') ADVANCE(3688);
      END_STATE();
    case 3511:
      if (lookahead == 'e') ADVANCE(3689);
      END_STATE();
    case 3512:
      if (lookahead == 'o') ADVANCE(3690);
      END_STATE();
    case 3513:
      if (lookahead == 'o') ADVANCE(3691);
      END_STATE();
    case 3514:
      if (lookahead == 'i') ADVANCE(3692);
      END_STATE();
    case 3515:
      if (lookahead == 'o') ADVANCE(3693);
      END_STATE();
    case 3516:
      if (lookahead == 'e') ADVANCE(3694);
      END_STATE();
    case 3517:
      if (lookahead == 'u') ADVANCE(3695);
      END_STATE();
    case 3518:
      if (lookahead == 'm') ADVANCE(3696);
      END_STATE();
    case 3519:
      if (lookahead == 't') ADVANCE(3697);
      END_STATE();
    case 3520:
      if (lookahead == 'r') ADVANCE(3698);
      END_STATE();
    case 3521:
      if (lookahead == 't') ADVANCE(3699);
      END_STATE();
    case 3522:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3523:
      if (lookahead == 'I') ADVANCE(3700);
      END_STATE();
    case 3524:
      if (lookahead == 's') ADVANCE(3701);
      END_STATE();
    case 3525:
      if (lookahead == 'o') ADVANCE(3702);
      END_STATE();
    case 3526:
      if (lookahead == 'l') ADVANCE(3703);
      END_STATE();
    case 3527:
      if (lookahead == 'A') ADVANCE(3704);
      END_STATE();
    case 3528:
      if (lookahead == 'p') ADVANCE(3705);
      END_STATE();
    case 3529:
      if (lookahead == 't') ADVANCE(3706);
      END_STATE();
    case 3530:
      if (lookahead == 'e') ADVANCE(3707);
      END_STATE();
    case 3531:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3532:
      if (lookahead == 'd') ADVANCE(3708);
      END_STATE();
    case 3533:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3534:
      if (lookahead == 'I') ADVANCE(3709);
      END_STATE();
    case 3535:
      if (lookahead == 'r') ADVANCE(3710);
      END_STATE();
    case 3536:
      if (lookahead == 'e') ADVANCE(3711);
      END_STATE();
    case 3537:
      if (lookahead == 't') ADVANCE(3712);
      END_STATE();
    case 3538:
      if (lookahead == 's') ADVANCE(3713);
      END_STATE();
    case 3539:
      if (lookahead == 't') ADVANCE(3714);
      END_STATE();
    case 3540:
      if (lookahead == 'l') ADVANCE(3715);
      END_STATE();
    case 3541:
      if (lookahead == 'a') ADVANCE(3716);
      END_STATE();
    case 3542:
      if (lookahead == 'e') ADVANCE(3717);
      END_STATE();
    case 3543:
      if (lookahead == 'a') ADVANCE(3718);
      END_STATE();
    case 3544:
      if (lookahead == 'i') ADVANCE(3719);
      END_STATE();
    case 3545:
      if (lookahead == 'h') ADVANCE(3720);
      END_STATE();
    case 3546:
      if (lookahead == 's') ADVANCE(3721);
      END_STATE();
    case 3547:
      if (lookahead == 'r') ADVANCE(3722);
      END_STATE();
    case 3548:
      ACCEPT_TOKEN(anon_sym_MineablesInVicinity);
      END_STATE();
    case 3549:
      if (lookahead == 'c') ADVANCE(3723);
      END_STATE();
    case 3550:
      if (lookahead == 'e') ADVANCE(3724);
      END_STATE();
    case 3551:
      if (lookahead == 'u') ADVANCE(3725);
      END_STATE();
    case 3552:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3553:
      if (lookahead == 'n') ADVANCE(3726);
      END_STATE();
    case 3554:
      if (lookahead == 'n') ADVANCE(3727);
      END_STATE();
    case 3555:
      if (lookahead == 'u') ADVANCE(3728);
      END_STATE();
    case 3556:
      if (lookahead == 'o') ADVANCE(3729);
      END_STATE();
    case 3557:
      ACCEPT_TOKEN(anon_sym_RatioLiquidHydrogen);
      END_STATE();
    case 3558:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogen);
      if (lookahead == 'I') ADVANCE(3730);
      if (lookahead == 'O') ADVANCE(3731);
      END_STATE();
    case 3559:
      if (lookahead == 'x') ADVANCE(3732);
      END_STATE();
    case 3560:
      if (lookahead == 'p') ADVANCE(3733);
      END_STATE();
    case 3561:
      if (lookahead == 't') ADVANCE(3734);
      END_STATE();
    case 3562:
      if (lookahead == 't') ADVANCE(3735);
      END_STATE();
    case 3563:
      if (lookahead == 's') ADVANCE(3736);
      END_STATE();
    case 3564:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenInput2);
      END_STATE();
    case 3565:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenOutput);
      if (lookahead == '2') ADVANCE(3737);
      END_STATE();
    case 3566:
      if (lookahead == 'p') ADVANCE(3738);
      END_STATE();
    case 3567:
      if (lookahead == 't') ADVANCE(3739);
      END_STATE();
    case 3568:
      ACCEPT_TOKEN(anon_sym_RatioPollutantInput);
      if (lookahead == '2') ADVANCE(3740);
      END_STATE();
    case 3569:
      if (lookahead == 't') ADVANCE(3741);
      END_STATE();
    case 3570:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesInput);
      if (lookahead == '2') ADVANCE(3742);
      END_STATE();
    case 3571:
      if (lookahead == 't') ADVANCE(3743);
      END_STATE();
    case 3572:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3573:
      if (lookahead == 'a') ADVANCE(3744);
      END_STATE();
    case 3574:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3575:
      if (lookahead == 't') ADVANCE(3745);
      END_STATE();
    case 3576:
      if (lookahead == 'e') ADVANCE(3746);
      END_STATE();
    case 3577:
      if (lookahead == 't') ADVANCE(3747);
      END_STATE();
    case 3578:
      if (lookahead == 'i') ADVANCE(3748);
      END_STATE();
    case 3579:
      if (lookahead == 'r') ADVANCE(3749);
      END_STATE();
    case 3580:
      if (lookahead == 'b') ADVANCE(3750);
      END_STATE();
    case 3581:
      if (lookahead == 'e') ADVANCE(3751);
      END_STATE();
    case 3582:
      if (lookahead == 'c') ADVANCE(3752);
      END_STATE();
    case 3583:
      if (lookahead == 'r') ADVANCE(3753);
      END_STATE();
    case 3584:
      if (lookahead == 'n') ADVANCE(3754);
      END_STATE();
    case 3585:
      if (lookahead == 'h') ADVANCE(3755);
      END_STATE();
    case 3586:
      if (lookahead == 'n') ADVANCE(3756);
      END_STATE();
    case 3587:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3588:
      if (lookahead == 'c') ADVANCE(3757);
      END_STATE();
    case 3589:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3590:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3591:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3592:
      if (lookahead == 'e') ADVANCE(3758);
      END_STATE();
    case 3593:
      if (lookahead == 'x') ADVANCE(3759);
      END_STATE();
    case 3594:
      if (lookahead == 't') ADVANCE(3760);
      END_STATE();
    case 3595:
      if (lookahead == 'e') ADVANCE(3761);
      END_STATE();
    case 3596:
      if (lookahead == 'n') ADVANCE(3762);
      END_STATE();
    case 3597:
      if (lookahead == 'g') ADVANCE(3763);
      END_STATE();
    case 3598:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 3599:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3600:
      if (lookahead == 't') ADVANCE(3764);
      END_STATE();
    case 3601:
      ACCEPT_TOKEN(anon_sym_TemperatureExternal);
      END_STATE();
    case 3602:
      if (lookahead == 'i') ADVANCE(3765);
      END_STATE();
    case 3603:
      if (lookahead == 's') ADVANCE(3766);
      END_STATE();
    case 3604:
      if (lookahead == 't') ADVANCE(3767);
      END_STATE();
    case 3605:
      if (lookahead == 'y') ADVANCE(3768);
      END_STATE();
    case 3606:
      if (lookahead == 'p') ADVANCE(3769);
      END_STATE();
    case 3607:
      if (lookahead == 'e') ADVANCE(3770);
      END_STATE();
    case 3608:
      if (lookahead == 'o') ADVANCE(3771);
      END_STATE();
    case 3609:
      if (lookahead == 'e') ADVANCE(3772);
      END_STATE();
    case 3610:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3611:
      if (lookahead == 'a') ADVANCE(3773);
      END_STATE();
    case 3612:
      if (lookahead == 'o') ADVANCE(3774);
      END_STATE();
    case 3613:
      if (lookahead == 'y') ADVANCE(3775);
      END_STATE();
    case 3614:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3615:
      if (lookahead == 'D') ADVANCE(3776);
      END_STATE();
    case 3616:
      if (lookahead == 'e') ADVANCE(3777);
      END_STATE();
    case 3617:
      if (lookahead == 'e') ADVANCE(3778);
      END_STATE();
    case 3618:
      if (lookahead == 's') ADVANCE(3779);
      END_STATE();
    case 3619:
      if (lookahead == 'a') ADVANCE(3780);
      END_STATE();
    case 3620:
      if (lookahead == 'l') ADVANCE(3781);
      END_STATE();
    case 3621:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3622:
      if (lookahead == 's') ADVANCE(3782);
      END_STATE();
    case 3623:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3783);
      END_STATE();
    case 3624:
      if (lookahead == 'e') ADVANCE(3784);
      END_STATE();
    case 3625:
      if (lookahead == 'T') ADVANCE(3785);
      END_STATE();
    case 3626:
      if (lookahead == 'm') ADVANCE(3786);
      END_STATE();
    case 3627:
      if (lookahead == 'n') ADVANCE(3787);
      END_STATE();
    case 3628:
      if (lookahead == 'n') ADVANCE(3788);
      END_STATE();
    case 3629:
      if (lookahead == 'e') ADVANCE(3789);
      END_STATE();
    case 3630:
      if (lookahead == 'H') ADVANCE(3790);
      END_STATE();
    case 3631:
      if (lookahead == 'r') ADVANCE(3791);
      END_STATE();
    case 3632:
      if (lookahead == 't') ADVANCE(3792);
      END_STATE();
    case 3633:
      if (lookahead == 'n') ADVANCE(3793);
      END_STATE();
    case 3634:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3635:
      if (lookahead == 'g') ADVANCE(3794);
      END_STATE();
    case 3636:
      if (lookahead == 'a') ADVANCE(3795);
      END_STATE();
    case 3637:
      if (lookahead == 'o') ADVANCE(3796);
      END_STATE();
    case 3638:
      if (lookahead == 'r') ADVANCE(3797);
      END_STATE();
    case 3639:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 3640:
      if (lookahead == 'm') ADVANCE(3798);
      END_STATE();
    case 3641:
      if (lookahead == 'a') ADVANCE(3799);
      END_STATE();
    case 3642:
      if (lookahead == 'a') ADVANCE(3800);
      END_STATE();
    case 3643:
      if (lookahead == 'P') ADVANCE(3801);
      END_STATE();
    case 3644:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3645:
      if (lookahead == 'e') ADVANCE(3802);
      END_STATE();
    case 3646:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3803);
      if (lookahead == 'L') ADVANCE(3804);
      if (lookahead == 'O') ADVANCE(3805);
      END_STATE();
    case 3647:
      if (lookahead == 'R') ADVANCE(3806);
      END_STATE();
    case 3648:
      if (lookahead == 'e') ADVANCE(3807);
      END_STATE();
    case 3649:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3650:
      if (lookahead == 'e') ADVANCE(3808);
      END_STATE();
    case 3651:
      if (lookahead == 'n') ADVANCE(3809);
      END_STATE();
    case 3652:
      if (lookahead == 't') ADVANCE(3810);
      END_STATE();
    case 3653:
      if (lookahead == 't') ADVANCE(3811);
      END_STATE();
    case 3654:
      if (lookahead == 'v') ADVANCE(3812);
      END_STATE();
    case 3655:
      if (lookahead == 'e') ADVANCE(3813);
      END_STATE();
    case 3656:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3657:
      if (lookahead == 't') ADVANCE(3814);
      END_STATE();
    case 3658:
      if (lookahead == 'o') ADVANCE(3815);
      END_STATE();
    case 3659:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3660:
      if (lookahead == 't') ADVANCE(3816);
      END_STATE();
    case 3661:
      if (lookahead == 'H') ADVANCE(3817);
      if (lookahead == 'O') ADVANCE(3818);
      END_STATE();
    case 3662:
      if (lookahead == 'r') ADVANCE(3819);
      END_STATE();
    case 3663:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3820);
      END_STATE();
    case 3664:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3665:
      if (lookahead == 't') ADVANCE(3821);
      END_STATE();
    case 3666:
      if (lookahead == 'H') ADVANCE(3822);
      if (lookahead == 'O') ADVANCE(3823);
      END_STATE();
    case 3667:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3668:
      if (lookahead == 'i') ADVANCE(3824);
      END_STATE();
    case 3669:
      if (lookahead == 'a') ADVANCE(3825);
      END_STATE();
    case 3670:
      if (lookahead == 'n') ADVANCE(3826);
      END_STATE();
    case 3671:
      if (lookahead == 'i') ADVANCE(3827);
      END_STATE();
    case 3672:
      if (lookahead == 't') ADVANCE(3828);
      END_STATE();
    case 3673:
      if (lookahead == 'r') ADVANCE(3829);
      END_STATE();
    case 3674:
      if (lookahead == 'l') ADVANCE(3830);
      END_STATE();
    case 3675:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3676:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3677:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3678:
      if (lookahead == 'i') ADVANCE(3831);
      END_STATE();
    case 3679:
      if (lookahead == 'h') ADVANCE(3832);
      END_STATE();
    case 3680:
      if (lookahead == 'h') ADVANCE(3833);
      END_STATE();
    case 3681:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 3682:
      if (lookahead == 'a') ADVANCE(3834);
      END_STATE();
    case 3683:
      if (lookahead == 't') ADVANCE(3835);
      END_STATE();
    case 3684:
      if (lookahead == 'r') ADVANCE(3836);
      END_STATE();
    case 3685:
      if (lookahead == 'f') ADVANCE(3837);
      END_STATE();
    case 3686:
      if (lookahead == 't') ADVANCE(3838);
      END_STATE();
    case 3687:
      if (lookahead == 'p') ADVANCE(3839);
      if (lookahead == 't') ADVANCE(3840);
      END_STATE();
    case 3688:
      if (lookahead == 't') ADVANCE(3841);
      END_STATE();
    case 3689:
      if (lookahead == 't') ADVANCE(3842);
      END_STATE();
    case 3690:
      if (lookahead == 'n') ADVANCE(3843);
      END_STATE();
    case 3691:
      if (lookahead == 'g') ADVANCE(3844);
      END_STATE();
    case 3692:
      if (lookahead == 'd') ADVANCE(3845);
      END_STATE();
    case 3693:
      if (lookahead == 'g') ADVANCE(3846);
      if (lookahead == 'u') ADVANCE(3847);
      END_STATE();
    case 3694:
      if (lookahead == 'n') ADVANCE(3848);
      END_STATE();
    case 3695:
      if (lookahead == 't') ADVANCE(3849);
      END_STATE();
    case 3696:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3850);
      if (lookahead == 'O') ADVANCE(3851);
      END_STATE();
    case 3697:
      if (lookahead == 'i') ADVANCE(3852);
      END_STATE();
    case 3698:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3853);
      if (lookahead == 'O') ADVANCE(3854);
      END_STATE();
    case 3699:
      if (lookahead == 'i') ADVANCE(3855);
      END_STATE();
    case 3700:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3701:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3702:
      if (lookahead == 'w') ADVANCE(3856);
      END_STATE();
    case 3703:
      if (lookahead == 'C') ADVANCE(3857);
      END_STATE();
    case 3704:
      if (lookahead == 'x') ADVANCE(3858);
      END_STATE();
    case 3705:
      if (lookahead == 'u') ADVANCE(3859);
      END_STATE();
    case 3706:
      if (lookahead == 'p') ADVANCE(3860);
      END_STATE();
    case 3707:
      if (lookahead == 'n') ADVANCE(3861);
      END_STATE();
    case 3708:
      if (lookahead == 'i') ADVANCE(3862);
      END_STATE();
    case 3709:
      if (lookahead == 'n') ADVANCE(3863);
      END_STATE();
    case 3710:
      if (lookahead == 'e') ADVANCE(3864);
      END_STATE();
    case 3711:
      if (lookahead == 'i') ADVANCE(3865);
      END_STATE();
    case 3712:
      if (lookahead == 'i') ADVANCE(3866);
      END_STATE();
    case 3713:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3867);
      if (lookahead == 'O') ADVANCE(3868);
      END_STATE();
    case 3714:
      if (lookahead == 'i') ADVANCE(3869);
      END_STATE();
    case 3715:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3716:
      if (lookahead == 'g') ADVANCE(3870);
      END_STATE();
    case 3717:
      if (lookahead == 'l') ADVANCE(3871);
      END_STATE();
    case 3718:
      if (lookahead == 't') ADVANCE(3872);
      END_STATE();
    case 3719:
      if (lookahead == 'q') ADVANCE(3873);
      END_STATE();
    case 3720:
      if (lookahead == 'i') ADVANCE(3874);
      END_STATE();
    case 3721:
      if (lookahead == 'E') ADVANCE(3875);
      END_STATE();
    case 3722:
      if (lookahead == 'e') ADVANCE(3876);
      END_STATE();
    case 3723:
      if (lookahead == 't') ADVANCE(3877);
      END_STATE();
    case 3724:
      ACCEPT_TOKEN(anon_sym_NextWeatherEventTime);
      END_STATE();
    case 3725:
      if (lookahead == 'r') ADVANCE(3878);
      END_STATE();
    case 3726:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3727:
      if (lookahead == 'p') ADVANCE(3879);
      END_STATE();
    case 3728:
      if (lookahead == 't') ADVANCE(3880);
      END_STATE();
    case 3729:
      if (lookahead == 'x') ADVANCE(3881);
      END_STATE();
    case 3730:
      if (lookahead == 'n') ADVANCE(3882);
      END_STATE();
    case 3731:
      if (lookahead == 'u') ADVANCE(3883);
      END_STATE();
    case 3732:
      if (lookahead == 'i') ADVANCE(3884);
      END_STATE();
    case 3733:
      if (lookahead == 'u') ADVANCE(3885);
      END_STATE();
    case 3734:
      if (lookahead == 'p') ADVANCE(3886);
      END_STATE();
    case 3735:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutant);
      if (lookahead == 'I') ADVANCE(3887);
      if (lookahead == 'O') ADVANCE(3888);
      END_STATE();
    case 3736:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatiles);
      if (lookahead == 'I') ADVANCE(3889);
      if (lookahead == 'O') ADVANCE(3890);
      END_STATE();
    case 3737:
      ACCEPT_TOKEN(anon_sym_RatioNitrogenOutput2);
      END_STATE();
    case 3738:
      if (lookahead == 'u') ADVANCE(3891);
      END_STATE();
    case 3739:
      if (lookahead == 'p') ADVANCE(3892);
      END_STATE();
    case 3740:
      ACCEPT_TOKEN(anon_sym_RatioPollutantInput2);
      END_STATE();
    case 3741:
      ACCEPT_TOKEN(anon_sym_RatioPollutantOutput);
      if (lookahead == '2') ADVANCE(3893);
      END_STATE();
    case 3742:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesInput2);
      END_STATE();
    case 3743:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesOutput);
      if (lookahead == '2') ADVANCE(3894);
      END_STATE();
    case 3744:
      if (lookahead == 'r') ADVANCE(3895);
      END_STATE();
    case 3745:
      if (lookahead == 'e') ADVANCE(3896);
      END_STATE();
    case 3746:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3747:
      if (lookahead == 'l') ADVANCE(3897);
      END_STATE();
    case 3748:
      if (lookahead == 's') ADVANCE(3898);
      END_STATE();
    case 3749:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3750:
      if (lookahead == 'l') ADVANCE(3899);
      END_STATE();
    case 3751:
      if (lookahead == 'a') ADVANCE(3900);
      END_STATE();
    case 3752:
      if (lookahead == 'e') ADVANCE(3901);
      END_STATE();
    case 3753:
      if (lookahead == 'i') ADVANCE(3902);
      END_STATE();
    case 3754:
      if (lookahead == 'c') ADVANCE(3903);
      END_STATE();
    case 3755:
      if (lookahead == 'e') ADVANCE(3904);
      END_STATE();
    case 3756:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3757:
      if (lookahead == 'e') ADVANCE(3905);
      END_STATE();
    case 3758:
      if (lookahead == 'r') ADVANCE(3906);
      END_STATE();
    case 3759:
      if (lookahead == 'i') ADVANCE(3907);
      END_STATE();
    case 3760:
      if (lookahead == 'e') ADVANCE(3908);
      END_STATE();
    case 3761:
      if (lookahead == 'c') ADVANCE(3909);
      END_STATE();
    case 3762:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 3763:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3764:
      if (lookahead == 'i') ADVANCE(3910);
      END_STATE();
    case 3765:
      if (lookahead == 'v') ADVANCE(3911);
      END_STATE();
    case 3766:
      if (lookahead == 'i') ADVANCE(3912);
      END_STATE();
    case 3767:
      ACCEPT_TOKEN(anon_sym_WattsReachingContact);
      END_STATE();
    case 3768:
      ACCEPT_TOKEN(anon_sym_WorkingGasEfficiency);
      END_STATE();
    case 3769:
      if (lookahead == 'e') ADVANCE(3913);
      END_STATE();
    case 3770:
      if (lookahead == 'f') ADVANCE(3914);
      END_STATE();
    case 3771:
      if (lookahead == 'r') ADVANCE(3915);
      END_STATE();
    case 3772:
      if (lookahead == 'r') ADVANCE(3916);
      END_STATE();
    case 3773:
      if (lookahead == 'r') ADVANCE(3917);
      END_STATE();
    case 3774:
      if (lookahead == 'u') ADVANCE(3918);
      END_STATE();
    case 3775:
      ACCEPT_TOKEN(anon_sym_EnvironmentEfficiency);
      END_STATE();
    case 3776:
      if (lookahead == 'i') ADVANCE(3919);
      END_STATE();
    case 3777:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3778:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3779:
      if (lookahead == 'O') ADVANCE(3920);
      END_STATE();
    case 3780:
      if (lookahead == 'n') ADVANCE(3921);
      END_STATE();
    case 3781:
      if (lookahead == 'e') ADVANCE(3922);
      END_STATE();
    case 3782:
      ACCEPT_TOKEN(anon_sym_InterrogationProgress);
      END_STATE();
    case 3783:
      if (lookahead == 'a') ADVANCE(3923);
      END_STATE();
    case 3784:
      if (lookahead == 'n') ADVANCE(3924);
      END_STATE();
    case 3785:
      if (lookahead == 'y') ADVANCE(3925);
      END_STATE();
    case 3786:
      if (lookahead == 'b') ADVANCE(3926);
      END_STATE();
    case 3787:
      if (lookahead == 't') ADVANCE(3927);
      END_STATE();
    case 3788:
      if (lookahead == 't') ADVANCE(3928);
      END_STATE();
    case 3789:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3790:
      if (lookahead == 'a') ADVANCE(3929);
      END_STATE();
    case 3791:
      if (lookahead == 'e') ADVANCE(3930);
      END_STATE();
    case 3792:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3793:
      if (lookahead == 'c') ADVANCE(3931);
      END_STATE();
    case 3794:
      if (lookahead == 'C') ADVANCE(3932);
      END_STATE();
    case 3795:
      if (lookahead == 't') ADVANCE(3933);
      END_STATE();
    case 3796:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3797:
      if (lookahead == 'r') ADVANCE(3934);
      END_STATE();
    case 3798:
      if (lookahead == 'a') ADVANCE(3935);
      END_STATE();
    case 3799:
      if (lookahead == 's') ADVANCE(3936);
      END_STATE();
    case 3800:
      if (lookahead == 'r') ADVANCE(3937);
      END_STATE();
    case 3801:
      if (lookahead == 'o') ADVANCE(3938);
      END_STATE();
    case 3802:
      if (lookahead == 'G') ADVANCE(3939);
      END_STATE();
    case 3803:
      if (lookahead == 'n') ADVANCE(3940);
      END_STATE();
    case 3804:
      if (lookahead == 'i') ADVANCE(3941);
      END_STATE();
    case 3805:
      if (lookahead == 'u') ADVANCE(3942);
      END_STATE();
    case 3806:
      if (lookahead == 'a') ADVANCE(3943);
      END_STATE();
    case 3807:
      if (lookahead == 'I') ADVANCE(3944);
      END_STATE();
    case 3808:
      if (lookahead == 'a') ADVANCE(3945);
      END_STATE();
    case 3809:
      if (lookahead == 'C') ADVANCE(3946);
      END_STATE();
    case 3810:
      if (lookahead == 'i') ADVANCE(3947);
      END_STATE();
    case 3811:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3812:
      if (lookahead == 'e') ADVANCE(3948);
      END_STATE();
    case 3813:
      if (lookahead == 'e') ADVANCE(3949);
      END_STATE();
    case 3814:
      if (lookahead == 'E') ADVANCE(3950);
      END_STATE();
    case 3815:
      if (lookahead == 'c') ADVANCE(3951);
      END_STATE();
    case 3816:
      if (lookahead == 'i') ADVANCE(3952);
      END_STATE();
    case 3817:
      if (lookahead == 'a') ADVANCE(3953);
      END_STATE();
    case 3818:
      if (lookahead == 'c') ADVANCE(3954);
      END_STATE();
    case 3819:
      if (lookahead == 'o') ADVANCE(3955);
      END_STATE();
    case 3820:
      if (lookahead == 'a') ADVANCE(3956);
      END_STATE();
    case 3821:
      if (lookahead == 'i') ADVANCE(3957);
      END_STATE();
    case 3822:
      if (lookahead == 'a') ADVANCE(3958);
      END_STATE();
    case 3823:
      if (lookahead == 'c') ADVANCE(3959);
      END_STATE();
    case 3824:
      if (lookahead == 'o') ADVANCE(3960);
      END_STATE();
    case 3825:
      if (lookahead == 'r') ADVANCE(3961);
      END_STATE();
    case 3826:
      if (lookahead == 'Q') ADVANCE(3962);
      if (lookahead == 'V') ADVANCE(3963);
      END_STATE();
    case 3827:
      if (lookahead == 't') ADVANCE(3964);
      END_STATE();
    case 3828:
      if (lookahead == 's') ADVANCE(3965);
      END_STATE();
    case 3829:
      if (lookahead == 'E') ADVANCE(3966);
      END_STATE();
    case 3830:
      if (lookahead == 'T') ADVANCE(3967);
      END_STATE();
    case 3831:
      if (lookahead == 'e') ADVANCE(3968);
      END_STATE();
    case 3832:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(434);
      END_STATE();
    case 3833:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(434);
      END_STATE();
    case 3834:
      if (lookahead == 't') ADVANCE(3969);
      END_STATE();
    case 3835:
      if (lookahead == 'i') ADVANCE(3970);
      END_STATE();
    case 3836:
      if (lookahead == 'e') ADVANCE(3971);
      END_STATE();
    case 3837:
      if (lookahead == 'i') ADVANCE(3972);
      END_STATE();
    case 3838:
      if (lookahead == 'e') ADVANCE(3973);
      END_STATE();
    case 3839:
      if (lookahead == 'u') ADVANCE(3974);
      END_STATE();
    case 3840:
      if (lookahead == 'e') ADVANCE(3975);
      END_STATE();
    case 3841:
      if (lookahead == 'p') ADVANCE(3976);
      END_STATE();
    case 3842:
      if (lookahead == 't') ADVANCE(3977);
      END_STATE();
    case 3843:
      if (lookahead == 'D') ADVANCE(3978);
      END_STATE();
    case 3844:
      if (lookahead == 'e') ADVANCE(3979);
      END_STATE();
    case 3845:
      if (lookahead == 'C') ADVANCE(3980);
      if (lookahead == 'H') ADVANCE(3981);
      if (lookahead == 'N') ADVANCE(3982);
      if (lookahead == 'O') ADVANCE(3983);
      if (lookahead == 'P') ADVANCE(3984);
      if (lookahead == 'V') ADVANCE(3985);
      END_STATE();
    case 3846:
      if (lookahead == 'e') ADVANCE(3986);
      END_STATE();
    case 3847:
      if (lookahead == 's') ADVANCE(3987);
      END_STATE();
    case 3848:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3988);
      if (lookahead == 'O') ADVANCE(3989);
      END_STATE();
    case 3849:
      if (lookahead == 'a') ADVANCE(3990);
      if (lookahead == 'e') ADVANCE(3991);
      END_STATE();
    case 3850:
      if (lookahead == 'n') ADVANCE(3992);
      END_STATE();
    case 3851:
      if (lookahead == 'u') ADVANCE(3993);
      END_STATE();
    case 3852:
      if (lookahead == 'l') ADVANCE(3994);
      END_STATE();
    case 3853:
      if (lookahead == 'n') ADVANCE(3995);
      END_STATE();
    case 3854:
      if (lookahead == 'u') ADVANCE(3996);
      END_STATE();
    case 3855:
      if (lookahead == 't') ADVANCE(3997);
      END_STATE();
    case 3856:
      if (lookahead == 'e') ADVANCE(3998);
      END_STATE();
    case 3857:
      if (lookahead == 'o') ADVANCE(3999);
      END_STATE();
    case 3858:
      if (lookahead == 'i') ADVANCE(4000);
      END_STATE();
    case 3859:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3860:
      if (lookahead == 'u') ADVANCE(4001);
      END_STATE();
    case 3861:
      if (lookahead == 'g') ADVANCE(4002);
      END_STATE();
    case 3862:
      if (lookahead == 'a') ADVANCE(4003);
      END_STATE();
    case 3863:
      if (lookahead == 'd') ADVANCE(4004);
      END_STATE();
    case 3864:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'D') ADVANCE(4005);
      if (lookahead == 'E') ADVANCE(4006);
      if (lookahead == 'I') ADVANCE(4007);
      if (lookahead == 'O') ADVANCE(4008);
      if (lookahead == 'S') ADVANCE(4009);
      END_STATE();
    case 3865:
      if (lookahead == 'g') ADVANCE(4010);
      END_STATE();
    case 3866:
      if (lookahead == 'n') ADVANCE(4011);
      END_STATE();
    case 3867:
      if (lookahead == 'n') ADVANCE(4012);
      END_STATE();
    case 3868:
      if (lookahead == 'u') ADVANCE(4013);
      END_STATE();
    case 3869:
      if (lookahead == 't') ADVANCE(4014);
      END_STATE();
    case 3870:
      if (lookahead == 'n') ADVANCE(4015);
      END_STATE();
    case 3871:
      if (lookahead == 'a') ADVANCE(4016);
      END_STATE();
    case 3872:
      if (lookahead == 'i') ADVANCE(4017);
      END_STATE();
    case 3873:
      if (lookahead == 'u') ADVANCE(4018);
      END_STATE();
    case 3874:
      if (lookahead == 'n') ADVANCE(4019);
      END_STATE();
    case 3875:
      if (lookahead == 'f') ADVANCE(4020);
      END_STATE();
    case 3876:
      if (lookahead == 'd') ADVANCE(4021);
      END_STATE();
    case 3877:
      ACCEPT_TOKEN(anon_sym_MinimumWattsToContact);
      END_STATE();
    case 3878:
      if (lookahead == 'e') ADVANCE(4022);
      END_STATE();
    case 3879:
      if (lookahead == 'u') ADVANCE(4023);
      END_STATE();
    case 3880:
      if (lookahead == 'p') ADVANCE(4024);
      END_STATE();
    case 3881:
      if (lookahead == 'i') ADVANCE(4025);
      END_STATE();
    case 3882:
      if (lookahead == 'p') ADVANCE(4026);
      END_STATE();
    case 3883:
      if (lookahead == 't') ADVANCE(4027);
      END_STATE();
    case 3884:
      if (lookahead == 'd') ADVANCE(4028);
      END_STATE();
    case 3885:
      if (lookahead == 't') ADVANCE(4029);
      END_STATE();
    case 3886:
      if (lookahead == 'u') ADVANCE(4030);
      END_STATE();
    case 3887:
      if (lookahead == 'n') ADVANCE(4031);
      END_STATE();
    case 3888:
      if (lookahead == 'u') ADVANCE(4032);
      END_STATE();
    case 3889:
      if (lookahead == 'n') ADVANCE(4033);
      END_STATE();
    case 3890:
      if (lookahead == 'u') ADVANCE(4034);
      END_STATE();
    case 3891:
      if (lookahead == 't') ADVANCE(4035);
      END_STATE();
    case 3892:
      if (lookahead == 'u') ADVANCE(4036);
      END_STATE();
    case 3893:
      ACCEPT_TOKEN(anon_sym_RatioPollutantOutput2);
      END_STATE();
    case 3894:
      ACCEPT_TOKEN(anon_sym_RatioVolatilesOutput2);
      END_STATE();
    case 3895:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3896:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3897:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3898:
      if (lookahead == 't') ADVANCE(4037);
      END_STATE();
    case 3899:
      if (lookahead == 'e') ADVANCE(4038);
      END_STATE();
    case 3900:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3901:
      if (lookahead == 's') ADVANCE(4039);
      END_STATE();
    case 3902:
      if (lookahead == 'd') ADVANCE(4040);
      END_STATE();
    case 3903:
      if (lookahead == 'e') ADVANCE(4041);
      END_STATE();
    case 3904:
      if (lookahead == 'r') ADVANCE(4042);
      END_STATE();
    case 3905:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3906:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3907:
      if (lookahead == 'd') ADVANCE(4043);
      END_STATE();
    case 3908:
      if (lookahead == 'c') ADVANCE(4044);
      END_STATE();
    case 3909:
      if (lookahead == 't') ADVANCE(4045);
      END_STATE();
    case 3910:
      if (lookahead == 'a') ADVANCE(4046);
      END_STATE();
    case 3911:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 3912:
      if (lookahead == 'v') ADVANCE(4047);
      END_STATE();
    case 3913:
      ACCEPT_TOKEN(anon_sym_CurrentResearchPodType);
      END_STATE();
    case 3914:
      if (lookahead == 'a') ADVANCE(4048);
      END_STATE();
    case 3915:
      if (lookahead == 'i') ADVANCE(4049);
      END_STATE();
    case 3916:
      if (lookahead == 't') ADVANCE(4050);
      END_STATE();
    case 3917:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3918:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3919:
      if (lookahead == 'o') ADVANCE(4051);
      END_STATE();
    case 3920:
      if (lookahead == 'x') ADVANCE(4052);
      END_STATE();
    case 3921:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 3922:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 3923:
      if (lookahead == 't') ADVANCE(4053);
      END_STATE();
    case 3924:
      if (lookahead == 'c') ADVANCE(4054);
      END_STATE();
    case 3925:
      if (lookahead == 'p') ADVANCE(4055);
      END_STATE();
    case 3926:
      if (lookahead == 'e') ADVANCE(4056);
      END_STATE();
    case 3927:
      if (lookahead == 'i') ADVANCE(4057);
      END_STATE();
    case 3928:
      if (lookahead == 'H') ADVANCE(4058);
      END_STATE();
    case 3929:
      if (lookahead == 's') ADVANCE(4059);
      END_STATE();
    case 3930:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(4060);
      if (lookahead == 'W') ADVANCE(4061);
      END_STATE();
    case 3931:
      if (lookahead == 'e') ADVANCE(4062);
      END_STATE();
    case 3932:
      if (lookahead == 'l') ADVANCE(4063);
      END_STATE();
    case 3933:
      if (lookahead == 'u') ADVANCE(4064);
      END_STATE();
    case 3934:
      if (lookahead == 'o') ADVANCE(4065);
      END_STATE();
    case 3935:
      if (lookahead == 'i') ADVANCE(4066);
      END_STATE();
    case 3936:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 3937:
      if (lookahead == 'e') ADVANCE(4067);
      END_STATE();
    case 3938:
      if (lookahead == 'i') ADVANCE(4068);
      END_STATE();
    case 3939:
      if (lookahead == 'o') ADVANCE(4069);
      END_STATE();
    case 3940:
      if (lookahead == 'p') ADVANCE(4070);
      END_STATE();
    case 3941:
      if (lookahead == 'm') ADVANCE(4071);
      END_STATE();
    case 3942:
      if (lookahead == 't') ADVANCE(4072);
      END_STATE();
    case 3943:
      if (lookahead == 't') ADVANCE(4073);
      END_STATE();
    case 3944:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3945:
      if (lookahead == 'r') ADVANCE(4074);
      END_STATE();
    case 3946:
      if (lookahead == 'o') ADVANCE(4075);
      END_STATE();
    case 3947:
      if (lookahead == 'o') ADVANCE(4076);
      END_STATE();
    case 3948:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 3949:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3950:
      if (lookahead == 'f') ADVANCE(4077);
      END_STATE();
    case 3951:
      if (lookahead == 'i') ADVANCE(4078);
      END_STATE();
    case 3952:
      if (lookahead == 't') ADVANCE(4079);
      END_STATE();
    case 3953:
      if (lookahead == 's') ADVANCE(4080);
      END_STATE();
    case 3954:
      if (lookahead == 'c') ADVANCE(4081);
      END_STATE();
    case 3955:
      if (lookahead == 'l') ADVANCE(4082);
      END_STATE();
    case 3956:
      if (lookahead == 't') ADVANCE(4083);
      END_STATE();
    case 3957:
      if (lookahead == 't') ADVANCE(4084);
      END_STATE();
    case 3958:
      if (lookahead == 's') ADVANCE(4085);
      END_STATE();
    case 3959:
      if (lookahead == 'c') ADVANCE(4086);
      END_STATE();
    case 3960:
      if (lookahead == 'n') ADVANCE(4087);
      END_STATE();
    case 3961:
      if (lookahead == 'c') ADVANCE(4088);
      END_STATE();
    case 3962:
      if (lookahead == 'u') ADVANCE(4089);
      END_STATE();
    case 3963:
      if (lookahead == 'i') ADVANCE(4090);
      END_STATE();
    case 3964:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 3965:
      if (lookahead == 'T') ADVANCE(4091);
      END_STATE();
    case 3966:
      if (lookahead == 'v') ADVANCE(4092);
      END_STATE();
    case 3967:
      if (lookahead == 'e') ADVANCE(4093);
      END_STATE();
    case 3968:
      if (lookahead == 'n') ADVANCE(4094);
      END_STATE();
    case 3969:
      if (lookahead == 'i') ADVANCE(4095);
      END_STATE();
    case 3970:
      if (lookahead == 'a') ADVANCE(4096);
      END_STATE();
    case 3971:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 3972:
      if (lookahead == 'c') ADVANCE(4097);
      END_STATE();
    case 3973:
      if (lookahead == 'r') ADVANCE(4098);
      END_STATE();
    case 3974:
      if (lookahead == 't') ADVANCE(4099);
      END_STATE();
    case 3975:
      if (lookahead == 'r') ADVANCE(4100);
      END_STATE();
    case 3976:
      if (lookahead == 'u') ADVANCE(4101);
      END_STATE();
    case 3977:
      if (lookahead == 'i') ADVANCE(4102);
      END_STATE();
    case 3978:
      if (lookahead == 'i') ADVANCE(4103);
      END_STATE();
    case 3979:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 3980:
      if (lookahead == 'a') ADVANCE(4104);
      END_STATE();
    case 3981:
      if (lookahead == 'y') ADVANCE(4105);
      END_STATE();
    case 3982:
      if (lookahead == 'i') ADVANCE(4106);
      END_STATE();
    case 3983:
      if (lookahead == 'x') ADVANCE(4107);
      END_STATE();
    case 3984:
      if (lookahead == 'o') ADVANCE(4108);
      END_STATE();
    case 3985:
      if (lookahead == 'o') ADVANCE(4109);
      END_STATE();
    case 3986:
      if (lookahead == 'n') ADVANCE(4110);
      END_STATE();
    case 3987:
      if (lookahead == 'O') ADVANCE(4111);
      END_STATE();
    case 3988:
      if (lookahead == 'n') ADVANCE(4112);
      END_STATE();
    case 3989:
      if (lookahead == 'u') ADVANCE(4113);
      END_STATE();
    case 3990:
      if (lookahead == 'n') ADVANCE(4114);
      END_STATE();
    case 3991:
      if (lookahead == 'd') ADVANCE(4115);
      END_STATE();
    case 3992:
      if (lookahead == 'p') ADVANCE(4116);
      END_STATE();
    case 3993:
      if (lookahead == 't') ADVANCE(4117);
      END_STATE();
    case 3994:
      if (lookahead == 'e') ADVANCE(4118);
      END_STATE();
    case 3995:
      if (lookahead == 'p') ADVANCE(4119);
      END_STATE();
    case 3996:
      if (lookahead == 't') ADVANCE(4120);
      END_STATE();
    case 3997:
      if (lookahead == 'u') ADVANCE(4121);
      END_STATE();
    case 3998:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 3999:
      if (lookahead == 's') ADVANCE(4122);
      END_STATE();
    case 4000:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4001:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4002:
      if (lookahead == 't') ADVANCE(4123);
      END_STATE();
    case 4003:
      if (lookahead == 'n') ADVANCE(4124);
      END_STATE();
    case 4004:
      if (lookahead == 'e') ADVANCE(4125);
      END_STATE();
    case 4005:
      if (lookahead == 'i') ADVANCE(4126);
      END_STATE();
    case 4006:
      if (lookahead == 'x') ADVANCE(4127);
      END_STATE();
    case 4007:
      if (lookahead == 'n') ADVANCE(4128);
      END_STATE();
    case 4008:
      if (lookahead == 'u') ADVANCE(4129);
      END_STATE();
    case 4009:
      if (lookahead == 'e') ADVANCE(4130);
      END_STATE();
    case 4010:
      if (lookahead == 'h') ADVANCE(4131);
      END_STATE();
    case 4011:
      if (lookahead == 'a') ADVANCE(4132);
      END_STATE();
    case 4012:
      if (lookahead == 'p') ADVANCE(4133);
      END_STATE();
    case 4013:
      if (lookahead == 't') ADVANCE(4134);
      END_STATE();
    case 4014:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4015:
      if (lookahead == 'i') ADVANCE(4135);
      END_STATE();
    case 4016:
      if (lookahead == 't') ADVANCE(4136);
      END_STATE();
    case 4017:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 4018:
      if (lookahead == 'i') ADVANCE(4137);
      END_STATE();
    case 4019:
      if (lookahead == 'g') ADVANCE(4138);
      END_STATE();
    case 4020:
      if (lookahead == 'f') ADVANCE(4139);
      END_STATE();
    case 4021:
      if (lookahead == 'P') ADVANCE(4140);
      END_STATE();
    case 4022:
      if (lookahead == 'E') ADVANCE(4141);
      END_STATE();
    case 4023:
      if (lookahead == 't') ADVANCE(4142);
      END_STATE();
    case 4024:
      if (lookahead == 'u') ADVANCE(4143);
      END_STATE();
    case 4025:
      if (lookahead == 'd') ADVANCE(4144);
      END_STATE();
    case 4026:
      if (lookahead == 'u') ADVANCE(4145);
      END_STATE();
    case 4027:
      if (lookahead == 'p') ADVANCE(4146);
      END_STATE();
    case 4028:
      if (lookahead == 'e') ADVANCE(4147);
      END_STATE();
    case 4029:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenInput);
      if (lookahead == '2') ADVANCE(4148);
      END_STATE();
    case 4030:
      if (lookahead == 't') ADVANCE(4149);
      END_STATE();
    case 4031:
      if (lookahead == 'p') ADVANCE(4150);
      END_STATE();
    case 4032:
      if (lookahead == 't') ADVANCE(4151);
      END_STATE();
    case 4033:
      if (lookahead == 'p') ADVANCE(4152);
      END_STATE();
    case 4034:
      if (lookahead == 't') ADVANCE(4153);
      END_STATE();
    case 4035:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideInput);
      if (lookahead == '2') ADVANCE(4154);
      END_STATE();
    case 4036:
      if (lookahead == 't') ADVANCE(4155);
      END_STATE();
    case 4037:
      if (lookahead == 'e') ADVANCE(4156);
      END_STATE();
    case 4038:
      if (lookahead == 'C') ADVANCE(4157);
      END_STATE();
    case 4039:
      if (lookahead == 's') ADVANCE(4158);
      END_STATE();
    case 4040:
      if (lookahead == 'g') ADVANCE(4159);
      END_STATE();
    case 4041:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4042:
      if (lookahead == 'i') ADVANCE(4160);
      END_STATE();
    case 4043:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4044:
      if (lookahead == 't') ADVANCE(4161);
      END_STATE();
    case 4045:
      if (lookahead == 'e') ADVANCE(4162);
      END_STATE();
    case 4046:
      if (lookahead == 'l') ADVANCE(4163);
      END_STATE();
    case 4047:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4048:
      if (lookahead == 'u') ADVANCE(4164);
      END_STATE();
    case 4049:
      if (lookahead == 'z') ADVANCE(4165);
      END_STATE();
    case 4050:
      if (lookahead == 'i') ADVANCE(4166);
      END_STATE();
    case 4051:
      if (lookahead == 'x') ADVANCE(4167);
      END_STATE();
    case 4052:
      if (lookahead == 'i') ADVANCE(4168);
      END_STATE();
    case 4053:
      if (lookahead == 'i') ADVANCE(4169);
      END_STATE();
    case 4054:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4055:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4056:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4057:
      if (lookahead == 't') ADVANCE(4170);
      END_STATE();
    case 4058:
      if (lookahead == 'a') ADVANCE(4171);
      END_STATE();
    case 4059:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4060:
      if (lookahead == 'i') ADVANCE(4172);
      END_STATE();
    case 4061:
      if (lookahead == 'a') ADVANCE(4173);
      END_STATE();
    case 4062:
      if (lookahead == 'I') ADVANCE(4174);
      END_STATE();
    case 4063:
      if (lookahead == 'a') ADVANCE(4175);
      END_STATE();
    case 4064:
      if (lookahead == 'r') ADVANCE(4176);
      END_STATE();
    case 4065:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4066:
      if (lookahead == 'n') ADVANCE(4177);
      END_STATE();
    case 4067:
      if (lookahead == 'n') ADVANCE(4178);
      END_STATE();
    case 4068:
      if (lookahead == 'n') ADVANCE(4179);
      END_STATE();
    case 4069:
      if (lookahead == 'o') ADVANCE(4180);
      END_STATE();
    case 4070:
      if (lookahead == 'u') ADVANCE(4181);
      END_STATE();
    case 4071:
      if (lookahead == 'i') ADVANCE(4182);
      END_STATE();
    case 4072:
      if (lookahead == 'p') ADVANCE(4183);
      END_STATE();
    case 4073:
      if (lookahead == 'i') ADVANCE(4184);
      END_STATE();
    case 4074:
      if (lookahead == 'c') ADVANCE(4185);
      END_STATE();
    case 4075:
      if (lookahead == 'd') ADVANCE(4186);
      END_STATE();
    case 4076:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 4077:
      if (lookahead == 'f') ADVANCE(4187);
      END_STATE();
    case 4078:
      if (lookahead == 't') ADVANCE(4188);
      END_STATE();
    case 4079:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4080:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4081:
      if (lookahead == 'u') ADVANCE(4189);
      END_STATE();
    case 4082:
      if (lookahead == 'R') ADVANCE(4190);
      END_STATE();
    case 4083:
      if (lookahead == 'i') ADVANCE(4191);
      END_STATE();
    case 4084:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4085:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4086:
      if (lookahead == 'u') ADVANCE(4192);
      END_STATE();
    case 4087:
      if (lookahead == 'P') ADVANCE(4193);
      END_STATE();
    case 4088:
      if (lookahead == 'h') ADVANCE(4194);
      END_STATE();
    case 4089:
      if (lookahead == 'e') ADVANCE(4195);
      END_STATE();
    case 4090:
      if (lookahead == 'c') ADVANCE(4196);
      END_STATE();
    case 4091:
      if (lookahead == 'o') ADVANCE(4197);
      END_STATE();
    case 4092:
      if (lookahead == 'e') ADVANCE(4198);
      END_STATE();
    case 4093:
      if (lookahead == 'm') ADVANCE(4199);
      END_STATE();
    case 4094:
      if (lookahead == 'c') ADVANCE(4200);
      END_STATE();
    case 4095:
      if (lookahead == 'o') ADVANCE(4201);
      END_STATE();
    case 4096:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4097:
      if (lookahead == 'i') ADVANCE(4202);
      END_STATE();
    case 4098:
      if (lookahead == 'n') ADVANCE(4203);
      END_STATE();
    case 4099:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4100:
      if (lookahead == 'n') ADVANCE(4204);
      END_STATE();
    case 4101:
      if (lookahead == 't') ADVANCE(4205);
      END_STATE();
    case 4102:
      if (lookahead == 'n') ADVANCE(4206);
      END_STATE();
    case 4103:
      if (lookahead == 'o') ADVANCE(4207);
      END_STATE();
    case 4104:
      if (lookahead == 'r') ADVANCE(4208);
      END_STATE();
    case 4105:
      if (lookahead == 'd') ADVANCE(4209);
      END_STATE();
    case 4106:
      if (lookahead == 't') ADVANCE(4210);
      END_STATE();
    case 4107:
      if (lookahead == 'y') ADVANCE(4211);
      END_STATE();
    case 4108:
      if (lookahead == 'l') ADVANCE(4212);
      END_STATE();
    case 4109:
      if (lookahead == 'l') ADVANCE(4213);
      END_STATE();
    case 4110:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4214);
      if (lookahead == 'O') ADVANCE(4215);
      END_STATE();
    case 4111:
      if (lookahead == 'x') ADVANCE(4216);
      END_STATE();
    case 4112:
      if (lookahead == 'p') ADVANCE(4217);
      END_STATE();
    case 4113:
      if (lookahead == 't') ADVANCE(4218);
      END_STATE();
    case 4114:
      if (lookahead == 't') ADVANCE(4219);
      END_STATE();
    case 4115:
      if (lookahead == 'W') ADVANCE(4220);
      END_STATE();
    case 4116:
      if (lookahead == 'u') ADVANCE(4221);
      END_STATE();
    case 4117:
      if (lookahead == 'p') ADVANCE(4222);
      END_STATE();
    case 4118:
      if (lookahead == 's') ADVANCE(4223);
      END_STATE();
    case 4119:
      if (lookahead == 'u') ADVANCE(4224);
      END_STATE();
    case 4120:
      if (lookahead == 'p') ADVANCE(4225);
      END_STATE();
    case 4121:
      if (lookahead == 'd') ADVANCE(4226);
      END_STATE();
    case 4122:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4123:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4124:
      if (lookahead == 'c') ADVANCE(4227);
      END_STATE();
    case 4125:
      if (lookahead == 'x') ADVANCE(434);
      END_STATE();
    case 4126:
      if (lookahead == 'f') ADVANCE(4228);
      END_STATE();
    case 4127:
      if (lookahead == 't') ADVANCE(4229);
      END_STATE();
    case 4128:
      if (lookahead == 'p') ADVANCE(4230);
      END_STATE();
    case 4129:
      if (lookahead == 't') ADVANCE(4231);
      END_STATE();
    case 4130:
      if (lookahead == 't') ADVANCE(4232);
      END_STATE();
    case 4131:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4132:
      if (lookahead == 't') ADVANCE(4233);
      END_STATE();
    case 4133:
      if (lookahead == 'u') ADVANCE(4234);
      END_STATE();
    case 4134:
      if (lookahead == 'p') ADVANCE(4235);
      END_STATE();
    case 4135:
      if (lookahead == 't') ADVANCE(4236);
      END_STATE();
    case 4136:
      if (lookahead == 'i') ADVANCE(4237);
      END_STATE();
    case 4137:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 4138:
      if (lookahead == 'C') ADVANCE(4238);
      END_STATE();
    case 4139:
      if (lookahead == 'i') ADVANCE(4239);
      END_STATE();
    case 4140:
      if (lookahead == 'o') ADVANCE(4240);
      END_STATE();
    case 4141:
      if (lookahead == 'f') ADVANCE(4241);
      END_STATE();
    case 4142:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideInput);
      if (lookahead == '2') ADVANCE(4242);
      END_STATE();
    case 4143:
      if (lookahead == 't') ADVANCE(4243);
      END_STATE();
    case 4144:
      if (lookahead == 'e') ADVANCE(4244);
      END_STATE();
    case 4145:
      if (lookahead == 't') ADVANCE(4245);
      END_STATE();
    case 4146:
      if (lookahead == 'u') ADVANCE(4246);
      END_STATE();
    case 4147:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxide);
      if (lookahead == 'I') ADVANCE(4247);
      if (lookahead == 'O') ADVANCE(4248);
      END_STATE();
    case 4148:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenInput2);
      END_STATE();
    case 4149:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenOutput);
      if (lookahead == '2') ADVANCE(4249);
      END_STATE();
    case 4150:
      if (lookahead == 'u') ADVANCE(4250);
      END_STATE();
    case 4151:
      if (lookahead == 'p') ADVANCE(4251);
      END_STATE();
    case 4152:
      if (lookahead == 'u') ADVANCE(4252);
      END_STATE();
    case 4153:
      if (lookahead == 'p') ADVANCE(4253);
      END_STATE();
    case 4154:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideInput2);
      END_STATE();
    case 4155:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideOutput);
      if (lookahead == '2') ADVANCE(4254);
      END_STATE();
    case 4156:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4157:
      if (lookahead == 'h') ADVANCE(4255);
      END_STATE();
    case 4158:
      if (lookahead == 'i') ADVANCE(4256);
      END_STATE();
    case 4159:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4160:
      if (lookahead == 'c') ADVANCE(4257);
      END_STATE();
    case 4161:
      if (lookahead == 'e') ADVANCE(4258);
      END_STATE();
    case 4162:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 4163:
      if (lookahead == 'E') ADVANCE(4259);
      END_STATE();
    case 4164:
      if (lookahead == 'l') ADVANCE(4260);
      END_STATE();
    case 4165:
      if (lookahead == 'o') ADVANCE(4261);
      END_STATE();
    case 4166:
      if (lookahead == 'c') ADVANCE(4262);
      END_STATE();
    case 4167:
      if (lookahead == 'i') ADVANCE(4263);
      END_STATE();
    case 4168:
      if (lookahead == 'd') ADVANCE(4264);
      END_STATE();
    case 4169:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 4170:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4171:
      if (lookahead == 's') ADVANCE(4265);
      END_STATE();
    case 4172:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4173:
      if (lookahead == 's') ADVANCE(4266);
      END_STATE();
    case 4174:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 4175:
      if (lookahead == 's') ADVANCE(4267);
      END_STATE();
    case 4176:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4177:
      if (lookahead == 'i') ADVANCE(4268);
      END_STATE();
    case 4178:
      if (lookahead == 't') ADVANCE(4269);
      END_STATE();
    case 4179:
      if (lookahead == 't') ADVANCE(4270);
      END_STATE();
    case 4180:
      if (lookahead == 'd') ADVANCE(4271);
      END_STATE();
    case 4181:
      if (lookahead == 't') ADVANCE(4272);
      END_STATE();
    case 4182:
      if (lookahead == 't') ADVANCE(4273);
      END_STATE();
    case 4183:
      if (lookahead == 'u') ADVANCE(4274);
      END_STATE();
    case 4184:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 4185:
      if (lookahead == 'h') ADVANCE(4275);
      END_STATE();
    case 4186:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4187:
      if (lookahead == 'i') ADVANCE(4276);
      END_STATE();
    case 4188:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4189:
      if (lookahead == 'p') ADVANCE(4277);
      END_STATE();
    case 4190:
      if (lookahead == 'u') ADVANCE(4278);
      END_STATE();
    case 4191:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 4192:
      if (lookahead == 'p') ADVANCE(4279);
      END_STATE();
    case 4193:
      if (lookahead == 'r') ADVANCE(4280);
      END_STATE();
    case 4194:
      if (lookahead == 'R') ADVANCE(4281);
      END_STATE();
    case 4195:
      if (lookahead == 'u') ADVANCE(4282);
      END_STATE();
    case 4196:
      if (lookahead == 'i') ADVANCE(4283);
      END_STATE();
    case 4197:
      if (lookahead == 'C') ADVANCE(4284);
      END_STATE();
    case 4198:
      if (lookahead == 'n') ADVANCE(4285);
      END_STATE();
    case 4199:
      if (lookahead == 'p') ADVANCE(4286);
      END_STATE();
    case 4200:
      if (lookahead == 'y') ADVANCE(4287);
      END_STATE();
    case 4201:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 4202:
      if (lookahead == 'e') ADVANCE(4288);
      END_STATE();
    case 4203:
      if (lookahead == 'a') ADVANCE(4289);
      END_STATE();
    case 4204:
      if (lookahead == 'a') ADVANCE(4290);
      END_STATE();
    case 4205:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4206:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 4207:
      if (lookahead == 'x') ADVANCE(4291);
      END_STATE();
    case 4208:
      if (lookahead == 'b') ADVANCE(4292);
      END_STATE();
    case 4209:
      if (lookahead == 'r') ADVANCE(4293);
      END_STATE();
    case 4210:
      if (lookahead == 'r') ADVANCE(4294);
      END_STATE();
    case 4211:
      if (lookahead == 'g') ADVANCE(4295);
      END_STATE();
    case 4212:
      if (lookahead == 'l') ADVANCE(4296);
      END_STATE();
    case 4213:
      if (lookahead == 'a') ADVANCE(4297);
      END_STATE();
    case 4214:
      if (lookahead == 'n') ADVANCE(4298);
      END_STATE();
    case 4215:
      if (lookahead == 'u') ADVANCE(4299);
      END_STATE();
    case 4216:
      if (lookahead == 'i') ADVANCE(4300);
      END_STATE();
    case 4217:
      if (lookahead == 'u') ADVANCE(4301);
      END_STATE();
    case 4218:
      if (lookahead == 'p') ADVANCE(4302);
      END_STATE();
    case 4219:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4303);
      if (lookahead == 'O') ADVANCE(4304);
      END_STATE();
    case 4220:
      if (lookahead == 'a') ADVANCE(4305);
      END_STATE();
    case 4221:
      if (lookahead == 't') ADVANCE(4306);
      END_STATE();
    case 4222:
      if (lookahead == 'u') ADVANCE(4307);
      END_STATE();
    case 4223:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4308);
      if (lookahead == 'O') ADVANCE(4309);
      END_STATE();
    case 4224:
      if (lookahead == 't') ADVANCE(4310);
      END_STATE();
    case 4225:
      if (lookahead == 'u') ADVANCE(4311);
      END_STATE();
    case 4226:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4227:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4228:
      if (lookahead == 'f') ADVANCE(4312);
      END_STATE();
    case 4229:
      if (lookahead == 'e') ADVANCE(4313);
      END_STATE();
    case 4230:
      if (lookahead == 'u') ADVANCE(4314);
      END_STATE();
    case 4231:
      if (lookahead == 'p') ADVANCE(4315);
      END_STATE();
    case 4232:
      if (lookahead == 't') ADVANCE(4316);
      END_STATE();
    case 4233:
      if (lookahead == 'i') ADVANCE(4317);
      END_STATE();
    case 4234:
      if (lookahead == 't') ADVANCE(4318);
      END_STATE();
    case 4235:
      if (lookahead == 'u') ADVANCE(4319);
      END_STATE();
    case 4236:
      if (lookahead == 'u') ADVANCE(4320);
      END_STATE();
    case 4237:
      if (lookahead == 'v') ADVANCE(4321);
      END_STATE();
    case 4238:
      if (lookahead == 'o') ADVANCE(4322);
      END_STATE();
    case 4239:
      if (lookahead == 'c') ADVANCE(4323);
      END_STATE();
    case 4240:
      if (lookahead == 'd') ADVANCE(4324);
      END_STATE();
    case 4241:
      if (lookahead == 'f') ADVANCE(4325);
      END_STATE();
    case 4242:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideInput2);
      END_STATE();
    case 4243:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideOutput);
      if (lookahead == '2') ADVANCE(4326);
      END_STATE();
    case 4244:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxide);
      if (lookahead == 'I') ADVANCE(4327);
      if (lookahead == 'O') ADVANCE(4328);
      END_STATE();
    case 4245:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenInput);
      if (lookahead == '2') ADVANCE(4329);
      END_STATE();
    case 4246:
      if (lookahead == 't') ADVANCE(4330);
      END_STATE();
    case 4247:
      if (lookahead == 'n') ADVANCE(4331);
      END_STATE();
    case 4248:
      if (lookahead == 'u') ADVANCE(4332);
      END_STATE();
    case 4249:
      ACCEPT_TOKEN(anon_sym_RatioLiquidOxygenOutput2);
      END_STATE();
    case 4250:
      if (lookahead == 't') ADVANCE(4333);
      END_STATE();
    case 4251:
      if (lookahead == 'u') ADVANCE(4334);
      END_STATE();
    case 4252:
      if (lookahead == 't') ADVANCE(4335);
      END_STATE();
    case 4253:
      if (lookahead == 'u') ADVANCE(4336);
      END_STATE();
    case 4254:
      ACCEPT_TOKEN(anon_sym_RatioNitrousOxideOutput2);
      END_STATE();
    case 4255:
      if (lookahead == 'i') ADVANCE(4337);
      END_STATE();
    case 4256:
      if (lookahead == 'n') ADVANCE(4338);
      END_STATE();
    case 4257:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4258:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 4259:
      if (lookahead == 'f') ADVANCE(4339);
      END_STATE();
    case 4260:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4261:
      if (lookahead == 'n') ADVANCE(4340);
      END_STATE();
    case 4262:
      if (lookahead == 'a') ADVANCE(4341);
      END_STATE();
    case 4263:
      if (lookahead == 'd') ADVANCE(4342);
      END_STATE();
    case 4264:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4265:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4266:
      if (lookahead == 't') ADVANCE(4343);
      END_STATE();
    case 4267:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4268:
      if (lookahead == 'n') ADVANCE(4344);
      END_STATE();
    case 4269:
      if (lookahead == 'H') ADVANCE(4345);
      END_STATE();
    case 4270:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4271:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4272:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4273:
      if (lookahead == 'e') ADVANCE(4346);
      END_STATE();
    case 4274:
      if (lookahead == 't') ADVANCE(4347);
      END_STATE();
    case 4275:
      if (lookahead == 'P') ADVANCE(4348);
      END_STATE();
    case 4276:
      if (lookahead == 'c') ADVANCE(4349);
      END_STATE();
    case 4277:
      if (lookahead == 'a') ADVANCE(4350);
      END_STATE();
    case 4278:
      if (lookahead == 'l') ADVANCE(4351);
      END_STATE();
    case 4279:
      if (lookahead == 'a') ADVANCE(4352);
      END_STATE();
    case 4280:
      if (lookahead == 'o') ADVANCE(4353);
      END_STATE();
    case 4281:
      if (lookahead == 'e') ADVANCE(4354);
      END_STATE();
    case 4282:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4283:
      if (lookahead == 'n') ADVANCE(4355);
      END_STATE();
    case 4284:
      if (lookahead == 'o') ADVANCE(4356);
      END_STATE();
    case 4285:
      if (lookahead == 't') ADVANCE(4357);
      END_STATE();
    case 4286:
      if (lookahead == 'e') ADVANCE(4358);
      END_STATE();
    case 4287:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(434);
      END_STATE();
    case 4288:
      if (lookahead == 'n') ADVANCE(4359);
      END_STATE();
    case 4289:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4290:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4291:
      if (lookahead == 'i') ADVANCE(4360);
      END_STATE();
    case 4292:
      if (lookahead == 'o') ADVANCE(4361);
      END_STATE();
    case 4293:
      if (lookahead == 'o') ADVANCE(4362);
      END_STATE();
    case 4294:
      if (lookahead == 'o') ADVANCE(4363);
      END_STATE();
    case 4295:
      if (lookahead == 'e') ADVANCE(4364);
      END_STATE();
    case 4296:
      if (lookahead == 'u') ADVANCE(4365);
      END_STATE();
    case 4297:
      if (lookahead == 't') ADVANCE(4366);
      END_STATE();
    case 4298:
      if (lookahead == 'p') ADVANCE(4367);
      END_STATE();
    case 4299:
      if (lookahead == 't') ADVANCE(4368);
      END_STATE();
    case 4300:
      if (lookahead == 'd') ADVANCE(4369);
      END_STATE();
    case 4301:
      if (lookahead == 't') ADVANCE(4370);
      END_STATE();
    case 4302:
      if (lookahead == 'u') ADVANCE(4371);
      END_STATE();
    case 4303:
      if (lookahead == 'n') ADVANCE(4372);
      END_STATE();
    case 4304:
      if (lookahead == 'u') ADVANCE(4373);
      END_STATE();
    case 4305:
      if (lookahead == 't') ADVANCE(4374);
      END_STATE();
    case 4306:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4307:
      if (lookahead == 't') ADVANCE(4375);
      END_STATE();
    case 4308:
      if (lookahead == 'n') ADVANCE(4376);
      END_STATE();
    case 4309:
      if (lookahead == 'u') ADVANCE(4377);
      END_STATE();
    case 4310:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4311:
      if (lookahead == 't') ADVANCE(4378);
      END_STATE();
    case 4312:
      if (lookahead == 'e') ADVANCE(4379);
      END_STATE();
    case 4313:
      if (lookahead == 'r') ADVANCE(4380);
      END_STATE();
    case 4314:
      if (lookahead == 't') ADVANCE(4381);
      END_STATE();
    case 4315:
      if (lookahead == 'u') ADVANCE(4382);
      END_STATE();
    case 4316:
      if (lookahead == 'i') ADVANCE(4383);
      END_STATE();
    case 4317:
      if (lookahead == 'o') ADVANCE(4384);
      END_STATE();
    case 4318:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4319:
      if (lookahead == 't') ADVANCE(4385);
      END_STATE();
    case 4320:
      if (lookahead == 'd') ADVANCE(4386);
      END_STATE();
    case 4321:
      if (lookahead == 'e') ADVANCE(4387);
      END_STATE();
    case 4322:
      if (lookahead == 'n') ADVANCE(4388);
      END_STATE();
    case 4323:
      if (lookahead == 'i') ADVANCE(4389);
      END_STATE();
    case 4324:
      ACCEPT_TOKEN(anon_sym_ManualResearchRequiredPod);
      END_STATE();
    case 4325:
      if (lookahead == 'i') ADVANCE(4390);
      END_STATE();
    case 4326:
      ACCEPT_TOKEN(anon_sym_RatioCarbonDioxideOutput2);
      END_STATE();
    case 4327:
      if (lookahead == 'n') ADVANCE(4391);
      END_STATE();
    case 4328:
      if (lookahead == 'u') ADVANCE(4392);
      END_STATE();
    case 4329:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenInput2);
      END_STATE();
    case 4330:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenOutput);
      if (lookahead == '2') ADVANCE(4393);
      END_STATE();
    case 4331:
      if (lookahead == 'p') ADVANCE(4394);
      END_STATE();
    case 4332:
      if (lookahead == 't') ADVANCE(4395);
      END_STATE();
    case 4333:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantInput);
      if (lookahead == '2') ADVANCE(4396);
      END_STATE();
    case 4334:
      if (lookahead == 't') ADVANCE(4397);
      END_STATE();
    case 4335:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesInput);
      if (lookahead == '2') ADVANCE(4398);
      END_STATE();
    case 4336:
      if (lookahead == 't') ADVANCE(4399);
      END_STATE();
    case 4337:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 4338:
      if (lookahead == 'g') ADVANCE(4400);
      END_STATE();
    case 4339:
      if (lookahead == 'f') ADVANCE(4401);
      END_STATE();
    case 4340:
      if (lookahead == 't') ADVANCE(4402);
      END_STATE();
    case 4341:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4342:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4343:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4344:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 4345:
      if (lookahead == 'a') ADVANCE(4403);
      END_STATE();
    case 4346:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4347:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4348:
      if (lookahead == 'o') ADVANCE(4404);
      END_STATE();
    case 4349:
      if (lookahead == 'i') ADVANCE(4405);
      END_STATE();
    case 4350:
      if (lookahead == 'n') ADVANCE(4406);
      END_STATE();
    case 4351:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4352:
      if (lookahead == 'n') ADVANCE(4407);
      END_STATE();
    case 4353:
      if (lookahead == 'g') ADVANCE(4408);
      END_STATE();
    case 4354:
      if (lookahead == 'q') ADVANCE(4409);
      END_STATE();
    case 4355:
      if (lookahead == 'i') ADVANCE(4410);
      END_STATE();
    case 4356:
      if (lookahead == 'n') ADVANCE(4411);
      END_STATE();
    case 4357:
      if (lookahead == 'T') ADVANCE(4412);
      END_STATE();
    case 4358:
      if (lookahead == 'r') ADVANCE(4413);
      END_STATE();
    case 4359:
      if (lookahead == 'c') ADVANCE(4414);
      END_STATE();
    case 4360:
      if (lookahead == 'd') ADVANCE(4415);
      END_STATE();
    case 4361:
      if (lookahead == 'n') ADVANCE(4416);
      END_STATE();
    case 4362:
      if (lookahead == 'g') ADVANCE(4417);
      END_STATE();
    case 4363:
      if (lookahead == 'g') ADVANCE(4418);
      if (lookahead == 'u') ADVANCE(4419);
      END_STATE();
    case 4364:
      if (lookahead == 'n') ADVANCE(4420);
      END_STATE();
    case 4365:
      if (lookahead == 't') ADVANCE(4421);
      END_STATE();
    case 4366:
      if (lookahead == 'i') ADVANCE(4422);
      END_STATE();
    case 4367:
      if (lookahead == 'u') ADVANCE(4423);
      END_STATE();
    case 4368:
      if (lookahead == 'p') ADVANCE(4424);
      END_STATE();
    case 4369:
      if (lookahead == 'e') ADVANCE(4425);
      END_STATE();
    case 4370:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4371:
      if (lookahead == 't') ADVANCE(4426);
      END_STATE();
    case 4372:
      if (lookahead == 'p') ADVANCE(4427);
      END_STATE();
    case 4373:
      if (lookahead == 't') ADVANCE(4428);
      END_STATE();
    case 4374:
      if (lookahead == 'e') ADVANCE(4429);
      END_STATE();
    case 4375:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4376:
      if (lookahead == 'p') ADVANCE(4430);
      END_STATE();
    case 4377:
      if (lookahead == 't') ADVANCE(4431);
      END_STATE();
    case 4378:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4379:
      if (lookahead == 'r') ADVANCE(4432);
      END_STATE();
    case 4380:
      if (lookahead == 'n') ADVANCE(4433);
      END_STATE();
    case 4381:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4382:
      if (lookahead == 't') ADVANCE(4434);
      END_STATE();
    case 4383:
      if (lookahead == 'n') ADVANCE(4435);
      END_STATE();
    case 4384:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 4385:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4386:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4387:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 4388:
      if (lookahead == 't') ADVANCE(4436);
      END_STATE();
    case 4389:
      if (lookahead == 'e') ADVANCE(4437);
      END_STATE();
    case 4390:
      if (lookahead == 'c') ADVANCE(4438);
      END_STATE();
    case 4391:
      if (lookahead == 'p') ADVANCE(4439);
      END_STATE();
    case 4392:
      if (lookahead == 't') ADVANCE(4440);
      END_STATE();
    case 4393:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrogenOutput2);
      END_STATE();
    case 4394:
      if (lookahead == 'u') ADVANCE(4441);
      END_STATE();
    case 4395:
      if (lookahead == 'p') ADVANCE(4442);
      END_STATE();
    case 4396:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantInput2);
      END_STATE();
    case 4397:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantOutput);
      if (lookahead == '2') ADVANCE(4443);
      END_STATE();
    case 4398:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesInput2);
      END_STATE();
    case 4399:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesOutput);
      if (lookahead == '2') ADVANCE(4444);
      END_STATE();
    case 4400:
      if (lookahead == 'U') ADVANCE(4445);
      END_STATE();
    case 4401:
      if (lookahead == 'i') ADVANCE(4446);
      END_STATE();
    case 4402:
      if (lookahead == 'a') ADVANCE(4447);
      END_STATE();
    case 4403:
      if (lookahead == 's') ADVANCE(4448);
      END_STATE();
    case 4404:
      if (lookahead == 'd') ADVANCE(4449);
      END_STATE();
    case 4405:
      if (lookahead == 'e') ADVANCE(4450);
      END_STATE();
    case 4406:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4407:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4408:
      if (lookahead == 'r') ADVANCE(4451);
      END_STATE();
    case 4409:
      if (lookahead == 'u') ADVANCE(4452);
      END_STATE();
    case 4410:
      if (lookahead == 't') ADVANCE(4453);
      END_STATE();
    case 4411:
      if (lookahead == 't') ADVANCE(4454);
      END_STATE();
    case 4412:
      if (lookahead == 'i') ADVANCE(4455);
      END_STATE();
    case 4413:
      if (lookahead == 'a') ADVANCE(4456);
      END_STATE();
    case 4414:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4415:
      if (lookahead == 'e') ADVANCE(4457);
      END_STATE();
    case 4416:
      if (lookahead == 'D') ADVANCE(4458);
      END_STATE();
    case 4417:
      if (lookahead == 'e') ADVANCE(4459);
      END_STATE();
    case 4418:
      if (lookahead == 'e') ADVANCE(4460);
      END_STATE();
    case 4419:
      if (lookahead == 's') ADVANCE(4461);
      END_STATE();
    case 4420:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4462);
      if (lookahead == 'O') ADVANCE(4463);
      END_STATE();
    case 4421:
      if (lookahead == 'a') ADVANCE(4464);
      END_STATE();
    case 4422:
      if (lookahead == 'l') ADVANCE(4465);
      END_STATE();
    case 4423:
      if (lookahead == 't') ADVANCE(4466);
      END_STATE();
    case 4424:
      if (lookahead == 'u') ADVANCE(4467);
      END_STATE();
    case 4425:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4468);
      if (lookahead == 'O') ADVANCE(4469);
      END_STATE();
    case 4426:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4427:
      if (lookahead == 'u') ADVANCE(4470);
      END_STATE();
    case 4428:
      if (lookahead == 'p') ADVANCE(4471);
      END_STATE();
    case 4429:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 4430:
      if (lookahead == 'u') ADVANCE(4472);
      END_STATE();
    case 4431:
      if (lookahead == 'p') ADVANCE(4473);
      END_STATE();
    case 4432:
      if (lookahead == 'e') ADVANCE(4474);
      END_STATE();
    case 4433:
      if (lookahead == 'a') ADVANCE(4475);
      END_STATE();
    case 4434:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4435:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 4436:
      if (lookahead == 'a') ADVANCE(4476);
      END_STATE();
    case 4437:
      if (lookahead == 'n') ADVANCE(4477);
      END_STATE();
    case 4438:
      if (lookahead == 'i') ADVANCE(4478);
      END_STATE();
    case 4439:
      if (lookahead == 'u') ADVANCE(4479);
      END_STATE();
    case 4440:
      if (lookahead == 'p') ADVANCE(4480);
      END_STATE();
    case 4441:
      if (lookahead == 't') ADVANCE(4481);
      END_STATE();
    case 4442:
      if (lookahead == 'u') ADVANCE(4482);
      END_STATE();
    case 4443:
      ACCEPT_TOKEN(anon_sym_RatioLiquidPollutantOutput2);
      END_STATE();
    case 4444:
      ACCEPT_TOKEN(anon_sym_RatioLiquidVolatilesOutput2);
      END_STATE();
    case 4445:
      if (lookahead == 'n') ADVANCE(4483);
      END_STATE();
    case 4446:
      if (lookahead == 'c') ADVANCE(4484);
      END_STATE();
    case 4447:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4448:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 4449:
      if (lookahead == 'T') ADVANCE(4485);
      END_STATE();
    case 4450:
      if (lookahead == 'n') ADVANCE(4486);
      END_STATE();
    case 4451:
      if (lookahead == 'e') ADVANCE(4487);
      END_STATE();
    case 4452:
      if (lookahead == 'i') ADVANCE(4488);
      END_STATE();
    case 4453:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4454:
      if (lookahead == 'a') ADVANCE(4489);
      END_STATE();
    case 4455:
      if (lookahead == 'm') ADVANCE(4490);
      END_STATE();
    case 4456:
      if (lookahead == 't') ADVANCE(4491);
      END_STATE();
    case 4457:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4492);
      if (lookahead == 'O') ADVANCE(4493);
      END_STATE();
    case 4458:
      if (lookahead == 'i') ADVANCE(4494);
      END_STATE();
    case 4459:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 4460:
      if (lookahead == 'n') ADVANCE(4495);
      END_STATE();
    case 4461:
      if (lookahead == 'O') ADVANCE(4496);
      END_STATE();
    case 4462:
      if (lookahead == 'n') ADVANCE(4497);
      END_STATE();
    case 4463:
      if (lookahead == 'u') ADVANCE(4498);
      END_STATE();
    case 4464:
      if (lookahead == 'n') ADVANCE(4499);
      END_STATE();
    case 4465:
      if (lookahead == 'e') ADVANCE(4500);
      END_STATE();
    case 4466:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4467:
      if (lookahead == 't') ADVANCE(4501);
      END_STATE();
    case 4468:
      if (lookahead == 'n') ADVANCE(4502);
      END_STATE();
    case 4469:
      if (lookahead == 'u') ADVANCE(4503);
      END_STATE();
    case 4470:
      if (lookahead == 't') ADVANCE(4504);
      END_STATE();
    case 4471:
      if (lookahead == 'u') ADVANCE(4505);
      END_STATE();
    case 4472:
      if (lookahead == 't') ADVANCE(4506);
      END_STATE();
    case 4473:
      if (lookahead == 'u') ADVANCE(4507);
      END_STATE();
    case 4474:
      if (lookahead == 'n') ADVANCE(4508);
      END_STATE();
    case 4475:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 4476:
      if (lookahead == 'c') ADVANCE(4509);
      END_STATE();
    case 4477:
      if (lookahead == 'c') ADVANCE(4510);
      END_STATE();
    case 4478:
      if (lookahead == 'e') ADVANCE(4511);
      END_STATE();
    case 4479:
      if (lookahead == 't') ADVANCE(4512);
      END_STATE();
    case 4480:
      if (lookahead == 'u') ADVANCE(4513);
      END_STATE();
    case 4481:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideInput);
      if (lookahead == '2') ADVANCE(4514);
      END_STATE();
    case 4482:
      if (lookahead == 't') ADVANCE(4515);
      END_STATE();
    case 4483:
      if (lookahead == 'i') ADVANCE(4516);
      END_STATE();
    case 4484:
      if (lookahead == 'i') ADVANCE(4517);
      END_STATE();
    case 4485:
      if (lookahead == 'y') ADVANCE(4518);
      END_STATE();
    case 4486:
      if (lookahead == 'c') ADVANCE(4519);
      END_STATE();
    case 4487:
      if (lookahead == 's') ADVANCE(4520);
      END_STATE();
    case 4488:
      if (lookahead == 'r') ADVANCE(4521);
      END_STATE();
    case 4489:
      if (lookahead == 'c') ADVANCE(4522);
      END_STATE();
    case 4490:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4491:
      if (lookahead == 'u') ADVANCE(4523);
      END_STATE();
    case 4492:
      if (lookahead == 'n') ADVANCE(4524);
      END_STATE();
    case 4493:
      if (lookahead == 'u') ADVANCE(4525);
      END_STATE();
    case 4494:
      if (lookahead == 'o') ADVANCE(4526);
      END_STATE();
    case 4495:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4527);
      if (lookahead == 'O') ADVANCE(4528);
      END_STATE();
    case 4496:
      if (lookahead == 'x') ADVANCE(4529);
      END_STATE();
    case 4497:
      if (lookahead == 'p') ADVANCE(4530);
      END_STATE();
    case 4498:
      if (lookahead == 't') ADVANCE(4531);
      END_STATE();
    case 4499:
      if (lookahead == 't') ADVANCE(4532);
      END_STATE();
    case 4500:
      if (lookahead == 's') ADVANCE(4533);
      END_STATE();
    case 4501:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4502:
      if (lookahead == 'p') ADVANCE(4534);
      END_STATE();
    case 4503:
      if (lookahead == 't') ADVANCE(4535);
      END_STATE();
    case 4504:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4505:
      if (lookahead == 't') ADVANCE(4536);
      END_STATE();
    case 4506:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4507:
      if (lookahead == 't') ADVANCE(4537);
      END_STATE();
    case 4508:
      if (lookahead == 't') ADVANCE(4538);
      END_STATE();
    case 4509:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4510:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4511:
      if (lookahead == 'n') ADVANCE(4539);
      END_STATE();
    case 4512:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideInput);
      if (lookahead == '2') ADVANCE(4540);
      END_STATE();
    case 4513:
      if (lookahead == 't') ADVANCE(4541);
      END_STATE();
    case 4514:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideInput2);
      END_STATE();
    case 4515:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideOutput);
      if (lookahead == '2') ADVANCE(4542);
      END_STATE();
    case 4516:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4517:
      if (lookahead == 'e') ADVANCE(4543);
      END_STATE();
    case 4518:
      if (lookahead == 'p') ADVANCE(4544);
      END_STATE();
    case 4519:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4520:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 4521:
      if (lookahead == 'e') ADVANCE(4545);
      END_STATE();
    case 4522:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 4523:
      if (lookahead == 'r') ADVANCE(4546);
      END_STATE();
    case 4524:
      if (lookahead == 'p') ADVANCE(4547);
      END_STATE();
    case 4525:
      if (lookahead == 't') ADVANCE(4548);
      END_STATE();
    case 4526:
      if (lookahead == 'x') ADVANCE(4549);
      END_STATE();
    case 4527:
      if (lookahead == 'n') ADVANCE(4550);
      END_STATE();
    case 4528:
      if (lookahead == 'u') ADVANCE(4551);
      END_STATE();
    case 4529:
      if (lookahead == 'i') ADVANCE(4552);
      END_STATE();
    case 4530:
      if (lookahead == 'u') ADVANCE(4553);
      END_STATE();
    case 4531:
      if (lookahead == 'p') ADVANCE(4554);
      END_STATE();
    case 4532:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4555);
      if (lookahead == 'O') ADVANCE(4556);
      END_STATE();
    case 4533:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4557);
      if (lookahead == 'O') ADVANCE(4558);
      END_STATE();
    case 4534:
      if (lookahead == 'u') ADVANCE(4559);
      END_STATE();
    case 4535:
      if (lookahead == 'p') ADVANCE(4560);
      END_STATE();
    case 4536:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4537:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4538:
      if (lookahead == 'i') ADVANCE(4561);
      END_STATE();
    case 4539:
      if (lookahead == 'c') ADVANCE(4562);
      END_STATE();
    case 4540:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideInput2);
      END_STATE();
    case 4541:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideOutput);
      if (lookahead == '2') ADVANCE(4563);
      END_STATE();
    case 4542:
      ACCEPT_TOKEN(anon_sym_RatioLiquidNitrousOxideOutput2);
      END_STATE();
    case 4543:
      if (lookahead == 'n') ADVANCE(4564);
      END_STATE();
    case 4544:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 4545:
      if (lookahead == 'd') ADVANCE(4565);
      END_STATE();
    case 4546:
      if (lookahead == 'e') ADVANCE(4566);
      END_STATE();
    case 4547:
      if (lookahead == 'u') ADVANCE(4567);
      END_STATE();
    case 4548:
      if (lookahead == 'p') ADVANCE(4568);
      END_STATE();
    case 4549:
      if (lookahead == 'i') ADVANCE(4569);
      END_STATE();
    case 4550:
      if (lookahead == 'p') ADVANCE(4570);
      END_STATE();
    case 4551:
      if (lookahead == 't') ADVANCE(4571);
      END_STATE();
    case 4552:
      if (lookahead == 'd') ADVANCE(4572);
      END_STATE();
    case 4553:
      if (lookahead == 't') ADVANCE(4573);
      END_STATE();
    case 4554:
      if (lookahead == 'u') ADVANCE(4574);
      END_STATE();
    case 4555:
      if (lookahead == 'n') ADVANCE(4575);
      END_STATE();
    case 4556:
      if (lookahead == 'u') ADVANCE(4576);
      END_STATE();
    case 4557:
      if (lookahead == 'n') ADVANCE(4577);
      END_STATE();
    case 4558:
      if (lookahead == 'u') ADVANCE(4578);
      END_STATE();
    case 4559:
      if (lookahead == 't') ADVANCE(4579);
      END_STATE();
    case 4560:
      if (lookahead == 'u') ADVANCE(4580);
      END_STATE();
    case 4561:
      if (lookahead == 'a') ADVANCE(4581);
      END_STATE();
    case 4562:
      if (lookahead == 'y') ADVANCE(4582);
      END_STATE();
    case 4563:
      ACCEPT_TOKEN(anon_sym_RatioLiquidCarbonDioxideOutput2);
      END_STATE();
    case 4564:
      if (lookahead == 'c') ADVANCE(4583);
      END_STATE();
    case 4565:
      if (lookahead == 'P') ADVANCE(4584);
      END_STATE();
    case 4566:
      if (lookahead == 'E') ADVANCE(4585);
      END_STATE();
    case 4567:
      if (lookahead == 't') ADVANCE(4586);
      END_STATE();
    case 4568:
      if (lookahead == 'u') ADVANCE(4587);
      END_STATE();
    case 4569:
      if (lookahead == 'd') ADVANCE(4588);
      END_STATE();
    case 4570:
      if (lookahead == 'u') ADVANCE(4589);
      END_STATE();
    case 4571:
      if (lookahead == 'p') ADVANCE(4590);
      END_STATE();
    case 4572:
      if (lookahead == 'e') ADVANCE(4591);
      END_STATE();
    case 4573:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4574:
      if (lookahead == 't') ADVANCE(4592);
      END_STATE();
    case 4575:
      if (lookahead == 'p') ADVANCE(4593);
      END_STATE();
    case 4576:
      if (lookahead == 't') ADVANCE(4594);
      END_STATE();
    case 4577:
      if (lookahead == 'p') ADVANCE(4595);
      END_STATE();
    case 4578:
      if (lookahead == 't') ADVANCE(4596);
      END_STATE();
    case 4579:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4580:
      if (lookahead == 't') ADVANCE(4597);
      END_STATE();
    case 4581:
      if (lookahead == 'l') ADVANCE(4598);
      END_STATE();
    case 4582:
      ACCEPT_TOKEN(anon_sym_OperationalTemperatureEfficiency);
      END_STATE();
    case 4583:
      if (lookahead == 'y') ADVANCE(4599);
      END_STATE();
    case 4584:
      if (lookahead == 'o') ADVANCE(4600);
      END_STATE();
    case 4585:
      if (lookahead == 'f') ADVANCE(4601);
      END_STATE();
    case 4586:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4587:
      if (lookahead == 't') ADVANCE(4602);
      END_STATE();
    case 4588:
      if (lookahead == 'e') ADVANCE(4603);
      END_STATE();
    case 4589:
      if (lookahead == 't') ADVANCE(4604);
      END_STATE();
    case 4590:
      if (lookahead == 'u') ADVANCE(4605);
      END_STATE();
    case 4591:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4606);
      if (lookahead == 'O') ADVANCE(4607);
      END_STATE();
    case 4592:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4593:
      if (lookahead == 'u') ADVANCE(4608);
      END_STATE();
    case 4594:
      if (lookahead == 'p') ADVANCE(4609);
      END_STATE();
    case 4595:
      if (lookahead == 'u') ADVANCE(4610);
      END_STATE();
    case 4596:
      if (lookahead == 'p') ADVANCE(4611);
      END_STATE();
    case 4597:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4598:
      if (lookahead == 'E') ADVANCE(4612);
      END_STATE();
    case 4599:
      ACCEPT_TOKEN(anon_sym_TemperatureDifferentialEfficiency);
      END_STATE();
    case 4600:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 4601:
      if (lookahead == 'f') ADVANCE(4613);
      END_STATE();
    case 4602:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4603:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(4614);
      if (lookahead == 'O') ADVANCE(4615);
      END_STATE();
    case 4604:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4605:
      if (lookahead == 't') ADVANCE(4616);
      END_STATE();
    case 4606:
      if (lookahead == 'n') ADVANCE(4617);
      END_STATE();
    case 4607:
      if (lookahead == 'u') ADVANCE(4618);
      END_STATE();
    case 4608:
      if (lookahead == 't') ADVANCE(4619);
      END_STATE();
    case 4609:
      if (lookahead == 'u') ADVANCE(4620);
      END_STATE();
    case 4610:
      if (lookahead == 't') ADVANCE(4621);
      END_STATE();
    case 4611:
      if (lookahead == 'u') ADVANCE(4622);
      END_STATE();
    case 4612:
      if (lookahead == 'f') ADVANCE(4623);
      END_STATE();
    case 4613:
      if (lookahead == 'i') ADVANCE(4624);
      END_STATE();
    case 4614:
      if (lookahead == 'n') ADVANCE(4625);
      END_STATE();
    case 4615:
      if (lookahead == 'u') ADVANCE(4626);
      END_STATE();
    case 4616:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4617:
      if (lookahead == 'p') ADVANCE(4627);
      END_STATE();
    case 4618:
      if (lookahead == 't') ADVANCE(4628);
      END_STATE();
    case 4619:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4620:
      if (lookahead == 't') ADVANCE(4629);
      END_STATE();
    case 4621:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4622:
      if (lookahead == 't') ADVANCE(4630);
      END_STATE();
    case 4623:
      if (lookahead == 'f') ADVANCE(4631);
      END_STATE();
    case 4624:
      if (lookahead == 'c') ADVANCE(4632);
      END_STATE();
    case 4625:
      if (lookahead == 'p') ADVANCE(4633);
      END_STATE();
    case 4626:
      if (lookahead == 't') ADVANCE(4634);
      END_STATE();
    case 4627:
      if (lookahead == 'u') ADVANCE(4635);
      END_STATE();
    case 4628:
      if (lookahead == 'p') ADVANCE(4636);
      END_STATE();
    case 4629:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4630:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4631:
      if (lookahead == 'i') ADVANCE(4637);
      END_STATE();
    case 4632:
      if (lookahead == 'i') ADVANCE(4638);
      END_STATE();
    case 4633:
      if (lookahead == 'u') ADVANCE(4639);
      END_STATE();
    case 4634:
      if (lookahead == 'p') ADVANCE(4640);
      END_STATE();
    case 4635:
      if (lookahead == 't') ADVANCE(4641);
      END_STATE();
    case 4636:
      if (lookahead == 'u') ADVANCE(4642);
      END_STATE();
    case 4637:
      if (lookahead == 'c') ADVANCE(4643);
      END_STATE();
    case 4638:
      if (lookahead == 'e') ADVANCE(4644);
      END_STATE();
    case 4639:
      if (lookahead == 't') ADVANCE(4645);
      END_STATE();
    case 4640:
      if (lookahead == 'u') ADVANCE(4646);
      END_STATE();
    case 4641:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4642:
      if (lookahead == 't') ADVANCE(4647);
      END_STATE();
    case 4643:
      if (lookahead == 'i') ADVANCE(4648);
      END_STATE();
    case 4644:
      if (lookahead == 'n') ADVANCE(4649);
      END_STATE();
    case 4645:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4646:
      if (lookahead == 't') ADVANCE(4650);
      END_STATE();
    case 4647:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4648:
      if (lookahead == 'e') ADVANCE(4651);
      END_STATE();
    case 4649:
      if (lookahead == 'c') ADVANCE(4652);
      END_STATE();
    case 4650:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(434);
      END_STATE();
    case 4651:
      if (lookahead == 'n') ADVANCE(4653);
      END_STATE();
    case 4652:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 4653:
      if (lookahead == 'c') ADVANCE(4654);
      END_STATE();
    case 4654:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 22},
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
    [anon_sym_Bypass] = ACTIONS(1),
    [anon_sym_CelestialHash] = ACTIONS(1),
    [anon_sym_CelestialParentHash] = ACTIONS(1),
    [anon_sym_Channel] = ACTIONS(1),
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
    [anon_sym_MinWattsToContact] = ACTIONS(1),
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
    [anon_sym_OverShootTarget] = ACTIONS(1),
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
    [anon_sym_SettingInputHash] = ACTIONS(1),
    [anon_sym_SettingOutput] = ACTIONS(1),
    [anon_sym_SettingOutputHash] = ACTIONS(1),
    [anon_sym_SignalID] = ACTIONS(1),
    [anon_sym_SignalStrength] = ACTIONS(1),
    [anon_sym_Sites] = ACTIONS(1),
    [anon_sym_Size] = ACTIONS(1),
    [anon_sym_SizeX] = ACTIONS(1),
    [anon_sym_SizeY] = ACTIONS(1),
    [anon_sym_SizeZ] = ACTIONS(1),
    [anon_sym_SolarAngle] = ACTIONS(1),
    [anon_sym_SolarConstant] = ACTIONS(1),
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
    [anon_sym_Unknown] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_line] = STATE(25),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(28),
    [sym_comment] = STATE(32),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(6),
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
    [sym_operand] = STATE(14),
    [sym_device_spec] = STATE(15),
    [sym_constant] = STATE(8),
    [sym_hash_preproc] = STATE(8),
    [sym_number] = STATE(15),
    [sym_logicable] = STATE(15),
    [sym_logictype] = STATE(13),
    [sym_logicslottype] = STATE(13),
    [sym_batchmode] = STATE(13),
    [sym_reagentmode] = STATE(13),
    [aux_sym_instruction_repeat1] = STATE(5),
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
    [anon_sym_Bypass] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel] = ACTIONS(35),
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
    [anon_sym_MinWattsToContact] = ACTIONS(35),
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
    [anon_sym_OverShootTarget] = ACTIONS(35),
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
    [anon_sym_SettingInputHash] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SettingOutputHash] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarConstant] = ACTIONS(35),
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
    [anon_sym_Unknown] = ACTIONS(35),
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
  },
  [3] = {
    [sym_operand] = STATE(14),
    [sym_device_spec] = STATE(15),
    [sym_constant] = STATE(8),
    [sym_hash_preproc] = STATE(8),
    [sym_number] = STATE(15),
    [sym_logicable] = STATE(15),
    [sym_logictype] = STATE(13),
    [sym_logicslottype] = STATE(13),
    [sym_batchmode] = STATE(13),
    [sym_reagentmode] = STATE(13),
    [aux_sym_instruction_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(50),
    [anon_sym_CR_LF] = ACTIONS(50),
    [anon_sym_CR] = ACTIONS(52),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(50),
    [sym_register] = ACTIONS(54),
    [sym_device] = ACTIONS(57),
    [anon_sym_nan] = ACTIONS(60),
    [anon_sym_pinf] = ACTIONS(60),
    [anon_sym_ninf] = ACTIONS(60),
    [anon_sym_pi] = ACTIONS(60),
    [anon_sym_deg2rad] = ACTIONS(60),
    [anon_sym_rad2deg] = ACTIONS(60),
    [anon_sym_epsilon] = ACTIONS(60),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(63),
    [aux_sym_number_token1] = ACTIONS(66),
    [anon_sym_Acceleration] = ACTIONS(69),
    [anon_sym_Activate] = ACTIONS(69),
    [anon_sym_AirRelease] = ACTIONS(69),
    [anon_sym_AlignmentError] = ACTIONS(69),
    [anon_sym_Apex] = ACTIONS(69),
    [anon_sym_AutoLand] = ACTIONS(69),
    [anon_sym_AutoShutOff] = ACTIONS(69),
    [anon_sym_Bpm] = ACTIONS(69),
    [anon_sym_BurnTimeRemaining] = ACTIONS(69),
    [anon_sym_Bypass] = ACTIONS(69),
    [anon_sym_CelestialHash] = ACTIONS(69),
    [anon_sym_CelestialParentHash] = ACTIONS(69),
    [anon_sym_Channel] = ACTIONS(69),
    [anon_sym_Channel0] = ACTIONS(69),
    [anon_sym_Channel1] = ACTIONS(69),
    [anon_sym_Channel2] = ACTIONS(69),
    [anon_sym_Channel3] = ACTIONS(69),
    [anon_sym_Channel4] = ACTIONS(69),
    [anon_sym_Channel5] = ACTIONS(69),
    [anon_sym_Channel6] = ACTIONS(69),
    [anon_sym_Channel7] = ACTIONS(69),
    [anon_sym_Charge] = ACTIONS(72),
    [anon_sym_Chart] = ACTIONS(69),
    [anon_sym_ChartedNavPoints] = ACTIONS(69),
    [anon_sym_ClearMemory] = ACTIONS(69),
    [anon_sym_CollectableGoods] = ACTIONS(69),
    [anon_sym_Color] = ACTIONS(69),
    [anon_sym_Combustion] = ACTIONS(69),
    [anon_sym_CombustionInput] = ACTIONS(69),
    [anon_sym_CombustionInput2] = ACTIONS(69),
    [anon_sym_CombustionLimiter] = ACTIONS(69),
    [anon_sym_CombustionOutput] = ACTIONS(69),
    [anon_sym_CombustionOutput2] = ACTIONS(69),
    [anon_sym_CompletionRatio] = ACTIONS(69),
    [anon_sym_ContactTypeId] = ACTIONS(69),
    [anon_sym_CurrentCode] = ACTIONS(69),
    [anon_sym_CurrentResearchPodType] = ACTIONS(69),
    [anon_sym_Density] = ACTIONS(69),
    [anon_sym_DestinationCode] = ACTIONS(69),
    [anon_sym_Discover] = ACTIONS(69),
    [anon_sym_DistanceAu] = ACTIONS(69),
    [anon_sym_DistanceKm] = ACTIONS(69),
    [anon_sym_DrillCondition] = ACTIONS(69),
    [anon_sym_DryMass] = ACTIONS(69),
    [anon_sym_Eccentricity] = ACTIONS(69),
    [anon_sym_ElevatorLevel] = ACTIONS(69),
    [anon_sym_ElevatorSpeed] = ACTIONS(69),
    [anon_sym_EntityState] = ACTIONS(69),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(69),
    [anon_sym_Error] = ACTIONS(69),
    [anon_sym_ExhaustVelocity] = ACTIONS(69),
    [anon_sym_ExportCount] = ACTIONS(69),
    [anon_sym_ExportQuantity] = ACTIONS(69),
    [anon_sym_ExportSlotHash] = ACTIONS(69),
    [anon_sym_ExportSlotOccupant] = ACTIONS(69),
    [anon_sym_Filtration] = ACTIONS(69),
    [anon_sym_FlightControlRule] = ACTIONS(69),
    [anon_sym_Flush] = ACTIONS(69),
    [anon_sym_ForceWrite] = ACTIONS(69),
    [anon_sym_ForwardX] = ACTIONS(69),
    [anon_sym_ForwardY] = ACTIONS(69),
    [anon_sym_ForwardZ] = ACTIONS(69),
    [anon_sym_Fuel] = ACTIONS(69),
    [anon_sym_Harvest] = ACTIONS(69),
    [anon_sym_Horizontal] = ACTIONS(69),
    [anon_sym_HorizontalRatio] = ACTIONS(69),
    [anon_sym_Idle] = ACTIONS(69),
    [anon_sym_ImportCount] = ACTIONS(69),
    [anon_sym_ImportQuantity] = ACTIONS(69),
    [anon_sym_ImportSlotHash] = ACTIONS(69),
    [anon_sym_ImportSlotOccupant] = ACTIONS(69),
    [anon_sym_Inclination] = ACTIONS(69),
    [anon_sym_Index] = ACTIONS(69),
    [anon_sym_InterrogationProgress] = ACTIONS(69),
    [anon_sym_LineNumber] = ACTIONS(72),
    [anon_sym_Lock] = ACTIONS(72),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(69),
    [anon_sym_Mass] = ACTIONS(69),
    [anon_sym_Maximum] = ACTIONS(75),
    [anon_sym_MinWattsToContact] = ACTIONS(69),
    [anon_sym_MineablesInQueue] = ACTIONS(69),
    [anon_sym_MineablesInVicinity] = ACTIONS(69),
    [anon_sym_MinedQuantity] = ACTIONS(69),
    [anon_sym_MinimumWattsToContact] = ACTIONS(69),
    [anon_sym_Mode] = ACTIONS(69),
    [anon_sym_NavPoints] = ACTIONS(69),
    [anon_sym_NextWeatherEventTime] = ACTIONS(69),
    [anon_sym_None] = ACTIONS(72),
    [anon_sym_On] = ACTIONS(72),
    [anon_sym_Open] = ACTIONS(72),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(69),
    [anon_sym_OrbitPeriod] = ACTIONS(69),
    [anon_sym_Orientation] = ACTIONS(69),
    [anon_sym_Output] = ACTIONS(69),
    [anon_sym_OverShootTarget] = ACTIONS(69),
    [anon_sym_PassedMoles] = ACTIONS(69),
    [anon_sym_Plant] = ACTIONS(69),
    [anon_sym_PlantEfficiency1] = ACTIONS(69),
    [anon_sym_PlantEfficiency2] = ACTIONS(69),
    [anon_sym_PlantEfficiency3] = ACTIONS(69),
    [anon_sym_PlantEfficiency4] = ACTIONS(69),
    [anon_sym_PlantGrowth1] = ACTIONS(69),
    [anon_sym_PlantGrowth2] = ACTIONS(69),
    [anon_sym_PlantGrowth3] = ACTIONS(69),
    [anon_sym_PlantGrowth4] = ACTIONS(69),
    [anon_sym_PlantHash1] = ACTIONS(69),
    [anon_sym_PlantHash2] = ACTIONS(69),
    [anon_sym_PlantHash3] = ACTIONS(69),
    [anon_sym_PlantHash4] = ACTIONS(69),
    [anon_sym_PlantHealth1] = ACTIONS(69),
    [anon_sym_PlantHealth2] = ACTIONS(69),
    [anon_sym_PlantHealth3] = ACTIONS(69),
    [anon_sym_PlantHealth4] = ACTIONS(69),
    [anon_sym_PositionX] = ACTIONS(69),
    [anon_sym_PositionY] = ACTIONS(69),
    [anon_sym_PositionZ] = ACTIONS(69),
    [anon_sym_Power] = ACTIONS(69),
    [anon_sym_PowerActual] = ACTIONS(69),
    [anon_sym_PowerGeneration] = ACTIONS(69),
    [anon_sym_PowerPotential] = ACTIONS(69),
    [anon_sym_PowerRequired] = ACTIONS(69),
    [anon_sym_PrefabHash] = ACTIONS(72),
    [anon_sym_Pressure] = ACTIONS(72),
    [anon_sym_PressureEfficiency] = ACTIONS(69),
    [anon_sym_PressureExternal] = ACTIONS(69),
    [anon_sym_PressureInput] = ACTIONS(69),
    [anon_sym_PressureInput2] = ACTIONS(69),
    [anon_sym_PressureInternal] = ACTIONS(69),
    [anon_sym_PressureOutput] = ACTIONS(69),
    [anon_sym_PressureOutput2] = ACTIONS(69),
    [anon_sym_PressureSetting] = ACTIONS(69),
    [anon_sym_Progress] = ACTIONS(69),
    [anon_sym_Quantity] = ACTIONS(72),
    [anon_sym_Ratio] = ACTIONS(69),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(69),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(69),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(69),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(69),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(69),
    [anon_sym_RatioHydrogen] = ACTIONS(69),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(69),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(69),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(69),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(69),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(69),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(69),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(69),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(69),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(69),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(69),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(69),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(69),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(69),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(69),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(69),
    [anon_sym_RatioNitrogen] = ACTIONS(69),
    [anon_sym_RatioNitrogenInput] = ACTIONS(69),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(69),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(69),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(69),
    [anon_sym_RatioNitrousOxide] = ACTIONS(69),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(69),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(69),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(69),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(69),
    [anon_sym_RatioOxygen] = ACTIONS(69),
    [anon_sym_RatioOxygenInput] = ACTIONS(69),
    [anon_sym_RatioOxygenInput2] = ACTIONS(69),
    [anon_sym_RatioOxygenOutput] = ACTIONS(69),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(69),
    [anon_sym_RatioPollutant] = ACTIONS(69),
    [anon_sym_RatioPollutantInput] = ACTIONS(69),
    [anon_sym_RatioPollutantInput2] = ACTIONS(69),
    [anon_sym_RatioPollutantOutput] = ACTIONS(69),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(69),
    [anon_sym_RatioPollutedWater] = ACTIONS(69),
    [anon_sym_RatioSteam] = ACTIONS(69),
    [anon_sym_RatioSteamInput] = ACTIONS(69),
    [anon_sym_RatioSteamInput2] = ACTIONS(69),
    [anon_sym_RatioSteamOutput] = ACTIONS(69),
    [anon_sym_RatioSteamOutput2] = ACTIONS(69),
    [anon_sym_RatioVolatiles] = ACTIONS(69),
    [anon_sym_RatioVolatilesInput] = ACTIONS(69),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(69),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(69),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(69),
    [anon_sym_RatioWater] = ACTIONS(69),
    [anon_sym_RatioWaterInput] = ACTIONS(69),
    [anon_sym_RatioWaterInput2] = ACTIONS(69),
    [anon_sym_RatioWaterOutput] = ACTIONS(69),
    [anon_sym_RatioWaterOutput2] = ACTIONS(69),
    [anon_sym_ReEntryAltitude] = ACTIONS(69),
    [anon_sym_Reagents] = ACTIONS(69),
    [anon_sym_RecipeHash] = ACTIONS(69),
    [anon_sym_ReferenceId] = ACTIONS(72),
    [anon_sym_RequestHash] = ACTIONS(69),
    [anon_sym_RequiredPower] = ACTIONS(69),
    [anon_sym_ReturnFuelCost] = ACTIONS(69),
    [anon_sym_Richness] = ACTIONS(69),
    [anon_sym_Rpm] = ACTIONS(69),
    [anon_sym_SemiMajorAxis] = ACTIONS(69),
    [anon_sym_Setting] = ACTIONS(69),
    [anon_sym_SettingInput] = ACTIONS(69),
    [anon_sym_SettingInputHash] = ACTIONS(69),
    [anon_sym_SettingOutput] = ACTIONS(69),
    [anon_sym_SettingOutputHash] = ACTIONS(69),
    [anon_sym_SignalID] = ACTIONS(69),
    [anon_sym_SignalStrength] = ACTIONS(69),
    [anon_sym_Sites] = ACTIONS(69),
    [anon_sym_Size] = ACTIONS(69),
    [anon_sym_SizeX] = ACTIONS(69),
    [anon_sym_SizeY] = ACTIONS(69),
    [anon_sym_SizeZ] = ACTIONS(69),
    [anon_sym_SolarAngle] = ACTIONS(69),
    [anon_sym_SolarConstant] = ACTIONS(69),
    [anon_sym_SolarIrradiance] = ACTIONS(69),
    [anon_sym_SoundAlert] = ACTIONS(69),
    [anon_sym_Stress] = ACTIONS(69),
    [anon_sym_Survey] = ACTIONS(69),
    [anon_sym_TargetPadIndex] = ACTIONS(69),
    [anon_sym_TargetX] = ACTIONS(69),
    [anon_sym_TargetY] = ACTIONS(69),
    [anon_sym_TargetZ] = ACTIONS(69),
    [anon_sym_Temperature] = ACTIONS(72),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(69),
    [anon_sym_TemperatureExternal] = ACTIONS(69),
    [anon_sym_TemperatureInput] = ACTIONS(69),
    [anon_sym_TemperatureInput2] = ACTIONS(69),
    [anon_sym_TemperatureOutput] = ACTIONS(69),
    [anon_sym_TemperatureOutput2] = ACTIONS(69),
    [anon_sym_TemperatureSetting] = ACTIONS(69),
    [anon_sym_Throttle] = ACTIONS(69),
    [anon_sym_Thrust] = ACTIONS(69),
    [anon_sym_ThrustToWeight] = ACTIONS(69),
    [anon_sym_Time] = ACTIONS(69),
    [anon_sym_TimeToDestination] = ACTIONS(69),
    [anon_sym_TotalMoles] = ACTIONS(69),
    [anon_sym_TotalMolesInput] = ACTIONS(69),
    [anon_sym_TotalMolesInput2] = ACTIONS(69),
    [anon_sym_TotalMolesOutput] = ACTIONS(69),
    [anon_sym_TotalMolesOutput2] = ACTIONS(69),
    [anon_sym_TotalQuantity] = ACTIONS(69),
    [anon_sym_TrueAnomaly] = ACTIONS(69),
    [anon_sym_Unknown] = ACTIONS(69),
    [anon_sym_VelocityMagnitude] = ACTIONS(69),
    [anon_sym_VelocityRelativeX] = ACTIONS(69),
    [anon_sym_VelocityRelativeY] = ACTIONS(69),
    [anon_sym_VelocityRelativeZ] = ACTIONS(69),
    [anon_sym_VelocityX] = ACTIONS(69),
    [anon_sym_VelocityY] = ACTIONS(69),
    [anon_sym_VelocityZ] = ACTIONS(69),
    [anon_sym_Vertical] = ACTIONS(69),
    [anon_sym_VerticalRatio] = ACTIONS(69),
    [anon_sym_Volume] = ACTIONS(72),
    [anon_sym_VolumeOfLiquid] = ACTIONS(69),
    [anon_sym_WattsReachingContact] = ACTIONS(69),
    [anon_sym_Weight] = ACTIONS(69),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(69),
    [anon_sym_ChargeRatio] = ACTIONS(78),
    [anon_sym_Class] = ACTIONS(78),
    [anon_sym_Damage] = ACTIONS(78),
    [anon_sym_Efficiency] = ACTIONS(78),
    [anon_sym_FilterType] = ACTIONS(78),
    [anon_sym_Growth] = ACTIONS(78),
    [anon_sym_Health] = ACTIONS(78),
    [anon_sym_Mature] = ACTIONS(78),
    [anon_sym_MaxQuantity] = ACTIONS(78),
    [anon_sym_OccupantHash] = ACTIONS(78),
    [anon_sym_Occupied] = ACTIONS(78),
    [anon_sym_PressureAir] = ACTIONS(78),
    [anon_sym_PressureWaste] = ACTIONS(78),
    [anon_sym_Seeding] = ACTIONS(78),
    [anon_sym_SortingClass] = ACTIONS(78),
    [anon_sym_Average] = ACTIONS(81),
    [anon_sym_Minimum] = ACTIONS(81),
    [anon_sym_Sum] = ACTIONS(81),
    [anon_sym_Contents] = ACTIONS(84),
    [anon_sym_Recipe] = ACTIONS(84),
    [anon_sym_Required] = ACTIONS(84),
    [anon_sym_TotalContents] = ACTIONS(84),
    [sym_enum] = ACTIONS(66),
  },
  [4] = {
    [sym_operand] = STATE(14),
    [sym_device_spec] = STATE(15),
    [sym_constant] = STATE(8),
    [sym_hash_preproc] = STATE(8),
    [sym_number] = STATE(15),
    [sym_logicable] = STATE(15),
    [sym_logictype] = STATE(13),
    [sym_logicslottype] = STATE(13),
    [sym_batchmode] = STATE(13),
    [sym_reagentmode] = STATE(13),
    [aux_sym_instruction_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_CR_LF] = ACTIONS(87),
    [anon_sym_CR] = ACTIONS(89),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(87),
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
    [anon_sym_Bypass] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel] = ACTIONS(35),
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
    [anon_sym_MinWattsToContact] = ACTIONS(35),
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
    [anon_sym_OverShootTarget] = ACTIONS(35),
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
    [anon_sym_SettingInputHash] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SettingOutputHash] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarConstant] = ACTIONS(35),
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
    [anon_sym_Unknown] = ACTIONS(35),
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
  },
  [5] = {
    [sym_operand] = STATE(14),
    [sym_device_spec] = STATE(15),
    [sym_constant] = STATE(8),
    [sym_hash_preproc] = STATE(8),
    [sym_number] = STATE(15),
    [sym_logicable] = STATE(15),
    [sym_logictype] = STATE(13),
    [sym_logicslottype] = STATE(13),
    [sym_batchmode] = STATE(13),
    [sym_reagentmode] = STATE(13),
    [aux_sym_instruction_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_CR_LF] = ACTIONS(91),
    [anon_sym_CR] = ACTIONS(93),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(91),
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
    [anon_sym_Bypass] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel] = ACTIONS(35),
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
    [anon_sym_MinWattsToContact] = ACTIONS(35),
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
    [anon_sym_OverShootTarget] = ACTIONS(35),
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
    [anon_sym_SettingInputHash] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SettingOutputHash] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarConstant] = ACTIONS(35),
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
    [anon_sym_Unknown] = ACTIONS(35),
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
  },
  [6] = {
    [sym_operand] = STATE(14),
    [sym_device_spec] = STATE(15),
    [sym_constant] = STATE(8),
    [sym_hash_preproc] = STATE(8),
    [sym_number] = STATE(15),
    [sym_logicable] = STATE(15),
    [sym_logictype] = STATE(13),
    [sym_logicslottype] = STATE(13),
    [sym_batchmode] = STATE(13),
    [sym_reagentmode] = STATE(13),
    [aux_sym_instruction_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_CR_LF] = ACTIONS(95),
    [anon_sym_CR] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(95),
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
    [anon_sym_Bypass] = ACTIONS(35),
    [anon_sym_CelestialHash] = ACTIONS(35),
    [anon_sym_CelestialParentHash] = ACTIONS(35),
    [anon_sym_Channel] = ACTIONS(35),
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
    [anon_sym_MinWattsToContact] = ACTIONS(35),
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
    [anon_sym_OverShootTarget] = ACTIONS(35),
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
    [anon_sym_SettingInputHash] = ACTIONS(35),
    [anon_sym_SettingOutput] = ACTIONS(35),
    [anon_sym_SettingOutputHash] = ACTIONS(35),
    [anon_sym_SignalID] = ACTIONS(35),
    [anon_sym_SignalStrength] = ACTIONS(35),
    [anon_sym_Sites] = ACTIONS(35),
    [anon_sym_Size] = ACTIONS(35),
    [anon_sym_SizeX] = ACTIONS(35),
    [anon_sym_SizeY] = ACTIONS(35),
    [anon_sym_SizeZ] = ACTIONS(35),
    [anon_sym_SolarAngle] = ACTIONS(35),
    [anon_sym_SolarConstant] = ACTIONS(35),
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
    [anon_sym_Unknown] = ACTIONS(35),
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
  },
  [7] = {
    [sym_identifier] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_CR_LF] = ACTIONS(103),
    [anon_sym_CR] = ACTIONS(99),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(103),
    [sym_register] = ACTIONS(103),
    [sym_device] = ACTIONS(103),
    [anon_sym_nan] = ACTIONS(99),
    [anon_sym_pinf] = ACTIONS(99),
    [anon_sym_ninf] = ACTIONS(99),
    [anon_sym_pi] = ACTIONS(99),
    [anon_sym_deg2rad] = ACTIONS(99),
    [anon_sym_rad2deg] = ACTIONS(99),
    [anon_sym_epsilon] = ACTIONS(99),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(103),
    [aux_sym_number_token1] = ACTIONS(103),
    [anon_sym_Acceleration] = ACTIONS(99),
    [anon_sym_Activate] = ACTIONS(99),
    [anon_sym_AirRelease] = ACTIONS(99),
    [anon_sym_AlignmentError] = ACTIONS(99),
    [anon_sym_Apex] = ACTIONS(99),
    [anon_sym_AutoLand] = ACTIONS(99),
    [anon_sym_AutoShutOff] = ACTIONS(99),
    [anon_sym_Bpm] = ACTIONS(99),
    [anon_sym_BurnTimeRemaining] = ACTIONS(99),
    [anon_sym_Bypass] = ACTIONS(99),
    [anon_sym_CelestialHash] = ACTIONS(99),
    [anon_sym_CelestialParentHash] = ACTIONS(99),
    [anon_sym_Channel] = ACTIONS(99),
    [anon_sym_Channel0] = ACTIONS(99),
    [anon_sym_Channel1] = ACTIONS(99),
    [anon_sym_Channel2] = ACTIONS(99),
    [anon_sym_Channel3] = ACTIONS(99),
    [anon_sym_Channel4] = ACTIONS(99),
    [anon_sym_Channel5] = ACTIONS(99),
    [anon_sym_Channel6] = ACTIONS(99),
    [anon_sym_Channel7] = ACTIONS(99),
    [anon_sym_Charge] = ACTIONS(99),
    [anon_sym_Chart] = ACTIONS(99),
    [anon_sym_ChartedNavPoints] = ACTIONS(99),
    [anon_sym_ClearMemory] = ACTIONS(99),
    [anon_sym_CollectableGoods] = ACTIONS(99),
    [anon_sym_Color] = ACTIONS(99),
    [anon_sym_Combustion] = ACTIONS(99),
    [anon_sym_CombustionInput] = ACTIONS(99),
    [anon_sym_CombustionInput2] = ACTIONS(99),
    [anon_sym_CombustionLimiter] = ACTIONS(99),
    [anon_sym_CombustionOutput] = ACTIONS(99),
    [anon_sym_CombustionOutput2] = ACTIONS(99),
    [anon_sym_CompletionRatio] = ACTIONS(99),
    [anon_sym_ContactTypeId] = ACTIONS(99),
    [anon_sym_CurrentCode] = ACTIONS(99),
    [anon_sym_CurrentResearchPodType] = ACTIONS(99),
    [anon_sym_Density] = ACTIONS(99),
    [anon_sym_DestinationCode] = ACTIONS(99),
    [anon_sym_Discover] = ACTIONS(99),
    [anon_sym_DistanceAu] = ACTIONS(99),
    [anon_sym_DistanceKm] = ACTIONS(99),
    [anon_sym_DrillCondition] = ACTIONS(99),
    [anon_sym_DryMass] = ACTIONS(99),
    [anon_sym_Eccentricity] = ACTIONS(99),
    [anon_sym_ElevatorLevel] = ACTIONS(99),
    [anon_sym_ElevatorSpeed] = ACTIONS(99),
    [anon_sym_EntityState] = ACTIONS(99),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(99),
    [anon_sym_Error] = ACTIONS(99),
    [anon_sym_ExhaustVelocity] = ACTIONS(99),
    [anon_sym_ExportCount] = ACTIONS(99),
    [anon_sym_ExportQuantity] = ACTIONS(99),
    [anon_sym_ExportSlotHash] = ACTIONS(99),
    [anon_sym_ExportSlotOccupant] = ACTIONS(99),
    [anon_sym_Filtration] = ACTIONS(99),
    [anon_sym_FlightControlRule] = ACTIONS(99),
    [anon_sym_Flush] = ACTIONS(99),
    [anon_sym_ForceWrite] = ACTIONS(99),
    [anon_sym_ForwardX] = ACTIONS(99),
    [anon_sym_ForwardY] = ACTIONS(99),
    [anon_sym_ForwardZ] = ACTIONS(99),
    [anon_sym_Fuel] = ACTIONS(99),
    [anon_sym_Harvest] = ACTIONS(99),
    [anon_sym_Horizontal] = ACTIONS(99),
    [anon_sym_HorizontalRatio] = ACTIONS(99),
    [anon_sym_Idle] = ACTIONS(99),
    [anon_sym_ImportCount] = ACTIONS(99),
    [anon_sym_ImportQuantity] = ACTIONS(99),
    [anon_sym_ImportSlotHash] = ACTIONS(99),
    [anon_sym_ImportSlotOccupant] = ACTIONS(99),
    [anon_sym_Inclination] = ACTIONS(99),
    [anon_sym_Index] = ACTIONS(99),
    [anon_sym_InterrogationProgress] = ACTIONS(99),
    [anon_sym_LineNumber] = ACTIONS(99),
    [anon_sym_Lock] = ACTIONS(99),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(99),
    [anon_sym_Mass] = ACTIONS(99),
    [anon_sym_Maximum] = ACTIONS(99),
    [anon_sym_MinWattsToContact] = ACTIONS(99),
    [anon_sym_MineablesInQueue] = ACTIONS(99),
    [anon_sym_MineablesInVicinity] = ACTIONS(99),
    [anon_sym_MinedQuantity] = ACTIONS(99),
    [anon_sym_MinimumWattsToContact] = ACTIONS(99),
    [anon_sym_Mode] = ACTIONS(99),
    [anon_sym_NavPoints] = ACTIONS(99),
    [anon_sym_NextWeatherEventTime] = ACTIONS(99),
    [anon_sym_None] = ACTIONS(99),
    [anon_sym_On] = ACTIONS(99),
    [anon_sym_Open] = ACTIONS(99),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(99),
    [anon_sym_OrbitPeriod] = ACTIONS(99),
    [anon_sym_Orientation] = ACTIONS(99),
    [anon_sym_Output] = ACTIONS(99),
    [anon_sym_OverShootTarget] = ACTIONS(99),
    [anon_sym_PassedMoles] = ACTIONS(99),
    [anon_sym_Plant] = ACTIONS(99),
    [anon_sym_PlantEfficiency1] = ACTIONS(99),
    [anon_sym_PlantEfficiency2] = ACTIONS(99),
    [anon_sym_PlantEfficiency3] = ACTIONS(99),
    [anon_sym_PlantEfficiency4] = ACTIONS(99),
    [anon_sym_PlantGrowth1] = ACTIONS(99),
    [anon_sym_PlantGrowth2] = ACTIONS(99),
    [anon_sym_PlantGrowth3] = ACTIONS(99),
    [anon_sym_PlantGrowth4] = ACTIONS(99),
    [anon_sym_PlantHash1] = ACTIONS(99),
    [anon_sym_PlantHash2] = ACTIONS(99),
    [anon_sym_PlantHash3] = ACTIONS(99),
    [anon_sym_PlantHash4] = ACTIONS(99),
    [anon_sym_PlantHealth1] = ACTIONS(99),
    [anon_sym_PlantHealth2] = ACTIONS(99),
    [anon_sym_PlantHealth3] = ACTIONS(99),
    [anon_sym_PlantHealth4] = ACTIONS(99),
    [anon_sym_PositionX] = ACTIONS(99),
    [anon_sym_PositionY] = ACTIONS(99),
    [anon_sym_PositionZ] = ACTIONS(99),
    [anon_sym_Power] = ACTIONS(99),
    [anon_sym_PowerActual] = ACTIONS(99),
    [anon_sym_PowerGeneration] = ACTIONS(99),
    [anon_sym_PowerPotential] = ACTIONS(99),
    [anon_sym_PowerRequired] = ACTIONS(99),
    [anon_sym_PrefabHash] = ACTIONS(99),
    [anon_sym_Pressure] = ACTIONS(99),
    [anon_sym_PressureEfficiency] = ACTIONS(99),
    [anon_sym_PressureExternal] = ACTIONS(99),
    [anon_sym_PressureInput] = ACTIONS(99),
    [anon_sym_PressureInput2] = ACTIONS(99),
    [anon_sym_PressureInternal] = ACTIONS(99),
    [anon_sym_PressureOutput] = ACTIONS(99),
    [anon_sym_PressureOutput2] = ACTIONS(99),
    [anon_sym_PressureSetting] = ACTIONS(99),
    [anon_sym_Progress] = ACTIONS(99),
    [anon_sym_Quantity] = ACTIONS(99),
    [anon_sym_Ratio] = ACTIONS(99),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(99),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(99),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(99),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(99),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(99),
    [anon_sym_RatioHydrogen] = ACTIONS(99),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(99),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(99),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(99),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(99),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(99),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(99),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(99),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(99),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(99),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(99),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(99),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(99),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(99),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(99),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(99),
    [anon_sym_RatioNitrogen] = ACTIONS(99),
    [anon_sym_RatioNitrogenInput] = ACTIONS(99),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(99),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(99),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(99),
    [anon_sym_RatioNitrousOxide] = ACTIONS(99),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(99),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(99),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(99),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(99),
    [anon_sym_RatioOxygen] = ACTIONS(99),
    [anon_sym_RatioOxygenInput] = ACTIONS(99),
    [anon_sym_RatioOxygenInput2] = ACTIONS(99),
    [anon_sym_RatioOxygenOutput] = ACTIONS(99),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(99),
    [anon_sym_RatioPollutant] = ACTIONS(99),
    [anon_sym_RatioPollutantInput] = ACTIONS(99),
    [anon_sym_RatioPollutantInput2] = ACTIONS(99),
    [anon_sym_RatioPollutantOutput] = ACTIONS(99),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(99),
    [anon_sym_RatioPollutedWater] = ACTIONS(99),
    [anon_sym_RatioSteam] = ACTIONS(99),
    [anon_sym_RatioSteamInput] = ACTIONS(99),
    [anon_sym_RatioSteamInput2] = ACTIONS(99),
    [anon_sym_RatioSteamOutput] = ACTIONS(99),
    [anon_sym_RatioSteamOutput2] = ACTIONS(99),
    [anon_sym_RatioVolatiles] = ACTIONS(99),
    [anon_sym_RatioVolatilesInput] = ACTIONS(99),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(99),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(99),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(99),
    [anon_sym_RatioWater] = ACTIONS(99),
    [anon_sym_RatioWaterInput] = ACTIONS(99),
    [anon_sym_RatioWaterInput2] = ACTIONS(99),
    [anon_sym_RatioWaterOutput] = ACTIONS(99),
    [anon_sym_RatioWaterOutput2] = ACTIONS(99),
    [anon_sym_ReEntryAltitude] = ACTIONS(99),
    [anon_sym_Reagents] = ACTIONS(99),
    [anon_sym_RecipeHash] = ACTIONS(99),
    [anon_sym_ReferenceId] = ACTIONS(99),
    [anon_sym_RequestHash] = ACTIONS(99),
    [anon_sym_RequiredPower] = ACTIONS(99),
    [anon_sym_ReturnFuelCost] = ACTIONS(99),
    [anon_sym_Richness] = ACTIONS(99),
    [anon_sym_Rpm] = ACTIONS(99),
    [anon_sym_SemiMajorAxis] = ACTIONS(99),
    [anon_sym_Setting] = ACTIONS(99),
    [anon_sym_SettingInput] = ACTIONS(99),
    [anon_sym_SettingInputHash] = ACTIONS(99),
    [anon_sym_SettingOutput] = ACTIONS(99),
    [anon_sym_SettingOutputHash] = ACTIONS(99),
    [anon_sym_SignalID] = ACTIONS(99),
    [anon_sym_SignalStrength] = ACTIONS(99),
    [anon_sym_Sites] = ACTIONS(99),
    [anon_sym_Size] = ACTIONS(99),
    [anon_sym_SizeX] = ACTIONS(99),
    [anon_sym_SizeY] = ACTIONS(99),
    [anon_sym_SizeZ] = ACTIONS(99),
    [anon_sym_SolarAngle] = ACTIONS(99),
    [anon_sym_SolarConstant] = ACTIONS(99),
    [anon_sym_SolarIrradiance] = ACTIONS(99),
    [anon_sym_SoundAlert] = ACTIONS(99),
    [anon_sym_Stress] = ACTIONS(99),
    [anon_sym_Survey] = ACTIONS(99),
    [anon_sym_TargetPadIndex] = ACTIONS(99),
    [anon_sym_TargetX] = ACTIONS(99),
    [anon_sym_TargetY] = ACTIONS(99),
    [anon_sym_TargetZ] = ACTIONS(99),
    [anon_sym_Temperature] = ACTIONS(99),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(99),
    [anon_sym_TemperatureExternal] = ACTIONS(99),
    [anon_sym_TemperatureInput] = ACTIONS(99),
    [anon_sym_TemperatureInput2] = ACTIONS(99),
    [anon_sym_TemperatureOutput] = ACTIONS(99),
    [anon_sym_TemperatureOutput2] = ACTIONS(99),
    [anon_sym_TemperatureSetting] = ACTIONS(99),
    [anon_sym_Throttle] = ACTIONS(99),
    [anon_sym_Thrust] = ACTIONS(99),
    [anon_sym_ThrustToWeight] = ACTIONS(99),
    [anon_sym_Time] = ACTIONS(99),
    [anon_sym_TimeToDestination] = ACTIONS(99),
    [anon_sym_TotalMoles] = ACTIONS(99),
    [anon_sym_TotalMolesInput] = ACTIONS(99),
    [anon_sym_TotalMolesInput2] = ACTIONS(99),
    [anon_sym_TotalMolesOutput] = ACTIONS(99),
    [anon_sym_TotalMolesOutput2] = ACTIONS(99),
    [anon_sym_TotalQuantity] = ACTIONS(99),
    [anon_sym_TrueAnomaly] = ACTIONS(99),
    [anon_sym_Unknown] = ACTIONS(99),
    [anon_sym_VelocityMagnitude] = ACTIONS(99),
    [anon_sym_VelocityRelativeX] = ACTIONS(99),
    [anon_sym_VelocityRelativeY] = ACTIONS(99),
    [anon_sym_VelocityRelativeZ] = ACTIONS(99),
    [anon_sym_VelocityX] = ACTIONS(99),
    [anon_sym_VelocityY] = ACTIONS(99),
    [anon_sym_VelocityZ] = ACTIONS(99),
    [anon_sym_Vertical] = ACTIONS(99),
    [anon_sym_VerticalRatio] = ACTIONS(99),
    [anon_sym_Volume] = ACTIONS(99),
    [anon_sym_VolumeOfLiquid] = ACTIONS(99),
    [anon_sym_WattsReachingContact] = ACTIONS(99),
    [anon_sym_Weight] = ACTIONS(99),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(99),
    [anon_sym_ChargeRatio] = ACTIONS(99),
    [anon_sym_Class] = ACTIONS(99),
    [anon_sym_Damage] = ACTIONS(99),
    [anon_sym_Efficiency] = ACTIONS(99),
    [anon_sym_FilterType] = ACTIONS(99),
    [anon_sym_Growth] = ACTIONS(99),
    [anon_sym_Health] = ACTIONS(99),
    [anon_sym_Mature] = ACTIONS(99),
    [anon_sym_MaxQuantity] = ACTIONS(99),
    [anon_sym_OccupantHash] = ACTIONS(99),
    [anon_sym_Occupied] = ACTIONS(99),
    [anon_sym_PressureAir] = ACTIONS(99),
    [anon_sym_PressureWaste] = ACTIONS(99),
    [anon_sym_Seeding] = ACTIONS(99),
    [anon_sym_SortingClass] = ACTIONS(99),
    [anon_sym_Average] = ACTIONS(99),
    [anon_sym_Minimum] = ACTIONS(99),
    [anon_sym_Sum] = ACTIONS(99),
    [anon_sym_Contents] = ACTIONS(99),
    [anon_sym_Recipe] = ACTIONS(99),
    [anon_sym_Required] = ACTIONS(99),
    [anon_sym_TotalContents] = ACTIONS(99),
    [sym_enum] = ACTIONS(103),
  },
  [8] = {
    [sym_identifier] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_CR_LF] = ACTIONS(107),
    [anon_sym_CR] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(107),
    [sym_register] = ACTIONS(107),
    [sym_device] = ACTIONS(107),
    [anon_sym_nan] = ACTIONS(105),
    [anon_sym_pinf] = ACTIONS(105),
    [anon_sym_ninf] = ACTIONS(105),
    [anon_sym_pi] = ACTIONS(105),
    [anon_sym_deg2rad] = ACTIONS(105),
    [anon_sym_rad2deg] = ACTIONS(105),
    [anon_sym_epsilon] = ACTIONS(105),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(107),
    [aux_sym_number_token1] = ACTIONS(107),
    [anon_sym_Acceleration] = ACTIONS(105),
    [anon_sym_Activate] = ACTIONS(105),
    [anon_sym_AirRelease] = ACTIONS(105),
    [anon_sym_AlignmentError] = ACTIONS(105),
    [anon_sym_Apex] = ACTIONS(105),
    [anon_sym_AutoLand] = ACTIONS(105),
    [anon_sym_AutoShutOff] = ACTIONS(105),
    [anon_sym_Bpm] = ACTIONS(105),
    [anon_sym_BurnTimeRemaining] = ACTIONS(105),
    [anon_sym_Bypass] = ACTIONS(105),
    [anon_sym_CelestialHash] = ACTIONS(105),
    [anon_sym_CelestialParentHash] = ACTIONS(105),
    [anon_sym_Channel] = ACTIONS(105),
    [anon_sym_Channel0] = ACTIONS(105),
    [anon_sym_Channel1] = ACTIONS(105),
    [anon_sym_Channel2] = ACTIONS(105),
    [anon_sym_Channel3] = ACTIONS(105),
    [anon_sym_Channel4] = ACTIONS(105),
    [anon_sym_Channel5] = ACTIONS(105),
    [anon_sym_Channel6] = ACTIONS(105),
    [anon_sym_Channel7] = ACTIONS(105),
    [anon_sym_Charge] = ACTIONS(105),
    [anon_sym_Chart] = ACTIONS(105),
    [anon_sym_ChartedNavPoints] = ACTIONS(105),
    [anon_sym_ClearMemory] = ACTIONS(105),
    [anon_sym_CollectableGoods] = ACTIONS(105),
    [anon_sym_Color] = ACTIONS(105),
    [anon_sym_Combustion] = ACTIONS(105),
    [anon_sym_CombustionInput] = ACTIONS(105),
    [anon_sym_CombustionInput2] = ACTIONS(105),
    [anon_sym_CombustionLimiter] = ACTIONS(105),
    [anon_sym_CombustionOutput] = ACTIONS(105),
    [anon_sym_CombustionOutput2] = ACTIONS(105),
    [anon_sym_CompletionRatio] = ACTIONS(105),
    [anon_sym_ContactTypeId] = ACTIONS(105),
    [anon_sym_CurrentCode] = ACTIONS(105),
    [anon_sym_CurrentResearchPodType] = ACTIONS(105),
    [anon_sym_Density] = ACTIONS(105),
    [anon_sym_DestinationCode] = ACTIONS(105),
    [anon_sym_Discover] = ACTIONS(105),
    [anon_sym_DistanceAu] = ACTIONS(105),
    [anon_sym_DistanceKm] = ACTIONS(105),
    [anon_sym_DrillCondition] = ACTIONS(105),
    [anon_sym_DryMass] = ACTIONS(105),
    [anon_sym_Eccentricity] = ACTIONS(105),
    [anon_sym_ElevatorLevel] = ACTIONS(105),
    [anon_sym_ElevatorSpeed] = ACTIONS(105),
    [anon_sym_EntityState] = ACTIONS(105),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(105),
    [anon_sym_Error] = ACTIONS(105),
    [anon_sym_ExhaustVelocity] = ACTIONS(105),
    [anon_sym_ExportCount] = ACTIONS(105),
    [anon_sym_ExportQuantity] = ACTIONS(105),
    [anon_sym_ExportSlotHash] = ACTIONS(105),
    [anon_sym_ExportSlotOccupant] = ACTIONS(105),
    [anon_sym_Filtration] = ACTIONS(105),
    [anon_sym_FlightControlRule] = ACTIONS(105),
    [anon_sym_Flush] = ACTIONS(105),
    [anon_sym_ForceWrite] = ACTIONS(105),
    [anon_sym_ForwardX] = ACTIONS(105),
    [anon_sym_ForwardY] = ACTIONS(105),
    [anon_sym_ForwardZ] = ACTIONS(105),
    [anon_sym_Fuel] = ACTIONS(105),
    [anon_sym_Harvest] = ACTIONS(105),
    [anon_sym_Horizontal] = ACTIONS(105),
    [anon_sym_HorizontalRatio] = ACTIONS(105),
    [anon_sym_Idle] = ACTIONS(105),
    [anon_sym_ImportCount] = ACTIONS(105),
    [anon_sym_ImportQuantity] = ACTIONS(105),
    [anon_sym_ImportSlotHash] = ACTIONS(105),
    [anon_sym_ImportSlotOccupant] = ACTIONS(105),
    [anon_sym_Inclination] = ACTIONS(105),
    [anon_sym_Index] = ACTIONS(105),
    [anon_sym_InterrogationProgress] = ACTIONS(105),
    [anon_sym_LineNumber] = ACTIONS(105),
    [anon_sym_Lock] = ACTIONS(105),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(105),
    [anon_sym_Mass] = ACTIONS(105),
    [anon_sym_Maximum] = ACTIONS(105),
    [anon_sym_MinWattsToContact] = ACTIONS(105),
    [anon_sym_MineablesInQueue] = ACTIONS(105),
    [anon_sym_MineablesInVicinity] = ACTIONS(105),
    [anon_sym_MinedQuantity] = ACTIONS(105),
    [anon_sym_MinimumWattsToContact] = ACTIONS(105),
    [anon_sym_Mode] = ACTIONS(105),
    [anon_sym_NavPoints] = ACTIONS(105),
    [anon_sym_NextWeatherEventTime] = ACTIONS(105),
    [anon_sym_None] = ACTIONS(105),
    [anon_sym_On] = ACTIONS(105),
    [anon_sym_Open] = ACTIONS(105),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(105),
    [anon_sym_OrbitPeriod] = ACTIONS(105),
    [anon_sym_Orientation] = ACTIONS(105),
    [anon_sym_Output] = ACTIONS(105),
    [anon_sym_OverShootTarget] = ACTIONS(105),
    [anon_sym_PassedMoles] = ACTIONS(105),
    [anon_sym_Plant] = ACTIONS(105),
    [anon_sym_PlantEfficiency1] = ACTIONS(105),
    [anon_sym_PlantEfficiency2] = ACTIONS(105),
    [anon_sym_PlantEfficiency3] = ACTIONS(105),
    [anon_sym_PlantEfficiency4] = ACTIONS(105),
    [anon_sym_PlantGrowth1] = ACTIONS(105),
    [anon_sym_PlantGrowth2] = ACTIONS(105),
    [anon_sym_PlantGrowth3] = ACTIONS(105),
    [anon_sym_PlantGrowth4] = ACTIONS(105),
    [anon_sym_PlantHash1] = ACTIONS(105),
    [anon_sym_PlantHash2] = ACTIONS(105),
    [anon_sym_PlantHash3] = ACTIONS(105),
    [anon_sym_PlantHash4] = ACTIONS(105),
    [anon_sym_PlantHealth1] = ACTIONS(105),
    [anon_sym_PlantHealth2] = ACTIONS(105),
    [anon_sym_PlantHealth3] = ACTIONS(105),
    [anon_sym_PlantHealth4] = ACTIONS(105),
    [anon_sym_PositionX] = ACTIONS(105),
    [anon_sym_PositionY] = ACTIONS(105),
    [anon_sym_PositionZ] = ACTIONS(105),
    [anon_sym_Power] = ACTIONS(105),
    [anon_sym_PowerActual] = ACTIONS(105),
    [anon_sym_PowerGeneration] = ACTIONS(105),
    [anon_sym_PowerPotential] = ACTIONS(105),
    [anon_sym_PowerRequired] = ACTIONS(105),
    [anon_sym_PrefabHash] = ACTIONS(105),
    [anon_sym_Pressure] = ACTIONS(105),
    [anon_sym_PressureEfficiency] = ACTIONS(105),
    [anon_sym_PressureExternal] = ACTIONS(105),
    [anon_sym_PressureInput] = ACTIONS(105),
    [anon_sym_PressureInput2] = ACTIONS(105),
    [anon_sym_PressureInternal] = ACTIONS(105),
    [anon_sym_PressureOutput] = ACTIONS(105),
    [anon_sym_PressureOutput2] = ACTIONS(105),
    [anon_sym_PressureSetting] = ACTIONS(105),
    [anon_sym_Progress] = ACTIONS(105),
    [anon_sym_Quantity] = ACTIONS(105),
    [anon_sym_Ratio] = ACTIONS(105),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(105),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(105),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(105),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(105),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(105),
    [anon_sym_RatioHydrogen] = ACTIONS(105),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(105),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(105),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(105),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(105),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(105),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(105),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(105),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(105),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(105),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(105),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(105),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(105),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(105),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(105),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(105),
    [anon_sym_RatioNitrogen] = ACTIONS(105),
    [anon_sym_RatioNitrogenInput] = ACTIONS(105),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(105),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(105),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(105),
    [anon_sym_RatioNitrousOxide] = ACTIONS(105),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(105),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(105),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(105),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(105),
    [anon_sym_RatioOxygen] = ACTIONS(105),
    [anon_sym_RatioOxygenInput] = ACTIONS(105),
    [anon_sym_RatioOxygenInput2] = ACTIONS(105),
    [anon_sym_RatioOxygenOutput] = ACTIONS(105),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(105),
    [anon_sym_RatioPollutant] = ACTIONS(105),
    [anon_sym_RatioPollutantInput] = ACTIONS(105),
    [anon_sym_RatioPollutantInput2] = ACTIONS(105),
    [anon_sym_RatioPollutantOutput] = ACTIONS(105),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(105),
    [anon_sym_RatioPollutedWater] = ACTIONS(105),
    [anon_sym_RatioSteam] = ACTIONS(105),
    [anon_sym_RatioSteamInput] = ACTIONS(105),
    [anon_sym_RatioSteamInput2] = ACTIONS(105),
    [anon_sym_RatioSteamOutput] = ACTIONS(105),
    [anon_sym_RatioSteamOutput2] = ACTIONS(105),
    [anon_sym_RatioVolatiles] = ACTIONS(105),
    [anon_sym_RatioVolatilesInput] = ACTIONS(105),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(105),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(105),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(105),
    [anon_sym_RatioWater] = ACTIONS(105),
    [anon_sym_RatioWaterInput] = ACTIONS(105),
    [anon_sym_RatioWaterInput2] = ACTIONS(105),
    [anon_sym_RatioWaterOutput] = ACTIONS(105),
    [anon_sym_RatioWaterOutput2] = ACTIONS(105),
    [anon_sym_ReEntryAltitude] = ACTIONS(105),
    [anon_sym_Reagents] = ACTIONS(105),
    [anon_sym_RecipeHash] = ACTIONS(105),
    [anon_sym_ReferenceId] = ACTIONS(105),
    [anon_sym_RequestHash] = ACTIONS(105),
    [anon_sym_RequiredPower] = ACTIONS(105),
    [anon_sym_ReturnFuelCost] = ACTIONS(105),
    [anon_sym_Richness] = ACTIONS(105),
    [anon_sym_Rpm] = ACTIONS(105),
    [anon_sym_SemiMajorAxis] = ACTIONS(105),
    [anon_sym_Setting] = ACTIONS(105),
    [anon_sym_SettingInput] = ACTIONS(105),
    [anon_sym_SettingInputHash] = ACTIONS(105),
    [anon_sym_SettingOutput] = ACTIONS(105),
    [anon_sym_SettingOutputHash] = ACTIONS(105),
    [anon_sym_SignalID] = ACTIONS(105),
    [anon_sym_SignalStrength] = ACTIONS(105),
    [anon_sym_Sites] = ACTIONS(105),
    [anon_sym_Size] = ACTIONS(105),
    [anon_sym_SizeX] = ACTIONS(105),
    [anon_sym_SizeY] = ACTIONS(105),
    [anon_sym_SizeZ] = ACTIONS(105),
    [anon_sym_SolarAngle] = ACTIONS(105),
    [anon_sym_SolarConstant] = ACTIONS(105),
    [anon_sym_SolarIrradiance] = ACTIONS(105),
    [anon_sym_SoundAlert] = ACTIONS(105),
    [anon_sym_Stress] = ACTIONS(105),
    [anon_sym_Survey] = ACTIONS(105),
    [anon_sym_TargetPadIndex] = ACTIONS(105),
    [anon_sym_TargetX] = ACTIONS(105),
    [anon_sym_TargetY] = ACTIONS(105),
    [anon_sym_TargetZ] = ACTIONS(105),
    [anon_sym_Temperature] = ACTIONS(105),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(105),
    [anon_sym_TemperatureExternal] = ACTIONS(105),
    [anon_sym_TemperatureInput] = ACTIONS(105),
    [anon_sym_TemperatureInput2] = ACTIONS(105),
    [anon_sym_TemperatureOutput] = ACTIONS(105),
    [anon_sym_TemperatureOutput2] = ACTIONS(105),
    [anon_sym_TemperatureSetting] = ACTIONS(105),
    [anon_sym_Throttle] = ACTIONS(105),
    [anon_sym_Thrust] = ACTIONS(105),
    [anon_sym_ThrustToWeight] = ACTIONS(105),
    [anon_sym_Time] = ACTIONS(105),
    [anon_sym_TimeToDestination] = ACTIONS(105),
    [anon_sym_TotalMoles] = ACTIONS(105),
    [anon_sym_TotalMolesInput] = ACTIONS(105),
    [anon_sym_TotalMolesInput2] = ACTIONS(105),
    [anon_sym_TotalMolesOutput] = ACTIONS(105),
    [anon_sym_TotalMolesOutput2] = ACTIONS(105),
    [anon_sym_TotalQuantity] = ACTIONS(105),
    [anon_sym_TrueAnomaly] = ACTIONS(105),
    [anon_sym_Unknown] = ACTIONS(105),
    [anon_sym_VelocityMagnitude] = ACTIONS(105),
    [anon_sym_VelocityRelativeX] = ACTIONS(105),
    [anon_sym_VelocityRelativeY] = ACTIONS(105),
    [anon_sym_VelocityRelativeZ] = ACTIONS(105),
    [anon_sym_VelocityX] = ACTIONS(105),
    [anon_sym_VelocityY] = ACTIONS(105),
    [anon_sym_VelocityZ] = ACTIONS(105),
    [anon_sym_Vertical] = ACTIONS(105),
    [anon_sym_VerticalRatio] = ACTIONS(105),
    [anon_sym_Volume] = ACTIONS(105),
    [anon_sym_VolumeOfLiquid] = ACTIONS(105),
    [anon_sym_WattsReachingContact] = ACTIONS(105),
    [anon_sym_Weight] = ACTIONS(105),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(105),
    [anon_sym_ChargeRatio] = ACTIONS(105),
    [anon_sym_Class] = ACTIONS(105),
    [anon_sym_Damage] = ACTIONS(105),
    [anon_sym_Efficiency] = ACTIONS(105),
    [anon_sym_FilterType] = ACTIONS(105),
    [anon_sym_Growth] = ACTIONS(105),
    [anon_sym_Health] = ACTIONS(105),
    [anon_sym_Mature] = ACTIONS(105),
    [anon_sym_MaxQuantity] = ACTIONS(105),
    [anon_sym_OccupantHash] = ACTIONS(105),
    [anon_sym_Occupied] = ACTIONS(105),
    [anon_sym_PressureAir] = ACTIONS(105),
    [anon_sym_PressureWaste] = ACTIONS(105),
    [anon_sym_Seeding] = ACTIONS(105),
    [anon_sym_SortingClass] = ACTIONS(105),
    [anon_sym_Average] = ACTIONS(105),
    [anon_sym_Minimum] = ACTIONS(105),
    [anon_sym_Sum] = ACTIONS(105),
    [anon_sym_Contents] = ACTIONS(105),
    [anon_sym_Recipe] = ACTIONS(105),
    [anon_sym_Required] = ACTIONS(105),
    [anon_sym_TotalContents] = ACTIONS(105),
    [sym_enum] = ACTIONS(107),
  },
  [9] = {
    [sym_identifier] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_CR_LF] = ACTIONS(111),
    [anon_sym_CR] = ACTIONS(109),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(111),
    [sym_register] = ACTIONS(111),
    [sym_device] = ACTIONS(111),
    [anon_sym_nan] = ACTIONS(109),
    [anon_sym_pinf] = ACTIONS(109),
    [anon_sym_ninf] = ACTIONS(109),
    [anon_sym_pi] = ACTIONS(109),
    [anon_sym_deg2rad] = ACTIONS(109),
    [anon_sym_rad2deg] = ACTIONS(109),
    [anon_sym_epsilon] = ACTIONS(109),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(111),
    [aux_sym_number_token1] = ACTIONS(111),
    [anon_sym_Acceleration] = ACTIONS(109),
    [anon_sym_Activate] = ACTIONS(109),
    [anon_sym_AirRelease] = ACTIONS(109),
    [anon_sym_AlignmentError] = ACTIONS(109),
    [anon_sym_Apex] = ACTIONS(109),
    [anon_sym_AutoLand] = ACTIONS(109),
    [anon_sym_AutoShutOff] = ACTIONS(109),
    [anon_sym_Bpm] = ACTIONS(109),
    [anon_sym_BurnTimeRemaining] = ACTIONS(109),
    [anon_sym_Bypass] = ACTIONS(109),
    [anon_sym_CelestialHash] = ACTIONS(109),
    [anon_sym_CelestialParentHash] = ACTIONS(109),
    [anon_sym_Channel] = ACTIONS(109),
    [anon_sym_Channel0] = ACTIONS(109),
    [anon_sym_Channel1] = ACTIONS(109),
    [anon_sym_Channel2] = ACTIONS(109),
    [anon_sym_Channel3] = ACTIONS(109),
    [anon_sym_Channel4] = ACTIONS(109),
    [anon_sym_Channel5] = ACTIONS(109),
    [anon_sym_Channel6] = ACTIONS(109),
    [anon_sym_Channel7] = ACTIONS(109),
    [anon_sym_Charge] = ACTIONS(109),
    [anon_sym_Chart] = ACTIONS(109),
    [anon_sym_ChartedNavPoints] = ACTIONS(109),
    [anon_sym_ClearMemory] = ACTIONS(109),
    [anon_sym_CollectableGoods] = ACTIONS(109),
    [anon_sym_Color] = ACTIONS(109),
    [anon_sym_Combustion] = ACTIONS(109),
    [anon_sym_CombustionInput] = ACTIONS(109),
    [anon_sym_CombustionInput2] = ACTIONS(109),
    [anon_sym_CombustionLimiter] = ACTIONS(109),
    [anon_sym_CombustionOutput] = ACTIONS(109),
    [anon_sym_CombustionOutput2] = ACTIONS(109),
    [anon_sym_CompletionRatio] = ACTIONS(109),
    [anon_sym_ContactTypeId] = ACTIONS(109),
    [anon_sym_CurrentCode] = ACTIONS(109),
    [anon_sym_CurrentResearchPodType] = ACTIONS(109),
    [anon_sym_Density] = ACTIONS(109),
    [anon_sym_DestinationCode] = ACTIONS(109),
    [anon_sym_Discover] = ACTIONS(109),
    [anon_sym_DistanceAu] = ACTIONS(109),
    [anon_sym_DistanceKm] = ACTIONS(109),
    [anon_sym_DrillCondition] = ACTIONS(109),
    [anon_sym_DryMass] = ACTIONS(109),
    [anon_sym_Eccentricity] = ACTIONS(109),
    [anon_sym_ElevatorLevel] = ACTIONS(109),
    [anon_sym_ElevatorSpeed] = ACTIONS(109),
    [anon_sym_EntityState] = ACTIONS(109),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(109),
    [anon_sym_Error] = ACTIONS(109),
    [anon_sym_ExhaustVelocity] = ACTIONS(109),
    [anon_sym_ExportCount] = ACTIONS(109),
    [anon_sym_ExportQuantity] = ACTIONS(109),
    [anon_sym_ExportSlotHash] = ACTIONS(109),
    [anon_sym_ExportSlotOccupant] = ACTIONS(109),
    [anon_sym_Filtration] = ACTIONS(109),
    [anon_sym_FlightControlRule] = ACTIONS(109),
    [anon_sym_Flush] = ACTIONS(109),
    [anon_sym_ForceWrite] = ACTIONS(109),
    [anon_sym_ForwardX] = ACTIONS(109),
    [anon_sym_ForwardY] = ACTIONS(109),
    [anon_sym_ForwardZ] = ACTIONS(109),
    [anon_sym_Fuel] = ACTIONS(109),
    [anon_sym_Harvest] = ACTIONS(109),
    [anon_sym_Horizontal] = ACTIONS(109),
    [anon_sym_HorizontalRatio] = ACTIONS(109),
    [anon_sym_Idle] = ACTIONS(109),
    [anon_sym_ImportCount] = ACTIONS(109),
    [anon_sym_ImportQuantity] = ACTIONS(109),
    [anon_sym_ImportSlotHash] = ACTIONS(109),
    [anon_sym_ImportSlotOccupant] = ACTIONS(109),
    [anon_sym_Inclination] = ACTIONS(109),
    [anon_sym_Index] = ACTIONS(109),
    [anon_sym_InterrogationProgress] = ACTIONS(109),
    [anon_sym_LineNumber] = ACTIONS(109),
    [anon_sym_Lock] = ACTIONS(109),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(109),
    [anon_sym_Mass] = ACTIONS(109),
    [anon_sym_Maximum] = ACTIONS(109),
    [anon_sym_MinWattsToContact] = ACTIONS(109),
    [anon_sym_MineablesInQueue] = ACTIONS(109),
    [anon_sym_MineablesInVicinity] = ACTIONS(109),
    [anon_sym_MinedQuantity] = ACTIONS(109),
    [anon_sym_MinimumWattsToContact] = ACTIONS(109),
    [anon_sym_Mode] = ACTIONS(109),
    [anon_sym_NavPoints] = ACTIONS(109),
    [anon_sym_NextWeatherEventTime] = ACTIONS(109),
    [anon_sym_None] = ACTIONS(109),
    [anon_sym_On] = ACTIONS(109),
    [anon_sym_Open] = ACTIONS(109),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(109),
    [anon_sym_OrbitPeriod] = ACTIONS(109),
    [anon_sym_Orientation] = ACTIONS(109),
    [anon_sym_Output] = ACTIONS(109),
    [anon_sym_OverShootTarget] = ACTIONS(109),
    [anon_sym_PassedMoles] = ACTIONS(109),
    [anon_sym_Plant] = ACTIONS(109),
    [anon_sym_PlantEfficiency1] = ACTIONS(109),
    [anon_sym_PlantEfficiency2] = ACTIONS(109),
    [anon_sym_PlantEfficiency3] = ACTIONS(109),
    [anon_sym_PlantEfficiency4] = ACTIONS(109),
    [anon_sym_PlantGrowth1] = ACTIONS(109),
    [anon_sym_PlantGrowth2] = ACTIONS(109),
    [anon_sym_PlantGrowth3] = ACTIONS(109),
    [anon_sym_PlantGrowth4] = ACTIONS(109),
    [anon_sym_PlantHash1] = ACTIONS(109),
    [anon_sym_PlantHash2] = ACTIONS(109),
    [anon_sym_PlantHash3] = ACTIONS(109),
    [anon_sym_PlantHash4] = ACTIONS(109),
    [anon_sym_PlantHealth1] = ACTIONS(109),
    [anon_sym_PlantHealth2] = ACTIONS(109),
    [anon_sym_PlantHealth3] = ACTIONS(109),
    [anon_sym_PlantHealth4] = ACTIONS(109),
    [anon_sym_PositionX] = ACTIONS(109),
    [anon_sym_PositionY] = ACTIONS(109),
    [anon_sym_PositionZ] = ACTIONS(109),
    [anon_sym_Power] = ACTIONS(109),
    [anon_sym_PowerActual] = ACTIONS(109),
    [anon_sym_PowerGeneration] = ACTIONS(109),
    [anon_sym_PowerPotential] = ACTIONS(109),
    [anon_sym_PowerRequired] = ACTIONS(109),
    [anon_sym_PrefabHash] = ACTIONS(109),
    [anon_sym_Pressure] = ACTIONS(109),
    [anon_sym_PressureEfficiency] = ACTIONS(109),
    [anon_sym_PressureExternal] = ACTIONS(109),
    [anon_sym_PressureInput] = ACTIONS(109),
    [anon_sym_PressureInput2] = ACTIONS(109),
    [anon_sym_PressureInternal] = ACTIONS(109),
    [anon_sym_PressureOutput] = ACTIONS(109),
    [anon_sym_PressureOutput2] = ACTIONS(109),
    [anon_sym_PressureSetting] = ACTIONS(109),
    [anon_sym_Progress] = ACTIONS(109),
    [anon_sym_Quantity] = ACTIONS(109),
    [anon_sym_Ratio] = ACTIONS(109),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(109),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(109),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(109),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(109),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(109),
    [anon_sym_RatioHydrogen] = ACTIONS(109),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(109),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(109),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(109),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(109),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(109),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(109),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(109),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(109),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(109),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(109),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(109),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(109),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(109),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(109),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(109),
    [anon_sym_RatioNitrogen] = ACTIONS(109),
    [anon_sym_RatioNitrogenInput] = ACTIONS(109),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(109),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(109),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(109),
    [anon_sym_RatioNitrousOxide] = ACTIONS(109),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(109),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(109),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(109),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(109),
    [anon_sym_RatioOxygen] = ACTIONS(109),
    [anon_sym_RatioOxygenInput] = ACTIONS(109),
    [anon_sym_RatioOxygenInput2] = ACTIONS(109),
    [anon_sym_RatioOxygenOutput] = ACTIONS(109),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(109),
    [anon_sym_RatioPollutant] = ACTIONS(109),
    [anon_sym_RatioPollutantInput] = ACTIONS(109),
    [anon_sym_RatioPollutantInput2] = ACTIONS(109),
    [anon_sym_RatioPollutantOutput] = ACTIONS(109),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(109),
    [anon_sym_RatioPollutedWater] = ACTIONS(109),
    [anon_sym_RatioSteam] = ACTIONS(109),
    [anon_sym_RatioSteamInput] = ACTIONS(109),
    [anon_sym_RatioSteamInput2] = ACTIONS(109),
    [anon_sym_RatioSteamOutput] = ACTIONS(109),
    [anon_sym_RatioSteamOutput2] = ACTIONS(109),
    [anon_sym_RatioVolatiles] = ACTIONS(109),
    [anon_sym_RatioVolatilesInput] = ACTIONS(109),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(109),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(109),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(109),
    [anon_sym_RatioWater] = ACTIONS(109),
    [anon_sym_RatioWaterInput] = ACTIONS(109),
    [anon_sym_RatioWaterInput2] = ACTIONS(109),
    [anon_sym_RatioWaterOutput] = ACTIONS(109),
    [anon_sym_RatioWaterOutput2] = ACTIONS(109),
    [anon_sym_ReEntryAltitude] = ACTIONS(109),
    [anon_sym_Reagents] = ACTIONS(109),
    [anon_sym_RecipeHash] = ACTIONS(109),
    [anon_sym_ReferenceId] = ACTIONS(109),
    [anon_sym_RequestHash] = ACTIONS(109),
    [anon_sym_RequiredPower] = ACTIONS(109),
    [anon_sym_ReturnFuelCost] = ACTIONS(109),
    [anon_sym_Richness] = ACTIONS(109),
    [anon_sym_Rpm] = ACTIONS(109),
    [anon_sym_SemiMajorAxis] = ACTIONS(109),
    [anon_sym_Setting] = ACTIONS(109),
    [anon_sym_SettingInput] = ACTIONS(109),
    [anon_sym_SettingInputHash] = ACTIONS(109),
    [anon_sym_SettingOutput] = ACTIONS(109),
    [anon_sym_SettingOutputHash] = ACTIONS(109),
    [anon_sym_SignalID] = ACTIONS(109),
    [anon_sym_SignalStrength] = ACTIONS(109),
    [anon_sym_Sites] = ACTIONS(109),
    [anon_sym_Size] = ACTIONS(109),
    [anon_sym_SizeX] = ACTIONS(109),
    [anon_sym_SizeY] = ACTIONS(109),
    [anon_sym_SizeZ] = ACTIONS(109),
    [anon_sym_SolarAngle] = ACTIONS(109),
    [anon_sym_SolarConstant] = ACTIONS(109),
    [anon_sym_SolarIrradiance] = ACTIONS(109),
    [anon_sym_SoundAlert] = ACTIONS(109),
    [anon_sym_Stress] = ACTIONS(109),
    [anon_sym_Survey] = ACTIONS(109),
    [anon_sym_TargetPadIndex] = ACTIONS(109),
    [anon_sym_TargetX] = ACTIONS(109),
    [anon_sym_TargetY] = ACTIONS(109),
    [anon_sym_TargetZ] = ACTIONS(109),
    [anon_sym_Temperature] = ACTIONS(109),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(109),
    [anon_sym_TemperatureExternal] = ACTIONS(109),
    [anon_sym_TemperatureInput] = ACTIONS(109),
    [anon_sym_TemperatureInput2] = ACTIONS(109),
    [anon_sym_TemperatureOutput] = ACTIONS(109),
    [anon_sym_TemperatureOutput2] = ACTIONS(109),
    [anon_sym_TemperatureSetting] = ACTIONS(109),
    [anon_sym_Throttle] = ACTIONS(109),
    [anon_sym_Thrust] = ACTIONS(109),
    [anon_sym_ThrustToWeight] = ACTIONS(109),
    [anon_sym_Time] = ACTIONS(109),
    [anon_sym_TimeToDestination] = ACTIONS(109),
    [anon_sym_TotalMoles] = ACTIONS(109),
    [anon_sym_TotalMolesInput] = ACTIONS(109),
    [anon_sym_TotalMolesInput2] = ACTIONS(109),
    [anon_sym_TotalMolesOutput] = ACTIONS(109),
    [anon_sym_TotalMolesOutput2] = ACTIONS(109),
    [anon_sym_TotalQuantity] = ACTIONS(109),
    [anon_sym_TrueAnomaly] = ACTIONS(109),
    [anon_sym_Unknown] = ACTIONS(109),
    [anon_sym_VelocityMagnitude] = ACTIONS(109),
    [anon_sym_VelocityRelativeX] = ACTIONS(109),
    [anon_sym_VelocityRelativeY] = ACTIONS(109),
    [anon_sym_VelocityRelativeZ] = ACTIONS(109),
    [anon_sym_VelocityX] = ACTIONS(109),
    [anon_sym_VelocityY] = ACTIONS(109),
    [anon_sym_VelocityZ] = ACTIONS(109),
    [anon_sym_Vertical] = ACTIONS(109),
    [anon_sym_VerticalRatio] = ACTIONS(109),
    [anon_sym_Volume] = ACTIONS(109),
    [anon_sym_VolumeOfLiquid] = ACTIONS(109),
    [anon_sym_WattsReachingContact] = ACTIONS(109),
    [anon_sym_Weight] = ACTIONS(109),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(109),
    [anon_sym_ChargeRatio] = ACTIONS(109),
    [anon_sym_Class] = ACTIONS(109),
    [anon_sym_Damage] = ACTIONS(109),
    [anon_sym_Efficiency] = ACTIONS(109),
    [anon_sym_FilterType] = ACTIONS(109),
    [anon_sym_Growth] = ACTIONS(109),
    [anon_sym_Health] = ACTIONS(109),
    [anon_sym_Mature] = ACTIONS(109),
    [anon_sym_MaxQuantity] = ACTIONS(109),
    [anon_sym_OccupantHash] = ACTIONS(109),
    [anon_sym_Occupied] = ACTIONS(109),
    [anon_sym_PressureAir] = ACTIONS(109),
    [anon_sym_PressureWaste] = ACTIONS(109),
    [anon_sym_Seeding] = ACTIONS(109),
    [anon_sym_SortingClass] = ACTIONS(109),
    [anon_sym_Average] = ACTIONS(109),
    [anon_sym_Minimum] = ACTIONS(109),
    [anon_sym_Sum] = ACTIONS(109),
    [anon_sym_Contents] = ACTIONS(109),
    [anon_sym_Recipe] = ACTIONS(109),
    [anon_sym_Required] = ACTIONS(109),
    [anon_sym_TotalContents] = ACTIONS(109),
    [sym_enum] = ACTIONS(111),
  },
  [10] = {
    [sym_identifier] = ACTIONS(113),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_CR_LF] = ACTIONS(115),
    [anon_sym_CR] = ACTIONS(113),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(115),
    [sym_register] = ACTIONS(115),
    [sym_device] = ACTIONS(115),
    [anon_sym_nan] = ACTIONS(113),
    [anon_sym_pinf] = ACTIONS(113),
    [anon_sym_ninf] = ACTIONS(113),
    [anon_sym_pi] = ACTIONS(113),
    [anon_sym_deg2rad] = ACTIONS(113),
    [anon_sym_rad2deg] = ACTIONS(113),
    [anon_sym_epsilon] = ACTIONS(113),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(115),
    [aux_sym_number_token1] = ACTIONS(115),
    [anon_sym_Acceleration] = ACTIONS(113),
    [anon_sym_Activate] = ACTIONS(113),
    [anon_sym_AirRelease] = ACTIONS(113),
    [anon_sym_AlignmentError] = ACTIONS(113),
    [anon_sym_Apex] = ACTIONS(113),
    [anon_sym_AutoLand] = ACTIONS(113),
    [anon_sym_AutoShutOff] = ACTIONS(113),
    [anon_sym_Bpm] = ACTIONS(113),
    [anon_sym_BurnTimeRemaining] = ACTIONS(113),
    [anon_sym_Bypass] = ACTIONS(113),
    [anon_sym_CelestialHash] = ACTIONS(113),
    [anon_sym_CelestialParentHash] = ACTIONS(113),
    [anon_sym_Channel] = ACTIONS(113),
    [anon_sym_Channel0] = ACTIONS(113),
    [anon_sym_Channel1] = ACTIONS(113),
    [anon_sym_Channel2] = ACTIONS(113),
    [anon_sym_Channel3] = ACTIONS(113),
    [anon_sym_Channel4] = ACTIONS(113),
    [anon_sym_Channel5] = ACTIONS(113),
    [anon_sym_Channel6] = ACTIONS(113),
    [anon_sym_Channel7] = ACTIONS(113),
    [anon_sym_Charge] = ACTIONS(113),
    [anon_sym_Chart] = ACTIONS(113),
    [anon_sym_ChartedNavPoints] = ACTIONS(113),
    [anon_sym_ClearMemory] = ACTIONS(113),
    [anon_sym_CollectableGoods] = ACTIONS(113),
    [anon_sym_Color] = ACTIONS(113),
    [anon_sym_Combustion] = ACTIONS(113),
    [anon_sym_CombustionInput] = ACTIONS(113),
    [anon_sym_CombustionInput2] = ACTIONS(113),
    [anon_sym_CombustionLimiter] = ACTIONS(113),
    [anon_sym_CombustionOutput] = ACTIONS(113),
    [anon_sym_CombustionOutput2] = ACTIONS(113),
    [anon_sym_CompletionRatio] = ACTIONS(113),
    [anon_sym_ContactTypeId] = ACTIONS(113),
    [anon_sym_CurrentCode] = ACTIONS(113),
    [anon_sym_CurrentResearchPodType] = ACTIONS(113),
    [anon_sym_Density] = ACTIONS(113),
    [anon_sym_DestinationCode] = ACTIONS(113),
    [anon_sym_Discover] = ACTIONS(113),
    [anon_sym_DistanceAu] = ACTIONS(113),
    [anon_sym_DistanceKm] = ACTIONS(113),
    [anon_sym_DrillCondition] = ACTIONS(113),
    [anon_sym_DryMass] = ACTIONS(113),
    [anon_sym_Eccentricity] = ACTIONS(113),
    [anon_sym_ElevatorLevel] = ACTIONS(113),
    [anon_sym_ElevatorSpeed] = ACTIONS(113),
    [anon_sym_EntityState] = ACTIONS(113),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(113),
    [anon_sym_Error] = ACTIONS(113),
    [anon_sym_ExhaustVelocity] = ACTIONS(113),
    [anon_sym_ExportCount] = ACTIONS(113),
    [anon_sym_ExportQuantity] = ACTIONS(113),
    [anon_sym_ExportSlotHash] = ACTIONS(113),
    [anon_sym_ExportSlotOccupant] = ACTIONS(113),
    [anon_sym_Filtration] = ACTIONS(113),
    [anon_sym_FlightControlRule] = ACTIONS(113),
    [anon_sym_Flush] = ACTIONS(113),
    [anon_sym_ForceWrite] = ACTIONS(113),
    [anon_sym_ForwardX] = ACTIONS(113),
    [anon_sym_ForwardY] = ACTIONS(113),
    [anon_sym_ForwardZ] = ACTIONS(113),
    [anon_sym_Fuel] = ACTIONS(113),
    [anon_sym_Harvest] = ACTIONS(113),
    [anon_sym_Horizontal] = ACTIONS(113),
    [anon_sym_HorizontalRatio] = ACTIONS(113),
    [anon_sym_Idle] = ACTIONS(113),
    [anon_sym_ImportCount] = ACTIONS(113),
    [anon_sym_ImportQuantity] = ACTIONS(113),
    [anon_sym_ImportSlotHash] = ACTIONS(113),
    [anon_sym_ImportSlotOccupant] = ACTIONS(113),
    [anon_sym_Inclination] = ACTIONS(113),
    [anon_sym_Index] = ACTIONS(113),
    [anon_sym_InterrogationProgress] = ACTIONS(113),
    [anon_sym_LineNumber] = ACTIONS(113),
    [anon_sym_Lock] = ACTIONS(113),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(113),
    [anon_sym_Mass] = ACTIONS(113),
    [anon_sym_Maximum] = ACTIONS(113),
    [anon_sym_MinWattsToContact] = ACTIONS(113),
    [anon_sym_MineablesInQueue] = ACTIONS(113),
    [anon_sym_MineablesInVicinity] = ACTIONS(113),
    [anon_sym_MinedQuantity] = ACTIONS(113),
    [anon_sym_MinimumWattsToContact] = ACTIONS(113),
    [anon_sym_Mode] = ACTIONS(113),
    [anon_sym_NavPoints] = ACTIONS(113),
    [anon_sym_NextWeatherEventTime] = ACTIONS(113),
    [anon_sym_None] = ACTIONS(113),
    [anon_sym_On] = ACTIONS(113),
    [anon_sym_Open] = ACTIONS(113),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(113),
    [anon_sym_OrbitPeriod] = ACTIONS(113),
    [anon_sym_Orientation] = ACTIONS(113),
    [anon_sym_Output] = ACTIONS(113),
    [anon_sym_OverShootTarget] = ACTIONS(113),
    [anon_sym_PassedMoles] = ACTIONS(113),
    [anon_sym_Plant] = ACTIONS(113),
    [anon_sym_PlantEfficiency1] = ACTIONS(113),
    [anon_sym_PlantEfficiency2] = ACTIONS(113),
    [anon_sym_PlantEfficiency3] = ACTIONS(113),
    [anon_sym_PlantEfficiency4] = ACTIONS(113),
    [anon_sym_PlantGrowth1] = ACTIONS(113),
    [anon_sym_PlantGrowth2] = ACTIONS(113),
    [anon_sym_PlantGrowth3] = ACTIONS(113),
    [anon_sym_PlantGrowth4] = ACTIONS(113),
    [anon_sym_PlantHash1] = ACTIONS(113),
    [anon_sym_PlantHash2] = ACTIONS(113),
    [anon_sym_PlantHash3] = ACTIONS(113),
    [anon_sym_PlantHash4] = ACTIONS(113),
    [anon_sym_PlantHealth1] = ACTIONS(113),
    [anon_sym_PlantHealth2] = ACTIONS(113),
    [anon_sym_PlantHealth3] = ACTIONS(113),
    [anon_sym_PlantHealth4] = ACTIONS(113),
    [anon_sym_PositionX] = ACTIONS(113),
    [anon_sym_PositionY] = ACTIONS(113),
    [anon_sym_PositionZ] = ACTIONS(113),
    [anon_sym_Power] = ACTIONS(113),
    [anon_sym_PowerActual] = ACTIONS(113),
    [anon_sym_PowerGeneration] = ACTIONS(113),
    [anon_sym_PowerPotential] = ACTIONS(113),
    [anon_sym_PowerRequired] = ACTIONS(113),
    [anon_sym_PrefabHash] = ACTIONS(113),
    [anon_sym_Pressure] = ACTIONS(113),
    [anon_sym_PressureEfficiency] = ACTIONS(113),
    [anon_sym_PressureExternal] = ACTIONS(113),
    [anon_sym_PressureInput] = ACTIONS(113),
    [anon_sym_PressureInput2] = ACTIONS(113),
    [anon_sym_PressureInternal] = ACTIONS(113),
    [anon_sym_PressureOutput] = ACTIONS(113),
    [anon_sym_PressureOutput2] = ACTIONS(113),
    [anon_sym_PressureSetting] = ACTIONS(113),
    [anon_sym_Progress] = ACTIONS(113),
    [anon_sym_Quantity] = ACTIONS(113),
    [anon_sym_Ratio] = ACTIONS(113),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(113),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(113),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(113),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(113),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(113),
    [anon_sym_RatioHydrogen] = ACTIONS(113),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(113),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(113),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(113),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(113),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(113),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(113),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(113),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(113),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(113),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(113),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(113),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(113),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(113),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(113),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(113),
    [anon_sym_RatioNitrogen] = ACTIONS(113),
    [anon_sym_RatioNitrogenInput] = ACTIONS(113),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(113),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(113),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(113),
    [anon_sym_RatioNitrousOxide] = ACTIONS(113),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(113),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(113),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(113),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(113),
    [anon_sym_RatioOxygen] = ACTIONS(113),
    [anon_sym_RatioOxygenInput] = ACTIONS(113),
    [anon_sym_RatioOxygenInput2] = ACTIONS(113),
    [anon_sym_RatioOxygenOutput] = ACTIONS(113),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(113),
    [anon_sym_RatioPollutant] = ACTIONS(113),
    [anon_sym_RatioPollutantInput] = ACTIONS(113),
    [anon_sym_RatioPollutantInput2] = ACTIONS(113),
    [anon_sym_RatioPollutantOutput] = ACTIONS(113),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(113),
    [anon_sym_RatioPollutedWater] = ACTIONS(113),
    [anon_sym_RatioSteam] = ACTIONS(113),
    [anon_sym_RatioSteamInput] = ACTIONS(113),
    [anon_sym_RatioSteamInput2] = ACTIONS(113),
    [anon_sym_RatioSteamOutput] = ACTIONS(113),
    [anon_sym_RatioSteamOutput2] = ACTIONS(113),
    [anon_sym_RatioVolatiles] = ACTIONS(113),
    [anon_sym_RatioVolatilesInput] = ACTIONS(113),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(113),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(113),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(113),
    [anon_sym_RatioWater] = ACTIONS(113),
    [anon_sym_RatioWaterInput] = ACTIONS(113),
    [anon_sym_RatioWaterInput2] = ACTIONS(113),
    [anon_sym_RatioWaterOutput] = ACTIONS(113),
    [anon_sym_RatioWaterOutput2] = ACTIONS(113),
    [anon_sym_ReEntryAltitude] = ACTIONS(113),
    [anon_sym_Reagents] = ACTIONS(113),
    [anon_sym_RecipeHash] = ACTIONS(113),
    [anon_sym_ReferenceId] = ACTIONS(113),
    [anon_sym_RequestHash] = ACTIONS(113),
    [anon_sym_RequiredPower] = ACTIONS(113),
    [anon_sym_ReturnFuelCost] = ACTIONS(113),
    [anon_sym_Richness] = ACTIONS(113),
    [anon_sym_Rpm] = ACTIONS(113),
    [anon_sym_SemiMajorAxis] = ACTIONS(113),
    [anon_sym_Setting] = ACTIONS(113),
    [anon_sym_SettingInput] = ACTIONS(113),
    [anon_sym_SettingInputHash] = ACTIONS(113),
    [anon_sym_SettingOutput] = ACTIONS(113),
    [anon_sym_SettingOutputHash] = ACTIONS(113),
    [anon_sym_SignalID] = ACTIONS(113),
    [anon_sym_SignalStrength] = ACTIONS(113),
    [anon_sym_Sites] = ACTIONS(113),
    [anon_sym_Size] = ACTIONS(113),
    [anon_sym_SizeX] = ACTIONS(113),
    [anon_sym_SizeY] = ACTIONS(113),
    [anon_sym_SizeZ] = ACTIONS(113),
    [anon_sym_SolarAngle] = ACTIONS(113),
    [anon_sym_SolarConstant] = ACTIONS(113),
    [anon_sym_SolarIrradiance] = ACTIONS(113),
    [anon_sym_SoundAlert] = ACTIONS(113),
    [anon_sym_Stress] = ACTIONS(113),
    [anon_sym_Survey] = ACTIONS(113),
    [anon_sym_TargetPadIndex] = ACTIONS(113),
    [anon_sym_TargetX] = ACTIONS(113),
    [anon_sym_TargetY] = ACTIONS(113),
    [anon_sym_TargetZ] = ACTIONS(113),
    [anon_sym_Temperature] = ACTIONS(113),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(113),
    [anon_sym_TemperatureExternal] = ACTIONS(113),
    [anon_sym_TemperatureInput] = ACTIONS(113),
    [anon_sym_TemperatureInput2] = ACTIONS(113),
    [anon_sym_TemperatureOutput] = ACTIONS(113),
    [anon_sym_TemperatureOutput2] = ACTIONS(113),
    [anon_sym_TemperatureSetting] = ACTIONS(113),
    [anon_sym_Throttle] = ACTIONS(113),
    [anon_sym_Thrust] = ACTIONS(113),
    [anon_sym_ThrustToWeight] = ACTIONS(113),
    [anon_sym_Time] = ACTIONS(113),
    [anon_sym_TimeToDestination] = ACTIONS(113),
    [anon_sym_TotalMoles] = ACTIONS(113),
    [anon_sym_TotalMolesInput] = ACTIONS(113),
    [anon_sym_TotalMolesInput2] = ACTIONS(113),
    [anon_sym_TotalMolesOutput] = ACTIONS(113),
    [anon_sym_TotalMolesOutput2] = ACTIONS(113),
    [anon_sym_TotalQuantity] = ACTIONS(113),
    [anon_sym_TrueAnomaly] = ACTIONS(113),
    [anon_sym_Unknown] = ACTIONS(113),
    [anon_sym_VelocityMagnitude] = ACTIONS(113),
    [anon_sym_VelocityRelativeX] = ACTIONS(113),
    [anon_sym_VelocityRelativeY] = ACTIONS(113),
    [anon_sym_VelocityRelativeZ] = ACTIONS(113),
    [anon_sym_VelocityX] = ACTIONS(113),
    [anon_sym_VelocityY] = ACTIONS(113),
    [anon_sym_VelocityZ] = ACTIONS(113),
    [anon_sym_Vertical] = ACTIONS(113),
    [anon_sym_VerticalRatio] = ACTIONS(113),
    [anon_sym_Volume] = ACTIONS(113),
    [anon_sym_VolumeOfLiquid] = ACTIONS(113),
    [anon_sym_WattsReachingContact] = ACTIONS(113),
    [anon_sym_Weight] = ACTIONS(113),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(113),
    [anon_sym_ChargeRatio] = ACTIONS(113),
    [anon_sym_Class] = ACTIONS(113),
    [anon_sym_Damage] = ACTIONS(113),
    [anon_sym_Efficiency] = ACTIONS(113),
    [anon_sym_FilterType] = ACTIONS(113),
    [anon_sym_Growth] = ACTIONS(113),
    [anon_sym_Health] = ACTIONS(113),
    [anon_sym_Mature] = ACTIONS(113),
    [anon_sym_MaxQuantity] = ACTIONS(113),
    [anon_sym_OccupantHash] = ACTIONS(113),
    [anon_sym_Occupied] = ACTIONS(113),
    [anon_sym_PressureAir] = ACTIONS(113),
    [anon_sym_PressureWaste] = ACTIONS(113),
    [anon_sym_Seeding] = ACTIONS(113),
    [anon_sym_SortingClass] = ACTIONS(113),
    [anon_sym_Average] = ACTIONS(113),
    [anon_sym_Minimum] = ACTIONS(113),
    [anon_sym_Sum] = ACTIONS(113),
    [anon_sym_Contents] = ACTIONS(113),
    [anon_sym_Recipe] = ACTIONS(113),
    [anon_sym_Required] = ACTIONS(113),
    [anon_sym_TotalContents] = ACTIONS(113),
    [sym_enum] = ACTIONS(115),
  },
  [11] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CR_LF] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(119),
    [sym_register] = ACTIONS(119),
    [sym_device] = ACTIONS(119),
    [anon_sym_nan] = ACTIONS(117),
    [anon_sym_pinf] = ACTIONS(117),
    [anon_sym_ninf] = ACTIONS(117),
    [anon_sym_pi] = ACTIONS(117),
    [anon_sym_deg2rad] = ACTIONS(117),
    [anon_sym_rad2deg] = ACTIONS(117),
    [anon_sym_epsilon] = ACTIONS(117),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(119),
    [aux_sym_number_token1] = ACTIONS(119),
    [anon_sym_Acceleration] = ACTIONS(117),
    [anon_sym_Activate] = ACTIONS(117),
    [anon_sym_AirRelease] = ACTIONS(117),
    [anon_sym_AlignmentError] = ACTIONS(117),
    [anon_sym_Apex] = ACTIONS(117),
    [anon_sym_AutoLand] = ACTIONS(117),
    [anon_sym_AutoShutOff] = ACTIONS(117),
    [anon_sym_Bpm] = ACTIONS(117),
    [anon_sym_BurnTimeRemaining] = ACTIONS(117),
    [anon_sym_Bypass] = ACTIONS(117),
    [anon_sym_CelestialHash] = ACTIONS(117),
    [anon_sym_CelestialParentHash] = ACTIONS(117),
    [anon_sym_Channel] = ACTIONS(117),
    [anon_sym_Channel0] = ACTIONS(117),
    [anon_sym_Channel1] = ACTIONS(117),
    [anon_sym_Channel2] = ACTIONS(117),
    [anon_sym_Channel3] = ACTIONS(117),
    [anon_sym_Channel4] = ACTIONS(117),
    [anon_sym_Channel5] = ACTIONS(117),
    [anon_sym_Channel6] = ACTIONS(117),
    [anon_sym_Channel7] = ACTIONS(117),
    [anon_sym_Charge] = ACTIONS(117),
    [anon_sym_Chart] = ACTIONS(117),
    [anon_sym_ChartedNavPoints] = ACTIONS(117),
    [anon_sym_ClearMemory] = ACTIONS(117),
    [anon_sym_CollectableGoods] = ACTIONS(117),
    [anon_sym_Color] = ACTIONS(117),
    [anon_sym_Combustion] = ACTIONS(117),
    [anon_sym_CombustionInput] = ACTIONS(117),
    [anon_sym_CombustionInput2] = ACTIONS(117),
    [anon_sym_CombustionLimiter] = ACTIONS(117),
    [anon_sym_CombustionOutput] = ACTIONS(117),
    [anon_sym_CombustionOutput2] = ACTIONS(117),
    [anon_sym_CompletionRatio] = ACTIONS(117),
    [anon_sym_ContactTypeId] = ACTIONS(117),
    [anon_sym_CurrentCode] = ACTIONS(117),
    [anon_sym_CurrentResearchPodType] = ACTIONS(117),
    [anon_sym_Density] = ACTIONS(117),
    [anon_sym_DestinationCode] = ACTIONS(117),
    [anon_sym_Discover] = ACTIONS(117),
    [anon_sym_DistanceAu] = ACTIONS(117),
    [anon_sym_DistanceKm] = ACTIONS(117),
    [anon_sym_DrillCondition] = ACTIONS(117),
    [anon_sym_DryMass] = ACTIONS(117),
    [anon_sym_Eccentricity] = ACTIONS(117),
    [anon_sym_ElevatorLevel] = ACTIONS(117),
    [anon_sym_ElevatorSpeed] = ACTIONS(117),
    [anon_sym_EntityState] = ACTIONS(117),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(117),
    [anon_sym_Error] = ACTIONS(117),
    [anon_sym_ExhaustVelocity] = ACTIONS(117),
    [anon_sym_ExportCount] = ACTIONS(117),
    [anon_sym_ExportQuantity] = ACTIONS(117),
    [anon_sym_ExportSlotHash] = ACTIONS(117),
    [anon_sym_ExportSlotOccupant] = ACTIONS(117),
    [anon_sym_Filtration] = ACTIONS(117),
    [anon_sym_FlightControlRule] = ACTIONS(117),
    [anon_sym_Flush] = ACTIONS(117),
    [anon_sym_ForceWrite] = ACTIONS(117),
    [anon_sym_ForwardX] = ACTIONS(117),
    [anon_sym_ForwardY] = ACTIONS(117),
    [anon_sym_ForwardZ] = ACTIONS(117),
    [anon_sym_Fuel] = ACTIONS(117),
    [anon_sym_Harvest] = ACTIONS(117),
    [anon_sym_Horizontal] = ACTIONS(117),
    [anon_sym_HorizontalRatio] = ACTIONS(117),
    [anon_sym_Idle] = ACTIONS(117),
    [anon_sym_ImportCount] = ACTIONS(117),
    [anon_sym_ImportQuantity] = ACTIONS(117),
    [anon_sym_ImportSlotHash] = ACTIONS(117),
    [anon_sym_ImportSlotOccupant] = ACTIONS(117),
    [anon_sym_Inclination] = ACTIONS(117),
    [anon_sym_Index] = ACTIONS(117),
    [anon_sym_InterrogationProgress] = ACTIONS(117),
    [anon_sym_LineNumber] = ACTIONS(117),
    [anon_sym_Lock] = ACTIONS(117),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(117),
    [anon_sym_Mass] = ACTIONS(117),
    [anon_sym_Maximum] = ACTIONS(117),
    [anon_sym_MinWattsToContact] = ACTIONS(117),
    [anon_sym_MineablesInQueue] = ACTIONS(117),
    [anon_sym_MineablesInVicinity] = ACTIONS(117),
    [anon_sym_MinedQuantity] = ACTIONS(117),
    [anon_sym_MinimumWattsToContact] = ACTIONS(117),
    [anon_sym_Mode] = ACTIONS(117),
    [anon_sym_NavPoints] = ACTIONS(117),
    [anon_sym_NextWeatherEventTime] = ACTIONS(117),
    [anon_sym_None] = ACTIONS(117),
    [anon_sym_On] = ACTIONS(117),
    [anon_sym_Open] = ACTIONS(117),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(117),
    [anon_sym_OrbitPeriod] = ACTIONS(117),
    [anon_sym_Orientation] = ACTIONS(117),
    [anon_sym_Output] = ACTIONS(117),
    [anon_sym_OverShootTarget] = ACTIONS(117),
    [anon_sym_PassedMoles] = ACTIONS(117),
    [anon_sym_Plant] = ACTIONS(117),
    [anon_sym_PlantEfficiency1] = ACTIONS(117),
    [anon_sym_PlantEfficiency2] = ACTIONS(117),
    [anon_sym_PlantEfficiency3] = ACTIONS(117),
    [anon_sym_PlantEfficiency4] = ACTIONS(117),
    [anon_sym_PlantGrowth1] = ACTIONS(117),
    [anon_sym_PlantGrowth2] = ACTIONS(117),
    [anon_sym_PlantGrowth3] = ACTIONS(117),
    [anon_sym_PlantGrowth4] = ACTIONS(117),
    [anon_sym_PlantHash1] = ACTIONS(117),
    [anon_sym_PlantHash2] = ACTIONS(117),
    [anon_sym_PlantHash3] = ACTIONS(117),
    [anon_sym_PlantHash4] = ACTIONS(117),
    [anon_sym_PlantHealth1] = ACTIONS(117),
    [anon_sym_PlantHealth2] = ACTIONS(117),
    [anon_sym_PlantHealth3] = ACTIONS(117),
    [anon_sym_PlantHealth4] = ACTIONS(117),
    [anon_sym_PositionX] = ACTIONS(117),
    [anon_sym_PositionY] = ACTIONS(117),
    [anon_sym_PositionZ] = ACTIONS(117),
    [anon_sym_Power] = ACTIONS(117),
    [anon_sym_PowerActual] = ACTIONS(117),
    [anon_sym_PowerGeneration] = ACTIONS(117),
    [anon_sym_PowerPotential] = ACTIONS(117),
    [anon_sym_PowerRequired] = ACTIONS(117),
    [anon_sym_PrefabHash] = ACTIONS(117),
    [anon_sym_Pressure] = ACTIONS(117),
    [anon_sym_PressureEfficiency] = ACTIONS(117),
    [anon_sym_PressureExternal] = ACTIONS(117),
    [anon_sym_PressureInput] = ACTIONS(117),
    [anon_sym_PressureInput2] = ACTIONS(117),
    [anon_sym_PressureInternal] = ACTIONS(117),
    [anon_sym_PressureOutput] = ACTIONS(117),
    [anon_sym_PressureOutput2] = ACTIONS(117),
    [anon_sym_PressureSetting] = ACTIONS(117),
    [anon_sym_Progress] = ACTIONS(117),
    [anon_sym_Quantity] = ACTIONS(117),
    [anon_sym_Ratio] = ACTIONS(117),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(117),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(117),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(117),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(117),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(117),
    [anon_sym_RatioHydrogen] = ACTIONS(117),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(117),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(117),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(117),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(117),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(117),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(117),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(117),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(117),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(117),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(117),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(117),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(117),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(117),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(117),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(117),
    [anon_sym_RatioNitrogen] = ACTIONS(117),
    [anon_sym_RatioNitrogenInput] = ACTIONS(117),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(117),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(117),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(117),
    [anon_sym_RatioNitrousOxide] = ACTIONS(117),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(117),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(117),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(117),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(117),
    [anon_sym_RatioOxygen] = ACTIONS(117),
    [anon_sym_RatioOxygenInput] = ACTIONS(117),
    [anon_sym_RatioOxygenInput2] = ACTIONS(117),
    [anon_sym_RatioOxygenOutput] = ACTIONS(117),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(117),
    [anon_sym_RatioPollutant] = ACTIONS(117),
    [anon_sym_RatioPollutantInput] = ACTIONS(117),
    [anon_sym_RatioPollutantInput2] = ACTIONS(117),
    [anon_sym_RatioPollutantOutput] = ACTIONS(117),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(117),
    [anon_sym_RatioPollutedWater] = ACTIONS(117),
    [anon_sym_RatioSteam] = ACTIONS(117),
    [anon_sym_RatioSteamInput] = ACTIONS(117),
    [anon_sym_RatioSteamInput2] = ACTIONS(117),
    [anon_sym_RatioSteamOutput] = ACTIONS(117),
    [anon_sym_RatioSteamOutput2] = ACTIONS(117),
    [anon_sym_RatioVolatiles] = ACTIONS(117),
    [anon_sym_RatioVolatilesInput] = ACTIONS(117),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(117),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(117),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(117),
    [anon_sym_RatioWater] = ACTIONS(117),
    [anon_sym_RatioWaterInput] = ACTIONS(117),
    [anon_sym_RatioWaterInput2] = ACTIONS(117),
    [anon_sym_RatioWaterOutput] = ACTIONS(117),
    [anon_sym_RatioWaterOutput2] = ACTIONS(117),
    [anon_sym_ReEntryAltitude] = ACTIONS(117),
    [anon_sym_Reagents] = ACTIONS(117),
    [anon_sym_RecipeHash] = ACTIONS(117),
    [anon_sym_ReferenceId] = ACTIONS(117),
    [anon_sym_RequestHash] = ACTIONS(117),
    [anon_sym_RequiredPower] = ACTIONS(117),
    [anon_sym_ReturnFuelCost] = ACTIONS(117),
    [anon_sym_Richness] = ACTIONS(117),
    [anon_sym_Rpm] = ACTIONS(117),
    [anon_sym_SemiMajorAxis] = ACTIONS(117),
    [anon_sym_Setting] = ACTIONS(117),
    [anon_sym_SettingInput] = ACTIONS(117),
    [anon_sym_SettingInputHash] = ACTIONS(117),
    [anon_sym_SettingOutput] = ACTIONS(117),
    [anon_sym_SettingOutputHash] = ACTIONS(117),
    [anon_sym_SignalID] = ACTIONS(117),
    [anon_sym_SignalStrength] = ACTIONS(117),
    [anon_sym_Sites] = ACTIONS(117),
    [anon_sym_Size] = ACTIONS(117),
    [anon_sym_SizeX] = ACTIONS(117),
    [anon_sym_SizeY] = ACTIONS(117),
    [anon_sym_SizeZ] = ACTIONS(117),
    [anon_sym_SolarAngle] = ACTIONS(117),
    [anon_sym_SolarConstant] = ACTIONS(117),
    [anon_sym_SolarIrradiance] = ACTIONS(117),
    [anon_sym_SoundAlert] = ACTIONS(117),
    [anon_sym_Stress] = ACTIONS(117),
    [anon_sym_Survey] = ACTIONS(117),
    [anon_sym_TargetPadIndex] = ACTIONS(117),
    [anon_sym_TargetX] = ACTIONS(117),
    [anon_sym_TargetY] = ACTIONS(117),
    [anon_sym_TargetZ] = ACTIONS(117),
    [anon_sym_Temperature] = ACTIONS(117),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(117),
    [anon_sym_TemperatureExternal] = ACTIONS(117),
    [anon_sym_TemperatureInput] = ACTIONS(117),
    [anon_sym_TemperatureInput2] = ACTIONS(117),
    [anon_sym_TemperatureOutput] = ACTIONS(117),
    [anon_sym_TemperatureOutput2] = ACTIONS(117),
    [anon_sym_TemperatureSetting] = ACTIONS(117),
    [anon_sym_Throttle] = ACTIONS(117),
    [anon_sym_Thrust] = ACTIONS(117),
    [anon_sym_ThrustToWeight] = ACTIONS(117),
    [anon_sym_Time] = ACTIONS(117),
    [anon_sym_TimeToDestination] = ACTIONS(117),
    [anon_sym_TotalMoles] = ACTIONS(117),
    [anon_sym_TotalMolesInput] = ACTIONS(117),
    [anon_sym_TotalMolesInput2] = ACTIONS(117),
    [anon_sym_TotalMolesOutput] = ACTIONS(117),
    [anon_sym_TotalMolesOutput2] = ACTIONS(117),
    [anon_sym_TotalQuantity] = ACTIONS(117),
    [anon_sym_TrueAnomaly] = ACTIONS(117),
    [anon_sym_Unknown] = ACTIONS(117),
    [anon_sym_VelocityMagnitude] = ACTIONS(117),
    [anon_sym_VelocityRelativeX] = ACTIONS(117),
    [anon_sym_VelocityRelativeY] = ACTIONS(117),
    [anon_sym_VelocityRelativeZ] = ACTIONS(117),
    [anon_sym_VelocityX] = ACTIONS(117),
    [anon_sym_VelocityY] = ACTIONS(117),
    [anon_sym_VelocityZ] = ACTIONS(117),
    [anon_sym_Vertical] = ACTIONS(117),
    [anon_sym_VerticalRatio] = ACTIONS(117),
    [anon_sym_Volume] = ACTIONS(117),
    [anon_sym_VolumeOfLiquid] = ACTIONS(117),
    [anon_sym_WattsReachingContact] = ACTIONS(117),
    [anon_sym_Weight] = ACTIONS(117),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(117),
    [anon_sym_ChargeRatio] = ACTIONS(117),
    [anon_sym_Class] = ACTIONS(117),
    [anon_sym_Damage] = ACTIONS(117),
    [anon_sym_Efficiency] = ACTIONS(117),
    [anon_sym_FilterType] = ACTIONS(117),
    [anon_sym_Growth] = ACTIONS(117),
    [anon_sym_Health] = ACTIONS(117),
    [anon_sym_Mature] = ACTIONS(117),
    [anon_sym_MaxQuantity] = ACTIONS(117),
    [anon_sym_OccupantHash] = ACTIONS(117),
    [anon_sym_Occupied] = ACTIONS(117),
    [anon_sym_PressureAir] = ACTIONS(117),
    [anon_sym_PressureWaste] = ACTIONS(117),
    [anon_sym_Seeding] = ACTIONS(117),
    [anon_sym_SortingClass] = ACTIONS(117),
    [anon_sym_Average] = ACTIONS(117),
    [anon_sym_Minimum] = ACTIONS(117),
    [anon_sym_Sum] = ACTIONS(117),
    [anon_sym_Contents] = ACTIONS(117),
    [anon_sym_Recipe] = ACTIONS(117),
    [anon_sym_Required] = ACTIONS(117),
    [anon_sym_TotalContents] = ACTIONS(117),
    [sym_enum] = ACTIONS(119),
  },
  [12] = {
    [sym_identifier] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_CR_LF] = ACTIONS(123),
    [anon_sym_CR] = ACTIONS(121),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(123),
    [sym_register] = ACTIONS(123),
    [sym_device] = ACTIONS(123),
    [anon_sym_nan] = ACTIONS(121),
    [anon_sym_pinf] = ACTIONS(121),
    [anon_sym_ninf] = ACTIONS(121),
    [anon_sym_pi] = ACTIONS(121),
    [anon_sym_deg2rad] = ACTIONS(121),
    [anon_sym_rad2deg] = ACTIONS(121),
    [anon_sym_epsilon] = ACTIONS(121),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(123),
    [aux_sym_number_token1] = ACTIONS(123),
    [anon_sym_Acceleration] = ACTIONS(121),
    [anon_sym_Activate] = ACTIONS(121),
    [anon_sym_AirRelease] = ACTIONS(121),
    [anon_sym_AlignmentError] = ACTIONS(121),
    [anon_sym_Apex] = ACTIONS(121),
    [anon_sym_AutoLand] = ACTIONS(121),
    [anon_sym_AutoShutOff] = ACTIONS(121),
    [anon_sym_Bpm] = ACTIONS(121),
    [anon_sym_BurnTimeRemaining] = ACTIONS(121),
    [anon_sym_Bypass] = ACTIONS(121),
    [anon_sym_CelestialHash] = ACTIONS(121),
    [anon_sym_CelestialParentHash] = ACTIONS(121),
    [anon_sym_Channel] = ACTIONS(121),
    [anon_sym_Channel0] = ACTIONS(121),
    [anon_sym_Channel1] = ACTIONS(121),
    [anon_sym_Channel2] = ACTIONS(121),
    [anon_sym_Channel3] = ACTIONS(121),
    [anon_sym_Channel4] = ACTIONS(121),
    [anon_sym_Channel5] = ACTIONS(121),
    [anon_sym_Channel6] = ACTIONS(121),
    [anon_sym_Channel7] = ACTIONS(121),
    [anon_sym_Charge] = ACTIONS(121),
    [anon_sym_Chart] = ACTIONS(121),
    [anon_sym_ChartedNavPoints] = ACTIONS(121),
    [anon_sym_ClearMemory] = ACTIONS(121),
    [anon_sym_CollectableGoods] = ACTIONS(121),
    [anon_sym_Color] = ACTIONS(121),
    [anon_sym_Combustion] = ACTIONS(121),
    [anon_sym_CombustionInput] = ACTIONS(121),
    [anon_sym_CombustionInput2] = ACTIONS(121),
    [anon_sym_CombustionLimiter] = ACTIONS(121),
    [anon_sym_CombustionOutput] = ACTIONS(121),
    [anon_sym_CombustionOutput2] = ACTIONS(121),
    [anon_sym_CompletionRatio] = ACTIONS(121),
    [anon_sym_ContactTypeId] = ACTIONS(121),
    [anon_sym_CurrentCode] = ACTIONS(121),
    [anon_sym_CurrentResearchPodType] = ACTIONS(121),
    [anon_sym_Density] = ACTIONS(121),
    [anon_sym_DestinationCode] = ACTIONS(121),
    [anon_sym_Discover] = ACTIONS(121),
    [anon_sym_DistanceAu] = ACTIONS(121),
    [anon_sym_DistanceKm] = ACTIONS(121),
    [anon_sym_DrillCondition] = ACTIONS(121),
    [anon_sym_DryMass] = ACTIONS(121),
    [anon_sym_Eccentricity] = ACTIONS(121),
    [anon_sym_ElevatorLevel] = ACTIONS(121),
    [anon_sym_ElevatorSpeed] = ACTIONS(121),
    [anon_sym_EntityState] = ACTIONS(121),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(121),
    [anon_sym_Error] = ACTIONS(121),
    [anon_sym_ExhaustVelocity] = ACTIONS(121),
    [anon_sym_ExportCount] = ACTIONS(121),
    [anon_sym_ExportQuantity] = ACTIONS(121),
    [anon_sym_ExportSlotHash] = ACTIONS(121),
    [anon_sym_ExportSlotOccupant] = ACTIONS(121),
    [anon_sym_Filtration] = ACTIONS(121),
    [anon_sym_FlightControlRule] = ACTIONS(121),
    [anon_sym_Flush] = ACTIONS(121),
    [anon_sym_ForceWrite] = ACTIONS(121),
    [anon_sym_ForwardX] = ACTIONS(121),
    [anon_sym_ForwardY] = ACTIONS(121),
    [anon_sym_ForwardZ] = ACTIONS(121),
    [anon_sym_Fuel] = ACTIONS(121),
    [anon_sym_Harvest] = ACTIONS(121),
    [anon_sym_Horizontal] = ACTIONS(121),
    [anon_sym_HorizontalRatio] = ACTIONS(121),
    [anon_sym_Idle] = ACTIONS(121),
    [anon_sym_ImportCount] = ACTIONS(121),
    [anon_sym_ImportQuantity] = ACTIONS(121),
    [anon_sym_ImportSlotHash] = ACTIONS(121),
    [anon_sym_ImportSlotOccupant] = ACTIONS(121),
    [anon_sym_Inclination] = ACTIONS(121),
    [anon_sym_Index] = ACTIONS(121),
    [anon_sym_InterrogationProgress] = ACTIONS(121),
    [anon_sym_LineNumber] = ACTIONS(121),
    [anon_sym_Lock] = ACTIONS(121),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(121),
    [anon_sym_Mass] = ACTIONS(121),
    [anon_sym_Maximum] = ACTIONS(121),
    [anon_sym_MinWattsToContact] = ACTIONS(121),
    [anon_sym_MineablesInQueue] = ACTIONS(121),
    [anon_sym_MineablesInVicinity] = ACTIONS(121),
    [anon_sym_MinedQuantity] = ACTIONS(121),
    [anon_sym_MinimumWattsToContact] = ACTIONS(121),
    [anon_sym_Mode] = ACTIONS(121),
    [anon_sym_NavPoints] = ACTIONS(121),
    [anon_sym_NextWeatherEventTime] = ACTIONS(121),
    [anon_sym_None] = ACTIONS(121),
    [anon_sym_On] = ACTIONS(121),
    [anon_sym_Open] = ACTIONS(121),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(121),
    [anon_sym_OrbitPeriod] = ACTIONS(121),
    [anon_sym_Orientation] = ACTIONS(121),
    [anon_sym_Output] = ACTIONS(121),
    [anon_sym_OverShootTarget] = ACTIONS(121),
    [anon_sym_PassedMoles] = ACTIONS(121),
    [anon_sym_Plant] = ACTIONS(121),
    [anon_sym_PlantEfficiency1] = ACTIONS(121),
    [anon_sym_PlantEfficiency2] = ACTIONS(121),
    [anon_sym_PlantEfficiency3] = ACTIONS(121),
    [anon_sym_PlantEfficiency4] = ACTIONS(121),
    [anon_sym_PlantGrowth1] = ACTIONS(121),
    [anon_sym_PlantGrowth2] = ACTIONS(121),
    [anon_sym_PlantGrowth3] = ACTIONS(121),
    [anon_sym_PlantGrowth4] = ACTIONS(121),
    [anon_sym_PlantHash1] = ACTIONS(121),
    [anon_sym_PlantHash2] = ACTIONS(121),
    [anon_sym_PlantHash3] = ACTIONS(121),
    [anon_sym_PlantHash4] = ACTIONS(121),
    [anon_sym_PlantHealth1] = ACTIONS(121),
    [anon_sym_PlantHealth2] = ACTIONS(121),
    [anon_sym_PlantHealth3] = ACTIONS(121),
    [anon_sym_PlantHealth4] = ACTIONS(121),
    [anon_sym_PositionX] = ACTIONS(121),
    [anon_sym_PositionY] = ACTIONS(121),
    [anon_sym_PositionZ] = ACTIONS(121),
    [anon_sym_Power] = ACTIONS(121),
    [anon_sym_PowerActual] = ACTIONS(121),
    [anon_sym_PowerGeneration] = ACTIONS(121),
    [anon_sym_PowerPotential] = ACTIONS(121),
    [anon_sym_PowerRequired] = ACTIONS(121),
    [anon_sym_PrefabHash] = ACTIONS(121),
    [anon_sym_Pressure] = ACTIONS(121),
    [anon_sym_PressureEfficiency] = ACTIONS(121),
    [anon_sym_PressureExternal] = ACTIONS(121),
    [anon_sym_PressureInput] = ACTIONS(121),
    [anon_sym_PressureInput2] = ACTIONS(121),
    [anon_sym_PressureInternal] = ACTIONS(121),
    [anon_sym_PressureOutput] = ACTIONS(121),
    [anon_sym_PressureOutput2] = ACTIONS(121),
    [anon_sym_PressureSetting] = ACTIONS(121),
    [anon_sym_Progress] = ACTIONS(121),
    [anon_sym_Quantity] = ACTIONS(121),
    [anon_sym_Ratio] = ACTIONS(121),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(121),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(121),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(121),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(121),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(121),
    [anon_sym_RatioHydrogen] = ACTIONS(121),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(121),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(121),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(121),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(121),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(121),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(121),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(121),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(121),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(121),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(121),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(121),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(121),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(121),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(121),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(121),
    [anon_sym_RatioNitrogen] = ACTIONS(121),
    [anon_sym_RatioNitrogenInput] = ACTIONS(121),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(121),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(121),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(121),
    [anon_sym_RatioNitrousOxide] = ACTIONS(121),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(121),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(121),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(121),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(121),
    [anon_sym_RatioOxygen] = ACTIONS(121),
    [anon_sym_RatioOxygenInput] = ACTIONS(121),
    [anon_sym_RatioOxygenInput2] = ACTIONS(121),
    [anon_sym_RatioOxygenOutput] = ACTIONS(121),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(121),
    [anon_sym_RatioPollutant] = ACTIONS(121),
    [anon_sym_RatioPollutantInput] = ACTIONS(121),
    [anon_sym_RatioPollutantInput2] = ACTIONS(121),
    [anon_sym_RatioPollutantOutput] = ACTIONS(121),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(121),
    [anon_sym_RatioPollutedWater] = ACTIONS(121),
    [anon_sym_RatioSteam] = ACTIONS(121),
    [anon_sym_RatioSteamInput] = ACTIONS(121),
    [anon_sym_RatioSteamInput2] = ACTIONS(121),
    [anon_sym_RatioSteamOutput] = ACTIONS(121),
    [anon_sym_RatioSteamOutput2] = ACTIONS(121),
    [anon_sym_RatioVolatiles] = ACTIONS(121),
    [anon_sym_RatioVolatilesInput] = ACTIONS(121),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(121),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(121),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(121),
    [anon_sym_RatioWater] = ACTIONS(121),
    [anon_sym_RatioWaterInput] = ACTIONS(121),
    [anon_sym_RatioWaterInput2] = ACTIONS(121),
    [anon_sym_RatioWaterOutput] = ACTIONS(121),
    [anon_sym_RatioWaterOutput2] = ACTIONS(121),
    [anon_sym_ReEntryAltitude] = ACTIONS(121),
    [anon_sym_Reagents] = ACTIONS(121),
    [anon_sym_RecipeHash] = ACTIONS(121),
    [anon_sym_ReferenceId] = ACTIONS(121),
    [anon_sym_RequestHash] = ACTIONS(121),
    [anon_sym_RequiredPower] = ACTIONS(121),
    [anon_sym_ReturnFuelCost] = ACTIONS(121),
    [anon_sym_Richness] = ACTIONS(121),
    [anon_sym_Rpm] = ACTIONS(121),
    [anon_sym_SemiMajorAxis] = ACTIONS(121),
    [anon_sym_Setting] = ACTIONS(121),
    [anon_sym_SettingInput] = ACTIONS(121),
    [anon_sym_SettingInputHash] = ACTIONS(121),
    [anon_sym_SettingOutput] = ACTIONS(121),
    [anon_sym_SettingOutputHash] = ACTIONS(121),
    [anon_sym_SignalID] = ACTIONS(121),
    [anon_sym_SignalStrength] = ACTIONS(121),
    [anon_sym_Sites] = ACTIONS(121),
    [anon_sym_Size] = ACTIONS(121),
    [anon_sym_SizeX] = ACTIONS(121),
    [anon_sym_SizeY] = ACTIONS(121),
    [anon_sym_SizeZ] = ACTIONS(121),
    [anon_sym_SolarAngle] = ACTIONS(121),
    [anon_sym_SolarConstant] = ACTIONS(121),
    [anon_sym_SolarIrradiance] = ACTIONS(121),
    [anon_sym_SoundAlert] = ACTIONS(121),
    [anon_sym_Stress] = ACTIONS(121),
    [anon_sym_Survey] = ACTIONS(121),
    [anon_sym_TargetPadIndex] = ACTIONS(121),
    [anon_sym_TargetX] = ACTIONS(121),
    [anon_sym_TargetY] = ACTIONS(121),
    [anon_sym_TargetZ] = ACTIONS(121),
    [anon_sym_Temperature] = ACTIONS(121),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(121),
    [anon_sym_TemperatureExternal] = ACTIONS(121),
    [anon_sym_TemperatureInput] = ACTIONS(121),
    [anon_sym_TemperatureInput2] = ACTIONS(121),
    [anon_sym_TemperatureOutput] = ACTIONS(121),
    [anon_sym_TemperatureOutput2] = ACTIONS(121),
    [anon_sym_TemperatureSetting] = ACTIONS(121),
    [anon_sym_Throttle] = ACTIONS(121),
    [anon_sym_Thrust] = ACTIONS(121),
    [anon_sym_ThrustToWeight] = ACTIONS(121),
    [anon_sym_Time] = ACTIONS(121),
    [anon_sym_TimeToDestination] = ACTIONS(121),
    [anon_sym_TotalMoles] = ACTIONS(121),
    [anon_sym_TotalMolesInput] = ACTIONS(121),
    [anon_sym_TotalMolesInput2] = ACTIONS(121),
    [anon_sym_TotalMolesOutput] = ACTIONS(121),
    [anon_sym_TotalMolesOutput2] = ACTIONS(121),
    [anon_sym_TotalQuantity] = ACTIONS(121),
    [anon_sym_TrueAnomaly] = ACTIONS(121),
    [anon_sym_Unknown] = ACTIONS(121),
    [anon_sym_VelocityMagnitude] = ACTIONS(121),
    [anon_sym_VelocityRelativeX] = ACTIONS(121),
    [anon_sym_VelocityRelativeY] = ACTIONS(121),
    [anon_sym_VelocityRelativeZ] = ACTIONS(121),
    [anon_sym_VelocityX] = ACTIONS(121),
    [anon_sym_VelocityY] = ACTIONS(121),
    [anon_sym_VelocityZ] = ACTIONS(121),
    [anon_sym_Vertical] = ACTIONS(121),
    [anon_sym_VerticalRatio] = ACTIONS(121),
    [anon_sym_Volume] = ACTIONS(121),
    [anon_sym_VolumeOfLiquid] = ACTIONS(121),
    [anon_sym_WattsReachingContact] = ACTIONS(121),
    [anon_sym_Weight] = ACTIONS(121),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(121),
    [anon_sym_ChargeRatio] = ACTIONS(121),
    [anon_sym_Class] = ACTIONS(121),
    [anon_sym_Damage] = ACTIONS(121),
    [anon_sym_Efficiency] = ACTIONS(121),
    [anon_sym_FilterType] = ACTIONS(121),
    [anon_sym_Growth] = ACTIONS(121),
    [anon_sym_Health] = ACTIONS(121),
    [anon_sym_Mature] = ACTIONS(121),
    [anon_sym_MaxQuantity] = ACTIONS(121),
    [anon_sym_OccupantHash] = ACTIONS(121),
    [anon_sym_Occupied] = ACTIONS(121),
    [anon_sym_PressureAir] = ACTIONS(121),
    [anon_sym_PressureWaste] = ACTIONS(121),
    [anon_sym_Seeding] = ACTIONS(121),
    [anon_sym_SortingClass] = ACTIONS(121),
    [anon_sym_Average] = ACTIONS(121),
    [anon_sym_Minimum] = ACTIONS(121),
    [anon_sym_Sum] = ACTIONS(121),
    [anon_sym_Contents] = ACTIONS(121),
    [anon_sym_Recipe] = ACTIONS(121),
    [anon_sym_Required] = ACTIONS(121),
    [anon_sym_TotalContents] = ACTIONS(121),
    [sym_enum] = ACTIONS(123),
  },
  [13] = {
    [sym_identifier] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_CR_LF] = ACTIONS(127),
    [anon_sym_CR] = ACTIONS(125),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(127),
    [sym_register] = ACTIONS(127),
    [sym_device] = ACTIONS(127),
    [anon_sym_nan] = ACTIONS(125),
    [anon_sym_pinf] = ACTIONS(125),
    [anon_sym_ninf] = ACTIONS(125),
    [anon_sym_pi] = ACTIONS(125),
    [anon_sym_deg2rad] = ACTIONS(125),
    [anon_sym_rad2deg] = ACTIONS(125),
    [anon_sym_epsilon] = ACTIONS(125),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(127),
    [anon_sym_Acceleration] = ACTIONS(125),
    [anon_sym_Activate] = ACTIONS(125),
    [anon_sym_AirRelease] = ACTIONS(125),
    [anon_sym_AlignmentError] = ACTIONS(125),
    [anon_sym_Apex] = ACTIONS(125),
    [anon_sym_AutoLand] = ACTIONS(125),
    [anon_sym_AutoShutOff] = ACTIONS(125),
    [anon_sym_Bpm] = ACTIONS(125),
    [anon_sym_BurnTimeRemaining] = ACTIONS(125),
    [anon_sym_Bypass] = ACTIONS(125),
    [anon_sym_CelestialHash] = ACTIONS(125),
    [anon_sym_CelestialParentHash] = ACTIONS(125),
    [anon_sym_Channel] = ACTIONS(125),
    [anon_sym_Channel0] = ACTIONS(125),
    [anon_sym_Channel1] = ACTIONS(125),
    [anon_sym_Channel2] = ACTIONS(125),
    [anon_sym_Channel3] = ACTIONS(125),
    [anon_sym_Channel4] = ACTIONS(125),
    [anon_sym_Channel5] = ACTIONS(125),
    [anon_sym_Channel6] = ACTIONS(125),
    [anon_sym_Channel7] = ACTIONS(125),
    [anon_sym_Charge] = ACTIONS(125),
    [anon_sym_Chart] = ACTIONS(125),
    [anon_sym_ChartedNavPoints] = ACTIONS(125),
    [anon_sym_ClearMemory] = ACTIONS(125),
    [anon_sym_CollectableGoods] = ACTIONS(125),
    [anon_sym_Color] = ACTIONS(125),
    [anon_sym_Combustion] = ACTIONS(125),
    [anon_sym_CombustionInput] = ACTIONS(125),
    [anon_sym_CombustionInput2] = ACTIONS(125),
    [anon_sym_CombustionLimiter] = ACTIONS(125),
    [anon_sym_CombustionOutput] = ACTIONS(125),
    [anon_sym_CombustionOutput2] = ACTIONS(125),
    [anon_sym_CompletionRatio] = ACTIONS(125),
    [anon_sym_ContactTypeId] = ACTIONS(125),
    [anon_sym_CurrentCode] = ACTIONS(125),
    [anon_sym_CurrentResearchPodType] = ACTIONS(125),
    [anon_sym_Density] = ACTIONS(125),
    [anon_sym_DestinationCode] = ACTIONS(125),
    [anon_sym_Discover] = ACTIONS(125),
    [anon_sym_DistanceAu] = ACTIONS(125),
    [anon_sym_DistanceKm] = ACTIONS(125),
    [anon_sym_DrillCondition] = ACTIONS(125),
    [anon_sym_DryMass] = ACTIONS(125),
    [anon_sym_Eccentricity] = ACTIONS(125),
    [anon_sym_ElevatorLevel] = ACTIONS(125),
    [anon_sym_ElevatorSpeed] = ACTIONS(125),
    [anon_sym_EntityState] = ACTIONS(125),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(125),
    [anon_sym_Error] = ACTIONS(125),
    [anon_sym_ExhaustVelocity] = ACTIONS(125),
    [anon_sym_ExportCount] = ACTIONS(125),
    [anon_sym_ExportQuantity] = ACTIONS(125),
    [anon_sym_ExportSlotHash] = ACTIONS(125),
    [anon_sym_ExportSlotOccupant] = ACTIONS(125),
    [anon_sym_Filtration] = ACTIONS(125),
    [anon_sym_FlightControlRule] = ACTIONS(125),
    [anon_sym_Flush] = ACTIONS(125),
    [anon_sym_ForceWrite] = ACTIONS(125),
    [anon_sym_ForwardX] = ACTIONS(125),
    [anon_sym_ForwardY] = ACTIONS(125),
    [anon_sym_ForwardZ] = ACTIONS(125),
    [anon_sym_Fuel] = ACTIONS(125),
    [anon_sym_Harvest] = ACTIONS(125),
    [anon_sym_Horizontal] = ACTIONS(125),
    [anon_sym_HorizontalRatio] = ACTIONS(125),
    [anon_sym_Idle] = ACTIONS(125),
    [anon_sym_ImportCount] = ACTIONS(125),
    [anon_sym_ImportQuantity] = ACTIONS(125),
    [anon_sym_ImportSlotHash] = ACTIONS(125),
    [anon_sym_ImportSlotOccupant] = ACTIONS(125),
    [anon_sym_Inclination] = ACTIONS(125),
    [anon_sym_Index] = ACTIONS(125),
    [anon_sym_InterrogationProgress] = ACTIONS(125),
    [anon_sym_LineNumber] = ACTIONS(125),
    [anon_sym_Lock] = ACTIONS(125),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(125),
    [anon_sym_Mass] = ACTIONS(125),
    [anon_sym_Maximum] = ACTIONS(125),
    [anon_sym_MinWattsToContact] = ACTIONS(125),
    [anon_sym_MineablesInQueue] = ACTIONS(125),
    [anon_sym_MineablesInVicinity] = ACTIONS(125),
    [anon_sym_MinedQuantity] = ACTIONS(125),
    [anon_sym_MinimumWattsToContact] = ACTIONS(125),
    [anon_sym_Mode] = ACTIONS(125),
    [anon_sym_NavPoints] = ACTIONS(125),
    [anon_sym_NextWeatherEventTime] = ACTIONS(125),
    [anon_sym_None] = ACTIONS(125),
    [anon_sym_On] = ACTIONS(125),
    [anon_sym_Open] = ACTIONS(125),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(125),
    [anon_sym_OrbitPeriod] = ACTIONS(125),
    [anon_sym_Orientation] = ACTIONS(125),
    [anon_sym_Output] = ACTIONS(125),
    [anon_sym_OverShootTarget] = ACTIONS(125),
    [anon_sym_PassedMoles] = ACTIONS(125),
    [anon_sym_Plant] = ACTIONS(125),
    [anon_sym_PlantEfficiency1] = ACTIONS(125),
    [anon_sym_PlantEfficiency2] = ACTIONS(125),
    [anon_sym_PlantEfficiency3] = ACTIONS(125),
    [anon_sym_PlantEfficiency4] = ACTIONS(125),
    [anon_sym_PlantGrowth1] = ACTIONS(125),
    [anon_sym_PlantGrowth2] = ACTIONS(125),
    [anon_sym_PlantGrowth3] = ACTIONS(125),
    [anon_sym_PlantGrowth4] = ACTIONS(125),
    [anon_sym_PlantHash1] = ACTIONS(125),
    [anon_sym_PlantHash2] = ACTIONS(125),
    [anon_sym_PlantHash3] = ACTIONS(125),
    [anon_sym_PlantHash4] = ACTIONS(125),
    [anon_sym_PlantHealth1] = ACTIONS(125),
    [anon_sym_PlantHealth2] = ACTIONS(125),
    [anon_sym_PlantHealth3] = ACTIONS(125),
    [anon_sym_PlantHealth4] = ACTIONS(125),
    [anon_sym_PositionX] = ACTIONS(125),
    [anon_sym_PositionY] = ACTIONS(125),
    [anon_sym_PositionZ] = ACTIONS(125),
    [anon_sym_Power] = ACTIONS(125),
    [anon_sym_PowerActual] = ACTIONS(125),
    [anon_sym_PowerGeneration] = ACTIONS(125),
    [anon_sym_PowerPotential] = ACTIONS(125),
    [anon_sym_PowerRequired] = ACTIONS(125),
    [anon_sym_PrefabHash] = ACTIONS(125),
    [anon_sym_Pressure] = ACTIONS(125),
    [anon_sym_PressureEfficiency] = ACTIONS(125),
    [anon_sym_PressureExternal] = ACTIONS(125),
    [anon_sym_PressureInput] = ACTIONS(125),
    [anon_sym_PressureInput2] = ACTIONS(125),
    [anon_sym_PressureInternal] = ACTIONS(125),
    [anon_sym_PressureOutput] = ACTIONS(125),
    [anon_sym_PressureOutput2] = ACTIONS(125),
    [anon_sym_PressureSetting] = ACTIONS(125),
    [anon_sym_Progress] = ACTIONS(125),
    [anon_sym_Quantity] = ACTIONS(125),
    [anon_sym_Ratio] = ACTIONS(125),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(125),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(125),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(125),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(125),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(125),
    [anon_sym_RatioHydrogen] = ACTIONS(125),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(125),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(125),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(125),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(125),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(125),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(125),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(125),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(125),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(125),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(125),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(125),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(125),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(125),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(125),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(125),
    [anon_sym_RatioNitrogen] = ACTIONS(125),
    [anon_sym_RatioNitrogenInput] = ACTIONS(125),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(125),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(125),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(125),
    [anon_sym_RatioNitrousOxide] = ACTIONS(125),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(125),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(125),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(125),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(125),
    [anon_sym_RatioOxygen] = ACTIONS(125),
    [anon_sym_RatioOxygenInput] = ACTIONS(125),
    [anon_sym_RatioOxygenInput2] = ACTIONS(125),
    [anon_sym_RatioOxygenOutput] = ACTIONS(125),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(125),
    [anon_sym_RatioPollutant] = ACTIONS(125),
    [anon_sym_RatioPollutantInput] = ACTIONS(125),
    [anon_sym_RatioPollutantInput2] = ACTIONS(125),
    [anon_sym_RatioPollutantOutput] = ACTIONS(125),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(125),
    [anon_sym_RatioPollutedWater] = ACTIONS(125),
    [anon_sym_RatioSteam] = ACTIONS(125),
    [anon_sym_RatioSteamInput] = ACTIONS(125),
    [anon_sym_RatioSteamInput2] = ACTIONS(125),
    [anon_sym_RatioSteamOutput] = ACTIONS(125),
    [anon_sym_RatioSteamOutput2] = ACTIONS(125),
    [anon_sym_RatioVolatiles] = ACTIONS(125),
    [anon_sym_RatioVolatilesInput] = ACTIONS(125),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(125),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(125),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(125),
    [anon_sym_RatioWater] = ACTIONS(125),
    [anon_sym_RatioWaterInput] = ACTIONS(125),
    [anon_sym_RatioWaterInput2] = ACTIONS(125),
    [anon_sym_RatioWaterOutput] = ACTIONS(125),
    [anon_sym_RatioWaterOutput2] = ACTIONS(125),
    [anon_sym_ReEntryAltitude] = ACTIONS(125),
    [anon_sym_Reagents] = ACTIONS(125),
    [anon_sym_RecipeHash] = ACTIONS(125),
    [anon_sym_ReferenceId] = ACTIONS(125),
    [anon_sym_RequestHash] = ACTIONS(125),
    [anon_sym_RequiredPower] = ACTIONS(125),
    [anon_sym_ReturnFuelCost] = ACTIONS(125),
    [anon_sym_Richness] = ACTIONS(125),
    [anon_sym_Rpm] = ACTIONS(125),
    [anon_sym_SemiMajorAxis] = ACTIONS(125),
    [anon_sym_Setting] = ACTIONS(125),
    [anon_sym_SettingInput] = ACTIONS(125),
    [anon_sym_SettingInputHash] = ACTIONS(125),
    [anon_sym_SettingOutput] = ACTIONS(125),
    [anon_sym_SettingOutputHash] = ACTIONS(125),
    [anon_sym_SignalID] = ACTIONS(125),
    [anon_sym_SignalStrength] = ACTIONS(125),
    [anon_sym_Sites] = ACTIONS(125),
    [anon_sym_Size] = ACTIONS(125),
    [anon_sym_SizeX] = ACTIONS(125),
    [anon_sym_SizeY] = ACTIONS(125),
    [anon_sym_SizeZ] = ACTIONS(125),
    [anon_sym_SolarAngle] = ACTIONS(125),
    [anon_sym_SolarConstant] = ACTIONS(125),
    [anon_sym_SolarIrradiance] = ACTIONS(125),
    [anon_sym_SoundAlert] = ACTIONS(125),
    [anon_sym_Stress] = ACTIONS(125),
    [anon_sym_Survey] = ACTIONS(125),
    [anon_sym_TargetPadIndex] = ACTIONS(125),
    [anon_sym_TargetX] = ACTIONS(125),
    [anon_sym_TargetY] = ACTIONS(125),
    [anon_sym_TargetZ] = ACTIONS(125),
    [anon_sym_Temperature] = ACTIONS(125),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(125),
    [anon_sym_TemperatureExternal] = ACTIONS(125),
    [anon_sym_TemperatureInput] = ACTIONS(125),
    [anon_sym_TemperatureInput2] = ACTIONS(125),
    [anon_sym_TemperatureOutput] = ACTIONS(125),
    [anon_sym_TemperatureOutput2] = ACTIONS(125),
    [anon_sym_TemperatureSetting] = ACTIONS(125),
    [anon_sym_Throttle] = ACTIONS(125),
    [anon_sym_Thrust] = ACTIONS(125),
    [anon_sym_ThrustToWeight] = ACTIONS(125),
    [anon_sym_Time] = ACTIONS(125),
    [anon_sym_TimeToDestination] = ACTIONS(125),
    [anon_sym_TotalMoles] = ACTIONS(125),
    [anon_sym_TotalMolesInput] = ACTIONS(125),
    [anon_sym_TotalMolesInput2] = ACTIONS(125),
    [anon_sym_TotalMolesOutput] = ACTIONS(125),
    [anon_sym_TotalMolesOutput2] = ACTIONS(125),
    [anon_sym_TotalQuantity] = ACTIONS(125),
    [anon_sym_TrueAnomaly] = ACTIONS(125),
    [anon_sym_Unknown] = ACTIONS(125),
    [anon_sym_VelocityMagnitude] = ACTIONS(125),
    [anon_sym_VelocityRelativeX] = ACTIONS(125),
    [anon_sym_VelocityRelativeY] = ACTIONS(125),
    [anon_sym_VelocityRelativeZ] = ACTIONS(125),
    [anon_sym_VelocityX] = ACTIONS(125),
    [anon_sym_VelocityY] = ACTIONS(125),
    [anon_sym_VelocityZ] = ACTIONS(125),
    [anon_sym_Vertical] = ACTIONS(125),
    [anon_sym_VerticalRatio] = ACTIONS(125),
    [anon_sym_Volume] = ACTIONS(125),
    [anon_sym_VolumeOfLiquid] = ACTIONS(125),
    [anon_sym_WattsReachingContact] = ACTIONS(125),
    [anon_sym_Weight] = ACTIONS(125),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(125),
    [anon_sym_ChargeRatio] = ACTIONS(125),
    [anon_sym_Class] = ACTIONS(125),
    [anon_sym_Damage] = ACTIONS(125),
    [anon_sym_Efficiency] = ACTIONS(125),
    [anon_sym_FilterType] = ACTIONS(125),
    [anon_sym_Growth] = ACTIONS(125),
    [anon_sym_Health] = ACTIONS(125),
    [anon_sym_Mature] = ACTIONS(125),
    [anon_sym_MaxQuantity] = ACTIONS(125),
    [anon_sym_OccupantHash] = ACTIONS(125),
    [anon_sym_Occupied] = ACTIONS(125),
    [anon_sym_PressureAir] = ACTIONS(125),
    [anon_sym_PressureWaste] = ACTIONS(125),
    [anon_sym_Seeding] = ACTIONS(125),
    [anon_sym_SortingClass] = ACTIONS(125),
    [anon_sym_Average] = ACTIONS(125),
    [anon_sym_Minimum] = ACTIONS(125),
    [anon_sym_Sum] = ACTIONS(125),
    [anon_sym_Contents] = ACTIONS(125),
    [anon_sym_Recipe] = ACTIONS(125),
    [anon_sym_Required] = ACTIONS(125),
    [anon_sym_TotalContents] = ACTIONS(125),
    [sym_enum] = ACTIONS(127),
  },
  [14] = {
    [sym_identifier] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_CR_LF] = ACTIONS(131),
    [anon_sym_CR] = ACTIONS(129),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(131),
    [sym_register] = ACTIONS(131),
    [sym_device] = ACTIONS(131),
    [anon_sym_nan] = ACTIONS(129),
    [anon_sym_pinf] = ACTIONS(129),
    [anon_sym_ninf] = ACTIONS(129),
    [anon_sym_pi] = ACTIONS(129),
    [anon_sym_deg2rad] = ACTIONS(129),
    [anon_sym_rad2deg] = ACTIONS(129),
    [anon_sym_epsilon] = ACTIONS(129),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(131),
    [aux_sym_number_token1] = ACTIONS(131),
    [anon_sym_Acceleration] = ACTIONS(129),
    [anon_sym_Activate] = ACTIONS(129),
    [anon_sym_AirRelease] = ACTIONS(129),
    [anon_sym_AlignmentError] = ACTIONS(129),
    [anon_sym_Apex] = ACTIONS(129),
    [anon_sym_AutoLand] = ACTIONS(129),
    [anon_sym_AutoShutOff] = ACTIONS(129),
    [anon_sym_Bpm] = ACTIONS(129),
    [anon_sym_BurnTimeRemaining] = ACTIONS(129),
    [anon_sym_Bypass] = ACTIONS(129),
    [anon_sym_CelestialHash] = ACTIONS(129),
    [anon_sym_CelestialParentHash] = ACTIONS(129),
    [anon_sym_Channel] = ACTIONS(129),
    [anon_sym_Channel0] = ACTIONS(129),
    [anon_sym_Channel1] = ACTIONS(129),
    [anon_sym_Channel2] = ACTIONS(129),
    [anon_sym_Channel3] = ACTIONS(129),
    [anon_sym_Channel4] = ACTIONS(129),
    [anon_sym_Channel5] = ACTIONS(129),
    [anon_sym_Channel6] = ACTIONS(129),
    [anon_sym_Channel7] = ACTIONS(129),
    [anon_sym_Charge] = ACTIONS(129),
    [anon_sym_Chart] = ACTIONS(129),
    [anon_sym_ChartedNavPoints] = ACTIONS(129),
    [anon_sym_ClearMemory] = ACTIONS(129),
    [anon_sym_CollectableGoods] = ACTIONS(129),
    [anon_sym_Color] = ACTIONS(129),
    [anon_sym_Combustion] = ACTIONS(129),
    [anon_sym_CombustionInput] = ACTIONS(129),
    [anon_sym_CombustionInput2] = ACTIONS(129),
    [anon_sym_CombustionLimiter] = ACTIONS(129),
    [anon_sym_CombustionOutput] = ACTIONS(129),
    [anon_sym_CombustionOutput2] = ACTIONS(129),
    [anon_sym_CompletionRatio] = ACTIONS(129),
    [anon_sym_ContactTypeId] = ACTIONS(129),
    [anon_sym_CurrentCode] = ACTIONS(129),
    [anon_sym_CurrentResearchPodType] = ACTIONS(129),
    [anon_sym_Density] = ACTIONS(129),
    [anon_sym_DestinationCode] = ACTIONS(129),
    [anon_sym_Discover] = ACTIONS(129),
    [anon_sym_DistanceAu] = ACTIONS(129),
    [anon_sym_DistanceKm] = ACTIONS(129),
    [anon_sym_DrillCondition] = ACTIONS(129),
    [anon_sym_DryMass] = ACTIONS(129),
    [anon_sym_Eccentricity] = ACTIONS(129),
    [anon_sym_ElevatorLevel] = ACTIONS(129),
    [anon_sym_ElevatorSpeed] = ACTIONS(129),
    [anon_sym_EntityState] = ACTIONS(129),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(129),
    [anon_sym_Error] = ACTIONS(129),
    [anon_sym_ExhaustVelocity] = ACTIONS(129),
    [anon_sym_ExportCount] = ACTIONS(129),
    [anon_sym_ExportQuantity] = ACTIONS(129),
    [anon_sym_ExportSlotHash] = ACTIONS(129),
    [anon_sym_ExportSlotOccupant] = ACTIONS(129),
    [anon_sym_Filtration] = ACTIONS(129),
    [anon_sym_FlightControlRule] = ACTIONS(129),
    [anon_sym_Flush] = ACTIONS(129),
    [anon_sym_ForceWrite] = ACTIONS(129),
    [anon_sym_ForwardX] = ACTIONS(129),
    [anon_sym_ForwardY] = ACTIONS(129),
    [anon_sym_ForwardZ] = ACTIONS(129),
    [anon_sym_Fuel] = ACTIONS(129),
    [anon_sym_Harvest] = ACTIONS(129),
    [anon_sym_Horizontal] = ACTIONS(129),
    [anon_sym_HorizontalRatio] = ACTIONS(129),
    [anon_sym_Idle] = ACTIONS(129),
    [anon_sym_ImportCount] = ACTIONS(129),
    [anon_sym_ImportQuantity] = ACTIONS(129),
    [anon_sym_ImportSlotHash] = ACTIONS(129),
    [anon_sym_ImportSlotOccupant] = ACTIONS(129),
    [anon_sym_Inclination] = ACTIONS(129),
    [anon_sym_Index] = ACTIONS(129),
    [anon_sym_InterrogationProgress] = ACTIONS(129),
    [anon_sym_LineNumber] = ACTIONS(129),
    [anon_sym_Lock] = ACTIONS(129),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(129),
    [anon_sym_Mass] = ACTIONS(129),
    [anon_sym_Maximum] = ACTIONS(129),
    [anon_sym_MinWattsToContact] = ACTIONS(129),
    [anon_sym_MineablesInQueue] = ACTIONS(129),
    [anon_sym_MineablesInVicinity] = ACTIONS(129),
    [anon_sym_MinedQuantity] = ACTIONS(129),
    [anon_sym_MinimumWattsToContact] = ACTIONS(129),
    [anon_sym_Mode] = ACTIONS(129),
    [anon_sym_NavPoints] = ACTIONS(129),
    [anon_sym_NextWeatherEventTime] = ACTIONS(129),
    [anon_sym_None] = ACTIONS(129),
    [anon_sym_On] = ACTIONS(129),
    [anon_sym_Open] = ACTIONS(129),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(129),
    [anon_sym_OrbitPeriod] = ACTIONS(129),
    [anon_sym_Orientation] = ACTIONS(129),
    [anon_sym_Output] = ACTIONS(129),
    [anon_sym_OverShootTarget] = ACTIONS(129),
    [anon_sym_PassedMoles] = ACTIONS(129),
    [anon_sym_Plant] = ACTIONS(129),
    [anon_sym_PlantEfficiency1] = ACTIONS(129),
    [anon_sym_PlantEfficiency2] = ACTIONS(129),
    [anon_sym_PlantEfficiency3] = ACTIONS(129),
    [anon_sym_PlantEfficiency4] = ACTIONS(129),
    [anon_sym_PlantGrowth1] = ACTIONS(129),
    [anon_sym_PlantGrowth2] = ACTIONS(129),
    [anon_sym_PlantGrowth3] = ACTIONS(129),
    [anon_sym_PlantGrowth4] = ACTIONS(129),
    [anon_sym_PlantHash1] = ACTIONS(129),
    [anon_sym_PlantHash2] = ACTIONS(129),
    [anon_sym_PlantHash3] = ACTIONS(129),
    [anon_sym_PlantHash4] = ACTIONS(129),
    [anon_sym_PlantHealth1] = ACTIONS(129),
    [anon_sym_PlantHealth2] = ACTIONS(129),
    [anon_sym_PlantHealth3] = ACTIONS(129),
    [anon_sym_PlantHealth4] = ACTIONS(129),
    [anon_sym_PositionX] = ACTIONS(129),
    [anon_sym_PositionY] = ACTIONS(129),
    [anon_sym_PositionZ] = ACTIONS(129),
    [anon_sym_Power] = ACTIONS(129),
    [anon_sym_PowerActual] = ACTIONS(129),
    [anon_sym_PowerGeneration] = ACTIONS(129),
    [anon_sym_PowerPotential] = ACTIONS(129),
    [anon_sym_PowerRequired] = ACTIONS(129),
    [anon_sym_PrefabHash] = ACTIONS(129),
    [anon_sym_Pressure] = ACTIONS(129),
    [anon_sym_PressureEfficiency] = ACTIONS(129),
    [anon_sym_PressureExternal] = ACTIONS(129),
    [anon_sym_PressureInput] = ACTIONS(129),
    [anon_sym_PressureInput2] = ACTIONS(129),
    [anon_sym_PressureInternal] = ACTIONS(129),
    [anon_sym_PressureOutput] = ACTIONS(129),
    [anon_sym_PressureOutput2] = ACTIONS(129),
    [anon_sym_PressureSetting] = ACTIONS(129),
    [anon_sym_Progress] = ACTIONS(129),
    [anon_sym_Quantity] = ACTIONS(129),
    [anon_sym_Ratio] = ACTIONS(129),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(129),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(129),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(129),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(129),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(129),
    [anon_sym_RatioHydrogen] = ACTIONS(129),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(129),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(129),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(129),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(129),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(129),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(129),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(129),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(129),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(129),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(129),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(129),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(129),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(129),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(129),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(129),
    [anon_sym_RatioNitrogen] = ACTIONS(129),
    [anon_sym_RatioNitrogenInput] = ACTIONS(129),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(129),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(129),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(129),
    [anon_sym_RatioNitrousOxide] = ACTIONS(129),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(129),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(129),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(129),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(129),
    [anon_sym_RatioOxygen] = ACTIONS(129),
    [anon_sym_RatioOxygenInput] = ACTIONS(129),
    [anon_sym_RatioOxygenInput2] = ACTIONS(129),
    [anon_sym_RatioOxygenOutput] = ACTIONS(129),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(129),
    [anon_sym_RatioPollutant] = ACTIONS(129),
    [anon_sym_RatioPollutantInput] = ACTIONS(129),
    [anon_sym_RatioPollutantInput2] = ACTIONS(129),
    [anon_sym_RatioPollutantOutput] = ACTIONS(129),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(129),
    [anon_sym_RatioPollutedWater] = ACTIONS(129),
    [anon_sym_RatioSteam] = ACTIONS(129),
    [anon_sym_RatioSteamInput] = ACTIONS(129),
    [anon_sym_RatioSteamInput2] = ACTIONS(129),
    [anon_sym_RatioSteamOutput] = ACTIONS(129),
    [anon_sym_RatioSteamOutput2] = ACTIONS(129),
    [anon_sym_RatioVolatiles] = ACTIONS(129),
    [anon_sym_RatioVolatilesInput] = ACTIONS(129),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(129),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(129),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(129),
    [anon_sym_RatioWater] = ACTIONS(129),
    [anon_sym_RatioWaterInput] = ACTIONS(129),
    [anon_sym_RatioWaterInput2] = ACTIONS(129),
    [anon_sym_RatioWaterOutput] = ACTIONS(129),
    [anon_sym_RatioWaterOutput2] = ACTIONS(129),
    [anon_sym_ReEntryAltitude] = ACTIONS(129),
    [anon_sym_Reagents] = ACTIONS(129),
    [anon_sym_RecipeHash] = ACTIONS(129),
    [anon_sym_ReferenceId] = ACTIONS(129),
    [anon_sym_RequestHash] = ACTIONS(129),
    [anon_sym_RequiredPower] = ACTIONS(129),
    [anon_sym_ReturnFuelCost] = ACTIONS(129),
    [anon_sym_Richness] = ACTIONS(129),
    [anon_sym_Rpm] = ACTIONS(129),
    [anon_sym_SemiMajorAxis] = ACTIONS(129),
    [anon_sym_Setting] = ACTIONS(129),
    [anon_sym_SettingInput] = ACTIONS(129),
    [anon_sym_SettingInputHash] = ACTIONS(129),
    [anon_sym_SettingOutput] = ACTIONS(129),
    [anon_sym_SettingOutputHash] = ACTIONS(129),
    [anon_sym_SignalID] = ACTIONS(129),
    [anon_sym_SignalStrength] = ACTIONS(129),
    [anon_sym_Sites] = ACTIONS(129),
    [anon_sym_Size] = ACTIONS(129),
    [anon_sym_SizeX] = ACTIONS(129),
    [anon_sym_SizeY] = ACTIONS(129),
    [anon_sym_SizeZ] = ACTIONS(129),
    [anon_sym_SolarAngle] = ACTIONS(129),
    [anon_sym_SolarConstant] = ACTIONS(129),
    [anon_sym_SolarIrradiance] = ACTIONS(129),
    [anon_sym_SoundAlert] = ACTIONS(129),
    [anon_sym_Stress] = ACTIONS(129),
    [anon_sym_Survey] = ACTIONS(129),
    [anon_sym_TargetPadIndex] = ACTIONS(129),
    [anon_sym_TargetX] = ACTIONS(129),
    [anon_sym_TargetY] = ACTIONS(129),
    [anon_sym_TargetZ] = ACTIONS(129),
    [anon_sym_Temperature] = ACTIONS(129),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(129),
    [anon_sym_TemperatureExternal] = ACTIONS(129),
    [anon_sym_TemperatureInput] = ACTIONS(129),
    [anon_sym_TemperatureInput2] = ACTIONS(129),
    [anon_sym_TemperatureOutput] = ACTIONS(129),
    [anon_sym_TemperatureOutput2] = ACTIONS(129),
    [anon_sym_TemperatureSetting] = ACTIONS(129),
    [anon_sym_Throttle] = ACTIONS(129),
    [anon_sym_Thrust] = ACTIONS(129),
    [anon_sym_ThrustToWeight] = ACTIONS(129),
    [anon_sym_Time] = ACTIONS(129),
    [anon_sym_TimeToDestination] = ACTIONS(129),
    [anon_sym_TotalMoles] = ACTIONS(129),
    [anon_sym_TotalMolesInput] = ACTIONS(129),
    [anon_sym_TotalMolesInput2] = ACTIONS(129),
    [anon_sym_TotalMolesOutput] = ACTIONS(129),
    [anon_sym_TotalMolesOutput2] = ACTIONS(129),
    [anon_sym_TotalQuantity] = ACTIONS(129),
    [anon_sym_TrueAnomaly] = ACTIONS(129),
    [anon_sym_Unknown] = ACTIONS(129),
    [anon_sym_VelocityMagnitude] = ACTIONS(129),
    [anon_sym_VelocityRelativeX] = ACTIONS(129),
    [anon_sym_VelocityRelativeY] = ACTIONS(129),
    [anon_sym_VelocityRelativeZ] = ACTIONS(129),
    [anon_sym_VelocityX] = ACTIONS(129),
    [anon_sym_VelocityY] = ACTIONS(129),
    [anon_sym_VelocityZ] = ACTIONS(129),
    [anon_sym_Vertical] = ACTIONS(129),
    [anon_sym_VerticalRatio] = ACTIONS(129),
    [anon_sym_Volume] = ACTIONS(129),
    [anon_sym_VolumeOfLiquid] = ACTIONS(129),
    [anon_sym_WattsReachingContact] = ACTIONS(129),
    [anon_sym_Weight] = ACTIONS(129),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(129),
    [anon_sym_ChargeRatio] = ACTIONS(129),
    [anon_sym_Class] = ACTIONS(129),
    [anon_sym_Damage] = ACTIONS(129),
    [anon_sym_Efficiency] = ACTIONS(129),
    [anon_sym_FilterType] = ACTIONS(129),
    [anon_sym_Growth] = ACTIONS(129),
    [anon_sym_Health] = ACTIONS(129),
    [anon_sym_Mature] = ACTIONS(129),
    [anon_sym_MaxQuantity] = ACTIONS(129),
    [anon_sym_OccupantHash] = ACTIONS(129),
    [anon_sym_Occupied] = ACTIONS(129),
    [anon_sym_PressureAir] = ACTIONS(129),
    [anon_sym_PressureWaste] = ACTIONS(129),
    [anon_sym_Seeding] = ACTIONS(129),
    [anon_sym_SortingClass] = ACTIONS(129),
    [anon_sym_Average] = ACTIONS(129),
    [anon_sym_Minimum] = ACTIONS(129),
    [anon_sym_Sum] = ACTIONS(129),
    [anon_sym_Contents] = ACTIONS(129),
    [anon_sym_Recipe] = ACTIONS(129),
    [anon_sym_Required] = ACTIONS(129),
    [anon_sym_TotalContents] = ACTIONS(129),
    [sym_enum] = ACTIONS(131),
  },
  [15] = {
    [sym_identifier] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(135),
    [sym_register] = ACTIONS(135),
    [sym_device] = ACTIONS(135),
    [anon_sym_nan] = ACTIONS(133),
    [anon_sym_pinf] = ACTIONS(133),
    [anon_sym_ninf] = ACTIONS(133),
    [anon_sym_pi] = ACTIONS(133),
    [anon_sym_deg2rad] = ACTIONS(133),
    [anon_sym_rad2deg] = ACTIONS(133),
    [anon_sym_epsilon] = ACTIONS(133),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(135),
    [aux_sym_number_token1] = ACTIONS(135),
    [anon_sym_Acceleration] = ACTIONS(133),
    [anon_sym_Activate] = ACTIONS(133),
    [anon_sym_AirRelease] = ACTIONS(133),
    [anon_sym_AlignmentError] = ACTIONS(133),
    [anon_sym_Apex] = ACTIONS(133),
    [anon_sym_AutoLand] = ACTIONS(133),
    [anon_sym_AutoShutOff] = ACTIONS(133),
    [anon_sym_Bpm] = ACTIONS(133),
    [anon_sym_BurnTimeRemaining] = ACTIONS(133),
    [anon_sym_Bypass] = ACTIONS(133),
    [anon_sym_CelestialHash] = ACTIONS(133),
    [anon_sym_CelestialParentHash] = ACTIONS(133),
    [anon_sym_Channel] = ACTIONS(133),
    [anon_sym_Channel0] = ACTIONS(133),
    [anon_sym_Channel1] = ACTIONS(133),
    [anon_sym_Channel2] = ACTIONS(133),
    [anon_sym_Channel3] = ACTIONS(133),
    [anon_sym_Channel4] = ACTIONS(133),
    [anon_sym_Channel5] = ACTIONS(133),
    [anon_sym_Channel6] = ACTIONS(133),
    [anon_sym_Channel7] = ACTIONS(133),
    [anon_sym_Charge] = ACTIONS(133),
    [anon_sym_Chart] = ACTIONS(133),
    [anon_sym_ChartedNavPoints] = ACTIONS(133),
    [anon_sym_ClearMemory] = ACTIONS(133),
    [anon_sym_CollectableGoods] = ACTIONS(133),
    [anon_sym_Color] = ACTIONS(133),
    [anon_sym_Combustion] = ACTIONS(133),
    [anon_sym_CombustionInput] = ACTIONS(133),
    [anon_sym_CombustionInput2] = ACTIONS(133),
    [anon_sym_CombustionLimiter] = ACTIONS(133),
    [anon_sym_CombustionOutput] = ACTIONS(133),
    [anon_sym_CombustionOutput2] = ACTIONS(133),
    [anon_sym_CompletionRatio] = ACTIONS(133),
    [anon_sym_ContactTypeId] = ACTIONS(133),
    [anon_sym_CurrentCode] = ACTIONS(133),
    [anon_sym_CurrentResearchPodType] = ACTIONS(133),
    [anon_sym_Density] = ACTIONS(133),
    [anon_sym_DestinationCode] = ACTIONS(133),
    [anon_sym_Discover] = ACTIONS(133),
    [anon_sym_DistanceAu] = ACTIONS(133),
    [anon_sym_DistanceKm] = ACTIONS(133),
    [anon_sym_DrillCondition] = ACTIONS(133),
    [anon_sym_DryMass] = ACTIONS(133),
    [anon_sym_Eccentricity] = ACTIONS(133),
    [anon_sym_ElevatorLevel] = ACTIONS(133),
    [anon_sym_ElevatorSpeed] = ACTIONS(133),
    [anon_sym_EntityState] = ACTIONS(133),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(133),
    [anon_sym_Error] = ACTIONS(133),
    [anon_sym_ExhaustVelocity] = ACTIONS(133),
    [anon_sym_ExportCount] = ACTIONS(133),
    [anon_sym_ExportQuantity] = ACTIONS(133),
    [anon_sym_ExportSlotHash] = ACTIONS(133),
    [anon_sym_ExportSlotOccupant] = ACTIONS(133),
    [anon_sym_Filtration] = ACTIONS(133),
    [anon_sym_FlightControlRule] = ACTIONS(133),
    [anon_sym_Flush] = ACTIONS(133),
    [anon_sym_ForceWrite] = ACTIONS(133),
    [anon_sym_ForwardX] = ACTIONS(133),
    [anon_sym_ForwardY] = ACTIONS(133),
    [anon_sym_ForwardZ] = ACTIONS(133),
    [anon_sym_Fuel] = ACTIONS(133),
    [anon_sym_Harvest] = ACTIONS(133),
    [anon_sym_Horizontal] = ACTIONS(133),
    [anon_sym_HorizontalRatio] = ACTIONS(133),
    [anon_sym_Idle] = ACTIONS(133),
    [anon_sym_ImportCount] = ACTIONS(133),
    [anon_sym_ImportQuantity] = ACTIONS(133),
    [anon_sym_ImportSlotHash] = ACTIONS(133),
    [anon_sym_ImportSlotOccupant] = ACTIONS(133),
    [anon_sym_Inclination] = ACTIONS(133),
    [anon_sym_Index] = ACTIONS(133),
    [anon_sym_InterrogationProgress] = ACTIONS(133),
    [anon_sym_LineNumber] = ACTIONS(133),
    [anon_sym_Lock] = ACTIONS(133),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(133),
    [anon_sym_Mass] = ACTIONS(133),
    [anon_sym_Maximum] = ACTIONS(133),
    [anon_sym_MinWattsToContact] = ACTIONS(133),
    [anon_sym_MineablesInQueue] = ACTIONS(133),
    [anon_sym_MineablesInVicinity] = ACTIONS(133),
    [anon_sym_MinedQuantity] = ACTIONS(133),
    [anon_sym_MinimumWattsToContact] = ACTIONS(133),
    [anon_sym_Mode] = ACTIONS(133),
    [anon_sym_NavPoints] = ACTIONS(133),
    [anon_sym_NextWeatherEventTime] = ACTIONS(133),
    [anon_sym_None] = ACTIONS(133),
    [anon_sym_On] = ACTIONS(133),
    [anon_sym_Open] = ACTIONS(133),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(133),
    [anon_sym_OrbitPeriod] = ACTIONS(133),
    [anon_sym_Orientation] = ACTIONS(133),
    [anon_sym_Output] = ACTIONS(133),
    [anon_sym_OverShootTarget] = ACTIONS(133),
    [anon_sym_PassedMoles] = ACTIONS(133),
    [anon_sym_Plant] = ACTIONS(133),
    [anon_sym_PlantEfficiency1] = ACTIONS(133),
    [anon_sym_PlantEfficiency2] = ACTIONS(133),
    [anon_sym_PlantEfficiency3] = ACTIONS(133),
    [anon_sym_PlantEfficiency4] = ACTIONS(133),
    [anon_sym_PlantGrowth1] = ACTIONS(133),
    [anon_sym_PlantGrowth2] = ACTIONS(133),
    [anon_sym_PlantGrowth3] = ACTIONS(133),
    [anon_sym_PlantGrowth4] = ACTIONS(133),
    [anon_sym_PlantHash1] = ACTIONS(133),
    [anon_sym_PlantHash2] = ACTIONS(133),
    [anon_sym_PlantHash3] = ACTIONS(133),
    [anon_sym_PlantHash4] = ACTIONS(133),
    [anon_sym_PlantHealth1] = ACTIONS(133),
    [anon_sym_PlantHealth2] = ACTIONS(133),
    [anon_sym_PlantHealth3] = ACTIONS(133),
    [anon_sym_PlantHealth4] = ACTIONS(133),
    [anon_sym_PositionX] = ACTIONS(133),
    [anon_sym_PositionY] = ACTIONS(133),
    [anon_sym_PositionZ] = ACTIONS(133),
    [anon_sym_Power] = ACTIONS(133),
    [anon_sym_PowerActual] = ACTIONS(133),
    [anon_sym_PowerGeneration] = ACTIONS(133),
    [anon_sym_PowerPotential] = ACTIONS(133),
    [anon_sym_PowerRequired] = ACTIONS(133),
    [anon_sym_PrefabHash] = ACTIONS(133),
    [anon_sym_Pressure] = ACTIONS(133),
    [anon_sym_PressureEfficiency] = ACTIONS(133),
    [anon_sym_PressureExternal] = ACTIONS(133),
    [anon_sym_PressureInput] = ACTIONS(133),
    [anon_sym_PressureInput2] = ACTIONS(133),
    [anon_sym_PressureInternal] = ACTIONS(133),
    [anon_sym_PressureOutput] = ACTIONS(133),
    [anon_sym_PressureOutput2] = ACTIONS(133),
    [anon_sym_PressureSetting] = ACTIONS(133),
    [anon_sym_Progress] = ACTIONS(133),
    [anon_sym_Quantity] = ACTIONS(133),
    [anon_sym_Ratio] = ACTIONS(133),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(133),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(133),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(133),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(133),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(133),
    [anon_sym_RatioHydrogen] = ACTIONS(133),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(133),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(133),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(133),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(133),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(133),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(133),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(133),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(133),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(133),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(133),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(133),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(133),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(133),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(133),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(133),
    [anon_sym_RatioNitrogen] = ACTIONS(133),
    [anon_sym_RatioNitrogenInput] = ACTIONS(133),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(133),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(133),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(133),
    [anon_sym_RatioNitrousOxide] = ACTIONS(133),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(133),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(133),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(133),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(133),
    [anon_sym_RatioOxygen] = ACTIONS(133),
    [anon_sym_RatioOxygenInput] = ACTIONS(133),
    [anon_sym_RatioOxygenInput2] = ACTIONS(133),
    [anon_sym_RatioOxygenOutput] = ACTIONS(133),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(133),
    [anon_sym_RatioPollutant] = ACTIONS(133),
    [anon_sym_RatioPollutantInput] = ACTIONS(133),
    [anon_sym_RatioPollutantInput2] = ACTIONS(133),
    [anon_sym_RatioPollutantOutput] = ACTIONS(133),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(133),
    [anon_sym_RatioPollutedWater] = ACTIONS(133),
    [anon_sym_RatioSteam] = ACTIONS(133),
    [anon_sym_RatioSteamInput] = ACTIONS(133),
    [anon_sym_RatioSteamInput2] = ACTIONS(133),
    [anon_sym_RatioSteamOutput] = ACTIONS(133),
    [anon_sym_RatioSteamOutput2] = ACTIONS(133),
    [anon_sym_RatioVolatiles] = ACTIONS(133),
    [anon_sym_RatioVolatilesInput] = ACTIONS(133),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(133),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(133),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(133),
    [anon_sym_RatioWater] = ACTIONS(133),
    [anon_sym_RatioWaterInput] = ACTIONS(133),
    [anon_sym_RatioWaterInput2] = ACTIONS(133),
    [anon_sym_RatioWaterOutput] = ACTIONS(133),
    [anon_sym_RatioWaterOutput2] = ACTIONS(133),
    [anon_sym_ReEntryAltitude] = ACTIONS(133),
    [anon_sym_Reagents] = ACTIONS(133),
    [anon_sym_RecipeHash] = ACTIONS(133),
    [anon_sym_ReferenceId] = ACTIONS(133),
    [anon_sym_RequestHash] = ACTIONS(133),
    [anon_sym_RequiredPower] = ACTIONS(133),
    [anon_sym_ReturnFuelCost] = ACTIONS(133),
    [anon_sym_Richness] = ACTIONS(133),
    [anon_sym_Rpm] = ACTIONS(133),
    [anon_sym_SemiMajorAxis] = ACTIONS(133),
    [anon_sym_Setting] = ACTIONS(133),
    [anon_sym_SettingInput] = ACTIONS(133),
    [anon_sym_SettingInputHash] = ACTIONS(133),
    [anon_sym_SettingOutput] = ACTIONS(133),
    [anon_sym_SettingOutputHash] = ACTIONS(133),
    [anon_sym_SignalID] = ACTIONS(133),
    [anon_sym_SignalStrength] = ACTIONS(133),
    [anon_sym_Sites] = ACTIONS(133),
    [anon_sym_Size] = ACTIONS(133),
    [anon_sym_SizeX] = ACTIONS(133),
    [anon_sym_SizeY] = ACTIONS(133),
    [anon_sym_SizeZ] = ACTIONS(133),
    [anon_sym_SolarAngle] = ACTIONS(133),
    [anon_sym_SolarConstant] = ACTIONS(133),
    [anon_sym_SolarIrradiance] = ACTIONS(133),
    [anon_sym_SoundAlert] = ACTIONS(133),
    [anon_sym_Stress] = ACTIONS(133),
    [anon_sym_Survey] = ACTIONS(133),
    [anon_sym_TargetPadIndex] = ACTIONS(133),
    [anon_sym_TargetX] = ACTIONS(133),
    [anon_sym_TargetY] = ACTIONS(133),
    [anon_sym_TargetZ] = ACTIONS(133),
    [anon_sym_Temperature] = ACTIONS(133),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(133),
    [anon_sym_TemperatureExternal] = ACTIONS(133),
    [anon_sym_TemperatureInput] = ACTIONS(133),
    [anon_sym_TemperatureInput2] = ACTIONS(133),
    [anon_sym_TemperatureOutput] = ACTIONS(133),
    [anon_sym_TemperatureOutput2] = ACTIONS(133),
    [anon_sym_TemperatureSetting] = ACTIONS(133),
    [anon_sym_Throttle] = ACTIONS(133),
    [anon_sym_Thrust] = ACTIONS(133),
    [anon_sym_ThrustToWeight] = ACTIONS(133),
    [anon_sym_Time] = ACTIONS(133),
    [anon_sym_TimeToDestination] = ACTIONS(133),
    [anon_sym_TotalMoles] = ACTIONS(133),
    [anon_sym_TotalMolesInput] = ACTIONS(133),
    [anon_sym_TotalMolesInput2] = ACTIONS(133),
    [anon_sym_TotalMolesOutput] = ACTIONS(133),
    [anon_sym_TotalMolesOutput2] = ACTIONS(133),
    [anon_sym_TotalQuantity] = ACTIONS(133),
    [anon_sym_TrueAnomaly] = ACTIONS(133),
    [anon_sym_Unknown] = ACTIONS(133),
    [anon_sym_VelocityMagnitude] = ACTIONS(133),
    [anon_sym_VelocityRelativeX] = ACTIONS(133),
    [anon_sym_VelocityRelativeY] = ACTIONS(133),
    [anon_sym_VelocityRelativeZ] = ACTIONS(133),
    [anon_sym_VelocityX] = ACTIONS(133),
    [anon_sym_VelocityY] = ACTIONS(133),
    [anon_sym_VelocityZ] = ACTIONS(133),
    [anon_sym_Vertical] = ACTIONS(133),
    [anon_sym_VerticalRatio] = ACTIONS(133),
    [anon_sym_Volume] = ACTIONS(133),
    [anon_sym_VolumeOfLiquid] = ACTIONS(133),
    [anon_sym_WattsReachingContact] = ACTIONS(133),
    [anon_sym_Weight] = ACTIONS(133),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(133),
    [anon_sym_ChargeRatio] = ACTIONS(133),
    [anon_sym_Class] = ACTIONS(133),
    [anon_sym_Damage] = ACTIONS(133),
    [anon_sym_Efficiency] = ACTIONS(133),
    [anon_sym_FilterType] = ACTIONS(133),
    [anon_sym_Growth] = ACTIONS(133),
    [anon_sym_Health] = ACTIONS(133),
    [anon_sym_Mature] = ACTIONS(133),
    [anon_sym_MaxQuantity] = ACTIONS(133),
    [anon_sym_OccupantHash] = ACTIONS(133),
    [anon_sym_Occupied] = ACTIONS(133),
    [anon_sym_PressureAir] = ACTIONS(133),
    [anon_sym_PressureWaste] = ACTIONS(133),
    [anon_sym_Seeding] = ACTIONS(133),
    [anon_sym_SortingClass] = ACTIONS(133),
    [anon_sym_Average] = ACTIONS(133),
    [anon_sym_Minimum] = ACTIONS(133),
    [anon_sym_Sum] = ACTIONS(133),
    [anon_sym_Contents] = ACTIONS(133),
    [anon_sym_Recipe] = ACTIONS(133),
    [anon_sym_Required] = ACTIONS(133),
    [anon_sym_TotalContents] = ACTIONS(133),
    [sym_enum] = ACTIONS(135),
  },
  [16] = {
    [sym_identifier] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_CR_LF] = ACTIONS(139),
    [anon_sym_CR] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(139),
    [sym_register] = ACTIONS(139),
    [sym_device] = ACTIONS(139),
    [anon_sym_nan] = ACTIONS(137),
    [anon_sym_pinf] = ACTIONS(137),
    [anon_sym_ninf] = ACTIONS(137),
    [anon_sym_pi] = ACTIONS(137),
    [anon_sym_deg2rad] = ACTIONS(137),
    [anon_sym_rad2deg] = ACTIONS(137),
    [anon_sym_epsilon] = ACTIONS(137),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(139),
    [anon_sym_Acceleration] = ACTIONS(137),
    [anon_sym_Activate] = ACTIONS(137),
    [anon_sym_AirRelease] = ACTIONS(137),
    [anon_sym_AlignmentError] = ACTIONS(137),
    [anon_sym_Apex] = ACTIONS(137),
    [anon_sym_AutoLand] = ACTIONS(137),
    [anon_sym_AutoShutOff] = ACTIONS(137),
    [anon_sym_Bpm] = ACTIONS(137),
    [anon_sym_BurnTimeRemaining] = ACTIONS(137),
    [anon_sym_Bypass] = ACTIONS(137),
    [anon_sym_CelestialHash] = ACTIONS(137),
    [anon_sym_CelestialParentHash] = ACTIONS(137),
    [anon_sym_Channel] = ACTIONS(137),
    [anon_sym_Channel0] = ACTIONS(137),
    [anon_sym_Channel1] = ACTIONS(137),
    [anon_sym_Channel2] = ACTIONS(137),
    [anon_sym_Channel3] = ACTIONS(137),
    [anon_sym_Channel4] = ACTIONS(137),
    [anon_sym_Channel5] = ACTIONS(137),
    [anon_sym_Channel6] = ACTIONS(137),
    [anon_sym_Channel7] = ACTIONS(137),
    [anon_sym_Charge] = ACTIONS(137),
    [anon_sym_Chart] = ACTIONS(137),
    [anon_sym_ChartedNavPoints] = ACTIONS(137),
    [anon_sym_ClearMemory] = ACTIONS(137),
    [anon_sym_CollectableGoods] = ACTIONS(137),
    [anon_sym_Color] = ACTIONS(137),
    [anon_sym_Combustion] = ACTIONS(137),
    [anon_sym_CombustionInput] = ACTIONS(137),
    [anon_sym_CombustionInput2] = ACTIONS(137),
    [anon_sym_CombustionLimiter] = ACTIONS(137),
    [anon_sym_CombustionOutput] = ACTIONS(137),
    [anon_sym_CombustionOutput2] = ACTIONS(137),
    [anon_sym_CompletionRatio] = ACTIONS(137),
    [anon_sym_ContactTypeId] = ACTIONS(137),
    [anon_sym_CurrentCode] = ACTIONS(137),
    [anon_sym_CurrentResearchPodType] = ACTIONS(137),
    [anon_sym_Density] = ACTIONS(137),
    [anon_sym_DestinationCode] = ACTIONS(137),
    [anon_sym_Discover] = ACTIONS(137),
    [anon_sym_DistanceAu] = ACTIONS(137),
    [anon_sym_DistanceKm] = ACTIONS(137),
    [anon_sym_DrillCondition] = ACTIONS(137),
    [anon_sym_DryMass] = ACTIONS(137),
    [anon_sym_Eccentricity] = ACTIONS(137),
    [anon_sym_ElevatorLevel] = ACTIONS(137),
    [anon_sym_ElevatorSpeed] = ACTIONS(137),
    [anon_sym_EntityState] = ACTIONS(137),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(137),
    [anon_sym_Error] = ACTIONS(137),
    [anon_sym_ExhaustVelocity] = ACTIONS(137),
    [anon_sym_ExportCount] = ACTIONS(137),
    [anon_sym_ExportQuantity] = ACTIONS(137),
    [anon_sym_ExportSlotHash] = ACTIONS(137),
    [anon_sym_ExportSlotOccupant] = ACTIONS(137),
    [anon_sym_Filtration] = ACTIONS(137),
    [anon_sym_FlightControlRule] = ACTIONS(137),
    [anon_sym_Flush] = ACTIONS(137),
    [anon_sym_ForceWrite] = ACTIONS(137),
    [anon_sym_ForwardX] = ACTIONS(137),
    [anon_sym_ForwardY] = ACTIONS(137),
    [anon_sym_ForwardZ] = ACTIONS(137),
    [anon_sym_Fuel] = ACTIONS(137),
    [anon_sym_Harvest] = ACTIONS(137),
    [anon_sym_Horizontal] = ACTIONS(137),
    [anon_sym_HorizontalRatio] = ACTIONS(137),
    [anon_sym_Idle] = ACTIONS(137),
    [anon_sym_ImportCount] = ACTIONS(137),
    [anon_sym_ImportQuantity] = ACTIONS(137),
    [anon_sym_ImportSlotHash] = ACTIONS(137),
    [anon_sym_ImportSlotOccupant] = ACTIONS(137),
    [anon_sym_Inclination] = ACTIONS(137),
    [anon_sym_Index] = ACTIONS(137),
    [anon_sym_InterrogationProgress] = ACTIONS(137),
    [anon_sym_LineNumber] = ACTIONS(137),
    [anon_sym_Lock] = ACTIONS(137),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(137),
    [anon_sym_Mass] = ACTIONS(137),
    [anon_sym_Maximum] = ACTIONS(137),
    [anon_sym_MinWattsToContact] = ACTIONS(137),
    [anon_sym_MineablesInQueue] = ACTIONS(137),
    [anon_sym_MineablesInVicinity] = ACTIONS(137),
    [anon_sym_MinedQuantity] = ACTIONS(137),
    [anon_sym_MinimumWattsToContact] = ACTIONS(137),
    [anon_sym_Mode] = ACTIONS(137),
    [anon_sym_NavPoints] = ACTIONS(137),
    [anon_sym_NextWeatherEventTime] = ACTIONS(137),
    [anon_sym_None] = ACTIONS(137),
    [anon_sym_On] = ACTIONS(137),
    [anon_sym_Open] = ACTIONS(137),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(137),
    [anon_sym_OrbitPeriod] = ACTIONS(137),
    [anon_sym_Orientation] = ACTIONS(137),
    [anon_sym_Output] = ACTIONS(137),
    [anon_sym_OverShootTarget] = ACTIONS(137),
    [anon_sym_PassedMoles] = ACTIONS(137),
    [anon_sym_Plant] = ACTIONS(137),
    [anon_sym_PlantEfficiency1] = ACTIONS(137),
    [anon_sym_PlantEfficiency2] = ACTIONS(137),
    [anon_sym_PlantEfficiency3] = ACTIONS(137),
    [anon_sym_PlantEfficiency4] = ACTIONS(137),
    [anon_sym_PlantGrowth1] = ACTIONS(137),
    [anon_sym_PlantGrowth2] = ACTIONS(137),
    [anon_sym_PlantGrowth3] = ACTIONS(137),
    [anon_sym_PlantGrowth4] = ACTIONS(137),
    [anon_sym_PlantHash1] = ACTIONS(137),
    [anon_sym_PlantHash2] = ACTIONS(137),
    [anon_sym_PlantHash3] = ACTIONS(137),
    [anon_sym_PlantHash4] = ACTIONS(137),
    [anon_sym_PlantHealth1] = ACTIONS(137),
    [anon_sym_PlantHealth2] = ACTIONS(137),
    [anon_sym_PlantHealth3] = ACTIONS(137),
    [anon_sym_PlantHealth4] = ACTIONS(137),
    [anon_sym_PositionX] = ACTIONS(137),
    [anon_sym_PositionY] = ACTIONS(137),
    [anon_sym_PositionZ] = ACTIONS(137),
    [anon_sym_Power] = ACTIONS(137),
    [anon_sym_PowerActual] = ACTIONS(137),
    [anon_sym_PowerGeneration] = ACTIONS(137),
    [anon_sym_PowerPotential] = ACTIONS(137),
    [anon_sym_PowerRequired] = ACTIONS(137),
    [anon_sym_PrefabHash] = ACTIONS(137),
    [anon_sym_Pressure] = ACTIONS(137),
    [anon_sym_PressureEfficiency] = ACTIONS(137),
    [anon_sym_PressureExternal] = ACTIONS(137),
    [anon_sym_PressureInput] = ACTIONS(137),
    [anon_sym_PressureInput2] = ACTIONS(137),
    [anon_sym_PressureInternal] = ACTIONS(137),
    [anon_sym_PressureOutput] = ACTIONS(137),
    [anon_sym_PressureOutput2] = ACTIONS(137),
    [anon_sym_PressureSetting] = ACTIONS(137),
    [anon_sym_Progress] = ACTIONS(137),
    [anon_sym_Quantity] = ACTIONS(137),
    [anon_sym_Ratio] = ACTIONS(137),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(137),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(137),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(137),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(137),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(137),
    [anon_sym_RatioHydrogen] = ACTIONS(137),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(137),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(137),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(137),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(137),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(137),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(137),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(137),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(137),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(137),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(137),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(137),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(137),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(137),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(137),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(137),
    [anon_sym_RatioNitrogen] = ACTIONS(137),
    [anon_sym_RatioNitrogenInput] = ACTIONS(137),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(137),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(137),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(137),
    [anon_sym_RatioNitrousOxide] = ACTIONS(137),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(137),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(137),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(137),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(137),
    [anon_sym_RatioOxygen] = ACTIONS(137),
    [anon_sym_RatioOxygenInput] = ACTIONS(137),
    [anon_sym_RatioOxygenInput2] = ACTIONS(137),
    [anon_sym_RatioOxygenOutput] = ACTIONS(137),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(137),
    [anon_sym_RatioPollutant] = ACTIONS(137),
    [anon_sym_RatioPollutantInput] = ACTIONS(137),
    [anon_sym_RatioPollutantInput2] = ACTIONS(137),
    [anon_sym_RatioPollutantOutput] = ACTIONS(137),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(137),
    [anon_sym_RatioPollutedWater] = ACTIONS(137),
    [anon_sym_RatioSteam] = ACTIONS(137),
    [anon_sym_RatioSteamInput] = ACTIONS(137),
    [anon_sym_RatioSteamInput2] = ACTIONS(137),
    [anon_sym_RatioSteamOutput] = ACTIONS(137),
    [anon_sym_RatioSteamOutput2] = ACTIONS(137),
    [anon_sym_RatioVolatiles] = ACTIONS(137),
    [anon_sym_RatioVolatilesInput] = ACTIONS(137),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(137),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(137),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(137),
    [anon_sym_RatioWater] = ACTIONS(137),
    [anon_sym_RatioWaterInput] = ACTIONS(137),
    [anon_sym_RatioWaterInput2] = ACTIONS(137),
    [anon_sym_RatioWaterOutput] = ACTIONS(137),
    [anon_sym_RatioWaterOutput2] = ACTIONS(137),
    [anon_sym_ReEntryAltitude] = ACTIONS(137),
    [anon_sym_Reagents] = ACTIONS(137),
    [anon_sym_RecipeHash] = ACTIONS(137),
    [anon_sym_ReferenceId] = ACTIONS(137),
    [anon_sym_RequestHash] = ACTIONS(137),
    [anon_sym_RequiredPower] = ACTIONS(137),
    [anon_sym_ReturnFuelCost] = ACTIONS(137),
    [anon_sym_Richness] = ACTIONS(137),
    [anon_sym_Rpm] = ACTIONS(137),
    [anon_sym_SemiMajorAxis] = ACTIONS(137),
    [anon_sym_Setting] = ACTIONS(137),
    [anon_sym_SettingInput] = ACTIONS(137),
    [anon_sym_SettingInputHash] = ACTIONS(137),
    [anon_sym_SettingOutput] = ACTIONS(137),
    [anon_sym_SettingOutputHash] = ACTIONS(137),
    [anon_sym_SignalID] = ACTIONS(137),
    [anon_sym_SignalStrength] = ACTIONS(137),
    [anon_sym_Sites] = ACTIONS(137),
    [anon_sym_Size] = ACTIONS(137),
    [anon_sym_SizeX] = ACTIONS(137),
    [anon_sym_SizeY] = ACTIONS(137),
    [anon_sym_SizeZ] = ACTIONS(137),
    [anon_sym_SolarAngle] = ACTIONS(137),
    [anon_sym_SolarConstant] = ACTIONS(137),
    [anon_sym_SolarIrradiance] = ACTIONS(137),
    [anon_sym_SoundAlert] = ACTIONS(137),
    [anon_sym_Stress] = ACTIONS(137),
    [anon_sym_Survey] = ACTIONS(137),
    [anon_sym_TargetPadIndex] = ACTIONS(137),
    [anon_sym_TargetX] = ACTIONS(137),
    [anon_sym_TargetY] = ACTIONS(137),
    [anon_sym_TargetZ] = ACTIONS(137),
    [anon_sym_Temperature] = ACTIONS(137),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(137),
    [anon_sym_TemperatureExternal] = ACTIONS(137),
    [anon_sym_TemperatureInput] = ACTIONS(137),
    [anon_sym_TemperatureInput2] = ACTIONS(137),
    [anon_sym_TemperatureOutput] = ACTIONS(137),
    [anon_sym_TemperatureOutput2] = ACTIONS(137),
    [anon_sym_TemperatureSetting] = ACTIONS(137),
    [anon_sym_Throttle] = ACTIONS(137),
    [anon_sym_Thrust] = ACTIONS(137),
    [anon_sym_ThrustToWeight] = ACTIONS(137),
    [anon_sym_Time] = ACTIONS(137),
    [anon_sym_TimeToDestination] = ACTIONS(137),
    [anon_sym_TotalMoles] = ACTIONS(137),
    [anon_sym_TotalMolesInput] = ACTIONS(137),
    [anon_sym_TotalMolesInput2] = ACTIONS(137),
    [anon_sym_TotalMolesOutput] = ACTIONS(137),
    [anon_sym_TotalMolesOutput2] = ACTIONS(137),
    [anon_sym_TotalQuantity] = ACTIONS(137),
    [anon_sym_TrueAnomaly] = ACTIONS(137),
    [anon_sym_Unknown] = ACTIONS(137),
    [anon_sym_VelocityMagnitude] = ACTIONS(137),
    [anon_sym_VelocityRelativeX] = ACTIONS(137),
    [anon_sym_VelocityRelativeY] = ACTIONS(137),
    [anon_sym_VelocityRelativeZ] = ACTIONS(137),
    [anon_sym_VelocityX] = ACTIONS(137),
    [anon_sym_VelocityY] = ACTIONS(137),
    [anon_sym_VelocityZ] = ACTIONS(137),
    [anon_sym_Vertical] = ACTIONS(137),
    [anon_sym_VerticalRatio] = ACTIONS(137),
    [anon_sym_Volume] = ACTIONS(137),
    [anon_sym_VolumeOfLiquid] = ACTIONS(137),
    [anon_sym_WattsReachingContact] = ACTIONS(137),
    [anon_sym_Weight] = ACTIONS(137),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(137),
    [anon_sym_ChargeRatio] = ACTIONS(137),
    [anon_sym_Class] = ACTIONS(137),
    [anon_sym_Damage] = ACTIONS(137),
    [anon_sym_Efficiency] = ACTIONS(137),
    [anon_sym_FilterType] = ACTIONS(137),
    [anon_sym_Growth] = ACTIONS(137),
    [anon_sym_Health] = ACTIONS(137),
    [anon_sym_Mature] = ACTIONS(137),
    [anon_sym_MaxQuantity] = ACTIONS(137),
    [anon_sym_OccupantHash] = ACTIONS(137),
    [anon_sym_Occupied] = ACTIONS(137),
    [anon_sym_PressureAir] = ACTIONS(137),
    [anon_sym_PressureWaste] = ACTIONS(137),
    [anon_sym_Seeding] = ACTIONS(137),
    [anon_sym_SortingClass] = ACTIONS(137),
    [anon_sym_Average] = ACTIONS(137),
    [anon_sym_Minimum] = ACTIONS(137),
    [anon_sym_Sum] = ACTIONS(137),
    [anon_sym_Contents] = ACTIONS(137),
    [anon_sym_Recipe] = ACTIONS(137),
    [anon_sym_Required] = ACTIONS(137),
    [anon_sym_TotalContents] = ACTIONS(137),
    [sym_enum] = ACTIONS(139),
  },
  [17] = {
    [sym_identifier] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_CR_LF] = ACTIONS(143),
    [anon_sym_CR] = ACTIONS(141),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(143),
    [sym_register] = ACTIONS(143),
    [sym_device] = ACTIONS(143),
    [anon_sym_nan] = ACTIONS(141),
    [anon_sym_pinf] = ACTIONS(141),
    [anon_sym_ninf] = ACTIONS(141),
    [anon_sym_pi] = ACTIONS(141),
    [anon_sym_deg2rad] = ACTIONS(141),
    [anon_sym_rad2deg] = ACTIONS(141),
    [anon_sym_epsilon] = ACTIONS(141),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(143),
    [anon_sym_Acceleration] = ACTIONS(141),
    [anon_sym_Activate] = ACTIONS(141),
    [anon_sym_AirRelease] = ACTIONS(141),
    [anon_sym_AlignmentError] = ACTIONS(141),
    [anon_sym_Apex] = ACTIONS(141),
    [anon_sym_AutoLand] = ACTIONS(141),
    [anon_sym_AutoShutOff] = ACTIONS(141),
    [anon_sym_Bpm] = ACTIONS(141),
    [anon_sym_BurnTimeRemaining] = ACTIONS(141),
    [anon_sym_Bypass] = ACTIONS(141),
    [anon_sym_CelestialHash] = ACTIONS(141),
    [anon_sym_CelestialParentHash] = ACTIONS(141),
    [anon_sym_Channel] = ACTIONS(141),
    [anon_sym_Channel0] = ACTIONS(141),
    [anon_sym_Channel1] = ACTIONS(141),
    [anon_sym_Channel2] = ACTIONS(141),
    [anon_sym_Channel3] = ACTIONS(141),
    [anon_sym_Channel4] = ACTIONS(141),
    [anon_sym_Channel5] = ACTIONS(141),
    [anon_sym_Channel6] = ACTIONS(141),
    [anon_sym_Channel7] = ACTIONS(141),
    [anon_sym_Charge] = ACTIONS(141),
    [anon_sym_Chart] = ACTIONS(141),
    [anon_sym_ChartedNavPoints] = ACTIONS(141),
    [anon_sym_ClearMemory] = ACTIONS(141),
    [anon_sym_CollectableGoods] = ACTIONS(141),
    [anon_sym_Color] = ACTIONS(141),
    [anon_sym_Combustion] = ACTIONS(141),
    [anon_sym_CombustionInput] = ACTIONS(141),
    [anon_sym_CombustionInput2] = ACTIONS(141),
    [anon_sym_CombustionLimiter] = ACTIONS(141),
    [anon_sym_CombustionOutput] = ACTIONS(141),
    [anon_sym_CombustionOutput2] = ACTIONS(141),
    [anon_sym_CompletionRatio] = ACTIONS(141),
    [anon_sym_ContactTypeId] = ACTIONS(141),
    [anon_sym_CurrentCode] = ACTIONS(141),
    [anon_sym_CurrentResearchPodType] = ACTIONS(141),
    [anon_sym_Density] = ACTIONS(141),
    [anon_sym_DestinationCode] = ACTIONS(141),
    [anon_sym_Discover] = ACTIONS(141),
    [anon_sym_DistanceAu] = ACTIONS(141),
    [anon_sym_DistanceKm] = ACTIONS(141),
    [anon_sym_DrillCondition] = ACTIONS(141),
    [anon_sym_DryMass] = ACTIONS(141),
    [anon_sym_Eccentricity] = ACTIONS(141),
    [anon_sym_ElevatorLevel] = ACTIONS(141),
    [anon_sym_ElevatorSpeed] = ACTIONS(141),
    [anon_sym_EntityState] = ACTIONS(141),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(141),
    [anon_sym_Error] = ACTIONS(141),
    [anon_sym_ExhaustVelocity] = ACTIONS(141),
    [anon_sym_ExportCount] = ACTIONS(141),
    [anon_sym_ExportQuantity] = ACTIONS(141),
    [anon_sym_ExportSlotHash] = ACTIONS(141),
    [anon_sym_ExportSlotOccupant] = ACTIONS(141),
    [anon_sym_Filtration] = ACTIONS(141),
    [anon_sym_FlightControlRule] = ACTIONS(141),
    [anon_sym_Flush] = ACTIONS(141),
    [anon_sym_ForceWrite] = ACTIONS(141),
    [anon_sym_ForwardX] = ACTIONS(141),
    [anon_sym_ForwardY] = ACTIONS(141),
    [anon_sym_ForwardZ] = ACTIONS(141),
    [anon_sym_Fuel] = ACTIONS(141),
    [anon_sym_Harvest] = ACTIONS(141),
    [anon_sym_Horizontal] = ACTIONS(141),
    [anon_sym_HorizontalRatio] = ACTIONS(141),
    [anon_sym_Idle] = ACTIONS(141),
    [anon_sym_ImportCount] = ACTIONS(141),
    [anon_sym_ImportQuantity] = ACTIONS(141),
    [anon_sym_ImportSlotHash] = ACTIONS(141),
    [anon_sym_ImportSlotOccupant] = ACTIONS(141),
    [anon_sym_Inclination] = ACTIONS(141),
    [anon_sym_Index] = ACTIONS(141),
    [anon_sym_InterrogationProgress] = ACTIONS(141),
    [anon_sym_LineNumber] = ACTIONS(141),
    [anon_sym_Lock] = ACTIONS(141),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(141),
    [anon_sym_Mass] = ACTIONS(141),
    [anon_sym_Maximum] = ACTIONS(141),
    [anon_sym_MinWattsToContact] = ACTIONS(141),
    [anon_sym_MineablesInQueue] = ACTIONS(141),
    [anon_sym_MineablesInVicinity] = ACTIONS(141),
    [anon_sym_MinedQuantity] = ACTIONS(141),
    [anon_sym_MinimumWattsToContact] = ACTIONS(141),
    [anon_sym_Mode] = ACTIONS(141),
    [anon_sym_NavPoints] = ACTIONS(141),
    [anon_sym_NextWeatherEventTime] = ACTIONS(141),
    [anon_sym_None] = ACTIONS(141),
    [anon_sym_On] = ACTIONS(141),
    [anon_sym_Open] = ACTIONS(141),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(141),
    [anon_sym_OrbitPeriod] = ACTIONS(141),
    [anon_sym_Orientation] = ACTIONS(141),
    [anon_sym_Output] = ACTIONS(141),
    [anon_sym_OverShootTarget] = ACTIONS(141),
    [anon_sym_PassedMoles] = ACTIONS(141),
    [anon_sym_Plant] = ACTIONS(141),
    [anon_sym_PlantEfficiency1] = ACTIONS(141),
    [anon_sym_PlantEfficiency2] = ACTIONS(141),
    [anon_sym_PlantEfficiency3] = ACTIONS(141),
    [anon_sym_PlantEfficiency4] = ACTIONS(141),
    [anon_sym_PlantGrowth1] = ACTIONS(141),
    [anon_sym_PlantGrowth2] = ACTIONS(141),
    [anon_sym_PlantGrowth3] = ACTIONS(141),
    [anon_sym_PlantGrowth4] = ACTIONS(141),
    [anon_sym_PlantHash1] = ACTIONS(141),
    [anon_sym_PlantHash2] = ACTIONS(141),
    [anon_sym_PlantHash3] = ACTIONS(141),
    [anon_sym_PlantHash4] = ACTIONS(141),
    [anon_sym_PlantHealth1] = ACTIONS(141),
    [anon_sym_PlantHealth2] = ACTIONS(141),
    [anon_sym_PlantHealth3] = ACTIONS(141),
    [anon_sym_PlantHealth4] = ACTIONS(141),
    [anon_sym_PositionX] = ACTIONS(141),
    [anon_sym_PositionY] = ACTIONS(141),
    [anon_sym_PositionZ] = ACTIONS(141),
    [anon_sym_Power] = ACTIONS(141),
    [anon_sym_PowerActual] = ACTIONS(141),
    [anon_sym_PowerGeneration] = ACTIONS(141),
    [anon_sym_PowerPotential] = ACTIONS(141),
    [anon_sym_PowerRequired] = ACTIONS(141),
    [anon_sym_PrefabHash] = ACTIONS(141),
    [anon_sym_Pressure] = ACTIONS(141),
    [anon_sym_PressureEfficiency] = ACTIONS(141),
    [anon_sym_PressureExternal] = ACTIONS(141),
    [anon_sym_PressureInput] = ACTIONS(141),
    [anon_sym_PressureInput2] = ACTIONS(141),
    [anon_sym_PressureInternal] = ACTIONS(141),
    [anon_sym_PressureOutput] = ACTIONS(141),
    [anon_sym_PressureOutput2] = ACTIONS(141),
    [anon_sym_PressureSetting] = ACTIONS(141),
    [anon_sym_Progress] = ACTIONS(141),
    [anon_sym_Quantity] = ACTIONS(141),
    [anon_sym_Ratio] = ACTIONS(141),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(141),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(141),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(141),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(141),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(141),
    [anon_sym_RatioHydrogen] = ACTIONS(141),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(141),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(141),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(141),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(141),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(141),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(141),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(141),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(141),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(141),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(141),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(141),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(141),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(141),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(141),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(141),
    [anon_sym_RatioNitrogen] = ACTIONS(141),
    [anon_sym_RatioNitrogenInput] = ACTIONS(141),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(141),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(141),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(141),
    [anon_sym_RatioNitrousOxide] = ACTIONS(141),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(141),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(141),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(141),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(141),
    [anon_sym_RatioOxygen] = ACTIONS(141),
    [anon_sym_RatioOxygenInput] = ACTIONS(141),
    [anon_sym_RatioOxygenInput2] = ACTIONS(141),
    [anon_sym_RatioOxygenOutput] = ACTIONS(141),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(141),
    [anon_sym_RatioPollutant] = ACTIONS(141),
    [anon_sym_RatioPollutantInput] = ACTIONS(141),
    [anon_sym_RatioPollutantInput2] = ACTIONS(141),
    [anon_sym_RatioPollutantOutput] = ACTIONS(141),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(141),
    [anon_sym_RatioPollutedWater] = ACTIONS(141),
    [anon_sym_RatioSteam] = ACTIONS(141),
    [anon_sym_RatioSteamInput] = ACTIONS(141),
    [anon_sym_RatioSteamInput2] = ACTIONS(141),
    [anon_sym_RatioSteamOutput] = ACTIONS(141),
    [anon_sym_RatioSteamOutput2] = ACTIONS(141),
    [anon_sym_RatioVolatiles] = ACTIONS(141),
    [anon_sym_RatioVolatilesInput] = ACTIONS(141),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(141),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(141),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(141),
    [anon_sym_RatioWater] = ACTIONS(141),
    [anon_sym_RatioWaterInput] = ACTIONS(141),
    [anon_sym_RatioWaterInput2] = ACTIONS(141),
    [anon_sym_RatioWaterOutput] = ACTIONS(141),
    [anon_sym_RatioWaterOutput2] = ACTIONS(141),
    [anon_sym_ReEntryAltitude] = ACTIONS(141),
    [anon_sym_Reagents] = ACTIONS(141),
    [anon_sym_RecipeHash] = ACTIONS(141),
    [anon_sym_ReferenceId] = ACTIONS(141),
    [anon_sym_RequestHash] = ACTIONS(141),
    [anon_sym_RequiredPower] = ACTIONS(141),
    [anon_sym_ReturnFuelCost] = ACTIONS(141),
    [anon_sym_Richness] = ACTIONS(141),
    [anon_sym_Rpm] = ACTIONS(141),
    [anon_sym_SemiMajorAxis] = ACTIONS(141),
    [anon_sym_Setting] = ACTIONS(141),
    [anon_sym_SettingInput] = ACTIONS(141),
    [anon_sym_SettingInputHash] = ACTIONS(141),
    [anon_sym_SettingOutput] = ACTIONS(141),
    [anon_sym_SettingOutputHash] = ACTIONS(141),
    [anon_sym_SignalID] = ACTIONS(141),
    [anon_sym_SignalStrength] = ACTIONS(141),
    [anon_sym_Sites] = ACTIONS(141),
    [anon_sym_Size] = ACTIONS(141),
    [anon_sym_SizeX] = ACTIONS(141),
    [anon_sym_SizeY] = ACTIONS(141),
    [anon_sym_SizeZ] = ACTIONS(141),
    [anon_sym_SolarAngle] = ACTIONS(141),
    [anon_sym_SolarConstant] = ACTIONS(141),
    [anon_sym_SolarIrradiance] = ACTIONS(141),
    [anon_sym_SoundAlert] = ACTIONS(141),
    [anon_sym_Stress] = ACTIONS(141),
    [anon_sym_Survey] = ACTIONS(141),
    [anon_sym_TargetPadIndex] = ACTIONS(141),
    [anon_sym_TargetX] = ACTIONS(141),
    [anon_sym_TargetY] = ACTIONS(141),
    [anon_sym_TargetZ] = ACTIONS(141),
    [anon_sym_Temperature] = ACTIONS(141),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(141),
    [anon_sym_TemperatureExternal] = ACTIONS(141),
    [anon_sym_TemperatureInput] = ACTIONS(141),
    [anon_sym_TemperatureInput2] = ACTIONS(141),
    [anon_sym_TemperatureOutput] = ACTIONS(141),
    [anon_sym_TemperatureOutput2] = ACTIONS(141),
    [anon_sym_TemperatureSetting] = ACTIONS(141),
    [anon_sym_Throttle] = ACTIONS(141),
    [anon_sym_Thrust] = ACTIONS(141),
    [anon_sym_ThrustToWeight] = ACTIONS(141),
    [anon_sym_Time] = ACTIONS(141),
    [anon_sym_TimeToDestination] = ACTIONS(141),
    [anon_sym_TotalMoles] = ACTIONS(141),
    [anon_sym_TotalMolesInput] = ACTIONS(141),
    [anon_sym_TotalMolesInput2] = ACTIONS(141),
    [anon_sym_TotalMolesOutput] = ACTIONS(141),
    [anon_sym_TotalMolesOutput2] = ACTIONS(141),
    [anon_sym_TotalQuantity] = ACTIONS(141),
    [anon_sym_TrueAnomaly] = ACTIONS(141),
    [anon_sym_Unknown] = ACTIONS(141),
    [anon_sym_VelocityMagnitude] = ACTIONS(141),
    [anon_sym_VelocityRelativeX] = ACTIONS(141),
    [anon_sym_VelocityRelativeY] = ACTIONS(141),
    [anon_sym_VelocityRelativeZ] = ACTIONS(141),
    [anon_sym_VelocityX] = ACTIONS(141),
    [anon_sym_VelocityY] = ACTIONS(141),
    [anon_sym_VelocityZ] = ACTIONS(141),
    [anon_sym_Vertical] = ACTIONS(141),
    [anon_sym_VerticalRatio] = ACTIONS(141),
    [anon_sym_Volume] = ACTIONS(141),
    [anon_sym_VolumeOfLiquid] = ACTIONS(141),
    [anon_sym_WattsReachingContact] = ACTIONS(141),
    [anon_sym_Weight] = ACTIONS(141),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(141),
    [anon_sym_ChargeRatio] = ACTIONS(141),
    [anon_sym_Class] = ACTIONS(141),
    [anon_sym_Damage] = ACTIONS(141),
    [anon_sym_Efficiency] = ACTIONS(141),
    [anon_sym_FilterType] = ACTIONS(141),
    [anon_sym_Growth] = ACTIONS(141),
    [anon_sym_Health] = ACTIONS(141),
    [anon_sym_Mature] = ACTIONS(141),
    [anon_sym_MaxQuantity] = ACTIONS(141),
    [anon_sym_OccupantHash] = ACTIONS(141),
    [anon_sym_Occupied] = ACTIONS(141),
    [anon_sym_PressureAir] = ACTIONS(141),
    [anon_sym_PressureWaste] = ACTIONS(141),
    [anon_sym_Seeding] = ACTIONS(141),
    [anon_sym_SortingClass] = ACTIONS(141),
    [anon_sym_Average] = ACTIONS(141),
    [anon_sym_Minimum] = ACTIONS(141),
    [anon_sym_Sum] = ACTIONS(141),
    [anon_sym_Contents] = ACTIONS(141),
    [anon_sym_Recipe] = ACTIONS(141),
    [anon_sym_Required] = ACTIONS(141),
    [anon_sym_TotalContents] = ACTIONS(141),
    [sym_enum] = ACTIONS(143),
  },
  [18] = {
    [sym_identifier] = ACTIONS(145),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_CR_LF] = ACTIONS(147),
    [anon_sym_CR] = ACTIONS(145),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(147),
    [sym_register] = ACTIONS(147),
    [sym_device] = ACTIONS(147),
    [anon_sym_nan] = ACTIONS(145),
    [anon_sym_pinf] = ACTIONS(145),
    [anon_sym_ninf] = ACTIONS(145),
    [anon_sym_pi] = ACTIONS(145),
    [anon_sym_deg2rad] = ACTIONS(145),
    [anon_sym_rad2deg] = ACTIONS(145),
    [anon_sym_epsilon] = ACTIONS(145),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(147),
    [aux_sym_number_token1] = ACTIONS(147),
    [anon_sym_Acceleration] = ACTIONS(145),
    [anon_sym_Activate] = ACTIONS(145),
    [anon_sym_AirRelease] = ACTIONS(145),
    [anon_sym_AlignmentError] = ACTIONS(145),
    [anon_sym_Apex] = ACTIONS(145),
    [anon_sym_AutoLand] = ACTIONS(145),
    [anon_sym_AutoShutOff] = ACTIONS(145),
    [anon_sym_Bpm] = ACTIONS(145),
    [anon_sym_BurnTimeRemaining] = ACTIONS(145),
    [anon_sym_Bypass] = ACTIONS(145),
    [anon_sym_CelestialHash] = ACTIONS(145),
    [anon_sym_CelestialParentHash] = ACTIONS(145),
    [anon_sym_Channel] = ACTIONS(145),
    [anon_sym_Channel0] = ACTIONS(145),
    [anon_sym_Channel1] = ACTIONS(145),
    [anon_sym_Channel2] = ACTIONS(145),
    [anon_sym_Channel3] = ACTIONS(145),
    [anon_sym_Channel4] = ACTIONS(145),
    [anon_sym_Channel5] = ACTIONS(145),
    [anon_sym_Channel6] = ACTIONS(145),
    [anon_sym_Channel7] = ACTIONS(145),
    [anon_sym_Charge] = ACTIONS(145),
    [anon_sym_Chart] = ACTIONS(145),
    [anon_sym_ChartedNavPoints] = ACTIONS(145),
    [anon_sym_ClearMemory] = ACTIONS(145),
    [anon_sym_CollectableGoods] = ACTIONS(145),
    [anon_sym_Color] = ACTIONS(145),
    [anon_sym_Combustion] = ACTIONS(145),
    [anon_sym_CombustionInput] = ACTIONS(145),
    [anon_sym_CombustionInput2] = ACTIONS(145),
    [anon_sym_CombustionLimiter] = ACTIONS(145),
    [anon_sym_CombustionOutput] = ACTIONS(145),
    [anon_sym_CombustionOutput2] = ACTIONS(145),
    [anon_sym_CompletionRatio] = ACTIONS(145),
    [anon_sym_ContactTypeId] = ACTIONS(145),
    [anon_sym_CurrentCode] = ACTIONS(145),
    [anon_sym_CurrentResearchPodType] = ACTIONS(145),
    [anon_sym_Density] = ACTIONS(145),
    [anon_sym_DestinationCode] = ACTIONS(145),
    [anon_sym_Discover] = ACTIONS(145),
    [anon_sym_DistanceAu] = ACTIONS(145),
    [anon_sym_DistanceKm] = ACTIONS(145),
    [anon_sym_DrillCondition] = ACTIONS(145),
    [anon_sym_DryMass] = ACTIONS(145),
    [anon_sym_Eccentricity] = ACTIONS(145),
    [anon_sym_ElevatorLevel] = ACTIONS(145),
    [anon_sym_ElevatorSpeed] = ACTIONS(145),
    [anon_sym_EntityState] = ACTIONS(145),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(145),
    [anon_sym_Error] = ACTIONS(145),
    [anon_sym_ExhaustVelocity] = ACTIONS(145),
    [anon_sym_ExportCount] = ACTIONS(145),
    [anon_sym_ExportQuantity] = ACTIONS(145),
    [anon_sym_ExportSlotHash] = ACTIONS(145),
    [anon_sym_ExportSlotOccupant] = ACTIONS(145),
    [anon_sym_Filtration] = ACTIONS(145),
    [anon_sym_FlightControlRule] = ACTIONS(145),
    [anon_sym_Flush] = ACTIONS(145),
    [anon_sym_ForceWrite] = ACTIONS(145),
    [anon_sym_ForwardX] = ACTIONS(145),
    [anon_sym_ForwardY] = ACTIONS(145),
    [anon_sym_ForwardZ] = ACTIONS(145),
    [anon_sym_Fuel] = ACTIONS(145),
    [anon_sym_Harvest] = ACTIONS(145),
    [anon_sym_Horizontal] = ACTIONS(145),
    [anon_sym_HorizontalRatio] = ACTIONS(145),
    [anon_sym_Idle] = ACTIONS(145),
    [anon_sym_ImportCount] = ACTIONS(145),
    [anon_sym_ImportQuantity] = ACTIONS(145),
    [anon_sym_ImportSlotHash] = ACTIONS(145),
    [anon_sym_ImportSlotOccupant] = ACTIONS(145),
    [anon_sym_Inclination] = ACTIONS(145),
    [anon_sym_Index] = ACTIONS(145),
    [anon_sym_InterrogationProgress] = ACTIONS(145),
    [anon_sym_LineNumber] = ACTIONS(145),
    [anon_sym_Lock] = ACTIONS(145),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(145),
    [anon_sym_Mass] = ACTIONS(145),
    [anon_sym_Maximum] = ACTIONS(145),
    [anon_sym_MinWattsToContact] = ACTIONS(145),
    [anon_sym_MineablesInQueue] = ACTIONS(145),
    [anon_sym_MineablesInVicinity] = ACTIONS(145),
    [anon_sym_MinedQuantity] = ACTIONS(145),
    [anon_sym_MinimumWattsToContact] = ACTIONS(145),
    [anon_sym_Mode] = ACTIONS(145),
    [anon_sym_NavPoints] = ACTIONS(145),
    [anon_sym_NextWeatherEventTime] = ACTIONS(145),
    [anon_sym_None] = ACTIONS(145),
    [anon_sym_On] = ACTIONS(145),
    [anon_sym_Open] = ACTIONS(145),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(145),
    [anon_sym_OrbitPeriod] = ACTIONS(145),
    [anon_sym_Orientation] = ACTIONS(145),
    [anon_sym_Output] = ACTIONS(145),
    [anon_sym_OverShootTarget] = ACTIONS(145),
    [anon_sym_PassedMoles] = ACTIONS(145),
    [anon_sym_Plant] = ACTIONS(145),
    [anon_sym_PlantEfficiency1] = ACTIONS(145),
    [anon_sym_PlantEfficiency2] = ACTIONS(145),
    [anon_sym_PlantEfficiency3] = ACTIONS(145),
    [anon_sym_PlantEfficiency4] = ACTIONS(145),
    [anon_sym_PlantGrowth1] = ACTIONS(145),
    [anon_sym_PlantGrowth2] = ACTIONS(145),
    [anon_sym_PlantGrowth3] = ACTIONS(145),
    [anon_sym_PlantGrowth4] = ACTIONS(145),
    [anon_sym_PlantHash1] = ACTIONS(145),
    [anon_sym_PlantHash2] = ACTIONS(145),
    [anon_sym_PlantHash3] = ACTIONS(145),
    [anon_sym_PlantHash4] = ACTIONS(145),
    [anon_sym_PlantHealth1] = ACTIONS(145),
    [anon_sym_PlantHealth2] = ACTIONS(145),
    [anon_sym_PlantHealth3] = ACTIONS(145),
    [anon_sym_PlantHealth4] = ACTIONS(145),
    [anon_sym_PositionX] = ACTIONS(145),
    [anon_sym_PositionY] = ACTIONS(145),
    [anon_sym_PositionZ] = ACTIONS(145),
    [anon_sym_Power] = ACTIONS(145),
    [anon_sym_PowerActual] = ACTIONS(145),
    [anon_sym_PowerGeneration] = ACTIONS(145),
    [anon_sym_PowerPotential] = ACTIONS(145),
    [anon_sym_PowerRequired] = ACTIONS(145),
    [anon_sym_PrefabHash] = ACTIONS(145),
    [anon_sym_Pressure] = ACTIONS(145),
    [anon_sym_PressureEfficiency] = ACTIONS(145),
    [anon_sym_PressureExternal] = ACTIONS(145),
    [anon_sym_PressureInput] = ACTIONS(145),
    [anon_sym_PressureInput2] = ACTIONS(145),
    [anon_sym_PressureInternal] = ACTIONS(145),
    [anon_sym_PressureOutput] = ACTIONS(145),
    [anon_sym_PressureOutput2] = ACTIONS(145),
    [anon_sym_PressureSetting] = ACTIONS(145),
    [anon_sym_Progress] = ACTIONS(145),
    [anon_sym_Quantity] = ACTIONS(145),
    [anon_sym_Ratio] = ACTIONS(145),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(145),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(145),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(145),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(145),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(145),
    [anon_sym_RatioHydrogen] = ACTIONS(145),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(145),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(145),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(145),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(145),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(145),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(145),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(145),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(145),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(145),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(145),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(145),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(145),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(145),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(145),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(145),
    [anon_sym_RatioNitrogen] = ACTIONS(145),
    [anon_sym_RatioNitrogenInput] = ACTIONS(145),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(145),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(145),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(145),
    [anon_sym_RatioNitrousOxide] = ACTIONS(145),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(145),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(145),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(145),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(145),
    [anon_sym_RatioOxygen] = ACTIONS(145),
    [anon_sym_RatioOxygenInput] = ACTIONS(145),
    [anon_sym_RatioOxygenInput2] = ACTIONS(145),
    [anon_sym_RatioOxygenOutput] = ACTIONS(145),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(145),
    [anon_sym_RatioPollutant] = ACTIONS(145),
    [anon_sym_RatioPollutantInput] = ACTIONS(145),
    [anon_sym_RatioPollutantInput2] = ACTIONS(145),
    [anon_sym_RatioPollutantOutput] = ACTIONS(145),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(145),
    [anon_sym_RatioPollutedWater] = ACTIONS(145),
    [anon_sym_RatioSteam] = ACTIONS(145),
    [anon_sym_RatioSteamInput] = ACTIONS(145),
    [anon_sym_RatioSteamInput2] = ACTIONS(145),
    [anon_sym_RatioSteamOutput] = ACTIONS(145),
    [anon_sym_RatioSteamOutput2] = ACTIONS(145),
    [anon_sym_RatioVolatiles] = ACTIONS(145),
    [anon_sym_RatioVolatilesInput] = ACTIONS(145),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(145),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(145),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(145),
    [anon_sym_RatioWater] = ACTIONS(145),
    [anon_sym_RatioWaterInput] = ACTIONS(145),
    [anon_sym_RatioWaterInput2] = ACTIONS(145),
    [anon_sym_RatioWaterOutput] = ACTIONS(145),
    [anon_sym_RatioWaterOutput2] = ACTIONS(145),
    [anon_sym_ReEntryAltitude] = ACTIONS(145),
    [anon_sym_Reagents] = ACTIONS(145),
    [anon_sym_RecipeHash] = ACTIONS(145),
    [anon_sym_ReferenceId] = ACTIONS(145),
    [anon_sym_RequestHash] = ACTIONS(145),
    [anon_sym_RequiredPower] = ACTIONS(145),
    [anon_sym_ReturnFuelCost] = ACTIONS(145),
    [anon_sym_Richness] = ACTIONS(145),
    [anon_sym_Rpm] = ACTIONS(145),
    [anon_sym_SemiMajorAxis] = ACTIONS(145),
    [anon_sym_Setting] = ACTIONS(145),
    [anon_sym_SettingInput] = ACTIONS(145),
    [anon_sym_SettingInputHash] = ACTIONS(145),
    [anon_sym_SettingOutput] = ACTIONS(145),
    [anon_sym_SettingOutputHash] = ACTIONS(145),
    [anon_sym_SignalID] = ACTIONS(145),
    [anon_sym_SignalStrength] = ACTIONS(145),
    [anon_sym_Sites] = ACTIONS(145),
    [anon_sym_Size] = ACTIONS(145),
    [anon_sym_SizeX] = ACTIONS(145),
    [anon_sym_SizeY] = ACTIONS(145),
    [anon_sym_SizeZ] = ACTIONS(145),
    [anon_sym_SolarAngle] = ACTIONS(145),
    [anon_sym_SolarConstant] = ACTIONS(145),
    [anon_sym_SolarIrradiance] = ACTIONS(145),
    [anon_sym_SoundAlert] = ACTIONS(145),
    [anon_sym_Stress] = ACTIONS(145),
    [anon_sym_Survey] = ACTIONS(145),
    [anon_sym_TargetPadIndex] = ACTIONS(145),
    [anon_sym_TargetX] = ACTIONS(145),
    [anon_sym_TargetY] = ACTIONS(145),
    [anon_sym_TargetZ] = ACTIONS(145),
    [anon_sym_Temperature] = ACTIONS(145),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(145),
    [anon_sym_TemperatureExternal] = ACTIONS(145),
    [anon_sym_TemperatureInput] = ACTIONS(145),
    [anon_sym_TemperatureInput2] = ACTIONS(145),
    [anon_sym_TemperatureOutput] = ACTIONS(145),
    [anon_sym_TemperatureOutput2] = ACTIONS(145),
    [anon_sym_TemperatureSetting] = ACTIONS(145),
    [anon_sym_Throttle] = ACTIONS(145),
    [anon_sym_Thrust] = ACTIONS(145),
    [anon_sym_ThrustToWeight] = ACTIONS(145),
    [anon_sym_Time] = ACTIONS(145),
    [anon_sym_TimeToDestination] = ACTIONS(145),
    [anon_sym_TotalMoles] = ACTIONS(145),
    [anon_sym_TotalMolesInput] = ACTIONS(145),
    [anon_sym_TotalMolesInput2] = ACTIONS(145),
    [anon_sym_TotalMolesOutput] = ACTIONS(145),
    [anon_sym_TotalMolesOutput2] = ACTIONS(145),
    [anon_sym_TotalQuantity] = ACTIONS(145),
    [anon_sym_TrueAnomaly] = ACTIONS(145),
    [anon_sym_Unknown] = ACTIONS(145),
    [anon_sym_VelocityMagnitude] = ACTIONS(145),
    [anon_sym_VelocityRelativeX] = ACTIONS(145),
    [anon_sym_VelocityRelativeY] = ACTIONS(145),
    [anon_sym_VelocityRelativeZ] = ACTIONS(145),
    [anon_sym_VelocityX] = ACTIONS(145),
    [anon_sym_VelocityY] = ACTIONS(145),
    [anon_sym_VelocityZ] = ACTIONS(145),
    [anon_sym_Vertical] = ACTIONS(145),
    [anon_sym_VerticalRatio] = ACTIONS(145),
    [anon_sym_Volume] = ACTIONS(145),
    [anon_sym_VolumeOfLiquid] = ACTIONS(145),
    [anon_sym_WattsReachingContact] = ACTIONS(145),
    [anon_sym_Weight] = ACTIONS(145),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(145),
    [anon_sym_ChargeRatio] = ACTIONS(145),
    [anon_sym_Class] = ACTIONS(145),
    [anon_sym_Damage] = ACTIONS(145),
    [anon_sym_Efficiency] = ACTIONS(145),
    [anon_sym_FilterType] = ACTIONS(145),
    [anon_sym_Growth] = ACTIONS(145),
    [anon_sym_Health] = ACTIONS(145),
    [anon_sym_Mature] = ACTIONS(145),
    [anon_sym_MaxQuantity] = ACTIONS(145),
    [anon_sym_OccupantHash] = ACTIONS(145),
    [anon_sym_Occupied] = ACTIONS(145),
    [anon_sym_PressureAir] = ACTIONS(145),
    [anon_sym_PressureWaste] = ACTIONS(145),
    [anon_sym_Seeding] = ACTIONS(145),
    [anon_sym_SortingClass] = ACTIONS(145),
    [anon_sym_Average] = ACTIONS(145),
    [anon_sym_Minimum] = ACTIONS(145),
    [anon_sym_Sum] = ACTIONS(145),
    [anon_sym_Contents] = ACTIONS(145),
    [anon_sym_Recipe] = ACTIONS(145),
    [anon_sym_Required] = ACTIONS(145),
    [anon_sym_TotalContents] = ACTIONS(145),
    [sym_enum] = ACTIONS(147),
  },
  [19] = {
    [sym_identifier] = ACTIONS(149),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(151),
    [sym_register] = ACTIONS(151),
    [sym_device] = ACTIONS(151),
    [anon_sym_nan] = ACTIONS(149),
    [anon_sym_pinf] = ACTIONS(149),
    [anon_sym_ninf] = ACTIONS(149),
    [anon_sym_pi] = ACTIONS(149),
    [anon_sym_deg2rad] = ACTIONS(149),
    [anon_sym_rad2deg] = ACTIONS(149),
    [anon_sym_epsilon] = ACTIONS(149),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(151),
    [anon_sym_Acceleration] = ACTIONS(149),
    [anon_sym_Activate] = ACTIONS(149),
    [anon_sym_AirRelease] = ACTIONS(149),
    [anon_sym_AlignmentError] = ACTIONS(149),
    [anon_sym_Apex] = ACTIONS(149),
    [anon_sym_AutoLand] = ACTIONS(149),
    [anon_sym_AutoShutOff] = ACTIONS(149),
    [anon_sym_Bpm] = ACTIONS(149),
    [anon_sym_BurnTimeRemaining] = ACTIONS(149),
    [anon_sym_Bypass] = ACTIONS(149),
    [anon_sym_CelestialHash] = ACTIONS(149),
    [anon_sym_CelestialParentHash] = ACTIONS(149),
    [anon_sym_Channel] = ACTIONS(149),
    [anon_sym_Channel0] = ACTIONS(149),
    [anon_sym_Channel1] = ACTIONS(149),
    [anon_sym_Channel2] = ACTIONS(149),
    [anon_sym_Channel3] = ACTIONS(149),
    [anon_sym_Channel4] = ACTIONS(149),
    [anon_sym_Channel5] = ACTIONS(149),
    [anon_sym_Channel6] = ACTIONS(149),
    [anon_sym_Channel7] = ACTIONS(149),
    [anon_sym_Charge] = ACTIONS(149),
    [anon_sym_Chart] = ACTIONS(149),
    [anon_sym_ChartedNavPoints] = ACTIONS(149),
    [anon_sym_ClearMemory] = ACTIONS(149),
    [anon_sym_CollectableGoods] = ACTIONS(149),
    [anon_sym_Color] = ACTIONS(149),
    [anon_sym_Combustion] = ACTIONS(149),
    [anon_sym_CombustionInput] = ACTIONS(149),
    [anon_sym_CombustionInput2] = ACTIONS(149),
    [anon_sym_CombustionLimiter] = ACTIONS(149),
    [anon_sym_CombustionOutput] = ACTIONS(149),
    [anon_sym_CombustionOutput2] = ACTIONS(149),
    [anon_sym_CompletionRatio] = ACTIONS(149),
    [anon_sym_ContactTypeId] = ACTIONS(149),
    [anon_sym_CurrentCode] = ACTIONS(149),
    [anon_sym_CurrentResearchPodType] = ACTIONS(149),
    [anon_sym_Density] = ACTIONS(149),
    [anon_sym_DestinationCode] = ACTIONS(149),
    [anon_sym_Discover] = ACTIONS(149),
    [anon_sym_DistanceAu] = ACTIONS(149),
    [anon_sym_DistanceKm] = ACTIONS(149),
    [anon_sym_DrillCondition] = ACTIONS(149),
    [anon_sym_DryMass] = ACTIONS(149),
    [anon_sym_Eccentricity] = ACTIONS(149),
    [anon_sym_ElevatorLevel] = ACTIONS(149),
    [anon_sym_ElevatorSpeed] = ACTIONS(149),
    [anon_sym_EntityState] = ACTIONS(149),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(149),
    [anon_sym_Error] = ACTIONS(149),
    [anon_sym_ExhaustVelocity] = ACTIONS(149),
    [anon_sym_ExportCount] = ACTIONS(149),
    [anon_sym_ExportQuantity] = ACTIONS(149),
    [anon_sym_ExportSlotHash] = ACTIONS(149),
    [anon_sym_ExportSlotOccupant] = ACTIONS(149),
    [anon_sym_Filtration] = ACTIONS(149),
    [anon_sym_FlightControlRule] = ACTIONS(149),
    [anon_sym_Flush] = ACTIONS(149),
    [anon_sym_ForceWrite] = ACTIONS(149),
    [anon_sym_ForwardX] = ACTIONS(149),
    [anon_sym_ForwardY] = ACTIONS(149),
    [anon_sym_ForwardZ] = ACTIONS(149),
    [anon_sym_Fuel] = ACTIONS(149),
    [anon_sym_Harvest] = ACTIONS(149),
    [anon_sym_Horizontal] = ACTIONS(149),
    [anon_sym_HorizontalRatio] = ACTIONS(149),
    [anon_sym_Idle] = ACTIONS(149),
    [anon_sym_ImportCount] = ACTIONS(149),
    [anon_sym_ImportQuantity] = ACTIONS(149),
    [anon_sym_ImportSlotHash] = ACTIONS(149),
    [anon_sym_ImportSlotOccupant] = ACTIONS(149),
    [anon_sym_Inclination] = ACTIONS(149),
    [anon_sym_Index] = ACTIONS(149),
    [anon_sym_InterrogationProgress] = ACTIONS(149),
    [anon_sym_LineNumber] = ACTIONS(149),
    [anon_sym_Lock] = ACTIONS(149),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(149),
    [anon_sym_Mass] = ACTIONS(149),
    [anon_sym_Maximum] = ACTIONS(149),
    [anon_sym_MinWattsToContact] = ACTIONS(149),
    [anon_sym_MineablesInQueue] = ACTIONS(149),
    [anon_sym_MineablesInVicinity] = ACTIONS(149),
    [anon_sym_MinedQuantity] = ACTIONS(149),
    [anon_sym_MinimumWattsToContact] = ACTIONS(149),
    [anon_sym_Mode] = ACTIONS(149),
    [anon_sym_NavPoints] = ACTIONS(149),
    [anon_sym_NextWeatherEventTime] = ACTIONS(149),
    [anon_sym_None] = ACTIONS(149),
    [anon_sym_On] = ACTIONS(149),
    [anon_sym_Open] = ACTIONS(149),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(149),
    [anon_sym_OrbitPeriod] = ACTIONS(149),
    [anon_sym_Orientation] = ACTIONS(149),
    [anon_sym_Output] = ACTIONS(149),
    [anon_sym_OverShootTarget] = ACTIONS(149),
    [anon_sym_PassedMoles] = ACTIONS(149),
    [anon_sym_Plant] = ACTIONS(149),
    [anon_sym_PlantEfficiency1] = ACTIONS(149),
    [anon_sym_PlantEfficiency2] = ACTIONS(149),
    [anon_sym_PlantEfficiency3] = ACTIONS(149),
    [anon_sym_PlantEfficiency4] = ACTIONS(149),
    [anon_sym_PlantGrowth1] = ACTIONS(149),
    [anon_sym_PlantGrowth2] = ACTIONS(149),
    [anon_sym_PlantGrowth3] = ACTIONS(149),
    [anon_sym_PlantGrowth4] = ACTIONS(149),
    [anon_sym_PlantHash1] = ACTIONS(149),
    [anon_sym_PlantHash2] = ACTIONS(149),
    [anon_sym_PlantHash3] = ACTIONS(149),
    [anon_sym_PlantHash4] = ACTIONS(149),
    [anon_sym_PlantHealth1] = ACTIONS(149),
    [anon_sym_PlantHealth2] = ACTIONS(149),
    [anon_sym_PlantHealth3] = ACTIONS(149),
    [anon_sym_PlantHealth4] = ACTIONS(149),
    [anon_sym_PositionX] = ACTIONS(149),
    [anon_sym_PositionY] = ACTIONS(149),
    [anon_sym_PositionZ] = ACTIONS(149),
    [anon_sym_Power] = ACTIONS(149),
    [anon_sym_PowerActual] = ACTIONS(149),
    [anon_sym_PowerGeneration] = ACTIONS(149),
    [anon_sym_PowerPotential] = ACTIONS(149),
    [anon_sym_PowerRequired] = ACTIONS(149),
    [anon_sym_PrefabHash] = ACTIONS(149),
    [anon_sym_Pressure] = ACTIONS(149),
    [anon_sym_PressureEfficiency] = ACTIONS(149),
    [anon_sym_PressureExternal] = ACTIONS(149),
    [anon_sym_PressureInput] = ACTIONS(149),
    [anon_sym_PressureInput2] = ACTIONS(149),
    [anon_sym_PressureInternal] = ACTIONS(149),
    [anon_sym_PressureOutput] = ACTIONS(149),
    [anon_sym_PressureOutput2] = ACTIONS(149),
    [anon_sym_PressureSetting] = ACTIONS(149),
    [anon_sym_Progress] = ACTIONS(149),
    [anon_sym_Quantity] = ACTIONS(149),
    [anon_sym_Ratio] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrogen] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioOxygen] = ACTIONS(149),
    [anon_sym_RatioOxygenInput] = ACTIONS(149),
    [anon_sym_RatioOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutant] = ACTIONS(149),
    [anon_sym_RatioPollutantInput] = ACTIONS(149),
    [anon_sym_RatioPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutedWater] = ACTIONS(149),
    [anon_sym_RatioSteam] = ACTIONS(149),
    [anon_sym_RatioSteamInput] = ACTIONS(149),
    [anon_sym_RatioSteamInput2] = ACTIONS(149),
    [anon_sym_RatioSteamOutput] = ACTIONS(149),
    [anon_sym_RatioSteamOutput2] = ACTIONS(149),
    [anon_sym_RatioVolatiles] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioWater] = ACTIONS(149),
    [anon_sym_RatioWaterInput] = ACTIONS(149),
    [anon_sym_RatioWaterInput2] = ACTIONS(149),
    [anon_sym_RatioWaterOutput] = ACTIONS(149),
    [anon_sym_RatioWaterOutput2] = ACTIONS(149),
    [anon_sym_ReEntryAltitude] = ACTIONS(149),
    [anon_sym_Reagents] = ACTIONS(149),
    [anon_sym_RecipeHash] = ACTIONS(149),
    [anon_sym_ReferenceId] = ACTIONS(149),
    [anon_sym_RequestHash] = ACTIONS(149),
    [anon_sym_RequiredPower] = ACTIONS(149),
    [anon_sym_ReturnFuelCost] = ACTIONS(149),
    [anon_sym_Richness] = ACTIONS(149),
    [anon_sym_Rpm] = ACTIONS(149),
    [anon_sym_SemiMajorAxis] = ACTIONS(149),
    [anon_sym_Setting] = ACTIONS(149),
    [anon_sym_SettingInput] = ACTIONS(149),
    [anon_sym_SettingInputHash] = ACTIONS(149),
    [anon_sym_SettingOutput] = ACTIONS(149),
    [anon_sym_SettingOutputHash] = ACTIONS(149),
    [anon_sym_SignalID] = ACTIONS(149),
    [anon_sym_SignalStrength] = ACTIONS(149),
    [anon_sym_Sites] = ACTIONS(149),
    [anon_sym_Size] = ACTIONS(149),
    [anon_sym_SizeX] = ACTIONS(149),
    [anon_sym_SizeY] = ACTIONS(149),
    [anon_sym_SizeZ] = ACTIONS(149),
    [anon_sym_SolarAngle] = ACTIONS(149),
    [anon_sym_SolarConstant] = ACTIONS(149),
    [anon_sym_SolarIrradiance] = ACTIONS(149),
    [anon_sym_SoundAlert] = ACTIONS(149),
    [anon_sym_Stress] = ACTIONS(149),
    [anon_sym_Survey] = ACTIONS(149),
    [anon_sym_TargetPadIndex] = ACTIONS(149),
    [anon_sym_TargetX] = ACTIONS(149),
    [anon_sym_TargetY] = ACTIONS(149),
    [anon_sym_TargetZ] = ACTIONS(149),
    [anon_sym_Temperature] = ACTIONS(149),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(149),
    [anon_sym_TemperatureExternal] = ACTIONS(149),
    [anon_sym_TemperatureInput] = ACTIONS(149),
    [anon_sym_TemperatureInput2] = ACTIONS(149),
    [anon_sym_TemperatureOutput] = ACTIONS(149),
    [anon_sym_TemperatureOutput2] = ACTIONS(149),
    [anon_sym_TemperatureSetting] = ACTIONS(149),
    [anon_sym_Throttle] = ACTIONS(149),
    [anon_sym_Thrust] = ACTIONS(149),
    [anon_sym_ThrustToWeight] = ACTIONS(149),
    [anon_sym_Time] = ACTIONS(149),
    [anon_sym_TimeToDestination] = ACTIONS(149),
    [anon_sym_TotalMoles] = ACTIONS(149),
    [anon_sym_TotalMolesInput] = ACTIONS(149),
    [anon_sym_TotalMolesInput2] = ACTIONS(149),
    [anon_sym_TotalMolesOutput] = ACTIONS(149),
    [anon_sym_TotalMolesOutput2] = ACTIONS(149),
    [anon_sym_TotalQuantity] = ACTIONS(149),
    [anon_sym_TrueAnomaly] = ACTIONS(149),
    [anon_sym_Unknown] = ACTIONS(149),
    [anon_sym_VelocityMagnitude] = ACTIONS(149),
    [anon_sym_VelocityRelativeX] = ACTIONS(149),
    [anon_sym_VelocityRelativeY] = ACTIONS(149),
    [anon_sym_VelocityRelativeZ] = ACTIONS(149),
    [anon_sym_VelocityX] = ACTIONS(149),
    [anon_sym_VelocityY] = ACTIONS(149),
    [anon_sym_VelocityZ] = ACTIONS(149),
    [anon_sym_Vertical] = ACTIONS(149),
    [anon_sym_VerticalRatio] = ACTIONS(149),
    [anon_sym_Volume] = ACTIONS(149),
    [anon_sym_VolumeOfLiquid] = ACTIONS(149),
    [anon_sym_WattsReachingContact] = ACTIONS(149),
    [anon_sym_Weight] = ACTIONS(149),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(149),
    [anon_sym_ChargeRatio] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(149),
    [anon_sym_Damage] = ACTIONS(149),
    [anon_sym_Efficiency] = ACTIONS(149),
    [anon_sym_FilterType] = ACTIONS(149),
    [anon_sym_Growth] = ACTIONS(149),
    [anon_sym_Health] = ACTIONS(149),
    [anon_sym_Mature] = ACTIONS(149),
    [anon_sym_MaxQuantity] = ACTIONS(149),
    [anon_sym_OccupantHash] = ACTIONS(149),
    [anon_sym_Occupied] = ACTIONS(149),
    [anon_sym_PressureAir] = ACTIONS(149),
    [anon_sym_PressureWaste] = ACTIONS(149),
    [anon_sym_Seeding] = ACTIONS(149),
    [anon_sym_SortingClass] = ACTIONS(149),
    [anon_sym_Average] = ACTIONS(149),
    [anon_sym_Minimum] = ACTIONS(149),
    [anon_sym_Sum] = ACTIONS(149),
    [anon_sym_Contents] = ACTIONS(149),
    [anon_sym_Recipe] = ACTIONS(149),
    [anon_sym_Required] = ACTIONS(149),
    [anon_sym_TotalContents] = ACTIONS(149),
    [sym_enum] = ACTIONS(151),
  },
  [20] = {
    [sym_identifier] = ACTIONS(149),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(151),
    [sym_register] = ACTIONS(151),
    [sym_device] = ACTIONS(151),
    [anon_sym_nan] = ACTIONS(149),
    [anon_sym_pinf] = ACTIONS(149),
    [anon_sym_ninf] = ACTIONS(149),
    [anon_sym_pi] = ACTIONS(149),
    [anon_sym_deg2rad] = ACTIONS(149),
    [anon_sym_rad2deg] = ACTIONS(149),
    [anon_sym_epsilon] = ACTIONS(149),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(151),
    [anon_sym_Acceleration] = ACTIONS(149),
    [anon_sym_Activate] = ACTIONS(149),
    [anon_sym_AirRelease] = ACTIONS(149),
    [anon_sym_AlignmentError] = ACTIONS(149),
    [anon_sym_Apex] = ACTIONS(149),
    [anon_sym_AutoLand] = ACTIONS(149),
    [anon_sym_AutoShutOff] = ACTIONS(149),
    [anon_sym_Bpm] = ACTIONS(149),
    [anon_sym_BurnTimeRemaining] = ACTIONS(149),
    [anon_sym_Bypass] = ACTIONS(149),
    [anon_sym_CelestialHash] = ACTIONS(149),
    [anon_sym_CelestialParentHash] = ACTIONS(149),
    [anon_sym_Channel] = ACTIONS(149),
    [anon_sym_Channel0] = ACTIONS(149),
    [anon_sym_Channel1] = ACTIONS(149),
    [anon_sym_Channel2] = ACTIONS(149),
    [anon_sym_Channel3] = ACTIONS(149),
    [anon_sym_Channel4] = ACTIONS(149),
    [anon_sym_Channel5] = ACTIONS(149),
    [anon_sym_Channel6] = ACTIONS(149),
    [anon_sym_Channel7] = ACTIONS(149),
    [anon_sym_Charge] = ACTIONS(149),
    [anon_sym_Chart] = ACTIONS(149),
    [anon_sym_ChartedNavPoints] = ACTIONS(149),
    [anon_sym_ClearMemory] = ACTIONS(149),
    [anon_sym_CollectableGoods] = ACTIONS(149),
    [anon_sym_Color] = ACTIONS(149),
    [anon_sym_Combustion] = ACTIONS(149),
    [anon_sym_CombustionInput] = ACTIONS(149),
    [anon_sym_CombustionInput2] = ACTIONS(149),
    [anon_sym_CombustionLimiter] = ACTIONS(149),
    [anon_sym_CombustionOutput] = ACTIONS(149),
    [anon_sym_CombustionOutput2] = ACTIONS(149),
    [anon_sym_CompletionRatio] = ACTIONS(149),
    [anon_sym_ContactTypeId] = ACTIONS(149),
    [anon_sym_CurrentCode] = ACTIONS(149),
    [anon_sym_CurrentResearchPodType] = ACTIONS(149),
    [anon_sym_Density] = ACTIONS(149),
    [anon_sym_DestinationCode] = ACTIONS(149),
    [anon_sym_Discover] = ACTIONS(149),
    [anon_sym_DistanceAu] = ACTIONS(149),
    [anon_sym_DistanceKm] = ACTIONS(149),
    [anon_sym_DrillCondition] = ACTIONS(149),
    [anon_sym_DryMass] = ACTIONS(149),
    [anon_sym_Eccentricity] = ACTIONS(149),
    [anon_sym_ElevatorLevel] = ACTIONS(149),
    [anon_sym_ElevatorSpeed] = ACTIONS(149),
    [anon_sym_EntityState] = ACTIONS(149),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(149),
    [anon_sym_Error] = ACTIONS(149),
    [anon_sym_ExhaustVelocity] = ACTIONS(149),
    [anon_sym_ExportCount] = ACTIONS(149),
    [anon_sym_ExportQuantity] = ACTIONS(149),
    [anon_sym_ExportSlotHash] = ACTIONS(149),
    [anon_sym_ExportSlotOccupant] = ACTIONS(149),
    [anon_sym_Filtration] = ACTIONS(149),
    [anon_sym_FlightControlRule] = ACTIONS(149),
    [anon_sym_Flush] = ACTIONS(149),
    [anon_sym_ForceWrite] = ACTIONS(149),
    [anon_sym_ForwardX] = ACTIONS(149),
    [anon_sym_ForwardY] = ACTIONS(149),
    [anon_sym_ForwardZ] = ACTIONS(149),
    [anon_sym_Fuel] = ACTIONS(149),
    [anon_sym_Harvest] = ACTIONS(149),
    [anon_sym_Horizontal] = ACTIONS(149),
    [anon_sym_HorizontalRatio] = ACTIONS(149),
    [anon_sym_Idle] = ACTIONS(149),
    [anon_sym_ImportCount] = ACTIONS(149),
    [anon_sym_ImportQuantity] = ACTIONS(149),
    [anon_sym_ImportSlotHash] = ACTIONS(149),
    [anon_sym_ImportSlotOccupant] = ACTIONS(149),
    [anon_sym_Inclination] = ACTIONS(149),
    [anon_sym_Index] = ACTIONS(149),
    [anon_sym_InterrogationProgress] = ACTIONS(149),
    [anon_sym_LineNumber] = ACTIONS(149),
    [anon_sym_Lock] = ACTIONS(149),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(149),
    [anon_sym_Mass] = ACTIONS(149),
    [anon_sym_Maximum] = ACTIONS(149),
    [anon_sym_MinWattsToContact] = ACTIONS(149),
    [anon_sym_MineablesInQueue] = ACTIONS(149),
    [anon_sym_MineablesInVicinity] = ACTIONS(149),
    [anon_sym_MinedQuantity] = ACTIONS(149),
    [anon_sym_MinimumWattsToContact] = ACTIONS(149),
    [anon_sym_Mode] = ACTIONS(149),
    [anon_sym_NavPoints] = ACTIONS(149),
    [anon_sym_NextWeatherEventTime] = ACTIONS(149),
    [anon_sym_None] = ACTIONS(149),
    [anon_sym_On] = ACTIONS(149),
    [anon_sym_Open] = ACTIONS(149),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(149),
    [anon_sym_OrbitPeriod] = ACTIONS(149),
    [anon_sym_Orientation] = ACTIONS(149),
    [anon_sym_Output] = ACTIONS(149),
    [anon_sym_OverShootTarget] = ACTIONS(149),
    [anon_sym_PassedMoles] = ACTIONS(149),
    [anon_sym_Plant] = ACTIONS(149),
    [anon_sym_PlantEfficiency1] = ACTIONS(149),
    [anon_sym_PlantEfficiency2] = ACTIONS(149),
    [anon_sym_PlantEfficiency3] = ACTIONS(149),
    [anon_sym_PlantEfficiency4] = ACTIONS(149),
    [anon_sym_PlantGrowth1] = ACTIONS(149),
    [anon_sym_PlantGrowth2] = ACTIONS(149),
    [anon_sym_PlantGrowth3] = ACTIONS(149),
    [anon_sym_PlantGrowth4] = ACTIONS(149),
    [anon_sym_PlantHash1] = ACTIONS(149),
    [anon_sym_PlantHash2] = ACTIONS(149),
    [anon_sym_PlantHash3] = ACTIONS(149),
    [anon_sym_PlantHash4] = ACTIONS(149),
    [anon_sym_PlantHealth1] = ACTIONS(149),
    [anon_sym_PlantHealth2] = ACTIONS(149),
    [anon_sym_PlantHealth3] = ACTIONS(149),
    [anon_sym_PlantHealth4] = ACTIONS(149),
    [anon_sym_PositionX] = ACTIONS(149),
    [anon_sym_PositionY] = ACTIONS(149),
    [anon_sym_PositionZ] = ACTIONS(149),
    [anon_sym_Power] = ACTIONS(149),
    [anon_sym_PowerActual] = ACTIONS(149),
    [anon_sym_PowerGeneration] = ACTIONS(149),
    [anon_sym_PowerPotential] = ACTIONS(149),
    [anon_sym_PowerRequired] = ACTIONS(149),
    [anon_sym_PrefabHash] = ACTIONS(149),
    [anon_sym_Pressure] = ACTIONS(149),
    [anon_sym_PressureEfficiency] = ACTIONS(149),
    [anon_sym_PressureExternal] = ACTIONS(149),
    [anon_sym_PressureInput] = ACTIONS(149),
    [anon_sym_PressureInput2] = ACTIONS(149),
    [anon_sym_PressureInternal] = ACTIONS(149),
    [anon_sym_PressureOutput] = ACTIONS(149),
    [anon_sym_PressureOutput2] = ACTIONS(149),
    [anon_sym_PressureSetting] = ACTIONS(149),
    [anon_sym_Progress] = ACTIONS(149),
    [anon_sym_Quantity] = ACTIONS(149),
    [anon_sym_Ratio] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrogen] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioOxygen] = ACTIONS(149),
    [anon_sym_RatioOxygenInput] = ACTIONS(149),
    [anon_sym_RatioOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutant] = ACTIONS(149),
    [anon_sym_RatioPollutantInput] = ACTIONS(149),
    [anon_sym_RatioPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutedWater] = ACTIONS(149),
    [anon_sym_RatioSteam] = ACTIONS(149),
    [anon_sym_RatioSteamInput] = ACTIONS(149),
    [anon_sym_RatioSteamInput2] = ACTIONS(149),
    [anon_sym_RatioSteamOutput] = ACTIONS(149),
    [anon_sym_RatioSteamOutput2] = ACTIONS(149),
    [anon_sym_RatioVolatiles] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioWater] = ACTIONS(149),
    [anon_sym_RatioWaterInput] = ACTIONS(149),
    [anon_sym_RatioWaterInput2] = ACTIONS(149),
    [anon_sym_RatioWaterOutput] = ACTIONS(149),
    [anon_sym_RatioWaterOutput2] = ACTIONS(149),
    [anon_sym_ReEntryAltitude] = ACTIONS(149),
    [anon_sym_Reagents] = ACTIONS(149),
    [anon_sym_RecipeHash] = ACTIONS(149),
    [anon_sym_ReferenceId] = ACTIONS(149),
    [anon_sym_RequestHash] = ACTIONS(149),
    [anon_sym_RequiredPower] = ACTIONS(149),
    [anon_sym_ReturnFuelCost] = ACTIONS(149),
    [anon_sym_Richness] = ACTIONS(149),
    [anon_sym_Rpm] = ACTIONS(149),
    [anon_sym_SemiMajorAxis] = ACTIONS(149),
    [anon_sym_Setting] = ACTIONS(149),
    [anon_sym_SettingInput] = ACTIONS(149),
    [anon_sym_SettingInputHash] = ACTIONS(149),
    [anon_sym_SettingOutput] = ACTIONS(149),
    [anon_sym_SettingOutputHash] = ACTIONS(149),
    [anon_sym_SignalID] = ACTIONS(149),
    [anon_sym_SignalStrength] = ACTIONS(149),
    [anon_sym_Sites] = ACTIONS(149),
    [anon_sym_Size] = ACTIONS(149),
    [anon_sym_SizeX] = ACTIONS(149),
    [anon_sym_SizeY] = ACTIONS(149),
    [anon_sym_SizeZ] = ACTIONS(149),
    [anon_sym_SolarAngle] = ACTIONS(149),
    [anon_sym_SolarConstant] = ACTIONS(149),
    [anon_sym_SolarIrradiance] = ACTIONS(149),
    [anon_sym_SoundAlert] = ACTIONS(149),
    [anon_sym_Stress] = ACTIONS(149),
    [anon_sym_Survey] = ACTIONS(149),
    [anon_sym_TargetPadIndex] = ACTIONS(149),
    [anon_sym_TargetX] = ACTIONS(149),
    [anon_sym_TargetY] = ACTIONS(149),
    [anon_sym_TargetZ] = ACTIONS(149),
    [anon_sym_Temperature] = ACTIONS(149),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(149),
    [anon_sym_TemperatureExternal] = ACTIONS(149),
    [anon_sym_TemperatureInput] = ACTIONS(149),
    [anon_sym_TemperatureInput2] = ACTIONS(149),
    [anon_sym_TemperatureOutput] = ACTIONS(149),
    [anon_sym_TemperatureOutput2] = ACTIONS(149),
    [anon_sym_TemperatureSetting] = ACTIONS(149),
    [anon_sym_Throttle] = ACTIONS(149),
    [anon_sym_Thrust] = ACTIONS(149),
    [anon_sym_ThrustToWeight] = ACTIONS(149),
    [anon_sym_Time] = ACTIONS(149),
    [anon_sym_TimeToDestination] = ACTIONS(149),
    [anon_sym_TotalMoles] = ACTIONS(149),
    [anon_sym_TotalMolesInput] = ACTIONS(149),
    [anon_sym_TotalMolesInput2] = ACTIONS(149),
    [anon_sym_TotalMolesOutput] = ACTIONS(149),
    [anon_sym_TotalMolesOutput2] = ACTIONS(149),
    [anon_sym_TotalQuantity] = ACTIONS(149),
    [anon_sym_TrueAnomaly] = ACTIONS(149),
    [anon_sym_Unknown] = ACTIONS(149),
    [anon_sym_VelocityMagnitude] = ACTIONS(149),
    [anon_sym_VelocityRelativeX] = ACTIONS(149),
    [anon_sym_VelocityRelativeY] = ACTIONS(149),
    [anon_sym_VelocityRelativeZ] = ACTIONS(149),
    [anon_sym_VelocityX] = ACTIONS(149),
    [anon_sym_VelocityY] = ACTIONS(149),
    [anon_sym_VelocityZ] = ACTIONS(149),
    [anon_sym_Vertical] = ACTIONS(149),
    [anon_sym_VerticalRatio] = ACTIONS(149),
    [anon_sym_Volume] = ACTIONS(149),
    [anon_sym_VolumeOfLiquid] = ACTIONS(149),
    [anon_sym_WattsReachingContact] = ACTIONS(149),
    [anon_sym_Weight] = ACTIONS(149),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(149),
    [anon_sym_ChargeRatio] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(149),
    [anon_sym_Damage] = ACTIONS(149),
    [anon_sym_Efficiency] = ACTIONS(149),
    [anon_sym_FilterType] = ACTIONS(149),
    [anon_sym_Growth] = ACTIONS(149),
    [anon_sym_Health] = ACTIONS(149),
    [anon_sym_Mature] = ACTIONS(149),
    [anon_sym_MaxQuantity] = ACTIONS(149),
    [anon_sym_OccupantHash] = ACTIONS(149),
    [anon_sym_Occupied] = ACTIONS(149),
    [anon_sym_PressureAir] = ACTIONS(149),
    [anon_sym_PressureWaste] = ACTIONS(149),
    [anon_sym_Seeding] = ACTIONS(149),
    [anon_sym_SortingClass] = ACTIONS(149),
    [anon_sym_Average] = ACTIONS(149),
    [anon_sym_Minimum] = ACTIONS(149),
    [anon_sym_Sum] = ACTIONS(149),
    [anon_sym_Contents] = ACTIONS(149),
    [anon_sym_Recipe] = ACTIONS(149),
    [anon_sym_Required] = ACTIONS(149),
    [anon_sym_TotalContents] = ACTIONS(149),
    [sym_enum] = ACTIONS(151),
  },
  [21] = {
    [sym_identifier] = ACTIONS(149),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(151),
    [sym_register] = ACTIONS(151),
    [sym_device] = ACTIONS(151),
    [anon_sym_nan] = ACTIONS(149),
    [anon_sym_pinf] = ACTIONS(149),
    [anon_sym_ninf] = ACTIONS(149),
    [anon_sym_pi] = ACTIONS(149),
    [anon_sym_deg2rad] = ACTIONS(149),
    [anon_sym_rad2deg] = ACTIONS(149),
    [anon_sym_epsilon] = ACTIONS(149),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(151),
    [anon_sym_Acceleration] = ACTIONS(149),
    [anon_sym_Activate] = ACTIONS(149),
    [anon_sym_AirRelease] = ACTIONS(149),
    [anon_sym_AlignmentError] = ACTIONS(149),
    [anon_sym_Apex] = ACTIONS(149),
    [anon_sym_AutoLand] = ACTIONS(149),
    [anon_sym_AutoShutOff] = ACTIONS(149),
    [anon_sym_Bpm] = ACTIONS(149),
    [anon_sym_BurnTimeRemaining] = ACTIONS(149),
    [anon_sym_Bypass] = ACTIONS(149),
    [anon_sym_CelestialHash] = ACTIONS(149),
    [anon_sym_CelestialParentHash] = ACTIONS(149),
    [anon_sym_Channel] = ACTIONS(149),
    [anon_sym_Channel0] = ACTIONS(149),
    [anon_sym_Channel1] = ACTIONS(149),
    [anon_sym_Channel2] = ACTIONS(149),
    [anon_sym_Channel3] = ACTIONS(149),
    [anon_sym_Channel4] = ACTIONS(149),
    [anon_sym_Channel5] = ACTIONS(149),
    [anon_sym_Channel6] = ACTIONS(149),
    [anon_sym_Channel7] = ACTIONS(149),
    [anon_sym_Charge] = ACTIONS(149),
    [anon_sym_Chart] = ACTIONS(149),
    [anon_sym_ChartedNavPoints] = ACTIONS(149),
    [anon_sym_ClearMemory] = ACTIONS(149),
    [anon_sym_CollectableGoods] = ACTIONS(149),
    [anon_sym_Color] = ACTIONS(149),
    [anon_sym_Combustion] = ACTIONS(149),
    [anon_sym_CombustionInput] = ACTIONS(149),
    [anon_sym_CombustionInput2] = ACTIONS(149),
    [anon_sym_CombustionLimiter] = ACTIONS(149),
    [anon_sym_CombustionOutput] = ACTIONS(149),
    [anon_sym_CombustionOutput2] = ACTIONS(149),
    [anon_sym_CompletionRatio] = ACTIONS(149),
    [anon_sym_ContactTypeId] = ACTIONS(149),
    [anon_sym_CurrentCode] = ACTIONS(149),
    [anon_sym_CurrentResearchPodType] = ACTIONS(149),
    [anon_sym_Density] = ACTIONS(149),
    [anon_sym_DestinationCode] = ACTIONS(149),
    [anon_sym_Discover] = ACTIONS(149),
    [anon_sym_DistanceAu] = ACTIONS(149),
    [anon_sym_DistanceKm] = ACTIONS(149),
    [anon_sym_DrillCondition] = ACTIONS(149),
    [anon_sym_DryMass] = ACTIONS(149),
    [anon_sym_Eccentricity] = ACTIONS(149),
    [anon_sym_ElevatorLevel] = ACTIONS(149),
    [anon_sym_ElevatorSpeed] = ACTIONS(149),
    [anon_sym_EntityState] = ACTIONS(149),
    [anon_sym_EnvironmentEfficiency] = ACTIONS(149),
    [anon_sym_Error] = ACTIONS(149),
    [anon_sym_ExhaustVelocity] = ACTIONS(149),
    [anon_sym_ExportCount] = ACTIONS(149),
    [anon_sym_ExportQuantity] = ACTIONS(149),
    [anon_sym_ExportSlotHash] = ACTIONS(149),
    [anon_sym_ExportSlotOccupant] = ACTIONS(149),
    [anon_sym_Filtration] = ACTIONS(149),
    [anon_sym_FlightControlRule] = ACTIONS(149),
    [anon_sym_Flush] = ACTIONS(149),
    [anon_sym_ForceWrite] = ACTIONS(149),
    [anon_sym_ForwardX] = ACTIONS(149),
    [anon_sym_ForwardY] = ACTIONS(149),
    [anon_sym_ForwardZ] = ACTIONS(149),
    [anon_sym_Fuel] = ACTIONS(149),
    [anon_sym_Harvest] = ACTIONS(149),
    [anon_sym_Horizontal] = ACTIONS(149),
    [anon_sym_HorizontalRatio] = ACTIONS(149),
    [anon_sym_Idle] = ACTIONS(149),
    [anon_sym_ImportCount] = ACTIONS(149),
    [anon_sym_ImportQuantity] = ACTIONS(149),
    [anon_sym_ImportSlotHash] = ACTIONS(149),
    [anon_sym_ImportSlotOccupant] = ACTIONS(149),
    [anon_sym_Inclination] = ACTIONS(149),
    [anon_sym_Index] = ACTIONS(149),
    [anon_sym_InterrogationProgress] = ACTIONS(149),
    [anon_sym_LineNumber] = ACTIONS(149),
    [anon_sym_Lock] = ACTIONS(149),
    [anon_sym_ManualResearchRequiredPod] = ACTIONS(149),
    [anon_sym_Mass] = ACTIONS(149),
    [anon_sym_Maximum] = ACTIONS(149),
    [anon_sym_MinWattsToContact] = ACTIONS(149),
    [anon_sym_MineablesInQueue] = ACTIONS(149),
    [anon_sym_MineablesInVicinity] = ACTIONS(149),
    [anon_sym_MinedQuantity] = ACTIONS(149),
    [anon_sym_MinimumWattsToContact] = ACTIONS(149),
    [anon_sym_Mode] = ACTIONS(149),
    [anon_sym_NavPoints] = ACTIONS(149),
    [anon_sym_NextWeatherEventTime] = ACTIONS(149),
    [anon_sym_None] = ACTIONS(149),
    [anon_sym_On] = ACTIONS(149),
    [anon_sym_Open] = ACTIONS(149),
    [anon_sym_OperationalTemperatureEfficiency] = ACTIONS(149),
    [anon_sym_OrbitPeriod] = ACTIONS(149),
    [anon_sym_Orientation] = ACTIONS(149),
    [anon_sym_Output] = ACTIONS(149),
    [anon_sym_OverShootTarget] = ACTIONS(149),
    [anon_sym_PassedMoles] = ACTIONS(149),
    [anon_sym_Plant] = ACTIONS(149),
    [anon_sym_PlantEfficiency1] = ACTIONS(149),
    [anon_sym_PlantEfficiency2] = ACTIONS(149),
    [anon_sym_PlantEfficiency3] = ACTIONS(149),
    [anon_sym_PlantEfficiency4] = ACTIONS(149),
    [anon_sym_PlantGrowth1] = ACTIONS(149),
    [anon_sym_PlantGrowth2] = ACTIONS(149),
    [anon_sym_PlantGrowth3] = ACTIONS(149),
    [anon_sym_PlantGrowth4] = ACTIONS(149),
    [anon_sym_PlantHash1] = ACTIONS(149),
    [anon_sym_PlantHash2] = ACTIONS(149),
    [anon_sym_PlantHash3] = ACTIONS(149),
    [anon_sym_PlantHash4] = ACTIONS(149),
    [anon_sym_PlantHealth1] = ACTIONS(149),
    [anon_sym_PlantHealth2] = ACTIONS(149),
    [anon_sym_PlantHealth3] = ACTIONS(149),
    [anon_sym_PlantHealth4] = ACTIONS(149),
    [anon_sym_PositionX] = ACTIONS(149),
    [anon_sym_PositionY] = ACTIONS(149),
    [anon_sym_PositionZ] = ACTIONS(149),
    [anon_sym_Power] = ACTIONS(149),
    [anon_sym_PowerActual] = ACTIONS(149),
    [anon_sym_PowerGeneration] = ACTIONS(149),
    [anon_sym_PowerPotential] = ACTIONS(149),
    [anon_sym_PowerRequired] = ACTIONS(149),
    [anon_sym_PrefabHash] = ACTIONS(149),
    [anon_sym_Pressure] = ACTIONS(149),
    [anon_sym_PressureEfficiency] = ACTIONS(149),
    [anon_sym_PressureExternal] = ACTIONS(149),
    [anon_sym_PressureInput] = ACTIONS(149),
    [anon_sym_PressureInput2] = ACTIONS(149),
    [anon_sym_PressureInternal] = ACTIONS(149),
    [anon_sym_PressureOutput] = ACTIONS(149),
    [anon_sym_PressureOutput2] = ACTIONS(149),
    [anon_sym_PressureSetting] = ACTIONS(149),
    [anon_sym_Progress] = ACTIONS(149),
    [anon_sym_Quantity] = ACTIONS(149),
    [anon_sym_Ratio] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxide] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidCarbonDioxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidHydrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogen] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygen] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutant] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatiles] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioLiquidVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrogen] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput] = ACTIONS(149),
    [anon_sym_RatioNitrogenInput2] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput] = ACTIONS(149),
    [anon_sym_RatioNitrogenOutput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxide] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideInput2] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput] = ACTIONS(149),
    [anon_sym_RatioNitrousOxideOutput2] = ACTIONS(149),
    [anon_sym_RatioOxygen] = ACTIONS(149),
    [anon_sym_RatioOxygenInput] = ACTIONS(149),
    [anon_sym_RatioOxygenInput2] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput] = ACTIONS(149),
    [anon_sym_RatioOxygenOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutant] = ACTIONS(149),
    [anon_sym_RatioPollutantInput] = ACTIONS(149),
    [anon_sym_RatioPollutantInput2] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput] = ACTIONS(149),
    [anon_sym_RatioPollutantOutput2] = ACTIONS(149),
    [anon_sym_RatioPollutedWater] = ACTIONS(149),
    [anon_sym_RatioSteam] = ACTIONS(149),
    [anon_sym_RatioSteamInput] = ACTIONS(149),
    [anon_sym_RatioSteamInput2] = ACTIONS(149),
    [anon_sym_RatioSteamOutput] = ACTIONS(149),
    [anon_sym_RatioSteamOutput2] = ACTIONS(149),
    [anon_sym_RatioVolatiles] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput] = ACTIONS(149),
    [anon_sym_RatioVolatilesInput2] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput] = ACTIONS(149),
    [anon_sym_RatioVolatilesOutput2] = ACTIONS(149),
    [anon_sym_RatioWater] = ACTIONS(149),
    [anon_sym_RatioWaterInput] = ACTIONS(149),
    [anon_sym_RatioWaterInput2] = ACTIONS(149),
    [anon_sym_RatioWaterOutput] = ACTIONS(149),
    [anon_sym_RatioWaterOutput2] = ACTIONS(149),
    [anon_sym_ReEntryAltitude] = ACTIONS(149),
    [anon_sym_Reagents] = ACTIONS(149),
    [anon_sym_RecipeHash] = ACTIONS(149),
    [anon_sym_ReferenceId] = ACTIONS(149),
    [anon_sym_RequestHash] = ACTIONS(149),
    [anon_sym_RequiredPower] = ACTIONS(149),
    [anon_sym_ReturnFuelCost] = ACTIONS(149),
    [anon_sym_Richness] = ACTIONS(149),
    [anon_sym_Rpm] = ACTIONS(149),
    [anon_sym_SemiMajorAxis] = ACTIONS(149),
    [anon_sym_Setting] = ACTIONS(149),
    [anon_sym_SettingInput] = ACTIONS(149),
    [anon_sym_SettingInputHash] = ACTIONS(149),
    [anon_sym_SettingOutput] = ACTIONS(149),
    [anon_sym_SettingOutputHash] = ACTIONS(149),
    [anon_sym_SignalID] = ACTIONS(149),
    [anon_sym_SignalStrength] = ACTIONS(149),
    [anon_sym_Sites] = ACTIONS(149),
    [anon_sym_Size] = ACTIONS(149),
    [anon_sym_SizeX] = ACTIONS(149),
    [anon_sym_SizeY] = ACTIONS(149),
    [anon_sym_SizeZ] = ACTIONS(149),
    [anon_sym_SolarAngle] = ACTIONS(149),
    [anon_sym_SolarConstant] = ACTIONS(149),
    [anon_sym_SolarIrradiance] = ACTIONS(149),
    [anon_sym_SoundAlert] = ACTIONS(149),
    [anon_sym_Stress] = ACTIONS(149),
    [anon_sym_Survey] = ACTIONS(149),
    [anon_sym_TargetPadIndex] = ACTIONS(149),
    [anon_sym_TargetX] = ACTIONS(149),
    [anon_sym_TargetY] = ACTIONS(149),
    [anon_sym_TargetZ] = ACTIONS(149),
    [anon_sym_Temperature] = ACTIONS(149),
    [anon_sym_TemperatureDifferentialEfficiency] = ACTIONS(149),
    [anon_sym_TemperatureExternal] = ACTIONS(149),
    [anon_sym_TemperatureInput] = ACTIONS(149),
    [anon_sym_TemperatureInput2] = ACTIONS(149),
    [anon_sym_TemperatureOutput] = ACTIONS(149),
    [anon_sym_TemperatureOutput2] = ACTIONS(149),
    [anon_sym_TemperatureSetting] = ACTIONS(149),
    [anon_sym_Throttle] = ACTIONS(149),
    [anon_sym_Thrust] = ACTIONS(149),
    [anon_sym_ThrustToWeight] = ACTIONS(149),
    [anon_sym_Time] = ACTIONS(149),
    [anon_sym_TimeToDestination] = ACTIONS(149),
    [anon_sym_TotalMoles] = ACTIONS(149),
    [anon_sym_TotalMolesInput] = ACTIONS(149),
    [anon_sym_TotalMolesInput2] = ACTIONS(149),
    [anon_sym_TotalMolesOutput] = ACTIONS(149),
    [anon_sym_TotalMolesOutput2] = ACTIONS(149),
    [anon_sym_TotalQuantity] = ACTIONS(149),
    [anon_sym_TrueAnomaly] = ACTIONS(149),
    [anon_sym_Unknown] = ACTIONS(149),
    [anon_sym_VelocityMagnitude] = ACTIONS(149),
    [anon_sym_VelocityRelativeX] = ACTIONS(149),
    [anon_sym_VelocityRelativeY] = ACTIONS(149),
    [anon_sym_VelocityRelativeZ] = ACTIONS(149),
    [anon_sym_VelocityX] = ACTIONS(149),
    [anon_sym_VelocityY] = ACTIONS(149),
    [anon_sym_VelocityZ] = ACTIONS(149),
    [anon_sym_Vertical] = ACTIONS(149),
    [anon_sym_VerticalRatio] = ACTIONS(149),
    [anon_sym_Volume] = ACTIONS(149),
    [anon_sym_VolumeOfLiquid] = ACTIONS(149),
    [anon_sym_WattsReachingContact] = ACTIONS(149),
    [anon_sym_Weight] = ACTIONS(149),
    [anon_sym_WorkingGasEfficiency] = ACTIONS(149),
    [anon_sym_ChargeRatio] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(149),
    [anon_sym_Damage] = ACTIONS(149),
    [anon_sym_Efficiency] = ACTIONS(149),
    [anon_sym_FilterType] = ACTIONS(149),
    [anon_sym_Growth] = ACTIONS(149),
    [anon_sym_Health] = ACTIONS(149),
    [anon_sym_Mature] = ACTIONS(149),
    [anon_sym_MaxQuantity] = ACTIONS(149),
    [anon_sym_OccupantHash] = ACTIONS(149),
    [anon_sym_Occupied] = ACTIONS(149),
    [anon_sym_PressureAir] = ACTIONS(149),
    [anon_sym_PressureWaste] = ACTIONS(149),
    [anon_sym_Seeding] = ACTIONS(149),
    [anon_sym_SortingClass] = ACTIONS(149),
    [anon_sym_Average] = ACTIONS(149),
    [anon_sym_Minimum] = ACTIONS(149),
    [anon_sym_Sum] = ACTIONS(149),
    [anon_sym_Contents] = ACTIONS(149),
    [anon_sym_Recipe] = ACTIONS(149),
    [anon_sym_Required] = ACTIONS(149),
    [anon_sym_TotalContents] = ACTIONS(149),
    [sym_enum] = ACTIONS(151),
  },
  [22] = {
    [sym_line] = STATE(25),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(28),
    [sym_comment] = STATE(32),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(153),
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
    [sym_line] = STATE(25),
    [sym_label] = STATE(29),
    [sym_newline] = STATE(28),
    [sym_comment] = STATE(32),
    [sym_instruction] = STATE(29),
    [sym_operation] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(166),
    [anon_sym_abs] = ACTIONS(169),
    [anon_sym_acos] = ACTIONS(169),
    [anon_sym_add] = ACTIONS(169),
    [anon_sym_alias] = ACTIONS(169),
    [anon_sym_and] = ACTIONS(169),
    [anon_sym_asin] = ACTIONS(169),
    [anon_sym_atan] = ACTIONS(169),
    [anon_sym_atan2] = ACTIONS(169),
    [anon_sym_bap] = ACTIONS(169),
    [anon_sym_bapal] = ACTIONS(169),
    [anon_sym_bapz] = ACTIONS(169),
    [anon_sym_bapzal] = ACTIONS(169),
    [anon_sym_bdns] = ACTIONS(169),
    [anon_sym_bdnsal] = ACTIONS(169),
    [anon_sym_bdse] = ACTIONS(169),
    [anon_sym_bdseal] = ACTIONS(169),
    [anon_sym_beq] = ACTIONS(169),
    [anon_sym_beqal] = ACTIONS(169),
    [anon_sym_beqz] = ACTIONS(169),
    [anon_sym_beqzal] = ACTIONS(169),
    [anon_sym_bge] = ACTIONS(169),
    [anon_sym_bgeal] = ACTIONS(169),
    [anon_sym_bgez] = ACTIONS(169),
    [anon_sym_bgezal] = ACTIONS(169),
    [anon_sym_bgt] = ACTIONS(169),
    [anon_sym_bgtal] = ACTIONS(169),
    [anon_sym_bgtz] = ACTIONS(169),
    [anon_sym_bgtzal] = ACTIONS(169),
    [anon_sym_ble] = ACTIONS(169),
    [anon_sym_bleal] = ACTIONS(169),
    [anon_sym_blez] = ACTIONS(169),
    [anon_sym_blezal] = ACTIONS(169),
    [anon_sym_blt] = ACTIONS(169),
    [anon_sym_bltal] = ACTIONS(169),
    [anon_sym_bltz] = ACTIONS(169),
    [anon_sym_bltzal] = ACTIONS(169),
    [anon_sym_bna] = ACTIONS(169),
    [anon_sym_bnaal] = ACTIONS(169),
    [anon_sym_bnan] = ACTIONS(169),
    [anon_sym_bnaz] = ACTIONS(169),
    [anon_sym_bnazal] = ACTIONS(169),
    [anon_sym_bne] = ACTIONS(169),
    [anon_sym_bneal] = ACTIONS(169),
    [anon_sym_bnez] = ACTIONS(169),
    [anon_sym_bnezal] = ACTIONS(169),
    [anon_sym_brap] = ACTIONS(169),
    [anon_sym_brapz] = ACTIONS(169),
    [anon_sym_brdns] = ACTIONS(169),
    [anon_sym_brdse] = ACTIONS(169),
    [anon_sym_breq] = ACTIONS(169),
    [anon_sym_breqz] = ACTIONS(169),
    [anon_sym_brge] = ACTIONS(169),
    [anon_sym_brgez] = ACTIONS(169),
    [anon_sym_brgt] = ACTIONS(169),
    [anon_sym_brgtz] = ACTIONS(169),
    [anon_sym_brle] = ACTIONS(169),
    [anon_sym_brlez] = ACTIONS(169),
    [anon_sym_brlt] = ACTIONS(169),
    [anon_sym_brltz] = ACTIONS(169),
    [anon_sym_brna] = ACTIONS(169),
    [anon_sym_brnan] = ACTIONS(169),
    [anon_sym_brnaz] = ACTIONS(169),
    [anon_sym_brne] = ACTIONS(169),
    [anon_sym_brnez] = ACTIONS(169),
    [anon_sym_ceil] = ACTIONS(169),
    [anon_sym_cos] = ACTIONS(169),
    [anon_sym_define] = ACTIONS(169),
    [anon_sym_div] = ACTIONS(169),
    [anon_sym_exp] = ACTIONS(169),
    [anon_sym_floor] = ACTIONS(169),
    [anon_sym_get] = ACTIONS(169),
    [anon_sym_getd] = ACTIONS(169),
    [anon_sym_hcf] = ACTIONS(169),
    [anon_sym_j] = ACTIONS(169),
    [anon_sym_jal] = ACTIONS(169),
    [anon_sym_jr] = ACTIONS(169),
    [anon_sym_l] = ACTIONS(169),
    [anon_sym_label] = ACTIONS(169),
    [anon_sym_lb] = ACTIONS(169),
    [anon_sym_lbn] = ACTIONS(169),
    [anon_sym_lbns] = ACTIONS(169),
    [anon_sym_lbs] = ACTIONS(169),
    [anon_sym_ld] = ACTIONS(169),
    [anon_sym_log] = ACTIONS(169),
    [anon_sym_lr] = ACTIONS(169),
    [anon_sym_ls] = ACTIONS(169),
    [anon_sym_max] = ACTIONS(169),
    [anon_sym_min] = ACTIONS(169),
    [anon_sym_mod] = ACTIONS(169),
    [anon_sym_move] = ACTIONS(169),
    [anon_sym_mul] = ACTIONS(169),
    [anon_sym_nor] = ACTIONS(169),
    [anon_sym_not] = ACTIONS(169),
    [anon_sym_or] = ACTIONS(169),
    [anon_sym_peek] = ACTIONS(169),
    [anon_sym_poke] = ACTIONS(169),
    [anon_sym_pop] = ACTIONS(169),
    [anon_sym_push] = ACTIONS(169),
    [anon_sym_put] = ACTIONS(169),
    [anon_sym_putd] = ACTIONS(169),
    [anon_sym_rand] = ACTIONS(169),
    [anon_sym_round] = ACTIONS(169),
    [anon_sym_s] = ACTIONS(169),
    [anon_sym_sap] = ACTIONS(169),
    [anon_sym_sapz] = ACTIONS(169),
    [anon_sym_sb] = ACTIONS(169),
    [anon_sym_sbn] = ACTIONS(169),
    [anon_sym_sbs] = ACTIONS(169),
    [anon_sym_sd] = ACTIONS(169),
    [anon_sym_sdns] = ACTIONS(169),
    [anon_sym_sdse] = ACTIONS(169),
    [anon_sym_select] = ACTIONS(169),
    [anon_sym_seq] = ACTIONS(169),
    [anon_sym_seqz] = ACTIONS(169),
    [anon_sym_sge] = ACTIONS(169),
    [anon_sym_sgez] = ACTIONS(169),
    [anon_sym_sgt] = ACTIONS(169),
    [anon_sym_sgtz] = ACTIONS(169),
    [anon_sym_sin] = ACTIONS(169),
    [anon_sym_sla] = ACTIONS(169),
    [anon_sym_sle] = ACTIONS(169),
    [anon_sym_sleep] = ACTIONS(169),
    [anon_sym_slez] = ACTIONS(169),
    [anon_sym_sll] = ACTIONS(169),
    [anon_sym_slt] = ACTIONS(169),
    [anon_sym_sltz] = ACTIONS(169),
    [anon_sym_sna] = ACTIONS(169),
    [anon_sym_snan] = ACTIONS(169),
    [anon_sym_snanz] = ACTIONS(169),
    [anon_sym_snaz] = ACTIONS(169),
    [anon_sym_sne] = ACTIONS(169),
    [anon_sym_snez] = ACTIONS(169),
    [anon_sym_sqrt] = ACTIONS(169),
    [anon_sym_sra] = ACTIONS(169),
    [anon_sym_srl] = ACTIONS(169),
    [anon_sym_ss] = ACTIONS(169),
    [anon_sym_sub] = ACTIONS(169),
    [anon_sym_tan] = ACTIONS(169),
    [anon_sym_trunc] = ACTIONS(169),
    [anon_sym_xor] = ACTIONS(169),
    [anon_sym_yield] = ACTIONS(169),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(174),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(172),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(178),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(176),
    [anon_sym_abs] = ACTIONS(178),
    [anon_sym_acos] = ACTIONS(178),
    [anon_sym_add] = ACTIONS(178),
    [anon_sym_alias] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_asin] = ACTIONS(178),
    [anon_sym_atan] = ACTIONS(178),
    [anon_sym_atan2] = ACTIONS(178),
    [anon_sym_bap] = ACTIONS(178),
    [anon_sym_bapal] = ACTIONS(178),
    [anon_sym_bapz] = ACTIONS(178),
    [anon_sym_bapzal] = ACTIONS(178),
    [anon_sym_bdns] = ACTIONS(178),
    [anon_sym_bdnsal] = ACTIONS(178),
    [anon_sym_bdse] = ACTIONS(178),
    [anon_sym_bdseal] = ACTIONS(178),
    [anon_sym_beq] = ACTIONS(178),
    [anon_sym_beqal] = ACTIONS(178),
    [anon_sym_beqz] = ACTIONS(178),
    [anon_sym_beqzal] = ACTIONS(178),
    [anon_sym_bge] = ACTIONS(178),
    [anon_sym_bgeal] = ACTIONS(178),
    [anon_sym_bgez] = ACTIONS(178),
    [anon_sym_bgezal] = ACTIONS(178),
    [anon_sym_bgt] = ACTIONS(178),
    [anon_sym_bgtal] = ACTIONS(178),
    [anon_sym_bgtz] = ACTIONS(178),
    [anon_sym_bgtzal] = ACTIONS(178),
    [anon_sym_ble] = ACTIONS(178),
    [anon_sym_bleal] = ACTIONS(178),
    [anon_sym_blez] = ACTIONS(178),
    [anon_sym_blezal] = ACTIONS(178),
    [anon_sym_blt] = ACTIONS(178),
    [anon_sym_bltal] = ACTIONS(178),
    [anon_sym_bltz] = ACTIONS(178),
    [anon_sym_bltzal] = ACTIONS(178),
    [anon_sym_bna] = ACTIONS(178),
    [anon_sym_bnaal] = ACTIONS(178),
    [anon_sym_bnan] = ACTIONS(178),
    [anon_sym_bnaz] = ACTIONS(178),
    [anon_sym_bnazal] = ACTIONS(178),
    [anon_sym_bne] = ACTIONS(178),
    [anon_sym_bneal] = ACTIONS(178),
    [anon_sym_bnez] = ACTIONS(178),
    [anon_sym_bnezal] = ACTIONS(178),
    [anon_sym_brap] = ACTIONS(178),
    [anon_sym_brapz] = ACTIONS(178),
    [anon_sym_brdns] = ACTIONS(178),
    [anon_sym_brdse] = ACTIONS(178),
    [anon_sym_breq] = ACTIONS(178),
    [anon_sym_breqz] = ACTIONS(178),
    [anon_sym_brge] = ACTIONS(178),
    [anon_sym_brgez] = ACTIONS(178),
    [anon_sym_brgt] = ACTIONS(178),
    [anon_sym_brgtz] = ACTIONS(178),
    [anon_sym_brle] = ACTIONS(178),
    [anon_sym_brlez] = ACTIONS(178),
    [anon_sym_brlt] = ACTIONS(178),
    [anon_sym_brltz] = ACTIONS(178),
    [anon_sym_brna] = ACTIONS(178),
    [anon_sym_brnan] = ACTIONS(178),
    [anon_sym_brnaz] = ACTIONS(178),
    [anon_sym_brne] = ACTIONS(178),
    [anon_sym_brnez] = ACTIONS(178),
    [anon_sym_ceil] = ACTIONS(178),
    [anon_sym_cos] = ACTIONS(178),
    [anon_sym_define] = ACTIONS(178),
    [anon_sym_div] = ACTIONS(178),
    [anon_sym_exp] = ACTIONS(178),
    [anon_sym_floor] = ACTIONS(178),
    [anon_sym_get] = ACTIONS(178),
    [anon_sym_getd] = ACTIONS(178),
    [anon_sym_hcf] = ACTIONS(178),
    [anon_sym_j] = ACTIONS(178),
    [anon_sym_jal] = ACTIONS(178),
    [anon_sym_jr] = ACTIONS(178),
    [anon_sym_l] = ACTIONS(178),
    [anon_sym_label] = ACTIONS(178),
    [anon_sym_lb] = ACTIONS(178),
    [anon_sym_lbn] = ACTIONS(178),
    [anon_sym_lbns] = ACTIONS(178),
    [anon_sym_lbs] = ACTIONS(178),
    [anon_sym_ld] = ACTIONS(178),
    [anon_sym_log] = ACTIONS(178),
    [anon_sym_lr] = ACTIONS(178),
    [anon_sym_ls] = ACTIONS(178),
    [anon_sym_max] = ACTIONS(178),
    [anon_sym_min] = ACTIONS(178),
    [anon_sym_mod] = ACTIONS(178),
    [anon_sym_move] = ACTIONS(178),
    [anon_sym_mul] = ACTIONS(178),
    [anon_sym_nor] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_peek] = ACTIONS(178),
    [anon_sym_poke] = ACTIONS(178),
    [anon_sym_pop] = ACTIONS(178),
    [anon_sym_push] = ACTIONS(178),
    [anon_sym_put] = ACTIONS(178),
    [anon_sym_putd] = ACTIONS(178),
    [anon_sym_rand] = ACTIONS(178),
    [anon_sym_round] = ACTIONS(178),
    [anon_sym_s] = ACTIONS(178),
    [anon_sym_sap] = ACTIONS(178),
    [anon_sym_sapz] = ACTIONS(178),
    [anon_sym_sb] = ACTIONS(178),
    [anon_sym_sbn] = ACTIONS(178),
    [anon_sym_sbs] = ACTIONS(178),
    [anon_sym_sd] = ACTIONS(178),
    [anon_sym_sdns] = ACTIONS(178),
    [anon_sym_sdse] = ACTIONS(178),
    [anon_sym_select] = ACTIONS(178),
    [anon_sym_seq] = ACTIONS(178),
    [anon_sym_seqz] = ACTIONS(178),
    [anon_sym_sge] = ACTIONS(178),
    [anon_sym_sgez] = ACTIONS(178),
    [anon_sym_sgt] = ACTIONS(178),
    [anon_sym_sgtz] = ACTIONS(178),
    [anon_sym_sin] = ACTIONS(178),
    [anon_sym_sla] = ACTIONS(178),
    [anon_sym_sle] = ACTIONS(178),
    [anon_sym_sleep] = ACTIONS(178),
    [anon_sym_slez] = ACTIONS(178),
    [anon_sym_sll] = ACTIONS(178),
    [anon_sym_slt] = ACTIONS(178),
    [anon_sym_sltz] = ACTIONS(178),
    [anon_sym_sna] = ACTIONS(178),
    [anon_sym_snan] = ACTIONS(178),
    [anon_sym_snanz] = ACTIONS(178),
    [anon_sym_snaz] = ACTIONS(178),
    [anon_sym_sne] = ACTIONS(178),
    [anon_sym_snez] = ACTIONS(178),
    [anon_sym_sqrt] = ACTIONS(178),
    [anon_sym_sra] = ACTIONS(178),
    [anon_sym_srl] = ACTIONS(178),
    [anon_sym_ss] = ACTIONS(178),
    [anon_sym_sub] = ACTIONS(178),
    [anon_sym_tan] = ACTIONS(178),
    [anon_sym_trunc] = ACTIONS(178),
    [anon_sym_xor] = ACTIONS(178),
    [anon_sym_yield] = ACTIONS(178),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(182),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(180),
    [anon_sym_abs] = ACTIONS(182),
    [anon_sym_acos] = ACTIONS(182),
    [anon_sym_add] = ACTIONS(182),
    [anon_sym_alias] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_asin] = ACTIONS(182),
    [anon_sym_atan] = ACTIONS(182),
    [anon_sym_atan2] = ACTIONS(182),
    [anon_sym_bap] = ACTIONS(182),
    [anon_sym_bapal] = ACTIONS(182),
    [anon_sym_bapz] = ACTIONS(182),
    [anon_sym_bapzal] = ACTIONS(182),
    [anon_sym_bdns] = ACTIONS(182),
    [anon_sym_bdnsal] = ACTIONS(182),
    [anon_sym_bdse] = ACTIONS(182),
    [anon_sym_bdseal] = ACTIONS(182),
    [anon_sym_beq] = ACTIONS(182),
    [anon_sym_beqal] = ACTIONS(182),
    [anon_sym_beqz] = ACTIONS(182),
    [anon_sym_beqzal] = ACTIONS(182),
    [anon_sym_bge] = ACTIONS(182),
    [anon_sym_bgeal] = ACTIONS(182),
    [anon_sym_bgez] = ACTIONS(182),
    [anon_sym_bgezal] = ACTIONS(182),
    [anon_sym_bgt] = ACTIONS(182),
    [anon_sym_bgtal] = ACTIONS(182),
    [anon_sym_bgtz] = ACTIONS(182),
    [anon_sym_bgtzal] = ACTIONS(182),
    [anon_sym_ble] = ACTIONS(182),
    [anon_sym_bleal] = ACTIONS(182),
    [anon_sym_blez] = ACTIONS(182),
    [anon_sym_blezal] = ACTIONS(182),
    [anon_sym_blt] = ACTIONS(182),
    [anon_sym_bltal] = ACTIONS(182),
    [anon_sym_bltz] = ACTIONS(182),
    [anon_sym_bltzal] = ACTIONS(182),
    [anon_sym_bna] = ACTIONS(182),
    [anon_sym_bnaal] = ACTIONS(182),
    [anon_sym_bnan] = ACTIONS(182),
    [anon_sym_bnaz] = ACTIONS(182),
    [anon_sym_bnazal] = ACTIONS(182),
    [anon_sym_bne] = ACTIONS(182),
    [anon_sym_bneal] = ACTIONS(182),
    [anon_sym_bnez] = ACTIONS(182),
    [anon_sym_bnezal] = ACTIONS(182),
    [anon_sym_brap] = ACTIONS(182),
    [anon_sym_brapz] = ACTIONS(182),
    [anon_sym_brdns] = ACTIONS(182),
    [anon_sym_brdse] = ACTIONS(182),
    [anon_sym_breq] = ACTIONS(182),
    [anon_sym_breqz] = ACTIONS(182),
    [anon_sym_brge] = ACTIONS(182),
    [anon_sym_brgez] = ACTIONS(182),
    [anon_sym_brgt] = ACTIONS(182),
    [anon_sym_brgtz] = ACTIONS(182),
    [anon_sym_brle] = ACTIONS(182),
    [anon_sym_brlez] = ACTIONS(182),
    [anon_sym_brlt] = ACTIONS(182),
    [anon_sym_brltz] = ACTIONS(182),
    [anon_sym_brna] = ACTIONS(182),
    [anon_sym_brnan] = ACTIONS(182),
    [anon_sym_brnaz] = ACTIONS(182),
    [anon_sym_brne] = ACTIONS(182),
    [anon_sym_brnez] = ACTIONS(182),
    [anon_sym_ceil] = ACTIONS(182),
    [anon_sym_cos] = ACTIONS(182),
    [anon_sym_define] = ACTIONS(182),
    [anon_sym_div] = ACTIONS(182),
    [anon_sym_exp] = ACTIONS(182),
    [anon_sym_floor] = ACTIONS(182),
    [anon_sym_get] = ACTIONS(182),
    [anon_sym_getd] = ACTIONS(182),
    [anon_sym_hcf] = ACTIONS(182),
    [anon_sym_j] = ACTIONS(182),
    [anon_sym_jal] = ACTIONS(182),
    [anon_sym_jr] = ACTIONS(182),
    [anon_sym_l] = ACTIONS(182),
    [anon_sym_label] = ACTIONS(182),
    [anon_sym_lb] = ACTIONS(182),
    [anon_sym_lbn] = ACTIONS(182),
    [anon_sym_lbns] = ACTIONS(182),
    [anon_sym_lbs] = ACTIONS(182),
    [anon_sym_ld] = ACTIONS(182),
    [anon_sym_log] = ACTIONS(182),
    [anon_sym_lr] = ACTIONS(182),
    [anon_sym_ls] = ACTIONS(182),
    [anon_sym_max] = ACTIONS(182),
    [anon_sym_min] = ACTIONS(182),
    [anon_sym_mod] = ACTIONS(182),
    [anon_sym_move] = ACTIONS(182),
    [anon_sym_mul] = ACTIONS(182),
    [anon_sym_nor] = ACTIONS(182),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_peek] = ACTIONS(182),
    [anon_sym_poke] = ACTIONS(182),
    [anon_sym_pop] = ACTIONS(182),
    [anon_sym_push] = ACTIONS(182),
    [anon_sym_put] = ACTIONS(182),
    [anon_sym_putd] = ACTIONS(182),
    [anon_sym_rand] = ACTIONS(182),
    [anon_sym_round] = ACTIONS(182),
    [anon_sym_s] = ACTIONS(182),
    [anon_sym_sap] = ACTIONS(182),
    [anon_sym_sapz] = ACTIONS(182),
    [anon_sym_sb] = ACTIONS(182),
    [anon_sym_sbn] = ACTIONS(182),
    [anon_sym_sbs] = ACTIONS(182),
    [anon_sym_sd] = ACTIONS(182),
    [anon_sym_sdns] = ACTIONS(182),
    [anon_sym_sdse] = ACTIONS(182),
    [anon_sym_select] = ACTIONS(182),
    [anon_sym_seq] = ACTIONS(182),
    [anon_sym_seqz] = ACTIONS(182),
    [anon_sym_sge] = ACTIONS(182),
    [anon_sym_sgez] = ACTIONS(182),
    [anon_sym_sgt] = ACTIONS(182),
    [anon_sym_sgtz] = ACTIONS(182),
    [anon_sym_sin] = ACTIONS(182),
    [anon_sym_sla] = ACTIONS(182),
    [anon_sym_sle] = ACTIONS(182),
    [anon_sym_sleep] = ACTIONS(182),
    [anon_sym_slez] = ACTIONS(182),
    [anon_sym_sll] = ACTIONS(182),
    [anon_sym_slt] = ACTIONS(182),
    [anon_sym_sltz] = ACTIONS(182),
    [anon_sym_sna] = ACTIONS(182),
    [anon_sym_snan] = ACTIONS(182),
    [anon_sym_snanz] = ACTIONS(182),
    [anon_sym_snaz] = ACTIONS(182),
    [anon_sym_sne] = ACTIONS(182),
    [anon_sym_snez] = ACTIONS(182),
    [anon_sym_sqrt] = ACTIONS(182),
    [anon_sym_sra] = ACTIONS(182),
    [anon_sym_srl] = ACTIONS(182),
    [anon_sym_ss] = ACTIONS(182),
    [anon_sym_sub] = ACTIONS(182),
    [anon_sym_tan] = ACTIONS(182),
    [anon_sym_trunc] = ACTIONS(182),
    [anon_sym_xor] = ACTIONS(182),
    [anon_sym_yield] = ACTIONS(182),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(186),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(184),
    [anon_sym_abs] = ACTIONS(186),
    [anon_sym_acos] = ACTIONS(186),
    [anon_sym_add] = ACTIONS(186),
    [anon_sym_alias] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_asin] = ACTIONS(186),
    [anon_sym_atan] = ACTIONS(186),
    [anon_sym_atan2] = ACTIONS(186),
    [anon_sym_bap] = ACTIONS(186),
    [anon_sym_bapal] = ACTIONS(186),
    [anon_sym_bapz] = ACTIONS(186),
    [anon_sym_bapzal] = ACTIONS(186),
    [anon_sym_bdns] = ACTIONS(186),
    [anon_sym_bdnsal] = ACTIONS(186),
    [anon_sym_bdse] = ACTIONS(186),
    [anon_sym_bdseal] = ACTIONS(186),
    [anon_sym_beq] = ACTIONS(186),
    [anon_sym_beqal] = ACTIONS(186),
    [anon_sym_beqz] = ACTIONS(186),
    [anon_sym_beqzal] = ACTIONS(186),
    [anon_sym_bge] = ACTIONS(186),
    [anon_sym_bgeal] = ACTIONS(186),
    [anon_sym_bgez] = ACTIONS(186),
    [anon_sym_bgezal] = ACTIONS(186),
    [anon_sym_bgt] = ACTIONS(186),
    [anon_sym_bgtal] = ACTIONS(186),
    [anon_sym_bgtz] = ACTIONS(186),
    [anon_sym_bgtzal] = ACTIONS(186),
    [anon_sym_ble] = ACTIONS(186),
    [anon_sym_bleal] = ACTIONS(186),
    [anon_sym_blez] = ACTIONS(186),
    [anon_sym_blezal] = ACTIONS(186),
    [anon_sym_blt] = ACTIONS(186),
    [anon_sym_bltal] = ACTIONS(186),
    [anon_sym_bltz] = ACTIONS(186),
    [anon_sym_bltzal] = ACTIONS(186),
    [anon_sym_bna] = ACTIONS(186),
    [anon_sym_bnaal] = ACTIONS(186),
    [anon_sym_bnan] = ACTIONS(186),
    [anon_sym_bnaz] = ACTIONS(186),
    [anon_sym_bnazal] = ACTIONS(186),
    [anon_sym_bne] = ACTIONS(186),
    [anon_sym_bneal] = ACTIONS(186),
    [anon_sym_bnez] = ACTIONS(186),
    [anon_sym_bnezal] = ACTIONS(186),
    [anon_sym_brap] = ACTIONS(186),
    [anon_sym_brapz] = ACTIONS(186),
    [anon_sym_brdns] = ACTIONS(186),
    [anon_sym_brdse] = ACTIONS(186),
    [anon_sym_breq] = ACTIONS(186),
    [anon_sym_breqz] = ACTIONS(186),
    [anon_sym_brge] = ACTIONS(186),
    [anon_sym_brgez] = ACTIONS(186),
    [anon_sym_brgt] = ACTIONS(186),
    [anon_sym_brgtz] = ACTIONS(186),
    [anon_sym_brle] = ACTIONS(186),
    [anon_sym_brlez] = ACTIONS(186),
    [anon_sym_brlt] = ACTIONS(186),
    [anon_sym_brltz] = ACTIONS(186),
    [anon_sym_brna] = ACTIONS(186),
    [anon_sym_brnan] = ACTIONS(186),
    [anon_sym_brnaz] = ACTIONS(186),
    [anon_sym_brne] = ACTIONS(186),
    [anon_sym_brnez] = ACTIONS(186),
    [anon_sym_ceil] = ACTIONS(186),
    [anon_sym_cos] = ACTIONS(186),
    [anon_sym_define] = ACTIONS(186),
    [anon_sym_div] = ACTIONS(186),
    [anon_sym_exp] = ACTIONS(186),
    [anon_sym_floor] = ACTIONS(186),
    [anon_sym_get] = ACTIONS(186),
    [anon_sym_getd] = ACTIONS(186),
    [anon_sym_hcf] = ACTIONS(186),
    [anon_sym_j] = ACTIONS(186),
    [anon_sym_jal] = ACTIONS(186),
    [anon_sym_jr] = ACTIONS(186),
    [anon_sym_l] = ACTIONS(186),
    [anon_sym_label] = ACTIONS(186),
    [anon_sym_lb] = ACTIONS(186),
    [anon_sym_lbn] = ACTIONS(186),
    [anon_sym_lbns] = ACTIONS(186),
    [anon_sym_lbs] = ACTIONS(186),
    [anon_sym_ld] = ACTIONS(186),
    [anon_sym_log] = ACTIONS(186),
    [anon_sym_lr] = ACTIONS(186),
    [anon_sym_ls] = ACTIONS(186),
    [anon_sym_max] = ACTIONS(186),
    [anon_sym_min] = ACTIONS(186),
    [anon_sym_mod] = ACTIONS(186),
    [anon_sym_move] = ACTIONS(186),
    [anon_sym_mul] = ACTIONS(186),
    [anon_sym_nor] = ACTIONS(186),
    [anon_sym_not] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_peek] = ACTIONS(186),
    [anon_sym_poke] = ACTIONS(186),
    [anon_sym_pop] = ACTIONS(186),
    [anon_sym_push] = ACTIONS(186),
    [anon_sym_put] = ACTIONS(186),
    [anon_sym_putd] = ACTIONS(186),
    [anon_sym_rand] = ACTIONS(186),
    [anon_sym_round] = ACTIONS(186),
    [anon_sym_s] = ACTIONS(186),
    [anon_sym_sap] = ACTIONS(186),
    [anon_sym_sapz] = ACTIONS(186),
    [anon_sym_sb] = ACTIONS(186),
    [anon_sym_sbn] = ACTIONS(186),
    [anon_sym_sbs] = ACTIONS(186),
    [anon_sym_sd] = ACTIONS(186),
    [anon_sym_sdns] = ACTIONS(186),
    [anon_sym_sdse] = ACTIONS(186),
    [anon_sym_select] = ACTIONS(186),
    [anon_sym_seq] = ACTIONS(186),
    [anon_sym_seqz] = ACTIONS(186),
    [anon_sym_sge] = ACTIONS(186),
    [anon_sym_sgez] = ACTIONS(186),
    [anon_sym_sgt] = ACTIONS(186),
    [anon_sym_sgtz] = ACTIONS(186),
    [anon_sym_sin] = ACTIONS(186),
    [anon_sym_sla] = ACTIONS(186),
    [anon_sym_sle] = ACTIONS(186),
    [anon_sym_sleep] = ACTIONS(186),
    [anon_sym_slez] = ACTIONS(186),
    [anon_sym_sll] = ACTIONS(186),
    [anon_sym_slt] = ACTIONS(186),
    [anon_sym_sltz] = ACTIONS(186),
    [anon_sym_sna] = ACTIONS(186),
    [anon_sym_snan] = ACTIONS(186),
    [anon_sym_snanz] = ACTIONS(186),
    [anon_sym_snaz] = ACTIONS(186),
    [anon_sym_sne] = ACTIONS(186),
    [anon_sym_snez] = ACTIONS(186),
    [anon_sym_sqrt] = ACTIONS(186),
    [anon_sym_sra] = ACTIONS(186),
    [anon_sym_srl] = ACTIONS(186),
    [anon_sym_ss] = ACTIONS(186),
    [anon_sym_sub] = ACTIONS(186),
    [anon_sym_tan] = ACTIONS(186),
    [anon_sym_trunc] = ACTIONS(186),
    [anon_sym_xor] = ACTIONS(186),
    [anon_sym_yield] = ACTIONS(186),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_identifier] = ACTIONS(190),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CR_LF] = ACTIONS(188),
    [anon_sym_CR] = ACTIONS(190),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(188),
    [anon_sym_abs] = ACTIONS(190),
    [anon_sym_acos] = ACTIONS(190),
    [anon_sym_add] = ACTIONS(190),
    [anon_sym_alias] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_asin] = ACTIONS(190),
    [anon_sym_atan] = ACTIONS(190),
    [anon_sym_atan2] = ACTIONS(190),
    [anon_sym_bap] = ACTIONS(190),
    [anon_sym_bapal] = ACTIONS(190),
    [anon_sym_bapz] = ACTIONS(190),
    [anon_sym_bapzal] = ACTIONS(190),
    [anon_sym_bdns] = ACTIONS(190),
    [anon_sym_bdnsal] = ACTIONS(190),
    [anon_sym_bdse] = ACTIONS(190),
    [anon_sym_bdseal] = ACTIONS(190),
    [anon_sym_beq] = ACTIONS(190),
    [anon_sym_beqal] = ACTIONS(190),
    [anon_sym_beqz] = ACTIONS(190),
    [anon_sym_beqzal] = ACTIONS(190),
    [anon_sym_bge] = ACTIONS(190),
    [anon_sym_bgeal] = ACTIONS(190),
    [anon_sym_bgez] = ACTIONS(190),
    [anon_sym_bgezal] = ACTIONS(190),
    [anon_sym_bgt] = ACTIONS(190),
    [anon_sym_bgtal] = ACTIONS(190),
    [anon_sym_bgtz] = ACTIONS(190),
    [anon_sym_bgtzal] = ACTIONS(190),
    [anon_sym_ble] = ACTIONS(190),
    [anon_sym_bleal] = ACTIONS(190),
    [anon_sym_blez] = ACTIONS(190),
    [anon_sym_blezal] = ACTIONS(190),
    [anon_sym_blt] = ACTIONS(190),
    [anon_sym_bltal] = ACTIONS(190),
    [anon_sym_bltz] = ACTIONS(190),
    [anon_sym_bltzal] = ACTIONS(190),
    [anon_sym_bna] = ACTIONS(190),
    [anon_sym_bnaal] = ACTIONS(190),
    [anon_sym_bnan] = ACTIONS(190),
    [anon_sym_bnaz] = ACTIONS(190),
    [anon_sym_bnazal] = ACTIONS(190),
    [anon_sym_bne] = ACTIONS(190),
    [anon_sym_bneal] = ACTIONS(190),
    [anon_sym_bnez] = ACTIONS(190),
    [anon_sym_bnezal] = ACTIONS(190),
    [anon_sym_brap] = ACTIONS(190),
    [anon_sym_brapz] = ACTIONS(190),
    [anon_sym_brdns] = ACTIONS(190),
    [anon_sym_brdse] = ACTIONS(190),
    [anon_sym_breq] = ACTIONS(190),
    [anon_sym_breqz] = ACTIONS(190),
    [anon_sym_brge] = ACTIONS(190),
    [anon_sym_brgez] = ACTIONS(190),
    [anon_sym_brgt] = ACTIONS(190),
    [anon_sym_brgtz] = ACTIONS(190),
    [anon_sym_brle] = ACTIONS(190),
    [anon_sym_brlez] = ACTIONS(190),
    [anon_sym_brlt] = ACTIONS(190),
    [anon_sym_brltz] = ACTIONS(190),
    [anon_sym_brna] = ACTIONS(190),
    [anon_sym_brnan] = ACTIONS(190),
    [anon_sym_brnaz] = ACTIONS(190),
    [anon_sym_brne] = ACTIONS(190),
    [anon_sym_brnez] = ACTIONS(190),
    [anon_sym_ceil] = ACTIONS(190),
    [anon_sym_cos] = ACTIONS(190),
    [anon_sym_define] = ACTIONS(190),
    [anon_sym_div] = ACTIONS(190),
    [anon_sym_exp] = ACTIONS(190),
    [anon_sym_floor] = ACTIONS(190),
    [anon_sym_get] = ACTIONS(190),
    [anon_sym_getd] = ACTIONS(190),
    [anon_sym_hcf] = ACTIONS(190),
    [anon_sym_j] = ACTIONS(190),
    [anon_sym_jal] = ACTIONS(190),
    [anon_sym_jr] = ACTIONS(190),
    [anon_sym_l] = ACTIONS(190),
    [anon_sym_label] = ACTIONS(190),
    [anon_sym_lb] = ACTIONS(190),
    [anon_sym_lbn] = ACTIONS(190),
    [anon_sym_lbns] = ACTIONS(190),
    [anon_sym_lbs] = ACTIONS(190),
    [anon_sym_ld] = ACTIONS(190),
    [anon_sym_log] = ACTIONS(190),
    [anon_sym_lr] = ACTIONS(190),
    [anon_sym_ls] = ACTIONS(190),
    [anon_sym_max] = ACTIONS(190),
    [anon_sym_min] = ACTIONS(190),
    [anon_sym_mod] = ACTIONS(190),
    [anon_sym_move] = ACTIONS(190),
    [anon_sym_mul] = ACTIONS(190),
    [anon_sym_nor] = ACTIONS(190),
    [anon_sym_not] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_peek] = ACTIONS(190),
    [anon_sym_poke] = ACTIONS(190),
    [anon_sym_pop] = ACTIONS(190),
    [anon_sym_push] = ACTIONS(190),
    [anon_sym_put] = ACTIONS(190),
    [anon_sym_putd] = ACTIONS(190),
    [anon_sym_rand] = ACTIONS(190),
    [anon_sym_round] = ACTIONS(190),
    [anon_sym_s] = ACTIONS(190),
    [anon_sym_sap] = ACTIONS(190),
    [anon_sym_sapz] = ACTIONS(190),
    [anon_sym_sb] = ACTIONS(190),
    [anon_sym_sbn] = ACTIONS(190),
    [anon_sym_sbs] = ACTIONS(190),
    [anon_sym_sd] = ACTIONS(190),
    [anon_sym_sdns] = ACTIONS(190),
    [anon_sym_sdse] = ACTIONS(190),
    [anon_sym_select] = ACTIONS(190),
    [anon_sym_seq] = ACTIONS(190),
    [anon_sym_seqz] = ACTIONS(190),
    [anon_sym_sge] = ACTIONS(190),
    [anon_sym_sgez] = ACTIONS(190),
    [anon_sym_sgt] = ACTIONS(190),
    [anon_sym_sgtz] = ACTIONS(190),
    [anon_sym_sin] = ACTIONS(190),
    [anon_sym_sla] = ACTIONS(190),
    [anon_sym_sle] = ACTIONS(190),
    [anon_sym_sleep] = ACTIONS(190),
    [anon_sym_slez] = ACTIONS(190),
    [anon_sym_sll] = ACTIONS(190),
    [anon_sym_slt] = ACTIONS(190),
    [anon_sym_sltz] = ACTIONS(190),
    [anon_sym_sna] = ACTIONS(190),
    [anon_sym_snan] = ACTIONS(190),
    [anon_sym_snanz] = ACTIONS(190),
    [anon_sym_snaz] = ACTIONS(190),
    [anon_sym_sne] = ACTIONS(190),
    [anon_sym_snez] = ACTIONS(190),
    [anon_sym_sqrt] = ACTIONS(190),
    [anon_sym_sra] = ACTIONS(190),
    [anon_sym_srl] = ACTIONS(190),
    [anon_sym_ss] = ACTIONS(190),
    [anon_sym_sub] = ACTIONS(190),
    [anon_sym_tan] = ACTIONS(190),
    [anon_sym_trunc] = ACTIONS(190),
    [anon_sym_xor] = ACTIONS(190),
    [anon_sym_yield] = ACTIONS(190),
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
    STATE(31), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [20] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(194), 1,
      anon_sym_CR,
    ACTIONS(192), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
  [32] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [46] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(26), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [60] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(198), 1,
      anon_sym_CR,
    ACTIONS(196), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [71] = 2,
    ACTIONS(200), 1,
      sym__whitespace,
    ACTIONS(202), 1,
      sym_preproc_string,
  [78] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [85] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(206), 1,
      sym_network_index,
  [92] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(208), 1,
      anon_sym_DQUOTE_RPAREN,
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
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(34),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(21),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_batchmode, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_batchmode, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicable, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicable, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reagentmode, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reagentmode, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicslottype, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicslottype, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logictype, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logictype, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ic10() {
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
