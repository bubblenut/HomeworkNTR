/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RadioResourceConfigDedicated-NB-r13.h"

#include "SRB-ToAddModList-NB-r13.h"
#include "DRB-ToAddModList-NB-r13.h"
#include "DRB-ToReleaseList-NB-r13.h"
#include "PhysicalConfigDedicated-NB-r13.h"
#include "RLF-TimersAndConstants-NB-r13.h"
#include "SchedulingRequestConfig-NB-r15.h"
static asn_per_constraints_t asn_PER_type_mac_MainConfig_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mac_MainConfig_r13_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13, choice.explicitValue_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfig_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13, choice.defaultValue_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mac_MainConfig_r13_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_mac_MainConfig_r13_specs_5 = {
	sizeof(struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13),
	offsetof(struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13, _asn_ctx),
	offsetof(struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13, present),
	sizeof(((struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13 *)0)->present),
	asn_MAP_mac_MainConfig_r13_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_MainConfig_r13_5 = {
	"mac-MainConfig-r13",
	"mac-MainConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_mac_MainConfig_r13_constr_5, CHOICE_constraint },
	asn_MBR_mac_MainConfig_r13_5,
	2,	/* Elements count */
	&asn_SPC_mac_MainConfig_r13_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_NB_r13_1[] = {
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigDedicated_NB_r13, srb_ToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_ToAddModList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb-ToAddModList-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigDedicated_NB_r13, drb_ToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToAddModList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToAddModList-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicated_NB_r13, drb_ToReleaseList_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToReleaseList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToReleaseList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicated_NB_r13, mac_MainConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mac_MainConfig_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfig-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicated_NB_r13, physicalConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicated-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicated_NB_r13, rlf_TimersAndConstants_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLF_TimersAndConstants_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-TimersAndConstants-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicated_NB_r13, schedulingRequestConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingRequestConfig_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingRequestConfig-r15"
		},
};
static const int asn_MAP_RadioResourceConfigDedicated_NB_r13_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicated_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-ToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-ToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drb-ToReleaseList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-MainConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* physicalConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rlf-TimersAndConstants-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* schedulingRequestConfig-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_NB_r13_specs_1 = {
	sizeof(struct RadioResourceConfigDedicated_NB_r13),
	offsetof(struct RadioResourceConfigDedicated_NB_r13, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicated_NB_r13_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicated_NB_r13_oms_1,	/* Optional members */
	6, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated_NB_r13 = {
	"RadioResourceConfigDedicated-NB-r13",
	"RadioResourceConfigDedicated-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigDedicated_NB_r13_1,
	7,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicated_NB_r13_specs_1	/* Additional specs */
};

