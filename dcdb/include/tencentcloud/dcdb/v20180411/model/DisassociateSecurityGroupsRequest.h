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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DisassociateSecurityGroups request structure.
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database engine name. Valid value: `dcdb`.
                     * @return Product Database engine name. Valid value: `dcdb`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Database engine name. Valid value: `dcdb`.
                     * @param Product Database engine name. Valid value: `dcdb`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param SecurityGroupId Security group ID
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list, which is an array of one or more instance IDs.
                     * @return InstanceIds Instance ID list, which is an array of one or more instance IDs.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list, which is an array of one or more instance IDs.
                     * @param InstanceIds Instance ID list, which is an array of one or more instance IDs.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Database engine name. Valid value: `dcdb`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Instance ID list, which is an array of one or more instance IDs.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
