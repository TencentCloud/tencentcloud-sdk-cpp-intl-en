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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Described the configuration and information of k8s node data disk.
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiskType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DiskType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取File system (ext3/ext4/xfs)
Note: This field may return null, indicating that no valid value was found.
                     * @return FileSystem File system (ext3/ext4/xfs)
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置File system (ext3/ext4/xfs)
Note: This field may return null, indicating that no valid value was found.
                     * @param FileSystem File system (ext3/ext4/xfs)
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetFileSystem(const std::string& _fileSystem);

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取Disk size (G)
Note: This field may return null, indicating that no valid value was found.
                     * @return DiskSize Disk size (G)
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk size (G)
Note: This field may return null, indicating that no valid value was found.
                     * @param DiskSize Disk size (G)
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Whether the disk is auto-formatted and mounted
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AutoFormatAndMount Whether the disk is auto-formatted and mounted
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool GetAutoFormatAndMount() const;

                    /**
                     * 设置Whether the disk is auto-formatted and mounted
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param AutoFormatAndMount Whether the disk is auto-formatted and mounted
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetAutoFormatAndMount(const bool& _autoFormatAndMount);

                    /**
                     * 判断参数 AutoFormatAndMount 是否已赋值
                     * @return AutoFormatAndMount 是否已赋值
                     */
                    bool AutoFormatAndMountHasBeenSet() const;

                    /**
                     * 获取Mounting directory
Note: This field may return null, indicating that no valid value was found.
                     * @return MountTarget Mounting directory
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置Mounting directory
Note: This field may return null, indicating that no valid value was found.
                     * @param MountTarget Mounting directory
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取Mounted device name or partition name (only required when adding an existing node)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiskPartition Mounted device name or partition name (only required when adding an existing node)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDiskPartition() const;

                    /**
                     * 设置Mounted device name or partition name (only required when adding an existing node)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DiskPartition Mounted device name or partition name (only required when adding an existing node)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDiskPartition(const std::string& _diskPartition);

                    /**
                     * 判断参数 DiskPartition 是否已赋值
                     * @return DiskPartition 是否已赋值
                     */
                    bool DiskPartitionHasBeenSet() const;

                private:

                    /**
                     * Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * File system (ext3/ext4/xfs)
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * Disk size (G)
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Whether the disk is auto-formatted and mounted
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool m_autoFormatAndMount;
                    bool m_autoFormatAndMountHasBeenSet;

                    /**
                     * Mounting directory
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * Mounted device name or partition name (only required when adding an existing node)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_diskPartition;
                    bool m_diskPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DATADISK_H_
