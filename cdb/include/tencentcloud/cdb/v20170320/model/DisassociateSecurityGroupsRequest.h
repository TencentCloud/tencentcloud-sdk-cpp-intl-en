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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Security group ID.
                     * @return SecurityGroupId Security group ID.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID.
                     * @param SecurityGroupId Security group ID.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取List of instance IDs, which is an array of one or more instance IDs.
                     * @return InstanceIds List of instance IDs, which is an array of one or more instance IDs.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs, which is an array of one or more instance IDs.
                     * @param InstanceIds List of instance IDs, which is an array of one or more instance IDs.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取This parameter takes effect only when the IDs of read-only replicas are passed in. If this parameter is set to `False` or left empty, the security group will be unbound from the RO groups of these read-only replicas. If this parameter is set to `True`, the security group will be unbound from the read-only replicas themselves.
                     * @return ForReadonlyInstance This parameter takes effect only when the IDs of read-only replicas are passed in. If this parameter is set to `False` or left empty, the security group will be unbound from the RO groups of these read-only replicas. If this parameter is set to `True`, the security group will be unbound from the read-only replicas themselves.
                     */
                    bool GetForReadonlyInstance() const;

                    /**
                     * 设置This parameter takes effect only when the IDs of read-only replicas are passed in. If this parameter is set to `False` or left empty, the security group will be unbound from the RO groups of these read-only replicas. If this parameter is set to `True`, the security group will be unbound from the read-only replicas themselves.
                     * @param ForReadonlyInstance This parameter takes effect only when the IDs of read-only replicas are passed in. If this parameter is set to `False` or left empty, the security group will be unbound from the RO groups of these read-only replicas. If this parameter is set to `True`, the security group will be unbound from the read-only replicas themselves.
                     */
                    void SetForReadonlyInstance(const bool& _forReadonlyInstance);

                    /**
                     * 判断参数 ForReadonlyInstance 是否已赋值
                     * @return ForReadonlyInstance 是否已赋值
                     */
                    bool ForReadonlyInstanceHasBeenSet() const;

                private:

                    /**
                     * Security group ID.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * List of instance IDs, which is an array of one or more instance IDs.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * This parameter takes effect only when the IDs of read-only replicas are passed in. If this parameter is set to `False` or left empty, the security group will be unbound from the RO groups of these read-only replicas. If this parameter is set to `True`, the security group will be unbound from the read-only replicas themselves.
                     */
                    bool m_forReadonlyInstance;
                    bool m_forReadonlyInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
