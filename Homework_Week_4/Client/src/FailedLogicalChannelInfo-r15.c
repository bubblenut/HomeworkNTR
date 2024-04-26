/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "FailedLogicalChannelInfo-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_logicalChannelIdentity_r15_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 10)) {
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
memb_logicalChannelIdentityExt_r15_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 32 && value <= 38)) {
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
static asn_per_constraints_t asn_PER_type_cellGroupIndication_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (1..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentityExt_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  32,  38 }	/* (32..38) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_failureType_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cellGroupIndication_r15_value2enum_3[] = {
	{ 0,	2,	"mn" },
	{ 1,	2,	"sn" }
};
static const unsigned int asn_MAP_cellGroupIndication_r15_enum2value_3[] = {
	0,	/* mn(0) */
	1	/* sn(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellGroupIndication_r15_specs_3 = {
	asn_MAP_cellGroupIndication_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_cellGroupIndication_r15_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellGroupIndication_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellGroupIndication_r15_3 = {
	"cellGroupIndication-r15",
	"cellGroupIndication-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellGroupIndication_r15_tags_3,
	sizeof(asn_DEF_cellGroupIndication_r15_tags_3)
		/sizeof(asn_DEF_cellGroupIndication_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellGroupIndication_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellGroupIndication_r15_tags_3)
		/sizeof(asn_DEF_cellGroupIndication_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_cellGroupIndication_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellGroupIndication_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_failedLogicalChannelIdentity_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15, cellGroupIndication_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellGroupIndication_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGroupIndication-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15, logicalChannelIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_r15_constr_6,  memb_logicalChannelIdentity_r15_constraint_2 },
		0, 0, /* No default value */
		"logicalChannelIdentity-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15, logicalChannelIdentityExt_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentityExt_r15_constr_7,  memb_logicalChannelIdentityExt_r15_constraint_2 },
		0, 0, /* No default value */
		"logicalChannelIdentityExt-r15"
		},
};
static const int asn_MAP_failedLogicalChannelIdentity_r15_oms_2[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_failedLogicalChannelIdentity_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_failedLogicalChannelIdentity_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGroupIndication-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChannelIdentity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelIdentityExt-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_failedLogicalChannelIdentity_r15_specs_2 = {
	sizeof(struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15),
	offsetof(struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15, _asn_ctx),
	asn_MAP_failedLogicalChannelIdentity_r15_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_failedLogicalChannelIdentity_r15_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_failedLogicalChannelIdentity_r15_2 = {
	"failedLogicalChannelIdentity-r15",
	"failedLogicalChannelIdentity-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_failedLogicalChannelIdentity_r15_tags_2,
	sizeof(asn_DEF_failedLogicalChannelIdentity_r15_tags_2)
		/sizeof(asn_DEF_failedLogicalChannelIdentity_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_failedLogicalChannelIdentity_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_failedLogicalChannelIdentity_r15_tags_2)
		/sizeof(asn_DEF_failedLogicalChannelIdentity_r15_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_failedLogicalChannelIdentity_r15_2,
	3,	/* Elements count */
	&asn_SPC_failedLogicalChannelIdentity_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_failureType_value2enum_8[] = {
	{ 0,	11,	"duplication" },
	{ 1,	6,	"spare3" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_failureType_enum2value_8[] = {
	0,	/* duplication(0) */
	3,	/* spare1(3) */
	2,	/* spare2(2) */
	1	/* spare3(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_failureType_specs_8 = {
	asn_MAP_failureType_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_failureType_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_failureType_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_failureType_8 = {
	"failureType",
	"failureType",
	&asn_OP_NativeEnumerated,
	asn_DEF_failureType_tags_8,
	sizeof(asn_DEF_failureType_tags_8)
		/sizeof(asn_DEF_failureType_tags_8[0]) - 1, /* 1 */
	asn_DEF_failureType_tags_8,	/* Same as above */
	sizeof(asn_DEF_failureType_tags_8)
		/sizeof(asn_DEF_failureType_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_failureType_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_failureType_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FailedLogicalChannelInfo_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FailedLogicalChannelInfo_r15, failedLogicalChannelIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_failedLogicalChannelIdentity_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedLogicalChannelIdentity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FailedLogicalChannelInfo_r15, failureType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_failureType_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType"
		},
};
static const ber_tlv_tag_t asn_DEF_FailedLogicalChannelInfo_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FailedLogicalChannelInfo_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedLogicalChannelIdentity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* failureType */
};
asn_SEQUENCE_specifics_t asn_SPC_FailedLogicalChannelInfo_r15_specs_1 = {
	sizeof(struct FailedLogicalChannelInfo_r15),
	offsetof(struct FailedLogicalChannelInfo_r15, _asn_ctx),
	asn_MAP_FailedLogicalChannelInfo_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FailedLogicalChannelInfo_r15 = {
	"FailedLogicalChannelInfo-r15",
	"FailedLogicalChannelInfo-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_FailedLogicalChannelInfo_r15_tags_1,
	sizeof(asn_DEF_FailedLogicalChannelInfo_r15_tags_1)
		/sizeof(asn_DEF_FailedLogicalChannelInfo_r15_tags_1[0]), /* 1 */
	asn_DEF_FailedLogicalChannelInfo_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_FailedLogicalChannelInfo_r15_tags_1)
		/sizeof(asn_DEF_FailedLogicalChannelInfo_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FailedLogicalChannelInfo_r15_1,
	2,	/* Elements count */
	&asn_SPC_FailedLogicalChannelInfo_r15_specs_1	/* Additional specs */
};

