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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Two-way enterprise security group rules
                */
                class SecurityGroupBothWayInfo : public AbstractModel
                {
                public:
                    SecurityGroupBothWayInfo();
                    ~SecurityGroupBothWayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority
Note: This field may return `null`, indicating that no valid value was found.
                     * @return OrderIndex Priority
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置Priority
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _orderIndex Priority
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SourceId Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _sourceId Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Access source type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SourceType Access source type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Access source type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _sourceType Access source type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TargetId Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _targetId Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Access destination type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TargetType Access destination type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Access destination type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _targetType Access destination type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Protocol Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _protocol Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Destination port
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Port Destination port
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Destination port
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _port Destination port
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Policy. 1: block; 2: allow
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Strategy Policy. 1: block; 2: allow
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置Policy. 1: block; 2: allow
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _strategy Policy. 1: block; 2: allow
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStrategy(const uint64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 1 by default
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Direction Direction. 0: outbound; 1: inbound. 1 by default
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 1 by default
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _direction Direction. 0: outbound; 1: inbound. 1 by default
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取Description
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Detail Description
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Description
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _detail Description
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Toggle status. 0: off; 1: on
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Status Toggle status. 0: off; 1: on
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Toggle status. 0: off; 1: on
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _status Toggle status. 0: off; 1: on
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Indicates whether the rule is normal. 0: normal; 1: abnormal
Note: This field may return `null`, indicating that no valid value was found.
                     * @return IsNew Indicates whether the rule is normal. 0: normal; 1: abnormal
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetIsNew() const;

                    /**
                     * 设置Indicates whether the rule is normal. 0: normal; 1: abnormal
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _isNew Indicates whether the rule is normal. 0: normal; 1: abnormal
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetIsNew(const uint64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取One-way/two-way. 0: one-way; 1: two-way
Note: This field may return `null`, indicating that no valid value was found.
                     * @return BothWay One-way/two-way. 0: one-way; 1: two-way
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetBothWay() const;

                    /**
                     * 设置One-way/two-way. 0: one-way; 1: two-way
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _bothWay One-way/two-way. 0: one-way; 1: two-way
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetBothWay(const uint64_t& _bothWay);

                    /**
                     * 判断参数 BothWay 是否已赋值
                     * @return BothWay 是否已赋值
                     * 
                     */
                    bool BothWayHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcId VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _vpcId VPC ID
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Subnet ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SubnetId Subnet ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _subnetId Subnet ID
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Public IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PublicIp Public IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _publicIp Public IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PrivateIp Private IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _privateIp Private IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Masked address. Multiple addresses are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Cidr Masked address. Multiple addresses are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置Masked address. Multiple addresses are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _cidr Masked address. Multiple addresses are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取Port protocol template ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ServiceTemplateId Port protocol template ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置Port protocol template ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _serviceTemplateId Port protocol template ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether to use the port protocol template. 0: no; 1: yes
                     * @return ProtocolPortType Indicates whether to use the port protocol template. 0: no; 1: yes
                     * 
                     */
                    uint64_t GetProtocolPortType() const;

                    /**
                     * 设置Indicates whether to use the port protocol template. 0: no; 1: yes
                     * @param _protocolPortType Indicates whether to use the port protocol template. 0: no; 1: yes
                     * 
                     */
                    void SetProtocolPortType(const uint64_t& _protocolPortType);

                    /**
                     * 判断参数 ProtocolPortType 是否已赋值
                     * @return ProtocolPortType 是否已赋值
                     * 
                     */
                    bool ProtocolPortTypeHasBeenSet() const;

                private:

                    /**
                     * Priority
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Access source
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Access source type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Access destination type. Default: 0. 0: IP; 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: asset group
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Destination port
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Policy. 1: block; 2: allow
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound. 1 by default
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Description
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Toggle status. 0: off; 1: on
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates whether the rule is normal. 0: normal; 1: abnormal
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * One-way/two-way. 0: one-way; 1: two-way
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_bothWay;
                    bool m_bothWayHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Public IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP. Multiple IPs are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Masked address. Multiple addresses are separated by commas.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * Port protocol template ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * Indicates whether to use the port protocol template. 0: no; 1: yes
                     */
                    uint64_t m_protocolPortType;
                    bool m_protocolPortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPBOTHWAYINFO_H_
