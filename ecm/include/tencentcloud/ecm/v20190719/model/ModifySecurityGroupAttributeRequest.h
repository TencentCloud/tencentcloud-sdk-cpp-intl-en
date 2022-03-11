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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through the `DescribeSecurityGroups` API.
                     * @return SecurityGroupId Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through the `DescribeSecurityGroups` API.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through the `DescribeSecurityGroups` API.
                     * @param SecurityGroupId Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through the `DescribeSecurityGroups` API.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Security group name, which can be customized with up to 60 characters.
                     * @return GroupName Security group name, which can be customized with up to 60 characters.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Security group name, which can be customized with up to 60 characters.
                     * @param GroupName Security group name, which can be customized with up to 60 characters.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Security group remarks, which can contain up to 100 characters.
                     * @return GroupDescription Security group remarks, which can contain up to 100 characters.
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置Security group remarks, which can contain up to 100 characters.
                     * @param GroupDescription Security group remarks, which can contain up to 100 characters.
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     */
                    bool GroupDescriptionHasBeenSet() const;

                private:

                    /**
                     * Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through the `DescribeSecurityGroups` API.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group name, which can be customized with up to 60 characters.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Security group remarks, which can contain up to 100 characters.
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
