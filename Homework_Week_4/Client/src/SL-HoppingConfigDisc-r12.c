/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-HoppingConfigDisc-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_a_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_b_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_c_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_a_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  200 }	/* (1..200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_b_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (1..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_c_r12_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n5" }
};
static const unsigned int asn_MAP_c_r12_enum2value_4[] = {
	0,	/* n1(0) */
	1	/* n5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_c_r12_specs_4 = {
	asn_MAP_c_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_c_r12_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_c_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c_r12_4 = {
	"c-r12",
	"c-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_c_r12_tags_4,
	sizeof(asn_DEF_c_r12_tags_4)
		/sizeof(asn_DEF_c_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_c_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_c_r12_tags_4)
		/sizeof(asn_DEF_c_r12_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_c_r12_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_c_r12_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_HoppingConfigDisc_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigDisc_r12, a_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_a_r12_constr_2,  memb_a_r12_constraint_1 },
		0, 0, /* No default value */
		"a-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigDisc_r12, b_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_b_r12_constr_3,  memb_b_r12_constraint_1 },
		0, 0, /* No default value */
		"b-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_HoppingConfigDisc_r12, c_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_c_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_HoppingConfigDisc_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_HoppingConfigDisc_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* c-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_HoppingConfigDisc_r12_specs_1 = {
	sizeof(struct SL_HoppingConfigDisc_r12),
	offsetof(struct SL_HoppingConfigDisc_r12, _asn_ctx),
	asn_MAP_SL_HoppingConfigDisc_r12_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_HoppingConfigDisc_r12 = {
	"SL-HoppingConfigDisc-r12",
	"SL-HoppingConfigDisc-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_HoppingConfigDisc_r12_tags_1,
	sizeof(asn_DEF_SL_HoppingConfigDisc_r12_tags_1)
		/sizeof(asn_DEF_SL_HoppingConfigDisc_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_HoppingConfigDisc_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_HoppingConfigDisc_r12_tags_1)
		/sizeof(asn_DEF_SL_HoppingConfigDisc_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_HoppingConfigDisc_r12_1,
	3,	/* Elements count */
	&asn_SPC_SL_HoppingConfigDisc_r12_specs_1	/* Additional specs */
};

