/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "GANSSClockModel.h"

static asn_per_constraints_t asn_PER_type_GANSSClockModel_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSClockModel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.standardClockModelList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SeqOfStandardClockModelElement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"standardClockModelList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.navClockModel),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAVclockModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"navClockModel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.cnavClockModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CNAVclockModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cnavClockModel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.glonassClockModel),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GLONASSclockModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"glonassClockModel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.sbasClockModel),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBASclockModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sbasClockModel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSClockModel, choice.bdsClockModel_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BDSClockModel_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bdsClockModel-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GANSSClockModel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* standardClockModelList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* navClockModel */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cnavClockModel */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* glonassClockModel */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sbasClockModel */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* bdsClockModel-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_GANSSClockModel_specs_1 = {
	sizeof(struct GANSSClockModel),
	offsetof(struct GANSSClockModel, _asn_ctx),
	offsetof(struct GANSSClockModel, present),
	sizeof(((struct GANSSClockModel *)0)->present),
	asn_MAP_GANSSClockModel_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GANSSClockModel = {
	"GANSSClockModel",
	"GANSSClockModel",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_GANSSClockModel_constr_1,
	asn_MBR_GANSSClockModel_1,
	6,	/* Elements count */
	&asn_SPC_GANSSClockModel_specs_1	/* Additional specs */
};

