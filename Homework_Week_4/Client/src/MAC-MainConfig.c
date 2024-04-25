/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MAC-MainConfig.h"

#include "DRX-Config.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_maxHARQ_Tx_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicBSR_Timer_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_retxBSR_Timer_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicPHR_Timer_constr_52 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_prohibitPHR_Timer_constr_61 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PathlossChange_constr_70 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_phr_Config_constr_49 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxHARQ_Tx_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n7" },
	{ 7,	2,	"n8" },
	{ 8,	3,	"n10" },
	{ 9,	3,	"n12" },
	{ 10,	3,	"n16" },
	{ 11,	3,	"n20" },
	{ 12,	3,	"n24" },
	{ 13,	3,	"n28" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_maxHARQ_Tx_enum2value_3[] = {
	0,	/* n1(0) */
	8,	/* n10(8) */
	9,	/* n12(9) */
	10,	/* n16(10) */
	1,	/* n2(1) */
	11,	/* n20(11) */
	12,	/* n24(12) */
	13,	/* n28(13) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6,	/* n7(6) */
	7,	/* n8(7) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxHARQ_Tx_specs_3 = {
	asn_MAP_maxHARQ_Tx_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_maxHARQ_Tx_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxHARQ_Tx_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxHARQ_Tx_3 = {
	"maxHARQ-Tx",
	"maxHARQ-Tx",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxHARQ_Tx_tags_3,
	sizeof(asn_DEF_maxHARQ_Tx_tags_3)
		/sizeof(asn_DEF_maxHARQ_Tx_tags_3[0]) - 1, /* 1 */
	asn_DEF_maxHARQ_Tx_tags_3,	/* Same as above */
	sizeof(asn_DEF_maxHARQ_Tx_tags_3)
		/sizeof(asn_DEF_maxHARQ_Tx_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_maxHARQ_Tx_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxHARQ_Tx_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_periodicBSR_Timer_value2enum_20[] = {
	{ 0,	3,	"sf5" },
	{ 1,	4,	"sf10" },
	{ 2,	4,	"sf16" },
	{ 3,	4,	"sf20" },
	{ 4,	4,	"sf32" },
	{ 5,	4,	"sf40" },
	{ 6,	4,	"sf64" },
	{ 7,	4,	"sf80" },
	{ 8,	5,	"sf128" },
	{ 9,	5,	"sf160" },
	{ 10,	5,	"sf320" },
	{ 11,	5,	"sf640" },
	{ 12,	6,	"sf1280" },
	{ 13,	6,	"sf2560" },
	{ 14,	8,	"infinity" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_periodicBSR_Timer_enum2value_20[] = {
	14,	/* infinity(14) */
	1,	/* sf10(1) */
	8,	/* sf128(8) */
	12,	/* sf1280(12) */
	2,	/* sf16(2) */
	9,	/* sf160(9) */
	3,	/* sf20(3) */
	13,	/* sf2560(13) */
	4,	/* sf32(4) */
	10,	/* sf320(10) */
	5,	/* sf40(5) */
	0,	/* sf5(0) */
	6,	/* sf64(6) */
	11,	/* sf640(11) */
	7,	/* sf80(7) */
	15	/* spare1(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodicBSR_Timer_specs_20 = {
	asn_MAP_periodicBSR_Timer_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicBSR_Timer_enum2value_20,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodicBSR_Timer_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicBSR_Timer_20 = {
	"periodicBSR-Timer",
	"periodicBSR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodicBSR_Timer_tags_20,
	sizeof(asn_DEF_periodicBSR_Timer_tags_20)
		/sizeof(asn_DEF_periodicBSR_Timer_tags_20[0]) - 1, /* 1 */
	asn_DEF_periodicBSR_Timer_tags_20,	/* Same as above */
	sizeof(asn_DEF_periodicBSR_Timer_tags_20)
		/sizeof(asn_DEF_periodicBSR_Timer_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_periodicBSR_Timer_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicBSR_Timer_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_retxBSR_Timer_value2enum_37[] = {
	{ 0,	5,	"sf320" },
	{ 1,	5,	"sf640" },
	{ 2,	6,	"sf1280" },
	{ 3,	6,	"sf2560" },
	{ 4,	6,	"sf5120" },
	{ 5,	7,	"sf10240" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_retxBSR_Timer_enum2value_37[] = {
	5,	/* sf10240(5) */
	2,	/* sf1280(2) */
	3,	/* sf2560(3) */
	0,	/* sf320(0) */
	4,	/* sf5120(4) */
	1,	/* sf640(1) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_retxBSR_Timer_specs_37 = {
	asn_MAP_retxBSR_Timer_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_retxBSR_Timer_enum2value_37,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_retxBSR_Timer_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_retxBSR_Timer_37 = {
	"retxBSR-Timer",
	"retxBSR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_retxBSR_Timer_tags_37,
	sizeof(asn_DEF_retxBSR_Timer_tags_37)
		/sizeof(asn_DEF_retxBSR_Timer_tags_37[0]) - 1, /* 1 */
	asn_DEF_retxBSR_Timer_tags_37,	/* Same as above */
	sizeof(asn_DEF_retxBSR_Timer_tags_37)
		/sizeof(asn_DEF_retxBSR_Timer_tags_37[0]), /* 2 */
	{ 0, &asn_PER_type_retxBSR_Timer_constr_37, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_retxBSR_Timer_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_SCH_Config_2[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_MainConfig__ul_SCH_Config, maxHARQ_Tx),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxHARQ_Tx_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxHARQ-Tx"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig__ul_SCH_Config, periodicBSR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicBSR_Timer_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicBSR-Timer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__ul_SCH_Config, retxBSR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_retxBSR_Timer_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"retxBSR-Timer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__ul_SCH_Config, ttiBundling),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ttiBundling"
		},
};
static const int asn_MAP_ul_SCH_Config_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ul_SCH_Config_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_SCH_Config_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxHARQ-Tx */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* periodicBSR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* retxBSR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ttiBundling */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_SCH_Config_specs_2 = {
	sizeof(struct MAC_MainConfig__ul_SCH_Config),
	offsetof(struct MAC_MainConfig__ul_SCH_Config, _asn_ctx),
	asn_MAP_ul_SCH_Config_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_ul_SCH_Config_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SCH_Config_2 = {
	"ul-SCH-Config",
	"ul-SCH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_SCH_Config_tags_2,
	sizeof(asn_DEF_ul_SCH_Config_tags_2)
		/sizeof(asn_DEF_ul_SCH_Config_tags_2[0]) - 1, /* 1 */
	asn_DEF_ul_SCH_Config_tags_2,	/* Same as above */
	sizeof(asn_DEF_ul_SCH_Config_tags_2)
		/sizeof(asn_DEF_ul_SCH_Config_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_SCH_Config_2,
	4,	/* Elements count */
	&asn_SPC_ul_SCH_Config_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_periodicPHR_Timer_value2enum_52[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf50" },
	{ 3,	5,	"sf100" },
	{ 4,	5,	"sf200" },
	{ 5,	5,	"sf500" },
	{ 6,	6,	"sf1000" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_periodicPHR_Timer_enum2value_52[] = {
	7,	/* infinity(7) */
	0,	/* sf10(0) */
	3,	/* sf100(3) */
	6,	/* sf1000(6) */
	1,	/* sf20(1) */
	4,	/* sf200(4) */
	2,	/* sf50(2) */
	5	/* sf500(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodicPHR_Timer_specs_52 = {
	asn_MAP_periodicPHR_Timer_value2enum_52,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicPHR_Timer_enum2value_52,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodicPHR_Timer_tags_52[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicPHR_Timer_52 = {
	"periodicPHR-Timer",
	"periodicPHR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodicPHR_Timer_tags_52,
	sizeof(asn_DEF_periodicPHR_Timer_tags_52)
		/sizeof(asn_DEF_periodicPHR_Timer_tags_52[0]) - 1, /* 1 */
	asn_DEF_periodicPHR_Timer_tags_52,	/* Same as above */
	sizeof(asn_DEF_periodicPHR_Timer_tags_52)
		/sizeof(asn_DEF_periodicPHR_Timer_tags_52[0]), /* 2 */
	{ 0, &asn_PER_type_periodicPHR_Timer_constr_52, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicPHR_Timer_specs_52	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_prohibitPHR_Timer_value2enum_61[] = {
	{ 0,	3,	"sf0" },
	{ 1,	4,	"sf10" },
	{ 2,	4,	"sf20" },
	{ 3,	4,	"sf50" },
	{ 4,	5,	"sf100" },
	{ 5,	5,	"sf200" },
	{ 6,	5,	"sf500" },
	{ 7,	6,	"sf1000" }
};
static const unsigned int asn_MAP_prohibitPHR_Timer_enum2value_61[] = {
	0,	/* sf0(0) */
	1,	/* sf10(1) */
	4,	/* sf100(4) */
	7,	/* sf1000(7) */
	2,	/* sf20(2) */
	5,	/* sf200(5) */
	3,	/* sf50(3) */
	6	/* sf500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_prohibitPHR_Timer_specs_61 = {
	asn_MAP_prohibitPHR_Timer_value2enum_61,	/* "tag" => N; sorted by tag */
	asn_MAP_prohibitPHR_Timer_enum2value_61,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_prohibitPHR_Timer_tags_61[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prohibitPHR_Timer_61 = {
	"prohibitPHR-Timer",
	"prohibitPHR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_prohibitPHR_Timer_tags_61,
	sizeof(asn_DEF_prohibitPHR_Timer_tags_61)
		/sizeof(asn_DEF_prohibitPHR_Timer_tags_61[0]) - 1, /* 1 */
	asn_DEF_prohibitPHR_Timer_tags_61,	/* Same as above */
	sizeof(asn_DEF_prohibitPHR_Timer_tags_61)
		/sizeof(asn_DEF_prohibitPHR_Timer_tags_61[0]), /* 2 */
	{ 0, &asn_PER_type_prohibitPHR_Timer_constr_61, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_prohibitPHR_Timer_specs_61	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_PathlossChange_value2enum_70[] = {
	{ 0,	3,	"dB1" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	8,	"infinity" }
};
static const unsigned int asn_MAP_dl_PathlossChange_enum2value_70[] = {
	0,	/* dB1(0) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3	/* infinity(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PathlossChange_specs_70 = {
	asn_MAP_dl_PathlossChange_value2enum_70,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_PathlossChange_enum2value_70,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_PathlossChange_tags_70[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PathlossChange_70 = {
	"dl-PathlossChange",
	"dl-PathlossChange",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_PathlossChange_tags_70,
	sizeof(asn_DEF_dl_PathlossChange_tags_70)
		/sizeof(asn_DEF_dl_PathlossChange_tags_70[0]) - 1, /* 1 */
	asn_DEF_dl_PathlossChange_tags_70,	/* Same as above */
	sizeof(asn_DEF_dl_PathlossChange_tags_70)
		/sizeof(asn_DEF_dl_PathlossChange_tags_70[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PathlossChange_constr_70, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_PathlossChange_specs_70	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_51[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__phr_Config__setup, periodicPHR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicPHR_Timer_52,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicPHR-Timer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__phr_Config__setup, prohibitPHR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_prohibitPHR_Timer_61,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prohibitPHR-Timer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__phr_Config__setup, dl_PathlossChange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_PathlossChange_70,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PathlossChange"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_51[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_51[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicPHR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prohibitPHR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-PathlossChange */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_51 = {
	sizeof(struct MAC_MainConfig__phr_Config__setup),
	offsetof(struct MAC_MainConfig__phr_Config__setup, _asn_ctx),
	asn_MAP_setup_tag2el_51,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_51 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_51,
	sizeof(asn_DEF_setup_tags_51)
		/sizeof(asn_DEF_setup_tags_51[0]) - 1, /* 1 */
	asn_DEF_setup_tags_51,	/* Same as above */
	sizeof(asn_DEF_setup_tags_51)
		/sizeof(asn_DEF_setup_tags_51[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_51,
	3,	/* Elements count */
	&asn_SPC_setup_specs_51	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_phr_Config_49[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__phr_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig__phr_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_51,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_phr_Config_tag2el_49[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_phr_Config_specs_49 = {
	sizeof(struct MAC_MainConfig__phr_Config),
	offsetof(struct MAC_MainConfig__phr_Config, _asn_ctx),
	offsetof(struct MAC_MainConfig__phr_Config, present),
	sizeof(((struct MAC_MainConfig__phr_Config *)0)->present),
	asn_MAP_phr_Config_tag2el_49,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_phr_Config_49 = {
	"phr-Config",
	"phr-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_phr_Config_constr_49, CHOICE_constraint },
	asn_MBR_phr_Config_49,
	2,	/* Elements count */
	&asn_SPC_phr_Config_specs_49	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_MainConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_MainConfig, ul_SCH_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_SCH_Config_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-SCH-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig, drx_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DRX_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig, timeAlignmentTimerDedicated),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerDedicated"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig, phr_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_phr_Config_49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-Config"
		},
};
static const int asn_MAP_MAC_MainConfig_oms_1[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_MAC_MainConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_MainConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-SCH-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeAlignmentTimerDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* phr-Config */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfig_specs_1 = {
	sizeof(struct MAC_MainConfig),
	offsetof(struct MAC_MainConfig, _asn_ctx),
	asn_MAP_MAC_MainConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MAC_MainConfig_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_MainConfig = {
	"MAC-MainConfig",
	"MAC-MainConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_MainConfig_tags_1,
	sizeof(asn_DEF_MAC_MainConfig_tags_1)
		/sizeof(asn_DEF_MAC_MainConfig_tags_1[0]), /* 1 */
	asn_DEF_MAC_MainConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_MainConfig_tags_1)
		/sizeof(asn_DEF_MAC_MainConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_MainConfig_1,
	4,	/* Elements count */
	&asn_SPC_MAC_MainConfig_specs_1	/* Additional specs */
};
