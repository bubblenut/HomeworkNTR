/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "ReportConfigInterRAT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxReportCells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_b1_Threshold_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_b2_Threshold2_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eventId_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_purpose_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_triggerType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reportAmount_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxReportCells_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_b1_Threshold_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-ThresholdUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdGERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-ThresholdGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-ThresholdCDMA2000"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_b1_Threshold_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b1-ThresholdUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b1-ThresholdGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* b1-ThresholdCDMA2000 */
};
static asn_CHOICE_specifics_t asn_SPC_b1_Threshold_specs_6 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold *)0)->present),
	asn_MAP_b1_Threshold_tag2el_6,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_b1_Threshold_6 = {
	"b1-Threshold",
	"b1-Threshold",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_b1_Threshold_constr_6, CHOICE_constraint },
	asn_MBR_b1_Threshold_6,
	3,	/* Elements count */
	&asn_SPC_b1_Threshold_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventB1_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1, b1_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_b1_Threshold_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-Threshold"
		},
};
static const ber_tlv_tag_t asn_DEF_eventB1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eventB1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* b1-Threshold */
};
static asn_SEQUENCE_specifics_t asn_SPC_eventB1_specs_5 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1, _asn_ctx),
	asn_MAP_eventB1_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventB1_5 = {
	"eventB1",
	"eventB1",
	&asn_OP_SEQUENCE,
	asn_DEF_eventB1_tags_5,
	sizeof(asn_DEF_eventB1_tags_5)
		/sizeof(asn_DEF_eventB1_tags_5[0]) - 1, /* 1 */
	asn_DEF_eventB1_tags_5,	/* Same as above */
	sizeof(asn_DEF_eventB1_tags_5)
		/sizeof(asn_DEF_eventB1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eventB1_5,
	1,	/* Elements count */
	&asn_SPC_eventB1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_b2_Threshold2_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2UTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2UTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2GERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2GERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2CDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2CDMA2000"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_b2_Threshold2_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold2UTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b2-Threshold2GERAN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* b2-Threshold2CDMA2000 */
};
static asn_CHOICE_specifics_t asn_SPC_b2_Threshold2_specs_12 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2 *)0)->present),
	asn_MAP_b2_Threshold2_tag2el_12,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_b2_Threshold2_12 = {
	"b2-Threshold2",
	"b2-Threshold2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_b2_Threshold2_constr_12, CHOICE_constraint },
	asn_MBR_b2_Threshold2_12,
	3,	/* Elements count */
	&asn_SPC_b2_Threshold2_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventB2_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, b2_Threshold1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, b2_Threshold2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_b2_Threshold2_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2"
		},
};
static const ber_tlv_tag_t asn_DEF_eventB2_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eventB2_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* b2-Threshold2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eventB2_specs_10 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, _asn_ctx),
	asn_MAP_eventB2_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventB2_10 = {
	"eventB2",
	"eventB2",
	&asn_OP_SEQUENCE,
	asn_DEF_eventB2_tags_10,
	sizeof(asn_DEF_eventB2_tags_10)
		/sizeof(asn_DEF_eventB2_tags_10[0]) - 1, /* 1 */
	asn_DEF_eventB2_tags_10,	/* Same as above */
	sizeof(asn_DEF_eventB2_tags_10)
		/sizeof(asn_DEF_eventB2_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eventB2_10,
	2,	/* Elements count */
	&asn_SPC_eventB2_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventId_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, choice.eventB1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_eventB1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, choice.eventB2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eventB2_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_eventId_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventB1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventB2 */
};
static asn_CHOICE_specifics_t asn_SPC_eventId_specs_4 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId *)0)->present),
	asn_MAP_eventId_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventId_4 = {
	"eventId",
	"eventId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_eventId_constr_4, CHOICE_constraint },
	asn_MBR_eventId_4,
	2,	/* Elements count */
	&asn_SPC_eventId_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_event_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, eventId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_eventId_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_event_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_event_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_event_specs_3 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event),
	offsetof(struct ReportConfigInterRAT__triggerType__event, _asn_ctx),
	asn_MAP_event_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_event_3 = {
	"event",
	"event",
	&asn_OP_SEQUENCE,
	asn_DEF_event_tags_3,
	sizeof(asn_DEF_event_tags_3)
		/sizeof(asn_DEF_event_tags_3[0]) - 1, /* 1 */
	asn_DEF_event_tags_3,	/* Same as above */
	sizeof(asn_DEF_event_tags_3)
		/sizeof(asn_DEF_event_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_event_3,
	3,	/* Elements count */
	&asn_SPC_event_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_purpose_value2enum_20[] = {
	{ 0,	20,	"reportStrongestCells" },
	{ 1,	26,	"reportStrongestCellsForSON" },
	{ 2,	9,	"reportCGI" }
};
static const unsigned int asn_MAP_purpose_enum2value_20[] = {
	2,	/* reportCGI(2) */
	0,	/* reportStrongestCells(0) */
	1	/* reportStrongestCellsForSON(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_purpose_specs_20 = {
	asn_MAP_purpose_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_purpose_enum2value_20,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_purpose_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_purpose_20 = {
	"purpose",
	"purpose",
	&asn_OP_NativeEnumerated,
	asn_DEF_purpose_tags_20,
	sizeof(asn_DEF_purpose_tags_20)
		/sizeof(asn_DEF_purpose_tags_20[0]) - 1, /* 1 */
	asn_DEF_purpose_tags_20,	/* Same as above */
	sizeof(asn_DEF_purpose_tags_20)
		/sizeof(asn_DEF_purpose_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_purpose_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_purpose_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodical_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__periodical, purpose),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_purpose_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"purpose"
		},
};
static const ber_tlv_tag_t asn_DEF_periodical_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_periodical_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* purpose */
};
static asn_SEQUENCE_specifics_t asn_SPC_periodical_specs_19 = {
	sizeof(struct ReportConfigInterRAT__triggerType__periodical),
	offsetof(struct ReportConfigInterRAT__triggerType__periodical, _asn_ctx),
	asn_MAP_periodical_tag2el_19,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodical_19 = {
	"periodical",
	"periodical",
	&asn_OP_SEQUENCE,
	asn_DEF_periodical_tags_19,
	sizeof(asn_DEF_periodical_tags_19)
		/sizeof(asn_DEF_periodical_tags_19[0]) - 1, /* 1 */
	asn_DEF_periodical_tags_19,	/* Same as above */
	sizeof(asn_DEF_periodical_tags_19)
		/sizeof(asn_DEF_periodical_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_periodical_19,
	1,	/* Elements count */
	&asn_SPC_periodical_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_triggerType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType, choice.event),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_event_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"event"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType, choice.periodical),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_periodical_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodical"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_triggerType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* event */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodical */
};
static asn_CHOICE_specifics_t asn_SPC_triggerType_specs_2 = {
	sizeof(struct ReportConfigInterRAT__triggerType),
	offsetof(struct ReportConfigInterRAT__triggerType, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType, present),
	sizeof(((struct ReportConfigInterRAT__triggerType *)0)->present),
	asn_MAP_triggerType_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_triggerType_2 = {
	"triggerType",
	"triggerType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_triggerType_constr_2, CHOICE_constraint },
	asn_MBR_triggerType_2,
	2,	/* Elements count */
	&asn_SPC_triggerType_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reportAmount_value2enum_26[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_reportAmount_enum2value_26[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportAmount_specs_26 = {
	asn_MAP_reportAmount_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_reportAmount_enum2value_26,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportAmount_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportAmount_26 = {
	"reportAmount",
	"reportAmount",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportAmount_tags_26,
	sizeof(asn_DEF_reportAmount_tags_26)
		/sizeof(asn_DEF_reportAmount_tags_26[0]) - 1, /* 1 */
	asn_DEF_reportAmount_tags_26,	/* Same as above */
	sizeof(asn_DEF_reportAmount_tags_26)
		/sizeof(asn_DEF_reportAmount_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_reportAmount_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportAmount_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReportConfigInterRAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, triggerType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_triggerType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggerType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, maxReportCells),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_maxReportCells_constr_24,  memb_maxReportCells_constraint_1 },
		0, 0, /* No default value */
		"maxReportCells"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, reportInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportAmount_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportAmount"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportConfigInterRAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportConfigInterRAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggerType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxReportCells */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportInterval */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reportAmount */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportConfigInterRAT_specs_1 = {
	sizeof(struct ReportConfigInterRAT),
	offsetof(struct ReportConfigInterRAT, _asn_ctx),
	asn_MAP_ReportConfigInterRAT_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportConfigInterRAT = {
	"ReportConfigInterRAT",
	"ReportConfigInterRAT",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportConfigInterRAT_tags_1,
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	asn_DEF_ReportConfigInterRAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReportConfigInterRAT_1,
	4,	/* Elements count */
	&asn_SPC_ReportConfigInterRAT_specs_1	/* Additional specs */
};

