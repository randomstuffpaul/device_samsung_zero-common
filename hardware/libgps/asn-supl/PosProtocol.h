/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../supl-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_PosProtocol_H_
#define	_PosProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ver2_PosProtocol_extension;

/* PosProtocol */
typedef struct PosProtocol {
	BOOLEAN_t	 tia801;
	BOOLEAN_t	 rrlp;
	BOOLEAN_t	 rrc;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_PosProtocol_extension	*ver2_PosProtocol_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosProtocol;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ver2-PosProtocol-extension.h"

#endif	/* _PosProtocol_H_ */
#include <asn_internal.h>
