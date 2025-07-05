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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Health status of origin servers in each health check region.
                */
                class CheckRegionHealthStatus : public AbstractModel
                {
                public:
                    CheckRegionHealthStatus();
                    ~CheckRegionHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check region, which is a two-letter code according to ISO-3166-1.
                     * @return Region Health check region, which is a two-letter code according to ISO-3166-1.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Health check region, which is a two-letter code according to ISO-3166-1.
                     * @param _region Health check region, which is a two-letter code according to ISO-3166-1.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Health status of origin servers in a single health check region. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>Note: If all origin servers in a single health check region are healthy, the status is healthy; otherwise, it is unhealthy.
                     * @return Healthy Health status of origin servers in a single health check region. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>Note: If all origin servers in a single health check region are healthy, the status is healthy; otherwise, it is unhealthy.
                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置Health status of origin servers in a single health check region. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>Note: If all origin servers in a single health check region are healthy, the status is healthy; otherwise, it is unhealthy.
                     * @param _healthy Health status of origin servers in a single health check region. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>Note: If all origin servers in a single health check region are healthy, the status is healthy; otherwise, it is unhealthy.
                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Origin server health status.
                     * @return OriginHealthStatus Origin server health status.
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置Origin server health status.
                     * @param _originHealthStatus Origin server health status.
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                private:

                    /**
                     * Health check region, which is a two-letter code according to ISO-3166-1.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Health status of origin servers in a single health check region. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>Note: If all origin servers in a single health check region are healthy, the status is healthy; otherwise, it is unhealthy.
                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * Origin server health status.
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_
