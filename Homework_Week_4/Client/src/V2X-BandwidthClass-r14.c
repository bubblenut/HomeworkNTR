/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "V2X-BandwidthClass-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_V2X_BandwidthClass_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_V2X_BandwidthClass_r14_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" },
	{ 3,	1,	"d" },
	{ 4,	1,	"e" },
	{ 5,	1,	"f" },
	{ 6,	8,	"c1-v1530" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_V2X_BandwidthClass_r14_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2,	/* c(2) */
	6,	/* c1-v1530(6) */
	3,	/* d(3) */
	4,	/* e(4) */
	5	/* f(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_V2X_BandwidthClass_r14_specs_1 = {
	asn_MAP_V2X_BandwidthClass_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_V2X_BandwidthClass_r14_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_V2X_BandwidthClass_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_V2X_BandwidthClass_r14 = {
	"V2X-BandwidthClass-r14",
	"V2X-BandwidthClass-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_V2X_BandwidthClass_r14_tags_1,
	sizeof(asn_DEF_V2X_BandwidthClass_r14_tags_1)
		/sizeof(asn_DEF_V2X_BandwidthClass_r14_tags_1[0]), /* 1 */
	asn_DEF_V2X_BandwidthClass_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2X_BandwidthClass_r14_tags_1)
		/sizeof(asn_DEF_V2X_BandwidthClass_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_V2X_BandwidthClass_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_V2X_BandwidthClass_r14_specs_1	/* Additional specs */
};

