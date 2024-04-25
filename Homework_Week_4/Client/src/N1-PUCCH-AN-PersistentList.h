/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_N1_PUCCH_AN_PersistentList_H_
#define	_N1_PUCCH_AN_PersistentList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* N1-PUCCH-AN-PersistentList */
typedef struct N1_PUCCH_AN_PersistentList {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} N1_PUCCH_AN_PersistentList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_N1_PUCCH_AN_PersistentList;
extern asn_SET_OF_specifics_t asn_SPC_N1_PUCCH_AN_PersistentList_specs_1;
extern asn_TYPE_member_t asn_MBR_N1_PUCCH_AN_PersistentList_1[1];
extern asn_per_constraints_t asn_PER_type_N1_PUCCH_AN_PersistentList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _N1_PUCCH_AN_PersistentList_H_ */
#include <asn_internal.h>
