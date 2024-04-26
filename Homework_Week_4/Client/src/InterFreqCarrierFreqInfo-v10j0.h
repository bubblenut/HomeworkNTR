/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqInfo_v10j0_H_
#define	_InterFreqCarrierFreqInfo_v10j0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_r10;
struct MultiBandInfoList_v10j0;

/* InterFreqCarrierFreqInfo-v10j0 */
typedef struct InterFreqCarrierFreqInfo_v10j0 {
	struct NS_PmaxList_r10	*freqBandInfo_r10	/* OPTIONAL */;
	struct MultiBandInfoList_v10j0	*multiBandInfoList_v10j0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v10j0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v10j0;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v10j0_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v10j0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v10j0_H_ */
#include <asn_internal.h>
