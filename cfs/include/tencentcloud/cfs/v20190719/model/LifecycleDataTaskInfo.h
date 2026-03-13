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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_

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
                * Lifecycle task.
                */
                class LifecycleDataTaskInfo : public AbstractModel
                {
                public:
                    LifecycleDataTaskInfo();
                    ~LifecycleDataTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Task status.
init: pending.
running: executing, finished: completed.
failed: failure.
Stopping: stopping, stopped: stopped.
                     * @return TaskStatus Task status.
init: pending.
running: executing, finished: completed.
failed: failure.
Stopping: stopping, stopped: stopped.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status.
init: pending.
running: executing, finished: completed.
failed: failure.
Stopping: stopping, stopped: stopped.
                     * @param _taskStatus Task status.
init: pending.
running: executing, finished: completed.
failed: failure.
Stopping: stopping, stopped: stopped.
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreationTime Task creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Task creation time
                     * @param _creationTime Task creation time
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Task end time.
                     * @return FinishTime Task end time.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task end time.
                     * @param _finishTime Task end time.
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Total files.
                     * @return FileTotalCount Total files.
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置Total files.
                     * @param _fileTotalCount Total files.
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
                     * 获取Number of successfully processed files.
                     * @return FileSuccessedCount Number of successfully processed files.
                     * 
                     */
                    uint64_t GetFileSuccessedCount() const;

                    /**
                     * 设置Number of successfully processed files.
                     * @param _fileSuccessedCount Number of successfully processed files.
                     * 
                     */
                    void SetFileSuccessedCount(const uint64_t& _fileSuccessedCount);

                    /**
                     * 判断参数 FileSuccessedCount 是否已赋值
                     * @return FileSuccessedCount 是否已赋值
                     * 
                     */
                    bool FileSuccessedCountHasBeenSet() const;

                    /**
                     * 获取Number of failed files.
                     * @return FileFailedCount Number of failed files.
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置Number of failed files.
                     * @param _fileFailedCount Number of failed files.
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
                    uint64_t GetFileTotalSize() const;

                    /**
                     * 设置File capacity, in Byte.


                     * @param _fileTotalSize File capacity, in Byte.


                     * 
                     */
                    void SetFileTotalSize(const uint64_t& _fileTotalSize);

                    /**
                     * 判断参数 FileTotalSize 是否已赋值
                     * @return FileTotalSize 是否已赋值
                     * 
                     */
                    bool FileTotalSizeHasBeenSet() const;

                    /**
                     * 获取Processed file capacity, in Byte.


                     * @return FileSuccessedSize Processed file capacity, in Byte.


                     * 
                     */
                    uint64_t GetFileSuccessedSize() const;

                    /**
                     * 设置Processed file capacity, in Byte.


                     * @param _fileSuccessedSize Processed file capacity, in Byte.


                     * 
                     */
                    void SetFileSuccessedSize(const uint64_t& _fileSuccessedSize);

                    /**
                     * 判断参数 FileSuccessedSize 是否已赋值
                     * @return FileSuccessedSize 是否已赋值
                     * 
                     */
                    bool FileSuccessedSizeHasBeenSet() const;

                    /**
                     * 获取Capacity of processed failed files, in Byte.

                     * @return FileFailedSize Capacity of processed failed files, in Byte.

                     * 
                     */
                    uint64_t GetFileFailedSize() const;

                    /**
                     * 设置Capacity of processed failed files, in Byte.

                     * @param _fileFailedSize Capacity of processed failed files, in Byte.

                     * 
                     */
                    void SetFileFailedSize(const uint64_t& _fileFailedSize);

                    /**
                     * 判断参数 FileFailedSize 是否已赋值
                     * @return FileFailedSize 是否已赋值
                     * 
                     */
                    bool FileFailedSizeHasBeenSet() const;

                    /**
                     * 获取Total file list.
                     * @return FileTotalList Total file list.
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置Total file list.
                     * @param _fileTotalList Total file list.
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
                     * 获取List of successful files.
                     * @return FileSuccessedList List of successful files.
                     * 
                     */
                    std::string GetFileSuccessedList() const;

                    /**
                     * 设置List of successful files.
                     * @param _fileSuccessedList List of successful files.
                     * 
                     */
                    void SetFileSuccessedList(const std::string& _fileSuccessedList);

                    /**
                     * 判断参数 FileSuccessedList 是否已赋值
                     * @return FileSuccessedList 是否已赋值
                     * 
                     */
                    bool FileSuccessedListHasBeenSet() const;

                    /**
                     * 获取List of failed files.
                     * @return FileFailedList List of failed files.
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置List of failed files.
                     * @param _fileFailedList List of failed files.
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
                     * 获取FileSystemId
                     * @return FileSystemId FileSystemId
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置FileSystemId
                     * @param _fileSystemId FileSystemId
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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取Task path.
                     * @return TaskPath Task path.
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置Task path.
                     * @param _taskPath Task path.
                     * 
                     */
                    void SetTaskPath(const std::string& _taskPath);

                    /**
                     * 判断参数 TaskPath 是否已赋值
                     * @return TaskPath 是否已赋值
                     * 
                     */
                    bool TaskPathHasBeenSet() const;

                    /**
                     * 获取Task type, archive: indicates settlement task, restore: indicates pull task.
                     * @return Type Task type, archive: indicates settlement task, restore: indicates pull task.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type, archive: indicates settlement task, restore: indicates pull task.
                     * @param _type Task type, archive: indicates settlement task, restore: indicates pull task.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Data flow Id.
                     * @return DataFlowId Data flow Id.
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置Data flow Id.
                     * @param _dataFlowId Data flow Id.
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                    /**
                     * 获取When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time, it does not release hot data storage).
Default false when empty.
                     * @return IsOverwrite When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time, it does not release hot data storage).
Default false when empty.
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time, it does not release hot data storage).
Default false when empty.
                     * @param _isOverwrite When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time, it does not release hot data storage).
Default false when empty.
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status.
init: pending.
running: executing, finished: completed.
failed: failure.
Stopping: stopping, stopped: stopped.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Total files.
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * Number of successfully processed files.
                     */
                    uint64_t m_fileSuccessedCount;
                    bool m_fileSuccessedCountHasBeenSet;

                    /**
                     * Number of failed files.
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * File capacity, in Byte.


                     */
                    uint64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * Processed file capacity, in Byte.


                     */
                    uint64_t m_fileSuccessedSize;
                    bool m_fileSuccessedSizeHasBeenSet;

                    /**
                     * Capacity of processed failed files, in Byte.

                     */
                    uint64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * Total file list.
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * List of successful files.
                     */
                    std::string m_fileSuccessedList;
                    bool m_fileSuccessedListHasBeenSet;

                    /**
                     * List of failed files.
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * FileSystemId
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task path.
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * Task type, archive: indicates settlement task, restore: indicates pull task.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Data flow Id.
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time, it does not release hot data storage).
Default false when empty.
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
