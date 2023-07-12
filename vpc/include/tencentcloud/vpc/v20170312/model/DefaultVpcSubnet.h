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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_

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
                * Default VPC and subnet
                */
                class DefaultVpcSubnet : public AbstractModel
                {
                public:
                    DefaultVpcSubnet();
                    ~DefaultVpcSubnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Default VPC ID
                     * @return VpcId Default VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Default VPC ID
                     * @param _vpcId Default VPC ID
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
                     * 获取Default subnet ID
                     * @return SubnetId Default subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Default subnet ID
                     * @param _subnetId Default subnet ID
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
                     * 获取Default VPC name
                     * @return VpcName Default VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置Default VPC name
                     * @param _vpcName Default VPC name
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Default subnet name
                     * @return SubnetName Default subnet name
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Default subnet name
                     * @param _subnetName Default subnet name
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取Default subnet IP range
                     * @return CidrBlock Default subnet IP range
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置Default subnet IP range
                     * @param _cidrBlock Default subnet IP range
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                private:

                    /**
                     * Default VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Default subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Default VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Default subnet name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Default subnet IP range
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_
