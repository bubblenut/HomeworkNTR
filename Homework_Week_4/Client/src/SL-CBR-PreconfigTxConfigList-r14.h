/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_CBR_PreconfigTxConfigList_r14_H_
#define	_SL_CBR_PreconfigTxConfigList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_CBR_Levels_Config_r14;
struct SL_CBR_PSSCH_TxConfig_r14;

/* SL-CBR-PreconfigTxConfigList-r14 */
typedef struct SL_CBR_PreconfigTxConfigList_r14 {
	struct SL_CBR_PreconfigTxConfigList_r14__cbr_RangeCommonConfigList_r14 {
		A_SEQUENCE_OF(struct SL_CBR_Levels_Config_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cbr_RangeCommonConfigList_r14;
	struct SL_CBR_PreconfigTxConfigList_r14__sl_CBR_PSSCH_TxConfigList_r14 {
		A_SEQUENCE_OF(struct SL_CBR_PSSCH_TxConfig_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sl_CBR_PSSCH_TxConfigList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CBR_PreconfigTxConfigList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CBR_PreconfigTxConfigList_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CBR_PreconfigTxConfigList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CBR_PreconfigTxConfigList_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CBR_PreconfigTxConfigList_r14_H_ */
#include <asn_internal.h>
