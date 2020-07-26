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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSecurityGroup request structure.
                */
                class CreateSecurityGroupRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupRequest();
                    ~CreateSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security group can be named freely, but cannot exceed 60 characters.
                     * @return GroupName Security group can be named freely, but cannot exceed 60 characters.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Security group can be named freely, but cannot exceed 60 characters.
                     * @param GroupName Security group can be named freely, but cannot exceed 60 characters.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The remarks for the security group. The maximum length is 100 characters.
                     * @return GroupDescription The remarks for the security group. The maximum length is 100 characters.
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置The remarks for the security group. The maximum length is 100 characters.
                     * @param GroupDescription The remarks for the security group. The maximum length is 100 characters.
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     */
                    bool GroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Project ID. The default is 0. You can query it on the project management page of the Qcloud console.
                     * @return ProjectId Project ID. The default is 0. You can query it on the project management page of the Qcloud console.
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID. The default is 0. You can query it on the project management page of the Qcloud console.
                     * @param ProjectId Project ID. The default is 0. You can query it on the project management page of the Qcloud console.
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

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

                    /**
                     * Project ID. The default is 0. You can query it on the project management page of the Qcloud console.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_
