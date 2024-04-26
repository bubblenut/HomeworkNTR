/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-MinT2Value-r15.h"

static int
memb_minT2Value_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 10 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_minT2Value_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  10,  20 }	/* (10..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SL_MinT2Value_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_MinT2Value_r15, priorityList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PriorityList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityList-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_MinT2Value_r15, minT2Value_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_minT2Value_r15_constr_3,  memb_minT2Value_r15_constraint_1 },
		0, 0, /* No default value */
		"minT2Value-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_MinT2Value_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_MinT2Value_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* minT2Value-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_MinT2Value_r15_specs_1 = {
	sizeof(struct SL_MinT2Value_r15),
	offsetof(struct SL_MinT2Value_r15, _asn_ctx),
	asn_MAP_SL_MinT2Value_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_MinT2Value_r15 = {
	"SL-MinT2Value-r15",
	"SL-MinT2Value-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_MinT2Value_r15_tags_1,
	sizeof(asn_DEF_SL_MinT2Value_r15_tags_1)
		/sizeof(asn_DEF_SL_MinT2Value_r15_tags_1[0]), /* 1 */
	asn_DEF_SL_MinT2Value_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_MinT2Value_r15_tags_1)
		/sizeof(asn_DEF_SL_MinT2Value_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_MinT2Value_r15_1,
	2,	/* Elements count */
	&asn_SPC_SL_MinT2Value_r15_specs_1	/* Additional specs */
};

