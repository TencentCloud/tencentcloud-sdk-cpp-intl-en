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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchUpdateIntegrationTasks request structure.
                */
                class BatchUpdateIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchUpdateIntegrationTasksRequest();
                    ~BatchUpdateIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskIds Task ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task ID
                     * @param _taskIds Task ID
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Person in Charge (separate multiple persons in charge with a lowercase semicolon; offline tasks use the account name, real-time tasks use the account ID)
                     * @return Incharge Person in Charge (separate multiple persons in charge with a lowercase semicolon; offline tasks use the account name, real-time tasks use the account ID)
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置Person in Charge (separate multiple persons in charge with a lowercase semicolon; offline tasks use the account name, real-time tasks use the account ID)
                     * @param _incharge Person in Charge (separate multiple persons in charge with a lowercase semicolon; offline tasks use the account name, real-time tasks use the account ID)
                     * 
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     * 
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取Task Type
                     * @return TaskType Task Type
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task Type
                     * @param _taskType Task Type
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Responsible Person ID (separate multiple persons in charge with a lowercase semicolon)
                     * @return InchargeIds Responsible Person ID (separate multiple persons in charge with a lowercase semicolon)
                     * 
                     */
                    std::string GetInchargeIds() const;

                    /**
                     * 设置Responsible Person ID (separate multiple persons in charge with a lowercase semicolon)
                     * @param _inchargeIds Responsible Person ID (separate multiple persons in charge with a lowercase semicolon)
                     * 
                     */
                    void SetInchargeIds(const std::string& _inchargeIds);

                    /**
                     * 判断参数 InchargeIds 是否已赋值
                     * @return InchargeIds 是否已赋值
                     * 
                     */
                    bool InchargeIdsHasBeenSet() const;

                    /**
                     * 获取This batch operation involves tasks for auditing
                     * @return TaskNames This batch operation involves tasks for auditing
                     * 
                     */
                    std::vector<std::string> GetTaskNames() const;

                    /**
                     * 设置This batch operation involves tasks for auditing
                     * @param _taskNames This batch operation involves tasks for auditing
                     * 
                     */
                    void SetTaskNames(const std::vector<std::string>& _taskNames);

                    /**
                     * 判断参数 TaskNames 是否已赋值
                     * @return TaskNames 是否已赋值
                     * 
                     */
                    bool TaskNamesHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Person in Charge (separate multiple persons in charge with a lowercase semicolon; offline tasks use the account name, real-time tasks use the account ID)
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * Task Type
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Responsible Person ID (separate multiple persons in charge with a lowercase semicolon)
                     */
                    std::string m_inchargeIds;
                    bool m_inchargeIdsHasBeenSet;

                    /**
                     * This batch operation involves tasks for auditing
                     */
                    std::vector<std::string> m_taskNames;
                    bool m_taskNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_
