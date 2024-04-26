/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BCCH_DL_SCH_MessageType_BR_r13_H_
#define	_BCCH_DL_SCH_MessageType_BR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInformation-BR-r13.h"
#include "SystemInformationBlockType1-BR-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_DL_SCH_MessageType_BR_r13_PR {
	BCCH_DL_SCH_MessageType_BR_r13_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_BR_r13_PR_c1,
	BCCH_DL_SCH_MessageType_BR_r13_PR_messageClassExtension
} BCCH_DL_SCH_MessageType_BR_r13_PR;
typedef enum BCCH_DL_SCH_MessageType_BR_r13__c1_PR {
	BCCH_DL_SCH_MessageType_BR_r13__c1_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_BR_r13__c1_PR_systemInformation_BR_r13,
	BCCH_DL_SCH_MessageType_BR_r13__c1_PR_systemInformationBlockType1_BR_r13
} BCCH_DL_SCH_MessageType_BR_r13__c1_PR;

/* BCCH-DL-SCH-MessageType-BR-r13 */
typedef struct BCCH_DL_SCH_MessageType_BR_r13 {
	BCCH_DL_SCH_MessageType_BR_r13_PR present;
	union BCCH_DL_SCH_MessageType_BR_r13_u {
		struct BCCH_DL_SCH_MessageType_BR_r13__c1 {
			BCCH_DL_SCH_MessageType_BR_r13__c1_PR present;
			union BCCH_DL_SCH_MessageType_BR_r13__c1_u {
				SystemInformation_BR_r13_t	 systemInformation_BR_r13;
				SystemInformationBlockType1_BR_r13_t	 systemInformationBlockType1_BR_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct BCCH_DL_SCH_MessageType_BR_r13__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_MessageType_BR_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_MessageType_BR_r13;
extern asn_CHOICE_specifics_t asn_SPC_BCCH_DL_SCH_MessageType_BR_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BCCH_DL_SCH_MessageType_BR_r13_1[2];
extern asn_per_constraints_t asn_PER_type_BCCH_DL_SCH_MessageType_BR_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_MessageType_BR_r13_H_ */
#include <asn_internal.h>
