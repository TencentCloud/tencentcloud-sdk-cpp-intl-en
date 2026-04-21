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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTriggerTaskRuns request structure.
                */
                class ListTriggerTaskRunsRequest : public AbstractModel
                {
                public:
                    ListTriggerTaskRunsRequest();
                    ~ListTriggerTaskRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Filtering parameters: Keyword for task name or ID query, WorkflowId for workflow ID query, FolderId for folder query, InChargeUin for responsible person query, WorkflowExecutionId for workflow execution ID, ExecutionId for task execution ID, TaskId for task ID, ScheduleTimeGreaterEqual / ScheduleTimeLessEqual for planned scheduling time interval
                     * @return Filters Filtering parameters: Keyword for task name or ID query, WorkflowId for workflow ID query, FolderId for folder query, InChargeUin for responsible person query, WorkflowExecutionId for workflow execution ID, ExecutionId for task execution ID, TaskId for task ID, ScheduleTimeGreaterEqual / ScheduleTimeLessEqual for planned scheduling time interval
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering parameters: Keyword for task name or ID query, WorkflowId for workflow ID query, FolderId for folder query, InChargeUin for responsible person query, WorkflowExecutionId for workflow execution ID, ExecutionId for task execution ID, TaskId for task ID, ScheduleTimeGreaterEqual / ScheduleTimeLessEqual for planned scheduling time interval
                     * @param _filters Filtering parameters: Keyword for task name or ID query, WorkflowId for workflow ID query, FolderId for folder query, InChargeUin for responsible person query, WorkflowExecutionId for workflow execution ID, ExecutionId for task execution ID, TaskId for task ID, ScheduleTimeGreaterEqual / ScheduleTimeLessEqual for planned scheduling time interval
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field, sorting field name as follows: start time: CreateTime, end time: EndTime, scheduled dispatch time: ScheduleTime
                     * @return OrderFields Sorting field, sorting field name as follows: start time: CreateTime, end time: EndTime, scheduled dispatch time: ScheduleTime
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置Sorting field, sorting field name as follows: start time: CreateTime, end time: EndTime, scheduled dispatch time: ScheduleTime
                     * @param _orderFields Sorting field, sorting field name as follows: start time: CreateTime, end time: EndTime, scheduled dispatch time: ScheduleTime
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Filtering parameters: Keyword for task name or ID query, WorkflowId for workflow ID query, FolderId for folder query, InChargeUin for responsible person query, WorkflowExecutionId for workflow execution ID, ExecutionId for task execution ID, TaskId for task ID, ScheduleTimeGreaterEqual / ScheduleTimeLessEqual for planned scheduling time interval
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field, sorting field name as follows: start time: CreateTime, end time: EndTime, scheduled dispatch time: ScheduleTime
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNSREQUEST_H_
