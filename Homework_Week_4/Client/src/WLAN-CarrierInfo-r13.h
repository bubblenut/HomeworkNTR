/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_WLAN_CarrierInfo_r13_H_
#define	_WLAN_CarrierInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_CarrierInfo_r13__countryCode_r13 {
	WLAN_CarrierInfo_r13__countryCode_r13_unitedStates	= 0,
	WLAN_CarrierInfo_r13__countryCode_r13_europe	= 1,
	WLAN_CarrierInfo_r13__countryCode_r13_japan	= 2,
	WLAN_CarrierInfo_r13__countryCode_r13_global	= 3
	/*
	 * Enumeration is extensible
	 */
} e_WLAN_CarrierInfo_r13__countryCode_r13;

/* Forward declarations */
struct WLAN_ChannelList_r13;

/* WLAN-CarrierInfo-r13 */
typedef struct WLAN_CarrierInfo_r13 {
	long	*operatingClass_r13	/* OPTIONAL */;
	long	*countryCode_r13	/* OPTIONAL */;
	struct WLAN_ChannelList_r13	*channelNumbers_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_CarrierInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_countryCode_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_CarrierInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_CarrierInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_CarrierInfo_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_CarrierInfo_r13_H_ */
#include <asn_internal.h>
