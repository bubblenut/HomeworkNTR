/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UL-ConfigCommon-NB-v1530.h"

#include "NPRACH-ParametersListFmt2-NB-r15.h"
asn_TYPE_member_t asn_MBR_UL_ConfigCommon_NB_v1530_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UL_ConfigCommon_NB_v1530, nprach_ParametersListFmt2_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ParametersListFmt2_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ParametersListFmt2-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct UL_ConfigCommon_NB_v1530, nprach_ParametersListFmt2EDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ParametersListFmt2_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ParametersListFmt2EDT-r15"
		},
};
static const int asn_MAP_UL_ConfigCommon_NB_v1530_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UL_ConfigCommon_NB_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_ConfigCommon_NB_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-ParametersListFmt2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nprach-ParametersListFmt2EDT-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_ConfigCommon_NB_v1530_specs_1 = {
	sizeof(struct UL_ConfigCommon_NB_v1530),
	offsetof(struct UL_ConfigCommon_NB_v1530, _asn_ctx),
	asn_MAP_UL_ConfigCommon_NB_v1530_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UL_ConfigCommon_NB_v1530_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_ConfigCommon_NB_v1530 = {
	"UL-ConfigCommon-NB-v1530",
	"UL-ConfigCommon-NB-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_ConfigCommon_NB_v1530_tags_1,
	sizeof(asn_DEF_UL_ConfigCommon_NB_v1530_tags_1)
		/sizeof(asn_DEF_UL_ConfigCommon_NB_v1530_tags_1[0]), /* 1 */
	asn_DEF_UL_ConfigCommon_NB_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_ConfigCommon_NB_v1530_tags_1)
		/sizeof(asn_DEF_UL_ConfigCommon_NB_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_ConfigCommon_NB_v1530_1,
	2,	/* Elements count */
	&asn_SPC_UL_ConfigCommon_NB_v1530_specs_1	/* Additional specs */
};

