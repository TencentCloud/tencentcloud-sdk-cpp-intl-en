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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Rule of tag retention task execution
                */
                class RetentionTask : public AbstractModel
                {
                public:
                    RetentionTask();
                    ~RetentionTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Rule execution ID
                     * @return ExecutionId Rule execution ID
                     * 
                     */
                    int64_t GetExecutionId() const;

                    /**
                     * 设置Rule execution ID
                     * @param _executionId Rule execution ID
                     * 
                     */
                    void SetExecutionId(const int64_t& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取Task start time
                     * @return StartTime Task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
                     * @param _startTime Task start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task end time
                     * @return EndTime Task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
                     * @param _endTime Task end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task execution status. Valid values: Failed, Succeed, Stopped, InProgress.
                     * @return Status Task execution status. Valid values: Failed, Succeed, Stopped, InProgress.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task execution status. Valid values: Failed, Succeed, Stopped, InProgress.
                     * @param _status Task execution status. Valid values: Failed, Succeed, Stopped, InProgress.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Total number of tags
                     * @return Total Total number of tags
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of tags
                     * @param _total Total number of tags
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of retained tags
                     * @return Retained Number of retained tags
                     * 
                     */
                    int64_t GetRetained() const;

                    /**
                     * 设置Number of retained tags
                     * @param _retained Number of retained tags
                     * 
                     */
                    void SetRetained(const int64_t& _retained);

                    /**
                     * 判断参数 Retained 是否已赋值
                     * @return Retained 是否已赋值
                     * 
                     */
                    bool RetainedHasBeenSet() const;

                    /**
                     * 获取Application repository
                     * @return Repository Application repository
                     * 
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置Application repository
                     * @param _repository Application repository
                     * 
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Rule execution ID
                     */
                    int64_t m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * Task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task execution status. Valid values: Failed, Succeed, Stopped, InProgress.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total number of tags
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of retained tags
                     */
                    int64_t m_retained;
                    bool m_retainedHasBeenSet;

                    /**
                     * Application repository
                     */
                    std::string m_repository;
                    bool m_repositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_
