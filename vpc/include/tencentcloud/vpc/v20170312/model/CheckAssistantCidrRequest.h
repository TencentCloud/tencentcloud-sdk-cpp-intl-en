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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKASSISTANTCIDRREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKASSISTANTCIDRREQUEST_H_

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
                * CheckAssistantCidr request structure.
                */
                class CheckAssistantCidrRequest : public AbstractModel
                {
                public:
                    CheckAssistantCidrRequest();
                    ~CheckAssistantCidrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC` instance `ID`, e.g. `vpc-6v2ht8q5`.
                     * @return VpcId `VPC` instance `ID`, e.g. `vpc-6v2ht8q5`.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC` instance `ID`, e.g. `vpc-6v2ht8q5`.
                     * @param VpcId `VPC` instance `ID`, e.g. `vpc-6v2ht8q5`.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Load CIDR blocks to add. CIDR block set; format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     * @return NewCidrBlocks Load CIDR blocks to add. CIDR block set; format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    std::vector<std::string> GetNewCidrBlocks() const;

                    /**
                     * 设置Load CIDR blocks to add. CIDR block set; format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     * @param NewCidrBlocks Load CIDR blocks to add. CIDR block set; format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    void SetNewCidrBlocks(const std::vector<std::string>& _newCidrBlocks);

                    /**
                     * 判断参数 NewCidrBlocks 是否已赋值
                     * @return NewCidrBlocks 是否已赋值
                     */
                    bool NewCidrBlocksHasBeenSet() const;

                    /**
                     * 获取Load CIDR blocks to delete. CIDR block set; Format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     * @return OldCidrBlocks Load CIDR blocks to delete. CIDR block set; Format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    std::vector<std::string> GetOldCidrBlocks() const;

                    /**
                     * 设置Load CIDR blocks to delete. CIDR block set; Format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     * @param OldCidrBlocks Load CIDR blocks to delete. CIDR block set; Format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    void SetOldCidrBlocks(const std::vector<std::string>& _oldCidrBlocks);

                    /**
                     * 判断参数 OldCidrBlocks 是否已赋值
                     * @return OldCidrBlocks 是否已赋值
                     */
                    bool OldCidrBlocksHasBeenSet() const;

                private:

                    /**
                     * `VPC` instance `ID`, e.g. `vpc-6v2ht8q5`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Load CIDR blocks to add. CIDR block set; format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    std::vector<std::string> m_newCidrBlocks;
                    bool m_newCidrBlocksHasBeenSet;

                    /**
                     * Load CIDR blocks to delete. CIDR block set; Format: e.g. ["10.0.0.0/16", "172.16.0.0/16"]
                     */
                    std::vector<std::string> m_oldCidrBlocks;
                    bool m_oldCidrBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKASSISTANTCIDRREQUEST_H_
