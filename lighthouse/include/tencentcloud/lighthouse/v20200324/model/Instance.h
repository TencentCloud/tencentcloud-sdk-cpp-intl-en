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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/SystemDisk.h>
#include <tencentcloud/lighthouse/v20200324/model/InternetAccessible.h>
#include <tencentcloud/lighthouse/v20200324/model/LoginSettings.h>
#include <tencentcloud/lighthouse/v20200324/model/Tag.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceViolationDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Describes the instance information.
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Bundle ID.
                     * @return BundleId Bundle ID.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Bundle ID.
                     * @param _bundleId Bundle ID.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Image ID.
                     * @return BlueprintId Image ID.
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Image ID.
                     * @param _blueprintId Image ID.
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores for the instance, in cores.
                     * @return CPU Number of CPU cores for the instance, in cores.
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores for the instance, in cores.
                     * @param _cPU Number of CPU cores for the instance, in cores.
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Instance memory capacity, in GB.
                     * @return Memory Instance memory capacity, in GB.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory capacity, in GB.
                     * @param _memory Instance memory capacity, in GB.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values: 
PREPAID: prepaid, that is, monthly or yearly subscription.
                     * @return InstanceChargeType Instance billing mode. Valid values: 
PREPAID: prepaid, that is, monthly or yearly subscription.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values: 
PREPAID: prepaid, that is, monthly or yearly subscription.
                     * @param _instanceChargeType Instance billing mode. Valid values: 
