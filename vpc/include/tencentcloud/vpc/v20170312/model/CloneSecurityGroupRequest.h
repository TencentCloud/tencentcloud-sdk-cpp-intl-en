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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_

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
                * CloneSecurityGroup request structure.
                */
                class CloneSecurityGroupRequest : public AbstractModel
                {
                public:
                    CloneSecurityGroupRequest();
                    ~CloneSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the security group to be cloned, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * @return SecurityGroupId ID of the security group to be cloned, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置ID of the security group to be cloned, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     * @param SecurityGroupId ID of the security group to be cloned, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取The name of security group clone. You can enter any name within 60 characters. If this parameter is left empty, the security group clone will use the name of the source security group.
                     * @return GroupName The name of security group clone. You can enter any name within 60 characters. If this parameter is left empty, the security group clone will use the name of the source security group.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The name of security group clone. You can enter any name within 60 characters. If this parameter is left empty, the security group clone will use the name of the source security group.
                     * @param GroupName The name of security group clone. You can enter any name within 60 characters. If this parameter is left empty, the security group clone will use the name of the source security group.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Description of the security group clone. You can enter up to 100 characters. If this parameter is left empty, the security group clone will use the description of the source security group.
                     * @return GroupDescription Description of the security group clone. You can enter up to 100 characters. If this parameter is left empty, the security group clone will use the description of the source security group.
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置Description of the security group clone. You can enter up to 100 characters. If this parameter is left empty, the security group clone will use the description of the source security group.
                     * @param GroupDescription Description of the security group clone. You can enter up to 100 characters. If this parameter is left empty, the security group clone will use the description of the source security group.
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     */
                    bool GroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Project ID of the security group clone. The default is 0. You can query it on the project management page of the Tencent Cloud console.
                     * @return ProjectId Project ID of the security group clone. The default is 0. You can query it on the project management page of the Tencent Cloud console.
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID of the security group clone. The default is 0. You can query it on the project management page of the Tencent Cloud console.
                     * @param ProjectId Project ID of the security group clone. The default is 0. You can query it on the project management page of the Tencent Cloud console.
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取The region of the source security group for a cross-region clone. For example, to clone the security group in Guangzhou to Shanghai, set it to `ap-guangzhou`.
                     * @return RemoteRegion The region of the source security group for a cross-region clone. For example, to clone the security group in Guangzhou to Shanghai, set it to `ap-guangzhou`.
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置The region of the source security group for a cross-region clone. For example, to clone the security group in Guangzhou to Shanghai, set it to `ap-guangzhou`.
                     * @param RemoteRegion The region of the source security group for a cross-region clone. For example, to clone the security group in Guangzhou to Shanghai, set it to `ap-guangzhou`.
                     */
                    void SetRemoteRegion(const std::string& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     */
                    bool RemoteRegionHasBeenSet() const;

                private:

                    /**
                     * ID of the security group to be cloned, such as `sg-33ocnj9n`. This can be obtained through the `DescribeSecurityGroups` API.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * The name of security group clone. You can enter any name within 60 characters. If this parameter is left empty, the security group clone will use the name of the source security group.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Description of the security group clone. You can enter up to 100 characters. If this parameter is left empty, the security group clone will use the description of the source security group.
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                    /**
                     * Project ID of the security group clone. The default is 0. You can query it on the project management page of the Tencent Cloud console.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The region of the source security group for a cross-region clone. For example, to clone the security group in Guangzhou to Shanghai, set it to `ap-guangzhou`.
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_
