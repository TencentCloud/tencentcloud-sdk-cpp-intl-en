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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYSTATUSREPORTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYSTATUSREPORTREQUEST_H_

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
                * DescribeTaskByStatusReport request structure.
                */
                class DescribeTaskByStatusReportRequest : public AbstractModel
                {
                public:
                    DescribeTaskByStatusReportRequest();
                    ~DescribeTaskByStatusReportRequest() = default;
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
                     * 获取Time Type
                     * @return Type Time Type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Time Type
                     * @param _type Time Type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return TaskType Type
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Type
                     * @param _taskType Type
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Type Name
                     * @return TypeName Type Name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Type Name
                     * @param _typeName Type Name
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
                     * 获取Aggregation Unit, H Hours
                     * @return AggregationUnit Aggregation Unit, H Hours
                     * 
                     */
                    std::string GetAggregationUnit() const;

                    /**
                     * 设置Aggregation Unit, H Hours
                     * @param _aggregationUnit Aggregation Unit, H Hours
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
                     * 获取Cycle
                     * @return CycleUnit Cycle
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Cycle
                     * @param _cycleUnit Cycle
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
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Time Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Type Name
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
                     * Aggregation Unit, H Hours
                     */
                    std::string m_aggregationUnit;
                    bool m_aggregationUnitHasBeenSet;

                    /**
                     * Cycle
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYSTATUSREPORTREQUEST_H_
