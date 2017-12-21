/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_AreaIdList_H_
#define	_AreaIdList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AreaIdSet.h"
#include "AreaIdSetType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeoAreaMappingList;

/* AreaIdList */
typedef struct AreaIdList {
	AreaIdSet_t	 areaIdSet;
	AreaIdSetType_t	*areaIdSetType	/* OPTIONAL */;
	struct GeoAreaMappingList	*geoAreaMappingList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaIdList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaIdList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeoAreaMappingList.h"

#endif	/* _AreaIdList_H_ */
#include <asn_internal.h>
