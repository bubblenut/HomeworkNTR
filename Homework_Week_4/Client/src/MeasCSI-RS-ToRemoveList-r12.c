/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasCSI-RS-ToRemoveList-r12.h"

asn_per_constraints_t asn_PER_type_MeasCSI_RS_ToRemoveList_r12_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  96 }	/* (SIZE(1..96)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasCSI_RS_ToRemoveList_r12_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_MeasCSI_RS_Id_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MeasCSI_RS_ToRemoveList_r12_specs_1 = {
	sizeof(struct MeasCSI_RS_ToRemoveList_r12),
	offsetof(struct MeasCSI_RS_ToRemoveList_r12, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MeasCSI_RS_ToRemoveList_r12 = {
	"MeasCSI-RS-ToRemoveList-r12",
	"MeasCSI-RS-ToRemoveList-r12",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1,
	sizeof(asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1)
		/sizeof(asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1[0]), /* 1 */
	asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1)
		/sizeof(asn_DEF_MeasCSI_RS_ToRemoveList_r12_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_MeasCSI_RS_ToRemoveList_r12_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MeasCSI_RS_ToRemoveList_r12_1,
	1,	/* Single element */
	&asn_SPC_MeasCSI_RS_ToRemoveList_r12_specs_1	/* Additional specs */
};

