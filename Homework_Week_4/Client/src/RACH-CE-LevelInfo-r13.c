/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RACH-CE-LevelInfo-r13.h"

static int
memb_firstPreamble_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lastPreamble_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_edt_LastPreamble_r15_constraint_27(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_firstPreamble_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_lastPreamble_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ra_ResponseWindowSize_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mac_ContentionResolutionTimer_r13_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rar_HoppingConfig_r13_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_edt_TBS_r15_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mac_ContentionResolutionTimer_r15_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_edt_LastPreamble_r15_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_preambleMappingInfo_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13__preambleMappingInfo_r13, firstPreamble_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_firstPreamble_r13_constr_3,  memb_firstPreamble_r13_constraint_2 },
		0, 0, /* No default value */
		"firstPreamble-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13__preambleMappingInfo_r13, lastPreamble_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_lastPreamble_r13_constr_4,  memb_lastPreamble_r13_constraint_2 },
		0, 0, /* No default value */
		"lastPreamble-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_preambleMappingInfo_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_preambleMappingInfo_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* firstPreamble-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lastPreamble-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_preambleMappingInfo_r13_specs_2 = {
	sizeof(struct RACH_CE_LevelInfo_r13__preambleMappingInfo_r13),
	offsetof(struct RACH_CE_LevelInfo_r13__preambleMappingInfo_r13, _asn_ctx),
	asn_MAP_preambleMappingInfo_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preambleMappingInfo_r13_2 = {
	"preambleMappingInfo-r13",
	"preambleMappingInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_preambleMappingInfo_r13_tags_2,
	sizeof(asn_DEF_preambleMappingInfo_r13_tags_2)
		/sizeof(asn_DEF_preambleMappingInfo_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_preambleMappingInfo_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_preambleMappingInfo_r13_tags_2)
		/sizeof(asn_DEF_preambleMappingInfo_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_preambleMappingInfo_r13_2,
	2,	/* Elements count */
	&asn_SPC_preambleMappingInfo_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ra_ResponseWindowSize_r13_value2enum_5[] = {
	{ 0,	4,	"sf20" },
	{ 1,	4,	"sf50" },
	{ 2,	4,	"sf80" },
	{ 3,	5,	"sf120" },
	{ 4,	5,	"sf180" },
	{ 5,	5,	"sf240" },
	{ 6,	5,	"sf320" },
	{ 7,	5,	"sf400" }
};
static const unsigned int asn_MAP_ra_ResponseWindowSize_r13_enum2value_5[] = {
	3,	/* sf120(3) */
	4,	/* sf180(4) */
	0,	/* sf20(0) */
	5,	/* sf240(5) */
	6,	/* sf320(6) */
	7,	/* sf400(7) */
	1,	/* sf50(1) */
	2	/* sf80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_ra_ResponseWindowSize_r13_specs_5 = {
	asn_MAP_ra_ResponseWindowSize_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ra_ResponseWindowSize_r13_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ra_ResponseWindowSize_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindowSize_r13_5 = {
	"ra-ResponseWindowSize-r13",
	"ra-ResponseWindowSize-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ra_ResponseWindowSize_r13_tags_5,
	sizeof(asn_DEF_ra_ResponseWindowSize_r13_tags_5)
		/sizeof(asn_DEF_ra_ResponseWindowSize_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_ra_ResponseWindowSize_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_ra_ResponseWindowSize_r13_tags_5)
		/sizeof(asn_DEF_ra_ResponseWindowSize_r13_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ra_ResponseWindowSize_r13_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ra_ResponseWindowSize_r13_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mac_ContentionResolutionTimer_r13_value2enum_14[] = {
	{ 0,	4,	"sf80" },
	{ 1,	5,	"sf100" },
	{ 2,	5,	"sf120" },
	{ 3,	5,	"sf160" },
	{ 4,	5,	"sf200" },
	{ 5,	5,	"sf240" },
	{ 6,	5,	"sf480" },
	{ 7,	5,	"sf960" }
};
static const unsigned int asn_MAP_mac_ContentionResolutionTimer_r13_enum2value_14[] = {
	1,	/* sf100(1) */
	2,	/* sf120(2) */
	3,	/* sf160(3) */
	4,	/* sf200(4) */
	5,	/* sf240(5) */
	6,	/* sf480(6) */
	0,	/* sf80(0) */
	7	/* sf960(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_mac_ContentionResolutionTimer_r13_specs_14 = {
	asn_MAP_mac_ContentionResolutionTimer_r13_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_ContentionResolutionTimer_r13_enum2value_14,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mac_ContentionResolutionTimer_r13_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_r13_14 = {
	"mac-ContentionResolutionTimer-r13",
	"mac-ContentionResolutionTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mac_ContentionResolutionTimer_r13_tags_14,
	sizeof(asn_DEF_mac_ContentionResolutionTimer_r13_tags_14)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_r13_tags_14[0]) - 1, /* 1 */
	asn_DEF_mac_ContentionResolutionTimer_r13_tags_14,	/* Same as above */
	sizeof(asn_DEF_mac_ContentionResolutionTimer_r13_tags_14)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_r13_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_mac_ContentionResolutionTimer_r13_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_ContentionResolutionTimer_r13_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rar_HoppingConfig_r13_value2enum_23[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_rar_HoppingConfig_r13_enum2value_23[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rar_HoppingConfig_r13_specs_23 = {
	asn_MAP_rar_HoppingConfig_r13_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_rar_HoppingConfig_r13_enum2value_23,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rar_HoppingConfig_r13_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rar_HoppingConfig_r13_23 = {
	"rar-HoppingConfig-r13",
	"rar-HoppingConfig-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_rar_HoppingConfig_r13_tags_23,
	sizeof(asn_DEF_rar_HoppingConfig_r13_tags_23)
		/sizeof(asn_DEF_rar_HoppingConfig_r13_tags_23[0]) - 1, /* 1 */
	asn_DEF_rar_HoppingConfig_r13_tags_23,	/* Same as above */
	sizeof(asn_DEF_rar_HoppingConfig_r13_tags_23)
		/sizeof(asn_DEF_rar_HoppingConfig_r13_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_rar_HoppingConfig_r13_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rar_HoppingConfig_r13_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_edt_TBS_r15_value2enum_30[] = {
	{ 0,	4,	"b328" },
	{ 1,	4,	"b408" },
	{ 2,	4,	"b504" },
	{ 3,	4,	"b600" },
	{ 4,	4,	"b712" },
	{ 5,	4,	"b808" },
	{ 6,	4,	"b936" },
	{ 7,	10,	"b1000or456" }
};
static const unsigned int asn_MAP_edt_TBS_r15_enum2value_30[] = {
	7,	/* b1000or456(7) */
	0,	/* b328(0) */
	1,	/* b408(1) */
	2,	/* b504(2) */
	3,	/* b600(3) */
	4,	/* b712(4) */
	5,	/* b808(5) */
	6	/* b936(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_edt_TBS_r15_specs_30 = {
	asn_MAP_edt_TBS_r15_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_edt_TBS_r15_enum2value_30,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_edt_TBS_r15_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_edt_TBS_r15_30 = {
	"edt-TBS-r15",
	"edt-TBS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_edt_TBS_r15_tags_30,
	sizeof(asn_DEF_edt_TBS_r15_tags_30)
		/sizeof(asn_DEF_edt_TBS_r15_tags_30[0]) - 1, /* 1 */
	asn_DEF_edt_TBS_r15_tags_30,	/* Same as above */
	sizeof(asn_DEF_edt_TBS_r15_tags_30)
		/sizeof(asn_DEF_edt_TBS_r15_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_edt_TBS_r15_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_edt_TBS_r15_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mac_ContentionResolutionTimer_r15_value2enum_39[] = {
	{ 0,	5,	"sf240" },
	{ 1,	5,	"sf480" },
	{ 2,	5,	"sf960" },
	{ 3,	6,	"sf1920" },
	{ 4,	6,	"sf3840" },
	{ 5,	6,	"sf5760" },
	{ 6,	6,	"sf7680" },
	{ 7,	7,	"sf10240" }
};
static const unsigned int asn_MAP_mac_ContentionResolutionTimer_r15_enum2value_39[] = {
	7,	/* sf10240(7) */
	3,	/* sf1920(3) */
	0,	/* sf240(0) */
	4,	/* sf3840(4) */
	1,	/* sf480(1) */
	5,	/* sf5760(5) */
	6,	/* sf7680(6) */
	2	/* sf960(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_mac_ContentionResolutionTimer_r15_specs_39 = {
	asn_MAP_mac_ContentionResolutionTimer_r15_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_ContentionResolutionTimer_r15_enum2value_39,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mac_ContentionResolutionTimer_r15_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_r15_39 = {
	"mac-ContentionResolutionTimer-r15",
	"mac-ContentionResolutionTimer-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_mac_ContentionResolutionTimer_r15_tags_39,
	sizeof(asn_DEF_mac_ContentionResolutionTimer_r15_tags_39)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_r15_tags_39[0]) - 1, /* 1 */
	asn_DEF_mac_ContentionResolutionTimer_r15_tags_39,	/* Same as above */
	sizeof(asn_DEF_mac_ContentionResolutionTimer_r15_tags_39)
		/sizeof(asn_DEF_mac_ContentionResolutionTimer_r15_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_mac_ContentionResolutionTimer_r15_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_ContentionResolutionTimer_r15_specs_39	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_edt_Parameters_r15_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15, edt_LastPreamble_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_edt_LastPreamble_r15_constr_28,  memb_edt_LastPreamble_r15_constraint_27 },
		0, 0, /* No default value */
		"edt-LastPreamble-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15, edt_SmallTBS_Enabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt-SmallTBS-Enabled-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15, edt_TBS_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_edt_TBS_r15_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt-TBS-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15, mac_ContentionResolutionTimer_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_ContentionResolutionTimer_r15_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ContentionResolutionTimer-r15"
		},
};
static const int asn_MAP_edt_Parameters_r15_oms_27[] = { 3 };
static const ber_tlv_tag_t asn_DEF_edt_Parameters_r15_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_edt_Parameters_r15_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* edt-LastPreamble-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* edt-SmallTBS-Enabled-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* edt-TBS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mac-ContentionResolutionTimer-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_edt_Parameters_r15_specs_27 = {
	sizeof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15),
	offsetof(struct RACH_CE_LevelInfo_r13__edt_Parameters_r15, _asn_ctx),
	asn_MAP_edt_Parameters_r15_tag2el_27,
	4,	/* Count of tags in the map */
	asn_MAP_edt_Parameters_r15_oms_27,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_edt_Parameters_r15_27 = {
	"edt-Parameters-r15",
	"edt-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_edt_Parameters_r15_tags_27,
	sizeof(asn_DEF_edt_Parameters_r15_tags_27)
		/sizeof(asn_DEF_edt_Parameters_r15_tags_27[0]) - 1, /* 1 */
	asn_DEF_edt_Parameters_r15_tags_27,	/* Same as above */
	sizeof(asn_DEF_edt_Parameters_r15_tags_27)
		/sizeof(asn_DEF_edt_Parameters_r15_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_edt_Parameters_r15_27,
	4,	/* Elements count */
	&asn_SPC_edt_Parameters_r15_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RACH_CE_LevelInfo_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13, preambleMappingInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_preambleMappingInfo_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleMappingInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13, ra_ResponseWindowSize_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ra_ResponseWindowSize_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-ResponseWindowSize-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13, mac_ContentionResolutionTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_ContentionResolutionTimer_r13_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ContentionResolutionTimer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_CE_LevelInfo_r13, rar_HoppingConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rar_HoppingConfig_r13_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rar-HoppingConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_CE_LevelInfo_r13, edt_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_edt_Parameters_r15_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt-Parameters-r15"
		},
};
static const int asn_MAP_RACH_CE_LevelInfo_r13_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_RACH_CE_LevelInfo_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_CE_LevelInfo_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleMappingInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ra-ResponseWindowSize-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mac-ContentionResolutionTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rar-HoppingConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* edt-Parameters-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_RACH_CE_LevelInfo_r13_specs_1 = {
	sizeof(struct RACH_CE_LevelInfo_r13),
	offsetof(struct RACH_CE_LevelInfo_r13, _asn_ctx),
	asn_MAP_RACH_CE_LevelInfo_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RACH_CE_LevelInfo_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RACH_CE_LevelInfo_r13 = {
	"RACH-CE-LevelInfo-r13",
	"RACH-CE-LevelInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_RACH_CE_LevelInfo_r13_tags_1,
	sizeof(asn_DEF_RACH_CE_LevelInfo_r13_tags_1)
		/sizeof(asn_DEF_RACH_CE_LevelInfo_r13_tags_1[0]), /* 1 */
	asn_DEF_RACH_CE_LevelInfo_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_CE_LevelInfo_r13_tags_1)
		/sizeof(asn_DEF_RACH_CE_LevelInfo_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RACH_CE_LevelInfo_r13_1,
	5,	/* Elements count */
	&asn_SPC_RACH_CE_LevelInfo_r13_specs_1	/* Additional specs */
};

