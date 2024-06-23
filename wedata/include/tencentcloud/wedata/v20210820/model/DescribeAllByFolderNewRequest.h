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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FolderOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/ProjectBaseInfoOpsRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeAllByFolderNew request structure.
                */
                class DescribeAllByFolderNewRequest : public AbstractModel
                {
                public:
                    DescribeAllByFolderNewRequest();
                    ~DescribeAllByFolderNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Folder Attributes
                     * @return Folder Folder Attributes
                     * 
                     */
                    FolderOpsDto GetFolder() const;

                    /**
                     * 设置Folder Attributes
                     * @param _folder Folder Attributes
                     * 
                     */
                    void SetFolder(const FolderOpsDto& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                    /**
                     * 获取Workflow List
                     * @return Workflows Workflow List
                     * 
                     */
                    std::vector<WorkflowCanvasOpsDto> GetWorkflows() const;

                    /**
                     * 设置Workflow List
                     * @param _workflows Workflow List
                     * 
                     */
                    void SetWorkflows(const std::vector<WorkflowCanvasOpsDto>& _workflows);

                    /**
                     * 判断参数 Workflows 是否已赋值
                     * @return Workflows 是否已赋值
                     * 
                     */
                    bool WorkflowsHasBeenSet() const;

                    /**
                     * 获取Target File ID
                     * @return TargetFolderId Target File ID
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置Target File ID
                     * @param _targetFolderId Target File ID
                     * 
                     */
                    void SetTargetFolderId(const std::string& _targetFolderId);

                    /**
                     * 判断参数 TargetFolderId 是否已赋值
                     * @return TargetFolderId 是否已赋值
                     * 
                     */
                    bool TargetFolderIdHasBeenSet() const;

                    /**
                     * 获取Keyword
                     * @return KeyWords Keyword
                     * 
                     */
                    std::string GetKeyWords() const;

                    /**
                     * 设置Keyword
                     * @param _keyWords Keyword
                     * 
                     */
                    void SetKeyWords(const std::string& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取Parent File ID
                     * @return ParentsFolderId Parent File ID
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置Parent File ID
                     * @param _parentsFolderId Parent File ID
                     * 
                     */
                    void SetParentsFolderId(const std::string& _parentsFolderId);

                    /**
                     * 判断参数 ParentsFolderId 是否已赋值
                     * @return ParentsFolderId 是否已赋值
                     * 
                     */
                    bool ParentsFolderIdHasBeenSet() const;

                    /**
                     * 获取Pull Folder List
                     * @return IsAddWorkflow Pull Folder List
                     * 
                     */
                    std::string GetIsAddWorkflow() const;

                    /**
                     * 设置Pull Folder List
                     * @param _isAddWorkflow Pull Folder List
                     * 
                     */
                    void SetIsAddWorkflow(const std::string& _isAddWorkflow);

                    /**
                     * 判断参数 IsAddWorkflow 是否已赋值
                     * @return IsAddWorkflow 是否已赋值
                     * 
                     */
                    bool IsAddWorkflowHasBeenSet() const;

                    /**
                     * 获取Task Status
                     * @return TaskStates Task Status
                     * 
                     */
                    std::vector<std::string> GetTaskStates() const;

                    /**
                     * 设置Task Status
                     * @param _taskStates Task Status
                     * 
                     */
                    void SetTaskStates(const std::vector<std::string>& _taskStates);

                    /**
                     * 判断参数 TaskStates 是否已赋值
                     * @return TaskStates 是否已赋值
                     * 
                     */
                    bool TaskStatesHasBeenSet() const;

                    /**
                     * 获取Search type
                     * @return FindType Search type
                     * 
                     */
                    std::string GetFindType() const;

                    /**
                     * 设置Search type
                     * @param _findType Search type
                     * 
                     */
                    void SetFindType(const std::string& _findType);

                    /**
                     * 判断参数 FindType 是否已赋值
                     * @return FindType 是否已赋值
                     * 
                     */
                    bool FindTypeHasBeenSet() const;

                    /**
                     * 获取Access type
                     * @return OptType Access type
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置Access type
                     * @param _optType Access type
                     * 
                     */
                    void SetOptType(const std::string& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取Operator Name
                     * @return OperatorName Operator Name
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置Operator Name
                     * @param _operatorName Operator Name
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取Operator ID
                     * @return OperatorId Operator ID
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置Operator ID
                     * @param _operatorId Operator ID
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

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
                     * 获取Project Identifier
                     * @return ProjectIdent Project Identifier
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project Identifier
                     * @param _projectIdent Project Identifier
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

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
                     * 获取Total Data
                     * @return Count Total Data
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Total Data
                     * @param _count Total Data
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Basic Request Information
                     * @return RequestBaseInfo Basic Request Information
                     * 
                     */
                    ProjectBaseInfoOpsRequest GetRequestBaseInfo() const;

                    /**
                     * 设置Basic Request Information
                     * @param _requestBaseInfo Basic Request Information
                     * 
                     */
                    void SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo);

                    /**
                     * 判断参数 RequestBaseInfo 是否已赋值
                     * @return RequestBaseInfo 是否已赋值
                     * 
                     */
                    bool RequestBaseInfoHasBeenSet() const;

                    /**
                     * 获取Whether to Calculate Total
                     * @return IsCount Whether to Calculate Total
                     * 
                     */
                    bool GetIsCount() const;

                    /**
                     * 设置Whether to Calculate Total
                     * @param _isCount Whether to Calculate Total
                     * 
                     */
                    void SetIsCount(const bool& _isCount);

                    /**
                     * 判断参数 IsCount 是否已赋值
                     * @return IsCount 是否已赋值
                     * 
                     */
                    bool IsCountHasBeenSet() const;

                private:

                    /**
                     * Folder Attributes
                     */
                    FolderOpsDto m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * Workflow List
                     */
                    std::vector<WorkflowCanvasOpsDto> m_workflows;
                    bool m_workflowsHasBeenSet;

                    /**
                     * Target File ID
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * Keyword
                     */
                    std::string m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * Parent File ID
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * Pull Folder List
                     */
                    std::string m_isAddWorkflow;
                    bool m_isAddWorkflowHasBeenSet;

                    /**
                     * Task Status
                     */
                    std::vector<std::string> m_taskStates;
                    bool m_taskStatesHasBeenSet;

                    /**
                     * Search type
                     */
                    std::string m_findType;
                    bool m_findTypeHasBeenSet;

                    /**
                     * Access type
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * Operator Name
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Operator ID
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

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
                     * Total Data
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Basic Request Information
                     */
                    ProjectBaseInfoOpsRequest m_requestBaseInfo;
                    bool m_requestBaseInfoHasBeenSet;

                    /**
                     * Whether to Calculate Total
                     */
                    bool m_isCount;
                    bool m_isCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_
