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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossBackupAddr.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossRegionStatus.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Backup file details
                */
                class Backup : public AbstractModel
                {
                public:
                    Backup();
                    ~Backup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File name. The name of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @return FileName File name. The name of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name. The name of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @param FileName File name. The name of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in KB. The size of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @return Size File size in KB. The size of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size in KB. The size of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @param Size File size in KB. The size of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup start time
                     * @return StartTime Backup start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param StartTime Backup start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time
                     * @return EndTime Backup end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backup end time
                     * @param EndTime Backup end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Private network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @return InternalAddr Private network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置Private network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @param InternalAddr Private network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Public network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @return ExternalAddr Public network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置Public network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @param ExternalAddr Public network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取Unique ID of a backup file, which is used by the `RestoreInstance` API. The unique ID of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @return Id Unique ID of a backup file, which is used by the `RestoreInstance` API. The unique ID of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID of a backup file, which is used by the `RestoreInstance` API. The unique ID of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     * @param Id Unique ID of a backup file, which is used by the `RestoreInstance` API. The unique ID of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Backup file status (0: creating, 1: succeeded, 2: failed)
                     * @return Status Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Backup file status (0: creating, 1: succeeded, 2: failed)
                     * @param Status Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of databases for multi-database backup
                     * @return DBs List of databases for multi-database backup
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置List of databases for multi-database backup
                     * @param DBs List of databases for multi-database backup
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取Backup policy (0: instance backup, 1: multi-database backup)
                     * @return Strategy Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Backup policy (0: instance backup, 1: multi-database backup)
                     * @param Strategy Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Backup Mode. Valid values: `0` (scheduled backup); `1` (manual backup); `2` (archive backup).
                     * @return BackupWay Backup Mode. Valid values: `0` (scheduled backup); `1` (manual backup); `2` (archive backup).
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置Backup Mode. Valid values: `0` (scheduled backup); `1` (manual backup); `2` (archive backup).
                     * @param BackupWay Backup Mode. Valid values: `0` (scheduled backup); `1` (manual backup); `2` (archive backup).
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取Backup task name (customizable)
                     * @return BackupName Backup task name (customizable)
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup task name (customizable)
                     * @param BackupName Backup task name (customizable)
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Group ID of unarchived backup files, which can be used as a request parameter in the `DescribeBackupFiles` API to get details of unarchived backup files in the specified group. This parameter is invalid for archived backup files.
                     * @return GroupId Group ID of unarchived backup files, which can be used as a request parameter in the `DescribeBackupFiles` API to get details of unarchived backup files in the specified group. This parameter is invalid for archived backup files.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID of unarchived backup files, which can be used as a request parameter in the `DescribeBackupFiles` API to get details of unarchived backup files in the specified group. This parameter is invalid for archived backup files.
                     * @param GroupId Group ID of unarchived backup files, which can be used as a request parameter in the `DescribeBackupFiles` API to get details of unarchived backup files in the specified group. This parameter is invalid for archived backup files.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Backup file format. Valid values:`pkg` (archive file), `single` (unarchived files).
                     * @return BackupFormat Backup file format. Valid values:`pkg` (archive file), `single` (unarchived files).
                     */
                    std::string GetBackupFormat() const;

                    /**
                     * 设置Backup file format. Valid values:`pkg` (archive file), `single` (unarchived files).
                     * @param BackupFormat Backup file format. Valid values:`pkg` (archive file), `single` (unarchived files).
                     */
                    void SetBackupFormat(const std::string& _backupFormat);

                    /**
                     * 判断参数 BackupFormat 是否已赋值
                     * @return BackupFormat 是否已赋值
                     */
                    bool BackupFormatHasBeenSet() const;

                    /**
                     * 获取The code of current region where the instance resides
                     * @return Region The code of current region where the instance resides
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The code of current region where the instance resides
                     * @param Region The code of current region where the instance resides
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The download address of cross-region backup in target region
                     * @return CrossBackupAddr The download address of cross-region backup in target region
                     */
                    std::vector<CrossBackupAddr> GetCrossBackupAddr() const;

                    /**
                     * 设置The download address of cross-region backup in target region
                     * @param CrossBackupAddr The download address of cross-region backup in target region
                     */
                    void SetCrossBackupAddr(const std::vector<CrossBackupAddr>& _crossBackupAddr);

                    /**
                     * 判断参数 CrossBackupAddr 是否已赋值
                     * @return CrossBackupAddr 是否已赋值
                     */
                    bool CrossBackupAddrHasBeenSet() const;

                    /**
                     * 获取The target region and status of cross-region backup
                     * @return CrossBackupStatus The target region and status of cross-region backup
                     */
                    std::vector<CrossRegionStatus> GetCrossBackupStatus() const;

                    /**
                     * 设置The target region and status of cross-region backup
                     * @param CrossBackupStatus The target region and status of cross-region backup
                     */
                    void SetCrossBackupStatus(const std::vector<CrossRegionStatus>& _crossBackupStatus);

                    /**
                     * 判断参数 CrossBackupStatus 是否已赋值
                     * @return CrossBackupStatus 是否已赋值
                     */
                    bool CrossBackupStatusHasBeenSet() const;

                private:

                    /**
                     * File name. The name of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in KB. The size of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Private network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Public network download address. The download address of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * Unique ID of a backup file, which is used by the `RestoreInstance` API. The unique ID of an unarchived backup file is returned by the `DescribeBackupFiles` API instead of this parameter.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Backup file status (0: creating, 1: succeeded, 2: failed)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of databases for multi-database backup
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Backup Mode. Valid values: `0` (scheduled backup); `1` (manual backup); `2` (archive backup).
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * Backup task name (customizable)
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Group ID of unarchived backup files, which can be used as a request parameter in the `DescribeBackupFiles` API to get details of unarchived backup files in the specified group. This parameter is invalid for archived backup files.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Backup file format. Valid values:`pkg` (archive file), `single` (unarchived files).
                     */
                    std::string m_backupFormat;
                    bool m_backupFormatHasBeenSet;

                    /**
                     * The code of current region where the instance resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The download address of cross-region backup in target region
                     */
                    std::vector<CrossBackupAddr> m_crossBackupAddr;
                    bool m_crossBackupAddrHasBeenSet;

                    /**
                     * The target region and status of cross-region backup
                     */
                    std::vector<CrossRegionStatus> m_crossBackupStatus;
                    bool m_crossBackupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
