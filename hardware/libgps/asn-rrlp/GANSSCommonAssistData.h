/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSCommonAssistData_H_
#define	_GANSSCommonAssistData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSReferenceTime;
struct GANSSRefLocation;
struct GANSSIonosphericModel;
struct GANSSAddIonosphericModel;
struct GANSSEarthOrientParam;
struct GANSSReferenceTime_R10_Ext;

/* GANSSCommonAssistData */
typedef struct GANSSCommonAssistData {
	struct GANSSReferenceTime	*ganssReferenceTime	/* OPTIONAL */;
	struct GANSSRefLocation	*ganssRefLocation	/* OPTIONAL */;
	struct GANSSIonosphericModel	*ganssIonosphericModel	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GANSSAddIonosphericModel	*ganssAddIonosphericModel	/* OPTIONAL */;
	struct GANSSEarthOrientParam	*ganssEarthOrientParam	/* OPTIONAL */;
	struct GANSSReferenceTime_R10_Ext	*ganssReferenceTime_R10_Ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSCommonAssistData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSCommonAssistData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSReferenceTime.h"
#include "GANSSRefLocation.h"
#include "GANSSIonosphericModel.h"
#include "GANSSAddIonosphericModel.h"
#include "GANSSEarthOrientParam.h"
#include "GANSSReferenceTime-R10-Ext.h"

#endif	/* _GANSSCommonAssistData_H_ */
#include <asn_internal.h>
