/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MIMO_UE_ParametersPerTM_v1430_H_
#define	_MIMO_UE_ParametersPerTM_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14 {
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14_ffs1	= 0,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14_ffs2	= 1,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14_ffs3	= 2,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14_ffs4	= 3
} e_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14__nMaxResource_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14 {
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14_ffs1	= 0,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14_ffs2	= 1,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14_ffs3	= 2,
	MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14_ffs4	= 3
} e_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14__nMaxResource_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__zp_CSI_RS_AperiodicInfo_r14 {
	MIMO_UE_ParametersPerTM_v1430__zp_CSI_RS_AperiodicInfo_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__zp_CSI_RS_AperiodicInfo_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__ul_dmrs_Enhancements_r14 {
	MIMO_UE_ParametersPerTM_v1430__ul_dmrs_Enhancements_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__ul_dmrs_Enhancements_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__densityReductionNP_r14 {
	MIMO_UE_ParametersPerTM_v1430__densityReductionNP_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__densityReductionNP_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__densityReductionBF_r14 {
	MIMO_UE_ParametersPerTM_v1430__densityReductionBF_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__densityReductionBF_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__hybridCSI_r14 {
	MIMO_UE_ParametersPerTM_v1430__hybridCSI_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__hybridCSI_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__semiOL_r14 {
	MIMO_UE_ParametersPerTM_v1430__semiOL_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__semiOL_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__csi_ReportingNP_r14 {
	MIMO_UE_ParametersPerTM_v1430__csi_ReportingNP_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__csi_ReportingNP_r14;
typedef enum MIMO_UE_ParametersPerTM_v1430__csi_ReportingAdvanced_r14 {
	MIMO_UE_ParametersPerTM_v1430__csi_ReportingAdvanced_r14_supported	= 0
} e_MIMO_UE_ParametersPerTM_v1430__csi_ReportingAdvanced_r14;

/* MIMO-UE-ParametersPerTM-v1430 */
typedef struct MIMO_UE_ParametersPerTM_v1430 {
	struct MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14 {
		long	 nMaxProc_r14;
		long	 nMaxResource_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_AperiodicInfo_r14;
	struct MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14 {
		long	 nMaxResource_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nzp_CSI_RS_PeriodicInfo_r14;
	long	*zp_CSI_RS_AperiodicInfo_r14	/* OPTIONAL */;
	long	*ul_dmrs_Enhancements_r14	/* OPTIONAL */;
	long	*densityReductionNP_r14	/* OPTIONAL */;
	long	*densityReductionBF_r14	/* OPTIONAL */;
	long	*hybridCSI_r14	/* OPTIONAL */;
	long	*semiOL_r14	/* OPTIONAL */;
	long	*csi_ReportingNP_r14	/* OPTIONAL */;
	long	*csi_ReportingAdvanced_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_UE_ParametersPerTM_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nMaxResource_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nMaxResource_r14_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_zp_CSI_RS_AperiodicInfo_r14_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_dmrs_Enhancements_r14_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_densityReductionNP_r14_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_densityReductionBF_r14_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_hybridCSI_r14_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_semiOL_r14_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingNP_r14_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingAdvanced_r14_29;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_UE_ParametersPerTM_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_UE_ParametersPerTM_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_UE_ParametersPerTM_v1430_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_UE_ParametersPerTM_v1430_H_ */
#include <asn_internal.h>
