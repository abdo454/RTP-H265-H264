/**
 * @file main.c
 * @author Abdo Daood (abdo.daood94@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-11-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Utils.h"
#include "RTPEnc.h"
#include "Network.h"

int main()
{

    int len = 0;
    int res;
    uint8_t *stream = NULL;
    const char *fileName = "../sample_960x540.hevc";

    RTPMuxContext rtpMuxContext;
    UDPContext udpContext = {
        .dstIp = "127.0.0.1", // destination ip
        .dstPort = 1234       // destination port
    };

    res = readFile(&stream, &len, fileName);
    if (res)
    {
        printf("readFile error.\n");
        return -1;
    }

    // create udp socket
    res = udpInit(&udpContext);
    if (res)
    {
        printf("udpInit error.\n");
        return -1;
    }

    initRTPMuxContext(&rtpMuxContext);

    if (rtpMuxContext.payload_type == 0) // 0, H.264/AVC;
        rtpSendH264AVC(&rtpMuxContext, &udpContext, stream, len);
    else // 1, HEVC/H.265
        rtpSendH265HEVC(&rtpMuxContext, &udpContext, stream, len);

    free(stream);

    return 0;
}