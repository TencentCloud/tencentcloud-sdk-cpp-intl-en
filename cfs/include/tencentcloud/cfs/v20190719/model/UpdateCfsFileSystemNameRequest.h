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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_

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
                * UpdateCfsFileSystemName request structure.
                */
                class UpdateCfsFileSystemNameRequest : public AbstractModel
                {
                public:
                    UpdateCfsFileSystemNameRequest();
                    ~UpdateCfsFileSystemNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * @return FileSystemId File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * @param _fileSystemId File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
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
                     * 获取User-Defined file system name, alphanumeric chinese characters or _,- within 64 bytes. at least one of them or CreationToken must be provided.
                     * @return FsName User-Defined file system name, alphanumeric chinese characters or _,- within 64 bytes. at least one of them or CreationToken must be provided.
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置User-Defined file system name, alphanumeric chinese characters or _,- within 64 bytes. at least one of them or CreationToken must be provided.
                     * @param _fsName User-Defined file system name, alphanumeric chinese characters or _,- within 64 bytes. at least one of them or CreationToken must be provided.
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                private:

                    /**
                     * File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * User-Defined file system name, alphanumeric chinese characters or _,- within 64 bytes. at least one of them or CreationToken must be provided.
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMNAMEREQUEST_H_
