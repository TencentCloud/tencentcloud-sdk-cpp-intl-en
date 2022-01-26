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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Backup file information
                */
                class BackupFileInfo : public AbstractModel
                {
                public:
                    BackupFileInfo();
                    ~BackupFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Snapshot file ID used for rollback
                     * @return SnapshotId Snapshot file ID used for rollback
                     */
                    uint64_t GetSnapshotId() const;

                    /**
                     * 设置Snapshot file ID used for rollback
                     * @param SnapshotId Snapshot file ID used for rollback
                     */
                    void SetSnapshotId(const uint64_t& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Snapshot file name
                     * @return FileName Snapshot file name
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Snapshot file name
                     * @param FileName Snapshot file name
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Snapshot file size
                     * @return FileSize Snapshot file size
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置Snapshot file size
                     * @param FileSize Snapshot file size
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Snapshot backup start time
                     * @return StartTime Snapshot backup start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Snapshot backup start time
                     * @param StartTime Snapshot backup start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot backup end time
                     * @return FinishTime Snapshot backup end time
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Snapshot backup end time
                     * @param FinishTime Snapshot backup end time
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Backup type. snapshot: snapshot backup; timepoint: time point backup
                     * @return BackupType Backup type. snapshot: snapshot backup; timepoint: time point backup
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. snapshot: snapshot backup; timepoint: time point backup
                     * @param BackupType Backup type. snapshot: snapshot backup; timepoint: time point backup
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Back mode. auto: auto backup; manual: manual backup
                     * @return BackupMethod Back mode. auto: auto backup; manual: manual backup
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Back mode. auto: auto backup; manual: manual backup
                     * @param BackupMethod Back mode. auto: auto backup; manual: manual backup
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Backup file status. success: backup succeeded; fail: backup failed; creating: creating backup file; deleting: deleting backup file
                     * @return BackupStatus Backup file status. success: backup succeeded; fail: backup failed; creating: creating backup file; deleting: deleting backup file
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置Backup file status. success: backup succeeded; fail: backup failed; creating: creating backup file; deleting: deleting backup file
                     * @param BackupStatus Backup file status. success: backup succeeded; fail: backup failed; creating: creating backup file; deleting: deleting backup file
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取Backup file time
                     * @return SnapshotTime Backup file time
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置Backup file time
                     * @param SnapshotTime Backup file time
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     */
                    bool SnapshotTimeHasBeenSet() const;

                private:

                    /**
                     * Snapshot file ID used for rollback
                     */
                    uint64_t m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Snapshot file name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Snapshot file size
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Snapshot backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Snapshot backup end time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Backup type. snapshot: snapshot backup; timepoint: time point backup
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Back mode. auto: auto backup; manual: manual backup
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Backup file status. success: backup succeeded; fail: backup failed; creating: creating backup file; deleting: deleting backup file
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * Backup file time
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
