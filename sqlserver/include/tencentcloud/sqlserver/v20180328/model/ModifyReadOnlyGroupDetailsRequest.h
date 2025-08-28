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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstanceWeightPair.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyReadOnlyGroupDetails request structure.
                */
                class ModifyReadOnlyGroupDetailsRequest : public AbstractModel
                {
                public:
                    ModifyReadOnlyGroupDetailsRequest();
                    ~ModifyReadOnlyGroupDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Primary instance ID, in the format of mssql-3l3fgqn7.
                     * @return InstanceId Primary instance ID, in the format of mssql-3l3fgqn7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Primary instance ID, in the format of mssql-3l3fgqn7.
                     * @param _instanceId Primary instance ID, in the format of mssql-3l3fgqn7.
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
                     * 获取Read-only group ID.
                     * @return ReadOnlyGroupId Read-only group ID.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置Read-only group ID.
                     * @param _readOnlyGroupId Read-only group ID.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取Read-only group name. The modification is not performed if this parameter is left unspecified.
                     * @return ReadOnlyGroupName Read-only group name. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置Read-only group name. The modification is not performed if this parameter is left unspecified.
                     * @param _readOnlyGroupName Read-only group name. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable the delayed read-only instance removal feature. 0 - disabled; 1 - enabled. The modification is not performed if this parameter is left unspecified.
                     * @return IsOfflineDelay Whether to enable the delayed read-only instance removal feature. 0 - disabled; 1 - enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 设置Whether to enable the delayed read-only instance removal feature. 0 - disabled; 1 - enabled. The modification is not performed if this parameter is left unspecified.
                     * @param _isOfflineDelay Whether to enable the delayed read-only instance removal feature. 0 - disabled; 1 - enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    void SetIsOfflineDelay(const int64_t& _isOfflineDelay);

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取Timeout threshold used after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * @return ReadOnlyMaxDelayTime Timeout threshold used after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 设置Timeout threshold used after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * @param _readOnlyMaxDelayTime Timeout threshold used after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    void SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * @return MinReadOnlyInGroup Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 设置Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * @param _minReadOnlyInGroup Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    void SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup);

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取Collection of read-only group instance weight modification. The modification is not performed if this parameter is left unspecified.
                     * @return WeightPairs Collection of read-only group instance weight modification. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    std::vector<ReadOnlyInstanceWeightPair> GetWeightPairs() const;

                    /**
                     * 设置Collection of read-only group instance weight modification. The modification is not performed if this parameter is left unspecified.
                     * @param _weightPairs Collection of read-only group instance weight modification. The modification is not performed if this parameter is left unspecified.
                     * 
                     */
                    void SetWeightPairs(const std::vector<ReadOnlyInstanceWeightPair>& _weightPairs);

                    /**
                     * 判断参数 WeightPairs 是否已赋值
                     * @return WeightPairs 是否已赋值
                     * 
                     */
                    bool WeightPairsHasBeenSet() const;

                    /**
                     * 获取0 - user-defined weight (adjust according to WeightPairs); 1 - automatically assigned weight by the system (invalid WeightPairs). The default value is 0.
                     * @return AutoWeight 0 - user-defined weight (adjust according to WeightPairs); 1 - automatically assigned weight by the system (invalid WeightPairs). The default value is 0.
                     * 
                     */
                    int64_t GetAutoWeight() const;

                    /**
                     * 设置0 - user-defined weight (adjust according to WeightPairs); 1 - automatically assigned weight by the system (invalid WeightPairs). The default value is 0.
                     * @param _autoWeight 0 - user-defined weight (adjust according to WeightPairs); 1 - automatically assigned weight by the system (invalid WeightPairs). The default value is 0.
                     * 
                     */
                    void SetAutoWeight(const int64_t& _autoWeight);

                    /**
                     * 判断参数 AutoWeight 是否已赋值
                     * @return AutoWeight 是否已赋值
                     * 
                     */
                    bool AutoWeightHasBeenSet() const;

                    /**
                     * 获取0 - not rebalance the load; 1 - rebalance the load. The default value is 0.
                     * @return BalanceWeight 0 - not rebalance the load; 1 - rebalance the load. The default value is 0.
                     * 
                     */
                    int64_t GetBalanceWeight() const;

                    /**
                     * 设置0 - not rebalance the load; 1 - rebalance the load. The default value is 0.
                     * @param _balanceWeight 0 - not rebalance the load; 1 - rebalance the load. The default value is 0.
                     * 
                     */
                    void SetBalanceWeight(const int64_t& _balanceWeight);

                    /**
                     * 判断参数 BalanceWeight 是否已赋值
                     * @return BalanceWeight 是否已赋值
                     * 
                     */
                    bool BalanceWeightHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID, in the format of mssql-3l3fgqn7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-only group ID.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Read-only group name. The modification is not performed if this parameter is left unspecified.
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Whether to enable the delayed read-only instance removal feature. 0 - disabled; 1 - enabled. The modification is not performed if this parameter is left unspecified.
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * Timeout threshold used after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled. The modification is not performed if this parameter is left unspecified.
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * Collection of read-only group instance weight modification. The modification is not performed if this parameter is left unspecified.
                     */
                    std::vector<ReadOnlyInstanceWeightPair> m_weightPairs;
                    bool m_weightPairsHasBeenSet;

                    /**
                     * 0 - user-defined weight (adjust according to WeightPairs); 1 - automatically assigned weight by the system (invalid WeightPairs). The default value is 0.
                     */
                    int64_t m_autoWeight;
                    bool m_autoWeightHasBeenSet;

                    /**
                     * 0 - not rebalance the load; 1 - rebalance the load. The default value is 0.
                     */
                    int64_t m_balanceWeight;
                    bool m_balanceWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYREADONLYGROUPDETAILSREQUEST_H_
