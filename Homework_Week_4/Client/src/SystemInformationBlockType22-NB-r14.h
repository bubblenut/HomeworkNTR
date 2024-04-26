/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType22_NB_r14_H_
#define	_SystemInformationBlockType22_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PagingWeight-NB-r14.h"
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__pagingDistribution_r15 {
	SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__pagingDistribution_r15_true	= 0
} e_SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__pagingDistribution_r15;
typedef enum SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__nprach_Distribution_r15 {
	SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__nprach_Distribution_r15_true	= 0
} e_SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15__nprach_Distribution_r15;

/* Forward declarations */
struct DL_ConfigCommonList_NB_r14;
struct UL_ConfigCommonList_NB_r14;
struct NPRACH_ProbabilityAnchorList_NB_r14;
struct UL_ConfigCommonListTDD_NB_r15;

/* SystemInformationBlockType22-NB-r14 */
typedef struct SystemInformationBlockType22_NB_r14 {
	struct DL_ConfigCommonList_NB_r14	*dl_ConfigList_r14	/* OPTIONAL */;
	struct UL_ConfigCommonList_NB_r14	*ul_ConfigList_r14	/* OPTIONAL */;
	PagingWeight_NB_r14_t	*pagingWeightAnchor_r14	/* OPTIONAL */;
	struct NPRACH_ProbabilityAnchorList_NB_r14	*nprach_ProbabilityAnchorList_r14	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15 {
		struct DL_ConfigCommonList_NB_r14	*dl_ConfigListMixed_r15	/* OPTIONAL */;
		struct UL_ConfigCommonList_NB_r14	*ul_ConfigListMixed_r15	/* OPTIONAL */;
		long	*pagingDistribution_r15	/* OPTIONAL */;
		long	*nprach_Distribution_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mixedOperationModeConfig_r15;
	struct UL_ConfigCommonListTDD_NB_r15	*ul_ConfigList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType22_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pagingDistribution_r15_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_Distribution_r15_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType22_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType22_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType22_NB_r14_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType22_NB_r14_H_ */
#include <asn_internal.h>
