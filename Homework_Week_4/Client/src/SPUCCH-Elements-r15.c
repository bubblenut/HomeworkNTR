/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SPUCCH-Elements-r15.h"

#include "N4SPUCCH-Resource-r15.h"
static int
memb_NativeInteger_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1319)) {
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
memb_n1SubslotSPUCCH_AN_List_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_n1SlotSPUCCH_FH_AN_List_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1319)) {
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
memb_n1SlotSPUCCH_NoFH_AN_List_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3959)) {
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
memb_n3SPUCCH_AN_List_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 549)) {
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
memb_n4SPUCCHSlot_Resource_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_n4SPUCCHSubslot_Resource_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_n4maxCoderateSlotPUCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_n4maxCoderateSubslotPUCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_n4maxCoderateMultiResourceSlotPUCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_n4maxCoderateMultiResourceSubslotPUCCH_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1319 }	/* (0..1319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n1SubslotSPUCCH_AN_List_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n4SPUCCHSlot_Resource_r15_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n4SPUCCHSubslot_Resource_r15_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1SubslotSPUCCH_AN_List_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1SlotSPUCCH_FH_AN_List_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1319 }	/* (0..1319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1SlotSPUCCH_NoFH_AN_List_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3959 }	/* (0..3959) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n3SPUCCH_AN_List_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  549 }	/* (0..549) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4SPUCCHSlot_Resource_r15_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4SPUCCHSubslot_Resource_r15_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4maxCoderateSlotPUCCH_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4maxCoderateSubslotPUCCH_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4maxCoderateMultiResourceSlotPUCCH_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4maxCoderateMultiResourceSubslotPUCCH_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SPUCCH_Elements_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_n1SubslotSPUCCH_AN_List_r15_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_5,  memb_NativeInteger_constraint_4 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n1SubslotSPUCCH_AN_List_r15_specs_4 = {
	sizeof(struct SPUCCH_Elements_r15__setup__n1SubslotSPUCCH_AN_List_r15),
	offsetof(struct SPUCCH_Elements_r15__setup__n1SubslotSPUCCH_AN_List_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n1SubslotSPUCCH_AN_List_r15_4 = {
	"n1SubslotSPUCCH-AN-List-r15",
	"n1SubslotSPUCCH-AN-List-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4,
	sizeof(asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4)
		/sizeof(asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4)
		/sizeof(asn_DEF_n1SubslotSPUCCH_AN_List_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_n1SubslotSPUCCH_AN_List_r15_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_n1SubslotSPUCCH_AN_List_r15_4,
	1,	/* Single element */
	&asn_SPC_n1SubslotSPUCCH_AN_List_r15_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_n4SPUCCHSlot_Resource_r15_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_N4SPUCCH_Resource_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n4SPUCCHSlot_Resource_r15_specs_9 = {
	sizeof(struct SPUCCH_Elements_r15__setup__n4SPUCCHSlot_Resource_r15),
	offsetof(struct SPUCCH_Elements_r15__setup__n4SPUCCHSlot_Resource_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n4SPUCCHSlot_Resource_r15_9 = {
	"n4SPUCCHSlot-Resource-r15",
	"n4SPUCCHSlot-Resource-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9,
	sizeof(asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9)
		/sizeof(asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9)
		/sizeof(asn_DEF_n4SPUCCHSlot_Resource_r15_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_n4SPUCCHSlot_Resource_r15_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_n4SPUCCHSlot_Resource_r15_9,
	1,	/* Single element */
	&asn_SPC_n4SPUCCHSlot_Resource_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_n4SPUCCHSubslot_Resource_r15_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_N4SPUCCH_Resource_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n4SPUCCHSubslot_Resource_r15_specs_11 = {
	sizeof(struct SPUCCH_Elements_r15__setup__n4SPUCCHSubslot_Resource_r15),
	offsetof(struct SPUCCH_Elements_r15__setup__n4SPUCCHSubslot_Resource_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n4SPUCCHSubslot_Resource_r15_11 = {
	"n4SPUCCHSubslot-Resource-r15",
	"n4SPUCCHSubslot-Resource-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11,
	sizeof(asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11)
		/sizeof(asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11)
		/sizeof(asn_DEF_n4SPUCCHSubslot_Resource_r15_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_n4SPUCCHSubslot_Resource_r15_constr_11, SEQUENCE_OF_constraint },
	asn_MBR_n4SPUCCHSubslot_Resource_r15_11,
	1,	/* Single element */
	&asn_SPC_n4SPUCCHSubslot_Resource_r15_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 10, offsetof(struct SPUCCH_Elements_r15__setup, n1SubslotSPUCCH_AN_List_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n1SubslotSPUCCH_AN_List_r15_4,
		0,
		{ 0, &asn_PER_memb_n1SubslotSPUCCH_AN_List_r15_constr_4,  memb_n1SubslotSPUCCH_AN_List_r15_constraint_3 },
		0, 0, /* No default value */
		"n1SubslotSPUCCH-AN-List-r15"
		},
	{ ATF_POINTER, 9, offsetof(struct SPUCCH_Elements_r15__setup, n1SlotSPUCCH_FH_AN_List_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n1SlotSPUCCH_FH_AN_List_r15_constr_6,  memb_n1SlotSPUCCH_FH_AN_List_r15_constraint_3 },
		0, 0, /* No default value */
		"n1SlotSPUCCH-FH-AN-List-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct SPUCCH_Elements_r15__setup, n1SlotSPUCCH_NoFH_AN_List_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n1SlotSPUCCH_NoFH_AN_List_r15_constr_7,  memb_n1SlotSPUCCH_NoFH_AN_List_r15_constraint_3 },
		0, 0, /* No default value */
		"n1SlotSPUCCH-NoFH-AN-List-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct SPUCCH_Elements_r15__setup, n3SPUCCH_AN_List_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n3SPUCCH_AN_List_r15_constr_8,  memb_n3SPUCCH_AN_List_r15_constraint_3 },
		0, 0, /* No default value */
		"n3SPUCCH-AN-List-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct SPUCCH_Elements_r15__setup, n4SPUCCHSlot_Resource_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_n4SPUCCHSlot_Resource_r15_9,
		0,
		{ 0, &asn_PER_memb_n4SPUCCHSlot_Resource_r15_constr_9,  memb_n4SPUCCHSlot_Resource_r15_constraint_3 },
		0, 0, /* No default value */
		"n4SPUCCHSlot-Resource-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct SPUCCH_Elements_r15__setup, n4SPUCCHSubslot_Resource_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_n4SPUCCHSubslot_Resource_r15_11,
		0,
		{ 0, &asn_PER_memb_n4SPUCCHSubslot_Resource_r15_constr_11,  memb_n4SPUCCHSubslot_Resource_r15_constraint_3 },
		0, 0, /* No default value */
		"n4SPUCCHSubslot-Resource-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SPUCCH_Elements_r15__setup, n4maxCoderateSlotPUCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n4maxCoderateSlotPUCCH_r15_constr_13,  memb_n4maxCoderateSlotPUCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"n4maxCoderateSlotPUCCH-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SPUCCH_Elements_r15__setup, n4maxCoderateSubslotPUCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n4maxCoderateSubslotPUCCH_r15_constr_14,  memb_n4maxCoderateSubslotPUCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"n4maxCoderateSubslotPUCCH-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SPUCCH_Elements_r15__setup, n4maxCoderateMultiResourceSlotPUCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n4maxCoderateMultiResourceSlotPUCCH_r15_constr_15,  memb_n4maxCoderateMultiResourceSlotPUCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"n4maxCoderateMultiResourceSlotPUCCH-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SPUCCH_Elements_r15__setup, n4maxCoderateMultiResourceSubslotPUCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_n4maxCoderateMultiResourceSubslotPUCCH_r15_constr_16,  memb_n4maxCoderateMultiResourceSubslotPUCCH_r15_constraint_3 },
		0, 0, /* No default value */
		"n4maxCoderateMultiResourceSubslotPUCCH-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n1SubslotSPUCCH-AN-List-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n1SlotSPUCCH-FH-AN-List-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n1SlotSPUCCH-NoFH-AN-List-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n3SPUCCH-AN-List-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n4SPUCCHSlot-Resource-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n4SPUCCHSubslot-Resource-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* n4maxCoderateSlotPUCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* n4maxCoderateSubslotPUCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* n4maxCoderateMultiResourceSlotPUCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* n4maxCoderateMultiResourceSubslotPUCCH-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SPUCCH_Elements_r15__setup),
	offsetof(struct SPUCCH_Elements_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	10,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	10, 0,	/* Root/Additions */
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
	10,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPUCCH_Elements_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPUCCH_Elements_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPUCCH_Elements_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPUCCH_Elements_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SPUCCH_Elements_r15_specs_1 = {
	sizeof(struct SPUCCH_Elements_r15),
	offsetof(struct SPUCCH_Elements_r15, _asn_ctx),
	offsetof(struct SPUCCH_Elements_r15, present),
	sizeof(((struct SPUCCH_Elements_r15 *)0)->present),
	asn_MAP_SPUCCH_Elements_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPUCCH_Elements_r15 = {
	"SPUCCH-Elements-r15",
	"SPUCCH-Elements-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SPUCCH_Elements_r15_constr_1, CHOICE_constraint },
	asn_MBR_SPUCCH_Elements_r15_1,
	2,	/* Elements count */
	&asn_SPC_SPUCCH_Elements_r15_specs_1	/* Additional specs */
};

