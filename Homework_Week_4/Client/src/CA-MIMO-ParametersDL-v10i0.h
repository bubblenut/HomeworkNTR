/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CA_MIMO_ParametersDL_v10i0_H_
#define	_CA_MIMO_ParametersDL_v10i0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_MIMO_ParametersDL_v10i0__fourLayerTM3_TM4_r10 {
	CA_MIMO_ParametersDL_v10i0__fourLayerTM3_TM4_r10_supported	= 0
} e_CA_MIMO_ParametersDL_v10i0__fourLayerTM3_TM4_r10;

/* CA-MIMO-ParametersDL-v10i0 */
typedef struct CA_MIMO_ParametersDL_v10i0 {
	long	*fourLayerTM3_TM4_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersDL_v10i0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_v10i0;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_v10i0_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_v10i0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersDL_v10i0_H_ */
#include <asn_internal.h>
