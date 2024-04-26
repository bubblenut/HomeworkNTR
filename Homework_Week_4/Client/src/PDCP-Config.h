/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PDCP_Config_H_
#define	_PDCP_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Config__discardTimer {
	PDCP_Config__discardTimer_ms50	= 0,
	PDCP_Config__discardTimer_ms100	= 1,
	PDCP_Config__discardTimer_ms150	= 2,
	PDCP_Config__discardTimer_ms300	= 3,
	PDCP_Config__discardTimer_ms500	= 4,
	PDCP_Config__discardTimer_ms750	= 5,
	PDCP_Config__discardTimer_ms1500	= 6,
	PDCP_Config__discardTimer_infinity	= 7
} e_PDCP_Config__discardTimer;
typedef enum PDCP_Config__rlc_UM__pdcp_SN_Size {
	PDCP_Config__rlc_UM__pdcp_SN_Size_len7bits	= 0,
	PDCP_Config__rlc_UM__pdcp_SN_Size_len12bits	= 1
} e_PDCP_Config__rlc_UM__pdcp_SN_Size;
typedef enum PDCP_Config__headerCompression_PR {
	PDCP_Config__headerCompression_PR_NOTHING,	/* No components present */
	PDCP_Config__headerCompression_PR_notUsed,
	PDCP_Config__headerCompression_PR_rohc
} PDCP_Config__headerCompression_PR;
typedef enum PDCP_Config__rn_IntegrityProtection_r10 {
	PDCP_Config__rn_IntegrityProtection_r10_enabled	= 0
} e_PDCP_Config__rn_IntegrityProtection_r10;
typedef enum PDCP_Config__pdcp_SN_Size_v1130 {
	PDCP_Config__pdcp_SN_Size_v1130_len15bits	= 0
} e_PDCP_Config__pdcp_SN_Size_v1130;
typedef enum PDCP_Config__t_Reordering_r12 {
	PDCP_Config__t_Reordering_r12_ms0	= 0,
	PDCP_Config__t_Reordering_r12_ms20	= 1,
	PDCP_Config__t_Reordering_r12_ms40	= 2,
	PDCP_Config__t_Reordering_r12_ms60	= 3,
	PDCP_Config__t_Reordering_r12_ms80	= 4,
	PDCP_Config__t_Reordering_r12_ms100	= 5,
	PDCP_Config__t_Reordering_r12_ms120	= 6,
	PDCP_Config__t_Reordering_r12_ms140	= 7,
	PDCP_Config__t_Reordering_r12_ms160	= 8,
	PDCP_Config__t_Reordering_r12_ms180	= 9,
	PDCP_Config__t_Reordering_r12_ms200	= 10,
	PDCP_Config__t_Reordering_r12_ms220	= 11,
	PDCP_Config__t_Reordering_r12_ms240	= 12,
	PDCP_Config__t_Reordering_r12_ms260	= 13,
	PDCP_Config__t_Reordering_r12_ms280	= 14,
	PDCP_Config__t_Reordering_r12_ms300	= 15,
	PDCP_Config__t_Reordering_r12_ms500	= 16,
	PDCP_Config__t_Reordering_r12_ms750	= 17,
	PDCP_Config__t_Reordering_r12_spare14	= 18,
	PDCP_Config__t_Reordering_r12_spare13	= 19,
	PDCP_Config__t_Reordering_r12_spare12	= 20,
	PDCP_Config__t_Reordering_r12_spare11	= 21,
	PDCP_Config__t_Reordering_r12_spare10	= 22,
	PDCP_Config__t_Reordering_r12_spare9	= 23,
	PDCP_Config__t_Reordering_r12_spare8	= 24,
	PDCP_Config__t_Reordering_r12_spare7	= 25,
	PDCP_Config__t_Reordering_r12_spare6	= 26,
	PDCP_Config__t_Reordering_r12_spare5	= 27,
	PDCP_Config__t_Reordering_r12_spare4	= 28,
	PDCP_Config__t_Reordering_r12_spare3	= 29,
	PDCP_Config__t_Reordering_r12_spare2	= 30,
	PDCP_Config__t_Reordering_r12_spare1	= 31
} e_PDCP_Config__t_Reordering_r12;
typedef enum PDCP_Config__ul_DataSplitThreshold_r13_PR {
	PDCP_Config__ul_DataSplitThreshold_r13_PR_NOTHING,	/* No components present */
	PDCP_Config__ul_DataSplitThreshold_r13_PR_release,
	PDCP_Config__ul_DataSplitThreshold_r13_PR_setup
} PDCP_Config__ul_DataSplitThreshold_r13_PR;
typedef enum PDCP_Config__ul_DataSplitThreshold_r13__setup {
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b0	= 0,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b100	= 1,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b200	= 2,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b400	= 3,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b800	= 4,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b1600	= 5,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b3200	= 6,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b6400	= 7,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b12800	= 8,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b25600	= 9,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b51200	= 10,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b102400	= 11,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b204800	= 12,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b409600	= 13,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_b819200	= 14,
	PDCP_Config__ul_DataSplitThreshold_r13__setup_spare1	= 15
} e_PDCP_Config__ul_DataSplitThreshold_r13__setup;
typedef enum PDCP_Config__pdcp_SN_Size_v1310 {
	PDCP_Config__pdcp_SN_Size_v1310_len18bits	= 0
} e_PDCP_Config__pdcp_SN_Size_v1310;
typedef enum PDCP_Config__statusFeedback_r13_PR {
	PDCP_Config__statusFeedback_r13_PR_NOTHING,	/* No components present */
	PDCP_Config__statusFeedback_r13_PR_release,
	PDCP_Config__statusFeedback_r13_PR_setup
} PDCP_Config__statusFeedback_r13_PR;
typedef enum PDCP_Config__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13 {
	PDCP_Config__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13_type1	= 0,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13_type2	= 1
} e_PDCP_Config__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13;
typedef enum PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13 {
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms5	= 0,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms10	= 1,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms20	= 2,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms30	= 3,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms40	= 4,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms50	= 5,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms60	= 6,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms70	= 7,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms80	= 8,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms90	= 9,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms100	= 10,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms150	= 11,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms200	= 12,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms300	= 13,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms500	= 14,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms1000	= 15,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms2000	= 16,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms5000	= 17,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms10000	= 18,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms20000	= 19,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms50000	= 20
} e_PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13;
typedef enum PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13 {
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms5	= 0,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms10	= 1,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms20	= 2,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms30	= 3,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms40	= 4,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms50	= 5,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms60	= 6,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms70	= 7,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms80	= 8,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms90	= 9,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms100	= 10,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms150	= 11,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms200	= 12,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms300	= 13,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms500	= 14,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms1000	= 15,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms2000	= 16,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms5000	= 17,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms10000	= 18,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms20000	= 19,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms50000	= 20
} e_PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13;
typedef enum PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13 {
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms1	= 0,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms2	= 1,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms5	= 2,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms10	= 3,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms25	= 4,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms50	= 5,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms100	= 6,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms250	= 7,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms500	= 8,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms2500	= 9,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms5000	= 10,
	PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms25000	= 11
} e_PDCP_Config__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13;
typedef enum PDCP_Config__ul_LWA_Config_r14_PR {
	PDCP_Config__ul_LWA_Config_r14_PR_NOTHING,	/* No components present */
	PDCP_Config__ul_LWA_Config_r14_PR_release,
	PDCP_Config__ul_LWA_Config_r14_PR_setup
} PDCP_Config__ul_LWA_Config_r14_PR;
typedef enum PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14 {
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b0	= 0,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b100	= 1,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b200	= 2,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b400	= 3,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b800	= 4,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b1600	= 5,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b3200	= 6,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b6400	= 7,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b12800	= 8,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b25600	= 9,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b51200	= 10,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b102400	= 11,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b204800	= 12,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b409600	= 13,
	PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b819200	= 14
} e_PDCP_Config__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14;
typedef enum PDCP_Config__uplinkOnlyHeaderCompression_r14_PR {
	PDCP_Config__uplinkOnlyHeaderCompression_r14_PR_NOTHING,	/* No components present */
	PDCP_Config__uplinkOnlyHeaderCompression_r14_PR_notUsed_r14,
	PDCP_Config__uplinkOnlyHeaderCompression_r14_PR_rohc_r14
} PDCP_Config__uplinkOnlyHeaderCompression_r14_PR;
typedef enum PDCP_Config__uplinkDataCompression_r15__bufferSize_r15 {
	PDCP_Config__uplinkDataCompression_r15__bufferSize_r15_kbyte2	= 0,
	PDCP_Config__uplinkDataCompression_r15__bufferSize_r15_kbyte4	= 1,
	PDCP_Config__uplinkDataCompression_r15__bufferSize_r15_kbyte8	= 2,
	PDCP_Config__uplinkDataCompression_r15__bufferSize_r15_spare1	= 3
} e_PDCP_Config__uplinkDataCompression_r15__bufferSize_r15;
typedef enum PDCP_Config__uplinkDataCompression_r15__dictionary_r15 {
	PDCP_Config__uplinkDataCompression_r15__dictionary_r15_sip_SDP	= 0,
	PDCP_Config__uplinkDataCompression_r15__dictionary_r15_operator	= 1
} e_PDCP_Config__uplinkDataCompression_r15__dictionary_r15;
typedef enum PDCP_Config__pdcp_DuplicationConfig_r15_PR {
	PDCP_Config__pdcp_DuplicationConfig_r15_PR_NOTHING,	/* No components present */
	PDCP_Config__pdcp_DuplicationConfig_r15_PR_release,
	PDCP_Config__pdcp_DuplicationConfig_r15_PR_setup
} PDCP_Config__pdcp_DuplicationConfig_r15_PR;
typedef enum PDCP_Config__pdcp_DuplicationConfig_r15__setup__pdcp_Duplication_r15 {
	PDCP_Config__pdcp_DuplicationConfig_r15__setup__pdcp_Duplication_r15_configured	= 0,
	PDCP_Config__pdcp_DuplicationConfig_r15__setup__pdcp_Duplication_r15_activated	= 1
} e_PDCP_Config__pdcp_DuplicationConfig_r15__setup__pdcp_Duplication_r15;

