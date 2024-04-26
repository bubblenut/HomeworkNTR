/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCConnectionReestablishmentReject-r8-IEs.h"

#include "RRCConnectionReestablishmentReject-v8a0-IEs.h"
asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentReject_r8_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReestablishmentReject_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishmentReject_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReestablishmentReject_r8_IEs_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReestablishmentReject_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentReject_r8_IEs_specs_1 = {
	sizeof(struct RRCConnectionReestablishmentReject_r8_IEs),
	offsetof(struct RRCConnectionReestablishmentReject_r8_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReestablishmentReject_r8_IEs_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReestablishmentReject_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentReject_r8_IEs = {
	"RRCConnectionReestablishmentReject-r8-IEs",
	"RRCConnectionReestablishmentReject-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishmentReject_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReestablishmentReject_r8_IEs_1,
	1,	/* Elements count */
	&asn_SPC_RRCConnectionReestablishmentReject_r8_IEs_specs_1	/* Additional specs */
};

