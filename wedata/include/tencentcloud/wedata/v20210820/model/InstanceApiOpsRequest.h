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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Query Type
                */
                class InstanceApiOpsRequest : public AbstractModel
                {
                public:
                    InstanceApiOpsRequest();
                    ~InstanceApiOpsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Single Query Condition
                     * @return Instance Single Query Condition
                     * 
                     */
                    InstanceOpsDto GetInstance() const;

                    /**
                     * 设置Single Query Condition
                     * @param _instance Single Query Condition
                     * 
                     */
                    void SetInstance(const InstanceOpsDto& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Sort fields, currently includes: Retry Count, Instance Data Time, Runtime Duration
                     * @return SortCol Sort fields, currently includes: Retry Count, Instance Data Time, Runtime Duration
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置Sort fields, currently includes: Retry Count, Instance Data Time, Runtime Duration
                     * @param _sortCol Sort fields, currently includes: Retry Count, Instance Data Time, Runtime Duration
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取Task ID list
                     * @return TaskIdList Task ID list
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置Task ID list
                     * @param _taskIdList Task ID list
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by taskName
                     * @return TaskNameList Fuzzy search by taskName
                     * 
                     */
                    std::vector<std::string> GetTaskNameList() const;

                    /**
                     * 设置Fuzzy search by taskName
                     * @param _taskNameList Fuzzy search by taskName
                     * 
                     */
                    void SetTaskNameList(const std::vector<std::string>& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取Folder List
                     * @return FolderList Folder List
                     * 
                     */
                    std::vector<std::string> GetFolderList() const;

                    /**
                     * 设置Folder List
                     * @param _folderList Folder List
                     * 
                     */
                    void SetFolderList(const std::vector<std::string>& _folderList);

                    /**
                     * 判断参数 FolderList 是否已赋值
                     * @return FolderList 是否已赋值
                     * 
                     */
                    bool FolderListHasBeenSet() const;

                    /**
                     * 获取Ascending or Descending
                     * @return Sort Ascending or Descending
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Ascending or Descending
                     * @param _sort Ascending or Descending
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Instance Status List
                     * @return StateList Instance Status List
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置Instance Status List
                     * @param _stateList Instance Status List
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
                     * 获取Instance Type List
                     * @return TaskTypeList Instance Type List
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeList() const;

                    /**
                     * 设置Instance Type List
                     * @param _taskTypeList Instance Type List
                     * 
                     */
                    void SetTaskTypeList(const std::vector<int64_t>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取Cycle Type
                     * @return CycleList Cycle Type
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置Cycle Type
                     * @param _cycleList Cycle Type
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取Person in Charge
                     * @return OwnerList Person in Charge
                     * 
                     */
                    std::vector<std::string> GetOwnerList() const;

                    /**
                     * 设置Person in Charge
                     * @param _ownerList Person in Charge
                     * 
                     */
                    void SetOwnerList(const std::vector<std::string>& _ownerList);

                    /**
                     * 判断参数 OwnerList 是否已赋值
                     * @return OwnerList 是否已赋值
                     * 
                     */
                    bool OwnerListHasBeenSet() const;

                    /**
                     * 获取Data Timestamp
                     * @return DateFrom Data Timestamp
                     * 
                     */
                    std::string GetDateFrom() const;

                    /**
                     * 设置Data Timestamp
                     * @param _dateFrom Data Timestamp
                     * 
                     */
                    void SetDateFrom(const std::string& _dateFrom);

                    /**
                     * 判断参数 DateFrom 是否已赋值
                     * @return DateFrom 是否已赋值
                     * 
                     */
                    bool DateFromHasBeenSet() const;

                    /**
                     * 获取Data Timestamp
                     * @return DateTo Data Timestamp
                     * 
                     */
                    std::string GetDateTo() const;

                    /**
                     * 设置Data Timestamp
                     * @param _dateTo Data Timestamp
                     * 
                     */
                    void SetDateTo(const std::string& _dateTo);

                    /**
                     * 判断参数 DateTo 是否已赋值
                     * @return DateTo 是否已赋值
                     * 
                     */
                    bool DateToHasBeenSet() const;

                    /**
                     * 获取Instance Storage Time
                     * @return CreateTimeFrom Instance Storage Time
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置Instance Storage Time
                     * @param _createTimeFrom Instance Storage Time
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取Instance Storage Time
                     * @return CreateTimeTo Instance Storage Time
                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置Instance Storage Time
                     * @param _createTimeTo Instance Storage Time
                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取Start Execution Time
                     * @return StartFrom Start Execution Time
                     * 
                     */
                    std::string GetStartFrom() const;

                    /**
                     * 设置Start Execution Time
                     * @param _startFrom Start Execution Time
                     * 
                     */
                    void SetStartFrom(const std::string& _startFrom);

                    /**
                     * 判断参数 StartFrom 是否已赋值
                     * @return StartFrom 是否已赋值
                     * 
                     */
                    bool StartFromHasBeenSet() const;

                    /**
                     * 获取Start Execution Time
                     * @return StartTo Start Execution Time
                     * 
                     */
                    std::string GetStartTo() const;

                    /**
                     * 设置Start Execution Time
                     * @param _startTo Start Execution Time
                     * 
                     */
                    void SetStartTo(const std::string& _startTo);

                    /**
                     * 判断参数 StartTo 是否已赋值
                     * @return StartTo 是否已赋值
                     * 
                     */
                    bool StartToHasBeenSet() const;

                    /**
                     * 获取Belongs to Workflow
                     * @return WorkflowIdList Belongs to Workflow
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置Belongs to Workflow
                     * @param _workflowIdList Belongs to Workflow
                     * 
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     * 
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by workflowName
                     * @return WorkflowNameList Fuzzy search by workflowName
                     * 
                     */
                    std::vector<std::string> GetWorkflowNameList() const;

                    /**
                     * 设置Fuzzy search by workflowName
                     * @param _workflowNameList Fuzzy search by workflowName
                     * 
                     */
                    void SetWorkflowNameList(const std::vector<std::string>& _workflowNameList);

                    /**
                     * 判断参数 WorkflowNameList 是否已赋值
                     * @return WorkflowNameList 是否已赋值
                     * 
                     */
                    bool WorkflowNameListHasBeenSet() const;

                    /**
                     * 获取Keyword Fuzzy Search
                     * @return Keyword Keyword Fuzzy Search
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword Fuzzy Search
                     * @param _keyword Keyword Fuzzy Search
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取searchColumns are the list of field names to search
                     * @return SearchColumns searchColumns are the list of field names to search
                     * 
                     */
                    std::vector<std::string> GetSearchColumns() const;

                    /**
                     * 设置searchColumns are the list of field names to search
                     * @param _searchColumns searchColumns are the list of field names to search
                     * 
                     */
                    void SetSearchColumns(const std::vector<std::string>& _searchColumns);

                    /**
                     * 判断参数 SearchColumns 是否已赋值
                     * @return SearchColumns 是否已赋值
                     * 
                     */
                    bool SearchColumnsHasBeenSet() const;

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
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
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
                     * 获取Task Type Mapping Relationship, storing Task Type ID and Task Type Description Information
                     * @return TaskTypeMap Task Type Mapping Relationship, storing Task Type ID and Task Type Description Information
                     * 
                     */
                    std::vector<TaskTypeMap> GetTaskTypeMap() const;

                    /**
                     * 设置Task Type Mapping Relationship, storing Task Type ID and Task Type Description Information
                     * @param _taskTypeMap Task Type Mapping Relationship, storing Task Type ID and Task Type Description Information
                     * 
                     */
                    void SetTaskTypeMap(const std::vector<TaskTypeMap>& _taskTypeMap);

                    /**
                     * 判断参数 TaskTypeMap 是否已赋值
                     * @return TaskTypeMap 是否已赋值
                     * 
                     */
                    bool TaskTypeMapHasBeenSet() const;

                    /**
                     * 获取0 Supplementary Entry Type 1 Periodic Instance 2 Non-periodic Instance
                     * @return InstanceType 0 Supplementary Entry Type 1 Periodic Instance 2 Non-periodic Instance
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置0 Supplementary Entry Type 1 Periodic Instance 2 Non-periodic Instance
                     * @param _instanceType 0 Supplementary Entry Type 1 Periodic Instance 2 Non-periodic Instance
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is DAG
                     * @return DagDeal Whether it is DAG
                     * 
                     */
                    bool GetDagDeal() const;

                    /**
                     * 设置Whether it is DAG
                     * @param _dagDeal Whether it is DAG
                     * 
                     */
                    void SetDagDeal(const bool& _dagDeal);

                    /**
                     * 判断参数 DagDeal 是否已赋值
                     * @return DagDeal 是否已赋值
                     * 
                     */
                    bool DagDealHasBeenSet() const;

                    /**
                     * 获取1 Parent instance 2 Child instance
                     * @return DagType 1 Parent instance 2 Child instance
                     * 
                     */
                    std::string GetDagType() const;

                    /**
                     * 设置1 Parent instance 2 Child instance
                     * @param _dagType 1 Parent instance 2 Child instance
                     * 
                     */
                    void SetDagType(const std::string& _dagType);

                    /**
                     * 判断参数 DagType 是否已赋值
                     * @return DagType 是否已赋值
                     * 
                     */
                    bool DagTypeHasBeenSet() const;

                    /**
                     * 获取1 Self-Dependency 2 Task Dependency 3 All Dependencies
                     * @return DagDependent 1 Self-Dependency 2 Task Dependency 3 All Dependencies
                     * 
                     */
                    std::string GetDagDependent() const;

                    /**
                     * 设置1 Self-Dependency 2 Task Dependency 3 All Dependencies
                     * @param _dagDependent 1 Self-Dependency 2 Task Dependency 3 All Dependencies
                     * 
                     */
                    void SetDagDependent(const std::string& _dagDependent);

                    /**
                     * 判断参数 DagDependent 是否已赋值
                     * @return DagDependent 是否已赋值
                     * 
                     */
                    bool DagDependentHasBeenSet() const;

                    /**
                     * 获取DAG Depth Default to 1, value range 1-6
                     * @return DagDepth DAG Depth Default to 1, value range 1-6
                     * 
                     */
                    int64_t GetDagDepth() const;

                    /**
                     * 设置DAG Depth Default to 1, value range 1-6
                     * @param _dagDepth DAG Depth Default to 1, value range 1-6
                     * 
                     */
                    void SetDagDepth(const int64_t& _dagDepth);

                    /**
                     * 判断参数 DagDepth 是否已赋值
                     * @return DagDepth 是否已赋值
                     * 
                     */
                    bool DagDepthHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return TenantId Tenant ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
                     * @param _tenantId Tenant ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Inquiry based on Current Data Time or Next Data Time, default to Current Data Time
                     * @return DataTimeCycle Inquiry based on Current Data Time or Next Data Time, default to Current Data Time
                     * 
                     */
                    std::string GetDataTimeCycle() const;

                    /**
                     * 设置Inquiry based on Current Data Time or Next Data Time, default to Current Data Time
                     * @param _dataTimeCycle Inquiry based on Current Data Time or Next Data Time, default to Current Data Time
                     * 
                     */
                    void SetDataTimeCycle(const std::string& _dataTimeCycle);

                    /**
                     * 判断参数 DataTimeCycle 是否已赋值
                     * @return DataTimeCycle 是否已赋值
                     * 
                     */
                    bool DataTimeCycleHasBeenSet() const;

                    /**
                     * 获取Resource Group ID, multiple Resource Group IDs separated by English commas
                     * @return ExecutorGroupIdList Resource Group ID, multiple Resource Group IDs separated by English commas
                     * 
                     */
                    std::vector<std::string> GetExecutorGroupIdList() const;

                    /**
                     * 设置Resource Group ID, multiple Resource Group IDs separated by English commas
                     * @param _executorGroupIdList Resource Group ID, multiple Resource Group IDs separated by English commas
                     * 
                     */
                    void SetExecutorGroupIdList(const std::vector<std::string>& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                private:

                    /**
                     * Single Query Condition
                     */
                    InstanceOpsDto m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Sort fields, currently includes: Retry Count, Instance Data Time, Runtime Duration
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * Task ID list
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Fuzzy search by taskName
                     */
                    std::vector<std::string> m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * Folder List
                     */
                    std::vector<std::string> m_folderList;
                    bool m_folderListHasBeenSet;

                    /**
                     * Ascending or Descending
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Instance Status List
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * Instance Type List
                     */
                    std::vector<int64_t> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * Cycle Type
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::vector<std::string> m_ownerList;
                    bool m_ownerListHasBeenSet;

                    /**
                     * Data Timestamp
                     */
                    std::string m_dateFrom;
                    bool m_dateFromHasBeenSet;

                    /**
                     * Data Timestamp
                     */
                    std::string m_dateTo;
                    bool m_dateToHasBeenSet;

                    /**
                     * Instance Storage Time
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * Instance Storage Time
                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     * Start Execution Time
                     */
                    std::string m_startFrom;
                    bool m_startFromHasBeenSet;

                    /**
                     * Start Execution Time
                     */
                    std::string m_startTo;
                    bool m_startToHasBeenSet;

                    /**
                     * Belongs to Workflow
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * Fuzzy search by workflowName
                     */
                    std::vector<std::string> m_workflowNameList;
                    bool m_workflowNameListHasBeenSet;

                    /**
                     * Keyword Fuzzy Search
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * searchColumns are the list of field names to search
                     */
                    std::vector<std::string> m_searchColumns;
                    bool m_searchColumnsHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Task Type Mapping Relationship, storing Task Type ID and Task Type Description Information
                     */
                    std::vector<TaskTypeMap> m_taskTypeMap;
                    bool m_taskTypeMapHasBeenSet;

                    /**
                     * 0 Supplementary Entry Type 1 Periodic Instance 2 Non-periodic Instance
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Whether it is DAG
                     */
                    bool m_dagDeal;
                    bool m_dagDealHasBeenSet;

                    /**
                     * 1 Parent instance 2 Child instance
                     */
                    std::string m_dagType;
                    bool m_dagTypeHasBeenSet;

                    /**
                     * 1 Self-Dependency 2 Task Dependency 3 All Dependencies
                     */
                    std::string m_dagDependent;
                    bool m_dagDependentHasBeenSet;

                    /**
                     * DAG Depth Default to 1, value range 1-6
                     */
                    int64_t m_dagDepth;
                    bool m_dagDepthHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Inquiry based on Current Data Time or Next Data Time, default to Current Data Time
                     */
                    std::string m_dataTimeCycle;
                    bool m_dataTimeCycleHasBeenSet;

                    /**
                     * Resource Group ID, multiple Resource Group IDs separated by English commas
                     */
                    std::vector<std::string> m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_
