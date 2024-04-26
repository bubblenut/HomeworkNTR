/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_CP_Len_r12_H_
#define	_SL_CP_Len_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_CP_Len_r12 {
	SL_CP_Len_r12_normal	= 0,
	SL_CP_Len_r12_extended	= 1
} e_SL_CP_Len_r12;

/* SL-CP-Len-r12 */
typedef long	 SL_CP_Len_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SL_CP_Len_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SL_CP_Len_r12;
extern const asn_INTEGER_specifics_t asn_SPC_SL_CP_Len_r12_specs_1;
asn_struct_free_f SL_CP_Len_r12_free;
asn_struct_print_f SL_CP_Len_r12_print;
asn_constr_check_f SL_CP_Len_r12_constraint;
ber_type_decoder_f SL_CP_Len_r12_decode_ber;
der_type_encoder_f SL_CP_Len_r12_encode_der;
xer_type_decoder_f SL_CP_Len_r12_decode_xer;
xer_type_encoder_f SL_CP_Len_r12_encode_xer;
per_type_decoder_f SL_CP_Len_r12_decode_uper;
per_type_encoder_f SL_CP_Len_r12_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CP_Len_r12_H_ */
#include <asn_internal.h>
