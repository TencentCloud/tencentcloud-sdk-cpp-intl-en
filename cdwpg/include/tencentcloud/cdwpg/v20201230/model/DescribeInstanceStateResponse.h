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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeInstanceState response structure.
                */
                class DescribeInstanceStateResponse : public AbstractModel
                {
                public:
                    DescribeInstanceStateResponse();
                    ~DescribeInstanceStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance status. Example: serving.
                     * @return InstanceState Instance status. Example: serving.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Creation time of instance operation.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowCreateTime Creation time of instance operation.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance operation name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowName Instance operation name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取Instance operation progress.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowProgress Instance operation progress.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFlowProgress() const;

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取Instance status description. Example: running.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStateDesc Instance status description. Example: running.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

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
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取The name of the current step. Example: "Purchasing resources."Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessName The name of the current step. Example: "Purchasing resources."Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Enabling status of the instance backup task.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupStatus Enabling status of the instance backup task.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupStatus() const;

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                private:

                    /**
                     * Instance status. Example: serving.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Creation time of instance operation.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * Instance operation name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Instance operation progress.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * Instance status description. Example: running.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The name of the current step. Example: "Purchasing resources."Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Enabling status of the instance backup task.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
