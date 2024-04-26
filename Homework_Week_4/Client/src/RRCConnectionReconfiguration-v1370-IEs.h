/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfiguration_v1370_IEs_H_
#define	_RRCConnectionReconfiguration_v1370_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigDedicated_v1370;
struct SCellToAddModListExt_v1370;
struct RRCConnectionReconfiguration_v13c0_IEs;

/* RRCConnectionReconfiguration-v1370-IEs */
typedef struct RRCConnectionReconfiguration_v1370_IEs {
	struct RadioResourceConfigDedicated_v1370	*radioResourceConfigDedicated_v1370	/* OPTIONAL */;
	struct SCellToAddModListExt_v1370	*sCellToAddModListExt_v1370	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v13c0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1370_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1370_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1370_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1370_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v1370_IEs_H_ */
#include <asn_internal.h>
