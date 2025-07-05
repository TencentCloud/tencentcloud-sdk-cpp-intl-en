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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateReserveIpAddresses request structure.
                */
                class CreateReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    CreateReserveIpAddressesRequest();
                    ~CreateReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the VPC.
                     * @return VpcId Unique ID of the VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of the VPC.
                     * @param _vpcId Unique ID of the VPC.
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
                     * 获取Reserved private IP address to be applied for.
                     * @return IpAddresses Reserved private IP address to be applied for.
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置Reserved private IP address to be applied for.
                     * @param _ipAddresses Reserved private IP address to be applied for.
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取Number of reserved private IP addresses that can be automatically assigned with no IP address specified.
                     * @return IpAddressCount Number of reserved private IP addresses that can be automatically assigned with no IP address specified.
                     * 
                     */
                    uint64_t GetIpAddressCount() const;

                    /**
                     * 设置Number of reserved private IP addresses that can be automatically assigned with no IP address specified.
                     * @param _ipAddressCount Number of reserved private IP addresses that can be automatically assigned with no IP address specified.
                     * 
                     */
                    void SetIpAddressCount(const uint64_t& _ipAddressCount);

                    /**
                     * 判断参数 IpAddressCount 是否已赋值
                     * @return IpAddressCount 是否已赋值
                     * 
                     */
                    bool IpAddressCountHasBeenSet() const;

                    /**
                     * 获取Unique ID of the subnet.
                     * @return SubnetId Unique ID of the subnet.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique ID of the subnet.
                     * @param _subnetId Unique ID of the subnet.
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
                     * 获取Name of the reserved private IP address.
                     * @return Name Name of the reserved private IP address.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the reserved private IP address.
                     * @param _name Name of the reserved private IP address.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of the reserved private IP address.
                     * @return Description Description of the reserved private IP address.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the reserved private IP address.
                     * @param _description Description of the reserved private IP address.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * @return ClientToken A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * @param _clientToken A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Reserved private IP address to be applied for.
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * Number of reserved private IP addresses that can be automatically assigned with no IP address specified.
                     */
                    uint64_t m_ipAddressCount;
                    bool m_ipAddressCountHasBeenSet;

                    /**
                     * Unique ID of the subnet.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Name of the reserved private IP address.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the reserved private IP address.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * List of tags to be bound, for example, [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_
