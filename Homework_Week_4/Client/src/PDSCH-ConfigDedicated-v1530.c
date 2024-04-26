/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PDSCH-ConfigDedicated-v1530.h"

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
static asn_per_constraints_t asn_PER_type_qcl_Operation_v1530_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tbs_IndexAlt3_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_CQI_AlternativeTableConfig_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_64QAM_Config_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_altMCS_TableScalingConfig_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_qcl_Operation_v1530_value2enum_2[] = {
	{ 0,	5,	"typeC" }
};
static const unsigned int asn_MAP_qcl_Operation_v1530_enum2value_2[] = {
	0	/* typeC(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_qcl_Operation_v1530_specs_2 = {
	asn_MAP_qcl_Operation_v1530_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_qcl_Operation_v1530_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_qcl_Operation_v1530_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qcl_Operation_v1530_2 = {
	"qcl-Operation-v1530",
	"qcl-Operation-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_qcl_Operation_v1530_tags_2,
	sizeof(asn_DEF_qcl_Operation_v1530_tags_2)
		/sizeof(asn_DEF_qcl_Operation_v1530_tags_2[0]) - 1, /* 1 */
	asn_DEF_qcl_Operation_v1530_tags_2,	/* Same as above */
	sizeof(asn_DEF_qcl_Operation_v1530_tags_2)
		/sizeof(asn_DEF_qcl_Operation_v1530_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_qcl_Operation_v1530_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_qcl_Operation_v1530_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tbs_IndexAlt3_r15_value2enum_4[] = {
	{ 0,	3,	"a37" }
};
static const unsigned int asn_MAP_tbs_IndexAlt3_r15_enum2value_4[] = {
	0	/* a37(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tbs_IndexAlt3_r15_specs_4 = {
	asn_MAP_tbs_IndexAlt3_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_tbs_IndexAlt3_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tbs_IndexAlt3_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tbs_IndexAlt3_r15_4 = {
	"tbs-IndexAlt3-r15",
	"tbs-IndexAlt3-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_tbs_IndexAlt3_r15_tags_4,
	sizeof(asn_DEF_tbs_IndexAlt3_r15_tags_4)
		/sizeof(asn_DEF_tbs_IndexAlt3_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_tbs_IndexAlt3_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_tbs_IndexAlt3_r15_tags_4)
		/sizeof(asn_DEF_tbs_IndexAlt3_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_tbs_IndexAlt3_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tbs_IndexAlt3_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_CQI_AlternativeTableConfig_r15_value2enum_6[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_CQI_AlternativeTableConfig_r15_enum2value_6[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_CQI_AlternativeTableConfig_r15_specs_6 = {
	asn_MAP_ce_CQI_AlternativeTableConfig_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_CQI_AlternativeTableConfig_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_CQI_AlternativeTableConfig_r15_6 = {
	"ce-CQI-AlternativeTableConfig-r15",
	"ce-CQI-AlternativeTableConfig-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6,
	sizeof(asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6)
		/sizeof(asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6)
		/sizeof(asn_DEF_ce_CQI_AlternativeTableConfig_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_ce_CQI_AlternativeTableConfig_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_CQI_AlternativeTableConfig_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_64QAM_Config_r15_value2enum_8[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_PDSCH_64QAM_Config_r15_enum2value_8[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_64QAM_Config_r15_specs_8 = {
	asn_MAP_ce_PDSCH_64QAM_Config_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_64QAM_Config_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_64QAM_Config_r15_8 = {
	"ce-PDSCH-64QAM-Config-r15",
	"ce-PDSCH-64QAM-Config-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8,
	sizeof(asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8)
		/sizeof(asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8)
		/sizeof(asn_DEF_ce_PDSCH_64QAM_Config_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_ce_PDSCH_64QAM_Config_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_64QAM_Config_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_value2enum_10[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_enum2value_10[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_specs_10 = {
	asn_MAP_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_10 = {
	"ce-PDSCH-FlexibleStartPRB-AllocConfig-r15",
	"ce-PDSCH-FlexibleStartPRB-AllocConfig-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10,
	sizeof(asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10)
		/sizeof(asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10)
		/sizeof(asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_altMCS_TableScalingConfig_r15_value2enum_12[] = {
	{ 0,	5,	"oDot5" },
	{ 1,	7,	"oDot625" },
	{ 2,	6,	"oDot75" },
	{ 3,	7,	"oDot875" }
};
static const unsigned int asn_MAP_altMCS_TableScalingConfig_r15_enum2value_12[] = {
	0,	/* oDot5(0) */
	1,	/* oDot625(1) */
	2,	/* oDot75(2) */
	3	/* oDot875(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_altMCS_TableScalingConfig_r15_specs_12 = {
	asn_MAP_altMCS_TableScalingConfig_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_altMCS_TableScalingConfig_r15_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altMCS_TableScalingConfig_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altMCS_TableScalingConfig_r15_12 = {
	"altMCS-TableScalingConfig-r15",
	"altMCS-TableScalingConfig-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_altMCS_TableScalingConfig_r15_tags_12,
	sizeof(asn_DEF_altMCS_TableScalingConfig_r15_tags_12)
		/sizeof(asn_DEF_altMCS_TableScalingConfig_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_altMCS_TableScalingConfig_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_altMCS_TableScalingConfig_r15_tags_12)
		/sizeof(asn_DEF_altMCS_TableScalingConfig_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_altMCS_TableScalingConfig_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altMCS_TableScalingConfig_r15_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1530_1[] = {
	{ ATF_POINTER, 6, offsetof(struct PDSCH_ConfigDedicated_v1530, qcl_Operation_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_qcl_Operation_v1530_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-Operation-v1530"
		},
	{ ATF_POINTER, 5, offsetof(struct PDSCH_ConfigDedicated_v1530, tbs_IndexAlt3_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tbs_IndexAlt3_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbs-IndexAlt3-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct PDSCH_ConfigDedicated_v1530, ce_CQI_AlternativeTableConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_CQI_AlternativeTableConfig_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-CQI-AlternativeTableConfig-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ConfigDedicated_v1530, ce_PDSCH_64QAM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_64QAM_Config_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-64QAM-Config-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigDedicated_v1530, ce_PDSCH_FlexibleStartPRB_AllocConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PDSCH-FlexibleStartPRB-AllocConfig-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigDedicated_v1530, altMCS_TableScalingConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altMCS_TableScalingConfig_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altMCS-TableScalingConfig-r15"
		},
};
static const int asn_MAP_PDSCH_ConfigDedicated_v1530_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigDedicated_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qcl-Operation-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tbs-IndexAlt3-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ce-CQI-AlternativeTableConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ce-PDSCH-64QAM-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ce-PDSCH-FlexibleStartPRB-AllocConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* altMCS-TableScalingConfig-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1530_specs_1 = {
	sizeof(struct PDSCH_ConfigDedicated_v1530),
	offsetof(struct PDSCH_ConfigDedicated_v1530, _asn_ctx),
	asn_MAP_PDSCH_ConfigDedicated_v1530_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigDedicated_v1530_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1530 = {
	"PDSCH-ConfigDedicated-v1530",
	"PDSCH-ConfigDedicated-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigDedicated_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ConfigDedicated_v1530_1,
	6,	/* Elements count */
	&asn_SPC_PDSCH_ConfigDedicated_v1530_specs_1	/* Additional specs */
};

