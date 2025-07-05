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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Security group object
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The security group instance ID, such as `sg-ohuuioma`.
                     * @return SecurityGroupId The security group instance ID, such as `sg-ohuuioma`.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-ohuuioma`.
                     * @param _securityGroupId The security group instance ID, such as `sg-ohuuioma`.
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
                     * @return SecurityGroupName Security group can be named freely, but cannot exceed 60 characters.
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置Security group can be named freely, but cannot exceed 60 characters.
                     * @param _securityGroupName Security group can be named freely, but cannot exceed 60 characters.
                     * 
                     */
                    void SetSecurityGroupName(const std::string& _securityGroupName);

                    /**
                     * 判断参数 SecurityGroupName 是否已赋值
                     * @return SecurityGroupName 是否已赋值
                     * 
                     */
                    bool SecurityGroupNameHasBeenSet() const;

                    /**
                     * 获取The remarks for the security group. The maximum length is 100 characters.
                     * @return SecurityGroupDesc The remarks for the security group. The maximum length is 100 characters.
                     * 
                     */
                    std::string GetSecurityGroupDesc() const;

                    /**
                     * 设置The remarks for the security group. The maximum length is 100 characters.
                     * @param _securityGroupDesc The remarks for the security group. The maximum length is 100 characters.
                     * 
                     */
                    void SetSecurityGroupDesc(const std::string& _securityGroupDesc);

                    /**
                     * 判断参数 SecurityGroupDesc 是否已赋值
                     * @return SecurityGroupDesc 是否已赋值
                     * 
                     */
                    bool SecurityGroupDescHasBeenSet() const;

                    /**
                     * 获取The project id is 0 by default. You can query this in the project management page of the Qcloud console.
                     * @return ProjectId The project id is 0 by default. You can query this in the project management page of the Qcloud console.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置The project id is 0 by default. You can query this in the project management page of the Qcloud console.
                     * @param _projectId The project id is 0 by default. You can query this in the project management page of the Qcloud console.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Whether it is the default security group (which cannot be deleted).
                     * @return IsDefault Whether it is the default security group (which cannot be deleted).
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default security group (which cannot be deleted).
                     * @param _isDefault Whether it is the default security group (which cannot be deleted).
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Security group creation time.
                     * @return CreatedTime Security group creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Security group creation time.
                     * @param _createdTime Security group creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs.
                     * @return TagSet Tag key-value pairs.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
                     * @param _tagSet Tag key-value pairs.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Security group update time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime Security group update time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Security group update time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _updateTime Security group update time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-ohuuioma`.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group can be named freely, but cannot exceed 60 characters.
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * The remarks for the security group. The maximum length is 100 characters.
                     */
                    std::string m_securityGroupDesc;
                    bool m_securityGroupDescHasBeenSet;

                    /**
                     * The project id is 0 by default. You can query this in the project management page of the Qcloud console.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether it is the default security group (which cannot be deleted).
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Security group creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag key-value pairs.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Security group update time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_
