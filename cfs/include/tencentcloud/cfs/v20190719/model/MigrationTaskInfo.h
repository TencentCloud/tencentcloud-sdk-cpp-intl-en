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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Information of a CFS data migration task
                */
                class MigrationTaskInfo : public AbstractModel
                {
                public:
                    MigrationTaskInfo();
                    ~MigrationTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Migration task name
                     * @return TaskName Migration task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Migration task name
                     * @param _taskName Migration task name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Migration task ID
                     * @return TaskId Migration task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Migration task ID
                     * @param _taskId Migration task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * @return MigrationType Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * @param _migrationType Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * 
                     */
                    void SetMigrationType(const uint64_t& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取Migration mode. Default value: `0` (full migration).
                     * @return MigrationMode Migration mode. Default value: `0` (full migration).
                     * 
                     */
                    uint64_t GetMigrationMode() const;

                    /**
                     * 设置Migration mode. Default value: `0` (full migration).
                     * @param _migrationMode Migration mode. Default value: `0` (full migration).
                     * 
                     */
                    void SetMigrationMode(const uint64_t& _migrationMode);

                    /**
                     * 判断参数 MigrationMode 是否已赋值
                     * @return MigrationMode 是否已赋值
                     * 
                     */
                    bool MigrationModeHasBeenSet() const;

                    /**
                     * 获取Data source bucket name.
                     * @return BucketName Data source bucket name.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Data source bucket name.
                     * @param _bucketName Data source bucket name.
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Source bucket region.
                     * @return BucketRegion Source bucket region.
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Source bucket region.
                     * @param _bucketRegion Source bucket region.
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取Data source bucket address.
                     * @return BucketAddress Data source bucket address.
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置Data source bucket address.
                     * @param _bucketAddress Data source bucket address.
                     * 
                     */
                    void SetBucketAddress(const std::string& _bucketAddress);

                    /**
                     * 判断参数 BucketAddress 是否已赋值
                     * @return BucketAddress 是否已赋值
                     * 
                     */
                    bool BucketAddressHasBeenSet() const;

                    /**
                     * 获取Checklist address.
                     * @return ListAddress Checklist address.
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置Checklist address.
                     * @param _listAddress Checklist address.
                     * 
                     */
                    void SetListAddress(const std::string& _listAddress);

                    /**
                     * 判断参数 ListAddress 是否已赋值
                     * @return ListAddress 是否已赋值
                     * 
                     */
                    bool ListAddressHasBeenSet() const;

                    /**
                     * 获取File system instance name.
                     * @return FsName File system instance name.
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置File system instance name.
                     * @param _fsName File system instance name.
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取File system instance ID
                     * @return FileSystemId File system instance ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system instance ID
                     * @param _fileSystemId File system instance ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取File system path
                     * @return FsPath File system path
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置File system path
                     * @param _fsPath File system path
                     * 
                     */
                    void SetFsPath(const std::string& _fsPath);

                    /**
                     * 判断参数 FsPath 是否已赋值
                     * @return FsPath 是否已赋值
                     * 
                     */
                    bool FsPathHasBeenSet() const;

                    /**
                     * 获取Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * @return CoverType Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * 
                     */
                    uint64_t GetCoverType() const;

                    /**
                     * 设置Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * @param _coverType Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * 
                     */
                    void SetCoverType(const uint64_t& _coverType);

                    /**
                     * 判断参数 CoverType 是否已赋值
                     * @return CoverType 是否已赋值
                     * 
                     */
                    bool CoverTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Completion/Termination time.
                     * @return EndTime Completion/Termination time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Completion/Termination time.
                     * @param _endTime Completion/Termination time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Migration status. 0: completed; 1: creating; 2: running; 3: terminating; 4: terminated; 5: creation failed; 6: running failure; 7: ending; 8: deleting; 9: waiting.
                     * @return Status Migration status. 0: completed; 1: creating; 2: running; 3: terminating; 4: terminated; 5: creation failed; 6: running failure; 7: ending; 8: deleting; 9: waiting.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Migration status. 0: completed; 1: creating; 2: running; 3: terminating; 4: terminated; 5: creation failed; 6: running failure; 7: ending; 8: deleting; 9: waiting.
                     * @param _status Migration status. 0: completed; 1: creating; 2: running; 3: terminating; 4: terminated; 5: creation failed; 6: running failure; 7: ending; 8: deleting; 9: waiting.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of files.
                     * @return FileTotalCount Number of files.
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置Number of files.
                     * @param _fileTotalCount Number of files.
                     * 
                     */
                    void SetFileTotalCount(const uint64_t& _fileTotalCount);

                    /**
                     * 判断参数 FileTotalCount 是否已赋值
                     * @return FileTotalCount 是否已赋值
                     * 
                     */
                    bool FileTotalCountHasBeenSet() const;

                    /**
                     * 获取Number of migrated files.
                     * @return FileMigratedCount Number of migrated files.
                     * 
                     */
                    uint64_t GetFileMigratedCount() const;

                    /**
                     * 设置Number of migrated files.
                     * @param _fileMigratedCount Number of migrated files.
                     * 
                     */
                    void SetFileMigratedCount(const uint64_t& _fileMigratedCount);

                    /**
                     * 判断参数 FileMigratedCount 是否已赋值
                     * @return FileMigratedCount 是否已赋值
                     * 
                     */
                    bool FileMigratedCountHasBeenSet() const;

                    /**
                     * 获取Number of failed files in migration.
                     * @return FileFailedCount Number of failed files in migration.
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置Number of failed files in migration.
                     * @param _fileFailedCount Number of failed files in migration.
                     * 
                     */
                    void SetFileFailedCount(const uint64_t& _fileFailedCount);

                    /**
                     * 判断参数 FileFailedCount 是否已赋值
                     * @return FileFailedCount 是否已赋值
                     * 
                     */
                    bool FileFailedCountHasBeenSet() const;

                    /**
                     * 获取File capacity, in Byte.
                     * @return FileTotalSize File capacity, in Byte.
                     * 
                     */
                    int64_t GetFileTotalSize() const;

                    /**
                     * 设置File capacity, in Byte.
                     * @param _fileTotalSize File capacity, in Byte.
                     * 
                     */
                    void SetFileTotalSize(const int64_t& _fileTotalSize);

                    /**
                     * 判断参数 FileTotalSize 是否已赋值
                     * @return FileTotalSize 是否已赋值
                     * 
                     */
                    bool FileTotalSizeHasBeenSet() const;

                    /**
                     * 获取Migrated file capacity in Byte.
                     * @return FileMigratedSize Migrated file capacity in Byte.
                     * 
                     */
                    int64_t GetFileMigratedSize() const;

                    /**
                     * 设置Migrated file capacity in Byte.
                     * @param _fileMigratedSize Migrated file capacity in Byte.
                     * 
                     */
                    void SetFileMigratedSize(const int64_t& _fileMigratedSize);

                    /**
                     * 判断参数 FileMigratedSize 是否已赋值
                     * @return FileMigratedSize 是否已赋值
                     * 
                     */
                    bool FileMigratedSizeHasBeenSet() const;

                    /**
                     * 获取Capacity of failed migration files, in Byte.
                     * @return FileFailedSize Capacity of failed migration files, in Byte.
                     * 
                     */
                    int64_t GetFileFailedSize() const;

                    /**
                     * 设置Capacity of failed migration files, in Byte.
                     * @param _fileFailedSize Capacity of failed migration files, in Byte.
                     * 
                     */
                    void SetFileFailedSize(const int64_t& _fileFailedSize);

                    /**
                     * 判断参数 FileFailedSize 是否已赋值
                     * @return FileFailedSize 是否已赋值
                     * 
                     */
                    bool FileFailedSizeHasBeenSet() const;

                    /**
                     * 获取Total inventory.
                     * @return FileTotalList Total inventory.
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置Total inventory.
                     * @param _fileTotalList Total inventory.
                     * 
                     */
                    void SetFileTotalList(const std::string& _fileTotalList);

                    /**
                     * 判断参数 FileTotalList 是否已赋值
                     * @return FileTotalList 是否已赋值
                     * 
                     */
                    bool FileTotalListHasBeenSet() const;

                    /**
                     * 获取File list completed.
                     * @return FileCompletedList File list completed.
                     * 
                     */
                    std::string GetFileCompletedList() const;

                    /**
                     * 设置File list completed.
                     * @param _fileCompletedList File list completed.
                     * 
                     */
                    void SetFileCompletedList(const std::string& _fileCompletedList);

                    /**
                     * 判断参数 FileCompletedList 是否已赋值
                     * @return FileCompletedList 是否已赋值
                     * 
                     */
                    bool FileCompletedListHasBeenSet() const;

                    /**
                     * 获取Failed file list.
                     * @return FileFailedList Failed file list.
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置Failed file list.
                     * @param _fileFailedList Failed file list.
                     * 
                     */
                    void SetFileFailedList(const std::string& _fileFailedList);

                    /**
                     * 判断参数 FileFailedList 是否已赋值
                     * @return FileFailedList 是否已赋值
                     * 
                     */
                    bool FileFailedListHasBeenSet() const;

                    /**
                     * 获取Source bucket path.
                     * @return BucketPath Source bucket path.
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置Source bucket path.
                     * @param _bucketPath Source bucket path.
                     * 
                     */
                    void SetBucketPath(const std::string& _bucketPath);

                    /**
                     * 判断参数 BucketPath 是否已赋值
                     * @return BucketPath 是否已赋值
                     * 
                     */
                    bool BucketPathHasBeenSet() const;

                    /**
                     * 获取Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * @return Direction Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * @param _direction Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * Migration task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Migration task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * Migration mode. Default value: `0` (full migration).
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * Data source bucket name.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Source bucket region.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Data source bucket address.
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * Checklist address.
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * File system instance name.
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * File system instance ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system path
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                    /**
                     * Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     */
                    uint64_t m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Completion/Termination time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Migration status. 0: completed; 1: creating; 2: running; 3: terminating; 4: terminated; 5: creation failed; 6: running failure; 7: ending; 8: deleting; 9: waiting.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of files.
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * Number of migrated files.
                     */
                    uint64_t m_fileMigratedCount;
                    bool m_fileMigratedCountHasBeenSet;

                    /**
                     * Number of failed files in migration.
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * File capacity, in Byte.
                     */
                    int64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * Migrated file capacity in Byte.
                     */
                    int64_t m_fileMigratedSize;
                    bool m_fileMigratedSizeHasBeenSet;

                    /**
                     * Capacity of failed migration files, in Byte.
                     */
                    int64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * Total inventory.
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * File list completed.
                     */
                    std::string m_fileCompletedList;
                    bool m_fileCompletedListHasBeenSet;

                    /**
                     * Failed file list.
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * Source bucket path.
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MIGRATIONTASKINFO_H_
