/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MUST_Parameters_r14_H_
#define	_MUST_Parameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUST_Parameters_r14__must_TM234_UpTo2Tx_r14 {
	MUST_Parameters_r14__must_TM234_UpTo2Tx_r14_supported	= 0
} e_MUST_Parameters_r14__must_TM234_UpTo2Tx_r14;
typedef enum MUST_Parameters_r14__must_TM89_UpToOneInterferingLayer_r14 {
	MUST_Parameters_r14__must_TM89_UpToOneInterferingLayer_r14_supported	= 0
} e_MUST_Parameters_r14__must_TM89_UpToOneInterferingLayer_r14;
typedef enum MUST_Parameters_r14__must_TM10_UpToOneInterferingLayer_r14 {
	MUST_Parameters_r14__must_TM10_UpToOneInterferingLayer_r14_supported	= 0
} e_MUST_Parameters_r14__must_TM10_UpToOneInterferingLayer_r14;
typedef enum MUST_Parameters_r14__must_TM89_UpToThreeInterferingLayers_r14 {
	MUST_Parameters_r14__must_TM89_UpToThreeInterferingLayers_r14_supported	= 0
} e_MUST_Parameters_r14__must_TM89_UpToThreeInterferingLayers_r14;
typedef enum MUST_Parameters_r14__must_TM10_UpToThreeInterferingLayers_r14 {
	MUST_Parameters_r14__must_TM10_UpToThreeInterferingLayers_r14_supported	= 0
} e_MUST_Parameters_r14__must_TM10_UpToThreeInterferingLayers_r14;

/* MUST-Parameters-r14 */
typedef struct MUST_Parameters_r14 {
	long	*must_TM234_UpTo2Tx_r14	/* OPTIONAL */;
	long	*must_TM89_UpToOneInterferingLayer_r14	/* OPTIONAL */;
	long	*must_TM10_UpToOneInterferingLayer_r14	/* OPTIONAL */;
	long	*must_TM89_UpToThreeInterferingLayers_r14	/* OPTIONAL */;
	long	*must_TM10_UpToThreeInterferingLayers_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MUST_Parameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_must_TM234_UpTo2Tx_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_must_TM89_UpToOneInterferingLayer_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_must_TM10_UpToOneInterferingLayer_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MUST_Parameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MUST_Parameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MUST_Parameters_r14_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _MUST_Parameters_r14_H_ */
#include <asn_internal.h>
