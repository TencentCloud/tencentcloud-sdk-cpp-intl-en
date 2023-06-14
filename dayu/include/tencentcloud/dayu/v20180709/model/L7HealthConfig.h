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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L7HEALTHCONFIG_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L7HEALTHCONFIG_H_

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
                * Layer-7 health check configuration
                */
                class L7HealthConfig : public AbstractModel
                {
                public:
                    L7HealthConfig();
                    ~L7HealthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding protocol. Valid values: [http, https, http/https]
                     * @return Protocol Forwarding protocol. Valid values: [http, https, http/https]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values: [http, https, http/https]
                     * @param _protocol Forwarding protocol. Valid values: [http, https, http/https]
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
                     * 获取Forwarding domain name
                     * @return Domain Forwarding domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Forwarding domain name
                     * @param _domain Forwarding domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

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
                     * 获取Number of exceptions in times
                     * @return KickNum Number of exceptions in times
                     * 
                     */
                    uint64_t GetKickNum() const;

                    /**
                     * 设置Number of exceptions in times
                     * @param _kickNum Number of exceptions in times
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
                     * 获取Number of health checks in times
                     * @return AliveNum Number of health checks in times
                     * 
                     */
                    uint64_t GetAliveNum() const;

                    /**
                     * 设置Number of health checks in times
                     * @param _aliveNum Number of health checks in times
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
                     * 获取Health check detection method. Valid values: HEAD, GET. Default VALUE: HEAD
                     * @return Method Health check detection method. Valid values: HEAD, GET. Default VALUE: HEAD
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Health check detection method. Valid values: HEAD, GET. Default VALUE: HEAD
                     * @param _method Health check detection method. Valid values: HEAD, GET. Default VALUE: HEAD
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

                private:

                    /**
                     * Forwarding protocol. Valid values: [http, https, http/https]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

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
                     * Number of exceptions in times
                     */
                    uint64_t m_kickNum;
                    bool m_kickNumHasBeenSet;

                    /**
                     * Number of health checks in times
                     */
                    uint64_t m_aliveNum;
                    bool m_aliveNumHasBeenSet;

                    /**
                     * Health check detection method. Valid values: HEAD, GET. Default VALUE: HEAD
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L7HEALTHCONFIG_H_
