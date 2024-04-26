/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MBSFN_AreaInfo_r9_H_
#define	_MBSFN_AreaInfo_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBSFN-AreaId-r12.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_AreaInfo_r9__non_MBSFNregionLength {
	MBSFN_AreaInfo_r9__non_MBSFNregionLength_s1	= 0,
	MBSFN_AreaInfo_r9__non_MBSFNregionLength_s2	= 1
} e_MBSFN_AreaInfo_r9__non_MBSFNregionLength;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf32	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf64	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf128	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf256	= 3
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9_rf512	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9_rf1024	= 1
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n2	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n7	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n13	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n19	= 3
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430 {
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430_rf1	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430_rf2	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430_rf4	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430_rf8	= 3,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430_rf16	= 4
} e_MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_RepetitionPeriod_v1430;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430 {
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf1	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf2	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf4	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf8	= 3,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf16	= 4,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf32	= 5,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf64	= 6,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf128	= 7,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_rf256	= 8,
	MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430_spare7	= 9
} e_MBSFN_AreaInfo_r9__mcch_Config_r14__mcch_ModificationPeriod_v1430;
typedef enum MBSFN_AreaInfo_r9__subcarrierSpacingMBMS_r14 {
	MBSFN_AreaInfo_r9__subcarrierSpacingMBMS_r14_khz_7dot5	= 0,
	MBSFN_AreaInfo_r9__subcarrierSpacingMBMS_r14_khz_1dot25	= 1
} e_MBSFN_AreaInfo_r9__subcarrierSpacingMBMS_r14;

/* MBSFN-AreaInfo-r9 */
typedef struct MBSFN_AreaInfo_r9 {
	MBSFN_AreaId_r12_t	 mbsfn_AreaId_r9;
	long	 non_MBSFNregionLength;
	long	 notificationIndicator_r9;
	struct MBSFN_AreaInfo_r9__mcch_Config_r9 {
		long	 mcch_RepetitionPeriod_r9;
		long	 mcch_Offset_r9;
		long	 mcch_ModificationPeriod_r9;
		BIT_STRING_t	 sf_AllocInfo_r9;
		long	 signallingMCS_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mcch_Config_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MBSFN_AreaInfo_r9__mcch_Config_r14 {
		long	*mcch_RepetitionPeriod_v1430	/* OPTIONAL */;
		long	*mcch_ModificationPeriod_v1430	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mcch_Config_r14;
	long	*subcarrierSpacingMBMS_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_AreaInfo_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_non_MBSFNregionLength_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_RepetitionPeriod_r9_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_ModificationPeriod_r9_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_signallingMCS_r9_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_RepetitionPeriod_v1430_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_ModificationPeriod_v1430_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingMBMS_r14_42;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSFN_AreaInfo_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_AreaInfo_r9_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_AreaInfo_r9_H_ */
#include <asn_internal.h>
