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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateTrafficMirror request structure.
                */
                class CreateTrafficMirrorRequest : public AbstractModel
                {
                public:
                    CreateTrafficMirrorRequest();
                    ~CreateTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
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
                     * 获取Traffic mirroring name.
                     * @return TrafficMirrorName Traffic mirroring name.
                     * 
                     */
                    std::string GetTrafficMirrorName() const;

                    /**
                     * 设置Traffic mirroring name.
                     * @param _trafficMirrorName Traffic mirroring name.
                     * 
                     */
                    void SetTrafficMirrorName(const std::string& _trafficMirrorName);

                    /**
                     * 判断参数 TrafficMirrorName 是否已赋值
                     * @return TrafficMirrorName 是否已赋值
                     * 
                     */
                    bool TrafficMirrorNameHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring description.
                     * @return TrafficMirrorDescribe Traffic mirroring description.
                     * 
                     */
                    std::string GetTrafficMirrorDescribe() const;

                    /**
                     * 设置Traffic mirroring description.
                     * @param _trafficMirrorDescribe Traffic mirroring description.
                     * 
                     */
                    void SetTrafficMirrorDescribe(const std::string& _trafficMirrorDescribe);

                    /**
                     * 判断参数 TrafficMirrorDescribe 是否已赋值
                     * @return TrafficMirrorDescribe 是否已赋值
                     * 
                     */
                    bool TrafficMirrorDescribeHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring status. Valid values: RUNNING/STOPED (VPC) and RUNNING (public IP address). It is required when VPC traffic mirroring is collected.
                     * @return State Traffic mirroring status. Valid values: RUNNING/STOPED (VPC) and RUNNING (public IP address). It is required when VPC traffic mirroring is collected.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Traffic mirroring status. Valid values: RUNNING/STOPED (VPC) and RUNNING (public IP address). It is required when VPC traffic mirroring is collected.
                     * @param _state Traffic mirroring status. Valid values: RUNNING/STOPED (VPC) and RUNNING (public IP address). It is required when VPC traffic mirroring is collected.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring collection direction. Valid values: EGRESS/INGRESS/ALL (VPC) and ALL (public IP address).
                     * @return Direction Traffic mirroring collection direction. Valid values: EGRESS/INGRESS/ALL (VPC) and ALL (public IP address).
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Traffic mirroring collection direction. Valid values: EGRESS/INGRESS/ALL (VPC) and ALL (public IP address).
                     * @param _direction Traffic mirroring collection direction. Valid values: EGRESS/INGRESS/ALL (VPC) and ALL (public IP address).
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring collection object.
                     * @return CollectorSrcs Traffic mirroring collection object.
                     * 
                     */
                    std::vector<std::string> GetCollectorSrcs() const;

                    /**
                     * 设置Traffic mirroring collection object.
                     * @param _collectorSrcs Traffic mirroring collection object.
                     * 
                     */
                    void SetCollectorSrcs(const std::vector<std::string>& _collectorSrcs);

                    /**
                     * 判断参数 CollectorSrcs 是否已赋值
                     * @return CollectorSrcs 是否已赋值
                     * 
                     */
                    bool CollectorSrcsHasBeenSet() const;

                    /**
                     * 获取NAT gateway instance filtered by traffic mirroring.
                     * @return NatId NAT gateway instance filtered by traffic mirroring.
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT gateway instance filtered by traffic mirroring.
                     * @param _natId NAT gateway instance filtered by traffic mirroring.
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
                     * 获取Five tuple rule to be filtered.
                     * @return CollectorNormalFilters Five tuple rule to be filtered.
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置Five tuple rule to be filtered.
                     * @param _collectorNormalFilters Five tuple rule to be filtered.
                     * 
                     */
                    void SetCollectorNormalFilters(const std::vector<TrafficMirrorFilter>& _collectorNormalFilters);

                    /**
                     * 判断参数 CollectorNormalFilters 是否已赋值
                     * @return CollectorNormalFilters 是否已赋值
                     * 
                     */
                    bool CollectorNormalFiltersHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring destination address.
                     * @return CollectorTarget Traffic mirroring destination address.
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置Traffic mirroring destination address.
                     * @param _collectorTarget Traffic mirroring destination address.
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
                     * 获取Subnet ID of the sender of the traffic mirroring collection traffic.
                     * @return SubnetId Subnet ID of the sender of the traffic mirroring collection traffic.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the sender of the traffic mirroring collection traffic.
                     * @param _subnetId Subnet ID of the sender of the traffic mirroring collection traffic.
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
                     * 获取Created traffic mirroring type. Valid values: VPC and PUBLICIP. Default value: VPC.
                     * @return Type Created traffic mirroring type. Valid values: VPC and PUBLICIP. Default value: VPC.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Created traffic mirroring type. Valid values: VPC and PUBLICIP. Default value: VPC.
                     * @param _type Created traffic mirroring type. Valid values: VPC and PUBLICIP. Default value: VPC.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specifies the list of bound tags. For example, [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Specifies the list of bound tags. For example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Specifies the list of bound tags. For example, [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Specifies the list of bound tags. For example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Traffic mirroring name.
                     */
                    std::string m_trafficMirrorName;
                    bool m_trafficMirrorNameHasBeenSet;

                    /**
                     * Traffic mirroring description.
                     */
                    std::string m_trafficMirrorDescribe;
                    bool m_trafficMirrorDescribeHasBeenSet;

                    /**
                     * Traffic mirroring status. Valid values: RUNNING/STOPED (VPC) and RUNNING (public IP address). It is required when VPC traffic mirroring is collected.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Traffic mirroring collection direction. Valid values: EGRESS/INGRESS/ALL (VPC) and ALL (public IP address).
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Traffic mirroring collection object.
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                    /**
                     * NAT gateway instance filtered by traffic mirroring.
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * Five tuple rule to be filtered.
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                    /**
                     * Traffic mirroring destination address.
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * Subnet ID of the sender of the traffic mirroring collection traffic.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Created traffic mirroring type. Valid values: VPC and PUBLICIP. Default value: VPC.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the list of bound tags. For example, [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_
