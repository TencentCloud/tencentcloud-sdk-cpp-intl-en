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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/StandardUserInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workspace information
                */
                class WorkspaceInfo : public AbstractModel
                {
                public:
                    WorkspaceInfo();
                    ~WorkspaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workspace ID
                     * @return WorkspaceId Workspace ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Workspace ID
                     * @param _workspaceId Workspace ID
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
                     * 获取Workspace name
                     * @return WorkspaceName Workspace name
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置Workspace name
                     * @param _workspaceName Workspace name
                     * 
                     */
                    void SetWorkspaceName(const std::string& _workspaceName);

                    /**
                     * 判断参数 WorkspaceName 是否已赋值
                     * @return WorkspaceName 是否已赋值
                     * 
                     */
                    bool WorkspaceNameHasBeenSet() const;

                    /**
                     * 获取Workspace description
                     * @return Description Workspace description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Workspace description
                     * @param _description Workspace description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Workspace region (for example, ap-guangzhou)
                     * @return WorkspaceRegion Workspace region (for example, ap-guangzhou)
                     * 
                     */
                    std::string GetWorkspaceRegion() const;

                    /**
                     * 设置Workspace region (for example, ap-guangzhou)
                     * @param _workspaceRegion Workspace region (for example, ap-guangzhou)
                     * 
                     */
                    void SetWorkspaceRegion(const std::string& _workspaceRegion);

                    /**
                     * 判断参数 WorkspaceRegion 是否已赋值
                     * @return WorkspaceRegion 是否已赋值
                     * 
                     */
                    bool WorkspaceRegionHasBeenSet() const;

                    /**
                     * 获取Workspace status: 0=unspecified, 1=creating, 2=creation failed, 3=operating normally, 4=deleted.
                     * @return Status Workspace status: 0=unspecified, 1=creating, 2=creation failed, 3=operating normally, 4=deleted.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Workspace status: 0=unspecified, 1=creating, 2=creation failed, 3=operating normally, 4=deleted.
                     * @param _status Workspace status: 0=unspecified, 1=creating, 2=creation failed, 3=operating normally, 4=deleted.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Failure reason (valid when Status=2, indicating creation failure)
                     * @return ErrorReason Failure reason (valid when Status=2, indicating creation failure)
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置Failure reason (valid when Status=2, indicating creation failure)
                     * @param _errorReason Failure reason (valid when Status=2, indicating creation failure)
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                    /**
                     * 获取Creator information
                     * @return Creator Creator information
                     * 
                     */
                    StandardUserInfo GetCreator() const;

                    /**
                     * 设置Creator information
                     * @param _creator Creator information
                     * 
                     */
                    void SetCreator(const StandardUserInfo& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation time. Millisecond timestamp
                     * @return CreateTime Creation time. Millisecond timestamp
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Millisecond timestamp
                     * @param _createTime Creation time. Millisecond timestamp
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
                     * 获取Last update time. Timestamp in milliseconds
                     * @return UpdateTime Last update time. Timestamp in milliseconds
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time. Timestamp in milliseconds
                     * @param _updateTime Last update time. Timestamp in milliseconds
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
                     * 获取Whether the current user has access permission for the workspace
                     * @return HasAccess Whether the current user has access permission for the workspace
                     * 
                     */
                    bool GetHasAccess() const;

                    /**
                     * 设置Whether the current user has access permission for the workspace
                     * @param _hasAccess Whether the current user has access permission for the workspace
                     * 
                     */
                    void SetHasAccess(const bool& _hasAccess);

                    /**
                     * 判断参数 HasAccess 是否已赋值
                     * @return HasAccess 是否已赋值
                     * 
                     */
                    bool HasAccessHasBeenSet() const;

                private:

                    /**
                     * Workspace ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * Workspace name
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * Workspace description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Workspace region (for example, ap-guangzhou)
                     */
                    std::string m_workspaceRegion;
                    bool m_workspaceRegionHasBeenSet;

                    /**
                     * Workspace status: 0=unspecified, 1=creating, 2=creation failed, 3=operating normally, 4=deleted.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Failure reason (valid when Status=2, indicating creation failure)
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * Creator information
                     */
                    StandardUserInfo m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation time. Millisecond timestamp
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time. Timestamp in milliseconds
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether the current user has access permission for the workspace
                     */
                    bool m_hasAccess;
                    bool m_hasAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_
