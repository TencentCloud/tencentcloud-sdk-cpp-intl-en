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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResetTrafficMirrorFilter request structure.
                */
                class ResetTrafficMirrorFilterRequest : public AbstractModel
                {
                public:
                    ResetTrafficMirrorFilterRequest();
                    ~ResetTrafficMirrorFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic mirroring instance ID.
                     * @return TrafficMirrorId Traffic mirroring instance ID.
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置Traffic mirroring instance ID.
                     * @param _trafficMirrorId Traffic mirroring instance ID.
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取NAT gateway instance ID to be filtered by traffic mirroring.
                     * @return NatId NAT gateway instance ID to be filtered by traffic mirroring.
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT gateway instance ID to be filtered by traffic mirroring.
                     * @param _natId NAT gateway instance ID to be filtered by traffic mirroring.
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取Five tuple rule to be filtered by traffic mirroring.
                     * @return CollectorNormalFilters Five tuple rule to be filtered by traffic mirroring.
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置Five tuple rule to be filtered by traffic mirroring.
                     * @param _collectorNormalFilters Five tuple rule to be filtered by traffic mirroring.
                     * 
                     */
                    void SetCollectorNormalFilters(const std::vector<TrafficMirrorFilter>& _collectorNormalFilters);

                    /**
                     * 判断参数 CollectorNormalFilters 是否已赋值
                     * @return CollectorNormalFilters 是否已赋值
                     * 
                     */
                    bool CollectorNormalFiltersHasBeenSet() const;

                private:

                    /**
                     * Traffic mirroring instance ID.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * NAT gateway instance ID to be filtered by traffic mirroring.
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * Five tuple rule to be filtered by traffic mirroring.
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_
