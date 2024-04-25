/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SRB-ToAddMod.h"

static int
memb_srb_Identity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_rlc_Config_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelConfig_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srb_Identity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Config_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_Config_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Config_specs_3 = {
	sizeof(struct SRB_ToAddMod__rlc_Config),
	offsetof(struct SRB_ToAddMod__rlc_Config, _asn_ctx),
	offsetof(struct SRB_ToAddMod__rlc_Config, present),
	sizeof(((struct SRB_ToAddMod__rlc_Config *)0)->present),
	asn_MAP_rlc_Config_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Config_3 = {
	"rlc-Config",
	"rlc-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_rlc_Config_constr_3, CHOICE_constraint },
	asn_MBR_rlc_Config_3,
	2,	/* Elements count */
	&asn_SPC_rlc_Config_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_logicalChannelConfig_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_logicalChannelConfig_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelConfig_specs_6 = {
	sizeof(struct SRB_ToAddMod__logicalChannelConfig),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, _asn_ctx),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, present),
	sizeof(((struct SRB_ToAddMod__logicalChannelConfig *)0)->present),
	asn_MAP_logicalChannelConfig_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelConfig_6 = {
	"logicalChannelConfig",
	"logicalChannelConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_logicalChannelConfig_constr_6, CHOICE_constraint },
	asn_MBR_logicalChannelConfig_6,
	2,	/* Elements count */
	&asn_SPC_logicalChannelConfig_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRB_ToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod, srb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_srb_Identity_constr_2,  memb_srb_Identity_constraint_1 },
		0, 0, /* No default value */
		"srb-Identity"
		},
	{ ATF_POINTER, 2, offsetof(struct SRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Config_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelConfig_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig"
		},
};
static const int asn_MAP_SRB_ToAddMod_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelConfig */
};
asn_SEQUENCE_specifics_t asn_SPC_SRB_ToAddMod_specs_1 = {
	sizeof(struct SRB_ToAddMod),
	offsetof(struct SRB_ToAddMod, _asn_ctx),
	asn_MAP_SRB_ToAddMod_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SRB_ToAddMod_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod = {
	"SRB-ToAddMod",
	"SRB-ToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_SRB_ToAddMod_tags_1,
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_SRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRB_ToAddMod_1,
	3,	/* Elements count */
	&asn_SPC_SRB_ToAddMod_specs_1	/* Additional specs */
};

