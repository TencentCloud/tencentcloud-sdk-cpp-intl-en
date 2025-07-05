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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_

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
                * DescribeSchedulerRunTimeInstanceCntByStatus request structure.
                */
                class DescribeSchedulerRunTimeInstanceCntByStatusRequest : public AbstractModel
                {
                public:
                    DescribeSchedulerRunTimeInstanceCntByStatusRequest();
                    ~DescribeSchedulerRunTimeInstanceCntByStatusRequest() = default;
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
                     * 获取Cycle Type
                     * @return CycleUnit Cycle Type
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Cycle Type
                     * @param _cycleUnit Cycle Type
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Time Unit e.g.: 12h
                     * @return TimeUnit Time Unit e.g.: 12h
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time Unit e.g.: 12h
                     * @param _timeUnit Time Unit e.g.: 12h
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Start Date: 2023-03-02
                     * @return StartTime Start Date: 2023-03-02
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Date: 2023-03-02
                     * @param _startTime Start Date: 2023-03-02
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
                     * 获取Before End Date: 2023-03-20
                     * @return EndTime Before End Date: 2023-03-20
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Before End Date: 2023-03-20
                     * @param _endTime Before End Date: 2023-03-20
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
                     * 获取Task Type
                     * @return TaskType Task Type
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task Type
                     * @param _taskType Task Type
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Person in Charge
                     * @return InCharge Person in Charge
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in Charge
                     * @param _inCharge Person in Charge
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Sort Fields
                     * @return SortItem Sort Fields
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sort Fields
                     * @param _sortItem Sort Fields
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取Ascending/Descending Order
                     * @return SortType Ascending/Descending Order
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Ascending/Descending Order
                     * @param _sortType Ascending/Descending Order
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cycle Type
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Time Unit e.g.: 12h
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Start Date: 2023-03-02
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Before End Date: 2023-03-20
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task Type
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Sort Fields
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * Ascending/Descending Order
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERRUNTIMEINSTANCECNTBYSTATUSREQUEST_H_
