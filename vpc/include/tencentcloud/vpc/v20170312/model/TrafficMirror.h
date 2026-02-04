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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTargetResourceInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Traffic mirroring instance.
                */
                class TrafficMirror : public AbstractModel
                {
                public:
                    TrafficMirror();
                    ~TrafficMirror() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Traffic mirroring instance.
                     * @return TrafficMirrorId Traffic mirroring instance.
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置Traffic mirroring instance.
                     * @param _trafficMirrorId Traffic mirroring instance.
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
                     * 获取Traffic mirroring status.
                     * @return State Traffic mirroring status.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Traffic mirroring status.
                     * @param _state Traffic mirroring status.
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
                     * 获取Traffic mirroring collection direction.
                     * @return Direction Traffic mirroring collection direction.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Traffic mirroring collection direction.
                     * @param _direction Traffic mirroring collection direction.
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
                     * 获取NAT gateway instance ID filtered by traffic mirroring.
                     * @return NatId NAT gateway instance ID filtered by traffic mirroring.
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT gateway instance ID filtered by traffic mirroring.
                     * @param _natId NAT gateway instance ID filtered by traffic mirroring.
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
                     * 获取Five tuple rule filtered by traffic mirroring.
                     * @return CollectorNormalFilters Five tuple rule filtered by traffic mirroring.
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置Five tuple rule filtered by traffic mirroring.
                     * @param _collectorNormalFilters Five tuple rule filtered by traffic mirroring.
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
                     * 获取Traffic mirroring receiving target.
                     * @return CollectorTarget Traffic mirroring receiving target.
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置Traffic mirroring receiving target.
                     * @param _collectorTarget Traffic mirroring receiving target.
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
                     * 获取Traffic mirroring creation time.
                     * @return CreateTime Traffic mirroring creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Traffic mirroring creation time.
                     * @param _createTime Traffic mirroring creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring type.
                     * @return Type Traffic mirroring type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Traffic mirroring type.
                     * @param _type Traffic mirroring type.
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
                     * 获取Traffic mirroring subnet ID.
                     * @return SubnetId Traffic mirroring subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Traffic mirroring subnet ID.
                     * @param _subnetId Traffic mirroring subnet ID.
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
                     * 获取Resource information of the traffic mirroring receiving target, returned when the receiving target is ENI or CLB.
                     * @return TargetInfo Resource information of the traffic mirroring receiving target, returned when the receiving target is ENI or CLB.
                     * 
                     */
                    std::vector<TrafficMirrorTargetResourceInfo> GetTargetInfo() const;

                    /**
                     * 设置Resource information of the traffic mirroring receiving target, returned when the receiving target is ENI or CLB.
                     * @param _targetInfo Resource information of the traffic mirroring receiving target, returned when the receiving target is ENI or CLB.
                     * 
                     */
                    void SetTargetInfo(const std::vector<TrafficMirrorTargetResourceInfo>& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Traffic mirroring instance.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

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
                     * Traffic mirroring status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Traffic mirroring collection direction.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Traffic mirroring collection object.
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                    /**
                     * NAT gateway instance ID filtered by traffic mirroring.
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * Five tuple rule filtered by traffic mirroring.
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                    /**
                     * Traffic mirroring receiving target.
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * Traffic mirroring creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Traffic mirroring type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Traffic mirroring subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Resource information of the traffic mirroring receiving target, returned when the receiving target is ENI or CLB.
                     */
                    std::vector<TrafficMirrorTargetResourceInfo> m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_
