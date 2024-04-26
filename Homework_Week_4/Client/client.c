#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>

#include "RRCConnection_coder.h"


int main() {
    uint8_t *buffer;
    ssize_t len;
    RRCSetupRequest_coder(&buffer, &len);
    //tx_send(&buffer, &len);
    
    return 0;
}
