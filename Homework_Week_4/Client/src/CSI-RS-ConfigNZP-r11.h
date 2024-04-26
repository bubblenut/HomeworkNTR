/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigNZP_r11_H_
#define	_CSI_RS_ConfigNZP_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-RS-ConfigNZPId-r11.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "CSI-RS-ConfigNZPId-v1310.h"
#include "NZP-TransmissionComb-r14.h"
#include "NZP-FrequencyDensity-r14.h"
#include <NULL.h>
#include "MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "MBSFN-SubframeConfigList-v1430.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigNZP_r11__antennaPortsCount_r11 {
	CSI_RS_ConfigNZP_r11__antennaPortsCount_r11_an1	= 0,
	CSI_RS_ConfigNZP_r11__antennaPortsCount_r11_an2	= 1,
	CSI_RS_ConfigNZP_r11__antennaPortsCount_r11_an4	= 2,
	CSI_RS_ConfigNZP_r11__antennaPortsCount_r11_an8	= 3
} e_CSI_RS_ConfigNZP_r11__antennaPortsCount_r11;
typedef enum CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11 {
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11_n1	= 0,
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11_n2	= 1,
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11_n4	= 2,
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11_spare1	= 3
} e_CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__crs_PortsCount_r11;
typedef enum CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR {
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR_release,
	CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR_setup
} CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR;
typedef enum CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR {
	CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR_release,
	CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR_setup
} CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR;

/* CSI-RS-ConfigNZP-r11 */
typedef struct CSI_RS_ConfigNZP_r11 {
	CSI_RS_ConfigNZPId_r11_t	 csi_RS_ConfigNZPId_r11;
	long	 antennaPortsCount_r11;
	long	 resourceConfig_r11;
	long	 subframeConfig_r11;
	long	 scramblingIdentity_r11;
	struct CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11 {
		long	 qcl_ScramblingIdentity_r11;
		long	 crs_PortsCount_r11;
		struct CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11 {
			CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_PR present;
			union CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11_u {
				NULL_t	 release;
				struct CSI_RS_ConfigNZP_r11__qcl_CRS_Info_r11__mbsfn_SubframeConfigList_r11__setup {
					MBSFN_SubframeConfigList_t	 subframeConfigList;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mbsfn_SubframeConfigList_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *qcl_CRS_Info_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	CSI_RS_ConfigNZPId_v1310_t	*csi_RS_ConfigNZPId_v1310	/* OPTIONAL */;
	NZP_TransmissionComb_r14_t	*transmissionComb_r14	/* OPTIONAL */;
	NZP_FrequencyDensity_r14_t	*frequencyDensity_r14	/* OPTIONAL */;
	struct CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430 {
		CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_PR present;
		union CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430_u {
			NULL_t	 release;
			struct CSI_RS_ConfigNZP_r11__mbsfn_SubframeConfigList_v1430__setup {
				MBSFN_SubframeConfigList_v1430_t	 subframeConfigList_v1430;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mbsfn_SubframeConfigList_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNZP_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r11_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_PortsCount_r11_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZP_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNZP_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNZP_r11_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigNZP_r11_H_ */
#include <asn_internal.h>
