/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionReestablishmentRequest_NB_r14_IEs_H_
#define	_RRCConnectionReestablishmentRequest_NB_r14_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReestabUE-Identity-CP-NB-r14.h"
#include "ReestablishmentCause-NB-r13.h"
#include "CQI-NPDCCH-Short-NB-r14.h"
#include <BOOLEAN.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionReestablishmentRequest-NB-r14-IEs */
typedef struct RRCConnectionReestablishmentRequest_NB_r14_IEs {
	ReestabUE_Identity_CP_NB_r14_t	 ue_Identity_r14;
	ReestablishmentCause_NB_r13_t	 reestablishmentCause_r14;
	CQI_NPDCCH_Short_NB_r14_t	 cqi_NPDCCH_r14;
	BOOLEAN_t	 earlyContentionResolution_r14;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentRequest_NB_r14_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentRequest_NB_r14_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentRequest_NB_r14_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentRequest_NB_r14_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentRequest_NB_r14_IEs_H_ */
#include <asn_internal.h>
