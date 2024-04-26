/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_STTI_SPT_BandParameters_r15_H_
#define	_STTI_SPT_BandParameters_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "CA-MIMO-ParametersUL-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum STTI_SPT_BandParameters_r15__dl_1024QAM_Slot_r15 {
	STTI_SPT_BandParameters_r15__dl_1024QAM_Slot_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__dl_1024QAM_Slot_r15;
typedef enum STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_1_r15 {
	STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_1_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_1_r15;
typedef enum STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_2_r15 {
	STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_2_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__dl_1024QAM_SubslotTA_2_r15;
typedef enum STTI_SPT_BandParameters_r15__simultaneousTx_differentTx_duration_r15 {
	STTI_SPT_BandParameters_r15__simultaneousTx_differentTx_duration_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__simultaneousTx_differentTx_duration_r15;
typedef enum STTI_SPT_BandParameters_r15__sTTI_FD_MIMO_Coexistence {
	STTI_SPT_BandParameters_r15__sTTI_FD_MIMO_Coexistence_supported	= 0
} e_STTI_SPT_BandParameters_r15__sTTI_FD_MIMO_Coexistence;
typedef enum STTI_SPT_BandParameters_r15__sTTI_SupportedCSI_Proc_r15 {
	STTI_SPT_BandParameters_r15__sTTI_SupportedCSI_Proc_r15_n1	= 0,
	STTI_SPT_BandParameters_r15__sTTI_SupportedCSI_Proc_r15_n3	= 1,
	STTI_SPT_BandParameters_r15__sTTI_SupportedCSI_Proc_r15_n4	= 2
} e_STTI_SPT_BandParameters_r15__sTTI_SupportedCSI_Proc_r15;
typedef enum STTI_SPT_BandParameters_r15__ul_256QAM_Slot_r15 {
	STTI_SPT_BandParameters_r15__ul_256QAM_Slot_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__ul_256QAM_Slot_r15;
typedef enum STTI_SPT_BandParameters_r15__ul_256QAM_Subslot_r15 {
	STTI_SPT_BandParameters_r15__ul_256QAM_Subslot_r15_supported	= 0
} e_STTI_SPT_BandParameters_r15__ul_256QAM_Subslot_r15;

/* Forward declarations */
struct CA_MIMO_ParametersDL_r15;
struct MIMO_CA_ParametersPerBoBC_r13;
struct MIMO_CA_ParametersPerBoBC_v1430;
struct STTI_SupportedCombinations_r15;

/* STTI-SPT-BandParameters-r15 */
typedef struct STTI_SPT_BandParameters_r15 {
	long	*dl_1024QAM_Slot_r15	/* OPTIONAL */;
	long	*dl_1024QAM_SubslotTA_1_r15	/* OPTIONAL */;
	long	*dl_1024QAM_SubslotTA_2_r15	/* OPTIONAL */;
	long	*simultaneousTx_differentTx_duration_r15	/* OPTIONAL */;
	struct CA_MIMO_ParametersDL_r15	*sTTI_CA_MIMO_ParametersDL_r15	/* OPTIONAL */;
	CA_MIMO_ParametersUL_r15_t	 sTTI_CA_MIMO_ParametersUL_r15;
	long	*sTTI_FD_MIMO_Coexistence	/* OPTIONAL */;
	struct MIMO_CA_ParametersPerBoBC_r13	*sTTI_MIMO_CA_ParametersPerBoBCs_r15	/* OPTIONAL */;
	struct MIMO_CA_ParametersPerBoBC_v1430	*sTTI_MIMO_CA_ParametersPerBoBCs_v1530	/* OPTIONAL */;
	struct STTI_SupportedCombinations_r15	*sTTI_SupportedCombinations_r15	/* OPTIONAL */;
	long	*sTTI_SupportedCSI_Proc_r15	/* OPTIONAL */;
	long	*ul_256QAM_Slot_r15	/* OPTIONAL */;
	long	*ul_256QAM_Subslot_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} STTI_SPT_BandParameters_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_Slot_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_SubslotTA_1_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_SubslotTA_2_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousTx_differentTx_duration_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sTTI_FD_MIMO_Coexistence_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sTTI_SupportedCSI_Proc_r15_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_256QAM_Slot_r15_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_256QAM_Subslot_r15_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_STTI_SPT_BandParameters_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_STTI_SPT_BandParameters_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_STTI_SPT_BandParameters_r15_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _STTI_SPT_BandParameters_r15_H_ */
#include <asn_internal.h>
