/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ThresholdListNR_r15_H_
#define	_ThresholdListNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-RangeNR-r15.h"
#include "RSRQ-RangeNR-r15.h"
#include "RS-SINR-RangeNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ThresholdListNR-r15 */
typedef struct ThresholdListNR_r15 {
	RSRP_RangeNR_r15_t	*nr_RSRP_r15	/* OPTIONAL */;
	RSRQ_RangeNR_r15_t	*nr_RSRQ_r15	/* OPTIONAL */;
	RS_SINR_RangeNR_r15_t	*nr_SINR_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdListNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdListNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_ThresholdListNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ThresholdListNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdListNR_r15_H_ */
#include <asn_internal.h>