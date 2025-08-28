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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_

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
                * DescribeBackupByFlowId response structure.
                */
                class DescribeBackupByFlowIdResponse : public AbstractModel
                {
                public:
                    DescribeBackupByFlowIdResponse();
                    ~DescribeBackupByFlowIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the backup file. This field is used by the RestoreInstance API. For a single-database backup file, only the unique identifier of the backup file for the first record is returned. Through the DescribeBackupFiles API, IDs of all backup files that are available for rollback can be obtained for single-database backup files.
                     * @return Id Unique identifier of the backup file. This field is used by the RestoreInstance API. For a single-database backup file, only the unique identifier of the backup file for the first record is returned. Through the DescribeBackupFiles API, IDs of all backup files that are available for rollback can be obtained for single-database backup files.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取File name. For a single-database backup file, only the file name of the first record is returned. Through the DescribeBackupFiles API, file names of all records can be obtained for single-database backup files.
                     * @return FileName File name. For a single-database backup file, only the file name of the first record is returned. Through the DescribeBackupFiles API, file names of all records can be obtained for single-database backup files.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Backup task name, which can be customized.
                     * @return BackupName Backup task name, which can be customized.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Backup start time.
                     * @return StartTime Backup start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time.
                     * @return EndTime Backup end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取File size, in KB. For a single-database backup file, only the file size of the first record is returned. Through the DescribeBackupFiles API, file sizes of all records can be obtained for single-database backup files.
                     * @return Size File size, in KB. For a single-database backup file, only the file size of the first record is returned. Through the DescribeBackupFiles API, file sizes of all records can be obtained for single-database backup files.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup policy: 0 - instance backup; 1 - multi-database backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     * @return Strategy Backup policy: 0 - instance backup; 1 - multi-database backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Backup file status. 0 - creating; 1 - successful; 2-failed.
                     * @return Status Backup file status. 0 - creating; 1 - successful; 2-failed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup method. 0 - scheduled backup; 1 - manual temporary backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     * @return BackupWay Backup method. 0 - scheduled backup; 1 - manual temporary backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     * 
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     * 
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取Database list. For a single-database backup file, only the database name included in the first record is returned. Through the DescribeBackupFiles API, the database names of all records can be obtained for single-database backup files.
                     * @return DBs Database list. For a single-database backup file, only the database name included in the first record is returned. Through the DescribeBackupFiles API, the database names of all records can be obtained for single-database backup files.
                     * 
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     * 
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取Private network download address. For a single-database backup file, only the private network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     * @return InternalAddr Private network download address. For a single-database backup file, only the private network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Public network download address. For a single-database backup file, only the public network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     * @return ExternalAddr Public network download address. For a single-database backup file, only the public network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取Aggregation ID. This value is not returned for packaging backup files. Call the DescribeBackupFiles API with this value to obtain detailed information about single-database backup files.
                     * @return GroupId Aggregation ID. This value is not returned for packaging backup files. Call the DescribeBackupFiles API with this value to obtain detailed information about single-database backup files.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the backup file. This field is used by the RestoreInstance API. For a single-database backup file, only the unique identifier of the backup file for the first record is returned. Through the DescribeBackupFiles API, IDs of all backup files that are available for rollback can be obtained for single-database backup files.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * File name. For a single-database backup file, only the file name of the first record is returned. Through the DescribeBackupFiles API, file names of all records can be obtained for single-database backup files.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Backup task name, which can be customized.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Backup start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * File size, in KB. For a single-database backup file, only the file size of the first record is returned. Through the DescribeBackupFiles API, file sizes of all records can be obtained for single-database backup files.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup policy: 0 - instance backup; 1 - multi-database backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Backup file status. 0 - creating; 1 - successful; 2-failed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup method. 0 - scheduled backup; 1 - manual temporary backup. When the instance status is 0 - creating, the default value of this field is 0, which has no practical significance.
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * Database list. For a single-database backup file, only the database name included in the first record is returned. Through the DescribeBackupFiles API, the database names of all records can be obtained for single-database backup files.
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * Private network download address. For a single-database backup file, only the private network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Public network download address. For a single-database backup file, only the public network download address of the first record is returned. Through the DescribeBackupFiles API, download addresses of all records can be obtained for single-database backup files.
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * Aggregation ID. This value is not returned for packaging backup files. Call the DescribeBackupFiles API with this value to obtain detailed information about single-database backup files.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_
