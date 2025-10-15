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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListOpsWorkflows request structure.
                */
                class ListOpsWorkflowsRequest : public AbstractModel
                {
                public:
                    ListOpsWorkflowsRequest();
                    ~ListOpsWorkflowsRequest() = default;
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
                     * 获取Pagination size.
                     * @return PageSize Pagination size.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _pageSize Pagination size.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Folder ID
                     * @return FolderId Folder ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
                     * @param _folderId Folder ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Workflow Status Filter

* ALL_RUNNING: All workflows are running (scheduled)

* ALL_FREEZED: All workflows are paused

* ALL_STOPPED: All workflows are offline

* PART_RUNNING: Some workflows are running (partially scheduled)

* ALL_NO_RUNNING: No workflows are running (unscheduled)

* ALL_INVALID: All workflows are invalid
                     * @return Status Workflow Status Filter

* ALL_RUNNING: All workflows are running (scheduled)

* ALL_FREEZED: All workflows are paused

* ALL_STOPPED: All workflows are offline

* PART_RUNNING: Some workflows are running (partially scheduled)

* ALL_NO_RUNNING: No workflows are running (unscheduled)

* ALL_INVALID: All workflows are invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow Status Filter

* ALL_RUNNING: All workflows are running (scheduled)

* ALL_FREEZED: All workflows are paused

* ALL_STOPPED: All workflows are offline

* PART_RUNNING: Some workflows are running (partially scheduled)

* ALL_NO_RUNNING: No workflows are running (unscheduled)

* ALL_INVALID: All workflows are invalid
                     * @param _status Workflow Status Filter

* ALL_RUNNING: All workflows are running (scheduled)

* ALL_FREEZED: All workflows are paused

* ALL_STOPPED: All workflows are offline

* PART_RUNNING: Some workflows are running (partially scheduled)

* ALL_NO_RUNNING: No workflows are running (unscheduled)

* ALL_INVALID: All workflows are invalid
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
                     * 获取Owner ID
                     * @return OwnerUin Owner ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID
                     * @param _ownerUin Owner ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Workflow type filter criteria. supported values: Cycle or Manual. default: Cycle.
                     * @return WorkflowType Workflow type filter criteria. supported values: Cycle or Manual. default: Cycle.
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Workflow type filter criteria. supported values: Cycle or Manual. default: Cycle.
                     * @param _workflowType Workflow type filter criteria. supported values: Cycle or Manual. default: Cycle.
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取Workflow keyword-based filtering supports fuzzy matching of workflow Id/name.
                     * @return KeyWord Workflow keyword-based filtering supports fuzzy matching of workflow Id/name.
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置Workflow keyword-based filtering supports fuzzy matching of workflow Id/name.
                     * @param _keyWord Workflow keyword-based filtering supports fuzzy matching of workflow Id/name.
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
                     * 获取Sort item. Options: CreateTime, TaskCount.
                     * @return SortItem Sort item. Options: CreateTime, TaskCount.
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sort item. Options: CreateTime, TaskCount.
                     * @param _sortItem Sort item. Options: CreateTime, TaskCount.
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
                     * 获取Sorting method, DESC or ASC, uppercase.
                     * @return SortType Sorting method, DESC or ASC, uppercase.
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting method, DESC or ASC, uppercase.
                     * @param _sortType Sorting method, DESC or ASC, uppercase.
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
                     * 获取CreatorId. specifies the id of the creator.
                     * @return CreateUserUin CreatorId. specifies the id of the creator.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置CreatorId. specifies the id of the creator.
                     * @param _createUserUin CreatorId. specifies the id of the creator.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Update time. format: yyyy-MM-dd HH:MM:ss.
                     * @return ModifyTime Update time. format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time. format: yyyy-MM-dd HH:MM:ss.
                     * @param _modifyTime Update time. format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation time. format: yyyy-MM-dd HH:MM:ss.
                     * @return CreateTime Creation time. format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. format: yyyy-MM-dd HH:MM:ss.
                     * @param _createTime Creation time. format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow Status Filter

* ALL_RUNNING: All workflows are running (scheduled)

* ALL_FREEZED: All workflows are paused

* ALL_STOPPED: All workflows are offline

* PART_RUNNING: Some workflows are running (partially scheduled)

* ALL_NO_RUNNING: No workflows are running (unscheduled)

* ALL_INVALID: All workflows are invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Owner ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Workflow type filter criteria. supported values: Cycle or Manual. default: Cycle.
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Workflow keyword-based filtering supports fuzzy matching of workflow Id/name.
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * Sort item. Options: CreateTime, TaskCount.
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * Sorting method, DESC or ASC, uppercase.
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * CreatorId. specifies the id of the creator.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Update time. format: yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time. format: yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSWORKFLOWSREQUEST_H_
