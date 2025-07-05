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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Node system disk and data disk configuration
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk type
                     * @return DiskType Cloud disk type
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk type
                     * @param _diskType Cloud disk type
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk size (GB)
                     * @return DiskSize Cloud disk size (GB)
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size (GB)
                     * @param _diskSize Cloud disk size (GB)
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically format and mount disks.
                     * @return AutoFormatAndMount Whether to automatically format and mount disks.
                     * 
                     */
                    bool GetAutoFormatAndMount() const;

                    /**
                     * 设置Whether to automatically format and mount disks.
                     * @param _autoFormatAndMount Whether to automatically format and mount disks.
                     * 
                     */
                    void SetAutoFormatAndMount(const bool& _autoFormatAndMount);

                    /**
                     * 判断参数 AutoFormatAndMount 是否已赋值
                     * @return AutoFormatAndMount 是否已赋值
                     * 
                     */
                    bool AutoFormatAndMountHasBeenSet() const;

                    /**
                     * 获取File system
                     * @return FileSystem File system
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置File system
                     * @param _fileSystem File system
                     * 
                     */
                    void SetFileSystem(const std::string& _fileSystem);

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取Mounting directory
                     * @return MountTarget Mounting directory
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置Mounting directory
                     * @param _mountTarget Mounting directory
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                private:

                    /**
                     * Cloud disk type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk size (GB)
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Whether to automatically format and mount disks.
                     */
                    bool m_autoFormatAndMount;
                    bool m_autoFormatAndMountHasBeenSet;

                    /**
                     * File system
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * Mounting directory
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DISK_H_
