/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "Handover.h"

#include "SI-OrPSI-GERAN.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nas_SecurityParamFromEUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_targetRAT_Type_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nas_SecurityParamFromEUTRA_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_targetRAT_Type_value2enum_2[] = {
	{ 0,	4,	"utra" },
	{ 1,	5,	"geran" },
	{ 2,	14,	"cdma2000-1XRTT" },
	{ 3,	13,	"cdma2000-HRPD" },
	{ 4,	2,	"nr" },
	{ 5,	5,	"eutra" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_targetRAT_Type_enum2value_2[] = {
	2,	/* cdma2000-1XRTT(2) */
	3,	/* cdma2000-HRPD(3) */
	5,	/* eutra(5) */
	1,	/* geran(1) */
	4,	/* nr(4) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	0	/* utra(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_targetRAT_Type_specs_2 = {
	asn_MAP_targetRAT_Type_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_targetRAT_Type_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_targetRAT_Type_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_targetRAT_Type_2 = {
	"targetRAT-Type",
	"targetRAT-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_targetRAT_Type_tags_2,
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]) - 1, /* 1 */
	asn_DEF_targetRAT_Type_tags_2,	/* Same as above */
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_targetRAT_Type_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_targetRAT_Type_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Handover_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Handover, targetRAT_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_targetRAT_Type_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRAT-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Handover, targetRAT_MessageContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRAT-MessageContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct Handover, nas_SecurityParamFromEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_nas_SecurityParamFromEUTRA_constr_13,  memb_nas_SecurityParamFromEUTRA_constraint_1 },
		0, 0, /* No default value */
		"nas-SecurityParamFromEUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct Handover, systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SI_OrPSI_GERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation"
		},
};
static const int asn_MAP_Handover_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_Handover_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Handover_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRAT-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetRAT-MessageContainer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nas-SecurityParamFromEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* systemInformation */
};
asn_SEQUENCE_specifics_t asn_SPC_Handover_specs_1 = {
	sizeof(struct Handover),
	offsetof(struct Handover, _asn_ctx),
	asn_MAP_Handover_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Handover_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Handover = {
	"Handover",
	"Handover",
	&asn_OP_SEQUENCE,
	asn_DEF_Handover_tags_1,
	sizeof(asn_DEF_Handover_tags_1)
		/sizeof(asn_DEF_Handover_tags_1[0]), /* 1 */
	asn_DEF_Handover_tags_1,	/* Same as above */
	sizeof(asn_DEF_Handover_tags_1)
		/sizeof(asn_DEF_Handover_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Handover_1,
	4,	/* Elements count */
	&asn_SPC_Handover_specs_1	/* Additional specs */
};

