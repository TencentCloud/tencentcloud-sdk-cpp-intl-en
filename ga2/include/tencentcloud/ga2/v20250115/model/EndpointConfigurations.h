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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Terminal node configuration
                */
                class EndpointConfigurations : public AbstractModel
                {
                public:
                    EndpointConfigurations();
                    ~EndpointConfigurations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Domain type. Available values: 'Domain', 'PublicIp'.</p>
                     * @return EndpointType <p>Domain type. Available values: 'Domain', 'PublicIp'.</p>
                     * 
                     */
                    std::string GetEndpointType() const;

                    /**
                     * 设置<p>Domain type. Available values: 'Domain', 'PublicIp'.</p>
                     * @param _endpointType <p>Domain type. Available values: 'Domain', 'PublicIp'.</p>
                     * 
                     */
                    void SetEndpointType(const std::string& _endpointType);

                    /**
                     * 判断参数 EndpointType 是否已赋值
                     * @return EndpointType 是否已赋值
                     * 
                     */
                    bool EndpointTypeHasBeenSet() const;

                    /**
                     * 获取<p>Domain name.</p>
                     * @return EndpointService <p>Domain name.</p>
                     * 
                     */
                    std::string GetEndpointService() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _endpointService <p>Domain name.</p>
                     * 
                     */
                    void SetEndpointService(const std::string& _endpointService);

                    /**
                     * 判断参数 EndpointService 是否已赋值
                     * @return EndpointService 是否已赋值
                     * 
                     */
                    bool EndpointServiceHasBeenSet() const;

                    /**
                     * 获取<p>Weight.</p>
                     * @return Weight <p>Weight.</p>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>Weight.</p>
                     * @param _weight <p>Weight.</p>
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>Health check status; HEALTH: healthy; UNHEALTH: unhealthy.</p>
                     * @return HealthCheckStatus <p>Health check status; HEALTH: healthy; UNHEALTH: unhealthy.</p>
                     * 
                     */
                    std::string GetHealthCheckStatus() const;

                    /**
                     * 设置<p>Health check status; HEALTH: healthy; UNHEALTH: unhealthy.</p>
                     * @param _healthCheckStatus <p>Health check status; HEALTH: healthy; UNHEALTH: unhealthy.</p>
                     * 
                     */
                    void SetHealthCheckStatus(const std::string& _healthCheckStatus);

                    /**
                     * 判断参数 HealthCheckStatus 是否已赋值
                     * @return HealthCheckStatus 是否已赋值
                     * 
                     */
                    bool HealthCheckStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Domain type. Available values: 'Domain', 'PublicIp'.</p>
                     */
                    std::string m_endpointType;
                    bool m_endpointTypeHasBeenSet;

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_endpointService;
                    bool m_endpointServiceHasBeenSet;

                    /**
                     * <p>Weight.</p>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Health check status; HEALTH: healthy; UNHEALTH: unhealthy.</p>
                     */
                    std::string m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_
