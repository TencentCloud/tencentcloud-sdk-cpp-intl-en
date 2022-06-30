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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_

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
                * SNAT rule of a NAT Gateway
                */
                class SourceIpTranslationNatRule : public AbstractModel
                {
                public:
                    SourceIpTranslationNatRule();
                    ~SourceIpTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param ResourceId Resource ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource type. Valid values: SUBNET, NETWORKINTERFACE
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type. Valid values: SUBNET, NETWORKINTERFACE
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type. Valid values: SUBNET, NETWORKINTERFACE
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceType Resource type. Valid values: SUBNET, NETWORKINTERFACE
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Source IP/IP range
                     * @return PrivateIpAddress Source IP/IP range
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Source IP/IP range
                     * @param PrivateIpAddress Source IP/IP range
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Elastic IP address pool
                     * @return PublicIpAddresses Elastic IP address pool
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Elastic IP address pool
                     * @param PublicIpAddresses Elastic IP address pool
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

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
                     * 获取SNAT rule ID
                     * @return NatGatewaySnatId SNAT rule ID
                     */
                    std::string GetNatGatewaySnatId() const;

                    /**
                     * 设置SNAT rule ID
                     * @param NatGatewaySnatId SNAT rule ID
                     */
                    void SetNatGatewaySnatId(const std::string& _natGatewaySnatId);

                    /**
                     * 判断参数 NatGatewaySnatId 是否已赋值
                     * @return NatGatewaySnatId 是否已赋值
                     */
                    bool NatGatewaySnatIdHasBeenSet() const;

                    /**
                     * 获取NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NatGatewayId NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param NatGatewayId NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The creation time of a NAT gateway's SNAT rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreatedTime The creation time of a NAT gateway's SNAT rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of a NAT gateway's SNAT rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreatedTime The creation time of a NAT gateway's SNAT rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type. Valid values: SUBNET, NETWORKINTERFACE
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Source IP/IP range
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Elastic IP address pool
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * SNAT rule ID
                     */
                    std::string m_natGatewaySnatId;
                    bool m_natGatewaySnatIdHasBeenSet;

                    /**
                     * NAT gateway ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * VPC ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The creation time of a NAT gateway's SNAT rule.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_
