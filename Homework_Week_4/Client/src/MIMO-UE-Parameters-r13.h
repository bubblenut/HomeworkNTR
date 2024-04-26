/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MIMO_UE_Parameters_r13_H_
#define	_MIMO_UE_Parameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_UE_Parameters_r13__srs_EnhancementsTDD_r13 {
	MIMO_UE_Parameters_r13__srs_EnhancementsTDD_r13_supported	= 0
} e_MIMO_UE_Parameters_r13__srs_EnhancementsTDD_r13;
typedef enum MIMO_UE_Parameters_r13__srs_Enhancements_r13 {
	MIMO_UE_Parameters_r13__srs_Enhancements_r13_supported	= 0
} e_MIMO_UE_Parameters_r13__srs_Enhancements_r13;
typedef enum MIMO_UE_Parameters_r13__interferenceMeasRestriction_r13 {
	MIMO_UE_Parameters_r13__interferenceMeasRestriction_r13_supported	= 0
} e_MIMO_UE_Parameters_r13__interferenceMeasRestriction_r13;

/* Forward declarations */
struct MIMO_UE_ParametersPerTM_r13;

/* MIMO-UE-Parameters-r13 */
typedef struct MIMO_UE_Parameters_r13 {
	struct MIMO_UE_ParametersPerTM_r13	*parametersTM9_r13	/* OPTIONAL */;
	struct MIMO_UE_ParametersPerTM_r13	*parametersTM10_r13	/* OPTIONAL */;
	long	*srs_EnhancementsTDD_r13	/* OPTIONAL */;
	long	*srs_Enhancements_r13	/* OPTIONAL */;
	long	*interferenceMeasRestriction_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_UE_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_EnhancementsTDD_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_Enhancements_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interferenceMeasRestriction_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_UE_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_UE_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_UE_Parameters_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_UE_Parameters_r13_H_ */
#include <asn_internal.h>
