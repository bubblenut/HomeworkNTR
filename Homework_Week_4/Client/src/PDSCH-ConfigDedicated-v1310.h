/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PDSCH_ConfigDedicated_v1310_H_
#define	_PDSCH_ConfigDedicated_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DMRS_Config_v1310;

/* PDSCH-ConfigDedicated-v1310 */
typedef struct PDSCH_ConfigDedicated_v1310 {
	struct DMRS_Config_v1310	*dmrs_ConfigPDSCH_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1310_H_ */
#include <asn_internal.h>
