/*
 * operations
 */
#define O_HALT		01
#define O_NULL		02
#define O_NODUMP	03
#define O_BEG		04
#define O_END		05
#define O_CALL		06
#define O_TRACNT	07
#define O_PUSH		010
#define O_POP		011
#define O_INX4		012
#define O_SDUP		013
#define O_IF		014
#define O_TRA		015
#define O_LINO		016
#define O_GOTO		017
#define O_REL2		020
#define O_REL4		021
#define O_REL24		022
#define O_REL42		023
#define O_REL8		024
#define O_RELG		025
#define O_RELT		026
#define O_REL28		030
#define O_REL48		031
#define O_REL82		032
#define O_REL84		033
#define O_AND		034
#define O_OR		035
#define O_NOT		036
#define O_AS2		040
#define O_AS4		041
#define O_AS24		042
#define O_AS42		043
#define O_AS8		044
#define O_INX2P2	045
#define O_INX4P2	046
#define O_AS		047
#define O_AS21		050
#define O_AS41		051
#define O_AS28		052
#define O_AS48		053
#define O_OFF		054
#define O_INX2		055
#define O_NIL		056
#define O_LV		057
#define O_ADD2		060
#define O_ADD4		061
#define O_ADD24		062
#define O_ADD42		063
#define O_ADD28		064
#define O_ADD48		065
#define O_ADD82		066
#define O_ADD84		067
#define O_SUB2		070
#define O_MUL2		0100
#define O_ABS2		0110
#define O_ABS8		0112
#define O_ADD8		0114
#define O_SUB8		0115
#define O_MUL8		0116
#define O_DVD8		0117
#define O_DIV2		0120
#define O_MOD2		0130
#define O_NEG2		0140
#define O_NEG8		0142
#define O_DVD2		0160
#define O_RV1		0170
#define O_RV2		0171
#define O_RV4		0172
#define O_RV8		0173
#define O_IND1		0174
#define O_IND2		0175
#define O_CON1		0200
#define O_CON2		0201
#define O_CON4		0202
#define O_CON8		0203
#define O_RV		0204
#define O_IND		0205
#define O_CON		0206
#define O_RANG2		0210
#define O_RANG42	0211
#define O_RSNG2		0212
#define O_RSNG42	0213
#define O_RANG4		0214
#define O_RSNG4		0216
#define O_RSNG24	0217
#define O_CONC		0230
#define O_CASEBEG	0231
#define O_CASE1		0232
#define O_CASE2		0233
#define O_CASE4		0234
#define O_CASEEND	0235
#define O_CONG		0236
#define O_ORD2		0237
#define O_CASE1OP	0240
#define O_CASE2OP	0241
#define O_CASE4OP	0242
#define O_PXPBUF	0243
#define O_COUNT		0244
#define O_ADDT		0250
#define O_SUBT		0251
#define O_MULT		0252
#define O_INCT		0253
#define O_CTTOT		0254
#define O_CARD		0255
#define O_IN		0256
#define O_ASRT		0257
#define O_FOR1U		0260
#define O_FOR2U		0261
#define O_FOR4U		0262
#define O_FOR1D		0263
#define O_FOR2D		0264
#define O_FOR4D		0265
#define O_STLIM		0266
#define O_SCLCK		0267
#define O_STOI		0270
#define O_STOD		0271
#define O_ITOD		0272
#define O_ITOS		0273
#define O_BUFF		0274
#define O_WCLCK		0275
#define O_WRHEX2	0276
#define O_GET		0300
#define O_PUT		0301
#define O_MESSAGE	0302
#define O_FNIL		0303
#define O_EOF		0304
#define O_EOLN		0305
#define O_RESET		0306
#define O_REWRITE	0307
#define O_REMOVE	0310
#define O_READ4		0311
#define O_UNIT		0312
#define O_READC		0313
#define O_READ8		0314
#define O_UNITINP	0315
#define O_UNITOUT	0316
#define O_READLN	0317
#define O_WRIT2		0320
#define O_WRIT4		0321
#define O_WRITB		0322
#define O_WRITC		0323
#define O_WRIT8		0324
#define O_WRITG		0325
#define O_WRIT82	0326
#define O_WRITLN	0327
#define O_WROCT2	0330
#define O_FLUSH		0332
#define O_PACK		0333
#define O_UNPACK	0334
#define O_LLIMIT	0335
#define O_ARGC		0336
#define O_ARGV		0337
#define O_CLCK		0340
#define O_SEED		0341
#define O_RANDOM	0342
#define O_DISPOSE	0343
#define O_NEW		0344
#define O_EXPO		0345
#define O_DATE		0346
#define O_TIME		0347
#define O_ATAN		0350
#define O_COS		0351
#define O_EXP		0352
#define O_LN		0353
#define O_SIN		0354
#define O_SQRT		0355
#define O_CHR2		0356
#define O_ODD2		0360
#define O_PRED2		0362
#define O_PRED24	0364
#define O_SUCC2		0365
#define O_DEFNAME	0370
#define O_PAGE		0371
#define O_UNDEF		0372
#define O_SQR2		0373
#define O_ROUND		0376
#define O_TRUNC		0377
