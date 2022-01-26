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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance information
                */
                class JobView : public AbstractModel
                {
                public:
                    JobView();
                    ~JobView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Instance name
                     * @return JobName Instance name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Instance name
                     * @param JobName Instance name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Instance state
                     * @return JobState Instance state
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置Instance state
                     * @param JobState Instance state
                     */
                    void SetJobState(const std::string& _jobState);

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取Instance priority
                     * @return Priority Instance priority
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Instance priority
                     * @param Priority Instance priority
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Placement Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Placement Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task statistical metrics
                     * @return TaskMetrics Task statistical metrics
                     */
                    TaskMetrics GetTaskMetrics() const;

                    /**
                     * 设置Task statistical metrics
                     * @param TaskMetrics Task statistical metrics
                     */
                    void SetTaskMetrics(const TaskMetrics& _taskMetrics);

                    /**
                     * 判断参数 TaskMetrics 是否已赋值
                     * @return TaskMetrics 是否已赋值
                     */
                    bool TaskMetricsHasBeenSet() const;

                    /**
                     * 获取Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Instance state
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * Instance priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Location information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task statistical metrics
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                    /**
                     * Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
