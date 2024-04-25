/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType4.h"

#include "IntraFreqNeighCellList.h"
#include "IntraFreqBlackCellList.h"
#include "PhysCellIdRange.h"
asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType4, intraFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType4, intraFreqBlackCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqBlackCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqBlackCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType4, csg_PhysCellIdRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-PhysCellIdRange"
		},
};
static const int asn_MAP_SystemInformationBlockType4_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* csg-PhysCellIdRange */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_specs_1 = {
	sizeof(struct SystemInformationBlockType4),
	offsetof(struct SystemInformationBlockType4, _asn_ctx),
	asn_MAP_SystemInformationBlockType4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType4_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4 = {
	"SystemInformationBlockType4",
	"SystemInformationBlockType4",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType4_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType4_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType4_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType4_specs_1	/* Additional specs */
};

