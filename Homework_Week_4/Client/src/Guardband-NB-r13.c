/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "Guardband-NB-r13.h"

static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_spare_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Guardband_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Guardband_NB_r13, rasterOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelRasterOffset_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rasterOffset-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Guardband_NB_r13, spare),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_spare_constr_3,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_Guardband_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Guardband_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rasterOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_Guardband_NB_r13_specs_1 = {
	sizeof(struct Guardband_NB_r13),
	offsetof(struct Guardband_NB_r13, _asn_ctx),
	asn_MAP_Guardband_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Guardband_NB_r13 = {
	"Guardband-NB-r13",
	"Guardband-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_Guardband_NB_r13_tags_1,
	sizeof(asn_DEF_Guardband_NB_r13_tags_1)
		/sizeof(asn_DEF_Guardband_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_Guardband_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_Guardband_NB_r13_tags_1)
		/sizeof(asn_DEF_Guardband_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Guardband_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_Guardband_NB_r13_specs_1	/* Additional specs */
};

