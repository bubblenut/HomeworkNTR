/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PCCH_Message_NB_H_
#define	_PCCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PCCH-Message-NB */
typedef struct PCCH_Message_NB {
	PCCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Message_NB_H_ */
#include <asn_internal.h>
