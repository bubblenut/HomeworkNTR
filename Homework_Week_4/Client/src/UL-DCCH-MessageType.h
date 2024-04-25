/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UL_DCCH_MessageType_H_
#define	_UL_DCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSFBParametersRequestCDMA2000.h"
#include "MeasurementReport.h"
#include "RRCConnectionReconfigurationComplete.h"
#include "RRCConnectionReestablishmentComplete.h"
#include "RRCConnectionSetupComplete.h"
#include "SecurityModeComplete.h"
#include "SecurityModeFailure.h"
#include "UECapabilityInformation.h"
#include "ULHandoverPreparationTransfer.h"
#include "ULInformationTransfer.h"
#include "CounterCheckResponse.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DCCH_MessageType_PR {
	UL_DCCH_MessageType_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType_PR_c1,
	UL_DCCH_MessageType_PR_messageClassExtension
} UL_DCCH_MessageType_PR;
typedef enum UL_DCCH_MessageType__c1_PR {
	UL_DCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType__c1_PR_csfbParametersRequestCDMA2000,
	UL_DCCH_MessageType__c1_PR_measurementReport,
	UL_DCCH_MessageType__c1_PR_rrcConnectionReconfigurationComplete,
	UL_DCCH_MessageType__c1_PR_rrcConnectionReestablishmentComplete,
	UL_DCCH_MessageType__c1_PR_rrcConnectionSetupComplete,
	UL_DCCH_MessageType__c1_PR_securityModeComplete,
	UL_DCCH_MessageType__c1_PR_securityModeFailure,
	UL_DCCH_MessageType__c1_PR_ueCapabilityInformation,
	UL_DCCH_MessageType__c1_PR_ulHandoverPreparationTransfer,
	UL_DCCH_MessageType__c1_PR_ulInformationTransfer,
	UL_DCCH_MessageType__c1_PR_counterCheckResponse,
	UL_DCCH_MessageType__c1_PR_spare5,
	UL_DCCH_MessageType__c1_PR_spare4,
	UL_DCCH_MessageType__c1_PR_spare3,
	UL_DCCH_MessageType__c1_PR_spare2,
	UL_DCCH_MessageType__c1_PR_spare1
} UL_DCCH_MessageType__c1_PR;

/* UL-DCCH-MessageType */
typedef struct UL_DCCH_MessageType {
	UL_DCCH_MessageType_PR present;
	union UL_DCCH_MessageType_u {
		struct UL_DCCH_MessageType__c1 {
			UL_DCCH_MessageType__c1_PR present;
			union UL_DCCH_MessageType__c1_u {
				CSFBParametersRequestCDMA2000_t	 csfbParametersRequestCDMA2000;
				MeasurementReport_t	 measurementReport;
				RRCConnectionReconfigurationComplete_t	 rrcConnectionReconfigurationComplete;
				RRCConnectionReestablishmentComplete_t	 rrcConnectionReestablishmentComplete;
				RRCConnectionSetupComplete_t	 rrcConnectionSetupComplete;
				SecurityModeComplete_t	 securityModeComplete;
				SecurityModeFailure_t	 securityModeFailure;
				UECapabilityInformation_t	 ueCapabilityInformation;
				ULHandoverPreparationTransfer_t	 ulHandoverPreparationTransfer;
				ULInformationTransfer_t	 ulInformationTransfer;
				CounterCheckResponse_t	 counterCheckResponse;
				NULL_t	 spare5;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct UL_DCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_MessageType_H_ */
#include <asn_internal.h>