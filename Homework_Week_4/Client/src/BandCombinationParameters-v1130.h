/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BandCombinationParameters_v1130_H_
#define	_BandCombinationParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_v1130__multipleTimingAdvance_r11 {
	BandCombinationParameters_v1130__multipleTimingAdvance_r11_supported	= 0
} e_BandCombinationParameters_v1130__multipleTimingAdvance_r11;
typedef enum BandCombinationParameters_v1130__simultaneousRx_Tx_r11 {
	BandCombinationParameters_v1130__simultaneousRx_Tx_r11_supported	= 0
} e_BandCombinationParameters_v1130__simultaneousRx_Tx_r11;

/* Forward declarations */
struct BandParameters_v1130;

/* BandCombinationParameters-v1130 */
typedef struct BandCombinationParameters_v1130 {
	long	*multipleTimingAdvance_r11	/* OPTIONAL */;
	long	*simultaneousRx_Tx_r11	/* OPTIONAL */;
	struct BandCombinationParameters_v1130__bandParameterList_r11 {
		A_SEQUENCE_OF(struct BandParameters_v1130) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleTimingAdvance_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRx_Tx_r11_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1130_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1130_H_ */
#include <asn_internal.h>
