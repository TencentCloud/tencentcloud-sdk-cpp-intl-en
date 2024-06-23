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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDEROPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDEROPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Folder Attributes
                */
                class FolderOpsDto : public AbstractModel
                {
                public:
                    FolderOpsDto();
                    ~FolderOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Parent Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentsFolderId Parent Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置Parent Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentsFolderId Parent Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Total Workflows
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Total Total Workflows
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total Workflows
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _total Total Workflows
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Workflow ListNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Workflows Workflow ListNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<WorkflowCanvasOpsDto> GetWorkflows() const;

                    /**
                     * 设置Workflow ListNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflows Workflow ListNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Total Subfolders
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalFolders Total Subfolders
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalFolders() const;

                    /**
                     * 设置Total Subfolders
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalFolders Total Subfolders
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalFolders(const int64_t& _totalFolders);

                    /**
                     * 判断参数 TotalFolders 是否已赋值
                     * @return TotalFolders 是否已赋值
                     * 
                     */
                    bool TotalFoldersHasBeenSet() const;

                    /**
                     * 获取Subfolder List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FoldersList Subfolder List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFoldersList() const;

                    /**
                     * 设置Subfolder List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _foldersList Subfolder List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFoldersList(const std::string& _foldersList);

                    /**
                     * 判断参数 FoldersList 是否已赋值
                     * @return FoldersList 是否已赋值
                     * 
                     */
                    bool FoldersListHasBeenSet() const;

                    /**
                     * 获取Search typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FindType Search typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFindType() const;

                    /**
                     * 设置Search typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _findType Search typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFindType(const std::string& _findType);

                    /**
                     * 判断参数 FindType 是否已赋值
                     * @return FindType 是否已赋值
                     * 
                     */
                    bool FindTypeHasBeenSet() const;

                private:

                    /**
                     * Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Parent Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * Total Workflows
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Workflow ListNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<WorkflowCanvasOpsDto> m_workflows;
                    bool m_workflowsHasBeenSet;

                    /**
                     * Total Subfolders
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalFolders;
                    bool m_totalFoldersHasBeenSet;

                    /**
                     * Subfolder List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_foldersList;
                    bool m_foldersListHasBeenSet;

                    /**
                     * Search typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_findType;
                    bool m_findTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDEROPSDTO_H_
