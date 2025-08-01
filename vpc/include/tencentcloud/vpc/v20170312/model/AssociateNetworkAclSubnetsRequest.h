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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENETWORKACLSUBNETSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENETWORKACLSUBNETSREQUEST_H_

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
                * AssociateNetworkAclSubnets request structure.
                */
                class AssociateNetworkAclSubnetsRequest : public AbstractModel
                {
                public:
                    AssociateNetworkAclSubnetsRequest();
                    ~AssociateNetworkAclSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Network ACL instance ID, such as `acl-12345678`.
                     * @return NetworkAclId Network ACL instance ID, such as `acl-12345678`.
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置Network ACL instance ID, such as `acl-12345678`.
                     * @param _networkAclId Network ACL instance ID, such as `acl-12345678`.
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取Array of subnet instance IDs, such as [subnet-12345678]
                     * @return SubnetIds Array of subnet instance IDs, such as [subnet-12345678]
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of subnet instance IDs, such as [subnet-12345678]
                     * @param _subnetIds Array of subnet instance IDs, such as [subnet-12345678]
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * Network ACL instance ID, such as `acl-12345678`.
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * Array of subnet instance IDs, such as [subnet-12345678]
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENETWORKACLSUBNETSREQUEST_H_
