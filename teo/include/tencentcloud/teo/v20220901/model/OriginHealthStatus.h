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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Health status of origin servers in an origin server group.
                */
                class OriginHealthStatus : public AbstractModel
                {
                public:
                    OriginHealthStatus();
                    ~OriginHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server.
                     * @return Origin Origin server.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server.
                     * @param _origin Origin server.
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Origin server health status. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>

                     * @return Healthy Origin server health status. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>

                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置Origin server health status. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>

                     * @param _healthy Origin server health status. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>

                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                private:

                    /**
                     * Origin server.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Origin server health status. Valid values:
<li>Healthy: healthy.</li>
<li>Unhealthy: unhealthy.</li>
<li>Undetected: no data detected.</li>

                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_
