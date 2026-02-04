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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_

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
                * CheckTrafficMirror request structure.
                */
                class CheckTrafficMirrorRequest : public AbstractModel
                {
                public:
                    CheckTrafficMirrorRequest();
                    ~CheckTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic mirroring VPC.
                     * @return VpcId Traffic mirroring VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Traffic mirroring VPC.
                     * @param _vpcId Traffic mirroring VPC.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

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
                     * 获取Collector IP address list for traffic mirroring.
                     * @return CollectorSources Collector IP address list for traffic mirroring.
                     * 
                     */
                    std::vector<std::string> GetCollectorSources() const;

                    /**
                     * 设置Collector IP address list for traffic mirroring.
                     * @param _collectorSources Collector IP address list for traffic mirroring.
                     * 
                     */
                    void SetCollectorSources(const std::vector<std::string>& _collectorSources);

                    /**
                     * 判断参数 CollectorSources 是否已赋值
                     * @return CollectorSources 是否已赋值
                     * 
                     */
                    bool CollectorSourcesHasBeenSet() const;

                    /**
                     * 获取Receiver subnet for traffic mirroring.
                     * @return SubnetId Receiver subnet for traffic mirroring.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Receiver subnet for traffic mirroring.
                     * @param _subnetId Receiver subnet for traffic mirroring.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring collector.
                     * @return CollectorTarget Traffic mirroring collector.
                     * 
                     */
                    std::vector<TrafficMirrorTarget> GetCollectorTarget() const;

                    /**
                     * 设置Traffic mirroring collector.
                     * @param _collectorTarget Traffic mirroring collector.
                     * 
                     */
                    void SetCollectorTarget(const std::vector<TrafficMirrorTarget>& _collectorTarget);

                    /**
                     * 判断参数 CollectorTarget 是否已赋值
                     * @return CollectorTarget 是否已赋值
                     * 
                     */
                    bool CollectorTargetHasBeenSet() const;

                private:

                    /**
                     * Traffic mirroring VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Traffic mirroring instance ID.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * Collector IP address list for traffic mirroring.
                     */
                    std::vector<std::string> m_collectorSources;
                    bool m_collectorSourcesHasBeenSet;

                    /**
                     * Receiver subnet for traffic mirroring.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Traffic mirroring collector.
                     */
                    std::vector<TrafficMirrorTarget> m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_
