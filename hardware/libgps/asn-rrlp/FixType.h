/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_FixType_H_
#define	_FixType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FixType {
	FixType_twoDFix	= 0,
	FixType_threeDFix	= 1
} e_FixType;

/* FixType */
typedef long	 FixType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FixType;
asn_struct_free_f FixType_free;
asn_struct_print_f FixType_print;
asn_constr_check_f FixType_constraint;
ber_type_decoder_f FixType_decode_ber;
der_type_encoder_f FixType_encode_der;
xer_type_decoder_f FixType_decode_xer;
xer_type_encoder_f FixType_encode_xer;
per_type_decoder_f FixType_decode_uper;
per_type_encoder_f FixType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FixType_H_ */
#include <asn_internal.h>
