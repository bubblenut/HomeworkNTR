/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ThresholdEUTRA_v1250_H_
#define	_ThresholdEUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-RSRP-Range-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ThresholdEUTRA-v1250 */
typedef CSI_RSRP_Range_r12_t	 ThresholdEUTRA_v1250_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ThresholdEUTRA_v1250_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ThresholdEUTRA_v1250;
asn_struct_free_f ThresholdEUTRA_v1250_free;
asn_struct_print_f ThresholdEUTRA_v1250_print;
asn_constr_check_f ThresholdEUTRA_v1250_constraint;
ber_type_decoder_f ThresholdEUTRA_v1250_decode_ber;
der_type_encoder_f ThresholdEUTRA_v1250_encode_der;
xer_type_decoder_f ThresholdEUTRA_v1250_decode_xer;
xer_type_encoder_f ThresholdEUTRA_v1250_encode_xer;
per_type_decoder_f ThresholdEUTRA_v1250_decode_uper;
per_type_encoder_f ThresholdEUTRA_v1250_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdEUTRA_v1250_H_ */
#include <asn_internal.h>
