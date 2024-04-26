/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BandParameters-v1130.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_supportedCSI_Proc_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_supportedCSI_Proc_r11_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_supportedCSI_Proc_r11_enum2value_2[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportedCSI_Proc_r11_specs_2 = {
	asn_MAP_supportedCSI_Proc_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_supportedCSI_Proc_r11_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportedCSI_Proc_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r11_2 = {
	"supportedCSI-Proc-r11",
	"supportedCSI-Proc-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportedCSI_Proc_r11_tags_2,
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_2)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_supportedCSI_Proc_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_2)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_supportedCSI_Proc_r11_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportedCSI_Proc_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_v1130, supportedCSI_Proc_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportedCSI_Proc_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCSI-Proc-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_BandParameters_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedCSI-Proc-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1130_specs_1 = {
	sizeof(struct BandParameters_v1130),
	offsetof(struct BandParameters_v1130, _asn_ctx),
	asn_MAP_BandParameters_v1130_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1130 = {
	"BandParameters-v1130",
	"BandParameters-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1130_tags_1,
	sizeof(asn_DEF_BandParameters_v1130_tags_1)
		/sizeof(asn_DEF_BandParameters_v1130_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1130_tags_1)
		/sizeof(asn_DEF_BandParameters_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandParameters_v1130_1,
	1,	/* Elements count */
	&asn_SPC_BandParameters_v1130_specs_1	/* Additional specs */
};

