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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSFILESYSTEMREQUEST_H_

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
                * DeleteCfsFileSystem request structure.
                */
                class DeleteCfsFileSystemRequest : public AbstractModel
                {
                public:
                    DeleteCfsFileSystemRequest();
                    ~DeleteCfsFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID, which can be obtained by [querying the file system interface](https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1). note: the DeleteMountTarget api must be called to remove the mount point of this file system before file system deletion, otherwise deletion will fail.
                     * @return FileSystemId File system ID, which can be obtained by [querying the file system interface](https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1). note: the DeleteMountTarget api must be called to remove the mount point of this file system before file system deletion, otherwise deletion will fail.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID, which can be obtained by [querying the file system interface](https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1). note: the DeleteMountTarget api must be called to remove the mount point of this file system before file system deletion, otherwise deletion will fail.
                     * @param _fileSystemId File system ID, which can be obtained by [querying the file system interface](https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1). note: the DeleteMountTarget api must be called to remove the mount point of this file system before file system deletion, otherwise deletion will fail.
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * File system ID, which can be obtained by [querying the file system interface](https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1). note: the DeleteMountTarget api must be called to remove the mount point of this file system before file system deletion, otherwise deletion will fail.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSFILESYSTEMREQUEST_H_
