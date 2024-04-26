/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UEInformationResponse_r9_IEs_H_
#define	_UEInformationResponse_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NumberOfPreamblesSent-r11.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RLF_Report_r9;
struct UEInformationResponse_v930_IEs;

/* UEInformationResponse-r9-IEs */
typedef struct UEInformationResponse_r9_IEs {
	struct UEInformationResponse_r9_IEs__rach_Report_r9 {
		NumberOfPreamblesSent_r11_t	 numberOfPreamblesSent_r9;
		BOOLEAN_t	 contentionDetected_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rach_Report_r9;
	struct RLF_Report_r9	*rlf_Report_r9	/* OPTIONAL */;
	struct UEInformationResponse_v930_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationResponse_r9_IEs_H_ */
#include <asn_internal.h>
