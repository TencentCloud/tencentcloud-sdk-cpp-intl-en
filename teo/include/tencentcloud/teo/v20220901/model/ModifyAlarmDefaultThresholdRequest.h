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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyAlarmDefaultThreshold request structure.
                */
                class ModifyAlarmDefaultThresholdRequest : public AbstractModel
                {
                public:
                    ModifyAlarmDefaultThresholdRequest();
                    ~ModifyAlarmDefaultThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     * @return ServiceType The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     * @param ServiceType The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The threshold in Mbps. Maximum value: 10.
                     * @return Threshold The threshold in Mbps. Maximum value: 10.
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置The threshold in Mbps. Maximum value: 10.
                     * @param Threshold The threshold in Mbps. Maximum value: 10.
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取The protection entity, which is a proxy ID when layer-4 protection is enabled, or a site name when layer-7 protection is on.
                     * @return Entity The protection entity, which is a proxy ID when layer-4 protection is enabled, or a site name when layer-7 protection is on.
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The protection entity, which is a proxy ID when layer-4 protection is enabled, or a site name when layer-7 protection is on.
                     * @param Entity The protection entity, which is a proxy ID when layer-4 protection is enabled, or a site name when layer-7 protection is on.
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * The alarm service type. Values:
<li>`ddos`: DDoS alarm service.</li>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The threshold in Mbps. Maximum value: 10.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * The protection entity, which is a proxy ID when layer-4 protection is enabled, or a site name when layer-7 protection is on.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_
