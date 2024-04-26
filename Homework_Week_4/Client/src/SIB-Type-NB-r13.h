/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SIB_Type_NB_r13_H_
#define	_SIB_Type_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_Type_NB_r13 {
	SIB_Type_NB_r13_sibType3_NB_r13	= 0,
	SIB_Type_NB_r13_sibType4_NB_r13	= 1,
	SIB_Type_NB_r13_sibType5_NB_r13	= 2,
	SIB_Type_NB_r13_sibType14_NB_r13	= 3,
	SIB_Type_NB_r13_sibType16_NB_r13	= 4,
	SIB_Type_NB_r13_sibType15_NB_r14	= 5,
	SIB_Type_NB_r13_sibType20_NB_r14	= 6,
	SIB_Type_NB_r13_sibType22_NB_r14	= 7
} e_SIB_Type_NB_r13;

/* SIB-Type-NB-r13 */
typedef long	 SIB_Type_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SIB_Type_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SIB_Type_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_SIB_Type_NB_r13_specs_1;
asn_struct_free_f SIB_Type_NB_r13_free;
asn_struct_print_f SIB_Type_NB_r13_print;
asn_constr_check_f SIB_Type_NB_r13_constraint;
ber_type_decoder_f SIB_Type_NB_r13_decode_ber;
der_type_encoder_f SIB_Type_NB_r13_encode_der;
xer_type_decoder_f SIB_Type_NB_r13_decode_xer;
xer_type_encoder_f SIB_Type_NB_r13_encode_xer;
per_type_decoder_f SIB_Type_NB_r13_decode_uper;
per_type_encoder_f SIB_Type_NB_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Type_NB_r13_H_ */
#include <asn_internal.h>
