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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_

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
                * DescribeStreamTaskLogList request structure.
                */
                class DescribeStreamTaskLogListRequest : public AbstractModel
                {
                public:
                    DescribeStreamTaskLogListRequest();
                    ~DescribeStreamTaskLogListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取container Name
                     * @return Container container Name
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置container Name
                     * @param _container container Name
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Number of entries
                     * @return Limit Number of entries
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries
                     * @param _limit Number of entries
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sort Type desc asc
                     * @return OrderType Sort Type desc asc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sort Type desc asc
                     * @param _orderType Sort Type desc asc
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID of Job Execution
                     * @return RunningOrderId Instance ID of Job Execution
                     * 
                     */
                    uint64_t GetRunningOrderId() const;

                    /**
                     * 设置Instance ID of Job Execution
                     * @param _runningOrderId Instance ID of Job Execution
                     * 
                     */
                    void SetRunningOrderId(const uint64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取Keyword
                     * @return Keyword Keyword
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword
                     * @param _keyword Keyword
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * End time
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start Time
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * container Name
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Number of entries
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sort Type desc asc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Instance ID of Job Execution
                     */
                    uint64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * Keyword
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_
