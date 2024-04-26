/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RedirectedCarrierInfo.h"

asn_per_constraints_t asn_PER_type_RedirectedCarrierInfo_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.geran),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"geran"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_FDD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_TDD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-TDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.cdma2000_HRPD),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma2000-HRPD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.cdma2000_1xRTT),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma2000-1xRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_TDD_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_TDD_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-TDD-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.nr_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierInfoNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RedirectedCarrierInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* geran */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* utra-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* utra-TDD */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cdma2000-HRPD */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cdma2000-1xRTT */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* utra-TDD-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nr-r15 */
};
asn_CHOICE_specifics_t asn_SPC_RedirectedCarrierInfo_specs_1 = {
	sizeof(struct RedirectedCarrierInfo),
	offsetof(struct RedirectedCarrierInfo, _asn_ctx),
	offsetof(struct RedirectedCarrierInfo, present),
	sizeof(((struct RedirectedCarrierInfo *)0)->present),
	asn_MAP_RedirectedCarrierInfo_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0,
	6	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo = {
	"RedirectedCarrierInfo",
	"RedirectedCarrierInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RedirectedCarrierInfo_constr_1, CHOICE_constraint },
	asn_MBR_RedirectedCarrierInfo_1,
	8,	/* Elements count */
	&asn_SPC_RedirectedCarrierInfo_specs_1	/* Additional specs */
};

