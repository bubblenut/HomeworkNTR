/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RLC-Config-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_mode_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reestablishRLC_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rlc_OutOfOrderDelivery_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_am_r15_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__am_r15, ul_AM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AM_RLC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-AM-RLC-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__am_r15, dl_AM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AM_RLC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-AM-RLC-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_am_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_am_r15_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-AM-RLC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-AM-RLC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_am_r15_specs_3 = {
	sizeof(struct RLC_Config_r15__mode_r15__am_r15),
	offsetof(struct RLC_Config_r15__mode_r15__am_r15, _asn_ctx),
	asn_MAP_am_r15_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_am_r15_3 = {
	"am-r15",
	"am-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_am_r15_tags_3,
	sizeof(asn_DEF_am_r15_tags_3)
		/sizeof(asn_DEF_am_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_am_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_am_r15_tags_3)
		/sizeof(asn_DEF_am_r15_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_am_r15_3,
	2,	/* Elements count */
	&asn_SPC_am_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Bi_Directional_r15_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__um_Bi_Directional_r15, ul_UM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_UM_RLC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-UM-RLC-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__um_Bi_Directional_r15, dl_UM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_UM_RLC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-UM-RLC-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_um_Bi_Directional_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_um_Bi_Directional_r15_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-UM-RLC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-UM-RLC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Bi_Directional_r15_specs_6 = {
	sizeof(struct RLC_Config_r15__mode_r15__um_Bi_Directional_r15),
	offsetof(struct RLC_Config_r15__mode_r15__um_Bi_Directional_r15, _asn_ctx),
	asn_MAP_um_Bi_Directional_r15_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Bi_Directional_r15_6 = {
	"um-Bi-Directional-r15",
	"um-Bi-Directional-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_um_Bi_Directional_r15_tags_6,
	sizeof(asn_DEF_um_Bi_Directional_r15_tags_6)
		/sizeof(asn_DEF_um_Bi_Directional_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_um_Bi_Directional_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_um_Bi_Directional_r15_tags_6)
		/sizeof(asn_DEF_um_Bi_Directional_r15_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_um_Bi_Directional_r15_6,
	2,	/* Elements count */
	&asn_SPC_um_Bi_Directional_r15_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Uni_Directional_UL_r15_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_UL_r15, ul_UM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_UM_RLC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-UM-RLC-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_um_Uni_Directional_UL_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_um_Uni_Directional_UL_r15_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ul-UM-RLC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Uni_Directional_UL_r15_specs_9 = {
	sizeof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_UL_r15),
	offsetof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_UL_r15, _asn_ctx),
	asn_MAP_um_Uni_Directional_UL_r15_tag2el_9,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Uni_Directional_UL_r15_9 = {
	"um-Uni-Directional-UL-r15",
	"um-Uni-Directional-UL-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_um_Uni_Directional_UL_r15_tags_9,
	sizeof(asn_DEF_um_Uni_Directional_UL_r15_tags_9)
		/sizeof(asn_DEF_um_Uni_Directional_UL_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_um_Uni_Directional_UL_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_um_Uni_Directional_UL_r15_tags_9)
		/sizeof(asn_DEF_um_Uni_Directional_UL_r15_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_um_Uni_Directional_UL_r15_9,
	1,	/* Elements count */
	&asn_SPC_um_Uni_Directional_UL_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Uni_Directional_DL_r15_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_DL_r15, dl_UM_RLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_UM_RLC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-UM-RLC-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_um_Uni_Directional_DL_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_um_Uni_Directional_DL_r15_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-UM-RLC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Uni_Directional_DL_r15_specs_11 = {
	sizeof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_DL_r15),
	offsetof(struct RLC_Config_r15__mode_r15__um_Uni_Directional_DL_r15, _asn_ctx),
	asn_MAP_um_Uni_Directional_DL_r15_tag2el_11,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Uni_Directional_DL_r15_11 = {
	"um-Uni-Directional-DL-r15",
	"um-Uni-Directional-DL-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_um_Uni_Directional_DL_r15_tags_11,
	sizeof(asn_DEF_um_Uni_Directional_DL_r15_tags_11)
		/sizeof(asn_DEF_um_Uni_Directional_DL_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_um_Uni_Directional_DL_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_um_Uni_Directional_DL_r15_tags_11)
		/sizeof(asn_DEF_um_Uni_Directional_DL_r15_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_um_Uni_Directional_DL_r15_11,
	1,	/* Elements count */
	&asn_SPC_um_Uni_Directional_DL_r15_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mode_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15, choice.am_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_am_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"am-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15, choice.um_Bi_Directional_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_um_Bi_Directional_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"um-Bi-Directional-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15, choice.um_Uni_Directional_UL_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_um_Uni_Directional_UL_r15_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"um-Uni-Directional-UL-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15__mode_r15, choice.um_Uni_Directional_DL_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_um_Uni_Directional_DL_r15_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"um-Uni-Directional-DL-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mode_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* am-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* um-Bi-Directional-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* um-Uni-Directional-UL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* um-Uni-Directional-DL-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_mode_r15_specs_2 = {
	sizeof(struct RLC_Config_r15__mode_r15),
	offsetof(struct RLC_Config_r15__mode_r15, _asn_ctx),
	offsetof(struct RLC_Config_r15__mode_r15, present),
	sizeof(((struct RLC_Config_r15__mode_r15 *)0)->present),
	asn_MAP_mode_r15_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mode_r15_2 = {
	"mode-r15",
	"mode-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_mode_r15_constr_2, CHOICE_constraint },
	asn_MBR_mode_r15_2,
	4,	/* Elements count */
	&asn_SPC_mode_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reestablishRLC_r15_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reestablishRLC_r15_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reestablishRLC_r15_specs_13 = {
	asn_MAP_reestablishRLC_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_reestablishRLC_r15_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reestablishRLC_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reestablishRLC_r15_13 = {
	"reestablishRLC-r15",
	"reestablishRLC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_reestablishRLC_r15_tags_13,
	sizeof(asn_DEF_reestablishRLC_r15_tags_13)
		/sizeof(asn_DEF_reestablishRLC_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_reestablishRLC_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_reestablishRLC_r15_tags_13)
		/sizeof(asn_DEF_reestablishRLC_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_reestablishRLC_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reestablishRLC_r15_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlc_OutOfOrderDelivery_r15_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rlc_OutOfOrderDelivery_r15_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlc_OutOfOrderDelivery_r15_specs_15 = {
	asn_MAP_rlc_OutOfOrderDelivery_r15_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_rlc_OutOfOrderDelivery_r15_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_OutOfOrderDelivery_r15_15 = {
	"rlc-OutOfOrderDelivery-r15",
	"rlc-OutOfOrderDelivery-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15,
	sizeof(asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15)
		/sizeof(asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15[0]) - 1, /* 1 */
	asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15,	/* Same as above */
	sizeof(asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15)
		/sizeof(asn_DEF_rlc_OutOfOrderDelivery_r15_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_rlc_OutOfOrderDelivery_r15_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlc_OutOfOrderDelivery_r15_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_Config_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_r15, mode_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mode_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mode-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RLC_Config_r15, reestablishRLC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reestablishRLC_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishRLC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RLC_Config_r15, rlc_OutOfOrderDelivery_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlc_OutOfOrderDelivery_r15_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-OutOfOrderDelivery-r15"
		},
};
static const int asn_MAP_RLC_Config_r15_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_RLC_Config_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mode-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reestablishRLC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rlc-OutOfOrderDelivery-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_r15_specs_1 = {
	sizeof(struct RLC_Config_r15),
	offsetof(struct RLC_Config_r15, _asn_ctx),
	asn_MAP_RLC_Config_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RLC_Config_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Config_r15 = {
	"RLC-Config-r15",
	"RLC-Config-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_RLC_Config_r15_tags_1,
	sizeof(asn_DEF_RLC_Config_r15_tags_1)
		/sizeof(asn_DEF_RLC_Config_r15_tags_1[0]), /* 1 */
	asn_DEF_RLC_Config_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Config_r15_tags_1)
		/sizeof(asn_DEF_RLC_Config_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RLC_Config_r15_1,
	3,	/* Elements count */
	&asn_SPC_RLC_Config_r15_specs_1	/* Additional specs */
};

