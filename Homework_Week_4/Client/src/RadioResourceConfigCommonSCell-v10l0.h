/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RadioResourceConfigCommonSCell_v10l0_H_
#define	_RadioResourceConfigCommonSCell_v10l0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AdditionalSpectrumEmission-v10l0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RadioResourceConfigCommonSCell-v10l0 */
typedef struct RadioResourceConfigCommonSCell_v10l0 {
	struct RadioResourceConfigCommonSCell_v10l0__ul_Configuration_v10l0 {
		AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmissionSCell_v10l0;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ul_Configuration_v10l0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonSCell_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSCell_v10l0;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSCell_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSCell_v10l0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonSCell_v10l0_H_ */
#include <asn_internal.h>
