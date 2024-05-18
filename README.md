
### Overview:

This project involves developing an RTP server capable of streaming H.265/HEVC video using the Real-time Transport Protocol (RTP) on Linux and MacOS platforms.

### Execution Instructions:

1. To begin, execute the following command in the root directory of this repository:
   - `$ffplay -protocol_whitelist "file,rtp,udp" play.sdp`

2. Next, move to the RTP-Server directory and execute `make` in the terminal. Afterward, run the resulting `./RTPServer` file.

3. To independently play the video file, use:
   - `$ffplay sample_960x540.hevc`

### Additional Information:

This project enhances and modifies the [RTP repository](https://github.com/lmshao/RTP), which originally only supported H.264 videos.

### References:

1. [Overview of the RTP protocol and C language implementation for an RTP server sending H.264 video](https://blog.csdn.net/shaosunrise/article/details/80374523).
2. [NAL Unit Header Details](https://datatracker.ietf.org/doc/html/rfc7798#section-1.1.4).
3. [In-depth Guide to H265 Stream Encapsulation in RTP](https://blog.csdn.net/m0_60259116/article/details/126627095).
4. [Introduction to H265 NALU Types and RTP Packetization](https://blog.csdn.net/qq_41681715/article/details/112408011).
5. [Implementing H.265 Encapsulation and Transmission in RTP](https://blog.csdn.net/m0_60259116/article/details/124889465).
6. [Summary of H.265 video coding principles](https://blog.csdn.net/weixin_43254989/article/details/122455867).
