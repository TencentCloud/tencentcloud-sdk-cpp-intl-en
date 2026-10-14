/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSRTINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSRTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * SRT quality data in the transport stream.
                */
                class FlowSRTInfo : public AbstractModel
                {
                public:
                    FlowSRTInfo();
                    ~FlowSRTInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Timestamp in seconds.</p>
                     * @return Timestamp <p>Timestamp in seconds.</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>Timestamp in seconds.</p>
                     * @param _timestamp <p>Timestamp in seconds.</p>
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>Packet loss rate on transmitting.</p>
                     * @return SendPacketLossRate <p>Packet loss rate on transmitting.</p>
                     * 
                     */
                    int64_t GetSendPacketLossRate() const;

                    /**
                     * 设置<p>Packet loss rate on transmitting.</p>
                     * @param _sendPacketLossRate <p>Packet loss rate on transmitting.</p>
                     * 
                     */
                    void SetSendPacketLossRate(const int64_t& _sendPacketLossRate);

                    /**
                     * 判断参数 SendPacketLossRate 是否已赋值
                     * @return SendPacketLossRate 是否已赋值
                     * 
                     */
                    bool SendPacketLossRateHasBeenSet() const;

                    /**
                     * 获取<p>Retransmission rate.</p>
                     * @return SendRetransmissionRate <p>Retransmission rate.</p>
                     * 
                     */
                    int64_t GetSendRetransmissionRate() const;

                    /**
                     * 设置<p>Retransmission rate.</p>
                     * @param _sendRetransmissionRate <p>Retransmission rate.</p>
                     * 
                     */
                    void SetSendRetransmissionRate(const int64_t& _sendRetransmissionRate);

                    /**
                     * 判断参数 SendRetransmissionRate 是否已赋值
                     * @return SendRetransmissionRate 是否已赋值
                     * 
                     */
                    bool SendRetransmissionRateHasBeenSet() const;

                    /**
                     * 获取<p>Packet loss rate on receiving.</p>
                     * @return RecvPacketLossRate <p>Packet loss rate on receiving.</p>
                     * 
                     */
                    int64_t GetRecvPacketLossRate() const;

                    /**
                     * 设置<p>Packet loss rate on receiving.</p>
                     * @param _recvPacketLossRate <p>Packet loss rate on receiving.</p>
                     * 
                     */
                    void SetRecvPacketLossRate(const int64_t& _recvPacketLossRate);

                    /**
                     * 判断参数 RecvPacketLossRate 是否已赋值
                     * @return RecvPacketLossRate 是否已赋值
                     * 
                     */
                    bool RecvPacketLossRateHasBeenSet() const;

                    /**
                     * 获取<p>Receiving retransmission rate.</p>
                     * @return RecvRetransmissionRate <p>Receiving retransmission rate.</p>
                     * 
                     */
                    int64_t GetRecvRetransmissionRate() const;

                    /**
                     * 设置<p>Receiving retransmission rate.</p>
                     * @param _recvRetransmissionRate <p>Receiving retransmission rate.</p>
                     * 
                     */
                    void SetRecvRetransmissionRate(const int64_t& _recvRetransmissionRate);

                    /**
                     * 判断参数 RecvRetransmissionRate 是否已赋值
                     * @return RecvRetransmissionRate 是否已赋值
                     * 
                     */
                    bool RecvRetransmissionRateHasBeenSet() const;

                    /**
                     * 获取<p>RTT latency to the peer.</p>
                     * @return RTT <p>RTT latency to the peer.</p>
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置<p>RTT latency to the peer.</p>
                     * @param _rTT <p>RTT latency to the peer.</p>
                     * 
                     */
                    void SetRTT(const int64_t& _rTT);

                    /**
                     * 判断参数 RTT 是否已赋值
                     * @return RTT 是否已赋值
                     * 
                     */
                    bool RTTHasBeenSet() const;

                    /**
                     * 获取<p>Flag the same streaming session.</p>
                     * @return SessionId <p>Flag the same streaming session.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Flag the same streaming session.</p>
                     * @param _sessionId <p>Flag the same streaming session.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of discarded packets on sending.</p>
                     * @return SendPacketDropNumber <p>Number of discarded packets on sending.</p>
                     * 
                     */
                    int64_t GetSendPacketDropNumber() const;

                    /**
                     * 设置<p>Number of discarded packets on sending.</p>
                     * @param _sendPacketDropNumber <p>Number of discarded packets on sending.</p>
                     * 
                     */
                    void SetSendPacketDropNumber(const int64_t& _sendPacketDropNumber);

                    /**
                     * 判断参数 SendPacketDropNumber 是否已赋值
                     * @return SendPacketDropNumber 是否已赋值
                     * 
                     */
                    bool SendPacketDropNumberHasBeenSet() const;

                    /**
                     * 获取<p>Number of received dropped packets.</p>
                     * @return RecvPacketDropNumber <p>Number of received dropped packets.</p>
                     * 
                     */
                    int64_t GetRecvPacketDropNumber() const;

                    /**
                     * 设置<p>Number of received dropped packets.</p>
                     * @param _recvPacketDropNumber <p>Number of received dropped packets.</p>
                     * 
                     */
                    void SetRecvPacketDropNumber(const int64_t& _recvPacketDropNumber);

                    /**
                     * 判断参数 RecvPacketDropNumber 是否已赋值
                     * @return RecvPacketDropNumber 是否已赋值
                     * 
                     */
                    bool RecvPacketDropNumberHasBeenSet() const;

                    /**
                     * 获取<p>Bandwidth.</p>
                     * @return Bandwidth <p>Bandwidth.</p>
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置<p>Bandwidth.</p>
                     * @param _bandwidth <p>Bandwidth.</p>
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Transmit bandwidth</p>
                     * @return SendBandwidth <p>Transmit bandwidth</p>
                     * 
                     */
                    double GetSendBandwidth() const;

                    /**
                     * 设置<p>Transmit bandwidth</p>
                     * @param _sendBandwidth <p>Transmit bandwidth</p>
                     * 
                     */
                    void SetSendBandwidth(const double& _sendBandwidth);

                    /**
                     * 判断参数 SendBandwidth 是否已赋值
                     * @return SendBandwidth 是否已赋值
                     * 
                     */
                    bool SendBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Receiving bandwidth</p>
                     * @return RecvBandwidth <p>Receiving bandwidth</p>
                     * 
                     */
                    double GetRecvBandwidth() const;

                    /**
                     * 设置<p>Receiving bandwidth</p>
                     * @param _recvBandwidth <p>Receiving bandwidth</p>
                     * 
                     */
                    void SetRecvBandwidth(const double& _recvBandwidth);

                    /**
                     * 判断参数 RecvBandwidth 是否已赋值
                     * @return RecvBandwidth 是否已赋值
                     * 
                     */
                    bool RecvBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Sent packet count</p>
                     * @return SendPackets <p>Sent packet count</p>
                     * 
                     */
                    int64_t GetSendPackets() const;

                    /**
                     * 设置<p>Sent packet count</p>
                     * @param _sendPackets <p>Sent packet count</p>
                     * 
                     */
                    void SetSendPackets(const int64_t& _sendPackets);

                    /**
                     * 判断参数 SendPackets 是否已赋值
                     * @return SendPackets 是否已赋值
                     * 
                     */
                    bool SendPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Number of received packets</p>
                     * @return RecvPackets <p>Number of received packets</p>
                     * 
                     */
                    int64_t GetRecvPackets() const;

                    /**
                     * 设置<p>Number of received packets</p>
                     * @param _recvPackets <p>Number of received packets</p>
                     * 
                     */
                    void SetRecvPackets(const int64_t& _recvPackets);

                    /**
                     * 判断参数 RecvPackets 是否已赋值
                     * @return RecvPackets 是否已赋值
                     * 
                     */
                    bool RecvPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Sending lost packets</p>
                     * @return SendLostPackets <p>Sending lost packets</p>
                     * 
                     */
                    int64_t GetSendLostPackets() const;

                    /**
                     * 设置<p>Sending lost packets</p>
                     * @param _sendLostPackets <p>Sending lost packets</p>
                     * 
                     */
                    void SetSendLostPackets(const int64_t& _sendLostPackets);

                    /**
                     * 判断参数 SendLostPackets 是否已赋值
                     * @return SendLostPackets 是否已赋值
                     * 
                     */
                    bool SendLostPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Accept lost packets</p>
                     * @return RecvLostPackets <p>Accept lost packets</p>
                     * 
                     */
                    int64_t GetRecvLostPackets() const;

                    /**
                     * 设置<p>Accept lost packets</p>
                     * @param _recvLostPackets <p>Accept lost packets</p>
                     * 
                     */
                    void SetRecvLostPackets(const int64_t& _recvLostPackets);

                    /**
                     * 判断参数 RecvLostPackets 是否已赋值
                     * @return RecvLostPackets 是否已赋值
                     * 
                     */
                    bool RecvLostPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Sent retransmission packet count</p>
                     * @return SendRetransmitPackets <p>Sent retransmission packet count</p>
                     * 
                     */
                    int64_t GetSendRetransmitPackets() const;

                    /**
                     * 设置<p>Sent retransmission packet count</p>
                     * @param _sendRetransmitPackets <p>Sent retransmission packet count</p>
                     * 
                     */
                    void SetSendRetransmitPackets(const int64_t& _sendRetransmitPackets);

                    /**
                     * 判断参数 SendRetransmitPackets 是否已赋值
                     * @return SendRetransmitPackets 是否已赋值
                     * 
                     */
                    bool SendRetransmitPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Number of received retransmission packets</p>
                     * @return RecvRetransmitPackets <p>Number of received retransmission packets</p>
                     * 
                     */
                    int64_t GetRecvRetransmitPackets() const;

                    /**
                     * 设置<p>Number of received retransmission packets</p>
                     * @param _recvRetransmitPackets <p>Number of received retransmission packets</p>
                     * 
                     */
                    void SetRecvRetransmitPackets(const int64_t& _recvRetransmitPackets);

                    /**
                     * 判断参数 RecvRetransmitPackets 是否已赋值
                     * @return RecvRetransmitPackets 是否已赋值
                     * 
                     */
                    bool RecvRetransmitPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Flight window size</p>
                     * @return FlightSize <p>Flight window size</p>
                     * 
                     */
                    int64_t GetFlightSize() const;

                    /**
                     * 设置<p>Flight window size</p>
                     * @param _flightSize <p>Flight window size</p>
                     * 
                     */
                    void SetFlightSize(const int64_t& _flightSize);

                    /**
                     * 判断参数 FlightSize 是否已赋值
                     * @return FlightSize 是否已赋值
                     * 
                     */
                    bool FlightSizeHasBeenSet() const;

                    /**
                     * 获取<p>Congestion window.</p>
                     * @return CongestionWindow <p>Congestion window.</p>
                     * 
                     */
                    int64_t GetCongestionWindow() const;

                    /**
                     * 设置<p>Congestion window.</p>
                     * @param _congestionWindow <p>Congestion window.</p>
                     * 
                     */
                    void SetCongestionWindow(const int64_t& _congestionWindow);

                    /**
                     * 判断参数 CongestionWindow 是否已赋值
                     * @return CongestionWindow 是否已赋值
                     * 
                     */
                    bool CongestionWindowHasBeenSet() const;

                    /**
                     * 获取<p>Sending buffer (ms)</p>
                     * @return SendBuffer <p>Sending buffer (ms)</p>
                     * 
                     */
                    int64_t GetSendBuffer() const;

                    /**
                     * 设置<p>Sending buffer (ms)</p>
                     * @param _sendBuffer <p>Sending buffer (ms)</p>
                     * 
                     */
                    void SetSendBuffer(const int64_t& _sendBuffer);

                    /**
                     * 判断参数 SendBuffer 是否已赋值
                     * @return SendBuffer 是否已赋值
                     * 
                     */
                    bool SendBufferHasBeenSet() const;

                    /**
                     * 获取<p>Receive buffer (ms)</p>
                     * @return RecvBuffer <p>Receive buffer (ms)</p>
                     * 
                     */
                    int64_t GetRecvBuffer() const;

                    /**
                     * 设置<p>Receive buffer (ms)</p>
                     * @param _recvBuffer <p>Receive buffer (ms)</p>
                     * 
                     */
                    void SetRecvBuffer(const int64_t& _recvBuffer);

                    /**
                     * 判断参数 RecvBuffer 是否已赋值
                     * @return RecvBuffer 是否已赋值
                     * 
                     */
                    bool RecvBufferHasBeenSet() const;

                    /**
                     * 获取<p>Sending delay</p>
                     * @return SendLatency <p>Sending delay</p>
                     * 
                     */
                    int64_t GetSendLatency() const;

                    /**
                     * 设置<p>Sending delay</p>
                     * @param _sendLatency <p>Sending delay</p>
                     * 
                     */
                    void SetSendLatency(const int64_t& _sendLatency);

                    /**
                     * 判断参数 SendLatency 是否已赋值
                     * @return SendLatency 是否已赋值
                     * 
                     */
                    bool SendLatencyHasBeenSet() const;

                    /**
                     * 获取<p>Receive latency</p>
                     * @return RecvLatency <p>Receive latency</p>
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置<p>Receive latency</p>
                     * @param _recvLatency <p>Receive latency</p>
                     * 
                     */
                    void SetRecvLatency(const int64_t& _recvLatency);

                    /**
                     * 判断参数 RecvLatency 是否已赋值
                     * @return RecvLatency 是否已赋值
                     * 
                     */
                    bool RecvLatencyHasBeenSet() const;

                    /**
                     * 获取<p>Sent NAK packet count</p>
                     * @return SendNAKPackets <p>Sent NAK packet count</p>
                     * 
                     */
                    int64_t GetSendNAKPackets() const;

                    /**
                     * 设置<p>Sent NAK packet count</p>
                     * @param _sendNAKPackets <p>Sent NAK packet count</p>
                     * 
                     */
                    void SetSendNAKPackets(const int64_t& _sendNAKPackets);

                    /**
                     * 判断参数 SendNAKPackets 是否已赋值
                     * @return SendNAKPackets 是否已赋值
                     * 
                     */
                    bool SendNAKPacketsHasBeenSet() const;

                    /**
                     * 获取<p>Number of received NAK packets</p>
                     * @return RecvNAKPackets <p>Number of received NAK packets</p>
                     * 
                     */
                    int64_t GetRecvNAKPackets() const;

                    /**
                     * 设置<p>Number of received NAK packets</p>
                     * @param _recvNAKPackets <p>Number of received NAK packets</p>
                     * 
                     */
                    void SetRecvNAKPackets(const int64_t& _recvNAKPackets);

                    /**
                     * 判断参数 RecvNAKPackets 是否已赋值
                     * @return RecvNAKPackets 是否已赋值
                     * 
                     */
                    bool RecvNAKPacketsHasBeenSet() const;

                private:

                    /**
                     * <p>Timestamp in seconds.</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Packet loss rate on transmitting.</p>
                     */
                    int64_t m_sendPacketLossRate;
                    bool m_sendPacketLossRateHasBeenSet;

                    /**
                     * <p>Retransmission rate.</p>
                     */
                    int64_t m_sendRetransmissionRate;
                    bool m_sendRetransmissionRateHasBeenSet;

                    /**
                     * <p>Packet loss rate on receiving.</p>
                     */
                    int64_t m_recvPacketLossRate;
                    bool m_recvPacketLossRateHasBeenSet;

                    /**
                     * <p>Receiving retransmission rate.</p>
                     */
                    int64_t m_recvRetransmissionRate;
                    bool m_recvRetransmissionRateHasBeenSet;

                    /**
                     * <p>RTT latency to the peer.</p>
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * <p>Flag the same streaming session.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Number of discarded packets on sending.</p>
                     */
                    int64_t m_sendPacketDropNumber;
                    bool m_sendPacketDropNumberHasBeenSet;

                    /**
                     * <p>Number of received dropped packets.</p>
                     */
                    int64_t m_recvPacketDropNumber;
                    bool m_recvPacketDropNumberHasBeenSet;

                    /**
                     * <p>Bandwidth.</p>
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>Transmit bandwidth</p>
                     */
                    double m_sendBandwidth;
                    bool m_sendBandwidthHasBeenSet;

                    /**
                     * <p>Receiving bandwidth</p>
                     */
                    double m_recvBandwidth;
                    bool m_recvBandwidthHasBeenSet;

                    /**
                     * <p>Sent packet count</p>
                     */
                    int64_t m_sendPackets;
                    bool m_sendPacketsHasBeenSet;

                    /**
                     * <p>Number of received packets</p>
                     */
                    int64_t m_recvPackets;
                    bool m_recvPacketsHasBeenSet;

                    /**
                     * <p>Sending lost packets</p>
                     */
                    int64_t m_sendLostPackets;
                    bool m_sendLostPacketsHasBeenSet;

                    /**
                     * <p>Accept lost packets</p>
                     */
                    int64_t m_recvLostPackets;
                    bool m_recvLostPacketsHasBeenSet;

                    /**
                     * <p>Sent retransmission packet count</p>
                     */
                    int64_t m_sendRetransmitPackets;
                    bool m_sendRetransmitPacketsHasBeenSet;

                    /**
                     * <p>Number of received retransmission packets</p>
                     */
                    int64_t m_recvRetransmitPackets;
                    bool m_recvRetransmitPacketsHasBeenSet;

                    /**
                     * <p>Flight window size</p>
                     */
                    int64_t m_flightSize;
                    bool m_flightSizeHasBeenSet;

                    /**
                     * <p>Congestion window.</p>
                     */
                    int64_t m_congestionWindow;
                    bool m_congestionWindowHasBeenSet;

                    /**
                     * <p>Sending buffer (ms)</p>
                     */
                    int64_t m_sendBuffer;
                    bool m_sendBufferHasBeenSet;

                    /**
                     * <p>Receive buffer (ms)</p>
                     */
                    int64_t m_recvBuffer;
                    bool m_recvBufferHasBeenSet;

                    /**
                     * <p>Sending delay</p>
                     */
                    int64_t m_sendLatency;
                    bool m_sendLatencyHasBeenSet;

                    /**
                     * <p>Receive latency</p>
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * <p>Sent NAK packet count</p>
                     */
                    int64_t m_sendNAKPackets;
                    bool m_sendNAKPacketsHasBeenSet;

                    /**
                     * <p>Number of received NAK packets</p>
                     */
                    int64_t m_recvNAKPackets;
                    bool m_recvNAKPacketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSRTINFO_H_
