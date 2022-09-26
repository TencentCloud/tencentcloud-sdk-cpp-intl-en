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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L7RULEHEALTH_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L7RULEHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Health check parameters of layer-7 forwarding rules
                */
                class L7RuleHealth : public AbstractModel
                {
                public:
                    L7RuleHealth();
                    ~L7RuleHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration status. Values: `0` (normal), `1` (configuration in progress) and `2` (configuration failed).
                     * @return Status Configuration status. Values: `0` (normal), `1` (configuration in progress) and `2` (configuration failed).
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Configuration status. Values: `0` (normal), `1` (configuration in progress) and `2` (configuration failed).
                     * @param Status Configuration status. Values: `0` (normal), `1` (configuration in progress) and `2` (configuration failed).
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Switch. Values: `1`: Enable; `0`: Disable.
                     * @return Enable Switch. Values: `1`: Enable; `0`: Disable.
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Switch. Values: `1`: Enable; `0`: Disable.
                     * @param Enable Switch. Values: `1`: Enable; `0`: Disable.
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取ID of the rule
                     * @return RuleId ID of the rule
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置ID of the rule
                     * @param RuleId ID of the rule
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取HTTP request path. The default value is /.
                     * @return Url HTTP request path. The default value is /.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置HTTP request path. The default value is /.
                     * @param Url HTTP request path. The default value is /.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Health check interval. Unit: second.
                     * @return Interval Health check interval. Unit: second.
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Health check interval. Unit: second.
                     * @param Interval Health check interval. Unit: second.
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Healthy threshold, which specifies the number of consecutive successful health checks.
                     * @return AliveNum Healthy threshold, which specifies the number of consecutive successful health checks.
                     */
                    uint64_t GetAliveNum() const;

                    /**
                     * 设置Healthy threshold, which specifies the number of consecutive successful health checks.
                     * @param AliveNum Healthy threshold, which specifies the number of consecutive successful health checks.
                     */
                    void SetAliveNum(const uint64_t& _aliveNum);

                    /**
                     * 判断参数 AliveNum 是否已赋值
                     * @return AliveNum 是否已赋值
                     */
                    bool AliveNumHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold, which specifies the number of consecutive failed health checks.
                     * @return KickNum Unhealthy threshold, which specifies the number of consecutive failed health checks.
                     */
                    uint64_t GetKickNum() const;

                    /**
                     * 设置Unhealthy threshold, which specifies the number of consecutive failed health checks.
                     * @param KickNum Unhealthy threshold, which specifies the number of consecutive failed health checks.
                     */
                    void SetKickNum(const uint64_t& _kickNum);

                    /**
                     * 判断参数 KickNum 是否已赋值
                     * @return KickNum 是否已赋值
                     */
                    bool KickNumHasBeenSet() const;

                    /**
                     * 获取HTTP request method. Values: `HEAD` and `GET`.
                     * @return Method HTTP request method. Values: `HEAD` and `GET`.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置HTTP request method. Values: `HEAD` and `GET`.
                     * @param Method HTTP request method. Values: `HEAD` and `GET`.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Status code that signifies a normal state. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     * @return StatusCode Status code that signifies a normal state. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置Status code that signifies a normal state. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     * @param StatusCode Status code that signifies a normal state. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Whether to deploy both HTTP and HTTPS health check rules
                     * @return ProtocolFlag Whether to deploy both HTTP and HTTPS health check rules
                     */
                    uint64_t GetProtocolFlag() const;

                    /**
                     * 设置Whether to deploy both HTTP and HTTPS health check rules
                     * @param ProtocolFlag Whether to deploy both HTTP and HTTPS health check rules
                     */
                    void SetProtocolFlag(const uint64_t& _protocolFlag);

                    /**
                     * 判断参数 ProtocolFlag 是否已赋值
                     * @return ProtocolFlag 是否已赋值
                     */
                    bool ProtocolFlagHasBeenSet() const;

                    /**
                     * 获取Enables passive detection. Values: `1` (enable) and `0` (disable).
                     * @return PassiveEnable Enables passive detection. Values: `1` (enable) and `0` (disable).
                     */
                    uint64_t GetPassiveEnable() const;

                    /**
                     * 设置Enables passive detection. Values: `1` (enable) and `0` (disable).
                     * @param PassiveEnable Enables passive detection. Values: `1` (enable) and `0` (disable).
                     */
                    void SetPassiveEnable(const uint64_t& _passiveEnable);

                    /**
                     * 判断参数 PassiveEnable 是否已赋值
                     * @return PassiveEnable 是否已赋值
                     */
                    bool PassiveEnableHasBeenSet() const;

                    /**
                     * 获取Blocking period in the passive detection configuration
                     * @return BlockInter Blocking period in the passive detection configuration
                     */
                    uint64_t GetBlockInter() const;

                    /**
                     * 设置Blocking period in the passive detection configuration
                     * @param BlockInter Blocking period in the passive detection configuration
                     */
                    void SetBlockInter(const uint64_t& _blockInter);

                    /**
                     * 判断参数 BlockInter 是否已赋值
                     * @return BlockInter 是否已赋值
                     */
                    bool BlockInterHasBeenSet() const;

                    /**
                     * 获取Time interval between passive detections
                     * @return FailedCountInter Time interval between passive detections
                     */
                    uint64_t GetFailedCountInter() const;

                    /**
                     * 设置Time interval between passive detections
                     * @param FailedCountInter Time interval between passive detections
                     */
                    void SetFailedCountInter(const uint64_t& _failedCountInter);

                    /**
                     * 判断参数 FailedCountInter 是否已赋值
                     * @return FailedCountInter 是否已赋值
                     */
                    bool FailedCountInterHasBeenSet() const;

                    /**
                     * 获取Unhealthy threshold in the passive detection configuration
                     * @return FailedThreshold Unhealthy threshold in the passive detection configuration
                     */
                    uint64_t GetFailedThreshold() const;

                    /**
                     * 设置Unhealthy threshold in the passive detection configuration
                     * @param FailedThreshold Unhealthy threshold in the passive detection configuration
                     */
                    void SetFailedThreshold(const uint64_t& _failedThreshold);

                    /**
                     * 判断参数 FailedThreshold 是否已赋值
                     * @return FailedThreshold 是否已赋值
                     */
                    bool FailedThresholdHasBeenSet() const;

                    /**
                     * 获取Status code that signals that the passive detection considers the status normal. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     * @return PassiveStatusCode Status code that signals that the passive detection considers the status normal. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    uint64_t GetPassiveStatusCode() const;

                    /**
                     * 设置Status code that signals that the passive detection considers the status normal. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     * @param PassiveStatusCode Status code that signals that the passive detection considers the status normal. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    void SetPassiveStatusCode(const uint64_t& _passiveStatusCode);

                    /**
                     * 判断参数 PassiveStatusCode 是否已赋值
                     * @return PassiveStatusCode 是否已赋值
                     */
                    bool PassiveStatusCodeHasBeenSet() const;

                private:

                    /**
                     * Configuration status. Values: `0` (normal), `1` (configuration in progress) and `2` (configuration failed).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Switch. Values: `1`: Enable; `0`: Disable.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * ID of the rule
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * HTTP request path. The default value is /.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Health check interval. Unit: second.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Healthy threshold, which specifies the number of consecutive successful health checks.
                     */
                    uint64_t m_aliveNum;
                    bool m_aliveNumHasBeenSet;

                    /**
                     * Unhealthy threshold, which specifies the number of consecutive failed health checks.
                     */
                    uint64_t m_kickNum;
                    bool m_kickNumHasBeenSet;

                    /**
                     * HTTP request method. Values: `HEAD` and `GET`.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Status code that signifies a normal state. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Whether to deploy both HTTP and HTTPS health check rules
                     */
                    uint64_t m_protocolFlag;
                    bool m_protocolFlagHasBeenSet;

                    /**
                     * Enables passive detection. Values: `1` (enable) and `0` (disable).
                     */
                    uint64_t m_passiveEnable;
                    bool m_passiveEnableHasBeenSet;

                    /**
                     * Blocking period in the passive detection configuration
                     */
                    uint64_t m_blockInter;
                    bool m_blockInterHasBeenSet;

                    /**
                     * Time interval between passive detections
                     */
                    uint64_t m_failedCountInter;
                    bool m_failedCountInterHasBeenSet;

                    /**
                     * Unhealthy threshold in the passive detection configuration
                     */
                    uint64_t m_failedThreshold;
                    bool m_failedThresholdHasBeenSet;

                    /**
                     * Status code that signals that the passive detection considers the status normal. Values: `1` (1xx), `2` (2xx), `4` (3xx), `8` (4xx), and `16` (5xx).
                     */
                    uint64_t m_passiveStatusCode;
                    bool m_passiveStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L7RULEHEALTH_H_
