/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "EIMTA-MainConfig-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_eimta_CommandSubframeSet_r12_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_eimta_CommandPeriodicity_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eimta_CommandSubframeSet_r12_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_EIMTA_MainConfig_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_eimta_CommandPeriodicity_r12_value2enum_5[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf40" },
	{ 3,	4,	"sf80" }
};
static const unsigned int asn_MAP_eimta_CommandPeriodicity_r12_enum2value_5[] = {
	0,	/* sf10(0) */
	1,	/* sf20(1) */
	2,	/* sf40(2) */
	3	/* sf80(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_eimta_CommandPeriodicity_r12_specs_5 = {
	asn_MAP_eimta_CommandPeriodicity_r12_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_eimta_CommandPeriodicity_r12_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eimta_CommandPeriodicity_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eimta_CommandPeriodicity_r12_5 = {
	"eimta-CommandPeriodicity-r12",
	"eimta-CommandPeriodicity-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_eimta_CommandPeriodicity_r12_tags_5,
	sizeof(asn_DEF_eimta_CommandPeriodicity_r12_tags_5)
		/sizeof(asn_DEF_eimta_CommandPeriodicity_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_eimta_CommandPeriodicity_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_eimta_CommandPeriodicity_r12_tags_5)
		/sizeof(asn_DEF_eimta_CommandPeriodicity_r12_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_eimta_CommandPeriodicity_r12_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eimta_CommandPeriodicity_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EIMTA_MainConfig_r12__setup, eimta_RNTI_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eimta-RNTI-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EIMTA_MainConfig_r12__setup, eimta_CommandPeriodicity_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eimta_CommandPeriodicity_r12_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eimta-CommandPeriodicity-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EIMTA_MainConfig_r12__setup, eimta_CommandSubframeSet_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_eimta_CommandSubframeSet_r12_constr_10,  memb_eimta_CommandSubframeSet_r12_constraint_3 },
		0, 0, /* No default value */
		"eimta-CommandSubframeSet-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eimta-RNTI-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eimta-CommandPeriodicity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* eimta-CommandSubframeSet-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct EIMTA_MainConfig_r12__setup),
	offsetof(struct EIMTA_MainConfig_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EIMTA_MainConfig_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EIMTA_MainConfig_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EIMTA_MainConfig_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_EIMTA_MainConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_EIMTA_MainConfig_r12_specs_1 = {
	sizeof(struct EIMTA_MainConfig_r12),
	offsetof(struct EIMTA_MainConfig_r12, _asn_ctx),
	offsetof(struct EIMTA_MainConfig_r12, present),
	sizeof(((struct EIMTA_MainConfig_r12 *)0)->present),
	asn_MAP_EIMTA_MainConfig_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EIMTA_MainConfig_r12 = {
	"EIMTA-MainConfig-r12",
	"EIMTA-MainConfig-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_EIMTA_MainConfig_r12_constr_1, CHOICE_constraint },
	asn_MBR_EIMTA_MainConfig_r12_1,
	2,	/* Elements count */
	&asn_SPC_EIMTA_MainConfig_r12_specs_1	/* Additional specs */
};

