/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v1550_IEs_H_
#define	_UE_EUTRA_Capability_v1550_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhyLayerParameters-v1550.h"
#include "MAC-Parameters-v1550.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1550.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NeighCellSI_AcquisitionParameters_v1550;
struct UE_EUTRA_Capability_v1560_IEs;

/* UE-EUTRA-Capability-v1550-IEs */
typedef struct UE_EUTRA_Capability_v1550_IEs {
	struct NeighCellSI_AcquisitionParameters_v1550	*neighCellSI_AcquisitionParameters_v1550	/* OPTIONAL */;
	PhyLayerParameters_v1550_t	 phyLayerParameters_v1550;
	MAC_Parameters_v1550_t	 mac_Parameters_v1550;
	UE_EUTRA_CapabilityAddXDD_Mode_v1550_t	 fdd_Add_UE_EUTRA_Capabilities_v1550;
	UE_EUTRA_CapabilityAddXDD_Mode_v1550_t	 tdd_Add_UE_EUTRA_Capabilities_v1550;
	struct UE_EUTRA_Capability_v1560_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1550_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1550_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1550_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1550_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1550_IEs_H_ */
#include <asn_internal.h>
