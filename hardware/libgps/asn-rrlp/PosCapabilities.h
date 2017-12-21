/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PosCapabilities_H_
#define	_PosCapabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonGANSSPositionMethods.h"
#include "MultipleMeasurementSets.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSPositionMethods;

/* PosCapabilities */
typedef struct PosCapabilities {
	NonGANSSPositionMethods_t	*nonGANSSpositionMethods	/* OPTIONAL */;
	struct GANSSPositionMethods	*gANSSPositionMethods	/* OPTIONAL */;
	MultipleMeasurementSets_t	*multipleMeasurementSets	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosCapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosCapabilities;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSPositionMethods.h"

#endif	/* _PosCapabilities_H_ */
#include <asn_internal.h>