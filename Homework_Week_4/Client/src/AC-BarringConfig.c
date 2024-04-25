/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "AC-BarringConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ac_BarringForSpecialAC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ac_BarringFactor_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ac_BarringTime_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ac_BarringForSpecialAC_constr_28 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ac_BarringFactor_value2enum_2[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p05" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p15" },
	{ 4,	3,	"p20" },
	{ 5,	3,	"p25" },
	{ 6,	3,	"p30" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p50" },
	{ 9,	3,	"p60" },
	{ 10,	3,	"p70" },
	{ 11,	3,	"p75" },
	{ 12,	3,	"p80" },
	{ 13,	3,	"p85" },
	{ 14,	3,	"p90" },
	{ 15,	3,	"p95" }
};
static const unsigned int asn_MAP_ac_BarringFactor_enum2value_2[] = {
	0,	/* p00(0) */
	1,	/* p05(1) */
	2,	/* p10(2) */
	3,	/* p15(3) */
	4,	/* p20(4) */
	5,	/* p25(5) */
	6,	/* p30(6) */
	7,	/* p40(7) */
	8,	/* p50(8) */
	9,	/* p60(9) */
	10,	/* p70(10) */
	11,	/* p75(11) */
	12,	/* p80(12) */
	13,	/* p85(13) */
	14,	/* p90(14) */
	15	/* p95(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_ac_BarringFactor_specs_2 = {
	asn_MAP_ac_BarringFactor_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringFactor_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ac_BarringFactor_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringFactor_2 = {
	"ac-BarringFactor",
	"ac-BarringFactor",
	&asn_OP_NativeEnumerated,
	asn_DEF_ac_BarringFactor_tags_2,
	sizeof(asn_DEF_ac_BarringFactor_tags_2)
		/sizeof(asn_DEF_ac_BarringFactor_tags_2[0]) - 1, /* 1 */
	asn_DEF_ac_BarringFactor_tags_2,	/* Same as above */
	sizeof(asn_DEF_ac_BarringFactor_tags_2)
		/sizeof(asn_DEF_ac_BarringFactor_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ac_BarringFactor_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringFactor_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ac_BarringTime_value2enum_19[] = {
	{ 0,	2,	"s4" },
	{ 1,	2,	"s8" },
	{ 2,	3,	"s16" },
	{ 3,	3,	"s32" },
	{ 4,	3,	"s64" },
	{ 5,	4,	"s128" },
	{ 6,	4,	"s256" },
	{ 7,	4,	"s512" }
};
static const unsigned int asn_MAP_ac_BarringTime_enum2value_19[] = {
	5,	/* s128(5) */
	2,	/* s16(2) */
	6,	/* s256(6) */
	3,	/* s32(3) */
	0,	/* s4(0) */
	7,	/* s512(7) */
	4,	/* s64(4) */
	1	/* s8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_ac_BarringTime_specs_19 = {
	asn_MAP_ac_BarringTime_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringTime_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ac_BarringTime_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringTime_19 = {
	"ac-BarringTime",
	"ac-BarringTime",
	&asn_OP_NativeEnumerated,
	asn_DEF_ac_BarringTime_tags_19,
	sizeof(asn_DEF_ac_BarringTime_tags_19)
		/sizeof(asn_DEF_ac_BarringTime_tags_19[0]) - 1, /* 1 */
	asn_DEF_ac_BarringTime_tags_19,	/* Same as above */
	sizeof(asn_DEF_ac_BarringTime_tags_19)
		/sizeof(asn_DEF_ac_BarringTime_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_ac_BarringTime_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringTime_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AC_BarringConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AC_BarringConfig, ac_BarringFactor),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringFactor_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringFactor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AC_BarringConfig, ac_BarringTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringTime_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AC_BarringConfig, ac_BarringForSpecialAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ac_BarringForSpecialAC_constr_28,  memb_ac_BarringForSpecialAC_constraint_1 },
		0, 0, /* No default value */
		"ac-BarringForSpecialAC"
		},
};
static const ber_tlv_tag_t asn_DEF_AC_BarringConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AC_BarringConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringFactor */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ac-BarringTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ac-BarringForSpecialAC */
};
asn_SEQUENCE_specifics_t asn_SPC_AC_BarringConfig_specs_1 = {
	sizeof(struct AC_BarringConfig),
	offsetof(struct AC_BarringConfig, _asn_ctx),
	asn_MAP_AC_BarringConfig_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AC_BarringConfig = {
	"AC-BarringConfig",
	"AC-BarringConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_AC_BarringConfig_tags_1,
	sizeof(asn_DEF_AC_BarringConfig_tags_1)
		/sizeof(asn_DEF_AC_BarringConfig_tags_1[0]), /* 1 */
	asn_DEF_AC_BarringConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_AC_BarringConfig_tags_1)
		/sizeof(asn_DEF_AC_BarringConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AC_BarringConfig_1,
	3,	/* Elements count */
	&asn_SPC_AC_BarringConfig_specs_1	/* Additional specs */
};

