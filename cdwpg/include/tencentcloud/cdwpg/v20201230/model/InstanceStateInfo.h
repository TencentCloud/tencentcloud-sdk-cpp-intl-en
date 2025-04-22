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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Instance State Information
                */
                class InstanceStateInfo : public AbstractModel
                {
                public:
                    InstanceStateInfo();
                    ~InstanceStateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance status. Example: serving.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceState Instance status. Example: serving.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. Example: serving.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceState Instance status. Example: serving.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Creation time of instance operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowCreateTime Creation time of instance operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 设置Creation time of instance operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowCreateTime Creation time of instance operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowCreateTime(const std::string& _flowCreateTime);

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance operation name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowName Instance operation name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置Instance operation name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowName Instance operation name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取Instance operation progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowProgress Instance operation progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlowProgress() const;

                    /**
                     * 设置Instance operation progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowProgress Instance operation progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowProgress(const int64_t& _flowProgress);

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取Instance status description. Example: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStateDesc Instance status description. Example: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 设置Instance status description. Example: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStateDesc Instance status description. Example: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceStateDesc(const std::string& _instanceStateDesc);

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取Instance process error messages. Example: "Creation failed, insufficient resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowMsg Instance process error messages. Example: "Creation failed, insufficient resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置Instance process error messages. Example: "Creation failed, insufficient resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowMsg Instance process error messages. Example: "Creation failed, insufficient resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取The name of the current step. Example: "Purchasing resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessName The name of the current step. Example: "Purchasing resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置The name of the current step. Example: "Purchasing resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processName The name of the current step. Example: "Purchasing resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Indicates whether there is a backup task in the instance. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStatus Indicates whether there is a backup task in the instance. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupStatus() const;

                    /**
                     * 设置Indicates whether there is a backup task in the instance. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupStatus Indicates whether there is a backup task in the instance. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupStatus(const int64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestId Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestId Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether there is a backup task in the cluster. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupOpenStatus Indicates whether there is a backup task in the cluster. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupOpenStatus() const;

                    /**
                     * 设置Indicates whether there is a backup task in the cluster. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupOpenStatus Indicates whether there is a backup task in the cluster. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupOpenStatus(const int64_t& _backupOpenStatus);

                    /**
                     * 判断参数 BackupOpenStatus 是否已赋值
                     * @return BackupOpenStatus 是否已赋值
                     * 
                     */
                    bool BackupOpenStatusHasBeenSet() const;

                private:

                    /**
                     * Instance status. Example: serving.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Creation time of instance operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * Instance operation name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Instance operation progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * Instance status description. Example: running.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * Instance process error messages. Example: "Creation failed, insufficient resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * The name of the current step. Example: "Purchasing resources."
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Indicates whether there is a backup task in the instance. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Request ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Indicates whether there is a backup task in the cluster. 1 indicates yes and 0 indicates no.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupOpenStatus;
                    bool m_backupOpenStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEINFO_H_
