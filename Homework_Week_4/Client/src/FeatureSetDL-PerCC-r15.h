/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_FeatureSetDL_PerCC_r15_H_
#define	_FeatureSetDL_PerCC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "MIMO-CapabilityDL-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetDL_PerCC_r15__fourLayerTM3_TM4_r15 {
	FeatureSetDL_PerCC_r15__fourLayerTM3_TM4_r15_supported	= 0
} e_FeatureSetDL_PerCC_r15__fourLayerTM3_TM4_r15;
typedef enum FeatureSetDL_PerCC_r15__supportedCSI_Proc_r15 {
	FeatureSetDL_PerCC_r15__supportedCSI_Proc_r15_n1	= 0,
	FeatureSetDL_PerCC_r15__supportedCSI_Proc_r15_n3	= 1,
	FeatureSetDL_PerCC_r15__supportedCSI_Proc_r15_n4	= 2
} e_FeatureSetDL_PerCC_r15__supportedCSI_Proc_r15;

/* FeatureSetDL-PerCC-r15 */
typedef struct FeatureSetDL_PerCC_r15 {
	long	*fourLayerTM3_TM4_r15	/* OPTIONAL */;
	MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_MRDC_r15	/* OPTIONAL */;
	long	*supportedCSI_Proc_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetDL_PerCC_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetDL_PerCC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDL_PerCC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetDL_PerCC_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetDL_PerCC_r15_H_ */
#include <asn_internal.h>
