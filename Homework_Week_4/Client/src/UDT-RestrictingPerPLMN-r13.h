/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UDT_RestrictingPerPLMN_r13_H_
#define	_UDT_RestrictingPerPLMN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UDT_Restricting_r13;

/* UDT-RestrictingPerPLMN-r13 */
typedef struct UDT_RestrictingPerPLMN_r13 {
	long	 plmn_IdentityIndex_r13;
	struct UDT_Restricting_r13	*udt_Restricting_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UDT_RestrictingPerPLMN_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UDT_RestrictingPerPLMN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_UDT_RestrictingPerPLMN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_UDT_RestrictingPerPLMN_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UDT_RestrictingPerPLMN_r13_H_ */
#include <asn_internal.h>
