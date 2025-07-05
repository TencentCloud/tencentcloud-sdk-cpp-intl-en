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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSRTINFO_H_
