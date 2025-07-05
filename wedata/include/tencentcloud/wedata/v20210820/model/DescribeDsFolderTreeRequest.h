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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_

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
                * DescribeDsFolderTree request structure.
                */
                class DescribeDsFolderTreeRequest : public AbstractModel
                {
                public:
                    DescribeDsFolderTreeRequest();
                    ~DescribeDsFolderTreeRequest() = default;
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
                     * 获取Whether to Pull at First Level true Yes 
false No
                     * @return FirstLevelPull Whether to Pull at First Level true Yes 
false No
                     * 
                     */
                    bool GetFirstLevelPull() const;

                    /**
                     * 设置Whether to Pull at First Level true Yes 
false No
                     * @param _firstLevelPull Whether to Pull at First Level true Yes 
false No
                     * 
                     */
                    void SetFirstLevelPull(const bool& _firstLevelPull);

                    /**
                     * 判断参数 FirstLevelPull 是否已赋值
                     * @return FirstLevelPull 是否已赋值
                     * 
                     */
                    bool FirstLevelPullHasBeenSet() const;

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

                    /**
                     * 获取Keyword Search
                     * @return Keyword Keyword Search
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword Search
                     * @param _keyword Keyword Search
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
                     * 获取Whether to Include Workflow true Yes 
false No
                     * @return IncludeWorkflow Whether to Include Workflow true Yes 
false No
                     * 
                     */
                    bool GetIncludeWorkflow() const;

                    /**
                     * 设置Whether to Include Workflow true Yes 
false No
                     * @param _includeWorkflow Whether to Include Workflow true Yes 
false No
                     * 
                     */
                    void SetIncludeWorkflow(const bool& _includeWorkflow);

                    /**
                     * 判断参数 IncludeWorkflow 是否已赋值
                     * @return IncludeWorkflow 是否已赋值
                     * 
                     */
                    bool IncludeWorkflowHasBeenSet() const;

                    /**
                     * 获取Whether to Include Tasks true Yes 
false No
                     * @return IncludeTask Whether to Include Tasks true Yes 
false No
                     * 
                     */
                    bool GetIncludeTask() const;

                    /**
                     * 设置Whether to Include Tasks true Yes 
false No
                     * @param _includeTask Whether to Include Tasks true Yes 
false No
                     * 
                     */
                    void SetIncludeTask(const bool& _includeTask);

                    /**
                     * 判断参数 IncludeTask 是否已赋值
                     * @return IncludeTask 是否已赋值
                     * 
                     */
                    bool IncludeTaskHasBeenSet() const;

                    /**
                     * 获取Does it include virtual tasks? This parameter is effective only when IncludeTask is true, default is true
                     * @return IncludeVirtualTask Does it include virtual tasks? This parameter is effective only when IncludeTask is true, default is true
                     * 
                     */
                    bool GetIncludeVirtualTask() const;

                    /**
                     * 设置Does it include virtual tasks? This parameter is effective only when IncludeTask is true, default is true
                     * @param _includeVirtualTask Does it include virtual tasks? This parameter is effective only when IncludeTask is true, default is true
                     * 
                     */
                    void SetIncludeVirtualTask(const bool& _includeVirtualTask);

                    /**
                     * 判断参数 IncludeVirtualTask 是否已赋值
                     * @return IncludeVirtualTask 是否已赋值
                     * 
                     */
                    bool IncludeVirtualTaskHasBeenSet() const;

                    /**
                     * 获取Task directory ID
                     * @return TaskFolderId Task directory ID
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置Task directory ID
                     * @param _taskFolderId Task directory ID
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取classification. Categorized Display  catalog. Directory Display
                     * @return DisplayType classification. Categorized Display  catalog. Directory Display
                     * 
                     */
                    std::string GetDisplayType() const;

                    /**
                     * 设置classification. Categorized Display  catalog. Directory Display
                     * @param _displayType classification. Categorized Display  catalog. Directory Display
                     * 
                     */
                    void SetDisplayType(const std::string& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取Does it include task directories? true means yes
false No
                     * @return IncludeTaskFolder Does it include task directories? true means yes
false No
                     * 
                     */
                    bool GetIncludeTaskFolder() const;

                    /**
                     * 设置Does it include task directories? true means yes
false No
                     * @param _includeTaskFolder Does it include task directories? true means yes
false No
                     * 
                     */
                    void SetIncludeTaskFolder(const bool& _includeTaskFolder);

                    /**
                     * 判断参数 IncludeTaskFolder 是否已赋值
                     * @return IncludeTaskFolder 是否已赋值
                     * 
                     */
                    bool IncludeTaskFolderHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to Pull at First Level true Yes 
false No
                     */
                    bool m_firstLevelPull;
                    bool m_firstLevelPullHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Keyword Search
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Whether to Include Workflow true Yes 
false No
                     */
                    bool m_includeWorkflow;
                    bool m_includeWorkflowHasBeenSet;

                    /**
                     * Whether to Include Tasks true Yes 
false No
                     */
                    bool m_includeTask;
                    bool m_includeTaskHasBeenSet;

                    /**
                     * Does it include virtual tasks? This parameter is effective only when IncludeTask is true, default is true
                     */
                    bool m_includeVirtualTask;
                    bool m_includeVirtualTaskHasBeenSet;

                    /**
                     * Task directory ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * classification. Categorized Display  catalog. Directory Display
                     */
                    std::string m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * Does it include task directories? true means yes
false No
                     */
                    bool m_includeTaskFolder;
                    bool m_includeTaskFolderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
