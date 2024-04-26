/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ROHC_ProfileSupportList_r15_H_
#define	_ROHC_ProfileSupportList_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ROHC-ProfileSupportList-r15 */
typedef struct ROHC_ProfileSupportList_r15 {
	BOOLEAN_t	 profile0x0001_r15;
	BOOLEAN_t	 profile0x0002_r15;
	BOOLEAN_t	 profile0x0003_r15;
	BOOLEAN_t	 profile0x0004_r15;
	BOOLEAN_t	 profile0x0006_r15;
	BOOLEAN_t	 profile0x0101_r15;
	BOOLEAN_t	 profile0x0102_r15;
	BOOLEAN_t	 profile0x0103_r15;
	BOOLEAN_t	 profile0x0104_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ROHC_ProfileSupportList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ROHC_ProfileSupportList_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_ROHC_ProfileSupportList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ROHC_ProfileSupportList_r15_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _ROHC_ProfileSupportList_r15_H_ */
#include <asn_internal.h>