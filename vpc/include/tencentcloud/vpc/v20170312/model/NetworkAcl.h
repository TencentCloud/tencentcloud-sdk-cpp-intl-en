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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntry.h>
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
                * Network ACL
                */
                class NetworkAcl : public AbstractModel
                {
                public:
                    NetworkAcl();
                    ~NetworkAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`ID` of the `VPC` instance.
                     * @return VpcId `ID` of the `VPC` instance.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`ID` of the `VPC` instance.
                     * @param _vpcId `ID` of the `VPC` instance.
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
                     * 获取`ID` of the network ACL instance.
                     * @return NetworkAclId `ID` of the network ACL instance.
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置`ID` of the network ACL instance.
                     * @param _networkAclId `ID` of the network ACL instance.
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取Name of the network ACL. The maximum length is 60 bytes.
                     * @return NetworkAclName Name of the network ACL. The maximum length is 60 bytes.
                     * 
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置Name of the network ACL. The maximum length is 60 bytes.
                     * @param _networkAclName Name of the network ACL. The maximum length is 60 bytes.
                     * 
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     * 
                     */
                    bool NetworkAclNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Array of subnets associated with the network ACL.
                     * @return SubnetSet Array of subnets associated with the network ACL.
                     * 
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置Array of subnets associated with the network ACL.
                     * @param _subnetSet Array of subnets associated with the network ACL.
                     * 
                     */
                    void SetSubnetSet(const std::vector<Subnet>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                    /**
                     * 获取Inbound rules of the network ACL.
                     * @return IngressEntries Inbound rules of the network ACL.
                     * 
                     */
                    std::vector<NetworkAclEntry> GetIngressEntries() const;

                    /**
                     * 设置Inbound rules of the network ACL.
                     * @param _ingressEntries Inbound rules of the network ACL.
                     * 
                     */
                    void SetIngressEntries(const std::vector<NetworkAclEntry>& _ingressEntries);

                    /**
                     * 判断参数 IngressEntries 是否已赋值
                     * @return IngressEntries 是否已赋值
                     * 
                     */
                    bool IngressEntriesHasBeenSet() const;

                    /**
                     * 获取Outbound rules of the network ACL.
                     * @return EgressEntries Outbound rules of the network ACL.
                     * 
                     */
                    std::vector<NetworkAclEntry> GetEgressEntries() const;

                    /**
                     * 设置Outbound rules of the network ACL.
                     * @param _egressEntries Outbound rules of the network ACL.
                     * 
                     */
                    void SetEgressEntries(const std::vector<NetworkAclEntry>& _egressEntries);

                    /**
                     * 判断参数 EgressEntries 是否已赋值
                     * @return EgressEntries 是否已赋值
                     * 
                     */
                    bool EgressEntriesHasBeenSet() const;

                    /**
                     * 获取Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * @return NetworkAclType Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * 
                     */
                    std::string GetNetworkAclType() const;

                    /**
                     * 设置Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * @param _networkAclType Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     * 
                     */
                    void SetNetworkAclType(const std::string& _networkAclType);

                    /**
                     * 判断参数 NetworkAclType 是否已赋值
                     * @return NetworkAclType 是否已赋值
                     * 
                     */
                    bool NetworkAclTypeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs
                     * @return TagSet Tag key-value pairs
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs
                     * @param _tagSet Tag key-value pairs
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * `ID` of the `VPC` instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `ID` of the network ACL instance.
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * Name of the network ACL. The maximum length is 60 bytes.
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Array of subnets associated with the network ACL.
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                    /**
                     * Inbound rules of the network ACL.
                     */
                    std::vector<NetworkAclEntry> m_ingressEntries;
                    bool m_ingressEntriesHasBeenSet;

                    /**
                     * Outbound rules of the network ACL.
                     */
                    std::vector<NetworkAclEntry> m_egressEntries;
                    bool m_egressEntriesHasBeenSet;

                    /**
                     * Network ACL type. Valid values: `TRIPLE` and `QUINTUPLE`.
                     */
                    std::string m_networkAclType;
                    bool m_networkAclTypeHasBeenSet;

                    /**
                     * Tag key-value pairs
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
