/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SchedulingRequestConfig_v1530_H_
#define	_SchedulingRequestConfig_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingRequestConfig_v1530_PR {
	SchedulingRequestConfig_v1530_PR_NOTHING,	/* No components present */
	SchedulingRequestConfig_v1530_PR_release,
	SchedulingRequestConfig_v1530_PR_setup
} SchedulingRequestConfig_v1530_PR;
typedef enum SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15 {
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n4	= 0,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n8	= 1,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n16	= 2,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n32	= 3,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n64	= 4,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare3	= 5,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare2	= 6,
	SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare1	= 7
} e_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15;

/* Forward declarations */
struct SR_SubslotSPUCCH_ResourceList_r15;

/* SchedulingRequestConfig-v1530 */
typedef struct SchedulingRequestConfig_v1530 {
	SchedulingRequestConfig_v1530_PR present;
	union SchedulingRequestConfig_v1530_u {
		NULL_t	 release;
		struct SchedulingRequestConfig_v1530__setup {
			long	*sr_SlotSPUCCH_IndexFH_r15	/* OPTIONAL */;
			long	*sr_SlotSPUCCH_IndexNoFH_r15	/* OPTIONAL */;
			struct SR_SubslotSPUCCH_ResourceList_r15	*sr_SubslotSPUCCH_ResourceList_r15	/* OPTIONAL */;
			long	*sr_ConfigIndexSlot_r15	/* OPTIONAL */;
			long	*sr_ConfigIndexSubslot_r15	/* OPTIONAL */;
			long	 dssr_TransMax_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dssr_TransMax_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig_v1530;
extern asn_CHOICE_specifics_t asn_SPC_SchedulingRequestConfig_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_v1530_1[2];
extern asn_per_constraints_t asn_PER_type_SchedulingRequestConfig_v1530_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_v1530_H_ */
#include <asn_internal.h>
