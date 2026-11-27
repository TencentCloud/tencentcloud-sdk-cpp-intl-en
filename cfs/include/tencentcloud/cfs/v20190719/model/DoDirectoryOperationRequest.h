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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_

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
                * DoDirectoryOperation request structure.
                */
                class DoDirectoryOperationRequest : public AbstractModel
                {
                public:
                    DoDirectoryOperationRequest();
                    ~DoDirectoryOperationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system ID. Currently, only Turbo file systems support this API. General-purpose file systems (including enhanced ones) do not support this API.</p>
                     * @return FileSystemId <p>File system ID. Currently, only Turbo file systems support this API. General-purpose file systems (including enhanced ones) do not support this API.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID. Currently, only Turbo file systems support this API. General-purpose file systems (including enhanced ones) do not support this API.</p>
                     * @param _fileSystemId <p>File system ID. Currently, only Turbo file systems support this API. General-purpose file systems (including enhanced ones) do not support this API.</p>
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
                     * 获取<p>create: creates a directory, equivalent to mkdir.<br>check: checks whether a directory exists, equivalent to stat.<br>move: renames a file or directory, equivalent to mv.</p>
                     * @return OpetationType <p>create: creates a directory, equivalent to mkdir.<br>check: checks whether a directory exists, equivalent to stat.<br>move: renames a file or directory, equivalent to mv.</p>
                     * 
                     */
                    std::string GetOpetationType() const;

                    /**
                     * 设置<p>create: creates a directory, equivalent to mkdir.<br>check: checks whether a directory exists, equivalent to stat.<br>move: renames a file or directory, equivalent to mv.</p>
                     * @param _opetationType <p>create: creates a directory, equivalent to mkdir.<br>check: checks whether a directory exists, equivalent to stat.<br>move: renames a file or directory, equivalent to mv.</p>
                     * 
                     */
                    void SetOpetationType(const std::string& _opetationType);

                    /**
                     * 判断参数 OpetationType 是否已赋值
                     * @return OpetationType 是否已赋值
                     * 
                     */
                    bool OpetationTypeHasBeenSet() const;

                    /**
                     * 获取<p>The system recursively creates all parent directories in the path by default. The path must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li><p>If the operation is create/check</p><ul><li>If the CFS root directory / is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/subdir/test1/test2</li></ul></li><li><p>If the operation is move</p><ul><li>If the CFS root directory / is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/subdir/test1/test2</li></ul></li></ul>
                     * @return DirectoryPath <p>The system recursively creates all parent directories in the path by default. The path must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li><p>If the operation is create/check</p><ul><li>If the CFS root directory / is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/subdir/test1/test2</li></ul></li><li><p>If the operation is move</p><ul><li>If the CFS root directory / is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/subdir/test1/test2</li></ul></li></ul>
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置<p>The system recursively creates all parent directories in the path by default. The path must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li><p>If the operation is create/check</p><ul><li>If the CFS root directory / is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/subdir/test1/test2</li></ul></li><li><p>If the operation is move</p><ul><li>If the CFS root directory / is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/subdir/test1/test2</li></ul></li></ul>
                     * @param _directoryPath <p>The system recursively creates all parent directories in the path by default. The path must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li><p>If the operation is create/check</p><ul><li>If the CFS root directory / is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/subdir/test1/test2</li></ul></li><li><p>If the operation is move</p><ul><li>If the CFS root directory / is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/subdir/test1/test2</li></ul></li></ul>
                     * 
                     */
                    void SetDirectoryPath(const std::string& _directoryPath);

                    /**
                     * 判断参数 DirectoryPath 是否已赋值
                     * @return DirectoryPath 是否已赋值
                     * 
                     */
                    bool DirectoryPathHasBeenSet() const;

                    /**
                     * 获取<p>Permission for creating the directory. If not specified, the default value is 0755. If OperationType is check, this value is meaningless.</p>
                     * @return Mode <p>Permission for creating the directory. If not specified, the default value is 0755. If OperationType is check, this value is meaningless.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Permission for creating the directory. If not specified, the default value is 0755. If OperationType is check, this value is meaningless.</p>
                     * @param _mode <p>Permission for creating the directory. If not specified, the default value is 0755. If OperationType is check, this value is meaningless.</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Target directory path for the mv operation. It must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/test3/test4</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/subdir/test3/test4</li></ul>
                     * @return DestPath <p>Target directory path for the mv operation. It must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/test3/test4</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/subdir/test3/test4</li></ul>
                     * 
                     */
                    std::string GetDestPath() const;

                    /**
                     * 设置<p>Target directory path for the mv operation. It must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/test3/test4</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/subdir/test3/test4</li></ul>
                     * @param _destPath <p>Target directory path for the mv operation. It must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/test3/test4</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/subdir/test3/test4</li></ul>
                     * 
                     */
                    void SetDestPath(const std::string& _destPath);

                    /**
                     * 判断参数 DestPath 是否已赋值
                     * @return DestPath 是否已赋值
                     * 
                     */
                    bool DestPathHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID. Currently, only Turbo file systems support this API. General-purpose file systems (including enhanced ones) do not support this API.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>create: creates a directory, equivalent to mkdir.<br>check: checks whether a directory exists, equivalent to stat.<br>move: renames a file or directory, equivalent to mv.</p>
                     */
                    std::string m_opetationType;
                    bool m_opetationTypeHasBeenSet;

                    /**
                     * <p>The system recursively creates all parent directories in the path by default. The path must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li><p>If the operation is create/check</p><ul><li>If the CFS root directory / is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to create/check whether test1/test2 exists under the mount path, the input value is /cfs/subdir/test1/test2</li></ul></li><li><p>If the operation is move</p><ul><li>If the CFS root directory / is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/test1/test2</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under test1/test2 to DestPath, the input value is /cfs/subdir/test1/test2</li></ul></li></ul>
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * <p>Permission for creating the directory. If not specified, the default value is 0755. If OperationType is check, this value is meaningless.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Target directory path for the mv operation. It must start with /cfs/, which represents the logical path inside the file storage instance, not the local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/test3/test4</li><li>If the CFS subdirectory /subdir is mounted, and you need to move files under DirectoryPath to test3/test4 under the mount path, the input value is /cfs/subdir/test3/test4</li></ul>
                     */
                    std::string m_destPath;
                    bool m_destPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
