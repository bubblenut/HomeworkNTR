/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-DiscConfigRemoteUE-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_hystMax_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_hystMax_r13_value2enum_3[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" }
};
static const unsigned int asn_MAP_hystMax_r13_enum2value_3[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3	/* dB9(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_hystMax_r13_specs_3 = {
	asn_MAP_hystMax_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_hystMax_r13_enum2value_3,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hystMax_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hystMax_r13_3 = {
	"hystMax-r13",
	"hystMax-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_hystMax_r13_tags_3,
	sizeof(asn_DEF_hystMax_r13_tags_3)
		/sizeof(asn_DEF_hystMax_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_hystMax_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_hystMax_r13_tags_3)
		/sizeof(asn_DEF_hystMax_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_hystMax_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hystMax_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_DiscConfigRemoteUE_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfigRemoteUE_r13, threshHigh_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeSL4_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshHigh-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfigRemoteUE_r13, hystMax_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hystMax_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hystMax-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfigRemoteUE_r13, reselectionInfoIC_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionInfoRelay_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reselectionInfoIC-r13"
		},
};
static const int asn_MAP_SL_DiscConfigRemoteUE_r13_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscConfigRemoteUE_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshHigh-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hystMax-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reselectionInfoIC-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_DiscConfigRemoteUE_r13_specs_1 = {
	sizeof(struct SL_DiscConfigRemoteUE_r13),
	offsetof(struct SL_DiscConfigRemoteUE_r13, _asn_ctx),
	asn_MAP_SL_DiscConfigRemoteUE_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_DiscConfigRemoteUE_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscConfigRemoteUE_r13 = {
	"SL-DiscConfigRemoteUE-r13",
	"SL-DiscConfigRemoteUE-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1,
	sizeof(asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscConfigRemoteUE_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_DiscConfigRemoteUE_r13_1,
	3,	/* Elements count */
	&asn_SPC_SL_DiscConfigRemoteUE_r13_specs_1	/* Additional specs */
};

