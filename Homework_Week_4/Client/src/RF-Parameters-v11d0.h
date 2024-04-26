/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RF_Parameters_v11d0_H_
#define	_RF_Parameters_v11d0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandCombinationAdd_v11d0;

/* RF-Parameters-v11d0 */
typedef struct RF_Parameters_v11d0 {
	struct SupportedBandCombinationAdd_v11d0	*supportedBandCombinationAdd_v11d0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v11d0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v11d0;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v11d0_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v11d0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v11d0_H_ */
#include <asn_internal.h>
