/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SPS_ConfigUL_STTI_r15_H_
#define	_SPS_ConfigUL_STTI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "SPS-ConfigIndex-r15.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPS_ConfigUL_STTI_r15_PR {
	SPS_ConfigUL_STTI_r15_PR_NOTHING,	/* No components present */
	SPS_ConfigUL_STTI_r15_PR_release,
	SPS_ConfigUL_STTI_r15_PR_setup
} SPS_ConfigUL_STTI_r15_PR;
typedef enum SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15 {
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI1	= 0,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI2	= 1,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI3	= 2,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI4	= 3,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI6	= 4,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI8	= 5,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI12	= 6,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI16	= 7,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI20	= 8,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI40	= 9,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI60	= 10,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI80	= 11,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI120	= 12,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_sTTI240	= 13,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_spare2	= 14,
	SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15_spare1	= 15
} e_SPS_ConfigUL_STTI_r15__setup__semiPersistSchedIntervalUL_STTI_r15;
typedef enum SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter {
	SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter_e2	= 0,
	SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter_e3	= 1,
	SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter_e4	= 2,
	SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter_e8	= 3
} e_SPS_ConfigUL_STTI_r15__setup__implicitReleaseAfter;
typedef enum SPS_ConfigUL_STTI_r15__setup__twoIntervalsConfig_r15 {
	SPS_ConfigUL_STTI_r15__setup__twoIntervalsConfig_r15_true	= 0
} e_SPS_ConfigUL_STTI_r15__setup__twoIntervalsConfig_r15;
typedef enum SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR {
	SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR_NOTHING,	/* No components present */
	SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR_release,
	SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR_setup
} SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR;
typedef enum SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15 {
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs0	= 0,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs1	= 1,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs2	= 2,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs3	= 3,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs4	= 4,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs5	= 5,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs6	= 6,
	SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15_cs7	= 7
} e_SPS_ConfigUL_STTI_r15__setup__cyclicShiftSPS_sTTI_r15;
typedef enum SPS_ConfigUL_STTI_r15__setup__rv_SPS_STTI_UL_Repetitions_r15 {
	SPS_ConfigUL_STTI_r15__setup__rv_SPS_STTI_UL_Repetitions_r15_ulrvseq1	= 0,
	SPS_ConfigUL_STTI_r15__setup__rv_SPS_STTI_UL_Repetitions_r15_ulrvseq2	= 1,
	SPS_ConfigUL_STTI_r15__setup__rv_SPS_STTI_UL_Repetitions_r15_ulrvseq3	= 2
} e_SPS_ConfigUL_STTI_r15__setup__rv_SPS_STTI_UL_Repetitions_r15;
typedef enum SPS_ConfigUL_STTI_r15__setup__tbs_scalingFactorSubslotSPS_UL_Repetitions_r15 {
	SPS_ConfigUL_STTI_r15__setup__tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_n6	= 0,
	SPS_ConfigUL_STTI_r15__setup__tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_n12	= 1
} e_SPS_ConfigUL_STTI_r15__setup__tbs_scalingFactorSubslotSPS_UL_Repetitions_r15;
typedef enum SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15 {
	SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_n2	= 0,
	SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_n3	= 1,
	SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_n4	= 2,
	SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_n6	= 3
} e_SPS_ConfigUL_STTI_r15__setup__totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15;

/* Forward declarations */
struct TPC_PDCCH_Config;

/* SPS-ConfigUL-STTI-r15 */
typedef struct SPS_ConfigUL_STTI_r15 {
	SPS_ConfigUL_STTI_r15_PR present;
	union SPS_ConfigUL_STTI_r15_u {
		NULL_t	 release;
		struct SPS_ConfigUL_STTI_r15__setup {
			long	 semiPersistSchedIntervalUL_STTI_r15;
			long	 implicitReleaseAfter;
			struct SPS_ConfigUL_STTI_r15__setup__p0_Persistent_r15 {
				long	 p0_NominalSPUSCH_Persistent_r15;
				long	 p0_UE_SPUSCH_Persistent_r15;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *p0_Persistent_r15;
			long	*twoIntervalsConfig_r15	/* OPTIONAL */;
			struct SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15 {
				SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_PR present;
				union SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15_u {
					NULL_t	 release;
					struct SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15__setup {
						long	 p0_NominalSPUSCH_PersistentSubframeSet2_r15;
						long	 p0_UE_SPUSCH_PersistentSubframeSet2_r15;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *p0_PersistentSubframeSet2_r15;
			long	*numberOfConfUL_SPS_Processes_STTI_r15	/* OPTIONAL */;
			long	 sTTI_StartTimeUL_r15;
			struct TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUSCH_SPS_r15	/* OPTIONAL */;
			long	*cyclicShiftSPS_sTTI_r15	/* OPTIONAL */;
			BOOLEAN_t	*ifdma_Config_SPS_r15	/* OPTIONAL */;
			long	*harq_ProcID_offset_r15	/* OPTIONAL */;
			long	*rv_SPS_STTI_UL_Repetitions_r15	/* OPTIONAL */;
			SPS_ConfigIndex_r15_t	*sps_ConfigIndex_r15	/* OPTIONAL */;
			long	*tbs_scalingFactorSubslotSPS_UL_Repetitions_r15	/* OPTIONAL */;
			long	*totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigUL_STTI_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalUL_STTI_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_implicitReleaseAfter_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoIntervalsConfig_r15_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShiftSPS_sTTI_r15_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rv_SPS_STTI_UL_Repetitions_r15_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_58;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigUL_STTI_r15;
extern asn_CHOICE_specifics_t asn_SPC_SPS_ConfigUL_STTI_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigUL_STTI_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SPS_ConfigUL_STTI_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigUL_STTI_r15_H_ */
#include <asn_internal.h>
