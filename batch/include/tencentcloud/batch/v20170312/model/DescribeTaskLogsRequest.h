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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_

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
                * DescribeTaskLogs request structure.
                */
                class DescribeTaskLogsRequest : public AbstractModel
                {
                public:
                    DescribeTaskLogsRequest();
                    ~DescribeTaskLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return JobId Instance ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Instance ID
                     * @param JobId Instance ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Job name
                     * @return TaskName Job name
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Job name
                     * @param TaskName Job name
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Set of task instances
                     * @return TaskInstanceIndexes Set of task instances
                     */
                    std::vector<uint64_t> GetTaskInstanceIndexes() const;

                    /**
                     * 设置Set of task instances
                     * @param TaskInstanceIndexes Set of task instances
                     */
                    void SetTaskInstanceIndexes(const std::vector<uint64_t>& _taskInstanceIndexes);

                    /**
                     * 判断参数 TaskInstanceIndexes 是否已赋值
                     * @return TaskInstanceIndexes 是否已赋值
                     */
                    bool TaskInstanceIndexesHasBeenSet() const;

                    /**
                     * 获取Starting task instance
                     * @return Offset Starting task instance
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting task instance
                     * @param Offset Starting task instance
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of task instances
                     * @return Limit Maximum number of task instances
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of task instances
                     * @param Limit Maximum number of task instances
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Job name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Set of task instances
                     */
                    std::vector<uint64_t> m_taskInstanceIndexes;
                    bool m_taskInstanceIndexesHasBeenSet;

                    /**
                     * Starting task instance
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of task instances
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_
