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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSSRT_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSSRT_H_

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
                * The real-time SRT streaming information of a flow.
                */
                class FlowRealtimeStatusSRT : public AbstractModel
                {
                public:
                    FlowRealtimeStatusSRT();
                    ~FlowRealtimeStatusSRT() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The latency (ms).
                     * @return Latency The latency (ms).
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置The latency (ms).
                     * @param _latency The latency (ms).
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取RTT (ms).
                     * @return RTT RTT (ms).
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置RTT (ms).
                     * @param _rTT RTT (ms).
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
                     * 获取The number of packets sent or received.
                     * @return Packets The number of packets sent or received.
                     * 
                     */
                    int64_t GetPackets() const;

                    /**
                     * 设置The number of packets sent or received.
                     * @param _packets The number of packets sent or received.
                     * 
                     */
                    void SetPackets(const int64_t& _packets);

                    /**
                     * 判断参数 Packets 是否已赋值
                     * @return Packets 是否已赋值
                     * 
                     */
                    bool PacketsHasBeenSet() const;

                    /**
                     * 获取The packet loss rate.
                     * @return PacketLossRate The packet loss rate.
                     * 
                     */
                    double GetPacketLossRate() const;

                    /**
                     * 设置The packet loss rate.
                     * @param _packetLossRate The packet loss rate.
                     * 
                     */
                    void SetPacketLossRate(const double& _packetLossRate);

                    /**
                     * 判断参数 PacketLossRate 是否已赋值
                     * @return PacketLossRate 是否已赋值
                     * 
                     */
                    bool PacketLossRateHasBeenSet() const;

                    /**
                     * 获取The retransmission rate.
                     * @return RetransmitRate The retransmission rate.
                     * 
                     */
                    double GetRetransmitRate() const;

                    /**
                     * 设置The retransmission rate.
                     * @param _retransmitRate The retransmission rate.
                     * 
                     */
                    void SetRetransmitRate(const double& _retransmitRate);

                    /**
                     * 判断参数 RetransmitRate 是否已赋值
                     * @return RetransmitRate 是否已赋值
                     * 
                     */
                    bool RetransmitRateHasBeenSet() const;

                    /**
                     * 获取The number of packets dropped.
                     * @return DroppedPackets The number of packets dropped.
                     * 
                     */
                    int64_t GetDroppedPackets() const;

                    /**
                     * 设置The number of packets dropped.
                     * @param _droppedPackets The number of packets dropped.
                     * 
                     */
                    void SetDroppedPackets(const int64_t& _droppedPackets);

                    /**
                     * 判断参数 DroppedPackets 是否已赋值
                     * @return DroppedPackets 是否已赋值
                     * 
                     */
                    bool DroppedPacketsHasBeenSet() const;

                    /**
                     * 获取Whether to encrypt the stream. Valid values: On, Off.
                     * @return Encryption Whether to encrypt the stream. Valid values: On, Off.
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置Whether to encrypt the stream. Valid values: On, Off.
                     * @param _encryption Whether to encrypt the stream. Valid values: On, Off.
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * The latency (ms).
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * RTT (ms).
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * The number of packets sent or received.
                     */
                    int64_t m_packets;
                    bool m_packetsHasBeenSet;

                    /**
                     * The packet loss rate.
                     */
                    double m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                    /**
                     * The retransmission rate.
                     */
                    double m_retransmitRate;
                    bool m_retransmitRateHasBeenSet;

                    /**
                     * The number of packets dropped.
                     */
                    int64_t m_droppedPackets;
                    bool m_droppedPacketsHasBeenSet;

                    /**
                     * Whether to encrypt the stream. Valid values: On, Off.
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSSRT_H_
