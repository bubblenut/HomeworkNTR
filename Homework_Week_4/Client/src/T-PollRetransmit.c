/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "T-PollRetransmit.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_T_PollRetransmit_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_PollRetransmit_value2enum_1[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms15" },
	{ 3,	4,	"ms20" },
	{ 4,	4,	"ms25" },
	{ 5,	4,	"ms30" },
	{ 6,	4,	"ms35" },
	{ 7,	4,	"ms40" },
	{ 8,	4,	"ms45" },
	{ 9,	4,	"ms50" },
	{ 10,	4,	"ms55" },
	{ 11,	4,	"ms60" },
	{ 12,	4,	"ms65" },
	{ 13,	4,	"ms70" },
	{ 14,	4,	"ms75" },
	{ 15,	4,	"ms80" },
	{ 16,	4,	"ms85" },
	{ 17,	4,	"ms90" },
	{ 18,	4,	"ms95" },
	{ 19,	5,	"ms100" },
	{ 20,	5,	"ms105" },
	{ 21,	5,	"ms110" },
	{ 22,	5,	"ms115" },
	{ 23,	5,	"ms120" },
	{ 24,	5,	"ms125" },
	{ 25,	5,	"ms130" },
	{ 26,	5,	"ms135" },
	{ 27,	5,	"ms140" },
	{ 28,	5,	"ms145" },
	{ 29,	5,	"ms150" },
	{ 30,	5,	"ms155" },
	{ 31,	5,	"ms160" },
	{ 32,	5,	"ms165" },
	{ 33,	5,	"ms170" },
	{ 34,	5,	"ms175" },
	{ 35,	5,	"ms180" },
	{ 36,	5,	"ms185" },
	{ 37,	5,	"ms190" },
	{ 38,	5,	"ms195" },
	{ 39,	5,	"ms200" },
	{ 40,	5,	"ms205" },
	{ 41,	5,	"ms210" },
	{ 42,	5,	"ms215" },
	{ 43,	5,	"ms220" },
	{ 44,	5,	"ms225" },
	{ 45,	5,	"ms230" },
	{ 46,	5,	"ms235" },
	{ 47,	5,	"ms240" },
	{ 48,	5,	"ms245" },
	{ 49,	5,	"ms250" },
	{ 50,	5,	"ms300" },
	{ 51,	5,	"ms350" },
	{ 52,	5,	"ms400" },
	{ 53,	5,	"ms450" },
	{ 54,	5,	"ms500" },
	{ 55,	6,	"spare9" },
	{ 56,	6,	"spare8" },
	{ 57,	6,	"spare7" },
	{ 58,	6,	"spare6" },
	{ 59,	6,	"spare5" },
	{ 60,	6,	"spare4" },
	{ 61,	6,	"spare3" },
	{ 62,	6,	"spare2" },
	{ 63,	6,	"spare1" }
};
static const unsigned int asn_MAP_T_PollRetransmit_enum2value_1[] = {
	1,	/* ms10(1) */
	19,	/* ms100(19) */
	20,	/* ms105(20) */
	21,	/* ms110(21) */
	22,	/* ms115(22) */
	23,	/* ms120(23) */
	24,	/* ms125(24) */
	25,	/* ms130(25) */
	26,	/* ms135(26) */
	27,	/* ms140(27) */
	28,	/* ms145(28) */
	2,	/* ms15(2) */
	29,	/* ms150(29) */
	30,	/* ms155(30) */
	31,	/* ms160(31) */
	32,	/* ms165(32) */
	33,	/* ms170(33) */
	34,	/* ms175(34) */
	35,	/* ms180(35) */
	36,	/* ms185(36) */
	37,	/* ms190(37) */
	38,	/* ms195(38) */
	3,	/* ms20(3) */
	39,	/* ms200(39) */
	40,	/* ms205(40) */
	41,	/* ms210(41) */
	42,	/* ms215(42) */
	43,	/* ms220(43) */
	44,	/* ms225(44) */
	45,	/* ms230(45) */
	46,	/* ms235(46) */
	47,	/* ms240(47) */
	48,	/* ms245(48) */
	4,	/* ms25(4) */
	49,	/* ms250(49) */
	5,	/* ms30(5) */
	50,	/* ms300(50) */
	6,	/* ms35(6) */
	51,	/* ms350(51) */
	7,	/* ms40(7) */
	52,	/* ms400(52) */
	8,	/* ms45(8) */
	53,	/* ms450(53) */
	0,	/* ms5(0) */
	9,	/* ms50(9) */
	54,	/* ms500(54) */
	10,	/* ms55(10) */
	11,	/* ms60(11) */
	12,	/* ms65(12) */
	13,	/* ms70(13) */
	14,	/* ms75(14) */
	15,	/* ms80(15) */
	16,	/* ms85(16) */
	17,	/* ms90(17) */
	18,	/* ms95(18) */
	63,	/* spare1(63) */
	62,	/* spare2(62) */
	61,	/* spare3(61) */
	60,	/* spare4(60) */
	59,	/* spare5(59) */
	58,	/* spare6(58) */
	57,	/* spare7(57) */
	56,	/* spare8(56) */
	55	/* spare9(55) */
};
const asn_INTEGER_specifics_t asn_SPC_T_PollRetransmit_specs_1 = {
	asn_MAP_T_PollRetransmit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_PollRetransmit_enum2value_1,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_PollRetransmit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_PollRetransmit = {
	"T-PollRetransmit",
	"T-PollRetransmit",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_PollRetransmit_tags_1,
	sizeof(asn_DEF_T_PollRetransmit_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_tags_1[0]), /* 1 */
	asn_DEF_T_PollRetransmit_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_PollRetransmit_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_T_PollRetransmit_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_PollRetransmit_specs_1	/* Additional specs */
};

