/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PDSCH_ConfigDedicated_v1530_H_
#define	_PDSCH_ConfigDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicated_v1530__qcl_Operation_v1530 {
	PDSCH_ConfigDedicated_v1530__qcl_Operation_v1530_typeC	= 0
} e_PDSCH_ConfigDedicated_v1530__qcl_Operation_v1530;
typedef enum PDSCH_ConfigDedicated_v1530__tbs_IndexAlt3_r15 {
	PDSCH_ConfigDedicated_v1530__tbs_IndexAlt3_r15_a37	= 0
} e_PDSCH_ConfigDedicated_v1530__tbs_IndexAlt3_r15;
typedef enum PDSCH_ConfigDedicated_v1530__ce_CQI_AlternativeTableConfig_r15 {
	PDSCH_ConfigDedicated_v1530__ce_CQI_AlternativeTableConfig_r15_on	= 0
} e_PDSCH_ConfigDedicated_v1530__ce_CQI_AlternativeTableConfig_r15;
typedef enum PDSCH_ConfigDedicated_v1530__ce_PDSCH_64QAM_Config_r15 {
	PDSCH_ConfigDedicated_v1530__ce_PDSCH_64QAM_Config_r15_on	= 0
} e_PDSCH_ConfigDedicated_v1530__ce_PDSCH_64QAM_Config_r15;
typedef enum PDSCH_ConfigDedicated_v1530__ce_PDSCH_FlexibleStartPRB_AllocConfig_r15 {
	PDSCH_ConfigDedicated_v1530__ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_on	= 0
} e_PDSCH_ConfigDedicated_v1530__ce_PDSCH_FlexibleStartPRB_AllocConfig_r15;
typedef enum PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15 {
	PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15_oDot5	= 0,
	PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15_oDot625	= 1,
	PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15_oDot75	= 2,
	PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15_oDot875	= 3
} e_PDSCH_ConfigDedicated_v1530__altMCS_TableScalingConfig_r15;

/* PDSCH-ConfigDedicated-v1530 */
typedef struct PDSCH_ConfigDedicated_v1530 {
	long	*qcl_Operation_v1530	/* OPTIONAL */;
	long	*tbs_IndexAlt3_r15	/* OPTIONAL */;
	long	*ce_CQI_AlternativeTableConfig_r15	/* OPTIONAL */;
	long	*ce_PDSCH_64QAM_Config_r15	/* OPTIONAL */;
	long	*ce_PDSCH_FlexibleStartPRB_AllocConfig_r15	/* OPTIONAL */;
	long	*altMCS_TableScalingConfig_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_qcl_Operation_v1530_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbs_IndexAlt3_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_CQI_AlternativeTableConfig_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_64QAM_Config_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_FlexibleStartPRB_AllocConfig_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_altMCS_TableScalingConfig_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1530_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1530_H_ */
#include <asn_internal.h>
