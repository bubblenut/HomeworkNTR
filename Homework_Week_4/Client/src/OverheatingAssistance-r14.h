/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_OverheatingAssistance_r14_H_
#define	_OverheatingAssistance_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OverheatingAssistance-r14 */
typedef struct OverheatingAssistance_r14 {
	struct OverheatingAssistance_r14__reducedUE_Category {
		long	 reducedUE_CategoryDL;
		long	 reducedUE_CategoryUL;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reducedUE_Category;
	struct OverheatingAssistance_r14__reducedMaxCCs {
		long	 reducedCCsDL;
		long	 reducedCCsUL;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reducedMaxCCs;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OverheatingAssistance_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OverheatingAssistance_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_OverheatingAssistance_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_OverheatingAssistance_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OverheatingAssistance_r14_H_ */
#include <asn_internal.h>
