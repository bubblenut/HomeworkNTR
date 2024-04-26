/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NPRACH_ParametersTDD_NB_v1550_H_
#define	_NPRACH_ParametersTDD_NB_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550 {
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n3	= 0,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n4	= 1,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n5	= 2,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n6	= 3,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n7	= 4,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n8	= 5,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_n10	= 6,
	NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550_spare1	= 7
} e_NPRACH_ParametersTDD_NB_v1550__maxNumPreambleAttemptCE_v1550;
typedef enum NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550 {
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n1	= 0,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n2	= 1,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n4	= 2,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n8	= 3,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n16	= 4,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n32	= 5,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n64	= 6,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n128	= 7,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n256	= 8,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n512	= 9,
	NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550_n1024	= 10
} e_NPRACH_ParametersTDD_NB_v1550__numRepetitionsPerPreambleAttempt_v1550;

/* NPRACH-ParametersTDD-NB-v1550 */
typedef struct NPRACH_ParametersTDD_NB_v1550 {
	long	 maxNumPreambleAttemptCE_v1550;
	long	 numRepetitionsPerPreambleAttempt_v1550;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersTDD_NB_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_v1550_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_numRepetitionsPerPreambleAttempt_v1550_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersTDD_NB_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ParametersTDD_NB_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersTDD_NB_v1550_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ParametersTDD_NB_v1550_H_ */
#include <asn_internal.h>
