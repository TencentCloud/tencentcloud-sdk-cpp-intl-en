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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_

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
                * DescribeDrInstancePage request structure.
                */
                class DescribeDrInstancePageRequest : public AbstractModel
                {
                public:
                    DescribeDrInstancePageRequest();
                    ~DescribeDrInstancePageRequest() = default;
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
                     * 获取Task Source ADHOC || WORKFLOW
                     * @return TaskSource Task Source ADHOC || WORKFLOW
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置Task Source ADHOC || WORKFLOW
                     * @param _taskSource Task Source ADHOC || WORKFLOW
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                    /**
                     * 获取Index Page Number
                     * @return PageIndex Index Page Number
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置Index Page Number
                     * @param _pageIndex Index Page Number
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
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
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Submission Start Time yyyy-MM-dd HH:mm:ss
                     * @return StartTime Submission Start Time yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Submission Start Time yyyy-MM-dd HH:mm:ss
                     * @param _startTime Submission Start Time yyyy-MM-dd HH:mm:ss
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
                     * 获取Submission End Time yyyy-MM-dd HH:mm:ss
                     * @return EndTime Submission End Time yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Submission End Time yyyy-MM-dd HH:mm:ss
                     * @param _endTime Submission End Time yyyy-MM-dd HH:mm:ss
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
                     * 获取Folder ID
                     * @return FolderIds Folder ID
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置Folder ID
                     * @param _folderIds Folder ID
                     * 
                     */
                    void SetFolderIds(const std::vector<std::string>& _folderIds);

                    /**
                     * 判断参数 FolderIds 是否已赋值
                     * @return FolderIds 是否已赋值
                     * 
                     */
                    bool FolderIdsHasBeenSet() const;

                    /**
                     * 获取Workflow ID
                     * @return WorkflowIds Workflow ID
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowIds Workflow ID
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取View Only Mine
                     * @return JustMe View Only Mine
                     * 
                     */
                    bool GetJustMe() const;

                    /**
                     * 设置View Only Mine
                     * @param _justMe View Only Mine
                     * 
                     */
                    void SetJustMe(const bool& _justMe);

                    /**
                     * 判断参数 JustMe 是否已赋值
                     * @return JustMe 是否已赋值
                     * 
                     */
                    bool JustMeHasBeenSet() const;

                    /**
                     * 获取Task Type
                     * @return TaskTypes Task Type
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置Task Type
                     * @param _taskTypes Task Type
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取Trial Run Submitter userId List
                     * @return SubmitUsers Trial Run Submitter userId List
                     * 
                     */
                    std::vector<std::string> GetSubmitUsers() const;

                    /**
                     * 设置Trial Run Submitter userId List
                     * @param _submitUsers Trial Run Submitter userId List
                     * 
                     */
                    void SetSubmitUsers(const std::vector<std::string>& _submitUsers);

                    /**
                     * 判断参数 SubmitUsers 是否已赋值
                     * @return SubmitUsers 是否已赋值
                     * 
                     */
                    bool SubmitUsersHasBeenSet() const;

                    /**
                     * 获取Trial Run Status
                     * @return StatusList Trial Run Status
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置Trial Run Status
                     * @param _statusList Trial Run Status
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Source ADHOC || WORKFLOW
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                    /**
                     * Index Page Number
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * Page size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Submission Start Time yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Submission End Time yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * View Only Mine
                     */
                    bool m_justMe;
                    bool m_justMeHasBeenSet;

                    /**
                     * Task Type
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * Trial Run Submitter userId List
                     */
                    std::vector<std::string> m_submitUsers;
                    bool m_submitUsersHasBeenSet;

                    /**
                     * Trial Run Status
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_
