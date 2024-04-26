/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CRI_ReportConfig_r13_H_
#define	_CRI_ReportConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CRI-ConfigIndex-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CRI_ReportConfig_r13_PR {
	CRI_ReportConfig_r13_PR_NOTHING,	/* No components present */
	CRI_ReportConfig_r13_PR_release,
	CRI_ReportConfig_r13_PR_setup
} CRI_ReportConfig_r13_PR;

/* CRI-ReportConfig-r13 */
typedef struct CRI_ReportConfig_r13 {
	CRI_ReportConfig_r13_PR present;
	union CRI_ReportConfig_r13_u {
		NULL_t	 release;
		struct CRI_ReportConfig_r13__setup {
			CRI_ConfigIndex_r13_t	 cri_ConfigIndex_r13;
			CRI_ConfigIndex_r13_t	*cri_ConfigIndex2_r13	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRI_ReportConfig_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CRI_ReportConfig_r13;
extern asn_CHOICE_specifics_t asn_SPC_CRI_ReportConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CRI_ReportConfig_r13_1[2];
extern asn_per_constraints_t asn_PER_type_CRI_ReportConfig_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CRI_ReportConfig_r13_H_ */
#include <asn_internal.h>