/* PDCP-Config */
typedef struct PDCP_Config {
	long	*discardTimer	/* OPTIONAL */;
	struct PDCP_Config__rlc_AM {
		BOOLEAN_t	 statusReportRequired;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_AM;
	struct PDCP_Config__rlc_UM {
		long	 pdcp_SN_Size;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_UM;
	struct PDCP_Config__headerCompression {
		PDCP_Config__headerCompression_PR present;
		union PDCP_Config__headerCompression_u {
			NULL_t	 notUsed;
			struct PDCP_Config__headerCompression__rohc {
				long	*maxCID	/* DEFAULT 15 */;
				struct PDCP_Config__headerCompression__rohc__profiles {
					BOOLEAN_t	 profile0x0001;
					BOOLEAN_t	 profile0x0002;
					BOOLEAN_t	 profile0x0003;
					BOOLEAN_t	 profile0x0004;
					BOOLEAN_t	 profile0x0006;
					BOOLEAN_t	 profile0x0101;
					BOOLEAN_t	 profile0x0102;
					BOOLEAN_t	 profile0x0103;
					BOOLEAN_t	 profile0x0104;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} rohc;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} headerCompression;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*rn_IntegrityProtection_r10	/* OPTIONAL */;
	long	*pdcp_SN_Size_v1130	/* OPTIONAL */;
	BOOLEAN_t	*ul_DataSplitDRB_ViaSCG_r12	/* OPTIONAL */;
	long	*t_Reordering_r12	/* OPTIONAL */;
	struct PDCP_Config__ul_DataSplitThreshold_r13 {
		PDCP_Config__ul_DataSplitThreshold_r13_PR present;
		union PDCP_Config__ul_DataSplitThreshold_r13_u {
			NULL_t	 release;
			long	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_DataSplitThreshold_r13;
	long	*pdcp_SN_Size_v1310	/* OPTIONAL */;
	struct PDCP_Config__statusFeedback_r13 {
		PDCP_Config__statusFeedback_r13_PR present;
		union PDCP_Config__statusFeedback_r13_u {
			NULL_t	 release;
			struct PDCP_Config__statusFeedback_r13__setup {
				long	*statusPDU_TypeForPolling_r13	/* OPTIONAL */;
				long	*statusPDU_Periodicity_Type1_r13	/* OPTIONAL */;
				long	*statusPDU_Periodicity_Type2_r13	/* OPTIONAL */;
				long	*statusPDU_Periodicity_Offset_r13	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *statusFeedback_r13;
	struct PDCP_Config__ul_LWA_Config_r14 {
		PDCP_Config__ul_LWA_Config_r14_PR present;
		union PDCP_Config__ul_LWA_Config_r14_u {
			NULL_t	 release;
			struct PDCP_Config__ul_LWA_Config_r14__setup {
				BOOLEAN_t	 ul_LWA_DRB_ViaWLAN_r14;
				long	*ul_LWA_DataSplitThreshold_r14	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_LWA_Config_r14;
	struct PDCP_Config__uplinkOnlyHeaderCompression_r14 {
		PDCP_Config__uplinkOnlyHeaderCompression_r14_PR present;
		union PDCP_Config__uplinkOnlyHeaderCompression_r14_u {
			NULL_t	 notUsed_r14;
			struct PDCP_Config__uplinkOnlyHeaderCompression_r14__rohc_r14 {
				long	*maxCID_r14	/* DEFAULT 15 */;
				struct PDCP_Config__uplinkOnlyHeaderCompression_r14__rohc_r14__profiles_r14 {
					BOOLEAN_t	 profile0x0006_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles_r14;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} rohc_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkOnlyHeaderCompression_r14;
	struct PDCP_Config__uplinkDataCompression_r15 {
		long	 bufferSize_r15;
		long	*dictionary_r15	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkDataCompression_r15;
	struct PDCP_Config__pdcp_DuplicationConfig_r15 {
		PDCP_Config__pdcp_DuplicationConfig_r15_PR present;
		union PDCP_Config__pdcp_DuplicationConfig_r15_u {
			NULL_t	 release;
			struct PDCP_Config__pdcp_DuplicationConfig_r15__setup {
				long	 pdcp_Duplication_r15;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdcp_DuplicationConfig_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discardTimer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rn_IntegrityProtection_r10_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_v1130_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t_Reordering_r12_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_setup_73;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_v1310_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_statusPDU_TypeForPolling_r13_95;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_statusPDU_Periodicity_Type1_r13_98;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_statusPDU_Periodicity_Type2_r13_120;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_statusPDU_Periodicity_Offset_r13_142;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_LWA_DataSplitThreshold_r14_159;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bufferSize_r15_183;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dictionary_r15_188;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_Duplication_r15_195;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_Config_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Config_H_ */
#include <asn_internal.h>
