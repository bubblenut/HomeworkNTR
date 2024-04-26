/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_T_StatusProhibit_H_
#define	_T_StatusProhibit_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_StatusProhibit {
	T_StatusProhibit_ms0	= 0,
	T_StatusProhibit_ms5	= 1,
	T_StatusProhibit_ms10	= 2,
	T_StatusProhibit_ms15	= 3,
	T_StatusProhibit_ms20	= 4,
	T_StatusProhibit_ms25	= 5,
	T_StatusProhibit_ms30	= 6,
	T_StatusProhibit_ms35	= 7,
	T_StatusProhibit_ms40	= 8,
	T_StatusProhibit_ms45	= 9,
	T_StatusProhibit_ms50	= 10,
	T_StatusProhibit_ms55	= 11,
	T_StatusProhibit_ms60	= 12,
	T_StatusProhibit_ms65	= 13,
	T_StatusProhibit_ms70	= 14,
	T_StatusProhibit_ms75	= 15,
	T_StatusProhibit_ms80	= 16,
	T_StatusProhibit_ms85	= 17,
	T_StatusProhibit_ms90	= 18,
	T_StatusProhibit_ms95	= 19,
	T_StatusProhibit_ms100	= 20,
	T_StatusProhibit_ms105	= 21,
	T_StatusProhibit_ms110	= 22,
	T_StatusProhibit_ms115	= 23,
	T_StatusProhibit_ms120	= 24,
	T_StatusProhibit_ms125	= 25,
	T_StatusProhibit_ms130	= 26,
	T_StatusProhibit_ms135	= 27,
	T_StatusProhibit_ms140	= 28,
	T_StatusProhibit_ms145	= 29,
	T_StatusProhibit_ms150	= 30,
	T_StatusProhibit_ms155	= 31,
	T_StatusProhibit_ms160	= 32,
	T_StatusProhibit_ms165	= 33,
	T_StatusProhibit_ms170	= 34,
	T_StatusProhibit_ms175	= 35,
	T_StatusProhibit_ms180	= 36,
	T_StatusProhibit_ms185	= 37,
	T_StatusProhibit_ms190	= 38,
	T_StatusProhibit_ms195	= 39,
	T_StatusProhibit_ms200	= 40,
	T_StatusProhibit_ms205	= 41,
	T_StatusProhibit_ms210	= 42,
	T_StatusProhibit_ms215	= 43,
	T_StatusProhibit_ms220	= 44,
	T_StatusProhibit_ms225	= 45,
	T_StatusProhibit_ms230	= 46,
	T_StatusProhibit_ms235	= 47,
	T_StatusProhibit_ms240	= 48,
	T_StatusProhibit_ms245	= 49,
	T_StatusProhibit_ms250	= 50,
	T_StatusProhibit_ms300	= 51,
	T_StatusProhibit_ms350	= 52,
	T_StatusProhibit_ms400	= 53,
	T_StatusProhibit_ms450	= 54,
	T_StatusProhibit_ms500	= 55,
	T_StatusProhibit_ms800_v1310	= 56,
	T_StatusProhibit_ms1000_v1310	= 57,
	T_StatusProhibit_ms1200_v1310	= 58,
	T_StatusProhibit_ms1600_v1310	= 59,
	T_StatusProhibit_ms2000_v1310	= 60,
	T_StatusProhibit_ms2400_v1310	= 61,
	T_StatusProhibit_spare2	= 62,
	T_StatusProhibit_spare1	= 63
} e_T_StatusProhibit;

/* T-StatusProhibit */
typedef long	 T_StatusProhibit_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_StatusProhibit_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_StatusProhibit;
extern const asn_INTEGER_specifics_t asn_SPC_T_StatusProhibit_specs_1;
asn_struct_free_f T_StatusProhibit_free;
asn_struct_print_f T_StatusProhibit_print;
asn_constr_check_f T_StatusProhibit_constraint;
ber_type_decoder_f T_StatusProhibit_decode_ber;
der_type_encoder_f T_StatusProhibit_encode_der;
xer_type_decoder_f T_StatusProhibit_decode_xer;
xer_type_encoder_f T_StatusProhibit_encode_xer;
per_type_decoder_f T_StatusProhibit_decode_uper;
per_type_encoder_f T_StatusProhibit_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_StatusProhibit_H_ */
#include <asn_internal.h>
