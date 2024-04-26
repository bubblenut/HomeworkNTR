/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "LWA-Parameters-v1430.h"

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
memb_wlan_SupportedDataRate_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2048)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_lwa_HO_WithoutWT_Change_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_UL_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wlan_PeriodicMeas_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wlan_ReportAnyWLAN_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_wlan_SupportedDataRate_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (1..2048) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_lwa_HO_WithoutWT_Change_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwa_HO_WithoutWT_Change_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_HO_WithoutWT_Change_r14_specs_2 = {
	asn_MAP_lwa_HO_WithoutWT_Change_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_HO_WithoutWT_Change_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_HO_WithoutWT_Change_r14_2 = {
	"lwa-HO-WithoutWT-Change-r14",
	"lwa-HO-WithoutWT-Change-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2,
	sizeof(asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2)
		/sizeof(asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2)
		/sizeof(asn_DEF_lwa_HO_WithoutWT_Change_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_HO_WithoutWT_Change_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_HO_WithoutWT_Change_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwa_UL_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwa_UL_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_UL_r14_specs_4 = {
	asn_MAP_lwa_UL_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_UL_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_UL_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_UL_r14_4 = {
	"lwa-UL-r14",
	"lwa-UL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_UL_r14_tags_4,
	sizeof(asn_DEF_lwa_UL_r14_tags_4)
		/sizeof(asn_DEF_lwa_UL_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_lwa_UL_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_lwa_UL_r14_tags_4)
		/sizeof(asn_DEF_lwa_UL_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_UL_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_UL_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wlan_PeriodicMeas_r14_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_wlan_PeriodicMeas_r14_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wlan_PeriodicMeas_r14_specs_6 = {
	asn_MAP_wlan_PeriodicMeas_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_wlan_PeriodicMeas_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wlan_PeriodicMeas_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wlan_PeriodicMeas_r14_6 = {
	"wlan-PeriodicMeas-r14",
	"wlan-PeriodicMeas-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_wlan_PeriodicMeas_r14_tags_6,
	sizeof(asn_DEF_wlan_PeriodicMeas_r14_tags_6)
		/sizeof(asn_DEF_wlan_PeriodicMeas_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_wlan_PeriodicMeas_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_wlan_PeriodicMeas_r14_tags_6)
		/sizeof(asn_DEF_wlan_PeriodicMeas_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_wlan_PeriodicMeas_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wlan_PeriodicMeas_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wlan_ReportAnyWLAN_r14_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_wlan_ReportAnyWLAN_r14_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wlan_ReportAnyWLAN_r14_specs_8 = {
	asn_MAP_wlan_ReportAnyWLAN_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_wlan_ReportAnyWLAN_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wlan_ReportAnyWLAN_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wlan_ReportAnyWLAN_r14_8 = {
	"wlan-ReportAnyWLAN-r14",
	"wlan-ReportAnyWLAN-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_wlan_ReportAnyWLAN_r14_tags_8,
	sizeof(asn_DEF_wlan_ReportAnyWLAN_r14_tags_8)
		/sizeof(asn_DEF_wlan_ReportAnyWLAN_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_wlan_ReportAnyWLAN_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_wlan_ReportAnyWLAN_r14_tags_8)
		/sizeof(asn_DEF_wlan_ReportAnyWLAN_r14_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_wlan_ReportAnyWLAN_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wlan_ReportAnyWLAN_r14_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LWA_Parameters_v1430_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LWA_Parameters_v1430, lwa_HO_WithoutWT_Change_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_HO_WithoutWT_Change_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-HO-WithoutWT-Change-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LWA_Parameters_v1430, lwa_UL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_UL_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-UL-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LWA_Parameters_v1430, wlan_PeriodicMeas_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wlan_PeriodicMeas_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-PeriodicMeas-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LWA_Parameters_v1430, wlan_ReportAnyWLAN_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wlan_ReportAnyWLAN_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-ReportAnyWLAN-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LWA_Parameters_v1430, wlan_SupportedDataRate_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_wlan_SupportedDataRate_r14_constr_10,  memb_wlan_SupportedDataRate_r14_constraint_1 },
		0, 0, /* No default value */
		"wlan-SupportedDataRate-r14"
		},
};
static const int asn_MAP_LWA_Parameters_v1430_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LWA_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LWA_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lwa-HO-WithoutWT-Change-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lwa-UL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* wlan-PeriodicMeas-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* wlan-ReportAnyWLAN-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* wlan-SupportedDataRate-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LWA_Parameters_v1430_specs_1 = {
	sizeof(struct LWA_Parameters_v1430),
	offsetof(struct LWA_Parameters_v1430, _asn_ctx),
	asn_MAP_LWA_Parameters_v1430_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LWA_Parameters_v1430_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LWA_Parameters_v1430 = {
	"LWA-Parameters-v1430",
	"LWA-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LWA_Parameters_v1430_tags_1,
	sizeof(asn_DEF_LWA_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LWA_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_LWA_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LWA_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LWA_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LWA_Parameters_v1430_1,
	5,	/* Elements count */
	&asn_SPC_LWA_Parameters_v1430_specs_1	/* Additional specs */
};

