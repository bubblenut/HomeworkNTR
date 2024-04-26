/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NPRACH_ParametersFmt2_NB_r15_H_
#define	_NPRACH_ParametersFmt2_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms40	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms80	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms160	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms320	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms640	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms1280	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms2560	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms5120	= 7
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms8	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms16	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms32	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms64	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms128	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms256	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms512	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms1024	= 7
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n0	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n36	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n72	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n108	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n6	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n54	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n102	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n42	= 7,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n78	= 8,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n90	= 9,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n12	= 10,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n24	= 11,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n48	= 12,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n84	= 13,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n60	= 14,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n18	= 15
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n36	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n72	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n108	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n144	= 3
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_zero	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_oneThird	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_twoThird	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_one	= 3
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r1	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r2	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r4	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r8	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r16	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r32	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r64	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r128	= 7,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r256	= 8,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r512	= 9,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r1024	= 10,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r2048	= 11,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare4	= 12,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare3	= 13,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare2	= 14,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare1	= 15
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v1dot5	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v2	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v4	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v8	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v16	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v32	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v48	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v64	= 7
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_zero	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_oneEighth	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_oneFourth	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_threeEighth	= 3
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15;
typedef enum NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15 {
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n24	= 0,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n30	= 1,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n33	= 2,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n36	= 3,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n60	= 4,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n66	= 5,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n69	= 6,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n72	= 7,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n96	= 8,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n102	= 9,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n105	= 10,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n108	= 11,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n120	= 12,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n132	= 13,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n138	= 14,
	NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n144	= 15
} e_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15;

/* NPRACH-ParametersFmt2-NB-r15 */
typedef struct NPRACH_ParametersFmt2_NB_r15 {
	struct NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15 {
		long	*nprach_Periodicity_r15	/* OPTIONAL */;
		long	*nprach_StartTime_r15	/* OPTIONAL */;
		long	*nprach_SubcarrierOffset_r15	/* OPTIONAL */;
		long	*nprach_NumSubcarriers_r15	/* OPTIONAL */;
		long	*nprach_SubcarrierMSG3_RangeStart_r15	/* OPTIONAL */;
		long	*npdcch_NumRepetitions_RA_r15	/* OPTIONAL */;
		long	*npdcch_StartSF_CSS_RA_r15	/* OPTIONAL */;
		long	*npdcch_Offset_RA_r15	/* OPTIONAL */;
		long	*nprach_NumCBRA_StartSubcarriers_r15	/* OPTIONAL */;
		long	*npdcch_CarrierIndex_r15	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nprach_Parameters_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersFmt2_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_Periodicity_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_StartTime_r15_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierOffset_r15_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_NumSubcarriers_r15_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_43;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitions_RA_r15_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_CSS_RA_r15_65;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_Offset_RA_r15_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_79;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersFmt2_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ParametersFmt2_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersFmt2_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ParametersFmt2_NB_r15_H_ */
#include <asn_internal.h>
