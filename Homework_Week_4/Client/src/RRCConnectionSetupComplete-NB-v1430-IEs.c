/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCConnectionSetupComplete-NB-v1430-IEs.h"

#include "RRCConnectionSetupComplete-NB-v1470-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dcn_ID_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_gummei_Type_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dcn_ID_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gummei_Type_r14_value2enum_2[] = {
	{ 0,	6,	"mapped" }
};
static const unsigned int asn_MAP_gummei_Type_r14_enum2value_2[] = {
	0	/* mapped(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_gummei_Type_r14_specs_2 = {
	asn_MAP_gummei_Type_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_gummei_Type_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gummei_Type_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gummei_Type_r14_2 = {
	"gummei-Type-r14",
	"gummei-Type-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_gummei_Type_r14_tags_2,
	sizeof(asn_DEF_gummei_Type_r14_tags_2)
		/sizeof(asn_DEF_gummei_Type_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_gummei_Type_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_gummei_Type_r14_tags_2)
		/sizeof(asn_DEF_gummei_Type_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_gummei_Type_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gummei_Type_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_v1430_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetupComplete_NB_v1430_IEs, gummei_Type_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gummei_Type_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gummei-Type-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_NB_v1430_IEs, dcn_ID_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_dcn_ID_r14_constr_4,  memb_dcn_ID_r14_constraint_1 },
		0, 0, /* No default value */
		"dcn-ID-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_NB_v1430_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_NB_v1470_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionSetupComplete_NB_v1430_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_NB_v1430_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gummei-Type-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dcn-ID-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_v1430_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_NB_v1430_IEs),
	offsetof(struct RRCConnectionSetupComplete_NB_v1430_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_NB_v1430_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_NB_v1430_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs = {
	"RRCConnectionSetupComplete-NB-v1430-IEs",
	"RRCConnectionSetupComplete-NB-v1430-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionSetupComplete_NB_v1430_IEs_1,
	3,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_NB_v1430_IEs_specs_1	/* Additional specs */
};

