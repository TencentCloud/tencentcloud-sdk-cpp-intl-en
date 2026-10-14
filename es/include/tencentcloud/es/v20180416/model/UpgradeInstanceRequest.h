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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpgradeInstance request structure.
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Target ES version. Valid values: "6.4.3", "6.8.2", "7.5.1", "7.10.1", and "7.14.2".
                     * @return EsVersion Target ES version. Valid values: "6.4.3", "6.8.2", "7.5.1", "7.10.1", and "7.14.2".
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置Target ES version. Valid values: "6.4.3", "6.8.2", "7.5.1", "7.10.1", and "7.14.2".
                     * @param _esVersion Target ES version. Valid values: "6.4.3", "6.8.2", "7.5.1", "7.10.1", and "7.14.2".
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取Whether to perform an upgrade check only. Default value: false.
                     * @return CheckOnly Whether to perform an upgrade check only. Default value: false.
                     * 
                     */
                    bool GetCheckOnly() const;

                    /**
                     * 设置Whether to perform an upgrade check only. Default value: false.
                     * @param _checkOnly Whether to perform an upgrade check only. Default value: false.
                     * 
                     */
                    void SetCheckOnly(const bool& _checkOnly);

                    /**
                     * 判断参数 CheckOnly 是否已赋值
                     * @return CheckOnly 是否已赋值
                     * 
                     */
                    bool CheckOnlyHasBeenSet() const;

                    /**
                     * 获取Target business feature version: <li>oss open source edition</li><li>basic edition</li>Currently used only when upgrading from 5.6.4 to 6.x. Default value: basic
                     * @return LicenseType Target business feature version: <li>oss open source edition</li><li>basic edition</li>Currently used only when upgrading from 5.6.4 to 6.x. Default value: basic
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置Target business feature version: <li>oss open source edition</li><li>basic edition</li>Currently used only when upgrading from 5.6.4 to 6.x. Default value: basic
                     * @param _licenseType Target business feature version: <li>oss open source edition</li><li>basic edition</li>Currently used only when upgrading from 5.6.4 to 6.x. Default value: basic
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li>
                     * @return BasicSecurityType Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li>
                     * @param _basicSecurityType Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li>
                     * 
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取Upgrade method: <li>scale blue-green change</li><li>restart rolling restart</li>Default value: scale
                     * @return UpgradeMode Upgrade method: <li>scale blue-green change</li><li>restart rolling restart</li>Default value: scale
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 设置Upgrade method: <li>scale blue-green change</li><li>restart rolling restart</li>Default value: scale
                     * @param _upgradeMode Upgrade method: <li>scale blue-green change</li><li>restart rolling restart</li>Default value: scale
                     * 
                     */
                    void SetUpgradeMode(const std::string& _upgradeMode);

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                    /**
                     * 获取Whether to back up the cluster before upgrading the version. By default, no backup is performed.
                     * @return CosBackup Whether to back up the cluster before upgrading the version. By default, no backup is performed.
                     * 
                     */
                    bool GetCosBackup() const;

                    /**
                     * 设置Whether to back up the cluster before upgrading the version. By default, no backup is performed.
                     * @param _cosBackup Whether to back up the cluster before upgrading the version. By default, no backup is performed.
                     * 
                     */
                    void SetCosBackup(const bool& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取In rolling mode, whether to skip the check and perform a forced reboot. Default value: false
                     * @return SkipCheckForceRestart In rolling mode, whether to skip the check and perform a forced reboot. Default value: false
                     * 
                     */
                    bool GetSkipCheckForceRestart() const;

                    /**
                     * 设置In rolling mode, whether to skip the check and perform a forced reboot. Default value: false
                     * @param _skipCheckForceRestart In rolling mode, whether to skip the check and perform a forced reboot. Default value: false
                     * 
                     */
                    void SetSkipCheckForceRestart(const bool& _skipCheckForceRestart);

                    /**
                     * 判断参数 SkipCheckForceRestart 是否已赋值
                     * @return SkipCheckForceRestart 是否已赋值
                     * 
                     */
                    bool SkipCheckForceRestartHasBeenSet() const;

                    /**
                     * 获取Parameter for delayed cvm launch
                     * @return CvmDelayOnlineTime Parameter for delayed cvm launch
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置Parameter for delayed cvm launch
                     * @param _cvmDelayOnlineTime Parameter for delayed cvm launch
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取Number of concurrent shard migrations
                     * @return ShardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置Number of concurrent shard migrations
                     * @param _shardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取Shard migration concurrency speed
                     * @return ShardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置Shard migration concurrency speed
                     * @param _shardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取Whether to enable the placement group asynchronous task
                     * @return EnableScheduleRecoverGroup Whether to enable the placement group asynchronous task
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置Whether to enable the placement group asynchronous task
                     * @param _enableScheduleRecoverGroup Whether to enable the placement group asynchronous task
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取Time period of the async task for the placement group
                     * @return EnableScheduleOperationDuration Time period of the async task for the placement group
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置Time period of the async task for the placement group
                     * @param _enableScheduleOperationDuration Time period of the async task for the placement group
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target ES version. Valid values: "6.4.3", "6.8.2", "7.5.1", "7.10.1", and "7.14.2".
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * Whether to perform an upgrade check only. Default value: false.
                     */
                    bool m_checkOnly;
                    bool m_checkOnlyHasBeenSet;

                    /**
                     * Target business feature version: <li>oss open source edition</li><li>basic edition</li>Currently used only when upgrading from 5.6.4 to 6.x. Default value: basic
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Upgrade method: <li>scale blue-green change</li><li>restart rolling restart</li>Default value: scale
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * Whether to back up the cluster before upgrading the version. By default, no backup is performed.
                     */
                    bool m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * In rolling mode, whether to skip the check and perform a forced reboot. Default value: false
                     */
                    bool m_skipCheckForceRestart;
                    bool m_skipCheckForceRestartHasBeenSet;

                    /**
                     * Parameter for delayed cvm launch
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * Number of concurrent shard migrations
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * Shard migration concurrency speed
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * Whether to enable the placement group asynchronous task
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * Time period of the async task for the placement group
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
