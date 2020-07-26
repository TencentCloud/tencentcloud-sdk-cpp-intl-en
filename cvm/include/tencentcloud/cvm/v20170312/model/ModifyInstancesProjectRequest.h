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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESPROJECTREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstancesProject request structure.
                */
                class ModifyInstancesProjectRequest : public AbstractModel
                {
                public:
                    ModifyInstancesProjectRequest();
                    ~ModifyInstancesProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     * @return InstanceIds Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     * @param InstanceIds Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Project ID. You can create a project by using the [AddProject](https://cloud.tencent.com/doc/api/403/4398) API and obtain its ID from the response parameter `projectId` of the [`DescribeProject`](https://cloud.tencent.com/document/product/378/4400) API. Subsequently, the project ID can be used to filter results when you query instances by calling the [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) API.
                     * @return ProjectId Project ID. You can create a project by using the [AddProject](https://cloud.tencent.com/doc/api/403/4398) API and obtain its ID from the response parameter `projectId` of the [`DescribeProject`](https://cloud.tencent.com/document/product/378/4400) API. Subsequently, the project ID can be used to filter results when you query instances by calling the [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) API.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. You can create a project by using the [AddProject](https://cloud.tencent.com/doc/api/403/4398) API and obtain its ID from the response parameter `projectId` of the [`DescribeProject`](https://cloud.tencent.com/document/product/378/4400) API. Subsequently, the project ID can be used to filter results when you query instances by calling the [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) API.
                     * @param ProjectId Project ID. You can create a project by using the [AddProject](https://cloud.tencent.com/doc/api/403/4398) API and obtain its ID from the response parameter `projectId` of the [`DescribeProject`](https://cloud.tencent.com/document/product/378/4400) API. Subsequently, the project ID can be used to filter results when you query instances by calling the [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) API.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Instance IDs. To obtain the instance IDs, you can call [`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) and look for `InstanceId` in the response. You can operate up to 100 instances in each request.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Project ID. You can create a project by using the [AddProject](https://cloud.tencent.com/doc/api/403/4398) API and obtain its ID from the response parameter `projectId` of the [`DescribeProject`](https://cloud.tencent.com/document/product/378/4400) API. Subsequently, the project ID can be used to filter results when you query instances by calling the [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) API.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESPROJECTREQUEST_H_
