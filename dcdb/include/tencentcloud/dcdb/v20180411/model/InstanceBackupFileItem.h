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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_INSTANCEBACKUPFILEITEM_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_INSTANCEBACKUPFILEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Backup file details of an instance
                */
                class InstanceBackupFileItem : public AbstractModel
                {
                public:
                    InstanceBackupFileItem();
                    ~InstanceBackupFileItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param InstanceStatus Instance status
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Shard ID
                     * @return ShardId Shard ID
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置Shard ID
                     * @param ShardId Shard ID
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param FilePath File path
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return FileName File name
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param FileName File name
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size
                     * @return FileSize File size
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size
                     * @param FileSize File size
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values: `Data` (data backup), `Binlog` (Binlog backup), `Errlog` (error log), `Slowlog` (slow log).
                     * @return BackupType Backup type. Valid values: `Data` (data backup), `Binlog` (Binlog backup), `Errlog` (error log), `Slowlog` (slow log).
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values: `Data` (data backup), `Binlog` (Binlog backup), `Errlog` (error log), `Slowlog` (slow log).
                     * @param BackupType Backup type. Valid values: `Data` (data backup), `Binlog` (Binlog backup), `Errlog` (error log), `Slowlog` (slow log).
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Manual backup. Valid values: `0` (no), `1` (yes).
                     * @return ManualBackup Manual backup. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t GetManualBackup() const;

                    /**
                     * 设置Manual backup. Valid values: `0` (no), `1` (yes).
                     * @param ManualBackup Manual backup. Valid values: `0` (no), `1` (yes).
                     */
                    void SetManualBackup(const int64_t& _manualBackup);

                    /**
                     * 判断参数 ManualBackup 是否已赋值
                     * @return ManualBackup 是否已赋值
                     */
                    bool ManualBackupHasBeenSet() const;

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

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance status
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Shard ID
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Backup type. Valid values: `Data` (data backup), `Binlog` (Binlog backup), `Errlog` (error log), `Slowlog` (slow log).
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Manual backup. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_manualBackup;
                    bool m_manualBackupHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_INSTANCEBACKUPFILEITEM_H_
