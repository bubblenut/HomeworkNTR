/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UECapabilityInformation-NB-r13-IEs.h"

#include "UECapabilityInformation-NB-Ext-r14-IEs.h"
asn_TYPE_member_t asn_MBR_UECapabilityInformation_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UECapabilityInformation_NB_r13_IEs, ue_Capability_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Capability_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Capability-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UECapabilityInformation_NB_r13_IEs, ue_RadioPagingInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioPagingInfo_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-RadioPagingInfo-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct UECapabilityInformation_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct UECapabilityInformation_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityInformation_NB_Ext_r14_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UECapabilityInformation_NB_r13_IEs_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UECapabilityInformation_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Capability-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-RadioPagingInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_NB_r13_IEs_specs_1 = {
	sizeof(struct UECapabilityInformation_NB_r13_IEs),
	offsetof(struct UECapabilityInformation_NB_r13_IEs, _asn_ctx),
	asn_MAP_UECapabilityInformation_NB_r13_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UECapabilityInformation_NB_r13_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_NB_r13_IEs = {
	"UECapabilityInformation-NB-r13-IEs",
	"UECapabilityInformation-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UECapabilityInformation_NB_r13_IEs_1,
	4,	/* Elements count */
	&asn_SPC_UECapabilityInformation_NB_r13_IEs_specs_1	/* Additional specs */
};

