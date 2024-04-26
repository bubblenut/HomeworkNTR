/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v1530_IEs_H_
#define	_UE_EUTRA_Capability_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15 {
	UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15_supported	= 0
} e_UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15;
typedef enum UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15 {
	UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15_supported	= 0
} e_UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15;

/* Forward declarations */
struct MeasParameters_v1530;
struct Other_Parameters_v1530;
struct NeighCellSI_AcquisitionParameters_v1530;
struct MAC_Parameters_v1530;
struct PhyLayerParameters_v1530;
struct RF_Parameters_v1530;
struct PDCP_Parameters_v1530;
struct UE_BasedNetwPerfMeasParameters_v1530;
struct RLC_Parameters_v1530;
struct SL_Parameters_v1530;
struct LAA_Parameters_v1530;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1530;
struct UE_EUTRA_Capability_v1540_IEs;

/* UE-EUTRA-Capability-v1530-IEs */
typedef struct UE_EUTRA_Capability_v1530_IEs {
	struct MeasParameters_v1530	*measParameters_v1530	/* OPTIONAL */;
	struct Other_Parameters_v1530	*otherParameters_v1530	/* OPTIONAL */;
	struct NeighCellSI_AcquisitionParameters_v1530	*neighCellSI_AcquisitionParameters_v1530	/* OPTIONAL */;
	struct MAC_Parameters_v1530	*mac_Parameters_v1530	/* OPTIONAL */;
	struct PhyLayerParameters_v1530	*phyLayerParameters_v1530	/* OPTIONAL */;
	struct RF_Parameters_v1530	*rf_Parameters_v1530	/* OPTIONAL */;
	struct PDCP_Parameters_v1530	*pdcp_Parameters_v1530	/* OPTIONAL */;
	long	*ue_CategoryDL_v1530	/* OPTIONAL */;
	struct UE_BasedNetwPerfMeasParameters_v1530	*ue_BasedNetwPerfMeasParameters_v1530	/* OPTIONAL */;
	struct RLC_Parameters_v1530	*rlc_Parameters_v1530	/* OPTIONAL */;
	struct SL_Parameters_v1530	*sl_Parameters_v1530	/* OPTIONAL */;
	long	*extendedNumberOfDRBs_r15	/* OPTIONAL */;
	long	*reducedCP_Latency_r15	/* OPTIONAL */;
	struct LAA_Parameters_v1530	*laa_Parameters_v1530	/* OPTIONAL */;
	long	*ue_CategoryUL_v1530	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1530	*fdd_Add_UE_EUTRA_Capabilities_v1530	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1530	*tdd_Add_UE_EUTRA_Capabilities_v1530	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1540_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedNumberOfDRBs_r15_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedCP_Latency_r15_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1530_IEs_1[18];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1530_IEs_H_ */
#include <asn_internal.h>
