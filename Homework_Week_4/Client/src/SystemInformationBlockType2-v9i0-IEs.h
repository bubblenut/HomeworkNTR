/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType2_v9i0_IEs_H_
#define	_SystemInformationBlockType2_v9i0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType2-v9i0-IEs */
typedef struct SystemInformationBlockType2_v9i0_IEs {
	OCTET_STRING_t	*nonCriticalExtension	/* OPTIONAL */;
	struct SystemInformationBlockType2_v9i0_IEs__dummy {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_v9i0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_v9i0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_v9i0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_v9i0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType2_v9i0_IEs_H_ */
#include <asn_internal.h>
