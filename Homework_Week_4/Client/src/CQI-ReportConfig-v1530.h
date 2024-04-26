/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CQI_ReportConfig_v1530_H_
#define	_CQI_ReportConfig_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15 {
	CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15_allSubframes	= 0,
	CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15_csi_SubframeSet1	= 1,
	CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15_csi_SubframeSet2	= 2,
	CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15_spare1	= 3
} e_CQI_ReportConfig_v1530__altCQI_Table_1024QAM_r15;

/* CQI-ReportConfig-v1530 */
typedef struct CQI_ReportConfig_v1530 {
	long	*altCQI_Table_1024QAM_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_altCQI_Table_1024QAM_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_v1530_H_ */
#include <asn_internal.h>
