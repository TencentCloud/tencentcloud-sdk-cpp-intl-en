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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResetTrafficMirrorTarget request structure.
                */
                class ResetTrafficMirrorTargetRequest : public AbstractModel
                {
                public:
                    ResetTrafficMirrorTargetRequest();
                    ~ResetTrafficMirrorTargetRequest() = default;
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
                     * 获取Traffic mirroring receiving destination information.
                     * @return CollectorTarget Traffic mirroring receiving destination information.
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置Traffic mirroring receiving destination information.
                     * @param _collectorTarget Traffic mirroring receiving destination information.
                     * 
                     */
                    void SetCollectorTarget(const TrafficMirrorTarget& _collectorTarget);

                    /**
                     * 判断参数 CollectorTarget 是否已赋值
                     * @return CollectorTarget 是否已赋值
                     * 
                     */
                    bool CollectorTargetHasBeenSet() const;

                    /**
                     * 获取Subnet of the sender of the traffic mirroring collection traffic of the public IP address type.
                     * @return SubnetId Subnet of the sender of the traffic mirroring collection traffic of the public IP address type.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet of the sender of the traffic mirroring collection traffic of the public IP address type.
                     * @param _subnetId Subnet of the sender of the traffic mirroring collection traffic of the public IP address type.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Traffic mirroring instance ID.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * Traffic mirroring receiving destination information.
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * Subnet of the sender of the traffic mirroring collection traffic of the public IP address type.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_
