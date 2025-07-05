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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster's instance information
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node role: MASTER, WORKER, ETCD, MASTER_ETCD, and ALL. Default value: WORKER
                     * @return InstanceRole Node role: MASTER, WORKER, ETCD, MASTER_ETCD, and ALL. Default value: WORKER
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Node role: MASTER, WORKER, ETCD, MASTER_ETCD, and ALL. Default value: WORKER
                     * @param _instanceRole Node role: MASTER, WORKER, ETCD, MASTER_ETCD, and ALL. Default value: WORKER
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取Reason for instance exception (or initialization)
                     * @return FailedReason Reason for instance exception (or initialization)
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置Reason for instance exception (or initialization)
                     * @param _failedReason Reason for instance exception (or initialization)
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取Instance status (running, initializing, or failed)
                     * @return InstanceState Instance status (running, initializing, or failed)
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status (running, initializing, or failed)
                     * @param _instanceState Instance status (running, initializing, or failed)
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
                     * 获取Whether the instance is drained
Note: this field may return null, indicating that no valid value is obtained.
                     * @return DrainStatus Whether the instance is drained
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetDrainStatus() const;

                    /**
                     * 设置Whether the instance is drained
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _drainStatus Whether the instance is drained
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDrainStatus(const std::string& _drainStatus);

                    /**
                     * 判断参数 DrainStatus 是否已赋值
                     * @return DrainStatus 是否已赋值
                     * 
                     */
                    bool DrainStatusHasBeenSet() const;

                    /**
                     * 获取Node settings
Note: this field may return null, indicating that no valid value is obtained.
                     * @return InstanceAdvancedSettings Node settings
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Node settings
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _instanceAdvancedSettings Node settings
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Node private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LanIP Node private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置Node private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lanIP Node private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLanIP(const std::string& _lanIP);

                    /**
                     * 判断参数 LanIP 是否已赋值
                     * @return LanIP 是否已赋值
                     * 
                     */
                    bool LanIPHasBeenSet() const;

                    /**
                     * 获取Resource pool ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NodePoolId Resource pool ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Resource pool ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _nodePoolId Resource pool ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取ID of the auto-scaling group
Note: this field may return null, indicating that no valid value is obtained.
                     * @return AutoscalingGroupId ID of the auto-scaling group
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置ID of the auto-scaling group
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _autoscalingGroupId ID of the auto-scaling group
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node role: MASTER, WORKER, ETCD, MASTER_ETCD, and ALL. Default value: WORKER
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Reason for instance exception (or initialization)
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Instance status (running, initializing, or failed)
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Whether the instance is drained
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_drainStatus;
                    bool m_drainStatusHasBeenSet;

                    /**
                     * Node settings
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Node private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * Resource pool ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * ID of the auto-scaling group
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_
