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
                     * 获取Target ES version. Valid values: 6.4.3, 6.8.2, 7.5.1
                     * @return EsVersion Target ES version. Valid values: 6.4.3, 6.8.2, 7.5.1
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置Target ES version. Valid values: 6.4.3, 6.8.2, 7.5.1
                     * @param _esVersion Target ES version. Valid values: 6.4.3, 6.8.2, 7.5.1
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
                     * 获取Whether to check for upgrade only. Default value: false
                     * @return CheckOnly Whether to check for upgrade only. Default value: false
                     * 
                     */
                    bool GetCheckOnly() const;

                    /**
                     * 设置Whether to check for upgrade only. Default value: false
                     * @param _checkOnly Whether to check for upgrade only. Default value: false
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
                     * 获取Target X-Pack edition: <li>OSS: Open-source Edition </li><li>basic: Basic Edition </li>Currently only used for v5.6.4 to v6.x upgrade. Default value: basic
                     * @return LicenseType Target X-Pack edition: <li>OSS: Open-source Edition </li><li>basic: Basic Edition </li>Currently only used for v5.6.4 to v6.x upgrade. Default value: basic
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置Target X-Pack edition: <li>OSS: Open-source Edition </li><li>basic: Basic Edition </li>Currently only used for v5.6.4 to v6.x upgrade. Default value: basic
                     * @param _licenseType Target X-Pack edition: <li>OSS: Open-source Edition </li><li>basic: Basic Edition </li>Currently only used for v5.6.4 to v6.x upgrade. Default value: basic
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
                     * 获取Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     * @return BasicSecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     * @param _basicSecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
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
                     * 获取Upgrade mode. <li>scale: blue/green deployment</li><li>restart: rolling restart</li>Default value: scale
                     * @return UpgradeMode Upgrade mode. <li>scale: blue/green deployment</li><li>restart: rolling restart</li>Default value: scale
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 设置Upgrade mode. <li>scale: blue/green deployment</li><li>restart: rolling restart</li>Default value: scale
                     * @param _upgradeMode Upgrade mode. <li>scale: blue/green deployment</li><li>restart: rolling restart</li>Default value: scale
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
                     * 获取Whether to back up the cluster before version upgrade (no backup by default)
                     * @return CosBackup Whether to back up the cluster before version upgrade (no backup by default)
                     * 
                     */
                    bool GetCosBackup() const;

                    /**
                     * 设置Whether to back up the cluster before version upgrade (no backup by default)
                     * @param _cosBackup Whether to back up the cluster before version upgrade (no backup by default)
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
                     * 获取Whether to skip the check and perform a force restart in the rolling mode. Default value: `false`.
                     * @return SkipCheckForceRestart Whether to skip the check and perform a force restart in the rolling mode. Default value: `false`.
                     * 
                     */
                    bool GetSkipCheckForceRestart() const;

                    /**
                     * 设置Whether to skip the check and perform a force restart in the rolling mode. Default value: `false`.
                     * @param _skipCheckForceRestart Whether to skip the check and perform a force restart in the rolling mode. Default value: `false`.
                     * 
                     */
                    void SetSkipCheckForceRestart(const bool& _skipCheckForceRestart);

                    /**
                     * 判断参数 SkipCheckForceRestart 是否已赋值
                     * @return SkipCheckForceRestart 是否已赋值
                     * 
                     */
                    bool SkipCheckForceRestartHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target ES version. Valid values: 6.4.3, 6.8.2, 7.5.1
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * Whether to check for upgrade only. Default value: false
                     */
                    bool m_checkOnly;
                    bool m_checkOnlyHasBeenSet;

                    /**
                     * Target X-Pack edition: <li>OSS: Open-source Edition </li><li>basic: Basic Edition </li>Currently only used for v5.6.4 to v6.x upgrade. Default value: basic
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Upgrade mode. <li>scale: blue/green deployment</li><li>restart: rolling restart</li>Default value: scale
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * Whether to back up the cluster before version upgrade (no backup by default)
                     */
                    bool m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * Whether to skip the check and perform a force restart in the rolling mode. Default value: `false`.
                     */
                    bool m_skipCheckForceRestart;
                    bool m_skipCheckForceRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
