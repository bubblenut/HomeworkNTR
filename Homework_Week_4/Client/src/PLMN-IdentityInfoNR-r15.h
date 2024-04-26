/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PLMN_IdentityInfoNR_r15_H_
#define	_PLMN_IdentityInfoNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-IdentityListNR-r15.h"
#include "TrackingAreaCodeNR-r15.h"
#include "RAN-AreaCode-r15.h"
#include "CellIdentityNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PLMN-IdentityInfoNR-r15 */
typedef struct PLMN_IdentityInfoNR_r15 {
	PLMN_IdentityListNR_r15_t	 plmn_IdentityList_r15;
	TrackingAreaCodeNR_r15_t	*trackingAreaCode_r15	/* OPTIONAL */;
	RAN_AreaCode_r15_t	*ran_AreaCode_r15	/* OPTIONAL */;
	CellIdentityNR_r15_t	 cellIdentity_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfoNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfoNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfoNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfoNR_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfoNR_r15_H_ */
#include <asn_internal.h>
