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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINEINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINEINSTANCE_H_

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
                * Offline Instance
                */
                class OfflineInstance : public AbstractModel
                {
                public:
                    OfflineInstance();
                    ~OfflineInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Create Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateUin Create Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置Create Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createUin Create Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Operate Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorUin Operate Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Operate Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorUin Operate Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Primary AccountNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUin Primary AccountNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Primary AccountNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUin Primary AccountNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取AccountsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return AppId AccountsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置AccountsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _appId AccountsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkspaceId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workspaceId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Data Timestamp
                     * @return CurRunDate Data Timestamp
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data Timestamp
                     * @param _curRunDate Data Timestamp
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Issuance time
                     * @return IssueId Issuance time
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置Issuance time
                     * @param _issueId Issuance time
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取Resource Group ID Issuance, not an input item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InlongTaskId Resource Group ID Issuance, not an input item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInlongTaskId() const;

                    /**
                     * 设置Resource Group ID Issuance, not an input item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inlongTaskId Resource Group ID Issuance, not an input item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInlongTaskId(const std::string& _inlongTaskId);

                    /**
                     * 判断参数 InlongTaskId 是否已赋值
                     * @return InlongTaskId 是否已赋值
                     * 
                     */
                    bool InlongTaskIdHasBeenSet() const;

                    /**
                     * 获取Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceGroup Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceGroup Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取Task Type (1 Debugging, 2 Scheduled Execution)
                     * @return TaskRunType Task Type (1 Debugging, 2 Scheduled Execution)
                     * 
                     */
                    uint64_t GetTaskRunType() const;

                    /**
                     * 设置Task Type (1 Debugging, 2 Scheduled Execution)
                     * @param _taskRunType Task Type (1 Debugging, 2 Scheduled Execution)
                     * 
                     */
                    void SetTaskRunType(const uint64_t& _taskRunType);

                    /**
                     * 判断参数 TaskRunType 是否已赋值
                     * @return TaskRunType 是否已赋值
                     * 
                     */
                    bool TaskRunTypeHasBeenSet() const;

                    /**
                     * 获取Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED|COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
                     * @return State Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED|COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED|COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
                     * @param _state Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED|COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime End timeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Last Updated Time
                     * @return UpdateTime Last Updated Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last Updated Time
                     * @param _updateTime Last Updated Time
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
                     * 获取Unique Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceKey Unique Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceKey Unique Key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                private:

                    /**
                     * Create Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Operate Account Sub UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Primary AccountNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * AccountsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data Timestamp
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Issuance time
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * Resource Group ID Issuance, not an input item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inlongTaskId;
                    bool m_inlongTaskIdHasBeenSet;

                    /**
                     * Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Task Type (1 Debugging, 2 Scheduled Execution)
                     */
                    uint64_t m_taskRunType;
                    bool m_taskRunTypeHasBeenSet;

                    /**
                     * Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED|COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last Updated Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Unique Key
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINEINSTANCE_H_
