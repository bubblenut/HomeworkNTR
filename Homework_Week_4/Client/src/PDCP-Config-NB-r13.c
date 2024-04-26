/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PDCP-Config-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxCID_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16383)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_discardTimer_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxCID_r13_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  1,  16383 }	/* (1..16383) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_headerCompression_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_discardTimer_r13_value2enum_2[] = {
	{ 0,	6,	"ms5120" },
	{ 1,	7,	"ms10240" },
	{ 2,	7,	"ms20480" },
	{ 3,	7,	"ms40960" },
	{ 4,	7,	"ms81920" },
	{ 5,	8,	"infinity" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_discardTimer_r13_enum2value_2[] = {
	5,	/* infinity(5) */
	1,	/* ms10240(1) */
	2,	/* ms20480(2) */
	3,	/* ms40960(3) */
	0,	/* ms5120(0) */
	4,	/* ms81920(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_discardTimer_r13_specs_2 = {
	asn_MAP_discardTimer_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_discardTimer_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discardTimer_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discardTimer_r13_2 = {
	"discardTimer-r13",
	"discardTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_discardTimer_r13_tags_2,
	sizeof(asn_DEF_discardTimer_r13_tags_2)
		/sizeof(asn_DEF_discardTimer_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_discardTimer_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_discardTimer_r13_tags_2)
		/sizeof(asn_DEF_discardTimer_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_discardTimer_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discardTimer_r13_specs_2	/* Additional specs */
};

static int asn_DFL_14_cmp_15(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_14_set_15(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
static asn_TYPE_member_t asn_MBR_profiles_r13_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0002),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0002"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0003),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0003"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0004),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0004"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0006),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0102),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0102"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0103),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0103"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, profile0x0104),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0104"
		},
};
static const ber_tlv_tag_t asn_DEF_profiles_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_profiles_r13_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0002 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0003 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0004 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0006 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0102 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0103 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* profile0x0104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_profiles_r13_specs_15 = {
	sizeof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13),
	offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13, _asn_ctx),
	asn_MAP_profiles_r13_tag2el_15,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_profiles_r13_15 = {
	"profiles-r13",
	"profiles-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_profiles_r13_tags_15,
	sizeof(asn_DEF_profiles_r13_tags_15)
		/sizeof(asn_DEF_profiles_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_profiles_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_profiles_r13_tags_15)
		/sizeof(asn_DEF_profiles_r13_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_profiles_r13_15,
	7,	/* Elements count */
	&asn_SPC_profiles_r13_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rohc_13[] = {
	{ ATF_POINTER, 1, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc, maxCID_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_maxCID_r13_constr_14,  memb_maxCID_r13_constraint_13 },
		&asn_DFL_14_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_14_set_15,	/* Set DEFAULT 15 */
		"maxCID-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc, profiles_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_profiles_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profiles-r13"
		},
};
static const int asn_MAP_rohc_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_rohc_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rohc_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxCID-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* profiles-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rohc_specs_13 = {
	sizeof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc),
	offsetof(struct PDCP_Config_NB_r13__headerCompression_r13__rohc, _asn_ctx),
	asn_MAP_rohc_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_rohc_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rohc_13 = {
	"rohc",
	"rohc",
	&asn_OP_SEQUENCE,
	asn_DEF_rohc_tags_13,
	sizeof(asn_DEF_rohc_tags_13)
		/sizeof(asn_DEF_rohc_tags_13[0]) - 1, /* 1 */
	asn_DEF_rohc_tags_13,	/* Same as above */
	sizeof(asn_DEF_rohc_tags_13)
		/sizeof(asn_DEF_rohc_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rohc_13,
	2,	/* Elements count */
	&asn_SPC_rohc_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_headerCompression_r13_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13, choice.notUsed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notUsed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13__headerCompression_r13, choice.rohc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rohc_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rohc"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_headerCompression_r13_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notUsed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rohc */
};
static asn_CHOICE_specifics_t asn_SPC_headerCompression_r13_specs_11 = {
	sizeof(struct PDCP_Config_NB_r13__headerCompression_r13),
	offsetof(struct PDCP_Config_NB_r13__headerCompression_r13, _asn_ctx),
	offsetof(struct PDCP_Config_NB_r13__headerCompression_r13, present),
	sizeof(((struct PDCP_Config_NB_r13__headerCompression_r13 *)0)->present),
	asn_MAP_headerCompression_r13_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_headerCompression_r13_11 = {
	"headerCompression-r13",
	"headerCompression-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_headerCompression_r13_constr_11, CHOICE_constraint },
	asn_MBR_headerCompression_r13_11,
	2,	/* Elements count */
	&asn_SPC_headerCompression_r13_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCP_Config_NB_r13_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PDCP_Config_NB_r13, discardTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discardTimer_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discardTimer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config_NB_r13, headerCompression_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_headerCompression_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"headerCompression-r13"
		},
};
static const int asn_MAP_PDCP_Config_NB_r13_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PDCP_Config_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discardTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* headerCompression-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCP_Config_NB_r13_specs_1 = {
	sizeof(struct PDCP_Config_NB_r13),
	offsetof(struct PDCP_Config_NB_r13, _asn_ctx),
	asn_MAP_PDCP_Config_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDCP_Config_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Config_NB_r13 = {
	"PDCP-Config-NB-r13",
	"PDCP-Config-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCP_Config_NB_r13_tags_1,
	sizeof(asn_DEF_PDCP_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_PDCP_Config_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Config_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_PDCP_Config_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCP_Config_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_PDCP_Config_NB_r13_specs_1	/* Additional specs */
};

