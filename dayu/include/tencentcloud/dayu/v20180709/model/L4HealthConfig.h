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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Layer-4 health check configuration
                */
                class L4HealthConfig : public AbstractModel
                {
                public:
                    L4HealthConfig();
                    ~L4HealthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding protocol. Valid values: [TCP, UDP]
                     * @return Protocol Forwarding protocol. Valid values: [TCP, UDP]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values: [TCP, UDP]
                     * @param _protocol Forwarding protocol. Valid values: [TCP, UDP]
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Forwarding port
                     * @return VirtualPort Forwarding port
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置Forwarding port
                     * @param _virtualPort Forwarding port
                     * 
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     * 
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取1: enabled, 0: disabled
                     * @return Enable 1: enabled, 0: disabled
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置1: enabled, 0: disabled
                     * @param _enable 1: enabled, 0: disabled
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Response timeout period in seconds
                     * @return TimeOut Response timeout period in seconds
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置Response timeout period in seconds
                     * @param _timeOut Response timeout period in seconds
                     * 
                     */
                    void SetTimeOut(const uint64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取Detection interval in seconds
                     * @return Interval Detection interval in seconds
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Detection interval in seconds
                     * @param _interval Detection interval in seconds
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold in times.
                     * @return KickNum Unhealthy threshold in times.
                     * 
                     */
                    uint64_t GetKickNum() const;

                    /**
                     * 设置Unhealthy threshold in times.
                     * @param _kickNum Unhealthy threshold in times.
                     * 
                     */
                    void SetKickNum(const uint64_t& _kickNum);

                    /**
                     * 判断参数 KickNum 是否已赋值
                     * @return KickNum 是否已赋值
                     * 
                     */
                    bool KickNumHasBeenSet() const;

                    /**
                     * 获取Healthy threshold in times.
                     * @return AliveNum Healthy threshold in times.
                     * 
                     */
                    uint64_t GetAliveNum() const;

                    /**
                     * 设置Healthy threshold in times.
                     * @param _aliveNum Healthy threshold in times.
                     * 
                     */
                    void SetAliveNum(const uint64_t& _aliveNum);

                    /**
                     * 判断参数 AliveNum 是否已赋值
                     * @return AliveNum 是否已赋值
                     * 
                     */
                    bool AliveNumHasBeenSet() const;

                    /**
                     * 获取Session persistence duration in seconds
                     * @return KeepTime Session persistence duration in seconds
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置Session persistence duration in seconds
                     * @param _keepTime Session persistence duration in seconds
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                private:

                    /**
                     * Forwarding protocol. Valid values: [TCP, UDP]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding port
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * 1: enabled, 0: disabled
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Response timeout period in seconds
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * Detection interval in seconds
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Unhealthy threshold in times.
                     */
                    uint64_t m_kickNum;
                    bool m_kickNumHasBeenSet;

                    /**
                     * Healthy threshold in times.
                     */
                    uint64_t m_aliveNum;
                    bool m_aliveNumHasBeenSet;

                    /**
                     * Session persistence duration in seconds
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_
