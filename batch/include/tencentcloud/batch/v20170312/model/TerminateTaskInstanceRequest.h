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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateTaskInstance request structure.
                */
                class TerminateTaskInstanceRequest : public AbstractModel
                {
                public:
                    TerminateTaskInstanceRequest();
                    ~TerminateTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID
                     * @return JobId Job ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID
                     * @param _jobId Job ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Task instance index
                     * @return TaskInstanceIndex Task instance index
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置Task instance index
                     * @param _taskInstanceIndex Task instance index
                     * 
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                private:

                    /**
                     * Job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task instance index
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_
