/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType10_H_
#define	_SystemInformationBlockType10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType10 */
typedef struct SystemInformationBlockType10 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	OCTET_STRING_t	 warningType;
	OCTET_STRING_t	*warningSecurityInfo	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType10;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType10_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType10_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType10_H_ */
#include <asn_internal.h>