PREPAID: prepaid, that is, monthly or yearly subscription.
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Instance system disk information.
                     * @return SystemDisk Instance system disk information.
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Instance system disk information.
                     * @param _systemDisk Instance system disk information.
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Private IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PrivateAddresses Private IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivateAddresses() const;

                    /**
                     * 设置Private IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _privateAddresses Private IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPrivateAddresses(const std::vector<std::string>& _privateAddresses);

                    /**
                     * 判断参数 PrivateAddresses 是否已赋值
                     * @return PrivateAddresses 是否已赋值
                     * 
                     */
                    bool PrivateAddressesHasBeenSet() const;

                    /**
                     * 获取Public IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PublicAddresses Public IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPublicAddresses() const;

                    /**
                     * 设置Public IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _publicAddresses Public IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPublicAddresses(const std::vector<std::string>& _publicAddresses);

                    /**
                     * 判断参数 PublicAddresses 是否已赋值
                     * @return PublicAddresses 是否已赋值
                     * 
                     */
                    bool PublicAddressesHasBeenSet() const;

                    /**
                     * 获取Instance bandwidth information.
                     * @return InternetAccessible Instance bandwidth information.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Instance bandwidth information.
                     * @param _internetAccessible Instance bandwidth information.
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values: 
NOTIFY_AND_MANUAL_RENEW: Notify when the subscription is about to expire, but do not renew automatically.  
NOTIFY_AND_AUTO_RENEW: Notify when the subscription is about to expire and renew automatically. DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not renew automatically or send notifications.
                     * @return RenewFlag Auto-renewal flag. Valid values: 
NOTIFY_AND_MANUAL_RENEW: Notify when the subscription is about to expire, but do not renew automatically.  
NOTIFY_AND_AUTO_RENEW: Notify when the subscription is about to expire and renew automatically. DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not renew automatically or send notifications.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: 
NOTIFY_AND_MANUAL_RENEW: Notify when the subscription is about to expire, but do not renew automatically.  
NOTIFY_AND_AUTO_RENEW: Notify when the subscription is about to expire and renew automatically. DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not renew automatically or send notifications.
                     * @param _renewFlag Auto-renewal flag. Valid values: 
NOTIFY_AND_MANUAL_RENEW: Notify when the subscription is about to expire, but do not renew automatically.  
NOTIFY_AND_AUTO_RENEW: Notify when the subscription is about to expire and renew automatically. DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not renew automatically or send notifications.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance login setting.
                     * @return LoginSettings Instance login setting.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login setting.
                     * @param _loginSettings Instance login setting.
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: 
<li>PENDING: Creating</li><li>LAUNCH_FAILED: Failed to create</li><li>RUNNING: Running</li><li>STOPPED: Shut down</li><li>STARTING: Starting up</li><li>STOPPING: Shutting down</li><li>REBOOTING: Restarting</li><li>SHUTDOWN: Shutdown and to be terminated</li><li>TERMINATING: Terminating</li><li>DELETING: Deleting</li><li>FREEZING: Frozen</li><li>ENTER_RESCUE_MODE: Entering the rescue mode</li><li>RESCUE_MODE: Rescue mode</li><li>EXIT_RESCUE_MODE: Exiting the rescue mode</li>
                     * @return InstanceState Instance status. Valid values: 
<li>PENDING: Creating</li><li>LAUNCH_FAILED: Failed to create</li><li>RUNNING: Running</li><li>STOPPED: Shut down</li><li>STARTING: Starting up</li><li>STOPPING: Shutting down</li><li>REBOOTING: Restarting</li><li>SHUTDOWN: Shutdown and to be terminated</li><li>TERMINATING: Terminating</li><li>DELETING: Deleting</li><li>FREEZING: Frozen</li><li>ENTER_RESCUE_MODE: Entering the rescue mode</li><li>RESCUE_MODE: Rescue mode</li><li>EXIT_RESCUE_MODE: Exiting the rescue mode</li>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. Valid values: 
<li>PENDING: Creating</li><li>LAUNCH_FAILED: Failed to create</li><li>RUNNING: Running</li><li>STOPPED: Shut down</li><li>STARTING: Starting up</li><li>STOPPING: Shutting down</li><li>REBOOTING: Restarting</li><li>SHUTDOWN: Shutdown and to be terminated</li><li>TERMINATING: Terminating</li><li>DELETING: Deleting</li><li>FREEZING: Frozen</li><li>ENTER_RESCUE_MODE: Entering the rescue mode</li><li>RESCUE_MODE: Rescue mode</li><li>EXIT_RESCUE_MODE: Exiting the rescue mode</li>
                     * @param _instanceState Instance status. Valid values: 
<li>PENDING: Creating</li><li>LAUNCH_FAILED: Failed to create</li><li>RUNNING: Running</li><li>STOPPED: Shut down</li><li>STARTING: Starting up</li><li>STOPPING: Shutting down</li><li>REBOOTING: Restarting</li><li>SHUTDOWN: Shutdown and to be terminated</li><li>TERMINATING: Terminating</li><li>DELETING: Deleting</li><li>FREEZING: Frozen</li><li>ENTER_RESCUE_MODE: Entering the rescue mode</li><li>RESCUE_MODE: Rescue mode</li><li>EXIT_RESCUE_MODE: Exiting the rescue mode</li>
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
                     * 获取Globally unique ID of the instance.
                     * @return Uuid Globally unique ID of the instance.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Globally unique ID of the instance.
                     * @param _uuid Globally unique ID of the instance.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Latest operation on the instance, such as StopInstances and ResetInstance. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestOperation Latest operation on the instance, such as StopInstances and ResetInstance. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置Latest operation on the instance, such as StopInstances and ResetInstance. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestOperation Latest operation on the instance, such as StopInstances and ResetInstance. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取Status of the latest operation on the instance. Valid values: 
SUCCESS: The operation succeeded. 
OPERATING: The operation is in progress. 
FAILED: The operation failed. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestOperationState Status of the latest operation on the instance. Valid values: 
SUCCESS: The operation succeeded. 
OPERATING: The operation is in progress. 
FAILED: The operation failed. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置Status of the latest operation on the instance. Valid values: 
SUCCESS: The operation succeeded. 
OPERATING: The operation is in progress. 
FAILED: The operation failed. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestOperationState Status of the latest operation on the instance. Valid values: 
SUCCESS: The operation succeeded. 
OPERATING: The operation is in progress. 
FAILED: The operation failed. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取Unique request ID of the latest operation on the instance. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestOperationRequestId Unique request ID of the latest operation on the instance. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置Unique request ID of the latest operation on the instance. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestOperationRequestId Unique request ID of the latest operation on the instance. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取Start time of the latest operation on the instance.
                     * @return LatestOperationStartedTime Start time of the latest operation on the instance.
                     * 
                     */
                    std::string GetLatestOperationStartedTime() const;

                    /**
                     * 设置Start time of the latest operation on the instance.
                     * @param _latestOperationStartedTime Start time of the latest operation on the instance.
                     * 
                     */
                    void SetLatestOperationStartedTime(const std::string& _latestOperationStartedTime);

                    /**
                     * 判断参数 LatestOperationStartedTime 是否已赋值
                     * @return LatestOperationStartedTime 是否已赋值
                     * 
                     */
                    bool LatestOperationStartedTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @return IsolatedTime Isolation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Isolation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @param _isolatedTime Isolation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
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
                     * 获取Creation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @return CreatedTime Creation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @param _createdTime Creation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
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
                     * 获取Expiration time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @return ExpiredTime Expiration time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * @param _expiredTime Expiration time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Operating system platform type, such as LINUX_UNIX and WINDOWS.
                     * @return PlatformType Operating system platform type, such as LINUX_UNIX and WINDOWS.
                     * 
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置Operating system platform type, such as LINUX_UNIX and WINDOWS.
                     * @param _platformType Operating system platform type, such as LINUX_UNIX and WINDOWS.
                     * 
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取Operating system platform.
                     * @return Platform Operating system platform.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Operating system platform.
                     * @param _platform Operating system platform.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Operating system name.
                     * @return OsName Operating system name.
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system name.
                     * @param _osName Operating system name.
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取AZ.
                     * @return Zone AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ.
                     * @param _zone AZ.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取List of tags bound to the instance.
                     * @return Tags List of tags bound to the instance.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to the instance.
                     * @param _tags List of tags bound to the instance.
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
                     * 获取Instance ban status. Valid values:
<li>NORMAL: The instance is normal.</li><li>NETWORK_RESTRICT: The instance is banned from network access.</li>
                     * @return InstanceRestrictState Instance ban status. Valid values:
