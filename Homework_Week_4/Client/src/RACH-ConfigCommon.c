/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RACH-ConfigCommon.h"

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
static int
memb_maxHARQ_Msg3Tx_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_numberOfRA_Preambles_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sizeOfRA_PreamblesGroupA_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_messageSizeGroupA_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_messagePowerOffsetGroupB_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_powerRampingStep_constr_53 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_preambleInitialReceivedTargetPower_constr_58 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_preambleTransMax_constr_76 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ra_ResponseWindowSize_constr_88 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mac_ContentionResolutionTimer_constr_97 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxHARQ_Msg3Tx_constr_106 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_numberOfRA_Preambles_value2enum_3[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n12" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n24" },
	{ 6,	3,	"n28" },
	{ 7,	3,	"n32" },
	{ 8,	3,	"n36" },
	{ 9,	3,	"n40" },
	{ 10,	3,	"n44" },
	{ 11,	3,	"n48" },
	{ 12,	3,	"n52" },
	{ 13,	3,	"n56" },
	{ 14,	3,	"n60" },
	{ 15,	3,	"n64" }
};
static const unsigned int asn_MAP_numberOfRA_Preambles_enum2value_3[] = {
	2,	/* n12(2) */
	3,	/* n16(3) */
	4,	/* n20(4) */
	5,	/* n24(5) */
	6,	/* n28(6) */
	7,	/* n32(7) */
	8,	/* n36(8) */
	0,	/* n4(0) */
	9,	/* n40(9) */
	10,	/* n44(10) */
	11,	/* n48(11) */
	12,	/* n52(12) */
	13,	/* n56(13) */
	14,	/* n60(14) */
	15,	/* n64(15) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberOfRA_Preambles_specs_3 = {
	asn_MAP_numberOfRA_Preambles_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfRA_Preambles_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberOfRA_Preambles_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfRA_Preambles_3 = {
	"numberOfRA-Preambles",
	"numberOfRA-Preambles",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberOfRA_Preambles_tags_3,
	sizeof(asn_DEF_numberOfRA_Preambles_tags_3)
		/sizeof(asn_DEF_numberOfRA_Preambles_tags_3[0]) - 1, /* 1 */
	asn_DEF_numberOfRA_Preambles_tags_3,	/* Same as above */
	sizeof(asn_DEF_numberOfRA_Preambles_tags_3)
		/sizeof(asn_DEF_numberOfRA_Preambles_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_numberOfRA_Preambles_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfRA_Preambles_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sizeOfRA_PreamblesGroupA_value2enum_21[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n12" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n24" },
	{ 6,	3,	"n28" },
	{ 7,	3,	"n32" },
	{ 8,	3,	"n36" },
	{ 9,	3,	"n40" },
	{ 10,	3,	"n44" },
	{ 11,	3,	"n48" },
	{ 12,	3,	"n52" },
	{ 13,	3,	"n56" },
	{ 14,	3,	"n60" }
};
static const unsigned int asn_MAP_sizeOfRA_PreamblesGroupA_enum2value_21[] = {
	2,	/* n12(2) */
	3,	/* n16(3) */
	4,	/* n20(4) */
	5,	/* n24(5) */
	6,	/* n28(6) */
	7,	/* n32(7) */
	8,	/* n36(8) */
	0,	/* n4(0) */
	9,	/* n40(9) */
	10,	/* n44(10) */
	11,	/* n48(11) */
	12,	/* n52(12) */
	13,	/* n56(13) */
	14,	/* n60(14) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_sizeOfRA_PreamblesGroupA_specs_21 = {
	asn_MAP_sizeOfRA_PreamblesGroupA_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_sizeOfRA_PreamblesGroupA_enum2value_21,	/* N => "tag"; sorted by N */
	15,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sizeOfRA_PreamblesGroupA_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sizeOfRA_PreamblesGroupA_21 = {
	"sizeOfRA-PreamblesGroupA",
	"sizeOfRA-PreamblesGroupA",
	&asn_OP_NativeEnumerated,
	asn_DEF_sizeOfRA_PreamblesGroupA_tags_21,
	sizeof(asn_DEF_sizeOfRA_PreamblesGroupA_tags_21)
		/sizeof(asn_DEF_sizeOfRA_PreamblesGroupA_tags_21[0]) - 1, /* 1 */
	asn_DEF_sizeOfRA_PreamblesGroupA_tags_21,	/* Same as above */
	sizeof(asn_DEF_sizeOfRA_PreamblesGroupA_tags_21)
		/sizeof(asn_DEF_sizeOfRA_PreamblesGroupA_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_sizeOfRA_PreamblesGroupA_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sizeOfRA_PreamblesGroupA_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_messageSizeGroupA_value2enum_37[] = {
	{ 0,	3,	"b56" },
	{ 1,	4,	"b144" },
	{ 2,	4,	"b208" },
	{ 3,	4,	"b256" }
};
static const unsigned int asn_MAP_messageSizeGroupA_enum2value_37[] = {
	1,	/* b144(1) */
	2,	/* b208(2) */
	3,	/* b256(3) */
	0	/* b56(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_messageSizeGroupA_specs_37 = {
	asn_MAP_messageSizeGroupA_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_messageSizeGroupA_enum2value_37,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_messageSizeGroupA_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageSizeGroupA_37 = {
	"messageSizeGroupA",
	"messageSizeGroupA",
	&asn_OP_NativeEnumerated,
	asn_DEF_messageSizeGroupA_tags_37,
	sizeof(asn_DEF_messageSizeGroupA_tags_37)
		/sizeof(asn_DEF_messageSizeGroupA_tags_37[0]) - 1, /* 1 */
	asn_DEF_messageSizeGroupA_tags_37,	/* Same as above */
	sizeof(asn_DEF_messageSizeGroupA_tags_37)
		/sizeof(asn_DEF_messageSizeGroupA_tags_37[0]), /* 2 */
	{ 0, &asn_PER_type_messageSizeGroupA_constr_37, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_messageSizeGroupA_specs_37	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_messagePowerOffsetGroupB_value2enum_42[] = {
	{ 0,	13,	"minusinfinity" },
	{ 1,	3,	"dB0" },
	{ 2,	3,	"dB5" },
	{ 3,	3,	"dB8" },
	{ 4,	4,	"dB10" },
	{ 5,	4,	"dB12" },
	{ 6,	4,	"dB15" },
	{ 7,	4,	"dB18" }
};
static const unsigned int asn_MAP_messagePowerOffsetGroupB_enum2value_42[] = {
	1,	/* dB0(1) */
	4,	/* dB10(4) */
	5,	/* dB12(5) */
	6,	/* dB15(6) */
	7,	/* dB18(7) */
	2,	/* dB5(2) */
	3,	/* dB8(3) */
	0	/* minusinfinity(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_messagePowerOffsetGroupB_specs_42 = {
	asn_MAP_messagePowerOffsetGroupB_value2enum_42,	/* "tag" => N; sorted by tag */
	asn_MAP_messagePowerOffsetGroupB_enum2value_42,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_messagePowerOffsetGroupB_tags_42[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messagePowerOffsetGroupB_42 = {
	"messagePowerOffsetGroupB",
	"messagePowerOffsetGroupB",
	&asn_OP_NativeEnumerated,
	asn_DEF_messagePowerOffsetGroupB_tags_42,
	sizeof(asn_DEF_messagePowerOffsetGroupB_tags_42)
		/sizeof(asn_DEF_messagePowerOffsetGroupB_tags_42[0]) - 1, /* 1 */
	asn_DEF_messagePowerOffsetGroupB_tags_42,	/* Same as above */
	sizeof(asn_DEF_messagePowerOffsetGroupB_tags_42)
		/sizeof(asn_DEF_messagePowerOffsetGroupB_tags_42[0]), /* 2 */
	{ 0, &asn_PER_type_messagePowerOffsetGroupB_constr_42, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_messagePowerOffsetGroupB_specs_42	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preamblesGroupAConfig_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig, sizeOfRA_PreamblesGroupA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sizeOfRA_PreamblesGroupA_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sizeOfRA-PreamblesGroupA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig, messageSizeGroupA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_messageSizeGroupA_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageSizeGroupA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig, messagePowerOffsetGroupB),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_messagePowerOffsetGroupB_42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messagePowerOffsetGroupB"
		},
};
static const ber_tlv_tag_t asn_DEF_preamblesGroupAConfig_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_preamblesGroupAConfig_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sizeOfRA-PreamblesGroupA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* messageSizeGroupA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* messagePowerOffsetGroupB */
};
static asn_SEQUENCE_specifics_t asn_SPC_preamblesGroupAConfig_specs_20 = {
	sizeof(struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig),
	offsetof(struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig, _asn_ctx),
	asn_MAP_preamblesGroupAConfig_tag2el_20,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preamblesGroupAConfig_20 = {
	"preamblesGroupAConfig",
	"preamblesGroupAConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_preamblesGroupAConfig_tags_20,
	sizeof(asn_DEF_preamblesGroupAConfig_tags_20)
		/sizeof(asn_DEF_preamblesGroupAConfig_tags_20[0]) - 1, /* 1 */
	asn_DEF_preamblesGroupAConfig_tags_20,	/* Same as above */
	sizeof(asn_DEF_preamblesGroupAConfig_tags_20)
		/sizeof(asn_DEF_preamblesGroupAConfig_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_preamblesGroupAConfig_20,
	3,	/* Elements count */
	&asn_SPC_preamblesGroupAConfig_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preambleInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__preambleInfo, numberOfRA_Preambles),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfRA_Preambles_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfRA-Preambles"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_ConfigCommon__preambleInfo, preamblesGroupAConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_preamblesGroupAConfig_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preamblesGroupAConfig"
		},
};
static const int asn_MAP_preambleInfo_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_preambleInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_preambleInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfRA-Preambles */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preamblesGroupAConfig */
};
static asn_SEQUENCE_specifics_t asn_SPC_preambleInfo_specs_2 = {
	sizeof(struct RACH_ConfigCommon__preambleInfo),
	offsetof(struct RACH_ConfigCommon__preambleInfo, _asn_ctx),
	asn_MAP_preambleInfo_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_preambleInfo_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preambleInfo_2 = {
	"preambleInfo",
	"preambleInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_preambleInfo_tags_2,
	sizeof(asn_DEF_preambleInfo_tags_2)
		/sizeof(asn_DEF_preambleInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_preambleInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_preambleInfo_tags_2)
		/sizeof(asn_DEF_preambleInfo_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_preambleInfo_2,
	2,	/* Elements count */
	&asn_SPC_preambleInfo_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_powerRampingStep_value2enum_53[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB4" },
	{ 3,	3,	"dB6" }
};
static const unsigned int asn_MAP_powerRampingStep_enum2value_53[] = {
	0,	/* dB0(0) */
	1,	/* dB2(1) */
	2,	/* dB4(2) */
	3	/* dB6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_powerRampingStep_specs_53 = {
	asn_MAP_powerRampingStep_value2enum_53,	/* "tag" => N; sorted by tag */
	asn_MAP_powerRampingStep_enum2value_53,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_powerRampingStep_tags_53[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerRampingStep_53 = {
	"powerRampingStep",
	"powerRampingStep",
	&asn_OP_NativeEnumerated,
	asn_DEF_powerRampingStep_tags_53,
	sizeof(asn_DEF_powerRampingStep_tags_53)
		/sizeof(asn_DEF_powerRampingStep_tags_53[0]) - 1, /* 1 */
	asn_DEF_powerRampingStep_tags_53,	/* Same as above */
	sizeof(asn_DEF_powerRampingStep_tags_53)
		/sizeof(asn_DEF_powerRampingStep_tags_53[0]), /* 2 */
	{ 0, &asn_PER_type_powerRampingStep_constr_53, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerRampingStep_specs_53	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_preambleInitialReceivedTargetPower_value2enum_58[] = {
	{ 0,	7,	"dBm-120" },
	{ 1,	7,	"dBm-118" },
	{ 2,	7,	"dBm-116" },
	{ 3,	7,	"dBm-114" },
	{ 4,	7,	"dBm-112" },
	{ 5,	7,	"dBm-110" },
	{ 6,	7,	"dBm-108" },
	{ 7,	7,	"dBm-106" },
	{ 8,	7,	"dBm-104" },
	{ 9,	7,	"dBm-102" },
	{ 10,	7,	"dBm-100" },
	{ 11,	6,	"dBm-98" },
	{ 12,	6,	"dBm-96" },
	{ 13,	6,	"dBm-94" },
	{ 14,	6,	"dBm-92" },
	{ 15,	6,	"dBm-90" }
};
static const unsigned int asn_MAP_preambleInitialReceivedTargetPower_enum2value_58[] = {
	10,	/* dBm-100(10) */
	9,	/* dBm-102(9) */
	8,	/* dBm-104(8) */
	7,	/* dBm-106(7) */
	6,	/* dBm-108(6) */
	5,	/* dBm-110(5) */
	4,	/* dBm-112(4) */
	3,	/* dBm-114(3) */
	2,	/* dBm-116(2) */
	1,	/* dBm-118(1) */
	0,	/* dBm-120(0) */
	15,	/* dBm-90(15) */
	14,	/* dBm-92(14) */
	13,	/* dBm-94(13) */
	12,	/* dBm-96(12) */
	11	/* dBm-98(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_preambleInitialReceivedTargetPower_specs_58 = {
	asn_MAP_preambleInitialReceivedTargetPower_value2enum_58,	/* "tag" => N; sorted by tag */
	asn_MAP_preambleInitialReceivedTargetPower_enum2value_58,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_preambleInitialReceivedTargetPower_tags_58[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preambleInitialReceivedTargetPower_58 = {
	"preambleInitialReceivedTargetPower",
	"preambleInitialReceivedTargetPower",
	&asn_OP_NativeEnumerated,
	asn_DEF_preambleInitialReceivedTargetPower_tags_58,
	sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_58)
		/sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_58[0]) - 1, /* 1 */
	asn_DEF_preambleInitialReceivedTargetPower_tags_58,	/* Same as above */
	sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_58)
		/sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_58[0]), /* 2 */
	{ 0, &asn_PER_type_preambleInitialReceivedTargetPower_constr_58, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_preambleInitialReceivedTargetPower_specs_58	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_powerRampingParameters_52[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__powerRampingParameters, powerRampingStep),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerRampingStep_53,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingStep"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__powerRampingParameters, preambleInitialReceivedTargetPower),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_preambleInitialReceivedTargetPower_58,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleInitialReceivedTargetPower"
		},
};
static const ber_tlv_tag_t asn_DEF_powerRampingParameters_tags_52[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_powerRampingParameters_tag2el_52[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerRampingStep */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preambleInitialReceivedTargetPower */
};
static asn_SEQUENCE_specifics_t asn_SPC_powerRampingParameters_specs_52 = {
	sizeof(struct RACH_ConfigCommon__powerRampingParameters),
	offsetof(struct RACH_ConfigCommon__powerRampingParameters, _asn_ctx),
	asn_MAP_powerRampingParameters_tag2el_52,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerRampingParameters_52 = {
	"powerRampingParameters",
	"powerRampingParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_powerRampingParameters_tags_52,
	sizeof(asn_DEF_powerRampingParameters_tags_52)
		/sizeof(asn_DEF_powerRampingParameters_tags_52[0]) - 1, /* 1 */
	asn_DEF_powerRampingParameters_tags_52,	/* Same as above */
	sizeof(asn_DEF_powerRampingParameters_tags_52)
		/sizeof(asn_DEF_powerRampingParameters_tags_52[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_powerRampingParameters_52,
	2,	/* Elements count */
	&asn_SPC_powerRampingParameters_specs_52	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_preambleTransMax_value2enum_76[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" },
	{ 8,	3,	"n50" },
	{ 9,	4,	"n100" },
	{ 10,	4,	"n200" }
};
static const unsigned int asn_MAP_preambleTransMax_enum2value_76[] = {
	6,	/* n10(6) */
	9,	/* n100(9) */
	7,	/* n20(7) */
	10,	/* n200(10) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	8,	/* n50(8) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_preambleTransMax_specs_76 = {
	asn_MAP_preambleTransMax_value2enum_76,	/* "tag" => N; sorted by tag */
	asn_MAP_preambleTransMax_enum2value_76,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_preambleTransMax_tags_76[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preambleTransMax_76 = {
	"preambleTransMax",
	"preambleTransMax",
	&asn_OP_NativeEnumerated,
	asn_DEF_preambleTransMax_tags_76,
	sizeof(asn_DEF_preambleTransMax_tags_76)
		/sizeof(asn_DEF_preambleTransMax_tags_76[0]) - 1, /* 1 */
	asn_DEF_preambleTransMax_tags_76,	/* Same as above */
	sizeof(asn_DEF_preambleTransMax_tags_76)
		/sizeof(asn_DEF_preambleTransMax_tags_76[0]), /* 2 */
	{ 0, &asn_PER_type_preambleTransMax_constr_76, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_preambleTransMax_specs_76	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ra_ResponseWindowSize_value2enum_88[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf3" },
	{ 2,	3,	"sf4" },
	{ 3,	3,	"sf5" },
	{ 4,	3,	"sf6" },
	{ 5,	3,	"sf7" },
	{ 6,	3,	"sf8" },
	{ 7,	4,	"sf10" }
};
static const unsigned int asn_MAP_ra_ResponseWindowSize_enum2value_88[] = {
	7,	/* sf10(7) */
	0,	/* sf2(0) */
	1,	/* sf3(1) */
	2,	/* sf4(2) */
	3,	/* sf5(3) */
	4,	/* sf6(4) */
	5,	/* sf7(5) */
	6	/* sf8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_ra_ResponseWindowSize_specs_88 = {
	asn_MAP_ra_ResponseWindowSize_value2enum_88,	/* "tag" => N; sorted by tag */
	asn_MAP_ra_ResponseWindowSize_enum2value_88,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ra_ResponseWindowSize_tags_88[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindowSize_88 = {
	"ra-ResponseWindowSize",
	"ra-ResponseWindowSize",
	&asn_OP_NativeEnumerated,
	asn_DEF_ra_ResponseWindowSize_tags_88,
	sizeof(asn_DEF_ra_ResponseWindowSize_tags_88)
		/sizeof(asn_DEF_ra_ResponseWindowSize_tags_88[0]) - 1, /* 1 */
	asn_DEF_ra_ResponseWindowSize_tags_88,	/* Same as above */
	sizeof(asn_DEF_ra_ResponseWindowSize_tags_88)
		/sizeof(asn_DEF_ra_ResponseWindowSize_tags_88[0]), /* 2 */
	{ 0, &asn_PER_type_ra_ResponseWindowSize_constr_88, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ra_ResponseWindowSize_specs_88	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mac_ContentionResolutionTimer_value2enum_97[] = {
	{ 0,	3,	"sf8" },
	{ 1,	4,	"sf16" },
	{ 2,	4,	"sf24" },
	{ 3,	4,	"sf32" },
	{ 4,	4,	"sf40" },
	{ 5,	4,	"sf48" },
	{ 6,	4,	"sf56" },
	{ 7,	4,	"sf64" }
};
static const unsigned int asn_MAP_mac_ContentionResolutionTimer_enum2value_97[] = {
	1,	/* sf16(1) */
	2,	/* sf24(2) */
	3,	/* sf32(3) */
	4,	/* sf40(4) */
	5,	/* sf48(5) */
	6,	/* sf56(6) */
	7,	/* sf64(7) */
	0	/* sf8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mac_ContentionResolutionTimer_specs_97 = {
	asn_MAP_mac_ContentionResolutionTimer_value2enum_97,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_ContentionResolutionTimer_enum2value_97,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mac_ContentionResolutionTimer_tags_97[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_97 = {
	"mac-ContentionResolutionTimer",
	"mac-ContentionResolutionTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_mac_ContentionResolutionTimer_tags_97,
	sizeof(asn_DEF_mac_ContentionResolutionTimer_tags_97)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_tags_97[0]) - 1, /* 1 */
	asn_DEF_mac_ContentionResolutionTimer_tags_97,	/* Same as above */
	sizeof(asn_DEF_mac_ContentionResolutionTimer_tags_97)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_tags_97[0]), /* 2 */
	{ 0, &asn_PER_type_mac_ContentionResolutionTimer_constr_97, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_ContentionResolutionTimer_specs_97	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ra_SupervisionInfo_75[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__ra_SupervisionInfo, preambleTransMax),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_preambleTransMax_76,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleTransMax"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__ra_SupervisionInfo, ra_ResponseWindowSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ra_ResponseWindowSize_88,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-ResponseWindowSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon__ra_SupervisionInfo, mac_ContentionResolutionTimer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_ContentionResolutionTimer_97,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ContentionResolutionTimer"
		},
};
static const ber_tlv_tag_t asn_DEF_ra_SupervisionInfo_tags_75[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ra_SupervisionInfo_tag2el_75[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleTransMax */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ra-ResponseWindowSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mac-ContentionResolutionTimer */
};
static asn_SEQUENCE_specifics_t asn_SPC_ra_SupervisionInfo_specs_75 = {
	sizeof(struct RACH_ConfigCommon__ra_SupervisionInfo),
	offsetof(struct RACH_ConfigCommon__ra_SupervisionInfo, _asn_ctx),
	asn_MAP_ra_SupervisionInfo_tag2el_75,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ra_SupervisionInfo_75 = {
	"ra-SupervisionInfo",
	"ra-SupervisionInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ra_SupervisionInfo_tags_75,
	sizeof(asn_DEF_ra_SupervisionInfo_tags_75)
		/sizeof(asn_DEF_ra_SupervisionInfo_tags_75[0]) - 1, /* 1 */
	asn_DEF_ra_SupervisionInfo_tags_75,	/* Same as above */
	sizeof(asn_DEF_ra_SupervisionInfo_tags_75)
		/sizeof(asn_DEF_ra_SupervisionInfo_tags_75[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ra_SupervisionInfo_75,
	3,	/* Elements count */
	&asn_SPC_ra_SupervisionInfo_specs_75	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon, preambleInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_preambleInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon, powerRampingParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_powerRampingParameters_52,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon, ra_SupervisionInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ra_SupervisionInfo_75,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-SupervisionInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon, maxHARQ_Msg3Tx),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_maxHARQ_Msg3Tx_constr_106,  memb_maxHARQ_Msg3Tx_constraint_1 },
		0, 0, /* No default value */
		"maxHARQ-Msg3Tx"
		},
};
static const ber_tlv_tag_t asn_DEF_RACH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerRampingParameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ra-SupervisionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxHARQ-Msg3Tx */
};
asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_specs_1 = {
	sizeof(struct RACH_ConfigCommon),
	offsetof(struct RACH_ConfigCommon, _asn_ctx),
	asn_MAP_RACH_ConfigCommon_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon = {
	"RACH-ConfigCommon",
	"RACH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_RACH_ConfigCommon_tags_1,
	sizeof(asn_DEF_RACH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RACH_ConfigCommon_1,
	4,	/* Elements count */
	&asn_SPC_RACH_ConfigCommon_specs_1	/* Additional specs */
};

