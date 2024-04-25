/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NeighCellsPerBandclassCDMA2000_H_
#define	_NeighCellsPerBandclassCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueCDMA2000.h"
#include "PhysCellIdListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellsPerBandclassCDMA2000 */
typedef struct NeighCellsPerBandclassCDMA2000 {
	ARFCN_ValueCDMA2000_t	 arfcn;
	PhysCellIdListCDMA2000_t	 physCellIdList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsPerBandclassCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellsPerBandclassCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellsPerBandclassCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsPerBandclassCDMA2000_H_ */
#include <asn_internal.h>
