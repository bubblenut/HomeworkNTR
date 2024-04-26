/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "STTI-SPT-BandParameters-r15.h"

#include "CA-MIMO-ParametersDL-r15.h"
#include "MIMO-CA-ParametersPerBoBC-r13.h"
#include "MIMO-CA-ParametersPerBoBC-v1430.h"
#include "STTI-SupportedCombinations-r15.h"
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
static asn_per_constraints_t asn_PER_type_dl_1024QAM_Slot_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_1024QAM_SubslotTA_1_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_1024QAM_SubslotTA_2_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_simultaneousTx_differentTx_duration_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sTTI_FD_MIMO_Coexistence_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sTTI_SupportedCSI_Proc_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_256QAM_Slot_r15_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_256QAM_Subslot_r15_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dl_1024QAM_Slot_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dl_1024QAM_Slot_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_1024QAM_Slot_r15_specs_2 = {
	asn_MAP_dl_1024QAM_Slot_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_1024QAM_Slot_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_1024QAM_Slot_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_Slot_r15_2 = {
	"dl-1024QAM-Slot-r15",
	"dl-1024QAM-Slot-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_1024QAM_Slot_r15_tags_2,
	sizeof(asn_DEF_dl_1024QAM_Slot_r15_tags_2)
		/sizeof(asn_DEF_dl_1024QAM_Slot_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_dl_1024QAM_Slot_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_dl_1024QAM_Slot_r15_tags_2)
		/sizeof(asn_DEF_dl_1024QAM_Slot_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_dl_1024QAM_Slot_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_1024QAM_Slot_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_1024QAM_SubslotTA_1_r15_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dl_1024QAM_SubslotTA_1_r15_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_1024QAM_SubslotTA_1_r15_specs_4 = {
	asn_MAP_dl_1024QAM_SubslotTA_1_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_1024QAM_SubslotTA_1_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_SubslotTA_1_r15_4 = {
	"dl-1024QAM-SubslotTA-1-r15",
	"dl-1024QAM-SubslotTA-1-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4,
	sizeof(asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4)
		/sizeof(asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4)
		/sizeof(asn_DEF_dl_1024QAM_SubslotTA_1_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_dl_1024QAM_SubslotTA_1_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_1024QAM_SubslotTA_1_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_1024QAM_SubslotTA_2_r15_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dl_1024QAM_SubslotTA_2_r15_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_1024QAM_SubslotTA_2_r15_specs_6 = {
	asn_MAP_dl_1024QAM_SubslotTA_2_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_1024QAM_SubslotTA_2_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_SubslotTA_2_r15_6 = {
	"dl-1024QAM-SubslotTA-2-r15",
	"dl-1024QAM-SubslotTA-2-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6,
	sizeof(asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6)
		/sizeof(asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6)
		/sizeof(asn_DEF_dl_1024QAM_SubslotTA_2_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_dl_1024QAM_SubslotTA_2_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_1024QAM_SubslotTA_2_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousTx_differentTx_duration_r15_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_simultaneousTx_differentTx_duration_r15_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousTx_differentTx_duration_r15_specs_8 = {
	asn_MAP_simultaneousTx_differentTx_duration_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousTx_differentTx_duration_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousTx_differentTx_duration_r15_8 = {
	"simultaneousTx-differentTx-duration-r15",
	"simultaneousTx-differentTx-duration-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8,
	sizeof(asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8)
		/sizeof(asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8)
		/sizeof(asn_DEF_simultaneousTx_differentTx_duration_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_simultaneousTx_differentTx_duration_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousTx_differentTx_duration_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sTTI_FD_MIMO_Coexistence_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_sTTI_FD_MIMO_Coexistence_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sTTI_FD_MIMO_Coexistence_specs_12 = {
	asn_MAP_sTTI_FD_MIMO_Coexistence_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_sTTI_FD_MIMO_Coexistence_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sTTI_FD_MIMO_Coexistence_12 = {
	"sTTI-FD-MIMO-Coexistence",
	"sTTI-FD-MIMO-Coexistence",
	&asn_OP_NativeEnumerated,
	asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12,
	sizeof(asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12)
		/sizeof(asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12[0]) - 1, /* 1 */
	asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12,	/* Same as above */
	sizeof(asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12)
		/sizeof(asn_DEF_sTTI_FD_MIMO_Coexistence_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_sTTI_FD_MIMO_Coexistence_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sTTI_FD_MIMO_Coexistence_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sTTI_SupportedCSI_Proc_r15_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_sTTI_SupportedCSI_Proc_r15_enum2value_17[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_sTTI_SupportedCSI_Proc_r15_specs_17 = {
	asn_MAP_sTTI_SupportedCSI_Proc_r15_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_sTTI_SupportedCSI_Proc_r15_enum2value_17,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sTTI_SupportedCSI_Proc_r15_17 = {
	"sTTI-SupportedCSI-Proc-r15",
	"sTTI-SupportedCSI-Proc-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17,
	sizeof(asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17)
		/sizeof(asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17[0]) - 1, /* 1 */
	asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17,	/* Same as above */
	sizeof(asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17)
		/sizeof(asn_DEF_sTTI_SupportedCSI_Proc_r15_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_sTTI_SupportedCSI_Proc_r15_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sTTI_SupportedCSI_Proc_r15_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_256QAM_Slot_r15_value2enum_21[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ul_256QAM_Slot_r15_enum2value_21[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_256QAM_Slot_r15_specs_21 = {
	asn_MAP_ul_256QAM_Slot_r15_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_256QAM_Slot_r15_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_256QAM_Slot_r15_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_256QAM_Slot_r15_21 = {
	"ul-256QAM-Slot-r15",
	"ul-256QAM-Slot-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_256QAM_Slot_r15_tags_21,
	sizeof(asn_DEF_ul_256QAM_Slot_r15_tags_21)
		/sizeof(asn_DEF_ul_256QAM_Slot_r15_tags_21[0]) - 1, /* 1 */
	asn_DEF_ul_256QAM_Slot_r15_tags_21,	/* Same as above */
	sizeof(asn_DEF_ul_256QAM_Slot_r15_tags_21)
		/sizeof(asn_DEF_ul_256QAM_Slot_r15_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_ul_256QAM_Slot_r15_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_256QAM_Slot_r15_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_256QAM_Subslot_r15_value2enum_23[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ul_256QAM_Subslot_r15_enum2value_23[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_256QAM_Subslot_r15_specs_23 = {
	asn_MAP_ul_256QAM_Subslot_r15_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_256QAM_Subslot_r15_enum2value_23,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_256QAM_Subslot_r15_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_256QAM_Subslot_r15_23 = {
	"ul-256QAM-Subslot-r15",
	"ul-256QAM-Subslot-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_256QAM_Subslot_r15_tags_23,
	sizeof(asn_DEF_ul_256QAM_Subslot_r15_tags_23)
		/sizeof(asn_DEF_ul_256QAM_Subslot_r15_tags_23[0]) - 1, /* 1 */
	asn_DEF_ul_256QAM_Subslot_r15_tags_23,	/* Same as above */
	sizeof(asn_DEF_ul_256QAM_Subslot_r15_tags_23)
		/sizeof(asn_DEF_ul_256QAM_Subslot_r15_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_ul_256QAM_Subslot_r15_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_256QAM_Subslot_r15_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_STTI_SPT_BandParameters_r15_1[] = {
	{ ATF_POINTER, 5, offsetof(struct STTI_SPT_BandParameters_r15, dl_1024QAM_Slot_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_1024QAM_Slot_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-1024QAM-Slot-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct STTI_SPT_BandParameters_r15, dl_1024QAM_SubslotTA_1_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_1024QAM_SubslotTA_1_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-1024QAM-SubslotTA-1-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct STTI_SPT_BandParameters_r15, dl_1024QAM_SubslotTA_2_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_1024QAM_SubslotTA_2_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-1024QAM-SubslotTA-2-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct STTI_SPT_BandParameters_r15, simultaneousTx_differentTx_duration_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousTx_differentTx_duration_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousTx-differentTx-duration-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_CA_MIMO_ParametersDL_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_MIMO_ParametersDL_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-CA-MIMO-ParametersDL-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_CA_MIMO_ParametersUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_MIMO_ParametersUL_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-CA-MIMO-ParametersUL-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_FD_MIMO_Coexistence),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sTTI_FD_MIMO_Coexistence_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-FD-MIMO-Coexistence"
		},
	{ ATF_POINTER, 6, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_MIMO_CA_ParametersPerBoBCs_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBC_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-MIMO-CA-ParametersPerBoBCs-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_MIMO_CA_ParametersPerBoBCs_v1530),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBC_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-MIMO-CA-ParametersPerBoBCs-v1530"
		},
	{ ATF_POINTER, 4, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_SupportedCombinations_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_STTI_SupportedCombinations_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-SupportedCombinations-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct STTI_SPT_BandParameters_r15, sTTI_SupportedCSI_Proc_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sTTI_SupportedCSI_Proc_r15_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sTTI-SupportedCSI-Proc-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct STTI_SPT_BandParameters_r15, ul_256QAM_Slot_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_256QAM_Slot_r15_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-256QAM-Slot-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct STTI_SPT_BandParameters_r15, ul_256QAM_Subslot_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_256QAM_Subslot_r15_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-256QAM-Subslot-r15"
		},
};
static const int asn_MAP_STTI_SPT_BandParameters_r15_oms_1[] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_STTI_SPT_BandParameters_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_STTI_SPT_BandParameters_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-1024QAM-Slot-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-1024QAM-SubslotTA-1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-1024QAM-SubslotTA-2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* simultaneousTx-differentTx-duration-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sTTI-CA-MIMO-ParametersDL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sTTI-CA-MIMO-ParametersUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sTTI-FD-MIMO-Coexistence */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sTTI-MIMO-CA-ParametersPerBoBCs-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sTTI-MIMO-CA-ParametersPerBoBCs-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sTTI-SupportedCombinations-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sTTI-SupportedCSI-Proc-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ul-256QAM-Slot-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* ul-256QAM-Subslot-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_STTI_SPT_BandParameters_r15_specs_1 = {
	sizeof(struct STTI_SPT_BandParameters_r15),
	offsetof(struct STTI_SPT_BandParameters_r15, _asn_ctx),
	asn_MAP_STTI_SPT_BandParameters_r15_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_STTI_SPT_BandParameters_r15_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_STTI_SPT_BandParameters_r15 = {
	"STTI-SPT-BandParameters-r15",
	"STTI-SPT-BandParameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_STTI_SPT_BandParameters_r15_tags_1,
	sizeof(asn_DEF_STTI_SPT_BandParameters_r15_tags_1)
		/sizeof(asn_DEF_STTI_SPT_BandParameters_r15_tags_1[0]), /* 1 */
	asn_DEF_STTI_SPT_BandParameters_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_STTI_SPT_BandParameters_r15_tags_1)
		/sizeof(asn_DEF_STTI_SPT_BandParameters_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_STTI_SPT_BandParameters_r15_1,
	13,	/* Elements count */
	&asn_SPC_STTI_SPT_BandParameters_r15_specs_1	/* Additional specs */
};

