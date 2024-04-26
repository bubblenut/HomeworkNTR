/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "AB-ConfigPLMN-NB-r13.h"

#include "AB-Config-NB-r13.h"
asn_TYPE_member_t asn_MBR_AB_ConfigPLMN_NB_r13_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AB_ConfigPLMN_NB_r13, ab_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AB_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Config-r13"
		},
};
static const int asn_MAP_AB_ConfigPLMN_NB_r13_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_AB_ConfigPLMN_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AB_ConfigPLMN_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ab-Config-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_AB_ConfigPLMN_NB_r13_specs_1 = {
	sizeof(struct AB_ConfigPLMN_NB_r13),
	offsetof(struct AB_ConfigPLMN_NB_r13, _asn_ctx),
	asn_MAP_AB_ConfigPLMN_NB_r13_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_AB_ConfigPLMN_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AB_ConfigPLMN_NB_r13 = {
	"AB-ConfigPLMN-NB-r13",
	"AB-ConfigPLMN-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_AB_ConfigPLMN_NB_r13_tags_1,
	sizeof(asn_DEF_AB_ConfigPLMN_NB_r13_tags_1)
		/sizeof(asn_DEF_AB_ConfigPLMN_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_AB_ConfigPLMN_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_AB_ConfigPLMN_NB_r13_tags_1)
		/sizeof(asn_DEF_AB_ConfigPLMN_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AB_ConfigPLMN_NB_r13_1,
	1,	/* Elements count */
	&asn_SPC_AB_ConfigPLMN_NB_r13_specs_1	/* Additional specs */
};

