/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_IntraFreqCellReselectionInfo_NB_v1350_H_
#define	_IntraFreqCellReselectionInfo_NB_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqCellReselectionInfo-NB-v1350 */
typedef struct IntraFreqCellReselectionInfo_NB_v1350 {
	long	 delta_RxLevMin_v1350;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqCellReselectionInfo_NB_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqCellReselectionInfo_NB_v1350;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqCellReselectionInfo_NB_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqCellReselectionInfo_NB_v1350_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqCellReselectionInfo_NB_v1350_H_ */
#include <asn_internal.h>
