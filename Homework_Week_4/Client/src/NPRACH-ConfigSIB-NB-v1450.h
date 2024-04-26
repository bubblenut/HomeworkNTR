/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NPRACH_ConfigSIB_NB_v1450_H_
#define	_NPRACH_ConfigSIB_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14 {
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n3	= 0,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n4	= 1,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n5	= 2,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n6	= 3,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n7	= 4,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n8	= 5,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n10	= 6,
	NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_spare1	= 7
} e_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14;

/* NPRACH-ConfigSIB-NB-v1450 */
typedef struct NPRACH_ConfigSIB_NB_v1450 {
	long	 maxNumPreambleAttemptCE_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ConfigSIB_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ConfigSIB_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ConfigSIB_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ConfigSIB_NB_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ConfigSIB_NB_v1450_H_ */
#include <asn_internal.h>
