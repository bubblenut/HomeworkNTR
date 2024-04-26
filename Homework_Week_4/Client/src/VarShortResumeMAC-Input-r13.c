/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "VarShortResumeMAC-Input-r13.h"

static int
memb_resumeDiscriminator_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_resumeDiscriminator_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_VarShortResumeMAC_Input_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortResumeMAC_Input_r13, cellIdentity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortResumeMAC_Input_r13, physCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortResumeMAC_Input_r13, c_RNTI_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c-RNTI-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortResumeMAC_Input_r13, resumeDiscriminator_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_resumeDiscriminator_r13_constr_5,  memb_resumeDiscriminator_r13_constraint_1 },
		0, 0, /* No default value */
		"resumeDiscriminator-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_VarShortResumeMAC_Input_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarShortResumeMAC_Input_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdentity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* c-RNTI-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* resumeDiscriminator-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_VarShortResumeMAC_Input_r13_specs_1 = {
	sizeof(struct VarShortResumeMAC_Input_r13),
	offsetof(struct VarShortResumeMAC_Input_r13, _asn_ctx),
	asn_MAP_VarShortResumeMAC_Input_r13_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarShortResumeMAC_Input_r13 = {
	"VarShortResumeMAC-Input-r13",
	"VarShortResumeMAC-Input-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_VarShortResumeMAC_Input_r13_tags_1,
	sizeof(asn_DEF_VarShortResumeMAC_Input_r13_tags_1)
		/sizeof(asn_DEF_VarShortResumeMAC_Input_r13_tags_1[0]), /* 1 */
	asn_DEF_VarShortResumeMAC_Input_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarShortResumeMAC_Input_r13_tags_1)
		/sizeof(asn_DEF_VarShortResumeMAC_Input_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarShortResumeMAC_Input_r13_1,
	4,	/* Elements count */
	&asn_SPC_VarShortResumeMAC_Input_r13_specs_1	/* Additional specs */
};

