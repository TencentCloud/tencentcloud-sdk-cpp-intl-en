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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeProjectSecurityGroup request structure.
                */
                class DescribeProjectSecurityGroupRequest : public AbstractModel
                {
                public:
                    DescribeProjectSecurityGroupRequest();
                    ~DescribeProjectSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID for query.
- 0: default project.
- -1: all projects.
- Greater than 0: specific project. Log in to the [project management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * @return ProjectId Project ID for query.
- 0: default project.
- -1: all projects.
- Greater than 0: specific project. Log in to the [project management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID for query.
- 0: default project.
- -1: all projects.
- Greater than 0: specific project. Log in to the [project management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * @param _projectId Project ID for query.
- 0: default project.
- -1: all projects.
- Greater than 0: specific project. Log in to the [project management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter **InstanceSecurityGroupsDetail** of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * @return SecurityGroupId Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter **InstanceSecurityGroupsDetail** of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter **InstanceSecurityGroupsDetail** of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * @param _securityGroupId Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter **InstanceSecurityGroupsDetail** of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * Project ID for query.
- 0: default project.
- -1: all projects.
- Greater than 0: specific project. Log in to the [project management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Security group ID, which can be obtained through the sub-parameter **SecurityGroupId** of the response parameter **InstanceSecurityGroupsDetail** of the API [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1).
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_
