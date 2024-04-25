/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "VarShortMAC-Input.h"

static asn_TYPE_member_t asn_MBR_VarShortMAC_Input_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c-RNTI"
		},
};
static const ber_tlv_tag_t asn_DEF_VarShortMAC_Input_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarShortMAC_Input_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* c-RNTI */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarShortMAC_Input_specs_1 = {
	sizeof(struct VarShortMAC_Input),
	offsetof(struct VarShortMAC_Input, _asn_ctx),
	asn_MAP_VarShortMAC_Input_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarShortMAC_Input = {
	"VarShortMAC-Input",
	"VarShortMAC-Input",
	&asn_OP_SEQUENCE,
	asn_DEF_VarShortMAC_Input_tags_1,
	sizeof(asn_DEF_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_tags_1[0]), /* 1 */
	asn_DEF_VarShortMAC_Input_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarShortMAC_Input_1,
	3,	/* Elements count */
	&asn_SPC_VarShortMAC_Input_specs_1	/* Additional specs */
};
