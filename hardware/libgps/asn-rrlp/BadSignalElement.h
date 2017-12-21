/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_BadSignalElement_H_
#define	_BadSignalElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SVID.h"
#include "GANSSSignals.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BadSignalElement */
typedef struct BadSignalElement {
	SVID_t	 badSVID;
	GANSSSignals_t	*badSignalID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BadSignalElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BadSignalElement;

#ifdef __cplusplus
}
#endif

#endif	/* _BadSignalElement_H_ */
#include <asn_internal.h>