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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEASSISTANTCIDRREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEASSISTANTCIDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteAssistantCidr request structure.
                */
                class DeleteAssistantCidrRequest : public AbstractModel
                {
                public:
                    DeleteAssistantCidrRequest();
                    ~DeleteAssistantCidrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC` instance `ID`, such as `vpc-6v2ht8q5`.
                     * @return VpcId `VPC` instance `ID`, such as `vpc-6v2ht8q5`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC` instance `ID`, such as `vpc-6v2ht8q5`.
                     * @param _vpcId `VPC` instance `ID`, such as `vpc-6v2ht8q5`.
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
                     * 获取Array of CIDR blocks, such as ["10.0.0.0/16", "172.16.0.0/16"]
                     * @return CidrBlocks Array of CIDR blocks, such as ["10.0.0.0/16", "172.16.0.0/16"]
                     * 
                     */
                    std::vector<std::string> GetCidrBlocks() const;

                    /**
                     * 设置Array of CIDR blocks, such as ["10.0.0.0/16", "172.16.0.0/16"]
                     * @param _cidrBlocks Array of CIDR blocks, such as ["10.0.0.0/16", "172.16.0.0/16"]
                     * 
                     */
                    void SetCidrBlocks(const std::vector<std::string>& _cidrBlocks);

                    /**
                     * 判断参数 CidrBlocks 是否已赋值
                     * @return CidrBlocks 是否已赋值
                     * 
                     */
                    bool CidrBlocksHasBeenSet() const;

                private:

                    /**
                     * `VPC` instance `ID`, such as `vpc-6v2ht8q5`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Array of CIDR blocks, such as ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    std::vector<std::string> m_cidrBlocks;
                    bool m_cidrBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEASSISTANTCIDRREQUEST_H_
