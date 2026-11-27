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
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
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
                     * 获取<p>Task status.</p><p>Valid values:</p><ul><li>init: queuing</li><li>running: running</li><li>finished: completed</li><li>failed: failed</li><li>stopping: stopping</li><li>stopped: stopped</li></ul>
                     * @return TaskStatus <p>Task status.</p><p>Valid values:</p><ul><li>init: queuing</li><li>running: running</li><li>finished: completed</li><li>failed: failed</li><li>stopping: stopping</li><li>stopped: stopped</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Valid values:</p><ul><li>init: queuing</li><li>running: running</li><li>finished: completed</li><li>failed: failed</li><li>stopping: stopping</li><li>stopped: stopped</li></ul>
                     * @param _taskStatus <p>Task status.</p><p>Valid values:</p><ul><li>init: queuing</li><li>running: running</li><li>finished: completed</li><li>failed: failed</li><li>stopping: stopping</li><li>stopped: stopped</li></ul>
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
                     * 获取<p>Task creation time</p>
                     * @return CreationTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>Task creation time</p>
                     * @param _creationTime <p>Task creation time</p>
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
                     * 获取<p>Task end time</p>
                     * @return FinishTime <p>Task end time</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Task end time</p>
                     * @param _finishTime <p>Task end time</p>
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
                     * 获取<p>Total number of files</p>
                     * @return FileTotalCount <p>Total number of files</p>
                     * 
                     */
                    uint64_t GetFileTotalCount() const;

                    /**
                     * 设置<p>Total number of files</p>
                     * @param _fileTotalCount <p>Total number of files</p>
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
                     * 获取<p>Number of files processed successfully</p>
                     * @return FileSuccessedCount <p>Number of files processed successfully</p>
                     * 
                     */
                    uint64_t GetFileSuccessedCount() const;

                    /**
                     * 设置<p>Number of files processed successfully</p>
                     * @param _fileSuccessedCount <p>Number of files processed successfully</p>
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
                     * 获取<p>Number of files that have failed</p>
                     * @return FileFailedCount <p>Number of files that have failed</p>
                     * 
                     */
                    uint64_t GetFileFailedCount() const;

                    /**
                     * 设置<p>Number of files that have failed</p>
                     * @param _fileFailedCount <p>Number of files that have failed</p>
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
                     * 获取<p>File size, in bytes</p>
                     * @return FileTotalSize <p>File size, in bytes</p>
                     * 
                     */
                    uint64_t GetFileTotalSize() const;

                    /**
                     * 设置<p>File size, in bytes</p>
                     * @param _fileTotalSize <p>File size, in bytes</p>
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
                     * 获取<p>Size of processed files, in bytes</p>
                     * @return FileSuccessedSize <p>Size of processed files, in bytes</p>
                     * 
                     */
                    uint64_t GetFileSuccessedSize() const;

                    /**
                     * 设置<p>Size of processed files, in bytes</p>
                     * @param _fileSuccessedSize <p>Size of processed files, in bytes</p>
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
                     * 获取<p>Size of failed files, in bytes</p>
                     * @return FileFailedSize <p>Size of failed files, in bytes</p>
                     * 
                     */
                    uint64_t GetFileFailedSize() const;

                    /**
                     * 设置<p>Size of failed files, in bytes</p>
                     * @param _fileFailedSize <p>Size of failed files, in bytes</p>
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
                     * 获取<p>Total file list.</p>
                     * @return FileTotalList <p>Total file list.</p>
                     * 
                     */
                    std::string GetFileTotalList() const;

                    /**
                     * 设置<p>Total file list.</p>
                     * @param _fileTotalList <p>Total file list.</p>
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
                     * 获取<p>List of successful files.</p>
                     * @return FileSuccessedList <p>List of successful files.</p>
                     * 
                     */
                    std::string GetFileSuccessedList() const;

                    /**
                     * 设置<p>List of successful files.</p>
                     * @param _fileSuccessedList <p>List of successful files.</p>
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
                     * 获取<p>List of failed files.</p>
                     * @return FileFailedList <p>List of failed files.</p>
                     * 
                     */
                    std::string GetFileFailedList() const;

                    /**
                     * 设置<p>List of failed files.</p>
                     * @param _fileFailedList <p>List of failed files.</p>
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
                     * 获取<p>FileSystemId</p>
                     * @return FileSystemId <p>FileSystemId</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>FileSystemId</p>
                     * @param _fileSystemId <p>FileSystemId</p>
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
                     * 获取<p>Task name.</p>
                     * @return TaskName <p>Task name.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Task name.</p>
                     * @param _taskName <p>Task name.</p>
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
                     * 获取<p>Task path.</p>
                     * @return TaskPath <p>Task path.</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>Task path.</p>
                     * @param _taskPath <p>Task path.</p>
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
                     * 获取<p>Task type. archive: an archiving task. restore: a retrieval task.</p>
                     * @return Type <p>Task type. archive: an archiving task. restore: a retrieval task.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Task type. archive: an archiving task. restore: a retrieval task.</p>
                     * @param _type <p>Task type. archive: an archiving task. restore: a retrieval task.</p>
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
                     * 获取<p>Data flow Id.</p>
                     * @return DataFlowId <p>Data flow Id.</p>
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置<p>Data flow Id.</p>
                     * @param _dataFlowId <p>Data flow Id.</p>
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
                     * 获取<p>Whether to overwrite files with the same name in CFS Turbo and external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).<br>If this parameter is left empty, the default value is false.</p>
                     * @return IsOverwrite <p>Whether to overwrite files with the same name in CFS Turbo and external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).<br>If this parameter is left empty, the default value is false.</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>Whether to overwrite files with the same name in CFS Turbo and external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).<br>If this parameter is left empty, the default value is false.</p>
                     * @param _isOverwrite <p>Whether to overwrite files with the same name in CFS Turbo and external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).<br>If this parameter is left empty, the default value is false.</p>
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                    /**
                     * 获取<p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. This parameter and TaskPath are alternative. <br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * @return ListPath <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. This parameter and TaskPath are alternative. <br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * 
                     */
                    std::string GetListPath() const;

                    /**
                     * 设置<p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. This parameter and TaskPath are alternative. <br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * @param _listPath <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. This parameter and TaskPath are alternative. <br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * 
                     */
                    void SetListPath(const std::string& _listPath);

                    /**
                     * 判断参数 ListPath 是否已赋值
                     * @return ListPath 是否已赋值
                     * 
                     */
                    bool ListPathHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Valid values:</p><ul><li>init: queuing</li><li>running: running</li><li>finished: completed</li><li>failed: failed</li><li>stopping: stopping</li><li>stopped: stopped</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>Task end time</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Total number of files</p>
                     */
                    uint64_t m_fileTotalCount;
                    bool m_fileTotalCountHasBeenSet;

                    /**
                     * <p>Number of files processed successfully</p>
                     */
                    uint64_t m_fileSuccessedCount;
                    bool m_fileSuccessedCountHasBeenSet;

                    /**
                     * <p>Number of files that have failed</p>
                     */
                    uint64_t m_fileFailedCount;
                    bool m_fileFailedCountHasBeenSet;

                    /**
                     * <p>File size, in bytes</p>
                     */
                    uint64_t m_fileTotalSize;
                    bool m_fileTotalSizeHasBeenSet;

                    /**
                     * <p>Size of processed files, in bytes</p>
                     */
                    uint64_t m_fileSuccessedSize;
                    bool m_fileSuccessedSizeHasBeenSet;

                    /**
                     * <p>Size of failed files, in bytes</p>
                     */
                    uint64_t m_fileFailedSize;
                    bool m_fileFailedSizeHasBeenSet;

                    /**
                     * <p>Total file list.</p>
                     */
                    std::string m_fileTotalList;
                    bool m_fileTotalListHasBeenSet;

                    /**
                     * <p>List of successful files.</p>
                     */
                    std::string m_fileSuccessedList;
                    bool m_fileSuccessedListHasBeenSet;

                    /**
                     * <p>List of failed files.</p>
                     */
                    std::string m_fileFailedList;
                    bool m_fileFailedListHasBeenSet;

                    /**
                     * <p>FileSystemId</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Task name.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Task path.</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>Task type. archive: an archiving task. restore: a retrieval task.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Data flow Id.</p>
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * <p>Whether to overwrite files with the same name in CFS Turbo and external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).<br>If this parameter is left empty, the default value is false.</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. This parameter and TaskPath are alternative. <br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     */
                    std::string m_listPath;
                    bool m_listPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEDATATASKINFO_H_
