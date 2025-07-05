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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_

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
                * DescribeBatchOperateTask request structure.
                */
                class DescribeBatchOperateTaskRequest : public AbstractModel
                {
                public:
                    DescribeBatchOperateTaskRequest();
                    ~DescribeBatchOperateTaskRequest() = default;
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
                     * 获取Page Number
                     * @return Page Page Number
                     * 
                     */
                    std::string GetPage() const;

                    /**
                     * 设置Page Number
                     * @param _page Page Number
                     * 
                     */
                    void SetPage(const std::string& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Page Number
                     * @return Size Page Number
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Page Number
                     * @param _size Page Number
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Status ListDraft: 'NS','N','P','R'
Running: 'Y'
Stopped: 'F'
Frozen: 'O'
Stopping: 'T'
                     * @return StatusList Status ListDraft: 'NS','N','P','R'
Running: 'Y'
Stopped: 'F'
Frozen: 'O'
Stopping: 'T'
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置Status ListDraft: 'NS','N','P','R'
Running: 'Y'
Stopped: 'F'
Frozen: 'O'
Stopping: 'T'
                     * @param _statusList Status ListDraft: 'NS','N','P','R'
Running: 'Y'
Stopped: 'F'
Frozen: 'O'
Stopping: 'T'
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取List of Responsible Persons
                     * @return OwnerNameList List of Responsible Persons
                     * 
                     */
                    std::vector<std::string> GetOwnerNameList() const;

                    /**
                     * 设置List of Responsible Persons
                     * @param _ownerNameList List of Responsible Persons
                     * 
                     */
                    void SetOwnerNameList(const std::vector<std::string>& _ownerNameList);

                    /**
                     * 判断参数 OwnerNameList 是否已赋值
                     * @return OwnerNameList 是否已赋值
                     * 
                     */
                    bool OwnerNameListHasBeenSet() const;

                    /**
                     * 获取Workflow List
                     * @return WorkflowIdList Workflow List
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置Workflow List
                     * @param _workflowIdList Workflow List
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
                     * 获取Task Name Search
                     * @return TaskNameFilter Task Name Search
                     * 
                     */
                    std::string GetTaskNameFilter() const;

                    /**
                     * 设置Task Name Search
                     * @param _taskNameFilter Task Name Search
                     * 
                     */
                    void SetTaskNameFilter(const std::string& _taskNameFilter);

                    /**
                     * 判断参数 TaskNameFilter 是否已赋值
                     * @return TaskNameFilter 是否已赋值
                     * 
                     */
                    bool TaskNameFilterHasBeenSet() const;

                    /**
                     * 获取Task Type List
                     * @return TaskTypeList Task Type List
                     * 
                     */
                    std::vector<std::string> GetTaskTypeList() const;

                    /**
                     * 设置Task Type List
                     * @param _taskTypeList Task Type List
                     * 
                     */
                    void SetTaskTypeList(const std::vector<std::string>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取Folder List
                     * @return FordIdList Folder List
                     * 
                     */
                    std::vector<std::string> GetFordIdList() const;

                    /**
                     * 设置Folder List
                     * @param _fordIdList Folder List
                     * 
                     */
                    void SetFordIdList(const std::vector<std::string>& _fordIdList);

                    /**
                     * 判断参数 FordIdList 是否已赋值
                     * @return FordIdList 是否已赋值
                     * 
                     */
                    bool FordIdListHasBeenSet() const;

                    /**
                     * 获取Task ID Search
                     * @return TaskIdFilter Task ID Search
                     * 
                     */
                    std::string GetTaskIdFilter() const;

                    /**
                     * 设置Task ID Search
                     * @param _taskIdFilter Task ID Search
                     * 
                     */
                    void SetTaskIdFilter(const std::string& _taskIdFilter);

                    /**
                     * 判断参数 TaskIdFilter 是否已赋值
                     * @return TaskIdFilter 是否已赋值
                     * 
                     */
                    bool TaskIdFilterHasBeenSet() const;

                    /**
                     * 获取Responsible Person Search
                     * @return OwnerNameFilter Responsible Person Search
                     * 
                     */
                    std::string GetOwnerNameFilter() const;

                    /**
                     * 设置Responsible Person Search
                     * @param _ownerNameFilter Responsible Person Search
                     * 
                     */
                    void SetOwnerNameFilter(const std::string& _ownerNameFilter);

                    /**
                     * 判断参数 OwnerNameFilter 是否已赋值
                     * @return OwnerNameFilter 是否已赋值
                     * 
                     */
                    bool OwnerNameFilterHasBeenSet() const;

                    /**
                     * 获取Sort Fields:
UpdateTime
CreateTime
                     * @return SortItem Sort Fields:
UpdateTime
CreateTime
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sort Fields:
UpdateTime
CreateTime
                     * @param _sortItem Sort Fields:
UpdateTime
CreateTime
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
                     * 获取asc: Ascending
desc: Descending
                     * @return SortType asc: Ascending
desc: Descending
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置asc: Ascending
desc: Descending
                     * @param _sortType asc: Ascending
desc: Descending
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Engine Type List: Three Types
SparkJob
SparkSql
presto
                     * @return DataEngineList Engine Type List: Three Types
SparkJob
SparkSql
presto
                     * 
                     */
                    std::vector<std::string> GetDataEngineList() const;

                    /**
                     * 设置Engine Type List: Three Types
SparkJob
SparkSql
presto
                     * @param _dataEngineList Engine Type List: Three Types
SparkJob
SparkSql
presto
                     * 
                     */
                    void SetDataEngineList(const std::vector<std::string>& _dataEngineList);

                    /**
                     * 判断参数 DataEngineList 是否已赋值
                     * @return DataEngineList 是否已赋值
                     * 
                     */
                    bool DataEngineListHasBeenSet() const;

                    /**
                     * 获取Operator Name
                     * @return UserId Operator Name
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Operator Name
                     * @param _userId Operator Name
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return OwnerId 1
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置1
                     * @param _ownerId 1
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return TenantId 1
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置1
                     * @param _tenantId 1
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
                     * 获取Data Source ID List
                     * @return DatasourceIdList Data Source ID List
                     * 
                     */
                    std::vector<std::string> GetDatasourceIdList() const;

                    /**
                     * 设置Data Source ID List
                     * @param _datasourceIdList Data Source ID List
                     * 
                     */
                    void SetDatasourceIdList(const std::vector<std::string>& _datasourceIdList);

                    /**
                     * 判断参数 DatasourceIdList 是否已赋值
                     * @return DatasourceIdList 是否已赋值
                     * 
                     */
                    bool DatasourceIdListHasBeenSet() const;

                    /**
                     * 获取Data Source Type List
                     * @return DatasourceTypeList Data Source Type List
                     * 
                     */
                    std::vector<std::string> GetDatasourceTypeList() const;

                    /**
                     * 设置Data Source Type List
                     * @param _datasourceTypeList Data Source Type List
                     * 
                     */
                    void SetDatasourceTypeList(const std::vector<std::string>& _datasourceTypeList);

                    /**
                     * 判断参数 DatasourceTypeList 是否已赋值
                     * @return DatasourceTypeList 是否已赋值
                     * 
                     */
                    bool DatasourceTypeListHasBeenSet() const;

                    /**
                     * 获取Scheduling Unit Type List
                     * @return CycleUnitList Scheduling Unit Type List
                     * 
                     */
                    std::vector<std::string> GetCycleUnitList() const;

                    /**
                     * 设置Scheduling Unit Type List
                     * @param _cycleUnitList Scheduling Unit Type List
                     * 
                     */
                    void SetCycleUnitList(const std::vector<std::string>& _cycleUnitList);

                    /**
                     * 判断参数 CycleUnitList 是否已赋值
                     * @return CycleUnitList 是否已赋值
                     * 
                     */
                    bool CycleUnitListHasBeenSet() const;

                    /**
                     * 获取Filter out tasks that can be submitted?
                     * @return CanSubmit Filter out tasks that can be submitted?
                     * 
                     */
                    bool GetCanSubmit() const;

                    /**
                     * 设置Filter out tasks that can be submitted?
                     * @param _canSubmit Filter out tasks that can be submitted?
                     * 
                     */
                    void SetCanSubmit(const bool& _canSubmit);

                    /**
                     * 判断参数 CanSubmit 是否已赋值
                     * @return CanSubmit 是否已赋值
                     * 
                     */
                    bool CanSubmitHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page Number
                     */
                    std::string m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Page Number
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Status ListDraft: 'NS','N','P','R'
Running: 'Y'
Stopped: 'F'
Frozen: 'O'
Stopping: 'T'
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * List of Responsible Persons
                     */
                    std::vector<std::string> m_ownerNameList;
                    bool m_ownerNameListHasBeenSet;

                    /**
                     * Workflow List
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * Task Name Search
                     */
                    std::string m_taskNameFilter;
                    bool m_taskNameFilterHasBeenSet;

                    /**
                     * Task Type List
                     */
                    std::vector<std::string> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * Folder List
                     */
                    std::vector<std::string> m_fordIdList;
                    bool m_fordIdListHasBeenSet;

                    /**
                     * Task ID Search
                     */
                    std::string m_taskIdFilter;
                    bool m_taskIdFilterHasBeenSet;

                    /**
                     * Responsible Person Search
                     */
                    std::string m_ownerNameFilter;
                    bool m_ownerNameFilterHasBeenSet;

                    /**
                     * Sort Fields:
UpdateTime
CreateTime
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * asc: Ascending
desc: Descending
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Engine Type List: Three Types
SparkJob
SparkSql
presto
                     */
                    std::vector<std::string> m_dataEngineList;
                    bool m_dataEngineListHasBeenSet;

                    /**
                     * Operator Name
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Data Source ID List
                     */
                    std::vector<std::string> m_datasourceIdList;
                    bool m_datasourceIdListHasBeenSet;

                    /**
                     * Data Source Type List
                     */
                    std::vector<std::string> m_datasourceTypeList;
                    bool m_datasourceTypeListHasBeenSet;

                    /**
                     * Scheduling Unit Type List
                     */
                    std::vector<std::string> m_cycleUnitList;
                    bool m_cycleUnitListHasBeenSet;

                    /**
                     * Filter out tasks that can be submitted?
                     */
                    bool m_canSubmit;
                    bool m_canSubmitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKREQUEST_H_
