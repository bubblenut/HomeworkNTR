/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CellAccessRelatedInfo_r14_H_
#define	_CellAccessRelatedInfo_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-IdentityList.h"
#include "TrackingAreaCode.h"
#include "CellIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellAccessRelatedInfo-r14 */
typedef struct CellAccessRelatedInfo_r14 {
	PLMN_IdentityList_t	 plmn_IdentityList_r14;
	TrackingAreaCode_t	 trackingAreaCode_r14;
	CellIdentity_t	 cellIdentity_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAccessRelatedInfo_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CellAccessRelatedInfo_r14_H_ */
#include <asn_internal.h>
