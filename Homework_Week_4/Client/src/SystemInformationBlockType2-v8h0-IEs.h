/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType2_v8h0_IEs_H_
#define	_SystemInformationBlockType2_v8h0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AdditionalSpectrumEmission.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType2_v9e0_IEs;

/* SystemInformationBlockType2-v8h0-IEs */
typedef struct SystemInformationBlockType2_v8h0_IEs {
	struct SystemInformationBlockType2_v8h0_IEs__multiBandInfoList {
		A_SEQUENCE_OF(AdditionalSpectrumEmission_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList;
	struct SystemInformationBlockType2_v9e0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_v8h0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_v8h0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType2_v8h0_IEs_H_ */
#include <asn_internal.h>
