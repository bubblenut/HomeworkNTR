/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_v10j0_IEs_H_
#define	_SystemInformationBlockType1_v10j0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_r10;
struct MultiBandInfoList_v10j0;
struct SystemInformationBlockType1_v10l0_IEs;

/* SystemInformationBlockType1-v10j0-IEs */
typedef struct SystemInformationBlockType1_v10j0_IEs {
	struct NS_PmaxList_r10	*freqBandInfo_r10	/* OPTIONAL */;
	struct MultiBandInfoList_v10j0	*multiBandInfoList_v10j0	/* OPTIONAL */;
	struct SystemInformationBlockType1_v10l0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v10j0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v10j0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v10j0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v10j0_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_v10j0_IEs_H_ */
#include <asn_internal.h>
