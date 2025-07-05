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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_

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
                * ModifySecurityGroupAttribute request structure.
                */
                class ModifySecurityGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupAttributeRequest();
                    ~ModifySecurityGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @return SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @param _securityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
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
                     * 获取Security group can be named freely, but cannot exceed 60 characters.
                     * @return GroupName Security group can be named freely, but cannot exceed 60 characters.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Security group can be named freely, but cannot exceed 60 characters.
                     * @param _groupName Security group can be named freely, but cannot exceed 60 characters.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The remarks for the security group. The maximum length is 100 characters.
                     * @return GroupDescription The remarks for the security group. The maximum length is 100 characters.
                     * 
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置The remarks for the security group. The maximum length is 100 characters.
                     * @param _groupDescription The remarks for the security group. The maximum length is 100 characters.
                     * 
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     * 
                     */
                    bool GroupDescriptionHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group can be named freely, but cannot exceed 60 characters.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The remarks for the security group. The maximum length is 100 characters.
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
