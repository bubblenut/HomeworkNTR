/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_BasedNetwPerfMeasParameters_v1530_H_
#define	_UE_BasedNetwPerfMeasParameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_BasedNetwPerfMeasParameters_v1530__loggedMeasBT_r15 {
	UE_BasedNetwPerfMeasParameters_v1530__loggedMeasBT_r15_supported	= 0
} e_UE_BasedNetwPerfMeasParameters_v1530__loggedMeasBT_r15;
typedef enum UE_BasedNetwPerfMeasParameters_v1530__loggedMeasWLAN_r15 {
	UE_BasedNetwPerfMeasParameters_v1530__loggedMeasWLAN_r15_supported	= 0
} e_UE_BasedNetwPerfMeasParameters_v1530__loggedMeasWLAN_r15;
typedef enum UE_BasedNetwPerfMeasParameters_v1530__immMeasBT_r15 {
	UE_BasedNetwPerfMeasParameters_v1530__immMeasBT_r15_supported	= 0
} e_UE_BasedNetwPerfMeasParameters_v1530__immMeasBT_r15;
typedef enum UE_BasedNetwPerfMeasParameters_v1530__immMeasWLAN_r15 {
	UE_BasedNetwPerfMeasParameters_v1530__immMeasWLAN_r15_supported	= 0
} e_UE_BasedNetwPerfMeasParameters_v1530__immMeasWLAN_r15;

/* UE-BasedNetwPerfMeasParameters-v1530 */
typedef struct UE_BasedNetwPerfMeasParameters_v1530 {
	long	*loggedMeasBT_r15	/* OPTIONAL */;
	long	*loggedMeasWLAN_r15	/* OPTIONAL */;
	long	*immMeasBT_r15	/* OPTIONAL */;
	long	*immMeasWLAN_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_BasedNetwPerfMeasParameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_loggedMeasBT_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_loggedMeasWLAN_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_immMeasBT_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_immMeasWLAN_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_BasedNetwPerfMeasParameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_BasedNetwPerfMeasParameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_BasedNetwPerfMeasParameters_v1530_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_BasedNetwPerfMeasParameters_v1530_H_ */
#include <asn_internal.h>
