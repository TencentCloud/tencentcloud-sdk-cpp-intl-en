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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_

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
                * DescribeStatisticInstanceStatusTrendOps request structure.
                */
                class DescribeStatisticInstanceStatusTrendOpsRequest : public AbstractModel
                {
                public:
                    DescribeStatisticInstanceStatusTrendOpsRequest();
                    ~DescribeStatisticInstanceStatusTrendOpsRequest() = default;
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
                     * 获取Task Type Id
                     * @return TaskTypeId Task Type Id
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置Task Type Id
                     * @param _taskTypeId Task Type Id
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Time Type
                     * @return TimeType Time Type
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置Time Type
                     * @param _timeType Time Type
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取Task Type Name
                     * @return TypeName Task Type Name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Task Type Name
                     * @param _typeName Task Type Name
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Resource Group ID
                     * @return ExecutionGroupId Resource Group ID
                     * 
                     */
                    std::string GetExecutionGroupId() const;

                    /**
                     * 设置Resource Group ID
                     * @param _executionGroupId Resource Group ID
                     * 
                     */
                    void SetExecutionGroupId(const std::string& _executionGroupId);

                    /**
                     * 判断参数 ExecutionGroupId 是否已赋值
                     * @return ExecutionGroupId 是否已赋值
                     * 
                     */
                    bool ExecutionGroupIdHasBeenSet() const;

                    /**
                     * 获取Resource Group Name
                     * @return ExecutionGroupName Resource Group Name
                     * 
                     */
                    std::string GetExecutionGroupName() const;

                    /**
                     * 设置Resource Group Name
                     * @param _executionGroupName Resource Group Name
                     * 
                     */
                    void SetExecutionGroupName(const std::string& _executionGroupName);

                    /**
                     * 判断参数 ExecutionGroupName 是否已赋值
                     * @return ExecutionGroupName 是否已赋值
                     * 
                     */
                    bool ExecutionGroupNameHasBeenSet() const;

                    /**
                     * 获取1
                     * @return InCharge 1
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置1
                     * @param _inCharge 1
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
                     * 获取1
                     * @return TaskType 1
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置1
                     * @param _taskType 1
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
                     * 获取1
                     * @return StateList 1
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置1
                     * @param _stateList 1
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取D represents days, H represents hours
                     * @return AggregationUnit D represents days, H represents hours
                     * 
                     */
                    std::string GetAggregationUnit() const;

                    /**
                     * 设置D represents days, H represents hours
                     * @param _aggregationUnit D represents days, H represents hours
                     * 
                     */
                    void SetAggregationUnit(const std::string& _aggregationUnit);

                    /**
                     * 判断参数 AggregationUnit 是否已赋值
                     * @return AggregationUnit 是否已赋值
                     * 
                     */
                    bool AggregationUnitHasBeenSet() const;

                    /**
                     * 获取1
                     * @return AverageWindowSize 1
                     * 
                     */
                    int64_t GetAverageWindowSize() const;

                    /**
                     * 设置1
                     * @param _averageWindowSize 1
                     * 
                     */
                    void SetAverageWindowSize(const int64_t& _averageWindowSize);

                    /**
                     * 判断参数 AverageWindowSize 是否已赋值
                     * @return AverageWindowSize 是否已赋值
                     * 
                     */
                    bool AverageWindowSizeHasBeenSet() const;

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

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Type Id
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Time Type
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * Task Type Name
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Resource Group ID
                     */
                    std::string m_executionGroupId;
                    bool m_executionGroupIdHasBeenSet;

                    /**
                     * Resource Group Name
                     */
                    std::string m_executionGroupName;
                    bool m_executionGroupNameHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 1
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * D represents days, H represents hours
                     */
                    std::string m_aggregationUnit;
                    bool m_aggregationUnitHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_averageWindowSize;
                    bool m_averageWindowSizeHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_
