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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateSubnet request structure.
                */
                class CreateSubnetRequest : public AbstractModel
                {
                public:
                    CreateSubnetRequest();
                    ~CreateSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC instance to be manipulated, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     * @return VpcId ID of the VPC instance to be manipulated, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance to be manipulated, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     * @param VpcId ID of the VPC instance to be manipulated, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet name, which can contain up to 60 bytes.
                     * @return SubnetName Subnet name, which can contain up to 60 bytes.
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name, which can contain up to 60 bytes.
                     * @param SubnetName Subnet name, which can contain up to 60 bytes.
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取Subnet IP address range. It must be within the VPC IP address range. Subnet IP address ranges cannot overlap with each other within the same VPC.
                     * @return CidrBlock Subnet IP address range. It must be within the VPC IP address range. Subnet IP address ranges cannot overlap with each other within the same VPC.
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置Subnet IP address range. It must be within the VPC IP address range. Subnet IP address ranges cannot overlap with each other within the same VPC.
                     * @param CidrBlock Subnet IP address range. It must be within the VPC IP address range. Subnet IP address ranges cannot overlap with each other within the same VPC.
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取AZ ID of the subnet. You can select different AZs for different subnets for cross-AZ disaster recovery.
                     * @return Zone AZ ID of the subnet. You can select different AZs for different subnets for cross-AZ disaster recovery.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID of the subnet. You can select different AZs for different subnets for cross-AZ disaster recovery.
                     * @param Zone AZ ID of the subnet. You can select different AZs for different subnets for cross-AZ disaster recovery.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param EcmRegion ECM region
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param Tags List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC instance to be manipulated, which can be obtained from the `VpcId` field in the returned value of the `DescribeVpcs` API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet name, which can contain up to 60 bytes.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Subnet IP address range. It must be within the VPC IP address range. Subnet IP address ranges cannot overlap with each other within the same VPC.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * AZ ID of the subnet. You can select different AZs for different subnets for cross-AZ disaster recovery.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * List of bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_
