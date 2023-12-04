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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * The structure returned by the audit of the network cluster asset
                */
                class NetworkAuditRecord : public AbstractModel
                {
                public:
                    NetworkAuditRecord();
                    ~NetworkAuditRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return Region Cluster region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster region
                     * @param _region Cluster region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Action
                     * @return Action Action
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action
                     * @param _action Action
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operation Operator
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operator
                     * @param _operation Operator
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return NetworkPolicyName Policy name
                     * 
                     */
                    std::string GetNetworkPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _networkPolicyName Policy name
                     * 
                     */
                    void SetNetworkPolicyName(const std::string& _networkPolicyName);

                    /**
                     * 判断参数 NetworkPolicyName 是否已赋值
                     * @return NetworkPolicyName 是否已赋值
                     * 
                     */
                    bool NetworkPolicyNameHasBeenSet() const;

                    /**
                     * 获取Operation time
                     * @return OperationTime Operation time
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置Operation time
                     * @param _operationTime Operation time
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取Operator `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId Operator `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Operator `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId Operator `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Operator UIN
                     * @return Uin Operator UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Operator UIN
                     * @param _uin Operator UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取The policy ID.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return PolicyId The policy ID.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置The policy ID.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _policyId The policy ID.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Action
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_networkPolicyName;
                    bool m_networkPolicyNameHasBeenSet;

                    /**
                     * Operation time
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * Operator `appid`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Operator UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * The policy ID.
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKAUDITRECORD_H_
