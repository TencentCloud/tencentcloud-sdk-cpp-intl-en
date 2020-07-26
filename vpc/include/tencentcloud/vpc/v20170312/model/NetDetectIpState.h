/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The verification result of the network detection destination IP address.
                */
                class NetDetectIpState : public AbstractModel
                {
                public:
                    NetDetectIpState();
                    ~NetDetectIpState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The destination IPv4 address of network detection.
                     * @return DetectDestinationIp The destination IPv4 address of network detection.
                     */
                    std::string GetDetectDestinationIp() const;

                    /**
                     * 设置The destination IPv4 address of network detection.
                     * @param DetectDestinationIp The destination IPv4 address of network detection.
                     */
                    void SetDetectDestinationIp(const std::string& _detectDestinationIp);

                    /**
                     * 判断参数 DetectDestinationIp 是否已赋值
                     * @return DetectDestinationIp 是否已赋值
                     */
                    bool DetectDestinationIpHasBeenSet() const;

                    /**
                     * 获取The detection result.
0: successful;
-1: no packet loss occurred during routing;
-2: packet loss occurred when outbound traffic is blocked by the ACL;
-3: packet loss occurred when inbound traffic is blocked by the ACL;
-4: other errors.
                     * @return State The detection result.
0: successful;
-1: no packet loss occurred during routing;
-2: packet loss occurred when outbound traffic is blocked by the ACL;
-3: packet loss occurred when inbound traffic is blocked by the ACL;
-4: other errors.
                     */
                    int64_t GetState() const;

                    /**
                     * 设置The detection result.
0: successful;
-1: no packet loss occurred during routing;
-2: packet loss occurred when outbound traffic is blocked by the ACL;
-3: packet loss occurred when inbound traffic is blocked by the ACL;
-4: other errors.
                     * @param State The detection result.
0: successful;
-1: no packet loss occurred during routing;
-2: packet loss occurred when outbound traffic is blocked by the ACL;
-3: packet loss occurred when inbound traffic is blocked by the ACL;
-4: other errors.
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The latency. Unit: ms.
                     * @return Delay The latency. Unit: ms.
                     */
                    uint64_t GetDelay() const;

                    /**
                     * 设置The latency. Unit: ms.
                     * @param Delay The latency. Unit: ms.
                     */
                    void SetDelay(const uint64_t& _delay);

                    /**
                     * 判断参数 Delay 是否已赋值
                     * @return Delay 是否已赋值
                     */
                    bool DelayHasBeenSet() const;

                    /**
                     * 获取The packet loss rate.
                     * @return PacketLossRate The packet loss rate.
                     */
                    uint64_t GetPacketLossRate() const;

                    /**
                     * 设置The packet loss rate.
                     * @param PacketLossRate The packet loss rate.
                     */
                    void SetPacketLossRate(const uint64_t& _packetLossRate);

                    /**
                     * 判断参数 PacketLossRate 是否已赋值
                     * @return PacketLossRate 是否已赋值
                     */
                    bool PacketLossRateHasBeenSet() const;

                private:

                    /**
                     * The destination IPv4 address of network detection.
                     */
                    std::string m_detectDestinationIp;
                    bool m_detectDestinationIpHasBeenSet;

                    /**
                     * The detection result.
0: successful;
-1: no packet loss occurred during routing;
-2: packet loss occurred when outbound traffic is blocked by the ACL;
-3: packet loss occurred when inbound traffic is blocked by the ACL;
-4: other errors.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The latency. Unit: ms.
                     */
                    uint64_t m_delay;
                    bool m_delayHasBeenSet;

                    /**
                     * The packet loss rate.
                     */
                    uint64_t m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_
