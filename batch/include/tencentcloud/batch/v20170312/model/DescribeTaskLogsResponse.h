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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/TaskInstanceLog.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskLogs response structure.
                */
                class DescribeTaskLogsResponse : public AbstractModel
                {
                public:
                    DescribeTaskLogsResponse();
                    ~DescribeTaskLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of task instances
                     * @return TotalCount Total number of task instances
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Set of task instance log details
                     * @return TaskInstanceLogSet Set of task instance log details
                     * 
                     */
                    std::vector<TaskInstanceLog> GetTaskInstanceLogSet() const;

                    /**
                     * 判断参数 TaskInstanceLogSet 是否已赋值
                     * @return TaskInstanceLogSet 是否已赋值
                     * 
                     */
                    bool TaskInstanceLogSetHasBeenSet() const;

                private:

                    /**
                     * Total number of task instances
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Set of task instance log details
                     */
                    std::vector<TaskInstanceLog> m_taskInstanceLogSet;
                    bool m_taskInstanceLogSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSRESPONSE_H_
