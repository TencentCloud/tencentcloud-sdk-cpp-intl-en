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
                * Job information
                */
                class JobView : public AbstractModel
                {
                public:
                    JobView();
                    ~JobView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job ID
                     * @return JobId Job ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID
                     * @param JobId Job ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Job name
                     * @return JobName Job name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Job name
                     * @param JobName Job name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Job state
                     * @return JobState Job state
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置Job state
                     * @param JobState Job state
                     */
                    void SetJobState(const std::string& _jobState);

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取Job priority
                     * @return Priority Job priority
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Job priority
                     * @param Priority Job priority
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Location information
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Placement Location information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location information
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Placement Location information
Note: This field may return `null`, indicating that no valid value was found.
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
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EndTime End time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param EndTime End time
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取List of tags bound with the job.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags List of tags bound with the job.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound with the job.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags List of tags bound with the job.
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
                     * Job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Job state
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * Job priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Location information
Note: This field may return `null`, indicating that no valid value was found.
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
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task statistical metrics
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                    /**
                     * List of tags bound with the job.
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
