/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SecurityAlgorithmConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_cipheringAlgorithm_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_integrityProtAlgorithm_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cipheringAlgorithm_value2enum_2[] = {
	{ 0,	4,	"eea0" },
	{ 1,	4,	"eea1" },
	{ 2,	4,	"eea2" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_cipheringAlgorithm_enum2value_2[] = {
	0,	/* eea0(0) */
	1,	/* eea1(1) */
	2,	/* eea2(2) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3	/* spare5(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_cipheringAlgorithm_specs_2 = {
	asn_MAP_cipheringAlgorithm_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_cipheringAlgorithm_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cipheringAlgorithm_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cipheringAlgorithm_2 = {
	"cipheringAlgorithm",
	"cipheringAlgorithm",
	&asn_OP_NativeEnumerated,
	asn_DEF_cipheringAlgorithm_tags_2,
	sizeof(asn_DEF_cipheringAlgorithm_tags_2)
		/sizeof(asn_DEF_cipheringAlgorithm_tags_2[0]) - 1, /* 1 */
	asn_DEF_cipheringAlgorithm_tags_2,	/* Same as above */
	sizeof(asn_DEF_cipheringAlgorithm_tags_2)
		/sizeof(asn_DEF_cipheringAlgorithm_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_cipheringAlgorithm_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cipheringAlgorithm_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_integrityProtAlgorithm_value2enum_12[] = {
	{ 0,	8,	"reserved" },
	{ 1,	4,	"eia1" },
	{ 2,	4,	"eia2" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_integrityProtAlgorithm_enum2value_12[] = {
	1,	/* eia1(1) */
	2,	/* eia2(2) */
	0,	/* reserved(0) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3	/* spare5(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_integrityProtAlgorithm_specs_12 = {
	asn_MAP_integrityProtAlgorithm_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_integrityProtAlgorithm_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_integrityProtAlgorithm_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_integrityProtAlgorithm_12 = {
	"integrityProtAlgorithm",
	"integrityProtAlgorithm",
	&asn_OP_NativeEnumerated,
	asn_DEF_integrityProtAlgorithm_tags_12,
	sizeof(asn_DEF_integrityProtAlgorithm_tags_12)
		/sizeof(asn_DEF_integrityProtAlgorithm_tags_12[0]) - 1, /* 1 */
	asn_DEF_integrityProtAlgorithm_tags_12,	/* Same as above */
	sizeof(asn_DEF_integrityProtAlgorithm_tags_12)
		/sizeof(asn_DEF_integrityProtAlgorithm_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_integrityProtAlgorithm_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_integrityProtAlgorithm_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SecurityAlgorithmConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityAlgorithmConfig, cipheringAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cipheringAlgorithm_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cipheringAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityAlgorithmConfig, integrityProtAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_integrityProtAlgorithm_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"integrityProtAlgorithm"
		},
};
static const ber_tlv_tag_t asn_DEF_SecurityAlgorithmConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityAlgorithmConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cipheringAlgorithm */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* integrityProtAlgorithm */
};
asn_SEQUENCE_specifics_t asn_SPC_SecurityAlgorithmConfig_specs_1 = {
	sizeof(struct SecurityAlgorithmConfig),
	offsetof(struct SecurityAlgorithmConfig, _asn_ctx),
	asn_MAP_SecurityAlgorithmConfig_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SecurityAlgorithmConfig = {
	"SecurityAlgorithmConfig",
	"SecurityAlgorithmConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_SecurityAlgorithmConfig_tags_1,
	sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1)
		/sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1[0]), /* 1 */
	asn_DEF_SecurityAlgorithmConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1)
		/sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SecurityAlgorithmConfig_1,
	2,	/* Elements count */
	&asn_SPC_SecurityAlgorithmConfig_specs_1	/* Additional specs */
};
