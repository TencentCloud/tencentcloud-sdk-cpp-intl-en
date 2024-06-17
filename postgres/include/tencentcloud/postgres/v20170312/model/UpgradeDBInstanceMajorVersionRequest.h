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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceMajorVersion request structure.
                */
                class UpgradeDBInstanceMajorVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceMajorVersionRequest();
                    ~UpgradeDBInstanceMajorVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _dBInstanceId Instance ID.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target kernel version number, where upgradeable target kernel version numbers can be acquired through API DescribeDBVersions.
                     * @return TargetDBKernelVersion Target kernel version number, where upgradeable target kernel version numbers can be acquired through API DescribeDBVersions.
                     * 
                     */
                    std::string GetTargetDBKernelVersion() const;

                    /**
                     * 设置Target kernel version number, where upgradeable target kernel version numbers can be acquired through API DescribeDBVersions.
                     * @param _targetDBKernelVersion Target kernel version number, where upgradeable target kernel version numbers can be acquired through API DescribeDBVersions.
                     * 
                     */
                    void SetTargetDBKernelVersion(const std::string& _targetDBKernelVersion);

                    /**
                     * 判断参数 TargetDBKernelVersion 是否已赋值
                     * @return TargetDBKernelVersion 是否已赋值
                     * 
                     */
                    bool TargetDBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Whether it is verification mode: if UpgradeCheck is True, it means only kernel version compatibility check will be conducted, without actual upgrade operations, and there will be no affect on the original instance. The check results can be viewed through the upgrade logs.
                     * @return UpgradeCheck Whether it is verification mode: if UpgradeCheck is True, it means only kernel version compatibility check will be conducted, without actual upgrade operations, and there will be no affect on the original instance. The check results can be viewed through the upgrade logs.
                     * 
                     */
                    bool GetUpgradeCheck() const;

                    /**
                     * 设置Whether it is verification mode: if UpgradeCheck is True, it means only kernel version compatibility check will be conducted, without actual upgrade operations, and there will be no affect on the original instance. The check results can be viewed through the upgrade logs.
                     * @param _upgradeCheck Whether it is verification mode: if UpgradeCheck is True, it means only kernel version compatibility check will be conducted, without actual upgrade operations, and there will be no affect on the original instance. The check results can be viewed through the upgrade logs.
                     * 
                     */
                    void SetUpgradeCheck(const bool& _upgradeCheck);

                    /**
                     * 判断参数 UpgradeCheck 是否已赋值
                     * @return UpgradeCheck 是否已赋值
                     * 
                     */
                    bool UpgradeCheckHasBeenSet() const;

                    /**
                     * 获取Pre-upgrade backup option: True means a full backup is required before upgrade, and False means a full backup is not required before upgrade. If there is an existing backup set that can restore the instance to its pre-upgrade state, False can be selected; otherwise, True should be specified. This parameter is invalid when UpgradeCheck is True.
                     * @return BackupBeforeUpgrade Pre-upgrade backup option: True means a full backup is required before upgrade, and False means a full backup is not required before upgrade. If there is an existing backup set that can restore the instance to its pre-upgrade state, False can be selected; otherwise, True should be specified. This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    bool GetBackupBeforeUpgrade() const;

                    /**
                     * 设置Pre-upgrade backup option: True means a full backup is required before upgrade, and False means a full backup is not required before upgrade. If there is an existing backup set that can restore the instance to its pre-upgrade state, False can be selected; otherwise, True should be specified. This parameter is invalid when UpgradeCheck is True.
                     * @param _backupBeforeUpgrade Pre-upgrade backup option: True means a full backup is required before upgrade, and False means a full backup is not required before upgrade. If there is an existing backup set that can restore the instance to its pre-upgrade state, False can be selected; otherwise, True should be specified. This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetBackupBeforeUpgrade(const bool& _backupBeforeUpgrade);

                    /**
                     * 判断参数 BackupBeforeUpgrade 是否已赋值
                     * @return BackupBeforeUpgrade 是否已赋值
                     * 
                     */
                    bool BackupBeforeUpgradeHasBeenSet() const;

                    /**
                     * 获取Statistics collection option, which is used to run ANALYZE on the primary instance to update system statistics after the upgrade. Valid values include:
0: No statistics collection required;
1: Collect statistics before instance recovery write;
3: Collect statistics after instance recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * @return StatisticsRefreshOption Statistics collection option, which is used to run ANALYZE on the primary instance to update system statistics after the upgrade. Valid values include:
0: No statistics collection required;
1: Collect statistics before instance recovery write;
3: Collect statistics after instance recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    int64_t GetStatisticsRefreshOption() const;

                    /**
                     * 设置Statistics collection option, which is used to run ANALYZE on the primary instance to update system statistics after the upgrade. Valid values include:
0: No statistics collection required;
1: Collect statistics before instance recovery write;
3: Collect statistics after instance recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * @param _statisticsRefreshOption Statistics collection option, which is used to run ANALYZE on the primary instance to update system statistics after the upgrade. Valid values include:
0: No statistics collection required;
1: Collect statistics before instance recovery write;
3: Collect statistics after instance recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetStatisticsRefreshOption(const int64_t& _statisticsRefreshOption);

                    /**
                     * 判断参数 StatisticsRefreshOption 是否已赋值
                     * @return StatisticsRefreshOption 是否已赋值
                     * 
                     */
                    bool StatisticsRefreshOptionHasBeenSet() const;

                    /**
                     * 获取Plugin upgrade option. pg_upgrade does not upgrade any plugins, and "ALTER EXTENSION UPDATE" needs to be executed on the database where the plugins were created after the upgrade. When initiating a major version upgrade of an instance, you can specify whether the upgrade task automatically upgrades the plugin version before/after the instance recovery write. Valid values include:
0: No automatic plugin upgrade required;
1: Upgrade plugins before recovery write;
2: Upgrade plugins after recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * @return ExtensionUpgradeOption Plugin upgrade option. pg_upgrade does not upgrade any plugins, and "ALTER EXTENSION UPDATE" needs to be executed on the database where the plugins were created after the upgrade. When initiating a major version upgrade of an instance, you can specify whether the upgrade task automatically upgrades the plugin version before/after the instance recovery write. Valid values include:
0: No automatic plugin upgrade required;
1: Upgrade plugins before recovery write;
2: Upgrade plugins after recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    int64_t GetExtensionUpgradeOption() const;

                    /**
                     * 设置Plugin upgrade option. pg_upgrade does not upgrade any plugins, and "ALTER EXTENSION UPDATE" needs to be executed on the database where the plugins were created after the upgrade. When initiating a major version upgrade of an instance, you can specify whether the upgrade task automatically upgrades the plugin version before/after the instance recovery write. Valid values include:
0: No automatic plugin upgrade required;
1: Upgrade plugins before recovery write;
2: Upgrade plugins after recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * @param _extensionUpgradeOption Plugin upgrade option. pg_upgrade does not upgrade any plugins, and "ALTER EXTENSION UPDATE" needs to be executed on the database where the plugins were created after the upgrade. When initiating a major version upgrade of an instance, you can specify whether the upgrade task automatically upgrades the plugin version before/after the instance recovery write. Valid values include:
0: No automatic plugin upgrade required;
1: Upgrade plugins before recovery write;
2: Upgrade plugins after recovery write.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetExtensionUpgradeOption(const int64_t& _extensionUpgradeOption);

                    /**
                     * 判断参数 ExtensionUpgradeOption 是否已赋值
                     * @return ExtensionUpgradeOption 是否已赋值
                     * 
                     */
                    bool ExtensionUpgradeOptionHasBeenSet() const;

                    /**
                     * 获取Upgrade time option. During the upgrade process, there will be a period when the instance is read-only, and there will be a second-level flash disconnection. When initiating an upgrade, you need to choose the time window for this impact. Valid values include:
0: Execute automatically, no specific time window required;
1: Specify the time window for this upgrade task, which is set via UpgradeTimeBegin and UpgradeTimeEnd parameters;
2: Execute during the instance operation and maintenance time window.
This parameter is invalid when UpgradeCheck is True.
                     * @return UpgradeTimeOption Upgrade time option. During the upgrade process, there will be a period when the instance is read-only, and there will be a second-level flash disconnection. When initiating an upgrade, you need to choose the time window for this impact. Valid values include:
0: Execute automatically, no specific time window required;
1: Specify the time window for this upgrade task, which is set via UpgradeTimeBegin and UpgradeTimeEnd parameters;
2: Execute during the instance operation and maintenance time window.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    int64_t GetUpgradeTimeOption() const;

                    /**
                     * 设置Upgrade time option. During the upgrade process, there will be a period when the instance is read-only, and there will be a second-level flash disconnection. When initiating an upgrade, you need to choose the time window for this impact. Valid values include:
0: Execute automatically, no specific time window required;
1: Specify the time window for this upgrade task, which is set via UpgradeTimeBegin and UpgradeTimeEnd parameters;
2: Execute during the instance operation and maintenance time window.
This parameter is invalid when UpgradeCheck is True.
                     * @param _upgradeTimeOption Upgrade time option. During the upgrade process, there will be a period when the instance is read-only, and there will be a second-level flash disconnection. When initiating an upgrade, you need to choose the time window for this impact. Valid values include:
0: Execute automatically, no specific time window required;
1: Specify the time window for this upgrade task, which is set via UpgradeTimeBegin and UpgradeTimeEnd parameters;
2: Execute during the instance operation and maintenance time window.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetUpgradeTimeOption(const int64_t& _upgradeTimeOption);

                    /**
                     * 判断参数 UpgradeTimeOption 是否已赋值
                     * @return UpgradeTimeOption 是否已赋值
                     * 
                     */
                    bool UpgradeTimeOptionHasBeenSet() const;

                    /**
                     * 获取Upgrade window start time, and the time format is HH:MM:SS, for example: 01:00:00. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * @return UpgradeTimeBegin Upgrade window start time, and the time format is HH:MM:SS, for example: 01:00:00. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    std::string GetUpgradeTimeBegin() const;

                    /**
                     * 设置Upgrade window start time, and the time format is HH:MM:SS, for example: 01:00:00. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * @param _upgradeTimeBegin Upgrade window start time, and the time format is HH:MM:SS, for example: 01:00:00. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetUpgradeTimeBegin(const std::string& _upgradeTimeBegin);

                    /**
                     * 判断参数 UpgradeTimeBegin 是否已赋值
                     * @return UpgradeTimeBegin 是否已赋值
                     * 
                     */
                    bool UpgradeTimeBeginHasBeenSet() const;

                    /**
                     * 获取Upgrade window end time, and the time format is HH:MM:SS, for example: 2:00:00 AM. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * @return UpgradeTimeEnd Upgrade window end time, and the time format is HH:MM:SS, for example: 2:00:00 AM. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    std::string GetUpgradeTimeEnd() const;

                    /**
                     * 设置Upgrade window end time, and the time format is HH:MM:SS, for example: 2:00:00 AM. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * @param _upgradeTimeEnd Upgrade window end time, and the time format is HH:MM:SS, for example: 2:00:00 AM. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     * 
                     */
                    void SetUpgradeTimeEnd(const std::string& _upgradeTimeEnd);

                    /**
                     * 判断参数 UpgradeTimeEnd 是否已赋值
                     * @return UpgradeTimeEnd 是否已赋值
                     * 
                     */
                    bool UpgradeTimeEndHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Target kernel version number, where upgradeable target kernel version numbers can be acquired through API DescribeDBVersions.
                     */
                    std::string m_targetDBKernelVersion;
                    bool m_targetDBKernelVersionHasBeenSet;

                    /**
                     * Whether it is verification mode: if UpgradeCheck is True, it means only kernel version compatibility check will be conducted, without actual upgrade operations, and there will be no affect on the original instance. The check results can be viewed through the upgrade logs.
                     */
                    bool m_upgradeCheck;
                    bool m_upgradeCheckHasBeenSet;

                    /**
                     * Pre-upgrade backup option: True means a full backup is required before upgrade, and False means a full backup is not required before upgrade. If there is an existing backup set that can restore the instance to its pre-upgrade state, False can be selected; otherwise, True should be specified. This parameter is invalid when UpgradeCheck is True.
                     */
                    bool m_backupBeforeUpgrade;
                    bool m_backupBeforeUpgradeHasBeenSet;

                    /**
                     * Statistics collection option, which is used to run ANALYZE on the primary instance to update system statistics after the upgrade. Valid values include:
0: No statistics collection required;
1: Collect statistics before instance recovery write;
3: Collect statistics after instance recovery write.
This parameter is invalid when UpgradeCheck is True.
                     */
                    int64_t m_statisticsRefreshOption;
                    bool m_statisticsRefreshOptionHasBeenSet;

                    /**
                     * Plugin upgrade option. pg_upgrade does not upgrade any plugins, and "ALTER EXTENSION UPDATE" needs to be executed on the database where the plugins were created after the upgrade. When initiating a major version upgrade of an instance, you can specify whether the upgrade task automatically upgrades the plugin version before/after the instance recovery write. Valid values include:
0: No automatic plugin upgrade required;
1: Upgrade plugins before recovery write;
2: Upgrade plugins after recovery write.
This parameter is invalid when UpgradeCheck is True.
                     */
                    int64_t m_extensionUpgradeOption;
                    bool m_extensionUpgradeOptionHasBeenSet;

                    /**
                     * Upgrade time option. During the upgrade process, there will be a period when the instance is read-only, and there will be a second-level flash disconnection. When initiating an upgrade, you need to choose the time window for this impact. Valid values include:
0: Execute automatically, no specific time window required;
1: Specify the time window for this upgrade task, which is set via UpgradeTimeBegin and UpgradeTimeEnd parameters;
2: Execute during the instance operation and maintenance time window.
This parameter is invalid when UpgradeCheck is True.
                     */
                    int64_t m_upgradeTimeOption;
                    bool m_upgradeTimeOptionHasBeenSet;

                    /**
                     * Upgrade window start time, and the time format is HH:MM:SS, for example: 01:00:00. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     */
                    std::string m_upgradeTimeBegin;
                    bool m_upgradeTimeBeginHasBeenSet;

                    /**
                     * Upgrade window end time, and the time format is HH:MM:SS, for example: 2:00:00 AM. This parameter is valid when UpgradeTimeOption is set to `1`.
This parameter is invalid when UpgradeCheck is True.
                     */
                    std::string m_upgradeTimeEnd;
                    bool m_upgradeTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
