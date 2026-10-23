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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/LogAnalysisDownloadTask.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisDownloadTasks response structure.
                */
                class DescribeLogAnalysisDownloadTasksResponse : public AbstractModel
                {
                public:
                    DescribeLogAnalysisDownloadTasksResponse();
                    ~DescribeLogAnalysisDownloadTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of entries for the log analysis download task that meets the match condition.</p>
                     * @return TotalCount <p>Total number of entries for the log analysis download task that meets the match condition.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Download task list for log analysis that meets the log match condition.</p>
                     * @return Tasks <p>Download task list for log analysis that meets the log match condition.</p>
                     * 
                     */
                    std::vector<LogAnalysisDownloadTask> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of entries for the log analysis download task that meets the match condition.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Download task list for log analysis that meets the log match condition.</p>
                     */
                    std::vector<LogAnalysisDownloadTask> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSRESPONSE_H_
