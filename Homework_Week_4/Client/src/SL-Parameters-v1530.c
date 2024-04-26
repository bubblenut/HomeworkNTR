/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-Parameters-v1530.h"

#include "UE-CategorySL-r15.h"
#include "V2X-SupportedBandCombination-v1530.h"
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
static asn_per_constraints_t asn_PER_type_slss_SupportedTxFreq_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sl_64QAM_Tx_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sl_TxDiversity_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_slss_SupportedTxFreq_r15_value2enum_2[] = {
	{ 0,	6,	"single" },
	{ 1,	8,	"multiple" }
};
static const unsigned int asn_MAP_slss_SupportedTxFreq_r15_enum2value_2[] = {
	1,	/* multiple(1) */
	0	/* single(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_SupportedTxFreq_r15_specs_2 = {
	asn_MAP_slss_SupportedTxFreq_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_SupportedTxFreq_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_SupportedTxFreq_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_SupportedTxFreq_r15_2 = {
	"slss-SupportedTxFreq-r15",
	"slss-SupportedTxFreq-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_SupportedTxFreq_r15_tags_2,
	sizeof(asn_DEF_slss_SupportedTxFreq_r15_tags_2)
		/sizeof(asn_DEF_slss_SupportedTxFreq_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_slss_SupportedTxFreq_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_slss_SupportedTxFreq_r15_tags_2)
		/sizeof(asn_DEF_slss_SupportedTxFreq_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_slss_SupportedTxFreq_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_SupportedTxFreq_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_64QAM_Tx_r15_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_sl_64QAM_Tx_r15_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_64QAM_Tx_r15_specs_5 = {
	asn_MAP_sl_64QAM_Tx_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_64QAM_Tx_r15_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_64QAM_Tx_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_64QAM_Tx_r15_5 = {
	"sl-64QAM-Tx-r15",
	"sl-64QAM-Tx-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_64QAM_Tx_r15_tags_5,
	sizeof(asn_DEF_sl_64QAM_Tx_r15_tags_5)
		/sizeof(asn_DEF_sl_64QAM_Tx_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_64QAM_Tx_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_64QAM_Tx_r15_tags_5)
		/sizeof(asn_DEF_sl_64QAM_Tx_r15_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_sl_64QAM_Tx_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_64QAM_Tx_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_TxDiversity_r15_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_sl_TxDiversity_r15_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_TxDiversity_r15_specs_7 = {
	asn_MAP_sl_TxDiversity_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_TxDiversity_r15_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_TxDiversity_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_TxDiversity_r15_7 = {
	"sl-TxDiversity-r15",
	"sl-TxDiversity-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_TxDiversity_r15_tags_7,
	sizeof(asn_DEF_sl_TxDiversity_r15_tags_7)
		/sizeof(asn_DEF_sl_TxDiversity_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_sl_TxDiversity_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_sl_TxDiversity_r15_tags_7)
		/sizeof(asn_DEF_sl_TxDiversity_r15_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_sl_TxDiversity_r15_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_TxDiversity_r15_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_Parameters_v1530_1[] = {
	{ ATF_POINTER, 5, offsetof(struct SL_Parameters_v1530, slss_SupportedTxFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_SupportedTxFreq_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-SupportedTxFreq-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_Parameters_v1530, sl_64QAM_Tx_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_64QAM_Tx_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-64QAM-Tx-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_Parameters_v1530, sl_TxDiversity_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_TxDiversity_r15_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-TxDiversity-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_Parameters_v1530, ue_CategorySL_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_CategorySL_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategorySL-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_Parameters_v1530, v2x_SupportedBandCombinationList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_V2X_SupportedBandCombination_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-SupportedBandCombinationList-v1530"
		},
};
static const int asn_MAP_SL_Parameters_v1530_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SL_Parameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_Parameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* slss-SupportedTxFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-64QAM-Tx-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-TxDiversity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ue-CategorySL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* v2x-SupportedBandCombinationList-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1530_specs_1 = {
	sizeof(struct SL_Parameters_v1530),
	offsetof(struct SL_Parameters_v1530, _asn_ctx),
	asn_MAP_SL_Parameters_v1530_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SL_Parameters_v1530_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1530 = {
	"SL-Parameters-v1530",
	"SL-Parameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_Parameters_v1530_tags_1,
	sizeof(asn_DEF_SL_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_SL_Parameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_Parameters_v1530_1,
	5,	/* Elements count */
	&asn_SPC_SL_Parameters_v1530_specs_1	/* Additional specs */
};

