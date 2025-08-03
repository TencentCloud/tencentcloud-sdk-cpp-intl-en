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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>
#include <tencentcloud/cfg/v20210820/model/ActionFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskList request structure.
                */
                class DescribeTaskListRequest : public AbstractModel
                {
                public:
                    DescribeTaskListRequest();
                    ~DescribeTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Experiment name
                     * @return TaskTitle Experiment name
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置Experiment name
                     * @param _taskTitle Experiment name
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取Tag key
                     * @return TaskTag Tag key
                     * 
                     */
                    std::vector<std::string> GetTaskTag() const;

                    /**
                     * 设置Tag key
                     * @param _taskTag Tag key
                     * 
                     */
                    void SetTaskTag(const std::vector<std::string>& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @return TaskStatus Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @param _taskStatus Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Start time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @return TaskStartTime Start time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置Start time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @param _taskStartTime Start time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取End time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @return TaskEndTime End time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置End time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @param _taskEndTime End time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取Update time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @return TaskUpdateTime Update time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetTaskUpdateTime() const;

                    /**
                     * 设置Update time, in fixed format: %Y-%m-%d %H:%M:%S
                     * @param _taskUpdateTime Update time, in fixed format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetTaskUpdateTime(const std::string& _taskUpdateTime);

                    /**
                     * 判断参数 TaskUpdateTime 是否已赋值
                     * @return TaskUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Tag pair
                     * @return Tags Tag pair
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置Tag pair
                     * @param _tags Tag pair
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Filtering criteria
                     * @return Filters Filtering criteria
                     * 
                     */
                    std::vector<ActionFilter> GetFilters() const;

                    /**
                     * 设置Filtering criteria
                     * @param _filters Filtering criteria
                     * 
                     */
                    void SetFilters(const std::vector<ActionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Experiment ID
                     * @return TaskId Experiment ID
                     * 
                     */
                    std::vector<uint64_t> GetTaskId() const;

                    /**
                     * 设置Experiment ID
                     * @param _taskId Experiment ID
                     * 
                     */
                    void SetTaskId(const std::vector<uint64_t>& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取ID of the associated application for filtering
                     * @return ApplicationId ID of the associated application for filtering
                     * 
                     */
                    std::vector<std::string> GetApplicationId() const;

                    /**
                     * 设置ID of the associated application for filtering
                     * @param _applicationId ID of the associated application for filtering
                     * 
                     */
                    void SetApplicationId(const std::vector<std::string>& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Associated application for filtering
                     * @return ApplicationName Associated application for filtering
                     * 
                     */
                    std::vector<std::string> GetApplicationName() const;

                    /**
                     * 设置Associated application for filtering
                     * @param _applicationName Associated application for filtering
                     * 
                     */
                    void SetApplicationName(const std::vector<std::string>& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Task status for filtering, supporting multiple states (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @return TaskStatusList Task status for filtering, supporting multiple states (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    std::vector<uint64_t> GetTaskStatusList() const;

                    /**
                     * 设置Task status for filtering, supporting multiple states (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * @param _taskStatusList Task status for filtering, supporting multiple states (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     * 
                     */
                    void SetTaskStatusList(const std::vector<uint64_t>& _taskStatusList);

                    /**
                     * 判断参数 TaskStatusList 是否已赋值
                     * @return TaskStatusList 是否已赋值
                     * 
                     */
                    bool TaskStatusListHasBeenSet() const;

                    /**
                     * 获取
                     * @return ArchId 
                     * 
                     */
                    std::string GetArchId() const;

                    /**
                     * 设置
                     * @param _archId 
                     * 
                     */
                    void SetArchId(const std::string& _archId);

                    /**
                     * 判断参数 ArchId 是否已赋值
                     * @return ArchId 是否已赋值
                     * 
                     */
                    bool ArchIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ArchName 
                     * 
                     */
                    std::string GetArchName() const;

                    /**
                     * 设置
                     * @param _archName 
                     * 
                     */
                    void SetArchName(const std::string& _archName);

                    /**
                     * 判断参数 ArchName 是否已赋值
                     * @return ArchName 是否已赋值
                     * 
                     */
                    bool ArchNameHasBeenSet() const;

                private:

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Experiment name
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * Tag key
                     */
                    std::vector<std::string> m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * Task status (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Start time, in fixed format: %Y-%m-%d %H:%M:%S
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * End time, in fixed format: %Y-%m-%d %H:%M:%S
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * Update time, in fixed format: %Y-%m-%d %H:%M:%S
                     */
                    std::string m_taskUpdateTime;
                    bool m_taskUpdateTimeHasBeenSet;

                    /**
                     * Tag pair
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Filtering criteria
                     */
                    std::vector<ActionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Experiment ID
                     */
                    std::vector<uint64_t> m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ID of the associated application for filtering
                     */
                    std::vector<std::string> m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Associated application for filtering
                     */
                    std::vector<std::string> m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Task status for filtering, supporting multiple states (1001: not started; 1002: in progress; 1003: paused; 1004: ended)
                     */
                    std::vector<uint64_t> m_taskStatusList;
                    bool m_taskStatusListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_archId;
                    bool m_archIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_archName;
                    bool m_archNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_
