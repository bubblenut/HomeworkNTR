/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqInfo_v1310_H_
#define	_InterFreqCarrierFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellReselectionSubPriority-r13.h"
#include "T-ReselectionEUTRA-CE-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedistributionInterFreqInfo_r13;
struct CellSelectionInfoCE_r13;

/* InterFreqCarrierFreqInfo-v1310 */
typedef struct InterFreqCarrierFreqInfo_v1310 {
	CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r13	/* OPTIONAL */;
	struct RedistributionInterFreqInfo_r13	*redistributionInterFreqInfo_r13	/* OPTIONAL */;
	struct CellSelectionInfoCE_r13	*cellSelectionInfoCE_r13	/* OPTIONAL */;
	T_ReselectionEUTRA_CE_r13_t	*t_ReselectionEUTRA_CE_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1310_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v1310_H_ */
#include <asn_internal.h>
