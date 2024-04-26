/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VarLogMeasReport_r11_H_
#define	_VarLogMeasReport_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "PLMN-IdentityList3-r11.h"
#include "AbsoluteTimeInfo-r10.h"
#include "LogMeasInfoList2-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarLogMeasReport-r11 */
typedef struct VarLogMeasReport_r11 {
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	PLMN_IdentityList3_r11_t	 plmn_IdentityList_r11;
	AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	LogMeasInfoList2_r10_t	 logMeasInfoList_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLogMeasReport_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLogMeasReport_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLogMeasReport_r11_H_ */
#include <asn_internal.h>