<li>NORMAL: The instance is normal.</li><li>NETWORK_RESTRICT: The instance is banned from network access.</li>
                     * 
                     */
                    std::string GetInstanceRestrictState() const;

                    /**
                     * 设置Instance ban status. Valid values:
<li>NORMAL: The instance is normal.</li><li>NETWORK_RESTRICT: The instance is banned from network access.</li>
                     * @param _instanceRestrictState Instance ban status. Valid values:
<li>NORMAL: The instance is normal.</li><li>NETWORK_RESTRICT: The instance is banned from network access.</li>
                     * 
                     */
                    void SetInstanceRestrictState(const std::string& _instanceRestrictState);

                    /**
                     * 判断参数 InstanceRestrictState 是否已赋值
                     * @return InstanceRestrictState 是否已赋值
                     * 
                     */
                    bool InstanceRestrictStateHasBeenSet() const;

                    /**
                     * 获取Invocation ID of the TAT command to be automatically executed after the instance is created.
                     * @return InitInvocationId Invocation ID of the TAT command to be automatically executed after the instance is created.
                     * 
                     */
                    std::string GetInitInvocationId() const;

                    /**
                     * 设置Invocation ID of the TAT command to be automatically executed after the instance is created.
                     * @param _initInvocationId Invocation ID of the TAT command to be automatically executed after the instance is created.
                     * 
                     */
                    void SetInitInvocationId(const std::string& _initInvocationId);

                    /**
                     * 判断参数 InitInvocationId 是否已赋值
                     * @return InitInvocationId 是否已赋值
                     * 
                     */
                    bool InitInvocationIdHasBeenSet() const;

                    /**
                     * 获取Instance violation details.
                     * @return InstanceViolationDetail Instance violation details.
                     * 
                     */
                    InstanceViolationDetail GetInstanceViolationDetail() const;

                    /**
                     * 设置Instance violation details.
                     * @param _instanceViolationDetail Instance violation details.
                     * 
                     */
                    void SetInstanceViolationDetail(const InstanceViolationDetail& _instanceViolationDetail);

                    /**
                     * 判断参数 InstanceViolationDetail 是否已赋值
                     * @return InstanceViolationDetail 是否已赋值
                     * 
                     */
                    bool InstanceViolationDetailHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Bundle ID.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Image ID.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * Number of CPU cores for the instance, in cores.
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Instance memory capacity, in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: 
PREPAID: prepaid, that is, monthly or yearly subscription.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Instance system disk information.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Private IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_privateAddresses;
                    bool m_privateAddressesHasBeenSet;

                    /**
                     * Public IP of the instance's primary NIC. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_publicAddresses;
                    bool m_publicAddressesHasBeenSet;

                    /**
                     * Instance bandwidth information.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: 
NOTIFY_AND_MANUAL_RENEW: Notify when the subscription is about to expire, but do not renew automatically.  
NOTIFY_AND_AUTO_RENEW: Notify when the subscription is about to expire and renew automatically. DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not renew automatically or send notifications.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Instance login setting.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Instance status. Valid values: 
<li>PENDING: Creating</li><li>LAUNCH_FAILED: Failed to create</li><li>RUNNING: Running</li><li>STOPPED: Shut down</li><li>STARTING: Starting up</li><li>STOPPING: Shutting down</li><li>REBOOTING: Restarting</li><li>SHUTDOWN: Shutdown and to be terminated</li><li>TERMINATING: Terminating</li><li>DELETING: Deleting</li><li>FREEZING: Frozen</li><li>ENTER_RESCUE_MODE: Entering the rescue mode</li><li>RESCUE_MODE: Rescue mode</li><li>EXIT_RESCUE_MODE: Exiting the rescue mode</li>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Globally unique ID of the instance.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Latest operation on the instance, such as StopInstances and ResetInstance. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * Status of the latest operation on the instance. Valid values: 
SUCCESS: The operation succeeded. 
OPERATING: The operation is in progress. 
FAILED: The operation failed. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * Unique request ID of the latest operation on the instance. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * Start time of the latest operation on the instance.
                     */
                    std::string m_latestOperationStartedTime;
                    bool m_latestOperationStartedTimeHasBeenSet;

                    /**
                     * Isolation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Creation time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time in UTC, formatted according to the ISO 8601 standard. 
Format: YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Operating system platform type, such as LINUX_UNIX and WINDOWS.
                     */
                    std::string m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * Operating system platform.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Operating system name.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * List of tags bound to the instance.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance ban status. Valid values:
<li>NORMAL: The instance is normal.</li><li>NETWORK_RESTRICT: The instance is banned from network access.</li>
                     */
                    std::string m_instanceRestrictState;
                    bool m_instanceRestrictStateHasBeenSet;

                    /**
                     * Invocation ID of the TAT command to be automatically executed after the instance is created.
                     */
                    std::string m_initInvocationId;
                    bool m_initInvocationIdHasBeenSet;

                    /**
                     * Instance violation details.
                     */
                    InstanceViolationDetail m_instanceViolationDetail;
                    bool m_instanceViolationDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCE_H_
