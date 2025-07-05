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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TagInfo.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
#include <tencentcloud/dlc/v20210125/model/NetworkConnection.h>
#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>
#include <tencentcloud/dlc/v20210125/model/AccessInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DataEngine details
                */
                class DataEngineInfo : public AbstractModel
                {
                public:
                    DataEngineInfo();
                    ~DataEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DataEngine name
                     * @return DataEngineName DataEngine name
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置DataEngine name
                     * @param _dataEngineName DataEngine name
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Engine type: spark/presto
                     * @return EngineType Engine type: spark/presto
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine type: spark/presto
                     * @param _engineType Engine type: spark/presto
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Cluster resource type spark_private/presto_private/presto_cu/spark_cu
                     * @return ClusterType Cluster resource type spark_private/presto_private/presto_cu/spark_cu
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster resource type spark_private/presto_private/presto_cu/spark_cu
                     * @param _clusterType Cluster resource type spark_private/presto_private/presto_cu/spark_cu
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Quota ID
                     * @return QuotaId Quota ID
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置Quota ID
                     * @param _quotaId Quota ID
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取Data engine status -2 deleted, -1 failed, 0 initializing, 1 suspended, 2 running, 3 ready to delete, and 4 deleting
                     * @return State Data engine status -2 deleted, -1 failed, 0 initializing, 1 suspended, 2 running, 3 ready to delete, and 4 deleting
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Data engine status -2 deleted, -1 failed, 0 initializing, 1 suspended, 2 running, 3 ready to delete, and 4 deleting
                     * @param _state Data engine status -2 deleted, -1 failed, 0 initializing, 1 suspended, 2 running, 3 ready to delete, and 4 deleting
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster specifications
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Size Cluster specifications
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Cluster specifications
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _size Cluster specifications
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Billing mode: 0 shared mode, 1 pay-as-you-go, and 2 monthly subscription
                     * @return Mode Billing mode: 0 shared mode, 1 pay-as-you-go, and 2 monthly subscription
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Billing mode: 0 shared mode, 1 pay-as-you-go, and 2 monthly subscription
                     * @param _mode Billing mode: 0 shared mode, 1 pay-as-you-go, and 2 monthly subscription
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Minimum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return MinClusters Minimum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置Minimum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _minClusters Minimum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     * 
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取Maximum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return MaxClusters Maximum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置Maximum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _maxClusters Maximum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     * 
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取Whether to recover automatically
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return AutoResume Whether to recover automatically
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置Whether to recover automatically
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _autoResume Whether to recover automatically
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAutoResume(const bool& _autoResume);

                    /**
                     * 判断参数 AutoResume 是否已赋值
                     * @return AutoResume 是否已赋值
                     * 
                     */
                    bool AutoResumeHasBeenSet() const;

                    /**
                     * 获取Automatic recovery time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return SpendAfter Automatic recovery time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetSpendAfter() const;

                    /**
                     * 设置Automatic recovery time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _spendAfter Automatic recovery time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSpendAfter(const int64_t& _spendAfter);

                    /**
                     * 判断参数 SpendAfter 是否已赋值
                     * @return SpendAfter 是否已赋值
                     * 
                     */
                    bool SpendAfterHasBeenSet() const;

                    /**
                     * 获取Cluster IP range
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return CidrBlock Cluster IP range
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置Cluster IP range
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _cidrBlock Cluster IP range
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return DefaultDataEngine Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetDefaultDataEngine() const;

                    /**
                     * 设置Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _defaultDataEngine Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDefaultDataEngine(const bool& _defaultDataEngine);

                    /**
                     * 判断参数 DefaultDataEngine 是否已赋值
                     * @return DefaultDataEngine 是否已赋值
                     * 
                     */
                    bool DefaultDataEngineHasBeenSet() const;

                    /**
                     * 获取Returned Message
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Message Returned Message
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Returned Message
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _message Returned Message
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Engine ID
                     * @return DataEngineId Engine ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Engine ID
                     * @param _dataEngineId Engine ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return SubAccountUin Operator
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Operator
                     * @param _subAccountUin Operator
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return IsolatedTime Isolation time
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Isolation time
                     * @param _isolatedTime Isolation time
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Rectification time
                     * @return ReversalTime Rectification time
                     * 
                     */
                    std::string GetReversalTime() const;

                    /**
                     * 设置Rectification time
                     * @param _reversalTime Rectification time
                     * 
                     */
                    void SetReversalTime(const std::string& _reversalTime);

                    /**
                     * 判断参数 ReversalTime 是否已赋值
                     * @return ReversalTime 是否已赋值
                     * 
                     */
                    bool ReversalTimeHasBeenSet() const;

                    /**
                     * 获取Username
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return UserAlias Username
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置Username
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _userAlias Username
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取Key-value pair collection
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return TagList Key-value pair collection
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置Key-value pair collection
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _tagList Key-value pair collection
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Permissions owned by the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Permissions Permissions owned by the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置Permissions owned by the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _permissions Permissions owned by the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取Whether to automatically suspend the cluster: False (by default) means that the cluster is not automatically suspended; true means that the cluster is automatically suspended.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return AutoSuspend Whether to automatically suspend the cluster: False (by default) means that the cluster is not automatically suspended; true means that the cluster is automatically suspended.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置Whether to automatically suspend the cluster: False (by default) means that the cluster is not automatically suspended; true means that the cluster is automatically suspended.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _autoSuspend Whether to automatically suspend the cluster: False (by default) means that the cluster is not automatically suspended; true means that the cluster is automatically suspended.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAutoSuspend(const bool& _autoSuspend);

                    /**
                     * 判断参数 AutoSuspend 是否已赋值
                     * @return AutoSuspend 是否已赋值
                     * 
                     */
                    bool AutoSuspendHasBeenSet() const;

                    /**
                     * 获取Scheduling policy of starting and ending the cluster: 0 (by default) indicates turning off the scheduling policy; 1 indicates turning on the scheduling policy. (Note: The scheduling policy of starting and ending the cluster and the automatic suspension policy are mutually exclusive.)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return CrontabResumeSuspend Scheduling policy of starting and ending the cluster: 0 (by default) indicates turning off the scheduling policy; 1 indicates turning on the scheduling policy. (Note: The scheduling policy of starting and ending the cluster and the automatic suspension policy are mutually exclusive.)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置Scheduling policy of starting and ending the cluster: 0 (by default) indicates turning off the scheduling policy; 1 indicates turning on the scheduling policy. (Note: The scheduling policy of starting and ending the cluster and the automatic suspension policy are mutually exclusive.)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _crontabResumeSuspend Scheduling policy of starting and ending the cluster: 0 (by default) indicates turning off the scheduling policy; 1 indicates turning on the scheduling policy. (Note: The scheduling policy of starting and ending the cluster and the automatic suspension policy are mutually exclusive.)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend);

                    /**
                     * 判断参数 CrontabResumeSuspend 是否已赋值
                     * @return CrontabResumeSuspend 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendHasBeenSet() const;

                    /**
                     * 获取Scheduled start and end policy. Complex type: Include start and end time and the cluster suspension strategy.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return CrontabResumeSuspendStrategy Scheduled start and end policy. Complex type: Include start and end time and the cluster suspension strategy.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置Scheduled start and end policy. Complex type: Include start and end time and the cluster suspension strategy.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _crontabResumeSuspendStrategy Scheduled start and end policy. Complex type: Include start and end time and the cluster suspension strategy.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy);

                    /**
                     * 判断参数 CrontabResumeSuspendStrategy 是否已赋值
                     * @return CrontabResumeSuspendStrategy 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendStrategyHasBeenSet() const;

                    /**
                     * 获取Type of the task executed by the engine. Valid value: SQL/BATCH
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineExecType Type of the task executed by the engine. Valid value: SQL/BATCH
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEngineExecType() const;

                    /**
                     * 设置Type of the task executed by the engine. Valid value: SQL/BATCH
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineExecType Type of the task executed by the engine. Valid value: SQL/BATCH
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineExecType(const std::string& _engineExecType);

                    /**
                     * 判断参数 EngineExecType 是否已赋值
                     * @return EngineExecType 是否已赋值
                     * 
                     */
                    bool EngineExecTypeHasBeenSet() const;

                    /**
                     * 获取Automatic renewal flag: 0 means the initial state and there is no automatic renewal by default. If the user has the privilege to retain services with advanced payment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return RenewFlag Automatic renewal flag: 0 means the initial state and there is no automatic renewal by default. If the user has the privilege to retain services with advanced payment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Automatic renewal flag: 0 means the initial state and there is no automatic renewal by default. If the user has the privilege to retain services with advanced payment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _renewFlag Automatic renewal flag: 0 means the initial state and there is no automatic renewal by default. If the user has the privilege to retain services with advanced payment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Cluster automatic suspension time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return AutoSuspendTime Cluster automatic suspension time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置Cluster automatic suspension time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _autoSuspendTime Cluster automatic suspension time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAutoSuspendTime(const int64_t& _autoSuspendTime);

                    /**
                     * 判断参数 AutoSuspendTime 是否已赋值
                     * @return AutoSuspendTime 是否已赋值
                     * 
                     */
                    bool AutoSuspendTimeHasBeenSet() const;

                    /**
                     * 获取Network connection configuration
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return NetworkConnectionSet Network connection configuration
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<NetworkConnection> GetNetworkConnectionSet() const;

                    /**
                     * 设置Network connection configuration
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _networkConnectionSet Network connection configuration
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetNetworkConnectionSet(const std::vector<NetworkConnection>& _networkConnectionSet);

                    /**
                     * 判断参数 NetworkConnectionSet 是否已赋值
                     * @return NetworkConnectionSet 是否已赋值
                     * 
                     */
                    bool NetworkConnectionSetHasBeenSet() const;

                    /**
                     * 获取Jump address of ui
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return UiURL Jump address of ui
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUiURL() const;

                    /**
                     * 设置Jump address of ui
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _uiURL Jump address of ui
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUiURL(const std::string& _uiURL);

                    /**
                     * 判断参数 UiURL 是否已赋值
                     * @return UiURL 是否已赋值
                     * 
                     */
                    bool UiURLHasBeenSet() const;

                    /**
                     * 获取Type of the engine resource
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ResourceType Type of the engine resource
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Type of the engine resource
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _resourceType Type of the engine resource
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ImageVersionId Cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetImageVersionId() const;

                    /**
                     * 设置Cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _imageVersionId Cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetImageVersionId(const std::string& _imageVersionId);

                    /**
                     * 判断参数 ImageVersionId 是否已赋值
                     * @return ImageVersionId 是否已赋值
                     * 
                     */
                    bool ImageVersionIdHasBeenSet() const;

                    /**
                     * 获取Minor cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ChildImageVersionId Minor cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 设置Minor cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _childImageVersionId Minor cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetChildImageVersionId(const std::string& _childImageVersionId);

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取Cluster image version name
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ImageVersionName Cluster image version name
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetImageVersionName() const;

                    /**
                     * 设置Cluster image version name
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _imageVersionName Cluster image version name
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetImageVersionName(const std::string& _imageVersionName);

                    /**
                     * 判断参数 ImageVersionName 是否已赋值
                     * @return ImageVersionName 是否已赋值
                     * 
                     */
                    bool ImageVersionNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standby cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return StartStandbyCluster Whether to enable the standby cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetStartStandbyCluster() const;

                    /**
                     * 设置Whether to enable the standby cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _startStandbyCluster Whether to enable the standby cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetStartStandbyCluster(const bool& _startStandbyCluster);

                    /**
                     * 判断参数 StartStandbyCluster 是否已赋值
                     * @return StartStandbyCluster 是否已赋值
                     * 
                     */
                    bool StartStandbyClusterHasBeenSet() const;

                    /**
                     * 获取Whether the elastic scaling of the spark jar monthly subscription cluster is enabled
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ElasticSwitch Whether the elastic scaling of the spark jar monthly subscription cluster is enabled
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetElasticSwitch() const;

                    /**
                     * 设置Whether the elastic scaling of the spark jar monthly subscription cluster is enabled
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _elasticSwitch Whether the elastic scaling of the spark jar monthly subscription cluster is enabled
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetElasticSwitch(const bool& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取Upper limit of the spark jar's monthly subscribed cluster elasticity
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ElasticLimit Upper limit of the spark jar's monthly subscribed cluster elasticity
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetElasticLimit() const;

                    /**
                     * 设置Upper limit of the spark jar's monthly subscribed cluster elasticity
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _elasticLimit Upper limit of the spark jar's monthly subscribed cluster elasticity
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetElasticLimit(const int64_t& _elasticLimit);

                    /**
                     * 判断参数 ElasticLimit 是否已赋值
                     * @return ElasticLimit 是否已赋值
                     * 
                     */
                    bool ElasticLimitHasBeenSet() const;

                    /**
                     * 获取Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return DefaultHouse Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetDefaultHouse() const;

                    /**
                     * 设置Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _defaultHouse Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDefaultHouse(const bool& _defaultHouse);

                    /**
                     * 判断参数 DefaultHouse 是否已赋值
                     * @return DefaultHouse 是否已赋值
                     * 
                     */
                    bool DefaultHouseHasBeenSet() const;

                    /**
                     * 获取Maximum concurrency number of a single cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return MaxConcurrency Maximum concurrency number of a single cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置Maximum concurrency number of a single cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _maxConcurrency Maximum concurrency number of a single cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取Maximum time for the task to queue
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return TolerableQueueTime Maximum time for the task to queue
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置Maximum time for the task to queue
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _tolerableQueueTime Maximum time for the task to queue
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTolerableQueueTime(const int64_t& _tolerableQueueTime);

                    /**
                     * 判断参数 TolerableQueueTime 是否已赋值
                     * @return TolerableQueueTime 是否已赋值
                     * 
                     */
                    bool TolerableQueueTimeHasBeenSet() const;

                    /**
                     * 获取User AppID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return UserAppId User AppID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetUserAppId() const;

                    /**
                     * 设置User AppID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _userAppId User AppID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUserAppId(const int64_t& _userAppId);

                    /**
                     * 判断参数 UserAppId 是否已赋值
                     * @return UserAppId 是否已赋值
                     * 
                     */
                    bool UserAppIdHasBeenSet() const;

                    /**
                     * 获取User uin
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return UserUin User uin
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置User uin
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _userUin User uin
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取SessionResourceTemplate
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return SessionResourceTemplate SessionResourceTemplate
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置SessionResourceTemplate
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _sessionResourceTemplate SessionResourceTemplate
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                    /**
                     * 获取Automatic authorization switch
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return AutoAuthorization Automatic authorization switch
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    bool GetAutoAuthorization() const;

                    /**
                     * 设置Automatic authorization switch
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _autoAuthorization Automatic authorization switch
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAutoAuthorization(const bool& _autoAuthorization);

                    /**
                     * 判断参数 AutoAuthorization 是否已赋值
                     * @return AutoAuthorization 是否已赋值
                     * 
                     */
                    bool AutoAuthorizationHasBeenSet() const;

                    /**
                     * 获取Engine version, supporting Native/SuperSQL
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineGeneration Engine version, supporting Native/SuperSQL
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEngineGeneration() const;

                    /**
                     * 设置Engine version, supporting Native/SuperSQL
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineGeneration Engine version, supporting Native/SuperSQL
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineGeneration(const std::string& _engineGeneration);

                    /**
                     * 判断参数 EngineGeneration 是否已赋值
                     * @return EngineGeneration 是否已赋值
                     * 
                     */
                    bool EngineGenerationHasBeenSet() const;

                    /**
                     * 获取Detailed engine type, supporting SparkSQL/SparkBatch/PrestoSQL/Kyuubi
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineTypeDetail Detailed engine type, supporting SparkSQL/SparkBatch/PrestoSQL/Kyuubi
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置Detailed engine type, supporting SparkSQL/SparkBatch/PrestoSQL/Kyuubi
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineTypeDetail Detailed engine type, supporting SparkSQL/SparkBatch/PrestoSQL/Kyuubi
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineTypeDetail(const std::string& _engineTypeDetail);

                    /**
                     * 判断参数 EngineTypeDetail 是否已赋值
                     * @return EngineTypeDetail 是否已赋值
                     * 
                     */
                    bool EngineTypeDetailHasBeenSet() const;

                    /**
                     * 获取Engine network ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineNetworkId Engine network ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置Engine network ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineNetworkId Engine network ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取Number of resource groups associated with the standard engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineResourceGroupCount Number of resource groups associated with the standard engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetEngineResourceGroupCount() const;

                    /**
                     * 设置Number of resource groups associated with the standard engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineResourceGroupCount Number of resource groups associated with the standard engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineResourceGroupCount(const int64_t& _engineResourceGroupCount);

                    /**
                     * 判断参数 EngineResourceGroupCount 是否已赋值
                     * @return EngineResourceGroupCount 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupCountHasBeenSet() const;

                    /**
                     * 获取Current usage of the engine (Cu)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineResourceUsedCU Current usage of the engine (Cu)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetEngineResourceUsedCU() const;

                    /**
                     * 设置Current usage of the engine (Cu)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineResourceUsedCU Current usage of the engine (Cu)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineResourceUsedCU(const int64_t& _engineResourceUsedCU);

                    /**
                     * 判断参数 EngineResourceUsedCU 是否已赋值
                     * @return EngineResourceUsedCU 是否已赋值
                     * 
                     */
                    bool EngineResourceUsedCUHasBeenSet() const;

                    /**
                     * 获取Access information of the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return AccessInfos Access information of the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<AccessInfo> GetAccessInfos() const;

                    /**
                     * 设置Access information of the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _accessInfos Access information of the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAccessInfos(const std::vector<AccessInfo>& _accessInfos);

                    /**
                     * 判断参数 AccessInfos 是否已赋值
                     * @return AccessInfos 是否已赋值
                     * 
                     */
                    bool AccessInfosHasBeenSet() const;

                    /**
                     * 获取Name of the network where the engine is located
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return EngineNetworkName Name of the network where the engine is located
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEngineNetworkName() const;

                    /**
                     * 设置Name of the network where the engine is located
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _engineNetworkName Name of the network where the engine is located
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEngineNetworkName(const std::string& _engineNetworkName);

                    /**
                     * 判断参数 EngineNetworkName 是否已赋值
                     * @return EngineNetworkName 是否已赋值
                     * 
                     */
                    bool EngineNetworkNameHasBeenSet() const;

                private:

                    /**
                     * DataEngine name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Engine type: spark/presto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Cluster resource type spark_private/presto_private/presto_cu/spark_cu
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Quota ID
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Data engine status -2 deleted, -1 failed, 0 initializing, 1 suspended, 2 running, 3 ready to delete, and 4 deleting
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Cluster specifications
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Billing mode: 0 shared mode, 1 pay-as-you-go, and 2 monthly subscription
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Minimum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * Maximum number of clusters
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * Whether to recover automatically
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * Automatic recovery time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_spendAfter;
                    bool m_spendAfterHasBeenSet;

                    /**
                     * Cluster IP range
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_defaultDataEngine;
                    bool m_defaultDataEngineHasBeenSet;

                    /**
                     * Returned Message
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Isolation time
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Rectification time
                     */
                    std::string m_reversalTime;
                    bool m_reversalTimeHasBeenSet;

                    /**
                     * Username
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * Key-value pair collection
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Permissions owned by the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * Whether to automatically suspend the cluster: False (by default) means that the cluster is not automatically suspended; true means that the cluster is automatically suspended.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_autoSuspend;
                    bool m_autoSuspendHasBeenSet;

                    /**
                     * Scheduling policy of starting and ending the cluster: 0 (by default) indicates turning off the scheduling policy; 1 indicates turning on the scheduling policy. (Note: The scheduling policy of starting and ending the cluster and the automatic suspension policy are mutually exclusive.)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_crontabResumeSuspend;
                    bool m_crontabResumeSuspendHasBeenSet;

                    /**
                     * Scheduled start and end policy. Complex type: Include start and end time and the cluster suspension strategy.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    CrontabResumeSuspendStrategy m_crontabResumeSuspendStrategy;
                    bool m_crontabResumeSuspendStrategyHasBeenSet;

                    /**
                     * Type of the task executed by the engine. Valid value: SQL/BATCH
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_engineExecType;
                    bool m_engineExecTypeHasBeenSet;

                    /**
                     * Automatic renewal flag: 0 means the initial state and there is no automatic renewal by default. If the user has the privilege to retain services with advanced payment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal.
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Cluster automatic suspension time
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * Network connection configuration
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<NetworkConnection> m_networkConnectionSet;
                    bool m_networkConnectionSetHasBeenSet;

                    /**
                     * Jump address of ui
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_uiURL;
                    bool m_uiURLHasBeenSet;

                    /**
                     * Type of the engine resource
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_imageVersionId;
                    bool m_imageVersionIdHasBeenSet;

                    /**
                     * Minor cluster image version ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * Cluster image version name
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_imageVersionName;
                    bool m_imageVersionNameHasBeenSet;

                    /**
                     * Whether to enable the standby cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_startStandbyCluster;
                    bool m_startStandbyClusterHasBeenSet;

                    /**
                     * Whether the elastic scaling of the spark jar monthly subscription cluster is enabled
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * Upper limit of the spark jar's monthly subscribed cluster elasticity
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_elasticLimit;
                    bool m_elasticLimitHasBeenSet;

                    /**
                     * Whether it is the default engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_defaultHouse;
                    bool m_defaultHouseHasBeenSet;

                    /**
                     * Maximum concurrency number of a single cluster
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * Maximum time for the task to queue
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_tolerableQueueTime;
                    bool m_tolerableQueueTimeHasBeenSet;

                    /**
                     * User AppID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_userAppId;
                    bool m_userAppIdHasBeenSet;

                    /**
                     * User uin
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * SessionResourceTemplate
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                    /**
                     * Automatic authorization switch
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    bool m_autoAuthorization;
                    bool m_autoAuthorizationHasBeenSet;

                    /**
                     * Engine version, supporting Native/SuperSQL
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_engineGeneration;
                    bool m_engineGenerationHasBeenSet;

                    /**
                     * Detailed engine type, supporting SparkSQL/SparkBatch/PrestoSQL/Kyuubi
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                    /**
                     * Engine network ID
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * Number of resource groups associated with the standard engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_engineResourceGroupCount;
                    bool m_engineResourceGroupCountHasBeenSet;

                    /**
                     * Current usage of the engine (Cu)
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_engineResourceUsedCU;
                    bool m_engineResourceUsedCUHasBeenSet;

                    /**
                     * Access information of the engine
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<AccessInfo> m_accessInfos;
                    bool m_accessInfosHasBeenSet;

                    /**
                     * Name of the network where the engine is located
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_engineNetworkName;
                    bool m_engineNetworkNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_
