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
                * SRT information of the real-time stream status query API.
                */
                class FlowRealtimeStatusSRT : public AbstractModel
                {
                public:
                    FlowRealtimeStatusSRT();
                    ~FlowRealtimeStatusSRT() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Delay in ms.
                     * @return Latency Delay in ms.
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Delay in ms.
                     * @param _latency Delay in ms.
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
                     * 获取RTT in ms.
                     * @return RTT RTT in ms.
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置RTT in ms.
                     * @param _rTT RTT in ms.
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
                     * 获取Number of packets sent or received in real time.
                     * @return Packets Number of packets sent or received in real time.
                     * 
                     */
                    int64_t GetPackets() const;

                    /**
                     * 设置Number of packets sent or received in real time.
                     * @param _packets Number of packets sent or received in real time.
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
                     * 获取Packet loss rate.
                     * @return PacketLossRate Packet loss rate.
                     * 
                     */
                    double GetPacketLossRate() const;

                    /**
                     * 设置Packet loss rate.
                     * @param _packetLossRate Packet loss rate.
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
                     * 获取Retransmission rate.
                     * @return RetransmitRate Retransmission rate.
                     * 
                     */
                    double GetRetransmitRate() const;

                    /**
                     * 设置Retransmission rate.
                     * @param _retransmitRate Retransmission rate.
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
                     * 获取Real-time packet loss count.
                     * @return DroppedPackets Real-time packet loss count.
                     * 
                     */
                    int64_t GetDroppedPackets() const;

                    /**
                     * 设置Real-time packet loss count.
                     * @param _droppedPackets Real-time packet loss count.
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
                     * 获取Whether to encrypt. On | Off.
                     * @return Encryption Whether to encrypt. On | Off.
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置Whether to encrypt. On | Off.
                     * @param _encryption Whether to encrypt. On | Off.
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
                     * Delay in ms.
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * RTT in ms.
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * Number of packets sent or received in real time.
                     */
                    int64_t m_packets;
                    bool m_packetsHasBeenSet;

                    /**
                     * Packet loss rate.
                     */
                    double m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                    /**
                     * Retransmission rate.
                     */
                    double m_retransmitRate;
                    bool m_retransmitRateHasBeenSet;

                    /**
                     * Real-time packet loss count.
                     */
                    int64_t m_droppedPackets;
                    bool m_droppedPacketsHasBeenSet;

                    /**
                     * Whether to encrypt. On | Off.
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSSRT_H_
