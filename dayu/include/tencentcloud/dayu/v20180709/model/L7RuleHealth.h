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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_

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
                * Layer-7 rule health check parameter
                */
                class L7RuleHealth : public AbstractModel
                {
                public:
                    L7RuleHealth();
                    ~L7RuleHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取HTTP request method. Valid values: [HEAD, GET]
                     * @return Method HTTP request method. Valid values: [HEAD, GET]
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置HTTP request method. Valid values: [HEAD, GET]
                     * @param _method HTTP request method. Valid values: [HEAD, GET]
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Healthy status code during health check. xx = 1, 2xx = 2, 3xx = 4, 4xx = 8, 5xx = 16. Multiple status code values are added up
                     * @return StatusCode Healthy status code during health check. xx = 1, 2xx = 2, 3xx = 4, 4xx = 8, 5xx = 16. Multiple status code values are added up
                     * 
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置Healthy status code during health check. xx = 1, 2xx = 2, 3xx = 4, 4xx = 8, 5xx = 16. Multiple status code values are added up
                     * @param _statusCode Healthy status code during health check. xx = 1, 2xx = 2, 3xx = 4, 4xx = 8, 5xx = 16. Multiple status code values are added up
                     * 
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取URL of checked directory. Default value: /
                     * @return Url URL of checked directory. Default value: /
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of checked directory. Default value: /
                     * @param _url URL of checked directory. Default value: /
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Configuration status. 0: normal, 1: configuring, 2: configuration failed
                     * @return Status Configuration status. 0: normal, 1: configuring, 2: configuration failed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Configuration status. 0: normal, 1: configuring, 2: configuration failed
                     * @param _status Configuration status. 0: normal, 1: configuring, 2: configuration failed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 1: enabled, 0: disabled
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

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
                     * HTTP request method. Valid values: [HEAD, GET]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Healthy status code during health check. xx = 1, 2xx = 2, 3xx = 4, 4xx = 8, 5xx = 16. Multiple status code values are added up
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * URL of checked directory. Default value: /
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Configuration status. 0: normal, 1: configuring, 2: configuration failed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEHEALTH_H_
