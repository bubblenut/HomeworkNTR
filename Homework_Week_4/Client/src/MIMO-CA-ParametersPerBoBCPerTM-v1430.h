/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MIMO_CA_ParametersPerBoBCPerTM_v1430_H_
#define	_MIMO_CA_ParametersPerBoBCPerTM_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14 {
	MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14_different	= 0
} e_MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14;
typedef enum MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14 {
	MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14_different	= 0
} e_MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14;

/* MIMO-CA-ParametersPerBoBCPerTM-v1430 */
typedef struct MIMO_CA_ParametersPerBoBCPerTM_v1430 {
	long	*csi_ReportingNP_r14	/* OPTIONAL */;
	long	*csi_ReportingAdvanced_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_CA_ParametersPerBoBCPerTM_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingNP_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingAdvanced_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBCPerTM_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBCPerTM_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CA_ParametersPerBoBCPerTM_v1430_H_ */
#include <asn_internal.h>
