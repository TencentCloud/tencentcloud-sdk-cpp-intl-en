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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Workflow
                */
                class WorkflowExtOpsDto : public AbstractModel
                {
                public:
                    WorkflowExtOpsDto();
                    ~WorkflowExtOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Tasks Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskCount Number of Tasks Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of Tasks Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskCount Number of Tasks Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderName File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderName File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkFlowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workFlowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Person in charge userId\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerId Person in charge userId\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置Person in charge userId\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerId Person in charge userId\nNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkFlowDesc Workflow DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkFlowDesc() const;

                    /**
                     * 设置Workflow DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workFlowDesc Workflow DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkFlowDesc(const std::string& _workFlowDesc);

                    /**
                     * 判断参数 WorkFlowDesc 是否已赋值
                     * @return WorkFlowDesc 是否已赋值
                     * 
                     */
                    bool WorkFlowDescHasBeenSet() const;

                    /**
                     * 获取Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkFlowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkFlowName() const;

                    /**
                     * 设置Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workFlowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkFlowName(const std::string& _workFlowName);

                    /**
                     * 判断参数 WorkFlowName 是否已赋值
                     * @return WorkFlowName 是否已赋值
                     * 
                     */
                    bool WorkFlowNameHasBeenSet() const;

                    /**
                     * 获取Workflow file id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Workflow file id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Workflow file id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Workflow file id\nNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow statusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Workflow statusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow statusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Workflow statusNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow creation time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Workflow creation time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Workflow creation time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Workflow creation time\nNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Last update time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ModifyTime Last update time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last update time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _modifyTime Last update time\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Number of Tasks Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * File NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Person in charge userId\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Workflow DescriptionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workFlowDesc;
                    bool m_workFlowDescHasBeenSet;

                    /**
                     * Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workFlowName;
                    bool m_workFlowNameHasBeenSet;

                    /**
                     * Workflow file id\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow statusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Workflow creation time\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_
