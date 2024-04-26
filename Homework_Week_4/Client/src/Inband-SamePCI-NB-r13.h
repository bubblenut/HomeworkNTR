/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_Inband_SamePCI_NB_r13_H_
#define	_Inband_SamePCI_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Inband-SamePCI-NB-r13 */
typedef struct Inband_SamePCI_NB_r13 {
	long	 eutra_CRS_SequenceInfo_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Inband_SamePCI_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Inband_SamePCI_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_Inband_SamePCI_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_Inband_SamePCI_NB_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Inband_SamePCI_NB_r13_H_ */
#include <asn_internal.h>
