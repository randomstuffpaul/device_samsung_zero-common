/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SeqOfGANSSRefOrbit_H_
#define	_SeqOfGANSSRefOrbit_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSReferenceOrbit;

/* SeqOfGANSSRefOrbit */
typedef struct SeqOfGANSSRefOrbit {
	A_SEQUENCE_OF(struct GANSSReferenceOrbit) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGANSSRefOrbit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSSRefOrbit;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSReferenceOrbit.h"

#endif	/* _SeqOfGANSSRefOrbit_H_ */
#include <asn_internal.h>
