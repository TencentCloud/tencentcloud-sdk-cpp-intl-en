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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Reserved private IP address data.
                */
                class ReserveIpAddressInfo : public AbstractModel
                {
                public:
                    ReserveIpAddressInfo();
                    ~ReserveIpAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the reserved private IP address.
                     * @return ReserveIpId Unique ID of the reserved private IP address.
                     * 
                     */
                    std::string GetReserveIpId() const;

                    /**
                     * 设置Unique ID of the reserved private IP address.
                     * @param _reserveIpId Unique ID of the reserved private IP address.
                     * 
                     */
                    void SetReserveIpId(const std::string& _reserveIpId);

                    /**
                     * 判断参数 ReserveIpId 是否已赋值
                     * @return ReserveIpId 是否已赋值
                     * 
                     */
                    bool ReserveIpIdHasBeenSet() const;

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
                     * 获取Reserved private IP address.
                     * @return ReserveIpAddress Reserved private IP address.
                     * 
                     */
                    std::string GetReserveIpAddress() const;

                    /**
                     * 设置Reserved private IP address.
                     * @param _reserveIpAddress Reserved private IP address.
                     * 
                     */
                    void SetReserveIpAddress(const std::string& _reserveIpAddress);

                    /**
                     * 判断参数 ReserveIpAddress 是否已赋值
                     * @return ReserveIpAddress 是否已赋值
                     * 
                     */
                    bool ReserveIpAddressHasBeenSet() const;

                    /**
                     * 获取Resource instance ID bound to the reserved private IP address.
                     * @return ResourceId Resource instance ID bound to the reserved private IP address.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource instance ID bound to the reserved private IP address.
                     * @param _resourceId Resource instance ID bound to the reserved private IP address.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取IpType applied for the product.
                     * @return IpType IpType applied for the product.
                     * 
                     */
                    uint64_t GetIpType() const;

                    /**
                     * 设置IpType applied for the product.
                     * @param _ipType IpType applied for the product.
                     * 
                     */
                    void SetIpType(const uint64_t& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                    /**
                     * 获取Binding status. UnBind: unbound; Bind: bound.
                     * @return State Binding status. UnBind: unbound; Bind: bound.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Binding status. UnBind: unbound; Bind: bound.
                     * @param _state Binding status. UnBind: unbound; Bind: bound.
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
                     * 获取Tag key-value pair.
                     * @return TagSet Tag key-value pair.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pair.
                     * @param _tagSet Tag key-value pair.
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
                     * Unique ID of the reserved private IP address.
                     */
                    std::string m_reserveIpId;
                    bool m_reserveIpIdHasBeenSet;

                    /**
                     * Unique ID of the VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique ID of the subnet.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Reserved private IP address.
                     */
                    std::string m_reserveIpAddress;
                    bool m_reserveIpAddressHasBeenSet;

                    /**
                     * Resource instance ID bound to the reserved private IP address.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * IpType applied for the product.
                     */
                    uint64_t m_ipType;
                    bool m_ipTypeHasBeenSet;

                    /**
                     * Binding status. UnBind: unbound; Bind: bound.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

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
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag key-value pair.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_
