/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCConnectionReconfiguration-r8-IEs.h"

#include "MeasConfig.h"
#include "MobilityControlInfo.h"
#include "RadioResourceConfigDedicated.h"
#include "SecurityConfigHO.h"
#include "RRCConnectionReconfiguration-v890-IEs.h"
static int
memb_dedicatedInfoNASList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 11)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_dedicatedInfoNASList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  11 }	/* (SIZE(1..11)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dedicatedInfoNASList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  11 }	/* (SIZE(1..11)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dedicatedInfoNASList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dedicatedInfoNASList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dedicatedInfoNASList_specs_4 = {
	sizeof(struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList),
	offsetof(struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dedicatedInfoNASList_4 = {
	"dedicatedInfoNASList",
	"dedicatedInfoNASList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dedicatedInfoNASList_tags_4,
	sizeof(asn_DEF_dedicatedInfoNASList_tags_4)
		/sizeof(asn_DEF_dedicatedInfoNASList_tags_4[0]) - 1, /* 1 */
	asn_DEF_dedicatedInfoNASList_tags_4,	/* Same as above */
	sizeof(asn_DEF_dedicatedInfoNASList_tags_4)
		/sizeof(asn_DEF_dedicatedInfoNASList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_dedicatedInfoNASList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_dedicatedInfoNASList_4,
	1,	/* Single element */
	&asn_SPC_dedicatedInfoNASList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_r8_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionReconfiguration_r8_IEs, measConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measConfig"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionReconfiguration_r8_IEs, mobilityControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityControlInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionReconfiguration_r8_IEs, dedicatedInfoNASList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_dedicatedInfoNASList_4,
		0,
		{ 0, &asn_PER_memb_dedicatedInfoNASList_constr_4,  memb_dedicatedInfoNASList_constraint_1 },
		0, 0, /* No default value */
		"dedicatedInfoNASList"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfiguration_r8_IEs, radioResourceConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicated"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfiguration_r8_IEs, securityConfigHO),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityConfigHO,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityConfigHO"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfiguration_v890_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReconfiguration_r8_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfiguration_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mobilityControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dedicatedInfoNASList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* securityConfigHO */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_r8_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfiguration_r8_IEs),
	offsetof(struct RRCConnectionReconfiguration_r8_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfiguration_r8_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfiguration_r8_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_r8_IEs = {
	"RRCConnectionReconfiguration-r8-IEs",
	"RRCConnectionReconfiguration-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReconfiguration_r8_IEs_1,
	6,	/* Elements count */
	&asn_SPC_RRCConnectionReconfiguration_r8_IEs_specs_1	/* Additional specs */
};

