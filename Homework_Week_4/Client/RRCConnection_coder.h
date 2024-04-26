// #ifndef _S1SETUPREQUESTCODER_H
// #define _S1SETUPREQUESTCODER_H

#include <stdio.h>
#include <sys/types.h>
#include "src/RRCConnectionRequest.h"

static unsigned int random

void RRCSetupRequest_coder(uint8_t **buffer, ssize_t *len) {
		RRCConnectionRequest pdu;

		// Заполнили pdu
		memset(&pdu, 0, sizeof(pdu));
		pdu.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;
		pdu.choice.rrcConnectionRequest_r8.ue_Identity = InitialUE_Identity_PR_randomValue;
		pdu.choice.rrcConnectionRequest_r8.establishmentCause = EstablishmentCause_highPriorityAccess;

		asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
		res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_S1AP_PDU, &pdu);
		printf("%d\n", sizeof(res));
		printf("%d\n", strlen(res.buffer));
		free(res.buffer);
		memset(&res, 0, sizeof(res));
		res = asn_encode_to_new_buffer(NULL, ATS_ALIGNED_CANONICAL_PER, &asn_DEF_S1AP_PDU, &pdu);
		*buffer = res.buffer;
		*len = res.result.encoded;

		if (*buffer == NULL) {
				fprintf(stderr, "Error enconing s1ap pdu\n");
				exit(1);
		} else {
				fprintf(stderr, "Encoded pdu\n");
		}

		xer_fprint(stdout, &asn_DEF_S1AP_PDU, &pdu);
};

void tx_send(uint8_t **buffer, ssize_t *len) {
	return;
};

// #endif