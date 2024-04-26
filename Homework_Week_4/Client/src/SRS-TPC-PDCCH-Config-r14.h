/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SRS_TPC_PDCCH_Config_r14_H_
#define	_SRS_TPC_PDCCH_Config_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_TPC_PDCCH_Config_r14_PR {
	SRS_TPC_PDCCH_Config_r14_PR_NOTHING,	/* No components present */
	SRS_TPC_PDCCH_Config_r14_PR_release,
	SRS_TPC_PDCCH_Config_r14_PR_setup
} SRS_TPC_PDCCH_Config_r14_PR;

/* Forward declarations */
struct SRS_CC_SetIndex_r14;

/* SRS-TPC-PDCCH-Config-r14 */
typedef struct SRS_TPC_PDCCH_Config_r14 {
	SRS_TPC_PDCCH_Config_r14_PR present;
	union SRS_TPC_PDCCH_Config_r14_u {
		NULL_t	 release;
		struct SRS_TPC_PDCCH_Config_r14__setup {
			BIT_STRING_t	 srs_TPC_RNTI_r14;
			long	 startingBitOfFormat3B_r14;
			long	 fieldTypeFormat3B_r14;
			struct SRS_TPC_PDCCH_Config_r14__setup__srs_CC_SetIndexlist_r14 {
				A_SEQUENCE_OF(struct SRS_CC_SetIndex_r14) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_CC_SetIndexlist_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_TPC_PDCCH_Config_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRS_TPC_PDCCH_Config_r14;
extern asn_CHOICE_specifics_t asn_SPC_SRS_TPC_PDCCH_Config_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_TPC_PDCCH_Config_r14_1[2];
extern asn_per_constraints_t asn_PER_type_SRS_TPC_PDCCH_Config_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_TPC_PDCCH_Config_r14_H_ */
#include <asn_internal.h>