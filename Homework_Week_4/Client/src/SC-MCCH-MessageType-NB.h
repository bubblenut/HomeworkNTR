/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SC_MCCH_MessageType_NB_H_
#define	_SC_MCCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCPTMConfiguration-NB-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SC_MCCH_MessageType_NB_PR {
	SC_MCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	SC_MCCH_MessageType_NB_PR_c1,
	SC_MCCH_MessageType_NB_PR_messageClassExtension
} SC_MCCH_MessageType_NB_PR;
typedef enum SC_MCCH_MessageType_NB__c1_PR {
	SC_MCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	SC_MCCH_MessageType_NB__c1_PR_scptmConfiguration_r14
} SC_MCCH_MessageType_NB__c1_PR;

/* SC-MCCH-MessageType-NB */
typedef struct SC_MCCH_MessageType_NB {
	SC_MCCH_MessageType_NB_PR present;
	union SC_MCCH_MessageType_NB_u {
		struct SC_MCCH_MessageType_NB__c1 {
			SC_MCCH_MessageType_NB__c1_PR present;
			union SC_MCCH_MessageType_NB__c1_u {
				SCPTMConfiguration_NB_r14_t	 scptmConfiguration_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct SC_MCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SC_MCCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_SC_MCCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_SC_MCCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_SC_MCCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SC_MCCH_MessageType_NB_H_ */
#include <asn_internal.h>
