/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionResumeComplete_NB_H_
#define	_RRCConnectionResumeComplete_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionResumeComplete-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeComplete_NB__criticalExtensions_PR {
	RRCConnectionResumeComplete_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResumeComplete_NB__criticalExtensions_PR_rrcConnectionResumeComplete_r13,
	RRCConnectionResumeComplete_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResumeComplete_NB__criticalExtensions_PR;

/* RRCConnectionResumeComplete-NB */
typedef struct RRCConnectionResumeComplete_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionResumeComplete_NB__criticalExtensions {
		RRCConnectionResumeComplete_NB__criticalExtensions_PR present;
		union RRCConnectionResumeComplete_NB__criticalExtensions_u {
			RRCConnectionResumeComplete_NB_r13_IEs_t	 rrcConnectionResumeComplete_r13;
			struct RRCConnectionResumeComplete_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeComplete_NB_H_ */
#include <asn_internal.h>
