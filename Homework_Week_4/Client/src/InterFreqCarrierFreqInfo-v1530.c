/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "InterFreqCarrierFreqInfo-v1530.h"

#include "InterFreqNeighHSDN-CellList-r15.h"
#include "CellSelectionInfoCE-v1530.h"
asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo_v1530, hsdn_Indication_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hsdn-Indication-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo_v1530, interFreqNeighHSDN_CellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqNeighHSDN_CellList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqNeighHSDN-CellList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_v1530, cellSelectionInfoCE_v1530),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE-v1530"
		},
};
static const int asn_MAP_InterFreqCarrierFreqInfo_v1530_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqCarrierFreqInfo_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hsdn-Indication-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqNeighHSDN-CellList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellSelectionInfoCE-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1530_specs_1 = {
	sizeof(struct InterFreqCarrierFreqInfo_v1530),
	offsetof(struct InterFreqCarrierFreqInfo_v1530, _asn_ctx),
	asn_MAP_InterFreqCarrierFreqInfo_v1530_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_InterFreqCarrierFreqInfo_v1530_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1530 = {
	"InterFreqCarrierFreqInfo-v1530",
	"InterFreqCarrierFreqInfo-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1,
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqCarrierFreqInfo_v1530_1,
	3,	/* Elements count */
	&asn_SPC_InterFreqCarrierFreqInfo_v1530_specs_1	/* Additional specs */
};

