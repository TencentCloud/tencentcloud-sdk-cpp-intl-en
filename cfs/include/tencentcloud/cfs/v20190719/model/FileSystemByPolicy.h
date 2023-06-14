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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_

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
                * Information of the file system bound to the snapshot policy
                */
                class FileSystemByPolicy : public AbstractModel
                {
                public:
                    FileSystemByPolicy();
                    ~FileSystemByPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File system name
                     * @return CreationToken File system name
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置File system name
                     * @param _creationToken File system name
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param _fileSystemId File system ID
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
                     * 获取File system size
                     * @return SizeByte File system size
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置File system size
                     * @param _sizeByte File system size
                     * 
                     */
                    void SetSizeByte(const uint64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取Storage class
                     * @return StorageType Storage class
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage class
                     * @param _storageType Storage class
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Total snapshot size
                     * @return TotalSnapshotSize Total snapshot size
                     * 
                     */
                    uint64_t GetTotalSnapshotSize() const;

                    /**
                     * 设置Total snapshot size
                     * @param _totalSnapshotSize Total snapshot size
                     * 
                     */
                    void SetTotalSnapshotSize(const uint64_t& _totalSnapshotSize);

                    /**
                     * 判断参数 TotalSnapshotSize 是否已赋值
                     * @return TotalSnapshotSize 是否已赋值
                     * 
                     */
                    bool TotalSnapshotSizeHasBeenSet() const;

                    /**
                     * 获取File system creation time
                     * @return CreationTime File system creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置File system creation time
                     * @param _creationTime File system creation time
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
                     * 获取Region ID of the file system
                     * @return ZoneId Region ID of the file system
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Region ID of the file system
                     * @param _zoneId Region ID of the file system
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * File system name
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system size
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * Storage class
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Total snapshot size
                     */
                    uint64_t m_totalSnapshotSize;
                    bool m_totalSnapshotSizeHasBeenSet;

                    /**
                     * File system creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Region ID of the file system
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMBYPOLICY_H_
