/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GridIonList_r12_H_
#define	_GridIonList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GridIonElement_r12;

/* GridIonList-r12 */
typedef struct GridIonList_r12 {
	A_SEQUENCE_OF(struct GridIonElement_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GridIonList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GridIonList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GridIonElement-r12.h"

#endif	/* _GridIonList_r12_H_ */
#include <asn_internal.h>
