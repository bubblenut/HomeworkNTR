/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MasterInformationBlock_TDD_NB_r15_H_
#define	_MasterInformationBlock_TDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include "Inband-SamePCI-TDD-NB-r15.h"
#include "Inband-DifferentPCI-TDD-NB-r15.h"
#include "GuardbandTDD-NB-r15.h"
#include "StandaloneTDD-NB-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR {
	MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_NOTHING,	/* No components present */
	MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_inband_SamePCI_r15,
	MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_inband_DifferentPCI_r15,
	MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_guardband_r15,
	MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_standalone_r15
} MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR;
typedef enum MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15 {
	MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15_anchor	= 0,
	MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15_non_anchor	= 1
} e_MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15;

/* MasterInformationBlock-TDD-NB-r15 */
typedef struct MasterInformationBlock_TDD_NB_r15 {
	BIT_STRING_t	 systemFrameNumber_MSB_r15;
	BIT_STRING_t	 hyperSFN_LSB_r15;
	long	 schedulingInfoSIB1_r15;
	long	 systemInfoValueTag_r15;
	BOOLEAN_t	 ab_Enabled_r15;
	struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15 {
		MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR present;
		union MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_u {
			Inband_SamePCI_TDD_NB_r15_t	 inband_SamePCI_r15;
			Inband_DifferentPCI_TDD_NB_r15_t	 inband_DifferentPCI_r15;
			GuardbandTDD_NB_r15_t	 guardband_r15;
			StandaloneTDD_NB_r15_t	 standalone_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} operationModeInfo_r15;
	long	 sib1_CarrierInfo_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_TDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sib1_CarrierInfo_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_TDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_TDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterInformationBlock_TDD_NB_r15_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_TDD_NB_r15_H_ */
#include <asn_internal.h>
