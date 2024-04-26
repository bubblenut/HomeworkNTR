/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType20-NB-r14.h"

#include "SC-MCCH-SchedulingInfo-NB-r14.h"
static int
memb_dl_CarrierIndex_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sc_mcch_Offset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_dl_CarrierIndex_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sc_mcch_CarrierConfig_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sc_mcch_RepetitionPeriod_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sc_mcch_ModificationPeriod_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sc_mcch_Offset_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sc_mcch_CarrierConfig_r14_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14, choice.dl_CarrierConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CarrierConfigCommon_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14, choice.dl_CarrierIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_dl_CarrierIndex_r14_constr_5,  memb_dl_CarrierIndex_r14_constraint_3 },
		0, 0, /* No default value */
		"dl-CarrierIndex-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sc_mcch_CarrierConfig_r14_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierIndex-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_sc_mcch_CarrierConfig_r14_specs_3 = {
	sizeof(struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14),
	offsetof(struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14, _asn_ctx),
	offsetof(struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14, present),
	sizeof(((struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14 *)0)->present),
	asn_MAP_sc_mcch_CarrierConfig_r14_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sc_mcch_CarrierConfig_r14_3 = {
	"sc-mcch-CarrierConfig-r14",
	"sc-mcch-CarrierConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_sc_mcch_CarrierConfig_r14_constr_3, CHOICE_constraint },
	asn_MBR_sc_mcch_CarrierConfig_r14_3,
	2,	/* Elements count */
	&asn_SPC_sc_mcch_CarrierConfig_r14_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sc_mcch_RepetitionPeriod_r14_value2enum_6[] = {
	{ 0,	4,	"rf32" },
	{ 1,	5,	"rf128" },
	{ 2,	5,	"rf512" },
	{ 3,	6,	"rf1024" },
	{ 4,	6,	"rf2048" },
	{ 5,	6,	"rf4096" },
	{ 6,	6,	"rf8192" },
	{ 7,	7,	"rf16384" }
};
static const unsigned int asn_MAP_sc_mcch_RepetitionPeriod_r14_enum2value_6[] = {
	3,	/* rf1024(3) */
	1,	/* rf128(1) */
	7,	/* rf16384(7) */
	4,	/* rf2048(4) */
	0,	/* rf32(0) */
	5,	/* rf4096(5) */
	2,	/* rf512(2) */
	6	/* rf8192(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_sc_mcch_RepetitionPeriod_r14_specs_6 = {
	asn_MAP_sc_mcch_RepetitionPeriod_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_sc_mcch_RepetitionPeriod_r14_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sc_mcch_RepetitionPeriod_r14_6 = {
	"sc-mcch-RepetitionPeriod-r14",
	"sc-mcch-RepetitionPeriod-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6,
	sizeof(asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6)
		/sizeof(asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6)
		/sizeof(asn_DEF_sc_mcch_RepetitionPeriod_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_sc_mcch_RepetitionPeriod_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sc_mcch_RepetitionPeriod_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sc_mcch_ModificationPeriod_r14_value2enum_16[] = {
	{ 0,	4,	"rf32" },
	{ 1,	5,	"rf128" },
	{ 2,	5,	"rf256" },
	{ 3,	5,	"rf512" },
	{ 4,	6,	"rf1024" },
	{ 5,	6,	"rf2048" },
	{ 6,	6,	"rf4096" },
	{ 7,	6,	"rf8192" },
	{ 8,	7,	"rf16384" },
	{ 9,	7,	"rf32768" },
	{ 10,	7,	"rf65536" },
	{ 11,	8,	"rf131072" },
	{ 12,	8,	"rf262144" },
	{ 13,	8,	"rf524288" },
	{ 14,	9,	"rf1048576" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_sc_mcch_ModificationPeriod_r14_enum2value_16[] = {
	4,	/* rf1024(4) */
	14,	/* rf1048576(14) */
	1,	/* rf128(1) */
	11,	/* rf131072(11) */
	8,	/* rf16384(8) */
	5,	/* rf2048(5) */
	2,	/* rf256(2) */
	12,	/* rf262144(12) */
	0,	/* rf32(0) */
	9,	/* rf32768(9) */
	6,	/* rf4096(6) */
	3,	/* rf512(3) */
	13,	/* rf524288(13) */
	10,	/* rf65536(10) */
	7,	/* rf8192(7) */
	15	/* spare1(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_sc_mcch_ModificationPeriod_r14_specs_16 = {
	asn_MAP_sc_mcch_ModificationPeriod_r14_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_sc_mcch_ModificationPeriod_r14_enum2value_16,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sc_mcch_ModificationPeriod_r14_16 = {
	"sc-mcch-ModificationPeriod-r14",
	"sc-mcch-ModificationPeriod-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16,
	sizeof(asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16)
		/sizeof(asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16[0]) - 1, /* 1 */
	asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16,	/* Same as above */
	sizeof(asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16)
		/sizeof(asn_DEF_sc_mcch_ModificationPeriod_r14_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_sc_mcch_ModificationPeriod_r14_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sc_mcch_ModificationPeriod_r14_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType20_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14, npdcch_SC_MCCH_Config_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPDCCH_SC_MCCH_Config_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-SC-MCCH-Config-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14, sc_mcch_CarrierConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sc_mcch_CarrierConfig_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mcch-CarrierConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14, sc_mcch_RepetitionPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sc_mcch_RepetitionPeriod_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mcch-RepetitionPeriod-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14, sc_mcch_Offset_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sc_mcch_Offset_r14_constr_15,  memb_sc_mcch_Offset_r14_constraint_1 },
		0, 0, /* No default value */
		"sc-mcch-Offset-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType20_NB_r14, sc_mcch_ModificationPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sc_mcch_ModificationPeriod_r14_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mcch-ModificationPeriod-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType20_NB_r14, sc_mcch_SchedulingInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SC_MCCH_SchedulingInfo_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mcch-SchedulingInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType20_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType20_NB_r14_oms_1[] = { 5, 6 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType20_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType20_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* npdcch-SC-MCCH-Config-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sc-mcch-CarrierConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sc-mcch-RepetitionPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sc-mcch-Offset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sc-mcch-ModificationPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sc-mcch-SchedulingInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType20_NB_r14_specs_1 = {
	sizeof(struct SystemInformationBlockType20_NB_r14),
	offsetof(struct SystemInformationBlockType20_NB_r14, _asn_ctx),
	asn_MAP_SystemInformationBlockType20_NB_r14_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType20_NB_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType20_NB_r14 = {
	"SystemInformationBlockType20-NB-r14",
	"SystemInformationBlockType20-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType20_NB_r14_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType20_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType20_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType20_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType20_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType20_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType20_NB_r14_1,
	7,	/* Elements count */
	&asn_SPC_SystemInformationBlockType20_NB_r14_specs_1	/* Additional specs */
};

