/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "ReportData.h"

static asn_TYPE_member_t asn_MBR_ReportData_1[] = {
	{ ATF_POINTER, 4, offsetof(struct ReportData, positionData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_XPositionData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positionData"
		},
	{ ATF_POINTER, 3, offsetof(struct ReportData, multipleLocationIds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultipleLocationIds,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multipleLocationIds"
		},
	{ ATF_POINTER, 2, offsetof(struct ReportData, resultCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"resultCode"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportData, timestamp),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timestamp"
		},
};
static const int asn_MAP_ReportData_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ReportData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* positionData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multipleLocationIds */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resultCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timestamp */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReportData_specs_1 = {
	sizeof(struct ReportData),
	offsetof(struct ReportData, _asn_ctx),
	asn_MAP_ReportData_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ReportData_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReportData = {
	"ReportData",
	"ReportData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReportData_tags_1,
	sizeof(asn_DEF_ReportData_tags_1)
		/sizeof(asn_DEF_ReportData_tags_1[0]), /* 1 */
	asn_DEF_ReportData_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportData_tags_1)
		/sizeof(asn_DEF_ReportData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReportData_1,
	4,	/* Elements count */
	&asn_SPC_ReportData_specs_1	/* Additional specs */
};

