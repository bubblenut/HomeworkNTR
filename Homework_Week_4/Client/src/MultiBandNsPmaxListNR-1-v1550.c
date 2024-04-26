/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MultiBandNsPmaxListNR-1-v1550.h"

#include "NS-PmaxListNR-r15.h"
asn_per_constraints_t asn_PER_type_MultiBandNsPmaxListNR_1_v1550_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  31 }	/* (SIZE(1..31)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MultiBandNsPmaxListNR_1_v1550_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NS_PmaxListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MultiBandNsPmaxListNR_1_v1550_specs_1 = {
	sizeof(struct MultiBandNsPmaxListNR_1_v1550),
	offsetof(struct MultiBandNsPmaxListNR_1_v1550, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MultiBandNsPmaxListNR_1_v1550 = {
	"MultiBandNsPmaxListNR-1-v1550",
	"MultiBandNsPmaxListNR-1-v1550",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1,
	sizeof(asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1)
		/sizeof(asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1[0]), /* 1 */
	asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1)
		/sizeof(asn_DEF_MultiBandNsPmaxListNR_1_v1550_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_MultiBandNsPmaxListNR_1_v1550_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MultiBandNsPmaxListNR_1_v1550_1,
	1,	/* Single element */
	&asn_SPC_MultiBandNsPmaxListNR_1_v1550_specs_1	/* Additional specs */
};

