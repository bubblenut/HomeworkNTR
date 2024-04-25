/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "AS-Config.h"

asn_TYPE_member_t asn_MBR_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceMeasConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceRadioResourceConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRadioResourceConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSecurityAlgorithmConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSecurityAlgorithmConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMasterInformationBlock),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MasterInformationBlock,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceMasterInformationBlock"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSystemInformationBlockType1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSystemInformationBlockType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceDl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceDl-CarrierFreq"
		},
};
static const ber_tlv_tag_t asn_DEF_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRadioResourceConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceSecurityAlgorithmConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sourceUE-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sourceMasterInformationBlock */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sourceSystemInformationBlockType1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sourceSystemInformationBlockType2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* sourceDl-CarrierFreq */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1 = {
	sizeof(struct AS_Config),
	offsetof(struct AS_Config, _asn_ctx),
	asn_MAP_AS_Config_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config = {
	"AS-Config",
	"AS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_tags_1,
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_1,
	9,	/* Elements count */
	&asn_SPC_AS_Config_specs_1	/* Additional specs */
};
