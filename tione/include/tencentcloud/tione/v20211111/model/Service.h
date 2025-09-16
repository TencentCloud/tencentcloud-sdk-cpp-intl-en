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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ServiceInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/SchedulingPolicy.h>
#include <tencentcloud/tione/v20211111/model/ResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Online service description.
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
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
                     * 获取Service ID.
                     * @return ServiceId Service ID.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID.
                     * @param _serviceId Service ID.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

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
                     * 获取Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDescription Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDescription Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取Service details.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceInfo Service details.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceInfo GetServiceInfo() const;

                    /**
                     * 设置Service details.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceInfo Service details.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceInfo(const ServiceInfo& _serviceInfo);

                    /**
                     * 判断参数 ServiceInfo 是否已赋值
                     * @return ServiceInfo 是否已赋值
                     * 
                     */
                    bool ServiceInfoHasBeenSet() const;

                    /**
                     * 获取Cluster ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Namespace.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespace Namespace.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Billing type.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Resource group ID for yearly/monthly subscription services. The value is null for pay-as-you-go services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupId Resource group ID for yearly/monthly subscription services. The value is null for pay-as-you-go services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置Resource group ID for yearly/monthly subscription services. The value is null for pay-as-you-go services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupId Resource group ID for yearly/monthly subscription services. The value is null for pay-as-you-go services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Resource group name corresponding to the yearly/monthly subscription service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupName Resource group name corresponding to the yearly/monthly subscription service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name corresponding to the yearly/monthly subscription service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupName Resource group name corresponding to the yearly/monthly subscription service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Tag of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag of the service.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Name of the ingress where the service is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IngressName Name of the ingress where the service is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置Name of the ingress where the service is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ingressName Name of the ingress where the service is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取Creator.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedBy Creator.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置Creator.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdBy Creator.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Root account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin Root account.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Root account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin Root account.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Sub-account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubUin Sub-account.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Sub-account.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subUin Sub-account.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取app_id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId app_id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置app_id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId app_id
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
                     * 获取Operational status of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessStatus Operational status of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置Operational status of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessStatus Operational status of the service.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceLimit Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceLimit Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     * @deprecated
                     */
                    bool ServiceLimitHasBeenSet() const;

                    /**
                     * 获取Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduledAction Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduledAction Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     * @deprecated
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取Cause for service creation failure. The default value of this field is CREATE_SUCCEED upon successful creation.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateFailedReason Cause for service creation failure. The default value of this field is CREATE_SUCCEED upon successful creation.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateFailedReason() const;

                    /**
                     * 设置Cause for service creation failure. The default value of this field is CREATE_SUCCEED upon successful creation.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createFailedReason Cause for service creation failure. The default value of this field is CREATE_SUCCEED upon successful creation.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateFailedReason(const std::string& _createFailedReason);

                    /**
                     * 判断参数 CreateFailedReason 是否已赋值
                     * @return CreateFailedReason 是否已赋值
                     * 
                     */
                    bool CreateFailedReasonHasBeenSet() const;

                    /**
                     * 获取Service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingInfo Billing information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置Billing information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingInfo Billing information.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Model weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Model weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Model weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Model weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Creation source of the service.AUTO_ML: comes from one-click release of automatic learning.DEFAULT: other sources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateSource Creation source of the service.AUTO_ML: comes from one-click release of automatic learning.DEFAULT: other sources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置Creation source of the service.AUTO_ML: comes from one-click release of automatic learning.DEFAULT: other sources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createSource Creation source of the service.AUTO_ML: comes from one-click release of automatic learning.DEFAULT: other sources.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Version number.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version number.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version number.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Version number.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取The latest version number of services under a service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestVersion The latest version number of services under a service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置The latest version number of services under a service group.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestVersion The latest version number of services under a service group.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource group category. Valid values: NORMAL (hosting) and SW (half-hosting).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupSWType Resource group category. Valid values: NORMAL (hosting) and SW (half-hosting).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupSWType() const;

                    /**
                     * 设置Resource group category. Valid values: NORMAL (hosting) and SW (half-hosting).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupSWType Resource group category. Valid values: NORMAL (hosting) and SW (half-hosting).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupSWType(const std::string& _resourceGroupSWType);

                    /**
                     * 判断参数 ResourceGroupSWType 是否已赋值
                     * @return ResourceGroupSWType 是否已赋值
                     * 
                     */
                    bool ResourceGroupSWTypeHasBeenSet() const;

                    /**
                     * 获取Archiving status of the service. Valid values: Waiting (pending archiving) and Archived (archived).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArchiveStatus Archiving status of the service. Valid values: Waiting (pending archiving) and Archived (archived).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置Archiving status of the service. Valid values: Waiting (pending archiving) and Archived (archived).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _archiveStatus Archiving status of the service. Valid values: Waiting (pending archiving) and Archived (archived).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArchiveStatus(const std::string& _archiveStatus);

                    /**
                     * 判断参数 ArchiveStatus 是否已赋值
                     * @return ArchiveStatus 是否已赋值
                     * 
                     */
                    bool ArchiveStatusHasBeenSet() const;

                    /**
                     * 获取Deployment type of the service. Valid values: STANDARD (standard deployment) and DIST (multi-machine distributed deployment). The default value is STANDARD.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeployType Deployment type of the service. Valid values: STANDARD (standard deployment) and DIST (multi-machine distributed deployment). The default value is STANDARD.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置Deployment type of the service. Valid values: STANDARD (standard deployment) and DIST (multi-machine distributed deployment). The default value is STANDARD.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deployType Deployment type of the service. Valid values: STANDARD (standard deployment) and DIST (multi-machine distributed deployment). The default value is STANDARD.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取Number of instances per replica. This parameter is valid only when the deployment type is DIST. Default value: 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstancePerReplicas Number of instances per replica. This parameter is valid only when the deployment type is DIST. Default value: 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstancePerReplicas() const;

                    /**
                     * 设置Number of instances per replica. This parameter is valid only when the deployment type is DIST. Default value: 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instancePerReplicas Number of instances per replica. This parameter is valid only when the deployment type is DIST. Default value: 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstancePerReplicas(const std::string& _instancePerReplicas);

                    /**
                     * 判断参数 InstancePerReplicas 是否已赋值
                     * @return InstancePerReplicas 是否已赋值
                     * 
                     */
                    bool InstancePerReplicasHasBeenSet() const;

                    /**
                     * 获取Source for monitoring queries.Enumeration value. May differ from CreateSource in certain scenarios. This field is designed to be compatible.
                     * @return MonitorSource Source for monitoring queries.Enumeration value. May differ from CreateSource in certain scenarios. This field is designed to be compatible.
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置Source for monitoring queries.Enumeration value. May differ from CreateSource in certain scenarios. This field is designed to be compatible.
                     * @param _monitorSource Source for monitoring queries.Enumeration value. May differ from CreateSource in certain scenarios. This field is designed to be compatible.
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
                     * 获取Sub-account name of the service creator.
                     * @return SubUinName Sub-account name of the service creator.
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置Sub-account name of the service creator.
                     * @param _subUinName Sub-account name of the service creator.
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取Scheduling policy of the service.
                     * @return SchedulingPolicy Scheduling policy of the service.
                     * 
                     */
                    SchedulingPolicy GetSchedulingPolicy() const;

                    /**
                     * 设置Scheduling policy of the service.
                     * @param _schedulingPolicy Scheduling policy of the service.
                     * 
                     */
                    void SetSchedulingPolicy(const SchedulingPolicy& _schedulingPolicy);

                    /**
                     * 判断参数 SchedulingPolicy 是否已赋值
                     * @return SchedulingPolicy 是否已赋值
                     * 
                     */
                    bool SchedulingPolicyHasBeenSet() const;

                    /**
                     * 获取External resource group information, indicating which resources are borrowed from resource groups.
                     * @return ExternalResourceGroups External resource group information, indicating which resources are borrowed from resource groups.
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetExternalResourceGroups() const;

                    /**
                     * 设置External resource group information, indicating which resources are borrowed from resource groups.
                     * @param _externalResourceGroups External resource group information, indicating which resources are borrowed from resource groups.
                     * 
                     */
                    void SetExternalResourceGroups(const std::vector<ResourceGroupInfo>& _externalResourceGroups);

                    /**
                     * 判断参数 ExternalResourceGroups 是否已赋值
                     * @return ExternalResourceGroups 是否已赋值
                     * 
                     */
                    bool ExternalResourceGroupsHasBeenSet() const;

                private:

                    /**
                     * Service group ID.
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * Service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service group name.
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * Service description.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * Service details.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceInfo m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                    /**
                     * Cluster ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Region.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Namespace.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Billing type.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Resource group ID for yearly/monthly subscription services. The value is null for pay-as-you-go services.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Resource group name corresponding to the yearly/monthly subscription service.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * Tag of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Name of the ingress where the service is located.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * Creator.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Root account.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * app_id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Operational status of the service.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * Deprecated. See the corresponding field in ServiceInfo.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * Cause for service creation failure. The default value of this field is CREATE_SUCCEED upon successful creation.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createFailedReason;
                    bool m_createFailedReasonHasBeenSet;

                    /**
                     * Service status.CREATING: creating.CREATE_FAILED: creation failed.Normal: running.Stopped: stopped.Stopping: stopping.Abnormal: error.Pending: starting.Waiting: getting ready.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Billing information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * Model weight.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Creation source of the service.AUTO_ML: comes from one-click release of automatic learning.DEFAULT: other sources.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * Version number.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * The latest version number of services under a service group.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * Resource group category. Valid values: NORMAL (hosting) and SW (half-hosting).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupSWType;
                    bool m_resourceGroupSWTypeHasBeenSet;

                    /**
                     * Archiving status of the service. Valid values: Waiting (pending archiving) and Archived (archived).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * Deployment type of the service. Valid values: STANDARD (standard deployment) and DIST (multi-machine distributed deployment). The default value is STANDARD.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * Number of instances per replica. This parameter is valid only when the deployment type is DIST. Default value: 1.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * Source for monitoring queries.Enumeration value. May differ from CreateSource in certain scenarios. This field is designed to be compatible.
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                    /**
                     * Sub-account name of the service creator.
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * Scheduling policy of the service.
                     */
                    SchedulingPolicy m_schedulingPolicy;
                    bool m_schedulingPolicyHasBeenSet;

                    /**
                     * External resource group information, indicating which resources are borrowed from resource groups.
                     */
                    std::vector<ResourceGroupInfo> m_externalResourceGroups;
                    bool m_externalResourceGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_
