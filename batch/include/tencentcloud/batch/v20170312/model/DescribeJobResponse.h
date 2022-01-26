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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/TaskView.h>
#include <tencentcloud/batch/v20170312/model/Dependence.h>
#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>
#include <tencentcloud/batch/v20170312/model/TaskInstanceMetrics.h>
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
                * DescribeJob response structure.
                */
                class DescribeJobResponse : public AbstractModel
                {
                public:
                    DescribeJobResponse();
                    ~DescribeJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return JobId Instance ID
                     */
                    std::string GetJobId() const;

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
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Information of availability zone
                     * @return Zone Information of availability zone
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance priority
                     * @return Priority Instance priority
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Instance state
                     * @return JobState Instance state
                     */
                    std::string GetJobState() const;

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task view information
                     * @return TaskSet Task view information
                     */
                    std::vector<TaskView> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     */
                    bool TaskSetHasBeenSet() const;

                    /**
                     * 获取Information of the dependency among tasks
                     * @return DependenceSet Information of the dependency among tasks
                     */
                    std::vector<Dependence> GetDependenceSet() const;

                    /**
                     * 判断参数 DependenceSet 是否已赋值
                     * @return DependenceSet 是否已赋值
                     */
                    bool DependenceSetHasBeenSet() const;

                    /**
                     * 获取Task statistical metrics
                     * @return TaskMetrics Task statistical metrics
                     */
                    TaskMetrics GetTaskMetrics() const;

                    /**
                     * 判断参数 TaskMetrics 是否已赋值
                     * @return TaskMetrics 是否已赋值
                     */
                    bool TaskMetricsHasBeenSet() const;

                    /**
                     * 获取Task instance statistical metrics
                     * @return TaskInstanceMetrics Task instance statistical metrics
                     */
                    TaskInstanceMetrics GetTaskInstanceMetrics() const;

                    /**
                     * 判断参数 TaskInstanceMetrics 是否已赋值
                     * @return TaskInstanceMetrics 是否已赋值
                     */
                    bool TaskInstanceMetricsHasBeenSet() const;

                    /**
                     * 获取Instance failure reason
                     * @return StateReason Instance failure reason
                     */
                    std::string GetStateReason() const;

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Next action
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NextAction Next action
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetNextAction() const;

                    /**
                     * 判断参数 NextAction 是否已赋值
                     * @return NextAction 是否已赋值
                     */
                    bool NextActionHasBeenSet() const;

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
                     * Information of availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Instance state
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task view information
                     */
                    std::vector<TaskView> m_taskSet;
                    bool m_taskSetHasBeenSet;

                    /**
                     * Information of the dependency among tasks
                     */
                    std::vector<Dependence> m_dependenceSet;
                    bool m_dependenceSetHasBeenSet;

                    /**
                     * Task statistical metrics
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                    /**
                     * Task instance statistical metrics
                     */
                    TaskInstanceMetrics m_taskInstanceMetrics;
                    bool m_taskInstanceMetricsHasBeenSet;

                    /**
                     * Instance failure reason
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * Tag list bound to the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Next action
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_nextAction;
                    bool m_nextActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBRESPONSE_H_
