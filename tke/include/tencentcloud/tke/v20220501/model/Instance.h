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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/NativeNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/RegularNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/SuperNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/ExternalNodeInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
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
                     * 获取Cause of instance exception (or initialization)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return FailedReason Cause of instance exception (or initialization)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置Cause of instance exception (or initialization)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _failedReason Cause of instance exception (or initialization)
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Instance status

- initializing
- running
- failed
                     * @return InstanceState Instance status

- initializing
- running
- failed
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status

- initializing
- running
- failed
                     * @param _instanceState Instance status

- initializing
- running
- failed
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
                     * 获取Whether it is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Unschedulable Whether it is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置Whether it is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _unschedulable Whether it is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnschedulable(const bool& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取Adding time
                     * @return CreatedTime Adding time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Adding time
                     * @param _createdTime Adding time
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
                     * 获取Node private network IP
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return LanIP Node private network IP
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置Node private network IP
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _lanIP Node private network IP
Note: This field may return "null", indicating that no valid value can be obtained.
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

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NodePoolId Resource pool ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Resource pool ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _nodePoolId Resource pool ID

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Native node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Native Native node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    NativeNodeInfo GetNative() const;

                    /**
                     * 设置Native node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _native Native node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNative(const NativeNodeInfo& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取General node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Regular General node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    RegularNodeInfo GetRegular() const;

                    /**
                     * 设置General node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _regular General node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegular(const RegularNodeInfo& _regular);

                    /**
                     * 判断参数 Regular 是否已赋值
                     * @return Regular 是否已赋值
                     * 
                     */
                    bool RegularHasBeenSet() const;

                    /**
                     * 获取Super node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Super Super node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SuperNodeInfo GetSuper() const;

                    /**
                     * 设置Super node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _super Super node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSuper(const SuperNodeInfo& _super);

                    /**
                     * 判断参数 Super 是否已赋值
                     * @return Super 是否已赋值
                     * 
                     */
                    bool SuperHasBeenSet() const;

                    /**
                     * 获取Third-party node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return External Third-party node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    ExternalNodeInfo GetExternal() const;

                    /**
                     * 设置Third-party node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _external Third-party node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExternal(const ExternalNodeInfo& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取Node type

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NodeType Node type

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _nodeType Node type

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

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
                     * Cause of instance exception (or initialization)
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Instance status

- initializing
- running
- failed
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Whether it is unschedulable
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * Adding time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Node private network IP
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * Resource pool ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Native node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    NativeNodeInfo m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * General node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    RegularNodeInfo m_regular;
                    bool m_regularHasBeenSet;

                    /**
                     * Super node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SuperNodeInfo m_super;
                    bool m_superHasBeenSet;

                    /**
                     * Third-party node parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    ExternalNodeInfo m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * Node type

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_
