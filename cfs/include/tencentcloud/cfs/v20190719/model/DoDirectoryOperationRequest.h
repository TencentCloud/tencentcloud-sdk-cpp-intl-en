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
                     * 获取File system ID. currently, only Turbo series file systems support calling this api. general series file systems (including enhanced) do not support calling.
                     * @return FileSystemId File system ID. currently, only Turbo series file systems support calling this api. general series file systems (including enhanced) do not support calling.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID. currently, only Turbo series file systems support calling this api. general series file systems (including enhanced) do not support calling.
                     * @param _fileSystemId File system ID. currently, only Turbo series file systems support calling this api. general series file systems (including enhanced) do not support calling.
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
                     * 获取create a directory, equivalent to mkdir.
check: confirm the existence of the directory, equivalent to stat.
move: rename a file or directory, equivalent to mv.
                     * @return OpetationType create a directory, equivalent to mkdir.
check: confirm the existence of the directory, equivalent to stat.
move: rename a file or directory, equivalent to mv.
                     * 
                     */
                    std::string GetOpetationType() const;

                    /**
                     * 设置create a directory, equivalent to mkdir.
check: confirm the existence of the directory, equivalent to stat.
move: rename a file or directory, equivalent to mv.
                     * @param _opetationType create a directory, equivalent to mkdir.
check: confirm the existence of the directory, equivalent to stat.
move: rename a file or directory, equivalent to mv.
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
                     * 获取Absolute path of the directory. recursive creation is enabled by default (if the directory contains non-existent subdirectories, create the corresponding subdirectory first).
                     * @return DirectoryPath Absolute path of the directory. recursive creation is enabled by default (if the directory contains non-existent subdirectories, create the corresponding subdirectory first).
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置Absolute path of the directory. recursive creation is enabled by default (if the directory contains non-existent subdirectories, create the corresponding subdirectory first).
                     * @param _directoryPath Absolute path of the directory. recursive creation is enabled by default (if the directory contains non-existent subdirectories, create the corresponding subdirectory first).
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
                     * 获取Permission to create directory. if not specified, it defaults to 0755. if OperationType is check, this value is meaningless.
                     * @return Mode Permission to create directory. if not specified, it defaults to 0755. if OperationType is check, this value is meaningless.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Permission to create directory. if not specified, it defaults to 0755. if OperationType is check, this value is meaningless.
                     * @param _mode Permission to create directory. if not specified, it defaults to 0755. if OperationType is check, this value is meaningless.
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
                     * 获取The destination directory name for the mv operation. the path must start with /cfs/.
                     * @return DestPath The destination directory name for the mv operation. the path must start with /cfs/.
                     * 
                     */
                    std::string GetDestPath() const;

                    /**
                     * 设置The destination directory name for the mv operation. the path must start with /cfs/.
                     * @param _destPath The destination directory name for the mv operation. the path must start with /cfs/.
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
                     * File system ID. currently, only Turbo series file systems support calling this api. general series file systems (including enhanced) do not support calling.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * create a directory, equivalent to mkdir.
check: confirm the existence of the directory, equivalent to stat.
move: rename a file or directory, equivalent to mv.
                     */
                    std::string m_opetationType;
                    bool m_opetationTypeHasBeenSet;

                    /**
                     * Absolute path of the directory. recursive creation is enabled by default (if the directory contains non-existent subdirectories, create the corresponding subdirectory first).
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * Permission to create directory. if not specified, it defaults to 0755. if OperationType is check, this value is meaningless.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The destination directory name for the mv operation. the path must start with /cfs/.
                     */
                    std::string m_destPath;
                    bool m_destPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
