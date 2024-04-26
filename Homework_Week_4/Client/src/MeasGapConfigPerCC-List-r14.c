/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasGapConfigPerCC-List-r14.h"

#include "MeasGapConfigToRemoveList-r14.h"
#include "MeasGapConfigToAddModList-r14.h"
asn_per_constraints_t asn_PER_type_MeasGapConfigPerCC_List_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasGapConfigPerCC_List_r14__setup, measGapConfigToRemoveList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapConfigToRemoveList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfigToRemoveList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasGapConfigPerCC_List_r14__setup, measGapConfigToAddModList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapConfigToAddModList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfigToAddModList-r14"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measGapConfigToRemoveList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measGapConfigToAddModList-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct MeasGapConfigPerCC_List_r14__setup),
	offsetof(struct MeasGapConfigPerCC_List_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasGapConfigPerCC_List_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapConfigPerCC_List_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapConfigPerCC_List_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasGapConfigPerCC_List_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_MeasGapConfigPerCC_List_r14_specs_1 = {
	sizeof(struct MeasGapConfigPerCC_List_r14),
	offsetof(struct MeasGapConfigPerCC_List_r14, _asn_ctx),
	offsetof(struct MeasGapConfigPerCC_List_r14, present),
	sizeof(((struct MeasGapConfigPerCC_List_r14 *)0)->present),
	asn_MAP_MeasGapConfigPerCC_List_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasGapConfigPerCC_List_r14 = {
	"MeasGapConfigPerCC-List-r14",
	"MeasGapConfigPerCC-List-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_MeasGapConfigPerCC_List_r14_constr_1, CHOICE_constraint },
	asn_MBR_MeasGapConfigPerCC_List_r14_1,
	2,	/* Elements count */
	&asn_SPC_MeasGapConfigPerCC_List_r14_specs_1	/* Additional specs */
};

