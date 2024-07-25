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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * VPC configuration
                */
                class VPCOption : public AbstractModel
                {
                public:
                    VPCOption();
                    ~VPCOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID (Either VPCId or VPCCIDRBlock must be selected. If VPCId is selected, the existing VPCs will be used; if VPCCIDRBlock is selected, a new VPC will be created.)
                     * @return VPCId VPC ID (Either VPCId or VPCCIDRBlock must be selected. If VPCId is selected, the existing VPCs will be used; if VPCCIDRBlock is selected, a new VPC will be created.)
                     * 
                     */
                    std::string GetVPCId() const;

                    /**
                     * 设置VPC ID (Either VPCId or VPCCIDRBlock must be selected. If VPCId is selected, the existing VPCs will be used; if VPCCIDRBlock is selected, a new VPC will be created.)
                     * @param _vPCId VPC ID (Either VPCId or VPCCIDRBlock must be selected. If VPCId is selected, the existing VPCs will be used; if VPCCIDRBlock is selected, a new VPC will be created.)
                     * 
                     */
                    void SetVPCId(const std::string& _vPCId);

                    /**
                     * 判断参数 VPCId 是否已赋值
                     * @return VPCId 是否已赋值
                     * 
                     */
                    bool VPCIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID (Either SubnetId or SubnetZone&SubnetCIDRBlock must be selected. If SubnetId is selected, the existing subnet will be used; if SubnetZone&SubnetCIDRBlock is selected, a new subnet will be created.)
                     * @return SubnetId Subnet ID (Either SubnetId or SubnetZone&SubnetCIDRBlock must be selected. If SubnetId is selected, the existing subnet will be used; if SubnetZone&SubnetCIDRBlock is selected, a new subnet will be created.)
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID (Either SubnetId or SubnetZone&SubnetCIDRBlock must be selected. If SubnetId is selected, the existing subnet will be used; if SubnetZone&SubnetCIDRBlock is selected, a new subnet will be created.)
                     * @param _subnetId Subnet ID (Either SubnetId or SubnetZone&SubnetCIDRBlock must be selected. If SubnetId is selected, the existing subnet will be used; if SubnetZone&SubnetCIDRBlock is selected, a new subnet will be created.)
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
                     * 获取Subnet availability zone
                     * @return SubnetZone Subnet availability zone
                     * 
                     */
                    std::string GetSubnetZone() const;

                    /**
                     * 设置Subnet availability zone
                     * @param _subnetZone Subnet availability zone
                     * 
                     */
                    void SetSubnetZone(const std::string& _subnetZone);

                    /**
                     * 判断参数 SubnetZone 是否已赋值
                     * @return SubnetZone 是否已赋值
                     * 
                     */
                    bool SubnetZoneHasBeenSet() const;

                    /**
                     * 获取 VPC CIDR.
                     * @return VPCCIDRBlock  VPC CIDR.
                     * 
                     */
                    std::string GetVPCCIDRBlock() const;

                    /**
                     * 设置 VPC CIDR.
                     * @param _vPCCIDRBlock  VPC CIDR.
                     * 
                     */
                    void SetVPCCIDRBlock(const std::string& _vPCCIDRBlock);

                    /**
                     * 判断参数 VPCCIDRBlock 是否已赋值
                     * @return VPCCIDRBlock 是否已赋值
                     * 
                     */
                    bool VPCCIDRBlockHasBeenSet() const;

                    /**
                     * 获取Subnet CIDR
                     * @return SubnetCIDRBlock Subnet CIDR
                     * 
                     */
                    std::string GetSubnetCIDRBlock() const;

                    /**
                     * 设置Subnet CIDR
                     * @param _subnetCIDRBlock Subnet CIDR
                     * 
                     */
                    void SetSubnetCIDRBlock(const std::string& _subnetCIDRBlock);

                    /**
                     * 判断参数 SubnetCIDRBlock 是否已赋值
                     * @return SubnetCIDRBlock 是否已赋值
                     * 
                     */
                    bool SubnetCIDRBlockHasBeenSet() const;

                private:

                    /**
                     * VPC ID (Either VPCId or VPCCIDRBlock must be selected. If VPCId is selected, the existing VPCs will be used; if VPCCIDRBlock is selected, a new VPC will be created.)
                     */
                    std::string m_vPCId;
                    bool m_vPCIdHasBeenSet;

                    /**
                     * Subnet ID (Either SubnetId or SubnetZone&SubnetCIDRBlock must be selected. If SubnetId is selected, the existing subnet will be used; if SubnetZone&SubnetCIDRBlock is selected, a new subnet will be created.)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet availability zone
                     */
                    std::string m_subnetZone;
                    bool m_subnetZoneHasBeenSet;

                    /**
                     *  VPC CIDR.
                     */
                    std::string m_vPCCIDRBlock;
                    bool m_vPCCIDRBlockHasBeenSet;

                    /**
                     * Subnet CIDR
                     */
                    std::string m_subnetCIDRBlock;
                    bool m_subnetCIDRBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_
