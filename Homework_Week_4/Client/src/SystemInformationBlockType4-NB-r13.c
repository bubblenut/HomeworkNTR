/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType4-NB-r13.h"

#include "IntraFreqNeighCellList.h"
#include "IntraFreqBlackCellList.h"
#include "NSSS-RRM-Config-NB-r15.h"
#include "IntraFreqNeighCellList-NB-v1530.h"
asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_NB_r13_1[] = {
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType4_NB_r13, intraFreqNeighCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType4_NB_r13, intraFreqBlackCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqBlackCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqBlackCellList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType4_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType4_NB_r13, nsss_RRM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NSSS_RRM_Config_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nsss-RRM-Config-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType4_NB_r13, intraFreqNeighCellList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-v1530"
		},
};
static const int asn_MAP_SystemInformationBlockType4_NB_r13_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType4_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType4_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nsss-RRM-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* intraFreqNeighCellList-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_NB_r13_specs_1 = {
	sizeof(struct SystemInformationBlockType4_NB_r13),
	offsetof(struct SystemInformationBlockType4_NB_r13, _asn_ctx),
	asn_MAP_SystemInformationBlockType4_NB_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType4_NB_r13_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4_NB_r13 = {
	"SystemInformationBlockType4-NB-r13",
	"SystemInformationBlockType4-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType4_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType4_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType4_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType4_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType4_NB_r13_1,
	5,	/* Elements count */
	&asn_SPC_SystemInformationBlockType4_NB_r13_specs_1	/* Additional specs */
};

