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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Details of target group health check
                */
                class TargetGroupHealthCheck : public AbstractModel
                {
                public:
                    TargetGroupHealthCheck();
                    ~TargetGroupHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the health check.
                     * @return HealthSwitch Whether to enable the health check.
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置Whether to enable the health check.
                     * @param _healthSwitch Whether to enable the health check.
                     * 
                     */
                    void SetHealthSwitch(const bool& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取Protocol used for health check, which supports PING and TCP and is PING by default.

- PING: icmp
- TCP: tcp
                     * @return Protocol Protocol used for health check, which supports PING and TCP and is PING by default.

- PING: icmp
- TCP: tcp
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol used for health check, which supports PING and TCP and is PING by default.

- PING: icmp
- TCP: tcp
                     * @param _protocol Protocol used for health check, which supports PING and TCP and is PING by default.

- PING: icmp
- TCP: tcp
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
                     * 获取Health check port, which is required when the probe protocol is TCP.
                     * @return Port Health check port, which is required when the probe protocol is TCP.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Health check port, which is required when the probe protocol is TCP.
                     * @param _port Health check port, which is required when the probe protocol is TCP.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * @return Timeout Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * @param _timeout Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * @return IntervalTime Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * @param _intervalTime Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @return HealthNum Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @param _healthNum Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @return UnHealthNum Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * @param _unHealthNum Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     * 
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     * 
                     */
                    bool UnHealthNumHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the health check.
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Protocol used for health check, which supports PING and TCP and is PING by default.

- PING: icmp
- TCP: tcp
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Health check port, which is required when the probe protocol is TCP.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Health check timeout. The default is 2 seconds. Value range: 2-30 seconds.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Detection interval time. The default is 5 seconds. Value range: 2-300 seconds.
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Health detection threshold. The default is 3 times. Value range: 2-10 times.
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * Unhealth detection threshold. The default is 3 times. Value range: 2-10 times.
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPHEALTHCHECK_H_
