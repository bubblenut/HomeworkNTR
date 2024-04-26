/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MMTEL_Parameters_r14_H_
#define	_MMTEL_Parameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MMTEL_Parameters_r14__delayBudgetReporting_r14 {
	MMTEL_Parameters_r14__delayBudgetReporting_r14_supported	= 0
} e_MMTEL_Parameters_r14__delayBudgetReporting_r14;
typedef enum MMTEL_Parameters_r14__pusch_Enhancements_r14 {
	MMTEL_Parameters_r14__pusch_Enhancements_r14_supported	= 0
} e_MMTEL_Parameters_r14__pusch_Enhancements_r14;
typedef enum MMTEL_Parameters_r14__recommendedBitRate_r14 {
	MMTEL_Parameters_r14__recommendedBitRate_r14_supported	= 0
} e_MMTEL_Parameters_r14__recommendedBitRate_r14;
typedef enum MMTEL_Parameters_r14__recommendedBitRateQuery_r14 {
	MMTEL_Parameters_r14__recommendedBitRateQuery_r14_supported	= 0
} e_MMTEL_Parameters_r14__recommendedBitRateQuery_r14;

/* MMTEL-Parameters-r14 */
typedef struct MMTEL_Parameters_r14 {
	long	*delayBudgetReporting_r14	/* OPTIONAL */;
	long	*pusch_Enhancements_r14	/* OPTIONAL */;
	long	*recommendedBitRate_r14	/* OPTIONAL */;
	long	*recommendedBitRateQuery_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MMTEL_Parameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_delayBudgetReporting_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_Enhancements_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_recommendedBitRate_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_recommendedBitRateQuery_r14_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MMTEL_Parameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MMTEL_Parameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MMTEL_Parameters_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MMTEL_Parameters_r14_H_ */
#include <asn_internal.h>
