/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_DL_ConfigCommon_NB_r14_H_
#define	_DL_ConfigCommon_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-CarrierConfigCommon-NB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PCCH_Config_NB_r14;
struct WUS_ConfigPerCarrier_NB_r15;

/* DL-ConfigCommon-NB-r14 */
typedef struct DL_ConfigCommon_NB_r14 {
	DL_CarrierConfigCommon_NB_r14_t	 dl_CarrierConfig_r14;
	struct PCCH_Config_NB_r14	*pcch_Config_r14	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct WUS_ConfigPerCarrier_NB_r15	*wus_Config_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_ConfigCommon_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_ConfigCommon_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_ConfigCommon_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_ConfigCommon_NB_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_ConfigCommon_NB_r14_H_ */
#include <asn_internal.h>
