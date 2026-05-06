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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Kong gateway proactive health check configuration
                */
                class KongActiveHealthCheck : public AbstractModel
                {
                public:
                    KongActiveHealthCheck();
                    ~KongActiveHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Probe interval for active health check in seconds. 0 means disabled.
                     * @return HealthyInterval Probe interval for active health check in seconds. 0 means disabled.
                     * 
                     */
                    uint64_t GetHealthyInterval() const;

                    /**
                     * 设置Probe interval for active health check in seconds. 0 means disabled.
                     * @param _healthyInterval Probe interval for active health check in seconds. 0 means disabled.
                     * 
                     */
                    void SetHealthyInterval(const uint64_t& _healthyInterval);

                    /**
                     * 判断参数 HealthyInterval 是否已赋值
                     * @return HealthyInterval 是否已赋值
                     * 
                     */
                    bool HealthyIntervalHasBeenSet() const;

                    /**
                     * 获取Proactive health check exception probe interval, unit: second. 0 indicates disabled.
                     * @return UnHealthyInterval Proactive health check exception probe interval, unit: second. 0 indicates disabled.
                     * 
                     */
                    uint64_t GetUnHealthyInterval() const;

                    /**
                     * 设置Proactive health check exception probe interval, unit: second. 0 indicates disabled.
                     * @param _unHealthyInterval Proactive health check exception probe interval, unit: second. 0 indicates disabled.
                     * 
                     */
                    void SetUnHealthyInterval(const uint64_t& _unHealthyInterval);

                    /**
                     * 判断参数 UnHealthyInterval 是否已赋值
                     * @return UnHealthyInterval 是否已赋值
                     * 
                     */
                    bool UnHealthyIntervalHasBeenSet() const;

                    /**
                     * 获取Path used in GET HTTP request to run as a proactive health check probe. Default: "/".
                     * @return HttpPath Path used in GET HTTP request to run as a proactive health check probe. Default: "/".
                     * 
                     */
                    std::string GetHttpPath() const;

                    /**
                     * 设置Path used in GET HTTP request to run as a proactive health check probe. Default: "/".
                     * @param _httpPath Path used in GET HTTP request to run as a proactive health check probe. Default: "/".
                     * 
                     */
                    void SetHttpPath(const std::string& _httpPath);

                    /**
                     * 判断参数 HttpPath 是否已赋值
                     * @return HttpPath 是否已赋值
                     * 
                     */
                    bool HttpPathHasBeenSet() const;

                    /**
                     * 获取Timeout for GET HTTP requests, unit: seconds. Default 60.
                     * @return Timeout Timeout for GET HTTP requests, unit: seconds. Default 60.
                     * 
                     */
                    double GetTimeout() const;

                    /**
                     * 设置Timeout for GET HTTP requests, unit: seconds. Default 60.
                     * @param _timeout Timeout for GET HTTP requests, unit: seconds. Default 60.
                     * 
                     */
                    void SetTimeout(const double& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Probe interval for active health check in seconds. 0 means disabled.
                     */
                    uint64_t m_healthyInterval;
                    bool m_healthyIntervalHasBeenSet;

                    /**
                     * Proactive health check exception probe interval, unit: second. 0 indicates disabled.
                     */
                    uint64_t m_unHealthyInterval;
                    bool m_unHealthyIntervalHasBeenSet;

                    /**
                     * Path used in GET HTTP request to run as a proactive health check probe. Default: "/".
                     */
                    std::string m_httpPath;
                    bool m_httpPathHasBeenSet;

                    /**
                     * Timeout for GET HTTP requests, unit: seconds. Default 60.
                     */
                    double m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_
