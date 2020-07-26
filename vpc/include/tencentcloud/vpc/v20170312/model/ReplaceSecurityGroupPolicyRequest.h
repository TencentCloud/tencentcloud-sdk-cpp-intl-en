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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_

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
                * ReplaceSecurityGroupPolicy request structure.
                */
                class ReplaceSecurityGroupPolicyRequest : public AbstractModel
                {
                public:
                    ReplaceSecurityGroupPolicyRequest();
                    ~ReplaceSecurityGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @return SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @param SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Security group policy set object.
                     * @return SecurityGroupPolicySet Security group policy set object.
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置Security group policy set object.
                     * @param SecurityGroupPolicySet Security group policy set object.
                     */
                    void SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group policy set object.
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACESECURITYGROUPPOLICYREQUEST_H_
