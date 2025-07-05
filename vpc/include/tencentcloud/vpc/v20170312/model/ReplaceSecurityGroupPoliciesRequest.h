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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicySet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceSecurityGroupPolicies request structure.
                */
                class ReplaceSecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ReplaceSecurityGroupPoliciesRequest();
                    ~ReplaceSecurityGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * @return SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * @param _securityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Security group policy set object.
                     * @return SecurityGroupPolicySet Security group policy set object.
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置Security group policy set object.
                     * @param _securityGroupPolicySet Security group policy set object.
                     * 
                     */
                    void SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                    /**
                     * 获取(Optional) The old policy set of the security group, which is used for log records.
                     * @return OriginalSecurityGroupPolicySet (Optional) The old policy set of the security group, which is used for log records.
                     * 
                     */
                    SecurityGroupPolicySet GetOriginalSecurityGroupPolicySet() const;

                    /**
                     * 设置(Optional) The old policy set of the security group, which is used for log records.
                     * @param _originalSecurityGroupPolicySet (Optional) The old policy set of the security group, which is used for log records.
                     * 
                     */
                    void SetOriginalSecurityGroupPolicySet(const SecurityGroupPolicySet& _originalSecurityGroupPolicySet);

                    /**
                     * 判断参数 OriginalSecurityGroupPolicySet 是否已赋值
                     * @return OriginalSecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool OriginalSecurityGroupPolicySetHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group policy set object.
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                    /**
                     * (Optional) The old policy set of the security group, which is used for log records.
                     */
                    SecurityGroupPolicySet m_originalSecurityGroupPolicySet;
                    bool m_originalSecurityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICIESREQUEST_H_
