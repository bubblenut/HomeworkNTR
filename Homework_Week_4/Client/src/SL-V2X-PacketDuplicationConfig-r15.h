/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_V2X_PacketDuplicationConfig_r15_H_
#define	_SL_V2X_PacketDuplicationConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-Reliability-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_PPPR_Dest_CarrierFreqList_r15;

/* SL-V2X-PacketDuplicationConfig-r15 */
typedef struct SL_V2X_PacketDuplicationConfig_r15 {
	SL_Reliability_r15_t	 threshSL_Reliability_r15;
	struct SL_PPPR_Dest_CarrierFreqList_r15	*allowedCarrierFreqConfig_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_PacketDuplicationConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_PacketDuplicationConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_PacketDuplicationConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_PacketDuplicationConfig_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_PacketDuplicationConfig_r15_H_ */
#include <asn_internal.h>
