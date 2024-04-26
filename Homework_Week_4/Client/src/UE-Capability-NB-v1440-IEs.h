/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_Capability_NB_v1440_IEs_H_
#define	_UE_Capability_NB_v1440_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_NB_v1440;
struct UE_Capability_NB_v14x0_IEs;

/* UE-Capability-NB-v1440-IEs */
typedef struct UE_Capability_NB_v1440_IEs {
	struct PhyLayerParameters_NB_v1440	*phyLayerParameters_v1440	/* OPTIONAL */;
	struct UE_Capability_NB_v14x0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Capability_NB_v1440_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Capability_NB_v1440_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Capability_NB_v1440_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Capability_NB_v1440_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Capability_NB_v1440_IEs_H_ */
#include <asn_internal.h>
