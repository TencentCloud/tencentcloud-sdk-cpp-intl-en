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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_

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
                * DescribeBackups request structure.
                */
                class DescribeBackupsRequest : public AbstractModel
                {
                public:
                    DescribeBackupsRequest();
                    ~DescribeBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start name (yyyy-MM-dd HH:mm:ss)
                     * @return StartTime Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start name (yyyy-MM-dd HH:mm:ss)
                     * @param StartTime Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (yyyy-MM-dd HH:mm:ss)
                     * @return EndTime End time (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (yyyy-MM-dd HH:mm:ss)
                     * @param EndTime End time (yyyy-MM-dd HH:mm:ss)
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of mssql-njj2mtpl
                     * @return InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-njj2mtpl
                     * @param InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of results per page. Value range: 1-100. Default value: 20
                     * @return Limit Number of results per page. Value range: 1-100. Default value: 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Value range: 1-100. Default value: 20
                     * @param Limit Number of results per page. Value range: 1-100. Default value: 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param Offset Page number. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter by backup name. If this parameter is left empty, backup name will not be used in filtering.
                     * @return BackupName Filter by backup name. If this parameter is left empty, backup name will not be used in filtering.
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Filter by backup name. If this parameter is left empty, backup name will not be used in filtering.
                     * @param BackupName Filter by backup name. If this parameter is left empty, backup name will not be used in filtering.
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Filter by backup policy. Valid values: 0 (instance backup), 1 (multi-database backup). If this parameter is left empty, backup policy will not be used in filtering.
                     * @return Strategy Filter by backup policy. Valid values: 0 (instance backup), 1 (multi-database backup). If this parameter is left empty, backup policy will not be used in filtering.
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Filter by backup policy. Valid values: 0 (instance backup), 1 (multi-database backup). If this parameter is left empty, backup policy will not be used in filtering.
                     * @param Strategy Filter by backup policy. Valid values: 0 (instance backup), 1 (multi-database backup). If this parameter is left empty, backup policy will not be used in filtering.
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Filter by backup mode. Valid values: 0 (automatic backup on a regular basis), 1 (manual backup performed by the user at any time). If this parameter is left empty, backup mode will not be used in filtering.
                     * @return BackupWay Filter by backup mode. Valid values: 0 (automatic backup on a regular basis), 1 (manual backup performed by the user at any time). If this parameter is left empty, backup mode will not be used in filtering.
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置Filter by backup mode. Valid values: 0 (automatic backup on a regular basis), 1 (manual backup performed by the user at any time). If this parameter is left empty, backup mode will not be used in filtering.
                     * @param BackupWay Filter by backup mode. Valid values: 0 (automatic backup on a regular basis), 1 (manual backup performed by the user at any time). If this parameter is left empty, backup mode will not be used in filtering.
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取Filter by backup ID. If this parameter is left empty, backup ID will not be used in filtering.
                     * @return BackupId Filter by backup ID. If this parameter is left empty, backup ID will not be used in filtering.
                     */
                    uint64_t GetBackupId() const;

                    /**
                     * 设置Filter by backup ID. If this parameter is left empty, backup ID will not be used in filtering.
                     * @param BackupId Filter by backup ID. If this parameter is left empty, backup ID will not be used in filtering.
                     */
                    void SetBackupId(const uint64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Filter backups by the database name. If the parameter is left empty, this filter criteria will not take effect.
                     * @return DatabaseName Filter backups by the database name. If the parameter is left empty, this filter criteria will not take effect.
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Filter backups by the database name. If the parameter is left empty, this filter criteria will not take effect.
                     * @param DatabaseName Filter backups by the database name. If the parameter is left empty, this filter criteria will not take effect.
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Whether to group backup files by backup task. Valid value: `0` (no), `1` (yes). Default value: `0`. This parameter is valid only for unarchived backup files.
                     * @return Group Whether to group backup files by backup task. Valid value: `0` (no), `1` (yes). Default value: `0`. This parameter is valid only for unarchived backup files.
                     */
                    int64_t GetGroup() const;

                    /**
                     * 设置Whether to group backup files by backup task. Valid value: `0` (no), `1` (yes). Default value: `0`. This parameter is valid only for unarchived backup files.
                     * @param Group Whether to group backup files by backup task. Valid value: `0` (no), `1` (yes). Default value: `0`. This parameter is valid only for unarchived backup files.
                     */
                    void SetGroup(const int64_t& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values: `1` (data backup), `2` (log backup). Default value: `1`.
                     * @return Type Backup type. Valid values: `1` (data backup), `2` (log backup). Default value: `1`.
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Backup type. Valid values: `1` (data backup), `2` (log backup). Default value: `1`.
                     * @param Type Backup type. Valid values: `1` (data backup), `2` (log backup). Default value: `1`.
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter by backup file format. Valid values: `pkg` (archive file), `single` (Unarchived files).
                     * @return BackupFormat Filter by backup file format. Valid values: `pkg` (archive file), `single` (Unarchived files).
                     */
                    std::string GetBackupFormat() const;

                    /**
                     * 设置Filter by backup file format. Valid values: `pkg` (archive file), `single` (Unarchived files).
                     * @param BackupFormat Filter by backup file format. Valid values: `pkg` (archive file), `single` (Unarchived files).
                     */
                    void SetBackupFormat(const std::string& _backupFormat);

                    /**
                     * 判断参数 BackupFormat 是否已赋值
                     * @return BackupFormat 是否已赋值
                     */
                    bool BackupFormatHasBeenSet() const;

                private:

                    /**
                     * Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of results per page. Value range: 1-100. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter by backup name. If this parameter is left empty, backup name will not be used in filtering.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Filter by backup policy. Valid values: 0 (instance backup), 1 (multi-database backup). If this parameter is left empty, backup policy will not be used in filtering.
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Filter by backup mode. Valid values: 0 (automatic backup on a regular basis), 1 (manual backup performed by the user at any time). If this parameter is left empty, backup mode will not be used in filtering.
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * Filter by backup ID. If this parameter is left empty, backup ID will not be used in filtering.
                     */
                    uint64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Filter backups by the database name. If the parameter is left empty, this filter criteria will not take effect.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Whether to group backup files by backup task. Valid value: `0` (no), `1` (yes). Default value: `0`. This parameter is valid only for unarchived backup files.
                     */
                    int64_t m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Backup type. Valid values: `1` (data backup), `2` (log backup). Default value: `1`.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter by backup file format. Valid values: `pkg` (archive file), `single` (Unarchived files).
                     */
                    std::string m_backupFormat;
                    bool m_backupFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
