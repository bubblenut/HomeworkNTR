/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PUSCH_ConfigDedicated_H_
#define	_PUSCH_ConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PUSCH-ConfigDedicated */
typedef struct PUSCH_ConfigDedicated {
	long	 betaOffset_ACK_Index;
	long	 betaOffset_RI_Index;
	long	 betaOffset_CQI_Index;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_H_ */
#include <asn_internal.h>