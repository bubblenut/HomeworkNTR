/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_CarrierFreqInfo_r12_H_
#define	_SL_CarrierFreqInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityList4_r12;

/* SL-CarrierFreqInfo-r12 */
typedef struct SL_CarrierFreqInfo_r12 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	struct PLMN_IdentityList4_r12	*plmn_IdentityList_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CarrierFreqInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CarrierFreqInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CarrierFreqInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CarrierFreqInfo_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CarrierFreqInfo_r12_H_ */
#include <asn_internal.h>
