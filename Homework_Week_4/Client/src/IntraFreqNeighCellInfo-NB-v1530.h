/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_IntraFreqNeighCellInfo_NB_v1530_H_
#define	_IntraFreqNeighCellInfo_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NSSS_RRM_Config_NB_r15;

/* IntraFreqNeighCellInfo-NB-v1530 */
typedef struct IntraFreqNeighCellInfo_NB_v1530 {
	struct NSSS_RRM_Config_NB_r15	*nsss_RRM_Config_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqNeighCellInfo_NB_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqNeighCellInfo_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqNeighCellInfo_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqNeighCellInfo_NB_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqNeighCellInfo_NB_v1530_H_ */
#include <asn_internal.h>
