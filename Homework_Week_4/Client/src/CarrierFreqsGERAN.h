/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CarrierFreqsGERAN_H_
#define	_CarrierFreqsGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueGERAN.h"
#include "BandIndicatorGERAN.h"
#include "ExplicitListOfARFCNs.h"
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreqsGERAN__followingARFCNs_PR {
	CarrierFreqsGERAN__followingARFCNs_PR_NOTHING,	/* No components present */
	CarrierFreqsGERAN__followingARFCNs_PR_explicitListOfARFCNs,
	CarrierFreqsGERAN__followingARFCNs_PR_equallySpacedARFCNs,
	CarrierFreqsGERAN__followingARFCNs_PR_variableBitMapOfARFCNs
} CarrierFreqsGERAN__followingARFCNs_PR;

/* CarrierFreqsGERAN */
typedef struct CarrierFreqsGERAN {
	ARFCN_ValueGERAN_t	 startingARFCN;
	BandIndicatorGERAN_t	 bandIndicator;
	struct CarrierFreqsGERAN__followingARFCNs {
		CarrierFreqsGERAN__followingARFCNs_PR present;
		union CarrierFreqsGERAN__followingARFCNs_u {
			ExplicitListOfARFCNs_t	 explicitListOfARFCNs;
			struct CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs {
				long	 arfcn_Spacing;
				long	 numberOfFollowingARFCNs;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} equallySpacedARFCNs;
			OCTET_STRING_t	 variableBitMapOfARFCNs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} followingARFCNs;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqsGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqsGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqsGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqsGERAN_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqsGERAN_H_ */
#include <asn_internal.h>