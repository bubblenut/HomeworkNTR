/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_FeatureSetUL_r15_H_
#define	_FeatureSetUL_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FeatureSetUL-PerCC-Id-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FeatureSetUL-r15 */
typedef struct FeatureSetUL_r15 {
	struct FeatureSetUL_r15__featureSetPerCC_ListUL_r15 {
		A_SEQUENCE_OF(FeatureSetUL_PerCC_Id_r15_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} featureSetPerCC_ListUL_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetUL_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetUL_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUL_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetUL_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetUL_r15_H_ */
#include <asn_internal.h>
