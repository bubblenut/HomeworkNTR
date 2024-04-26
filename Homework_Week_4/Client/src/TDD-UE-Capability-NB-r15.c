/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "TDD-UE-Capability-NB-r15.h"

#include "PhyLayerParameters-NB-r13.h"
#include "PhyLayerParameters-NB-v1430.h"
#include "PhyLayerParameters-NB-v1530.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ue_Category_NB_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_Category_NB_r15_value2enum_2[] = {
	{ 0,	3,	"nb2" }
};
static const unsigned int asn_MAP_ue_Category_NB_r15_enum2value_2[] = {
	0	/* nb2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_Category_NB_r15_specs_2 = {
	asn_MAP_ue_Category_NB_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_Category_NB_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_Category_NB_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Category_NB_r15_2 = {
	"ue-Category-NB-r15",
	"ue-Category-NB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_Category_NB_r15_tags_2,
	sizeof(asn_DEF_ue_Category_NB_r15_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_Category_NB_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_Category_NB_r15_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ue_Category_NB_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_Category_NB_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TDD_UE_Capability_NB_r15_1[] = {
	{ ATF_POINTER, 4, offsetof(struct TDD_UE_Capability_NB_r15, ue_Category_NB_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_Category_NB_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Category-NB-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct TDD_UE_Capability_NB_r15, phyLayerParametersRel13_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParametersRel13-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct TDD_UE_Capability_NB_r15, phyLayerParametersRel14_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParametersRel14-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct TDD_UE_Capability_NB_r15, phyLayerParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1530"
		},
};
static const int asn_MAP_TDD_UE_Capability_NB_r15_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_TDD_UE_Capability_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TDD_UE_Capability_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-NB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phyLayerParametersRel13-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* phyLayerParametersRel14-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* phyLayerParameters-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_TDD_UE_Capability_NB_r15_specs_1 = {
	sizeof(struct TDD_UE_Capability_NB_r15),
	offsetof(struct TDD_UE_Capability_NB_r15, _asn_ctx),
	asn_MAP_TDD_UE_Capability_NB_r15_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_TDD_UE_Capability_NB_r15_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TDD_UE_Capability_NB_r15 = {
	"TDD-UE-Capability-NB-r15",
	"TDD-UE-Capability-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_TDD_UE_Capability_NB_r15_tags_1,
	sizeof(asn_DEF_TDD_UE_Capability_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_UE_Capability_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_TDD_UE_Capability_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_UE_Capability_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_UE_Capability_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TDD_UE_Capability_NB_r15_1,
	4,	/* Elements count */
	&asn_SPC_TDD_UE_Capability_NB_r15_specs_1	/* Additional specs */
};

