/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-DiscTxResourceReq-r13.h"

static int
memb_carrierFreqDiscTx_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_discTxResourceReq_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_carrierFreqDiscTx_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_discTxResourceReq_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SL_DiscTxResourceReq_r13_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_DiscTxResourceReq_r13, carrierFreqDiscTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_carrierFreqDiscTx_r13_constr_2,  memb_carrierFreqDiscTx_r13_constraint_1 },
		0, 0, /* No default value */
		"carrierFreqDiscTx-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResourceReq_r13, discTxResourceReq_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_discTxResourceReq_r13_constr_3,  memb_discTxResourceReq_r13_constraint_1 },
		0, 0, /* No default value */
		"discTxResourceReq-r13"
		},
};
static const int asn_MAP_SL_DiscTxResourceReq_r13_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SL_DiscTxResourceReq_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscTxResourceReq_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqDiscTx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxResourceReq-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxResourceReq_r13_specs_1 = {
	sizeof(struct SL_DiscTxResourceReq_r13),
	offsetof(struct SL_DiscTxResourceReq_r13, _asn_ctx),
	asn_MAP_SL_DiscTxResourceReq_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_DiscTxResourceReq_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxResourceReq_r13 = {
	"SL-DiscTxResourceReq-r13",
	"SL-DiscTxResourceReq-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_DiscTxResourceReq_r13_tags_1,
	sizeof(asn_DEF_SL_DiscTxResourceReq_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxResourceReq_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscTxResourceReq_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscTxResourceReq_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxResourceReq_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_DiscTxResourceReq_r13_1,
	2,	/* Elements count */
	&asn_SPC_SL_DiscTxResourceReq_r13_specs_1	/* Additional specs */
};

