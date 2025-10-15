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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SETSUCCESSTASKINSTANCESASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SETSUCCESSTASKINSTANCESASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * SetSuccessTaskInstancesAsync request structure.
                */
                class SetSuccessTaskInstancesAsyncRequest : public AbstractModel
                {
                public:
                    SetSuccessTaskInstancesAsyncRequest();
                    ~SetSuccessTaskInstancesAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.

                     * @return ProjectId Project ID.

                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

                     * @param _projectId Project ID.

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
                     * 获取Instance id list, can be obtained from ListInstances API.
                     * @return InstanceKeyList Instance id list, can be obtained from ListInstances API.
                     * 
                     */
                    std::vector<std::string> GetInstanceKeyList() const;

                    /**
                     * 设置Instance id list, can be obtained from ListInstances API.
                     * @param _instanceKeyList Instance id list, can be obtained from ListInstances API.
                     * 
                     */
                    void SetInstanceKeyList(const std::vector<std::string>& _instanceKeyList);

                    /**
                     * 判断参数 InstanceKeyList 是否已赋值
                     * @return InstanceKeyList 是否已赋值
                     * 
                     */
                    bool InstanceKeyListHasBeenSet() const;

                private:

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance id list, can be obtained from ListInstances API.
                     */
                    std::vector<std::string> m_instanceKeyList;
                    bool m_instanceKeyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SETSUCCESSTASKINSTANCESASYNCREQUEST_H_
