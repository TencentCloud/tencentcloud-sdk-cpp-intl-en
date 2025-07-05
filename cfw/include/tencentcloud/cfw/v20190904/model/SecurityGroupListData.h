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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPLISTDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupBothWayInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Security group list data
                */
                class SecurityGroupListData : public AbstractModel
                {
                public:
                    SecurityGroupListData();
                    ~SecurityGroupListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority
                     * @return OrderIndex Priority
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置Priority
                     * @param _orderIndex Priority
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
                     * @return SourceId Access source
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Access source
                     * @param _sourceId Access source
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
                     * 获取Access source type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: Resource group
                     * @return SourceType Access source type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: Resource group
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Access source type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: Resource group
                     * @param _sourceType Access source type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: Resource group
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
                     * @return TargetId Access destination
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Access destination
                     * @param _targetId Access destination
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
                     * 获取Access destination type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template; 100: resource group
                     * @return TargetType Access destination type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template; 100: resource group
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Access destination type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template; 100: resource group
                     * @param _targetType Access destination type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template; 100: resource group
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
                     * @return Protocol Protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param _protocol Protocol
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
                     * @return Port Destination port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Destination port
                     * @param _port Destination port
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
                     * @return Strategy Policy. 1: block; 2: allow
                     * 
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置Policy. 1: block; 2: allow
                     * @param _strategy Policy. 1: block; 2: allow
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
                     * 获取Description
                     * @return Detail Description
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Description
                     * @param _detail Description
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
                     * 获取One-way/two-way. 0: one-way; 1: two-way
                     * @return BothWay One-way/two-way. 0: one-way; 1: two-way
                     * 
                     */
                    uint64_t GetBothWay() const;

                    /**
                     * 设置One-way/two-way. 0: one-way; 1: two-way
                     * @param _bothWay One-way/two-way. 0: one-way; 1: two-way
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
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Toggle status. 0: off; 1: on
                     * @return Status Toggle status. 0: off; 1: on
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Toggle status. 0: off; 1: on
                     * @param _status Toggle status. 0: off; 1: on
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
                     * @return IsNew Indicates whether the rule is normal. 0: normal; 1: abnormal
                     * 
                     */
                    uint64_t GetIsNew() const;

                    /**
                     * 设置Indicates whether the rule is normal. 0: normal; 1: abnormal
                     * @param _isNew Indicates whether the rule is normal. 0: normal; 1: abnormal
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
                     * 获取Two-way rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @return BothWayInfo Two-way rules
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<SecurityGroupBothWayInfo> GetBothWayInfo() const;

                    /**
                     * 设置Two-way rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _bothWayInfo Two-way rules
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetBothWayInfo(const std::vector<SecurityGroupBothWayInfo>& _bothWayInfo);

                    /**
                     * 判断参数 BothWayInfo 是否已赋值
                     * @return BothWayInfo 是否已赋值
                     * 
                     */
                    bool BothWayInfoHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 1 by default
                     * @return Direction Direction. 0: outbound; 1: inbound. 1 by default
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 1 by default
                     * @param _direction Direction. 0: outbound; 1: inbound. 1 by default
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
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Access source
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Access source type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template. 100: Resource group
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access destination
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Access destination type. Default: 0. 1: VPC; 2: SUBNET; 3: CVM; 4: CLB; 5: ENI; 6: CDB; 7: Parameter template; 100: resource group
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Destination port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Policy. 1: block; 2: allow
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * One-way/two-way. 0: one-way; 1: two-way
                     */
                    uint64_t m_bothWay;
                    bool m_bothWayHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Toggle status. 0: off; 1: on
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates whether the rule is normal. 0: normal; 1: abnormal
                     */
                    uint64_t m_isNew;
                    bool m_isNewHasBeenSet;

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
                     * Two-way rules
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<SecurityGroupBothWayInfo> m_bothWayInfo;
                    bool m_bothWayInfoHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

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

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPLISTDATA_H_
