/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "LWA-Config-r13.h"

#include "WLAN-MobilityConfig-r13.h"
static int
memb_lwa_WT_Counter_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_wt_MAC_Address_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_lwa_WT_Counter_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_wt_MAC_Address_r14_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LWA_Config_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LWA_Config_r13, lwa_MobilityConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_MobilityConfig_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-MobilityConfig-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LWA_Config_r13, lwa_WT_Counter_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_lwa_WT_Counter_r13_constr_3,  memb_lwa_WT_Counter_r13_constraint_1 },
		0, 0, /* No default value */
		"lwa-WT-Counter-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LWA_Config_r13, wt_MAC_Address_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_wt_MAC_Address_r14_constr_5,  memb_wt_MAC_Address_r14_constraint_1 },
		0, 0, /* No default value */
		"wt-MAC-Address-r14"
		},
};
static const int asn_MAP_LWA_Config_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LWA_Config_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LWA_Config_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lwa-MobilityConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lwa-WT-Counter-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* wt-MAC-Address-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LWA_Config_r13_specs_1 = {
	sizeof(struct LWA_Config_r13),
	offsetof(struct LWA_Config_r13, _asn_ctx),
	asn_MAP_LWA_Config_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LWA_Config_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LWA_Config_r13 = {
	"LWA-Config-r13",
	"LWA-Config-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LWA_Config_r13_tags_1,
	sizeof(asn_DEF_LWA_Config_r13_tags_1)
		/sizeof(asn_DEF_LWA_Config_r13_tags_1[0]), /* 1 */
	asn_DEF_LWA_Config_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LWA_Config_r13_tags_1)
		/sizeof(asn_DEF_LWA_Config_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LWA_Config_r13_1,
	3,	/* Elements count */
	&asn_SPC_LWA_Config_r13_specs_1	/* Additional specs */
};
