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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListWorkflowRuns request structure.
                */
                class ListWorkflowRunsRequest : public AbstractModel
                {
                public:
                    ListWorkflowRunsRequest();
                    ~ListWorkflowRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @return PageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @param _pageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Workflow ID, exact match. Optional, single value</p>
                     * @return WorkflowId <p>Workflow ID, exact match. Optional, single value</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID, exact match. Optional, single value</p>
                     * @param _workflowId <p>Workflow ID, exact match. Optional, single value</p>
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
                     * 获取<p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * @return WorkflowNameKeyword <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * 
                     */
                    std::string GetWorkflowNameKeyword() const;

                    /**
                     * 设置<p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * @param _workflowNameKeyword <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * 
                     */
                    void SetWorkflowNameKeyword(const std::string& _workflowNameKeyword);

                    /**
                     * 判断参数 WorkflowNameKeyword 是否已赋值
                     * @return WorkflowNameKeyword 是否已赋值
                     * 
                     */
                    bool WorkflowNameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Lower bound for the running creation time, range match (CreateTime &gt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * @return CreateStartTime <p>Lower bound for the running creation time, range match (CreateTime &gt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * 
                     */
                    std::string GetCreateStartTime() const;

                    /**
                     * 设置<p>Lower bound for the running creation time, range match (CreateTime &gt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * @param _createStartTime <p>Lower bound for the running creation time, range match (CreateTime &gt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * 
                     */
                    void SetCreateStartTime(const std::string& _createStartTime);

                    /**
                     * 判断参数 CreateStartTime 是否已赋值
                     * @return CreateStartTime 是否已赋值
                     * 
                     */
                    bool CreateStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Upper bound for the running creation time, range match (CreateTime &lt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * @return CreateEndTime <p>Upper bound for the running creation time, range match (CreateTime &lt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * 
                     */
                    std::string GetCreateEndTime() const;

                    /**
                     * 设置<p>Upper bound for the running creation time, range match (CreateTime &lt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * @param _createEndTime <p>Upper bound for the running creation time, range match (CreateTime &lt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     * 
                     */
                    void SetCreateEndTime(const std::string& _createEndTime);

                    /**
                     * 判断参数 CreateEndTime 是否已赋值
                     * @return CreateEndTime 是否已赋值
                     * 
                     */
                    bool CreateEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>RUNNING state. Exact matching. Optional. Multiple selection (multiple values are in OR relationship with each other). RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * @return RunStates <p>RUNNING state. Exact matching. Optional. Multiple selection (multiple values are in OR relationship with each other). RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * 
                     */
                    std::vector<std::string> GetRunStates() const;

                    /**
                     * 设置<p>RUNNING state. Exact matching. Optional. Multiple selection (multiple values are in OR relationship with each other). RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * @param _runStates <p>RUNNING state. Exact matching. Optional. Multiple selection (multiple values are in OR relationship with each other). RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     * 
                     */
                    void SetRunStates(const std::vector<std::string>& _runStates);

                    /**
                     * 判断参数 RunStates 是否已赋值
                     * @return RunStates 是否已赋值
                     * 
                     */
                    bool RunStatesHasBeenSet() const;

                    /**
                     * 获取<p>Error code, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @return ErrorCodeStrings <p>Error code, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    std::vector<std::string> GetErrorCodeStrings() const;

                    /**
                     * 设置<p>Error code, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @param _errorCodeStrings <p>Error code, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    void SetErrorCodeStrings(const std::vector<std::string>& _errorCodeStrings);

                    /**
                     * 判断参数 ErrorCodeStrings 是否已赋值
                     * @return ErrorCodeStrings 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringsHasBeenSet() const;

                    /**
                     * 获取<p>Operator UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @return RunUserUins <p>Operator UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    std::vector<std::string> GetRunUserUins() const;

                    /**
                     * 设置<p>Operator UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @param _runUserUins <p>Operator UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    void SetRunUserUins(const std::vector<std::string>& _runUserUins);

                    /**
                     * 判断参数 RunUserUins 是否已赋值
                     * @return RunUserUins 是否已赋值
                     * 
                     */
                    bool RunUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>Tag name ID, exact match, obtainable through tag-related APIs. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @return LabelKeyIds <p>Tag name ID, exact match, obtainable through tag-related APIs. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    std::vector<std::string> GetLabelKeyIds() const;

                    /**
                     * 设置<p>Tag name ID, exact match, obtainable through tag-related APIs. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @param _labelKeyIds <p>Tag name ID, exact match, obtainable through tag-related APIs. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    void SetLabelKeyIds(const std::vector<std::string>& _labelKeyIds);

                    /**
                     * 判断参数 LabelKeyIds 是否已赋值
                     * @return LabelKeyIds 是否已赋值
                     * 
                     */
                    bool LabelKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>Tag value ID. Exact match. It can be obtained through the tag-related API. Optional. Multiple selection (multiple values are in OR relationship with each other)</p>
                     * @return LabelValueIds <p>Tag value ID. Exact match. It can be obtained through the tag-related API. Optional. Multiple selection (multiple values are in OR relationship with each other)</p>
                     * 
                     */
                    std::vector<std::string> GetLabelValueIds() const;

                    /**
                     * 设置<p>Tag value ID. Exact match. It can be obtained through the tag-related API. Optional. Multiple selection (multiple values are in OR relationship with each other)</p>
                     * @param _labelValueIds <p>Tag value ID. Exact match. It can be obtained through the tag-related API. Optional. Multiple selection (multiple values are in OR relationship with each other)</p>
                     * 
                     */
                    void SetLabelValueIds(const std::vector<std::string>& _labelValueIds);

                    /**
                     * 判断参数 LabelValueIds 是否已赋值
                     * @return LabelValueIds 是否已赋值
                     * 
                     */
                    bool LabelValueIdsHasBeenSet() const;

                    /**
                     * 获取<p>Sorting conditions. The priority of multiple conditions is indicated by the array order. Optional. Default: CreateTime Desc.<br>Sortable field allowlist: CreateTime, EndTime, RunCostTime</p>
                     * @return OrderBys <p>Sorting conditions. The priority of multiple conditions is indicated by the array order. Optional. Default: CreateTime Desc.<br>Sortable field allowlist: CreateTime, EndTime, RunCostTime</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Sorting conditions. The priority of multiple conditions is indicated by the array order. Optional. Default: CreateTime Desc.<br>Sortable field allowlist: CreateTime, EndTime, RunCostTime</p>
                     * @param _orderBys <p>Sorting conditions. The priority of multiple conditions is indicated by the array order. Optional. Default: CreateTime Desc.<br>Sortable field allowlist: CreateTime, EndTime, RunCostTime</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Workflow ID, exact match. Optional, single value</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     */
                    std::string m_workflowNameKeyword;
                    bool m_workflowNameKeywordHasBeenSet;

                    /**
                     * <p>Lower bound for the running creation time, range match (CreateTime &gt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     */
                    std::string m_createStartTime;
                    bool m_createStartTimeHasBeenSet;

                    /**
                     * <p>Upper bound for the running creation time, range match (CreateTime &lt;= this value), unit: timestamp in milliseconds.<br>Optional, single value, corresponding to the output parameter WorkflowRun.CreateTime</p>
                     */
                    std::string m_createEndTime;
                    bool m_createEndTimeHasBeenSet;

                    /**
                     * <p>RUNNING state. Exact matching. Optional. Multiple selection (multiple values are in OR relationship with each other). RUNNING state. CREATE("initialization"), QUEUED("Waiting"), PENDING("preparing"), RUNNING("RUNNING"), SKIPPED("skip RUNNING"), SUCCESS("successful"), FAILED("failure"), TERMINATING("TERMINATING"), TERMINATED("termination"), CANCELLED("manual termination"), etc.</p>
                     */
                    std::vector<std::string> m_runStates;
                    bool m_runStatesHasBeenSet;

                    /**
                     * <p>Error code, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     */
                    std::vector<std::string> m_errorCodeStrings;
                    bool m_errorCodeStringsHasBeenSet;

                    /**
                     * <p>Operator UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     */
                    std::vector<std::string> m_runUserUins;
                    bool m_runUserUinsHasBeenSet;

                    /**
                     * <p>Tag name ID, exact match, obtainable through tag-related APIs. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     */
                    std::vector<std::string> m_labelKeyIds;
                    bool m_labelKeyIdsHasBeenSet;

                    /**
                     * <p>Tag value ID. Exact match. It can be obtained through the tag-related API. Optional. Multiple selection (multiple values are in OR relationship with each other)</p>
                     */
                    std::vector<std::string> m_labelValueIds;
                    bool m_labelValueIdsHasBeenSet;

                    /**
                     * <p>Sorting conditions. The priority of multiple conditions is indicated by the array order. Optional. Default: CreateTime Desc.<br>Sortable field allowlist: CreateTime, EndTime, RunCostTime</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSREQUEST_H_
