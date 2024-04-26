/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PreambleTransMax.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PreambleTransMax_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PreambleTransMax_value2enum_1[] = {
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
static const unsigned int asn_MAP_PreambleTransMax_enum2value_1[] = {
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
const asn_INTEGER_specifics_t asn_SPC_PreambleTransMax_specs_1 = {
	asn_MAP_PreambleTransMax_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PreambleTransMax_enum2value_1,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PreambleTransMax_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PreambleTransMax = {
	"PreambleTransMax",
	"PreambleTransMax",
	&asn_OP_NativeEnumerated,
	asn_DEF_PreambleTransMax_tags_1,
	sizeof(asn_DEF_PreambleTransMax_tags_1)
		/sizeof(asn_DEF_PreambleTransMax_tags_1[0]), /* 1 */
	asn_DEF_PreambleTransMax_tags_1,	/* Same as above */
	sizeof(asn_DEF_PreambleTransMax_tags_1)
		/sizeof(asn_DEF_PreambleTransMax_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PreambleTransMax_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PreambleTransMax_specs_1	/* Additional specs */
};

