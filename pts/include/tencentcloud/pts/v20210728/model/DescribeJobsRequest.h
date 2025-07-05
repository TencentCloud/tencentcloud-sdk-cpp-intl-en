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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeJobs request structure.
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of Scenario ID.
                     * @return ScenarioIds Array of Scenario ID.
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置Array of Scenario ID.
                     * @param _scenarioIds Array of Scenario ID.
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                    /**
                     * 获取Array of Project ID.
                     * @return ProjectIds Array of Project ID.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Array of Project ID.
                     * @param _projectIds Array of Project ID.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value is 0.
                     * @return Offset Offset. Default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value is 0.
                     * @param _offset Offset. Default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returns. Default value is 20, maximum is 100
                     * @return Limit Number of returns. Default value is 20, maximum is 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns. Default value is 20, maximum is 100
                     * @param _limit Number of returns. Default value is 20, maximum is 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Array of Job ID.
                     * @return JobIds Array of Job ID.
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置Array of Job ID.
                     * @param _jobIds Array of Job ID.
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取Column for sorting.
                     * @return OrderBy Column for sorting.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Column for sorting.
                     * @param _orderBy Column for sorting.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Whether in ascending order.
                     * @return Ascend Whether in ascending order.
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置Whether in ascending order.
                     * @param _ascend Whether in ascending order.
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取Start time of the job.
                     * @return StartTime Start time of the job.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the job.
                     * @param _startTime Start time of the job.
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
                     * 获取End time of the job.
                     * @return EndTime End time of the job.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the job.
                     * @param _endTime End time of the job.
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
                     * 获取Whether debug jobs.
                     * @return Debug Whether debug jobs.
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置Whether debug jobs.
                     * @param _debug Whether debug jobs.
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取Job status.
                     * @return Status Job status.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Job status.
                     * @param _status Job status.
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Array of Scenario ID.
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * Array of Project ID.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Offset. Default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. Default value is 20, maximum is 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Array of Job ID.
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * Column for sorting.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether in ascending order.
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * Start time of the job.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the job.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether debug jobs.
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * Job status.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_
