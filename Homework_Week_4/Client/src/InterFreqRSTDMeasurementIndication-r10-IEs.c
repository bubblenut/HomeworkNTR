/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "InterFreqRSTDMeasurementIndication-r10-IEs.h"

static asn_per_constraints_t asn_PER_type_rstd_InterFreqIndication_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_start_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10__start, rstd_InterFreqInfoList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSTD_InterFreqInfoList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rstd-InterFreqInfoList-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_start_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_start_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rstd-InterFreqInfoList-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_start_specs_3 = {
	sizeof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10__start),
	offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10__start, _asn_ctx),
	asn_MAP_start_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_start_3 = {
	"start",
	"start",
	&asn_OP_SEQUENCE,
	asn_DEF_start_tags_3,
	sizeof(asn_DEF_start_tags_3)
		/sizeof(asn_DEF_start_tags_3[0]) - 1, /* 1 */
	asn_DEF_start_tags_3,	/* Same as above */
	sizeof(asn_DEF_start_tags_3)
		/sizeof(asn_DEF_start_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_start_3,
	1,	/* Elements count */
	&asn_SPC_start_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rstd_InterFreqIndication_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10, choice.start),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_start_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"start"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10, choice.stop),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stop"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rstd_InterFreqIndication_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* start */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* stop */
};
static asn_CHOICE_specifics_t asn_SPC_rstd_InterFreqIndication_r10_specs_2 = {
	sizeof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10),
	offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10, _asn_ctx),
	offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10, present),
	sizeof(((struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10 *)0)->present),
	asn_MAP_rstd_InterFreqIndication_r10_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rstd_InterFreqIndication_r10_2 = {
	"rstd-InterFreqIndication-r10",
	"rstd-InterFreqIndication-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_rstd_InterFreqIndication_r10_constr_2, CHOICE_constraint },
	asn_MBR_rstd_InterFreqIndication_r10_2,
	2,	/* Elements count */
	&asn_SPC_rstd_InterFreqIndication_r10_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_7 = {
	sizeof(struct InterFreqRSTDMeasurementIndication_r10_IEs__nonCriticalExtension),
	offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_InterFreqRSTDMeasurementIndication_r10_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs, rstd_InterFreqIndication_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rstd_InterFreqIndication_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rstd-InterFreqIndication-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_InterFreqRSTDMeasurementIndication_r10_IEs_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqRSTDMeasurementIndication_r10_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rstd-InterFreqIndication-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqRSTDMeasurementIndication_r10_IEs_specs_1 = {
	sizeof(struct InterFreqRSTDMeasurementIndication_r10_IEs),
	offsetof(struct InterFreqRSTDMeasurementIndication_r10_IEs, _asn_ctx),
	asn_MAP_InterFreqRSTDMeasurementIndication_r10_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_InterFreqRSTDMeasurementIndication_r10_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs = {
	"InterFreqRSTDMeasurementIndication-r10-IEs",
	"InterFreqRSTDMeasurementIndication-r10-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1,
	sizeof(asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1)
		/sizeof(asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1[0]), /* 1 */
	asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1)
		/sizeof(asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqRSTDMeasurementIndication_r10_IEs_1,
	3,	/* Elements count */
	&asn_SPC_InterFreqRSTDMeasurementIndication_r10_IEs_specs_1	/* Additional specs */
};

