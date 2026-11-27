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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLifecycleDataTask request structure.
                */
                class CreateLifecycleDataTaskRequest : public AbstractModel
                {
                public:
                    CreateLifecycleDataTaskRequest();
                    ~CreateLifecycleDataTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique file system ID.</p>
                     * @return FileSystemId <p>Unique file system ID.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>Unique file system ID.</p>
                     * @param _fileSystemId <p>Unique file system ID.</p>
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
                     * 获取<p>Lifecycle task type. archive: archiving; restore: preheating; release: data release; metaload: metadata loading.</p>
                     * @return Type <p>Lifecycle task type. archive: archiving; restore: preheating; release: data release; metaload: metadata loading.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Lifecycle task type. archive: archiving; restore: preheating; release: data release; metaload: metadata loading.</p>
                     * @param _type <p>Lifecycle task type. archive: archiving; restore: preheating; release: data release; metaload: metadata loading.</p>
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
                     * 获取<p>Path or file to be archived. Only one path is supported and it cannot be empty.</p>
                     * @return TaskPath <p>Path or file to be archived. Only one path is supported and it cannot be empty.</p>
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置<p>Path or file to be archived. Only one path is supported and it cannot be empty.</p>
                     * @param _taskPath <p>Path or file to be archived. Only one path is supported and it cannot be empty.</p>
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
                     * 获取<p>Data flow ID. It can be queried through DescribeDataFlow.</p>
                     * @return DataFlowId <p>Data flow ID. It can be queried through DescribeDataFlow.</p>
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置<p>Data flow ID. It can be queried through DescribeDataFlow.</p>
                     * @param _dataFlowId <p>Data flow ID. It can be queried through DescribeDataFlow.</p>
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
                     * 获取<p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage. true: overwrite; false: do not overwrite (and hot storage data will not be released). If this parameter is left empty, the default value is false.</p>
                     * @return IsOverwrite <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage. true: overwrite; false: do not overwrite (and hot storage data will not be released). If this parameter is left empty, the default value is false.</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage. true: overwrite; false: do not overwrite (and hot storage data will not be released). If this parameter is left empty, the default value is false.</p>
                     * @param _isOverwrite <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage. true: overwrite; false: do not overwrite (and hot storage data will not be released). If this parameter is left empty, the default value is false.</p>
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
                     * 获取<p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. Specify either this parameter or TaskPath.<br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * @return ListPath <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. Specify either this parameter or TaskPath.<br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * 
                     */
                    std::string GetListPath() const;

                    /**
                     * 设置<p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. Specify either this parameter or TaskPath.<br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     * @param _listPath <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. Specify either this parameter or TaskPath.<br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
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
                     * <p>Unique file system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Lifecycle task type. archive: archiving; restore: preheating; release: data release; metaload: metadata loading.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Task name.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Path or file to be archived. Only one path is supported and it cannot be empty.</p>
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * <p>Data flow ID. It can be queried through DescribeDataFlow.</p>
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage. true: overwrite; false: do not overwrite (and hot storage data will not be released). If this parameter is left empty, the default value is false.</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>Path of the data manifest file. Each line in the manifest file is the full path of a file to be processed. All paths (including the manifest file path and the paths of files to be processed in each line of the manifest file) must start with /cfs and point to existing files in the CFS file system. Specify either this parameter or TaskPath.<br>Example:</p><ul><li>If the CFS root directory / is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/lists/archive_list.txt.</li><li>If the CFS subdirectory /subdir is mounted and the manifest file is located at lists/archive_list.txt under the mount path, set this parameter to /cfs/subdir/lists/archive_list.txt.</li></ul>
                     */
                    std::string m_listPath;
                    bool m_listPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
