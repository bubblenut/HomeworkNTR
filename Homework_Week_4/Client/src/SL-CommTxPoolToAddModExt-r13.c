/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-CommTxPoolToAddModExt-r13.h"

asn_TYPE_member_t asn_MBR_SL_CommTxPoolToAddModExt_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolToAddModExt_r13, poolIdentity_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxPoolIdentity_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolIdentity-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolToAddModExt_r13, pool_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePool_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pool-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_CommTxPoolToAddModExt_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* poolIdentity-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pool-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_CommTxPoolToAddModExt_r13_specs_1 = {
	sizeof(struct SL_CommTxPoolToAddModExt_r13),
	offsetof(struct SL_CommTxPoolToAddModExt_r13, _asn_ctx),
	asn_MAP_SL_CommTxPoolToAddModExt_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_CommTxPoolToAddModExt_r13 = {
	"SL-CommTxPoolToAddModExt-r13",
	"SL-CommTxPoolToAddModExt-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1,
	sizeof(asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolToAddModExt_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_CommTxPoolToAddModExt_r13_1,
	2,	/* Elements count */
	&asn_SPC_SL_CommTxPoolToAddModExt_r13_specs_1	/* Additional specs */
};

