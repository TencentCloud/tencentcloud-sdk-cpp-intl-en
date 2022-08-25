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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Network ACL quintuple entry
                */
                class NetworkAclQuintupleEntry : public AbstractModel
                {
                public:
                    NetworkAclQuintupleEntry();
                    ~NetworkAclQuintupleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: `TCP`, `UDP`, `ICMP`, `ALL`.
                     * @return Protocol Protocol. Valid values: `TCP`, `UDP`, `ICMP`, `ALL`.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: `TCP`, `UDP`, `ICMP`, `ALL`.
                     * @param Protocol Protocol. Valid values: `TCP`, `UDP`, `ICMP`, `ALL`.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param Description Description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Source port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     * @return SourcePort Source port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    std::string GetSourcePort() const;

                    /**
                     * 设置Source port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     * @param SourcePort Source port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    void SetSourcePort(const std::string& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取Source CIDR block.
                     * @return SourceCidr Source CIDR block.
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置Source CIDR block.
                     * @param SourceCidr Source CIDR block.
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取Destination port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     * @return DestinationPort Destination port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    std::string GetDestinationPort() const;

                    /**
                     * 设置Destination port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     * @param DestinationPort Destination port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    void SetDestinationPort(const std::string& _destinationPort);

                    /**
                     * 判断参数 DestinationPort 是否已赋值
                     * @return DestinationPort 是否已赋值
                     */
                    bool DestinationPortHasBeenSet() const;

                    /**
                     * 获取Destination CIDR block.
                     * @return DestinationCidr Destination CIDR block.
                     */
                    std::string GetDestinationCidr() const;

                    /**
                     * 设置Destination CIDR block.
                     * @param DestinationCidr Destination CIDR block.
                     */
                    void SetDestinationCidr(const std::string& _destinationCidr);

                    /**
                     * 判断参数 DestinationCidr 是否已赋值
                     * @return DestinationCidr 是否已赋值
                     */
                    bool DestinationCidrHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `ACCEPT` and `DROP`.
                     * @return Action Action. Valid values: `ACCEPT` and `DROP`.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: `ACCEPT` and `DROP`.
                     * @param Action Action. Valid values: `ACCEPT` and `DROP`.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Unique ID of a network ACL entry.
                     * @return NetworkAclQuintupleEntryId Unique ID of a network ACL entry.
                     */
                    std::string GetNetworkAclQuintupleEntryId() const;

                    /**
                     * 设置Unique ID of a network ACL entry.
                     * @param NetworkAclQuintupleEntryId Unique ID of a network ACL entry.
                     */
                    void SetNetworkAclQuintupleEntryId(const std::string& _networkAclQuintupleEntryId);

                    /**
                     * 判断参数 NetworkAclQuintupleEntryId 是否已赋值
                     * @return NetworkAclQuintupleEntryId 是否已赋值
                     */
                    bool NetworkAclQuintupleEntryIdHasBeenSet() const;

                    /**
                     * 获取Priority. `1` refers to the highest priority.
                     * @return Priority Priority. `1` refers to the highest priority.
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority. `1` refers to the highest priority.
                     * @param Priority Priority. `1` refers to the highest priority.
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Creation time. It’s returned by `DescribeNetworkAclQuintupleEntries`.
                     * @return CreateTime Creation time. It’s returned by `DescribeNetworkAclQuintupleEntries`.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. It’s returned by `DescribeNetworkAclQuintupleEntries`.
                     * @param CreateTime Creation time. It’s returned by `DescribeNetworkAclQuintupleEntries`.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Direction of the rule. It’s returned by `DescribeNetworkAclQuintupleEntries`. Valid values: `INGRESS` and `EGRESS`.
                     * @return NetworkAclDirection Direction of the rule. It’s returned by `DescribeNetworkAclQuintupleEntries`. Valid values: `INGRESS` and `EGRESS`.
                     */
                    std::string GetNetworkAclDirection() const;

                    /**
                     * 设置Direction of the rule. It’s returned by `DescribeNetworkAclQuintupleEntries`. Valid values: `INGRESS` and `EGRESS`.
                     * @param NetworkAclDirection Direction of the rule. It’s returned by `DescribeNetworkAclQuintupleEntries`. Valid values: `INGRESS` and `EGRESS`.
                     */
                    void SetNetworkAclDirection(const std::string& _networkAclDirection);

                    /**
                     * 判断参数 NetworkAclDirection 是否已赋值
                     * @return NetworkAclDirection 是否已赋值
                     */
                    bool NetworkAclDirectionHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: `TCP`, `UDP`, `ICMP`, `ALL`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Source port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    std::string m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * Source CIDR block.
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * Destination port. Valid values: all, single port, range. When `Protocol` is `ALL` or `ICMP`, `Port` cannot be specified.
                     */
                    std::string m_destinationPort;
                    bool m_destinationPortHasBeenSet;

                    /**
                     * Destination CIDR block.
                     */
                    std::string m_destinationCidr;
                    bool m_destinationCidrHasBeenSet;

                    /**
                     * Action. Valid values: `ACCEPT` and `DROP`.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Unique ID of a network ACL entry.
                     */
                    std::string m_networkAclQuintupleEntryId;
                    bool m_networkAclQuintupleEntryIdHasBeenSet;

                    /**
                     * Priority. `1` refers to the highest priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Creation time. It’s returned by `DescribeNetworkAclQuintupleEntries`.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Direction of the rule. It’s returned by `DescribeNetworkAclQuintupleEntries`. Valid values: `INGRESS` and `EGRESS`.
                     */
                    std::string m_networkAclDirection;
                    bool m_networkAclDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_
