/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RSRQ_Type_r12_H_
#define	_RSRQ_Type_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RSRQ-Type-r12 */
typedef struct RSRQ_Type_r12 {
	BOOLEAN_t	 allSymbols_r12;
	BOOLEAN_t	 wideBand_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RSRQ_Type_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RSRQ_Type_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RSRQ_Type_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RSRQ_Type_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RSRQ_Type_r12_H_ */
#include <asn_internal.h>
