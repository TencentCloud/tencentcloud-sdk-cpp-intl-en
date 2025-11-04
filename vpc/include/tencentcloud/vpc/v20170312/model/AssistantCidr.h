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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information about the secondary CIDR of the VPC.
                */
                class AssistantCidr : public AbstractModel
                {
                public:
                    AssistantCidr();
                    ~AssistantCidr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `ID` of a `VPC` instance, such as `vpc-6v2ht8q5`.
                     * @return VpcId The `ID` of a `VPC` instance, such as `vpc-6v2ht8q5`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of a `VPC` instance, such as `vpc-6v2ht8q5`.
                     * @param _vpcId The `ID` of a `VPC` instance, such as `vpc-6v2ht8q5`.
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
                     * 获取The secondary CIDR, such as `172.16.0.0/16`.
                     * @return CidrBlock The secondary CIDR, such as `172.16.0.0/16`.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The secondary CIDR, such as `172.16.0.0/16`.
                     * @param _cidrBlock The secondary CIDR, such as `172.16.0.0/16`.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取The secondary CIDR block type. 0: common secondary CIDR block. 1: container secondary CIDR block. Default: 0.
                     * @return AssistantType The secondary CIDR block type. 0: common secondary CIDR block. 1: container secondary CIDR block. Default: 0.
                     * 
                     */
                    int64_t GetAssistantType() const;

                    /**
                     * 设置The secondary CIDR block type. 0: common secondary CIDR block. 1: container secondary CIDR block. Default: 0.
                     * @param _assistantType The secondary CIDR block type. 0: common secondary CIDR block. 1: container secondary CIDR block. Default: 0.
                     * 
                     */
                    void SetAssistantType(const int64_t& _assistantType);

                    /**
                     * 判断参数 AssistantType 是否已赋值
                     * @return AssistantType 是否已赋值
                     * 
                     */
                    bool AssistantTypeHasBeenSet() const;

                    /**
                     * 获取Subnet Split by Auxiliary CIDR
                     * @return SubnetSet Subnet Split by Auxiliary CIDR
                     * 
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置Subnet Split by Auxiliary CIDR
                     * @param _subnetSet Subnet Split by Auxiliary CIDR
                     * 
                     */
                    void SetSubnetSet(const std::vector<Subnet>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                private:

                    /**
                     * The `ID` of a `VPC` instance, such as `vpc-6v2ht8q5`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The secondary CIDR, such as `172.16.0.0/16`.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * The secondary CIDR block type. 0: common secondary CIDR block. 1: container secondary CIDR block. Default: 0.
                     */
                    int64_t m_assistantType;
                    bool m_assistantTypeHasBeenSet;

                    /**
                     * Subnet Split by Auxiliary CIDR
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_
