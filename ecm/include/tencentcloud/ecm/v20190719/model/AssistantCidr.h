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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSISTANTCIDR_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSISTANTCIDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Subnet.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Secondary CIDR information of the VPC.
                */
                class AssistantCidr : public AbstractModel
                {
                public:
                    AssistantCidr();
                    ~AssistantCidr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC instance ID, such as `vpc-6v2ht8q5`
                     * @return VpcId VPC instance ID, such as `vpc-6v2ht8q5`
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID, such as `vpc-6v2ht8q5`
                     * @param _vpcId VPC instance ID, such as `vpc-6v2ht8q5`
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
                     * 获取Secondary CIDR, such as `172.16.0.0/16`
                     * @return CidrBlock Secondary CIDR, such as `172.16.0.0/16`
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置Secondary CIDR, such as `172.16.0.0/16`
                     * @param _cidrBlock Secondary CIDR, such as `172.16.0.0/16`
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
                     * 获取Secondary CIDR block type. 0: general secondary CIDR block; 1: container secondary CIDR block. Default value: 0.
                     * @return AssistantType Secondary CIDR block type. 0: general secondary CIDR block; 1: container secondary CIDR block. Default value: 0.
                     * 
                     */
                    uint64_t GetAssistantType() const;

                    /**
                     * 设置Secondary CIDR block type. 0: general secondary CIDR block; 1: container secondary CIDR block. Default value: 0.
                     * @param _assistantType Secondary CIDR block type. 0: general secondary CIDR block; 1: container secondary CIDR block. Default value: 0.
                     * 
                     */
                    void SetAssistantType(const uint64_t& _assistantType);

                    /**
                     * 判断参数 AssistantType 是否已赋值
                     * @return AssistantType 是否已赋值
                     * 
                     */
                    bool AssistantTypeHasBeenSet() const;

                    /**
                     * 获取Subnets divided by the secondary CIDR block.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubnetSet Subnets divided by the secondary CIDR block.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置Subnets divided by the secondary CIDR block.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subnetSet Subnets divided by the secondary CIDR block.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * VPC instance ID, such as `vpc-6v2ht8q5`
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Secondary CIDR, such as `172.16.0.0/16`
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Secondary CIDR block type. 0: general secondary CIDR block; 1: container secondary CIDR block. Default value: 0.
                     */
                    uint64_t m_assistantType;
                    bool m_assistantTypeHasBeenSet;

                    /**
                     * Subnets divided by the secondary CIDR block.
Note: this field may return null, indicating that no valid values can be obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSISTANTCIDR_H_
