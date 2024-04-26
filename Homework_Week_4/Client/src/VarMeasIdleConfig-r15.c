/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "VarMeasIdleConfig-r15.h"

#include "EUTRA-CarrierList-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_measIdleDuration_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_measIdleDuration_r15_value2enum_3[] = {
	{ 0,	5,	"sec10" },
	{ 1,	5,	"sec30" },
	{ 2,	5,	"sec60" },
	{ 3,	6,	"sec120" },
	{ 4,	6,	"sec180" },
	{ 5,	6,	"sec240" },
	{ 6,	6,	"sec300" }
};
static const unsigned int asn_MAP_measIdleDuration_r15_enum2value_3[] = {
	0,	/* sec10(0) */
	3,	/* sec120(3) */
	4,	/* sec180(4) */
	5,	/* sec240(5) */
	1,	/* sec30(1) */
	6,	/* sec300(6) */
	2	/* sec60(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_measIdleDuration_r15_specs_3 = {
	asn_MAP_measIdleDuration_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_measIdleDuration_r15_enum2value_3,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measIdleDuration_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measIdleDuration_r15_3 = {
	"measIdleDuration-r15",
	"measIdleDuration-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_measIdleDuration_r15_tags_3,
	sizeof(asn_DEF_measIdleDuration_r15_tags_3)
		/sizeof(asn_DEF_measIdleDuration_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_measIdleDuration_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_measIdleDuration_r15_tags_3)
		/sizeof(asn_DEF_measIdleDuration_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_measIdleDuration_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measIdleDuration_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VarMeasIdleConfig_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct VarMeasIdleConfig_r15, measIdleCarrierListEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_CarrierList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdleCarrierListEUTRA-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarMeasIdleConfig_r15, measIdleDuration_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measIdleDuration_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdleDuration-r15"
		},
};
static const int asn_MAP_VarMeasIdleConfig_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_VarMeasIdleConfig_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarMeasIdleConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measIdleCarrierListEUTRA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measIdleDuration-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarMeasIdleConfig_r15_specs_1 = {
	sizeof(struct VarMeasIdleConfig_r15),
	offsetof(struct VarMeasIdleConfig_r15, _asn_ctx),
	asn_MAP_VarMeasIdleConfig_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_VarMeasIdleConfig_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarMeasIdleConfig_r15 = {
	"VarMeasIdleConfig-r15",
	"VarMeasIdleConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_VarMeasIdleConfig_r15_tags_1,
	sizeof(asn_DEF_VarMeasIdleConfig_r15_tags_1)
		/sizeof(asn_DEF_VarMeasIdleConfig_r15_tags_1[0]), /* 1 */
	asn_DEF_VarMeasIdleConfig_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarMeasIdleConfig_r15_tags_1)
		/sizeof(asn_DEF_VarMeasIdleConfig_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarMeasIdleConfig_r15_1,
	2,	/* Elements count */
	&asn_SPC_VarMeasIdleConfig_r15_specs_1	/* Additional specs */
};

