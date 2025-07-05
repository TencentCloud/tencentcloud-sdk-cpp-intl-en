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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTag.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOperateOpsTasks request structure.
                */
                class DescribeOperateOpsTasksRequest : public AbstractModel
                {
                public:
                    DescribeOperateOpsTasksRequest();
                    ~DescribeOperateOpsTasksRequest() = default;
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
                     * 获取Folder ID, multiple folders separated by commas
                     * @return FolderIdList Folder ID, multiple folders separated by commas
                     * 
                     */
                    std::string GetFolderIdList() const;

                    /**
                     * 设置Folder ID, multiple folders separated by commas
                     * @param _folderIdList Folder ID, multiple folders separated by commas
                     * 
                     */
                    void SetFolderIdList(const std::string& _folderIdList);

                    /**
                     * 判断参数 FolderIdList 是否已赋值
                     * @return FolderIdList 是否已赋值
                     * 
                     */
                    bool FolderIdListHasBeenSet() const;

                    /**
                     * 获取Workflow ID, multiple Workflow IDs separated by English commas
                     * @return WorkFlowIdList Workflow ID, multiple Workflow IDs separated by English commas
                     * 
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置Workflow ID, multiple Workflow IDs separated by English commas
                     * @param _workFlowIdList Workflow ID, multiple Workflow IDs separated by English commas
                     * 
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     * 
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取Workflow name, multiple Workflow names separated by English commas
                     * @return WorkFlowNameList Workflow name, multiple Workflow names separated by English commas
                     * 
                     */
                    std::string GetWorkFlowNameList() const;

                    /**
                     * 设置Workflow name, multiple Workflow names separated by English commas
                     * @param _workFlowNameList Workflow name, multiple Workflow names separated by English commas
                     * 
                     */
                    void SetWorkFlowNameList(const std::string& _workFlowNameList);

                    /**
                     * 判断参数 WorkFlowNameList 是否已赋值
                     * @return WorkFlowNameList 是否已赋值
                     * 
                     */
                    bool WorkFlowNameListHasBeenSet() const;

                    /**
                     * 获取Task Name, multiple Task Names separated by English commas
                     * @return TaskNameList Task Name, multiple Task Names separated by English commas
                     * 
                     */
                    std::string GetTaskNameList() const;

                    /**
                     * 设置Task Name, multiple Task Names separated by English commas
                     * @param _taskNameList Task Name, multiple Task Names separated by English commas
                     * 
                     */
                    void SetTaskNameList(const std::string& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取Task ID, multiple Task IDs separated by English commas
                     * @return TaskIdList Task ID, multiple Task IDs separated by English commas
                     * 
                     */
                    std::string GetTaskIdList() const;

                    /**
                     * 设置Task ID, multiple Task IDs separated by English commas
                     * @param _taskIdList Task ID, multiple Task IDs separated by English commas
                     * 
                     */
                    void SetTaskIdList(const std::string& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
                     * 
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sort Fields, supported fields are FirstSubmitTime and FirstRunTime, indicating the most recent submission and the first execution event
                     * @return SortItem Sort Fields, supported fields are FirstSubmitTime and FirstRunTime, indicating the most recent submission and the first execution event
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sort Fields, supported fields are FirstSubmitTime and FirstRunTime, indicating the most recent submission and the first execution event
                     * @param _sortItem Sort Fields, supported fields are FirstSubmitTime and FirstRunTime, indicating the most recent submission and the first execution event
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
                     * 获取Sort Type. Two values DESC,ASC
                     * @return SortType Sort Type. Two values DESC,ASC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sort Type. Two values DESC,ASC
                     * @param _sortType Sort Type. Two values DESC,ASC
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
                     * 获取Person in Charge, multiple Persons in Charge separated by English commas
                     * @return InChargeList Person in Charge, multiple Persons in Charge separated by English commas
                     * 
                     */
                    std::string GetInChargeList() const;

                    /**
                     * 设置Person in Charge, multiple Persons in Charge separated by English commas
                     * @param _inChargeList Person in Charge, multiple Persons in Charge separated by English commas
                     * 
                     */
                    void SetInChargeList(const std::string& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取Task Type ID String, multiple Task Type IDs separated by English commas
                     * @return TaskTypeIdList Task Type ID String, multiple Task Type IDs separated by English commas
                     * 
                     */
                    std::string GetTaskTypeIdList() const;

                    /**
                     * 设置Task Type ID String, multiple Task Type IDs separated by English commas
                     * @param _taskTypeIdList Task Type ID String, multiple Task Type IDs separated by English commas
                     * 
                     */
                    void SetTaskTypeIdList(const std::string& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取Task Status String, multiple Task Statuses separated by English commas
                     * @return StatusList Task Status String, multiple Task Statuses separated by English commas
                     * 
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置Task Status String, multiple Task Statuses separated by English commas
                     * @param _statusList Task Status String, multiple Task Statuses separated by English commas
                     * 
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取Task Cycle Type String, multiple Task Cycles separated by English commas
                     * @return TaskCycleUnitList Task Cycle Type String, multiple Task Cycles separated by English commas
                     * 
                     */
                    std::string GetTaskCycleUnitList() const;

                    /**
                     * 设置Task Cycle Type String, multiple Task Cycles separated by English commas
                     * @param _taskCycleUnitList Task Cycle Type String, multiple Task Cycles separated by English commas
                     * 
                     */
                    void SetTaskCycleUnitList(const std::string& _taskCycleUnitList);

                    /**
                     * 判断参数 TaskCycleUnitList 是否已赋值
                     * @return TaskCycleUnitList 是否已赋值
                     * 
                     */
                    bool TaskCycleUnitListHasBeenSet() const;

                    /**
                     * 获取Task Belonging Product Type
                     * @return ProductNameList Task Belonging Product Type
                     * 
                     */
                    std::string GetProductNameList() const;

                    /**
                     * 设置Task Belonging Product Type
                     * @param _productNameList Task Belonging Product Type
                     * 
                     */
                    void SetProductNameList(const std::string& _productNameList);

                    /**
                     * 判断参数 ProductNameList 是否已赋值
                     * @return ProductNameList 是否已赋值
                     * 
                     */
                    bool ProductNameListHasBeenSet() const;

                    /**
                     * 获取Data Source ID or (only for offline sync tasks) Source Data Source ID
                     * @return SourceServiceId Data Source ID or (only for offline sync tasks) Source Data Source ID
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Data Source ID or (only for offline sync tasks) Source Data Source ID
                     * @param _sourceServiceId Data Source ID or (only for offline sync tasks) Source Data Source ID
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取Data Source Type or (only for offline sync tasks) Source Data Source Type
                     * @return SourceServiceType Data Source Type or (only for offline sync tasks) Source Data Source Type
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置Data Source Type or (only for offline sync tasks) Source Data Source Type
                     * @param _sourceServiceType Data Source Type or (only for offline sync tasks) Source Data Source Type
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取(Only for offline sync tasks) Target Data Source ID
                     * @return TargetServiceId (Only for offline sync tasks) Target Data Source ID
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置(Only for offline sync tasks) Target Data Source ID
                     * @param _targetServiceId (Only for offline sync tasks) Target Data Source ID
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取(Only for offline sync tasks) Target Data Source Type
                     * @return TargetServiceType (Only for offline sync tasks) Target Data Source Type
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置(Only for offline sync tasks) Target Data Source Type
                     * @param _targetServiceType (Only for offline sync tasks) Target Data Source Type
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取Alarm Type, multiple types separated by commas
                     * @return AlarmType Alarm Type, multiple types separated by commas
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Alarm Type, multiple types separated by commas
                     * @param _alarmType Alarm Type, multiple types separated by commas
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Resource Group ID, multiple Resource Group IDs separated by English commas
                     * @return ExecutorGroupIdList Resource Group ID, multiple Resource Group IDs separated by English commas
                     * 
                     */
                    std::string GetExecutorGroupIdList() const;

                    /**
                     * 设置Resource Group ID, multiple Resource Group IDs separated by English commas
                     * @param _executorGroupIdList Resource Group ID, multiple Resource Group IDs separated by English commas
                     * 
                     */
                    void SetExecutorGroupIdList(const std::string& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                    /**
                     * 获取Task tag
                     * @return TaskTags Task tag
                     * 
                     */
                    std::vector<TaskTag> GetTaskTags() const;

                    /**
                     * 设置Task tag
                     * @param _taskTags Task tag
                     * 
                     */
                    void SetTaskTags(const std::vector<TaskTag>& _taskTags);

                    /**
                     * 判断参数 TaskTags 是否已赋值
                     * @return TaskTags 是否已赋值
                     * 
                     */
                    bool TaskTagsHasBeenSet() const;

                    /**
                     * 获取Query Keyword
                     * @return KeyWord Query Keyword
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置Query Keyword
                     * @param _keyWord Query Keyword
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取Instance Generation Method
                     * @return InitStrategy Instance Generation Method
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置Instance Generation Method
                     * @param _initStrategy Instance Generation Method
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取Additional Requested Resource Types
                     * @return RequestResourceTypes Additional Requested Resource Types
                     * 
                     */
                    std::vector<std::string> GetRequestResourceTypes() const;

                    /**
                     * 设置Additional Requested Resource Types
                     * @param _requestResourceTypes Additional Requested Resource Types
                     * 
                     */
                    void SetRequestResourceTypes(const std::vector<std::string>& _requestResourceTypes);

                    /**
                     * 判断参数 RequestResourceTypes 是否已赋值
                     * @return RequestResourceTypes 是否已赋值
                     * 
                     */
                    bool RequestResourceTypesHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Folder ID, multiple folders separated by commas
                     */
                    std::string m_folderIdList;
                    bool m_folderIdListHasBeenSet;

                    /**
                     * Workflow ID, multiple Workflow IDs separated by English commas
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * Workflow name, multiple Workflow names separated by English commas
                     */
                    std::string m_workFlowNameList;
                    bool m_workFlowNameListHasBeenSet;

                    /**
                     * Task Name, multiple Task Names separated by English commas
                     */
                    std::string m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * Task ID, multiple Task IDs separated by English commas
                     */
                    std::string m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Page Number
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sort Fields, supported fields are FirstSubmitTime and FirstRunTime, indicating the most recent submission and the first execution event
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * Sort Type. Two values DESC,ASC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Person in Charge, multiple Persons in Charge separated by English commas
                     */
                    std::string m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * Task Type ID String, multiple Task Type IDs separated by English commas
                     */
                    std::string m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * Task Status String, multiple Task Statuses separated by English commas
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * Task Cycle Type String, multiple Task Cycles separated by English commas
                     */
                    std::string m_taskCycleUnitList;
                    bool m_taskCycleUnitListHasBeenSet;

                    /**
                     * Task Belonging Product Type
                     */
                    std::string m_productNameList;
                    bool m_productNameListHasBeenSet;

                    /**
                     * Data Source ID or (only for offline sync tasks) Source Data Source ID
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Data Source Type or (only for offline sync tasks) Source Data Source Type
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * (Only for offline sync tasks) Target Data Source ID
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * (Only for offline sync tasks) Target Data Source Type
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * Alarm Type, multiple types separated by commas
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Resource Group ID, multiple Resource Group IDs separated by English commas
                     */
                    std::string m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                    /**
                     * Task tag
                     */
                    std::vector<TaskTag> m_taskTags;
                    bool m_taskTagsHasBeenSet;

                    /**
                     * Query Keyword
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * Instance Generation Method
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * Additional Requested Resource Types
                     */
                    std::vector<std::string> m_requestResourceTypes;
                    bool m_requestResourceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_
