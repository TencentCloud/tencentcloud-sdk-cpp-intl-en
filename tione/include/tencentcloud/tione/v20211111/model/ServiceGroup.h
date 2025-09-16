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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Service.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/AuthToken.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Information of a service group for an online service.
                */
                class ServiceGroup : public AbstractModel
                {
                public:
                    ServiceGroup();
                    ~ServiceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service group ID.
                     * @return ServiceGroupId Service group ID.
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置Service group ID.
                     * @param _serviceGroupId Service group ID.
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取Service group name.
                     * @return ServiceGroupName Service group name.
                     * 
                     */
                    std::string GetServiceGroupName() const;

                    /**
                     * 设置Service group name.
                     * @param _serviceGroupName Service group name.
                     * 
                     */
                    void SetServiceGroupName(const std::string& _serviceGroupName);

                    /**
                     * 判断参数 ServiceGroupName 是否已赋值
                     * @return ServiceGroupName 是否已赋值
                     * 
                     */
                    bool ServiceGroupNameHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreatedBy Creator.
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置Creator.
                     * @param _createdBy Creator.
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
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
                     * 获取Root account.
                     * @return Uin Root account.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Root account.
                     * @param _uin Root account.
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
                     * 获取Total number of services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceCount Total number of services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置Total number of services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceCount Total number of services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceCount(const uint64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Number of running services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunningServiceCount Number of running services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRunningServiceCount() const;

                    /**
                     * 设置Number of running services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runningServiceCount Number of running services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunningServiceCount(const uint64_t& _runningServiceCount);

                    /**
                     * 判断参数 RunningServiceCount 是否已赋值
                     * @return RunningServiceCount 是否已赋值
                     * 
                     */
                    bool RunningServiceCountHasBeenSet() const;

                    /**
                     * 获取Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Services Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Service> GetServices() const;

                    /**
                     * 设置Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _services Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServices(const std::vector<Service>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取Service group status, which aligns with service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Service group status, which aligns with service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Service group status, which aligns with service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Service group status, which aligns with service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Service group tags.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Service group tags.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Service group tags.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Service group tags.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The latest version in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestVersion The latest version in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置The latest version in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestVersion The latest version in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取Operational status of the service.CREATING: creating.CREATE_FAILED: creation failed.ARREARS_STOP: service suspended due to overdue payments.BILLING: billing.WHITELIST_USING: allowlist feature is in trial.WHITELIST_STOP: insufficient allowlist quota.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessStatus Operational status of the service.CREATING: creating.CREATE_FAILED: creation failed.ARREARS_STOP: service suspended due to overdue payments.BILLING: billing.WHITELIST_USING: allowlist feature is in trial.WHITELIST_STOP: insufficient allowlist quota.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置Operational status of the service.CREATING: creating.CREATE_FAILED: creation failed.ARREARS_STOP: service suspended due to overdue payments.BILLING: billing.WHITELIST_USING: allowlist feature is in trial.WHITELIST_STOP: insufficient allowlist quota.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessStatus Operational status of the service.CREATING: creating.CREATE_FAILED: creation failed.ARREARS_STOP: service suspended due to overdue payments.BILLING: billing.WHITELIST_USING: allowlist feature is in trial.WHITELIST_STOP: insufficient allowlist quota.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessStatus(const std::string& _businessStatus);

                    /**
                     * 判断参数 BusinessStatus 是否已赋值
                     * @return BusinessStatus 是否已赋值
                     * 
                     */
                    bool BusinessStatusHasBeenSet() const;

                    /**
                     * 获取Billing information of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingInfo Billing information of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置Billing information of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingInfo Billing information of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取Creation source of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateSource Creation source of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置Creation source of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createSource Creation source of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateSource(const std::string& _createSource);

                    /**
                     * 判断参数 CreateSource 是否已赋值
                     * @return CreateSource 是否已赋值
                     * 
                     */
                    bool CreateSourceHasBeenSet() const;

                    /**
                     * 获取Weight update status of the service group.UPDATING: updating.UPDATED: updated successfully.UPDATE FAILED: failed to update.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WeightUpdateStatus Weight update status of the service group.UPDATING: updating.UPDATED: updated successfully.UPDATE FAILED: failed to update.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWeightUpdateStatus() const;

                    /**
                     * 设置Weight update status of the service group.UPDATING: updating.UPDATED: updated successfully.UPDATE FAILED: failed to update.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weightUpdateStatus Weight update status of the service group.UPDATING: updating.UPDATED: updated successfully.UPDATE FAILED: failed to update.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeightUpdateStatus(const std::string& _weightUpdateStatus);

                    /**
                     * 判断参数 WeightUpdateStatus 是否已赋值
                     * @return WeightUpdateStatus 是否已赋值
                     * 
                     */
                    bool WeightUpdateStatusHasBeenSet() const;

                    /**
                     * 获取Number of running Pods in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplicasCount Number of running Pods in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReplicasCount() const;

                    /**
                     * 设置Number of running Pods in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicasCount Number of running Pods in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplicasCount(const uint64_t& _replicasCount);

                    /**
                     * 判断参数 ReplicasCount 是否已赋值
                     * @return ReplicasCount 是否已赋值
                     * 
                     */
                    bool ReplicasCountHasBeenSet() const;

                    /**
                     * 获取Expected number of Pods under the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableReplicasCount Expected number of Pods under the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAvailableReplicasCount() const;

                    /**
                     * 设置Expected number of Pods under the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableReplicasCount Expected number of Pods under the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableReplicasCount(const uint64_t& _availableReplicasCount);

                    /**
                     * 判断参数 AvailableReplicasCount 是否已赋值
                     * @return AvailableReplicasCount 是否已赋值
                     * 
                     */
                    bool AvailableReplicasCountHasBeenSet() const;

                    /**
                     * 获取Service group's subuin.
                     * @return SubUin Service group's subuin.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Service group's subuin.
                     * @param _subUin Service group's subuin.
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Service group's app_id.
                     * @return AppId Service group's app_id.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Service group's app_id.
                     * @param _appId Service group's app_id.
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
                     * 获取Whether to enable authentication.
                     * @return AuthorizationEnable Whether to enable authentication.
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置Whether to enable authentication.
                     * @param _authorizationEnable Whether to enable authentication.
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取List of throttling authentication tokens.
                     * @return AuthTokens List of throttling authentication tokens.
                     * 
                     */
                    std::vector<AuthToken> GetAuthTokens() const;

                    /**
                     * 设置List of throttling authentication tokens.
                     * @param _authTokens List of throttling authentication tokens.
                     * 
                     */
                    void SetAuthTokens(const std::vector<AuthToken>& _authTokens);

                    /**
                     * 判断参数 AuthTokens 是否已赋值
                     * @return AuthTokens 是否已赋值
                     * 
                     */
                    bool AuthTokensHasBeenSet() const;

                    /**
                     * 获取Field for monitoring creation source.
                     * @return MonitorSource Field for monitoring creation source.
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置Field for monitoring creation source.
                     * @param _monitorSource Field for monitoring creation source.
                     * 
                     */
                    void SetMonitorSource(const std::string& _monitorSource);

                    /**
                     * 判断参数 MonitorSource 是否已赋值
                     * @return MonitorSource 是否已赋值
                     * 
                     */
                    bool MonitorSourceHasBeenSet() const;

                    /**
                     * 获取Nickname of the sub-user.
                     * @return SubUinName Nickname of the sub-user.
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置Nickname of the sub-user.
                     * @param _subUinName Nickname of the sub-user.
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                private:

                    /**
                     * Service group ID.
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * Service group name.
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Root account.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Total number of services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Number of running services in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_runningServiceCount;
                    bool m_runningServiceCountHasBeenSet;

                    /**
                     * Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Service> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * Service group status, which aligns with service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service group tags.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The latest version in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * Operational status of the service.CREATING: creating.CREATE_FAILED: creation failed.ARREARS_STOP: service suspended due to overdue payments.BILLING: billing.WHITELIST_USING: allowlist feature is in trial.WHITELIST_STOP: insufficient allowlist quota.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * Billing information of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * Creation source of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * Weight update status of the service group.UPDATING: updating.UPDATED: updated successfully.UPDATE FAILED: failed to update.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_weightUpdateStatus;
                    bool m_weightUpdateStatusHasBeenSet;

                    /**
                     * Number of running Pods in the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_replicasCount;
                    bool m_replicasCountHasBeenSet;

                    /**
                     * Expected number of Pods under the service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_availableReplicasCount;
                    bool m_availableReplicasCountHasBeenSet;

                    /**
                     * Service group's subuin.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Service group's app_id.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Whether to enable authentication.
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * List of throttling authentication tokens.
                     */
                    std::vector<AuthToken> m_authTokens;
                    bool m_authTokensHasBeenSet;

                    /**
                     * Field for monitoring creation source.
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                    /**
                     * Nickname of the sub-user.
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_
