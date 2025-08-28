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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyCrossBackupStrategy request structure.
                */
                class ModifyCrossBackupStrategyRequest : public AbstractModel
                {
                public:
                    ModifyCrossBackupStrategyRequest();
                    ~ModifyCrossBackupStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cross-region backup switch (data backup & log backup). enable - enabled; disable - disabled.
                     * @return CrossBackupEnabled Cross-region backup switch (data backup & log backup). enable - enabled; disable - disabled.
                     * 
                     */
                    std::string GetCrossBackupEnabled() const;

                    /**
                     * 设置Cross-region backup switch (data backup & log backup). enable - enabled; disable - disabled.
                     * @param _crossBackupEnabled Cross-region backup switch (data backup & log backup). enable - enabled; disable - disabled.
                     * 
                     */
                    void SetCrossBackupEnabled(const std::string& _crossBackupEnabled);

                    /**
                     * 判断参数 CrossBackupEnabled 是否已赋值
                     * @return CrossBackupEnabled 是否已赋值
                     * 
                     */
                    bool CrossBackupEnabledHasBeenSet() const;

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
                     * 获取Instance ID list.
                     * @return InstanceIdSet Instance ID list.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置Instance ID list.
                     * @param _instanceIdSet Instance ID list.
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Retention days for cross-region backups. Value range: 7-1830. The default value is 7.
                     * @return CrossBackupSaveDays Retention days for cross-region backups. Value range: 7-1830. The default value is 7.
                     * 
                     */
                    uint64_t GetCrossBackupSaveDays() const;

                    /**
                     * 设置Retention days for cross-region backups. Value range: 7-1830. The default value is 7.
                     * @param _crossBackupSaveDays Retention days for cross-region backups. Value range: 7-1830. The default value is 7.
                     * 
                     */
                    void SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays);

                    /**
                     * 判断参数 CrossBackupSaveDays 是否已赋值
                     * @return CrossBackupSaveDays 是否已赋值
                     * 
                     */
                    bool CrossBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Target region ID for cross-region backups, with a maximum of two and a minimum of one.
                     * @return CrossBackupRegion Target region ID for cross-region backups, with a maximum of two and a minimum of one.
                     * 
                     */
                    std::vector<std::string> GetCrossBackupRegion() const;

                    /**
                     * 设置Target region ID for cross-region backups, with a maximum of two and a minimum of one.
                     * @param _crossBackupRegion Target region ID for cross-region backups, with a maximum of two and a minimum of one.
                     * 
                     */
                    void SetCrossBackupRegion(const std::vector<std::string>& _crossBackupRegion);

                    /**
                     * 判断参数 CrossBackupRegion 是否已赋值
                     * @return CrossBackupRegion 是否已赋值
                     * 
                     */
                    bool CrossBackupRegionHasBeenSet() const;

                    /**
                     * 获取Whether to clean up cross-region backups (data backups & log backups) immediately. This parameter is only valid when the value of BackupEnabled is disabled. 1 - yes; 0 - no. The default value is 0.
                     * @return CleanUpCrossBackup Whether to clean up cross-region backups (data backups & log backups) immediately. This parameter is only valid when the value of BackupEnabled is disabled. 1 - yes; 0 - no. The default value is 0.
                     * 
                     */
                    uint64_t GetCleanUpCrossBackup() const;

                    /**
                     * 设置Whether to clean up cross-region backups (data backups & log backups) immediately. This parameter is only valid when the value of BackupEnabled is disabled. 1 - yes; 0 - no. The default value is 0.
                     * @param _cleanUpCrossBackup Whether to clean up cross-region backups (data backups & log backups) immediately. This parameter is only valid when the value of BackupEnabled is disabled. 1 - yes; 0 - no. The default value is 0.
                     * 
                     */
                    void SetCleanUpCrossBackup(const uint64_t& _cleanUpCrossBackup);

                    /**
                     * 判断参数 CleanUpCrossBackup 是否已赋值
                     * @return CleanUpCrossBackup 是否已赋值
                     * 
                     */
                    bool CleanUpCrossBackupHasBeenSet() const;

                private:

                    /**
                     * Cross-region backup switch (data backup & log backup). enable - enabled; disable - disabled.
                     */
                    std::string m_crossBackupEnabled;
                    bool m_crossBackupEnabledHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance ID list.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Retention days for cross-region backups. Value range: 7-1830. The default value is 7.
                     */
                    uint64_t m_crossBackupSaveDays;
                    bool m_crossBackupSaveDaysHasBeenSet;

                    /**
                     * Target region ID for cross-region backups, with a maximum of two and a minimum of one.
                     */
                    std::vector<std::string> m_crossBackupRegion;
                    bool m_crossBackupRegionHasBeenSet;

                    /**
                     * Whether to clean up cross-region backups (data backups & log backups) immediately. This parameter is only valid when the value of BackupEnabled is disabled. 1 - yes; 0 - no. The default value is 0.
                     */
                    uint64_t m_cleanUpCrossBackup;
                    bool m_cleanUpCrossBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_
