/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UEAssistanceInformation-v1530-IEs.h"

static asn_TYPE_member_t asn_MBR_sps_AssistanceInformation_v1530_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEAssistanceInformation_v1530_IEs__sps_AssistanceInformation_v1530, trafficPatternInfoListSL_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficPatternInfoList_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trafficPatternInfoListSL-v1530"
		},
};
static const ber_tlv_tag_t asn_DEF_sps_AssistanceInformation_v1530_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sps_AssistanceInformation_v1530_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* trafficPatternInfoListSL-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sps_AssistanceInformation_v1530_specs_2 = {
	sizeof(struct UEAssistanceInformation_v1530_IEs__sps_AssistanceInformation_v1530),
	offsetof(struct UEAssistanceInformation_v1530_IEs__sps_AssistanceInformation_v1530, _asn_ctx),
	asn_MAP_sps_AssistanceInformation_v1530_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sps_AssistanceInformation_v1530_2 = {
	"sps-AssistanceInformation-v1530",
	"sps-AssistanceInformation-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_sps_AssistanceInformation_v1530_tags_2,
	sizeof(asn_DEF_sps_AssistanceInformation_v1530_tags_2)
		/sizeof(asn_DEF_sps_AssistanceInformation_v1530_tags_2[0]) - 1, /* 1 */
	asn_DEF_sps_AssistanceInformation_v1530_tags_2,	/* Same as above */
	sizeof(asn_DEF_sps_AssistanceInformation_v1530_tags_2)
		/sizeof(asn_DEF_sps_AssistanceInformation_v1530_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_sps_AssistanceInformation_v1530_2,
	1,	/* Elements count */
	&asn_SPC_sps_AssistanceInformation_v1530_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct UEAssistanceInformation_v1530_IEs__nonCriticalExtension),
	offsetof(struct UEAssistanceInformation_v1530_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1530_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UEAssistanceInformation_v1530_IEs, sps_AssistanceInformation_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sps_AssistanceInformation_v1530_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-AssistanceInformation-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEAssistanceInformation_v1530_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEAssistanceInformation_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sps-AssistanceInformation-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1530_IEs_specs_1 = {
	sizeof(struct UEAssistanceInformation_v1530_IEs),
	offsetof(struct UEAssistanceInformation_v1530_IEs, _asn_ctx),
	asn_MAP_UEAssistanceInformation_v1530_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEAssistanceInformation_v1530_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1530_IEs = {
	"UEAssistanceInformation-v1530-IEs",
	"UEAssistanceInformation-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1,
	sizeof(asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEAssistanceInformation_v1530_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UEAssistanceInformation_v1530_IEs_specs_1	/* Additional specs */
};

