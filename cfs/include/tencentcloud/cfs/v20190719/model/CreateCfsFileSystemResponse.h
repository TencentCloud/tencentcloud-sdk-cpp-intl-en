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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_

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
                * CreateCfsFileSystem response structure.
                */
                class CreateCfsFileSystemResponse : public AbstractModel
                {
                public:
                    CreateCfsFileSystemResponse();
                    ~CreateCfsFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system creation time.</p>
                     * @return CreationTime <p>File system creation time.</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取<p>User-defined file system name.</p>
                     * @return CreationToken <p>User-defined file system name.</p>
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取<p>File system ID.</p>
                     * @return FileSystemId <p>File system ID.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>File system status. Possible statuses include: "creating": Creating, "create_failed": Creation failed, "available": Available, "unserviced": Unavailable, "upgrading": Upgrading, and "deleting": Deleting.</p>
                     * @return LifeCycleState <p>File system status. Possible statuses include: "creating": Creating, "create_failed": Creation failed, "available": Available, "unserviced": Unavailable, "upgrading": Upgrading, and "deleting": Deleting.</p>
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取<p>Used capacity of the file system, in bytes.</p>
                     * @return SizeByte <p>Used capacity of the file system, in bytes.</p>
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取<p>AZ ID.</p>
                     * @return ZoneId <p>AZ ID.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>User-defined file system name.</p>
                     * @return FsName <p>User-defined file system name.</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether the file system is encrypted.</p>
                     * @return Encrypted <p>Whether the file system is encrypted.</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                private:

                    /**
                     * <p>File system creation time.</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>User-defined file system name.</p>
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * <p>File system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>File system status. Possible statuses include: "creating": Creating, "create_failed": Creation failed, "available": Available, "unserviced": Unavailable, "upgrading": Upgrading, and "deleting": Deleting.</p>
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * <p>Used capacity of the file system, in bytes.</p>
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * <p>AZ ID.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>User-defined file system name.</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>Whether the file system is encrypted.</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_
