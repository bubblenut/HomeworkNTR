/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType2-NB-r13.h"

#include "CarrierFreq-NB-r13.h"
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
memb_multiBandInfoList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_multiBandInfoList_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cp_Reestablishment_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_servingCellMeasInfo_r14_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_Reporting_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_enhancedPHR_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cp_EDT_r15_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_up_EDT_r15_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_multiBandInfoList_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_freqInfo_r13_4[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2_NB_r13__freqInfo_r13, ul_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13__freqInfo_r13, additionalSpectrumEmission_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r13"
		},
};
static const int asn_MAP_freqInfo_r13_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_freqInfo_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_freqInfo_r13_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_freqInfo_r13_specs_4 = {
	sizeof(struct SystemInformationBlockType2_NB_r13__freqInfo_r13),
	offsetof(struct SystemInformationBlockType2_NB_r13__freqInfo_r13, _asn_ctx),
	asn_MAP_freqInfo_r13_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_freqInfo_r13_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqInfo_r13_4 = {
	"freqInfo-r13",
	"freqInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_freqInfo_r13_tags_4,
	sizeof(asn_DEF_freqInfo_r13_tags_4)
		/sizeof(asn_DEF_freqInfo_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_freqInfo_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_freqInfo_r13_tags_4)
		/sizeof(asn_DEF_freqInfo_r13_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_freqInfo_r13_4,
	2,	/* Elements count */
	&asn_SPC_freqInfo_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_multiBandInfoList_r13_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_multiBandInfoList_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_multiBandInfoList_r13_specs_8 = {
	sizeof(struct SystemInformationBlockType2_NB_r13__multiBandInfoList_r13),
	offsetof(struct SystemInformationBlockType2_NB_r13__multiBandInfoList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiBandInfoList_r13_8 = {
	"multiBandInfoList-r13",
	"multiBandInfoList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_multiBandInfoList_r13_tags_8,
	sizeof(asn_DEF_multiBandInfoList_r13_tags_8)
		/sizeof(asn_DEF_multiBandInfoList_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_multiBandInfoList_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_multiBandInfoList_r13_tags_8)
		/sizeof(asn_DEF_multiBandInfoList_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_multiBandInfoList_r13_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_multiBandInfoList_r13_8,
	1,	/* Single element */
	&asn_SPC_multiBandInfoList_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cp_Reestablishment_r14_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cp_Reestablishment_r14_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cp_Reestablishment_r14_specs_12 = {
	asn_MAP_cp_Reestablishment_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_cp_Reestablishment_r14_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cp_Reestablishment_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cp_Reestablishment_r14_12 = {
	"cp-Reestablishment-r14",
	"cp-Reestablishment-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_cp_Reestablishment_r14_tags_12,
	sizeof(asn_DEF_cp_Reestablishment_r14_tags_12)
		/sizeof(asn_DEF_cp_Reestablishment_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_cp_Reestablishment_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_cp_Reestablishment_r14_tags_12)
		/sizeof(asn_DEF_cp_Reestablishment_r14_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_cp_Reestablishment_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cp_Reestablishment_r14_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_servingCellMeasInfo_r14_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_servingCellMeasInfo_r14_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_servingCellMeasInfo_r14_specs_14 = {
	asn_MAP_servingCellMeasInfo_r14_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_servingCellMeasInfo_r14_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_servingCellMeasInfo_r14_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingCellMeasInfo_r14_14 = {
	"servingCellMeasInfo-r14",
	"servingCellMeasInfo-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_servingCellMeasInfo_r14_tags_14,
	sizeof(asn_DEF_servingCellMeasInfo_r14_tags_14)
		/sizeof(asn_DEF_servingCellMeasInfo_r14_tags_14[0]) - 1, /* 1 */
	asn_DEF_servingCellMeasInfo_r14_tags_14,	/* Same as above */
	sizeof(asn_DEF_servingCellMeasInfo_r14_tags_14)
		/sizeof(asn_DEF_servingCellMeasInfo_r14_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_servingCellMeasInfo_r14_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_servingCellMeasInfo_r14_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cqi_Reporting_r14_value2enum_16[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cqi_Reporting_r14_enum2value_16[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cqi_Reporting_r14_specs_16 = {
	asn_MAP_cqi_Reporting_r14_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_cqi_Reporting_r14_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cqi_Reporting_r14_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_Reporting_r14_16 = {
	"cqi-Reporting-r14",
	"cqi-Reporting-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_cqi_Reporting_r14_tags_16,
	sizeof(asn_DEF_cqi_Reporting_r14_tags_16)
		/sizeof(asn_DEF_cqi_Reporting_r14_tags_16[0]) - 1, /* 1 */
	asn_DEF_cqi_Reporting_r14_tags_16,	/* Same as above */
	sizeof(asn_DEF_cqi_Reporting_r14_tags_16)
		/sizeof(asn_DEF_cqi_Reporting_r14_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_cqi_Reporting_r14_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cqi_Reporting_r14_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_enhancedPHR_r15_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_enhancedPHR_r15_enum2value_18[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_enhancedPHR_r15_specs_18 = {
	asn_MAP_enhancedPHR_r15_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_enhancedPHR_r15_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_enhancedPHR_r15_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_enhancedPHR_r15_18 = {
	"enhancedPHR-r15",
	"enhancedPHR-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_enhancedPHR_r15_tags_18,
	sizeof(asn_DEF_enhancedPHR_r15_tags_18)
		/sizeof(asn_DEF_enhancedPHR_r15_tags_18[0]) - 1, /* 1 */
	asn_DEF_enhancedPHR_r15_tags_18,	/* Same as above */
	sizeof(asn_DEF_enhancedPHR_r15_tags_18)
		/sizeof(asn_DEF_enhancedPHR_r15_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_enhancedPHR_r15_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_enhancedPHR_r15_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_freqInfo_v1530_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13__freqInfo_v1530, tdd_UL_DL_AlignmentOffset_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_UL_DL_AlignmentOffset_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-UL-DL-AlignmentOffset-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_freqInfo_v1530_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_freqInfo_v1530_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd-UL-DL-AlignmentOffset-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_freqInfo_v1530_specs_20 = {
	sizeof(struct SystemInformationBlockType2_NB_r13__freqInfo_v1530),
	offsetof(struct SystemInformationBlockType2_NB_r13__freqInfo_v1530, _asn_ctx),
	asn_MAP_freqInfo_v1530_tag2el_20,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqInfo_v1530_20 = {
	"freqInfo-v1530",
	"freqInfo-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_freqInfo_v1530_tags_20,
	sizeof(asn_DEF_freqInfo_v1530_tags_20)
		/sizeof(asn_DEF_freqInfo_v1530_tags_20[0]) - 1, /* 1 */
	asn_DEF_freqInfo_v1530_tags_20,	/* Same as above */
	sizeof(asn_DEF_freqInfo_v1530_tags_20)
		/sizeof(asn_DEF_freqInfo_v1530_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_freqInfo_v1530_20,
	1,	/* Elements count */
	&asn_SPC_freqInfo_v1530_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cp_EDT_r15_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cp_EDT_r15_enum2value_22[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cp_EDT_r15_specs_22 = {
	asn_MAP_cp_EDT_r15_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_cp_EDT_r15_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cp_EDT_r15_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cp_EDT_r15_22 = {
	"cp-EDT-r15",
	"cp-EDT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cp_EDT_r15_tags_22,
	sizeof(asn_DEF_cp_EDT_r15_tags_22)
		/sizeof(asn_DEF_cp_EDT_r15_tags_22[0]) - 1, /* 1 */
	asn_DEF_cp_EDT_r15_tags_22,	/* Same as above */
	sizeof(asn_DEF_cp_EDT_r15_tags_22)
		/sizeof(asn_DEF_cp_EDT_r15_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_cp_EDT_r15_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cp_EDT_r15_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_up_EDT_r15_value2enum_24[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_up_EDT_r15_enum2value_24[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_up_EDT_r15_specs_24 = {
	asn_MAP_up_EDT_r15_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_up_EDT_r15_enum2value_24,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_up_EDT_r15_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_up_EDT_r15_24 = {
	"up-EDT-r15",
	"up-EDT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_up_EDT_r15_tags_24,
	sizeof(asn_DEF_up_EDT_r15_tags_24)
		/sizeof(asn_DEF_up_EDT_r15_tags_24[0]) - 1, /* 1 */
	asn_DEF_up_EDT_r15_tags_24,	/* Same as above */
	sizeof(asn_DEF_up_EDT_r15_tags_24)
		/sizeof(asn_DEF_up_EDT_r15_tags_24[0]), /* 2 */
	{ 0, &asn_PER_type_up_EDT_r15_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_up_EDT_r15_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13, radioResourceConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSIB_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13, ue_TimersAndConstants_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_TimersAndConstants_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TimersAndConstants-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13, freqInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_freqInfo_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2_NB_r13, timeAlignmentTimerCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerCommon-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct SystemInformationBlockType2_NB_r13, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_multiBandInfoList_r13_8,
		0,
		{ 0, &asn_PER_memb_multiBandInfoList_r13_constr_8,  memb_multiBandInfoList_r13_constraint_1 },
		0, 0, /* No default value */
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType2_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType2_NB_r13, cp_Reestablishment_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cp_Reestablishment_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-Reestablishment-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType2_NB_r13, servingCellMeasInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_servingCellMeasInfo_r14_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellMeasInfo-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType2_NB_r13, cqi_Reporting_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cqi_Reporting_r14_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-Reporting-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType2_NB_r13, enhancedPHR_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_enhancedPHR_r15_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enhancedPHR-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType2_NB_r13, freqInfo_v1530),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_freqInfo_v1530_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2_NB_r13, cp_EDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cp_EDT_r15_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-EDT-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2_NB_r13, up_EDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_up_EDT_r15_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"up-EDT-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType2_NB_r13_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType2_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType2_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-TimersAndConstants-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeAlignmentTimerCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multiBandInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cp-Reestablishment-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* servingCellMeasInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cqi-Reporting-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* enhancedPHR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* freqInfo-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* cp-EDT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* up-EDT-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_NB_r13_specs_1 = {
	sizeof(struct SystemInformationBlockType2_NB_r13),
	offsetof(struct SystemInformationBlockType2_NB_r13, _asn_ctx),
	asn_MAP_SystemInformationBlockType2_NB_r13_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType2_NB_r13_oms_1,	/* Optional members */
	2, 7,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_NB_r13 = {
	"SystemInformationBlockType2-NB-r13",
	"SystemInformationBlockType2-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType2_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType2_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType2_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType2_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType2_NB_r13_1,
	13,	/* Elements count */
	&asn_SPC_SystemInformationBlockType2_NB_r13_specs_1	/* Additional specs */
};

