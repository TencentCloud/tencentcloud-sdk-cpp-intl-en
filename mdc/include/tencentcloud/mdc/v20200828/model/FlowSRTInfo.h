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
                * The SRT streaming performance data.
                */
                class FlowSRTInfo : public AbstractModel
                {
                public:
                    FlowSRTInfo();
                    ~FlowSRTInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The timestamp (seconds).
                     * @return Timestamp The timestamp (seconds).
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置The timestamp (seconds).
                     * @param _timestamp The timestamp (seconds).
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
                     * 获取The packet loss rate for sending.
                     * @return SendPacketLossRate The packet loss rate for sending.
                     * 
                     */
                    int64_t GetSendPacketLossRate() const;

                    /**
                     * 设置The packet loss rate for sending.
                     * @param _sendPacketLossRate The packet loss rate for sending.
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
                     * 获取The retry rate for sending.
                     * @return SendRetransmissionRate The retry rate for sending.
                     * 
                     */
                    int64_t GetSendRetransmissionRate() const;

                    /**
                     * 设置The retry rate for sending.
                     * @param _sendRetransmissionRate The retry rate for sending.
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
                     * 获取The packet loss rate for receiving.
                     * @return RecvPacketLossRate The packet loss rate for receiving.
                     * 
                     */
                    int64_t GetRecvPacketLossRate() const;

                    /**
                     * 设置The packet loss rate for receiving.
                     * @param _recvPacketLossRate The packet loss rate for receiving.
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
                     * 获取The retry rate for receiving.
                     * @return RecvRetransmissionRate The retry rate for receiving.
                     * 
                     */
                    int64_t GetRecvRetransmissionRate() const;

                    /**
                     * 设置The retry rate for receiving.
                     * @param _recvRetransmissionRate The retry rate for receiving.
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
                     * 获取The peer RTT.
                     * @return RTT The peer RTT.
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置The peer RTT.
                     * @param _rTT The peer RTT.
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
                     * 获取The ID of a push session.
                     * @return SessionId The ID of a push session.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID of a push session.
                     * @param _sessionId The ID of a push session.
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
                     * 获取The number of dropped packets for sending.
                     * @return SendPacketDropNumber The number of dropped packets for sending.
                     * 
                     */
                    int64_t GetSendPacketDropNumber() const;

                    /**
                     * 设置The number of dropped packets for sending.
                     * @param _sendPacketDropNumber The number of dropped packets for sending.
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
                     * 获取The number of dropped packets for receiving.
                     * @return RecvPacketDropNumber The number of dropped packets for receiving.
                     * 
                     */
                    int64_t GetRecvPacketDropNumber() const;

                    /**
                     * 设置The number of dropped packets for receiving.
                     * @param _recvPacketDropNumber The number of dropped packets for receiving.
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
                     * 获取bandwidth
                     * @return Bandwidth bandwidth
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置bandwidth
                     * @param _bandwidth bandwidth
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
                     * 获取Transmit bandwidth
                     * @return SendBandwidth Transmit bandwidth
                     * 
                     */
                    double GetSendBandwidth() const;

                    /**
                     * 设置Transmit bandwidth
                     * @param _sendBandwidth Transmit bandwidth
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
                     * 获取Receive bandwidth
                     * @return RecvBandwidth Receive bandwidth
                     * 
                     */
                    double GetRecvBandwidth() const;

                    /**
                     * 设置Receive bandwidth
                     * @param _recvBandwidth Receive bandwidth
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
                     * 获取Number of packets sent
                     * @return SendPackets Number of packets sent
                     * 
                     */
                    int64_t GetSendPackets() const;

                    /**
                     * 设置Number of packets sent
                     * @param _sendPackets Number of packets sent
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
                     * 获取Number of received packets
                     * @return RecvPackets Number of received packets
                     * 
                     */
                    int64_t GetRecvPackets() const;

                    /**
                     * 设置Number of received packets
                     * @param _recvPackets Number of received packets
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
                     * 获取Send lost package
                     * @return SendLostPackets Send lost package
                     * 
                     */
                    int64_t GetSendLostPackets() const;

                    /**
                     * 设置Send lost package
                     * @param _sendLostPackets Send lost package
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
                     * 获取Accept lost packages
                     * @return RecvLostPackets Accept lost packages
                     * 
                     */
                    int64_t GetRecvLostPackets() const;

                    /**
                     * 设置Accept lost packages
                     * @param _recvLostPackets Accept lost packages
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
                     * 获取Number of retransmission packets sent
                     * @return SendRetransmitPackets Number of retransmission packets sent
                     * 
                     */
                    int64_t GetSendRetransmitPackets() const;

                    /**
                     * 设置Number of retransmission packets sent
                     * @param _sendRetransmitPackets Number of retransmission packets sent
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
                     * 获取Number of received retransmission packets
                     * @return RecvRetransmitPackets Number of received retransmission packets
                     * 
                     */
                    int64_t GetRecvRetransmitPackets() const;

                    /**
                     * 设置Number of received retransmission packets
                     * @param _recvRetransmitPackets Number of received retransmission packets
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
                     * 获取Flight window size
                     * @return FlightSize Flight window size
                     * 
                     */
                    int64_t GetFlightSize() const;

                    /**
                     * 设置Flight window size
                     * @param _flightSize Flight window size
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
                     * 获取congestion window
                     * @return CongestionWindow congestion window
                     * 
                     */
                    int64_t GetCongestionWindow() const;

                    /**
                     * 设置congestion window
                     * @param _congestionWindow congestion window
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
                     * 获取Send buffer (ms)
                     * @return SendBuffer Send buffer (ms)
                     * 
                     */
                    int64_t GetSendBuffer() const;

                    /**
                     * 设置Send buffer (ms)
                     * @param _sendBuffer Send buffer (ms)
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
                     * 获取Receive buffer (ms)
                     * @return RecvBuffer Receive buffer (ms)
                     * 
                     */
                    int64_t GetRecvBuffer() const;

                    /**
                     * 设置Receive buffer (ms)
                     * @param _recvBuffer Receive buffer (ms)
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
                     * 获取Sending delay
                     * @return SendLatency Sending delay
                     * 
                     */
                    int64_t GetSendLatency() const;

                    /**
                     * 设置Sending delay
                     * @param _sendLatency Sending delay
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
                     * 获取Receiving delay
                     * @return RecvLatency Receiving delay
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receiving delay
                     * @param _recvLatency Receiving delay
                     * 
                     */
                    void SetRecvLatency(const int64_t& _recvLatency);

                    /**
                     * 判断参数 RecvLatency 是否已赋值
                     * @return RecvLatency 是否已赋值
                     * 
                     */
                    bool RecvLatencyHasBeenSet() const;

                private:

                    /**
                     * The timestamp (seconds).
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * The packet loss rate for sending.
                     */
                    int64_t m_sendPacketLossRate;
                    bool m_sendPacketLossRateHasBeenSet;

                    /**
                     * The retry rate for sending.
                     */
                    int64_t m_sendRetransmissionRate;
                    bool m_sendRetransmissionRateHasBeenSet;

                    /**
                     * The packet loss rate for receiving.
                     */
                    int64_t m_recvPacketLossRate;
                    bool m_recvPacketLossRateHasBeenSet;

                    /**
                     * The retry rate for receiving.
                     */
                    int64_t m_recvRetransmissionRate;
                    bool m_recvRetransmissionRateHasBeenSet;

                    /**
                     * The peer RTT.
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * The ID of a push session.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The number of dropped packets for sending.
                     */
                    int64_t m_sendPacketDropNumber;
                    bool m_sendPacketDropNumberHasBeenSet;

                    /**
                     * The number of dropped packets for receiving.
                     */
                    int64_t m_recvPacketDropNumber;
                    bool m_recvPacketDropNumberHasBeenSet;

                    /**
                     * bandwidth
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Transmit bandwidth
                     */
                    double m_sendBandwidth;
                    bool m_sendBandwidthHasBeenSet;

                    /**
                     * Receive bandwidth
                     */
                    double m_recvBandwidth;
                    bool m_recvBandwidthHasBeenSet;

                    /**
                     * Number of packets sent
                     */
                    int64_t m_sendPackets;
                    bool m_sendPacketsHasBeenSet;

                    /**
                     * Number of received packets
                     */
                    int64_t m_recvPackets;
                    bool m_recvPacketsHasBeenSet;

                    /**
                     * Send lost package
                     */
                    int64_t m_sendLostPackets;
                    bool m_sendLostPacketsHasBeenSet;

                    /**
                     * Accept lost packages
                     */
                    int64_t m_recvLostPackets;
                    bool m_recvLostPacketsHasBeenSet;

                    /**
                     * Number of retransmission packets sent
                     */
                    int64_t m_sendRetransmitPackets;
                    bool m_sendRetransmitPacketsHasBeenSet;

                    /**
                     * Number of received retransmission packets
                     */
                    int64_t m_recvRetransmitPackets;
                    bool m_recvRetransmitPacketsHasBeenSet;

                    /**
                     * Flight window size
                     */
                    int64_t m_flightSize;
                    bool m_flightSizeHasBeenSet;

                    /**
                     * congestion window
                     */
                    int64_t m_congestionWindow;
                    bool m_congestionWindowHasBeenSet;

                    /**
                     * Send buffer (ms)
                     */
                    int64_t m_sendBuffer;
                    bool m_sendBufferHasBeenSet;

                    /**
                     * Receive buffer (ms)
                     */
                    int64_t m_recvBuffer;
                    bool m_recvBufferHasBeenSet;

                    /**
                     * Sending delay
                     */
                    int64_t m_sendLatency;
                    bool m_sendLatencyHasBeenSet;

                    /**
                     * Receiving delay
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSRTINFO_H_
