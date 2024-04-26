/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SRS-ConfigAp-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_freqDomainPositionAp_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 23)) {
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
memb_transmissionCombAp_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_srs_BandwidthAp_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cyclicShiftAp_r10_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_freqDomainPositionAp_r10_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  23 }	/* (0..23) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_transmissionCombAp_r10_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_srs_BandwidthAp_r10_value2enum_3[] = {
	{ 0,	3,	"bw0" },
	{ 1,	3,	"bw1" },
	{ 2,	3,	"bw2" },
	{ 3,	3,	"bw3" }
};
static const unsigned int asn_MAP_srs_BandwidthAp_r10_enum2value_3[] = {
	0,	/* bw0(0) */
	1,	/* bw1(1) */
	2,	/* bw2(2) */
	3	/* bw3(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_BandwidthAp_r10_specs_3 = {
	asn_MAP_srs_BandwidthAp_r10_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_BandwidthAp_r10_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_BandwidthAp_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_BandwidthAp_r10_3 = {
	"srs-BandwidthAp-r10",
	"srs-BandwidthAp-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_BandwidthAp_r10_tags_3,
	sizeof(asn_DEF_srs_BandwidthAp_r10_tags_3)
		/sizeof(asn_DEF_srs_BandwidthAp_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_srs_BandwidthAp_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_srs_BandwidthAp_r10_tags_3)
		/sizeof(asn_DEF_srs_BandwidthAp_r10_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_srs_BandwidthAp_r10_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_BandwidthAp_r10_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cyclicShiftAp_r10_value2enum_10[] = {
	{ 0,	3,	"cs0" },
	{ 1,	3,	"cs1" },
	{ 2,	3,	"cs2" },
	{ 3,	3,	"cs3" },
	{ 4,	3,	"cs4" },
	{ 5,	3,	"cs5" },
	{ 6,	3,	"cs6" },
	{ 7,	3,	"cs7" }
};
static const unsigned int asn_MAP_cyclicShiftAp_r10_enum2value_10[] = {
	0,	/* cs0(0) */
	1,	/* cs1(1) */
	2,	/* cs2(2) */
	3,	/* cs3(3) */
	4,	/* cs4(4) */
	5,	/* cs5(5) */
	6,	/* cs6(6) */
	7	/* cs7(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_cyclicShiftAp_r10_specs_10 = {
	asn_MAP_cyclicShiftAp_r10_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_cyclicShiftAp_r10_enum2value_10,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cyclicShiftAp_r10_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cyclicShiftAp_r10_10 = {
	"cyclicShiftAp-r10",
	"cyclicShiftAp-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_cyclicShiftAp_r10_tags_10,
	sizeof(asn_DEF_cyclicShiftAp_r10_tags_10)
		/sizeof(asn_DEF_cyclicShiftAp_r10_tags_10[0]) - 1, /* 1 */
	asn_DEF_cyclicShiftAp_r10_tags_10,	/* Same as above */
	sizeof(asn_DEF_cyclicShiftAp_r10_tags_10)
		/sizeof(asn_DEF_cyclicShiftAp_r10_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_cyclicShiftAp_r10_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cyclicShiftAp_r10_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_ConfigAp_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, srs_AntennaPortAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_AntennaPort,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-AntennaPortAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, srs_BandwidthAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_BandwidthAp_r10_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-BandwidthAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, freqDomainPositionAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_freqDomainPositionAp_r10_constr_8,  memb_freqDomainPositionAp_r10_constraint_1 },
		0, 0, /* No default value */
		"freqDomainPositionAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, transmissionCombAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_transmissionCombAp_r10_constr_9,  memb_transmissionCombAp_r10_constraint_1 },
		0, 0, /* No default value */
		"transmissionCombAp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_ConfigAp_r10, cyclicShiftAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cyclicShiftAp_r10_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicShiftAp-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_SRS_ConfigAp_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_ConfigAp_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-AntennaPortAp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-BandwidthAp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqDomainPositionAp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* transmissionCombAp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* cyclicShiftAp-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_ConfigAp_r10_specs_1 = {
	sizeof(struct SRS_ConfigAp_r10),
	offsetof(struct SRS_ConfigAp_r10, _asn_ctx),
	asn_MAP_SRS_ConfigAp_r10_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_ConfigAp_r10 = {
	"SRS-ConfigAp-r10",
	"SRS-ConfigAp-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_ConfigAp_r10_tags_1,
	sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1[0]), /* 1 */
	asn_DEF_SRS_ConfigAp_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_ConfigAp_r10_1,
	5,	/* Elements count */
	&asn_SPC_SRS_ConfigAp_r10_specs_1	/* Additional specs */
};

