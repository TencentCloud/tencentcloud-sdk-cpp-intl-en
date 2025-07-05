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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_

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
                * Describes the configuration and related information of k8s node data disk.
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DiskType Cloud disk type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _diskType Cloud disk type
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取File system (ext3/ext4/xfs).

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return FileSystem File system (ext3/ext4/xfs).

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileSystem() const;

                    /**
                     * 设置File system (ext3/ext4/xfs).

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _fileSystem File system (ext3/ext4/xfs).

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Cloud disk size (GB)

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DiskSize Cloud disk size (GB)

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size (GB)

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _diskSize Cloud disk size (GB)

Note: This field may return "null", indicating that no valid value can be obtained.
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

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoFormatAndMount Whether to automatically format and mount disks.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAutoFormatAndMount() const;

                    /**
                     * 设置Whether to automatically format and mount disks.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoFormatAndMount Whether to automatically format and mount disks.

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Mount device name or partition name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DiskPartition Mount device name or partition name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDiskPartition() const;

                    /**
                     * 设置Mount device name or partition name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _diskPartition Mount device name or partition name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDiskPartition(const std::string& _diskPartition);

                    /**
                     * 判断参数 DiskPartition 是否已赋值
                     * @return DiskPartition 是否已赋值
                     * 
                     */
                    bool DiskPartitionHasBeenSet() const;

                    /**
                     * 获取Mounting directory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MountTarget Mounting directory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置Mounting directory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _mountTarget Mounting directory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Encrypt This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _encrypt This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEncrypt(const std::string& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Custom key for purchasing encrypted disks. When this parameter is input, the Encrypt input parameter cannot be left empty.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return KmsKeyId Custom key for purchasing encrypted disks. When this parameter is input, the Encrypt input parameter cannot be left empty.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Custom key for purchasing encrypted disks. When this parameter is input, the Encrypt input parameter cannot be left empty.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _kmsKeyId Custom key for purchasing encrypted disks. When this parameter is input, the Encrypt input parameter cannot be left empty.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Snapshot ID. If it is input, a cloud disk will be created based on this snapshot. The snapshot must be a data disk snapshot.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SnapshotId Snapshot ID. If it is input, a cloud disk will be created based on this snapshot. The snapshot must be a data disk snapshot.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID. If it is input, a cloud disk will be created based on this snapshot. The snapshot must be a data disk snapshot.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _snapshotId Snapshot ID. If it is input, a cloud disk will be created based on this snapshot. The snapshot must be a data disk snapshot.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Cloud disk performance (unit: MB/s), which can be used to purchase additional performance for cloud disks.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ThroughputPerformance Cloud disk performance (unit: MB/s), which can be used to purchase additional performance for cloud disks.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance (unit: MB/s), which can be used to purchase additional performance for cloud disks.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _throughputPerformance Cloud disk performance (unit: MB/s), which can be used to purchase additional performance for cloud disks.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * Cloud disk type
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * File system (ext3/ext4/xfs).

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * Cloud disk size (GB)

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Whether to automatically format and mount disks.

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_autoFormatAndMount;
                    bool m_autoFormatAndMountHasBeenSet;

                    /**
                     * Mount device name or partition name
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_diskPartition;
                    bool m_diskPartitionHasBeenSet;

                    /**
                     * Mounting directory

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Custom key for purchasing encrypted disks. When this parameter is input, the Encrypt input parameter cannot be left empty.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Snapshot ID. If it is input, a cloud disk will be created based on this snapshot. The snapshot must be a data disk snapshot.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Cloud disk performance (unit: MB/s), which can be used to purchase additional performance for cloud disks.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DATADISK_H_
