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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/PGroup.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>
#include <tencentcloud/cfs/v20190719/model/TieringDetailInfo.h>
#include <tencentcloud/cfs/v20190719/model/AutoScaleUpRule.h>
#include <tencentcloud/cfs/v20190719/model/ExstraPerformanceInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Basic information of a file system
                */
                class FileSystemInfo : public AbstractModel
                {
                public:
                    FileSystemInfo();
                    ~FileSystemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time
                     * @return CreationTime Creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time
                     * @param _creationTime Creation time
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
                     * 获取Custom name
                     * @return CreationToken Custom name
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置Custom name
                     * @param _creationToken Custom name
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
                     * 获取File system status. Valid values:
- creating
- mounting
- create_failed
- available
- unserviced
- upgrading
                     * @return LifeCycleState File system status. Valid values:
- creating
- mounting
- create_failed
- available
- unserviced
- upgrading
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置File system status. Valid values:
- creating
- mounting
- create_failed
- available
- unserviced
- upgrading
                     * @param _lifeCycleState File system status. Valid values:
- creating
- mounting
- create_failed
- available
- unserviced
- upgrading
                     * 
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取Used capacity of the file system, in Byte.
                     * @return SizeByte Used capacity of the file system, in Byte.
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置Used capacity of the file system, in Byte.
                     * @param _sizeByte Used capacity of the file system, in Byte.
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
                     * 获取File system space limit, in GiB.
                     * @return SizeLimit File system space limit, in GiB.
                     * 
                     */
                    uint64_t GetSizeLimit() const;

                    /**
                     * 设置File system space limit, in GiB.
                     * @param _sizeLimit File system space limit, in GiB.
                     * 
                     */
                    void SetSizeLimit(const uint64_t& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     * 
                     */
                    bool SizeLimitHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return ZoneId Region ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Region ID
                     * @param _zoneId Region ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return Zone Region name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region name
                     * @param _zone Region name
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取File system protocol type. Valid values: NFS, CIFS, and TURBO.
                     * @return Protocol File system protocol type. Valid values: NFS, CIFS, and TURBO.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置File system protocol type. Valid values: NFS, CIFS, and TURBO.
                     * @param _protocol File system protocol type. Valid values: NFS, CIFS, and TURBO.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Storage type. HP: high-performance; SD: standard; TP: high-performance Turbo; TB: standard Turbo; THP: throughput.
                     * @return StorageType Storage type. HP: high-performance; SD: standard; TP: high-performance Turbo; TB: standard Turbo; THP: throughput.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type. HP: high-performance; SD: standard; TP: high-performance Turbo; TB: standard Turbo; THP: throughput.
                     * @param _storageType Storage type. HP: high-performance; SD: standard; TP: high-performance Turbo; TB: standard Turbo; THP: throughput.
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
                     * 获取Prepaid storage pack bound with the file system
                     * @return StorageResourcePkg Prepaid storage pack bound with the file system
                     * 
                     */
                    std::string GetStorageResourcePkg() const;

                    /**
                     * 设置Prepaid storage pack bound with the file system
                     * @param _storageResourcePkg Prepaid storage pack bound with the file system
                     * 
                     */
                    void SetStorageResourcePkg(const std::string& _storageResourcePkg);

                    /**
                     * 判断参数 StorageResourcePkg 是否已赋值
                     * @return StorageResourcePkg 是否已赋值
                     * 
                     */
                    bool StorageResourcePkgHasBeenSet() const;

                    /**
                     * 获取Prepaid bandwidth pack bound to a file system (not supported currently)
                     * @return BandwidthResourcePkg Prepaid bandwidth pack bound to a file system (not supported currently)
                     * 
                     */
                    std::string GetBandwidthResourcePkg() const;

                    /**
                     * 设置Prepaid bandwidth pack bound to a file system (not supported currently)
                     * @param _bandwidthResourcePkg Prepaid bandwidth pack bound to a file system (not supported currently)
                     * 
                     */
                    void SetBandwidthResourcePkg(const std::string& _bandwidthResourcePkg);

                    /**
                     * 判断参数 BandwidthResourcePkg 是否已赋值
                     * @return BandwidthResourcePkg 是否已赋值
                     * 
                     */
                    bool BandwidthResourcePkgHasBeenSet() const;

                    /**
                     * 获取Information of permission groups bound to a file system
                     * @return PGroup Information of permission groups bound to a file system
                     * 
                     */
                    PGroup GetPGroup() const;

                    /**
                     * 设置Information of permission groups bound to a file system
                     * @param _pGroup Information of permission groups bound to a file system
                     * 
                     */
                    void SetPGroup(const PGroup& _pGroup);

                    /**
                     * 判断参数 PGroup 是否已赋值
                     * @return PGroup 是否已赋值
                     * 
                     */
                    bool PGroupHasBeenSet() const;

                    /**
                     * 获取Custom name
                     * @return FsName Custom name
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置Custom name
                     * @param _fsName Custom name
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取Is the file system encrypted. true: encrypted. false: non-encrypted.
                     * @return Encrypted Is the file system encrypted. true: encrypted. false: non-encrypted.
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置Is the file system encrypted. true: encrypted. false: non-encrypted.
                     * @param _encrypted Is the file system encrypted. true: encrypted. false: non-encrypted.
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取Key used for encryption, which can be the key ID or ARN
                     * @return KmsKeyId Key used for encryption, which can be the key ID or ARN
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Key used for encryption, which can be the key ID or ARN
                     * @param _kmsKeyId Key used for encryption, which can be the key ID or ARN
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
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Upper limit of the file system throughput, in MiB/s. The upper limit is determined based on the current storage used of the file system, bound storage resource packages, and throughput resource packages.
                     * @return BandwidthLimit Upper limit of the file system throughput, in MiB/s. The upper limit is determined based on the current storage used of the file system, bound storage resource packages, and throughput resource packages.
                     * 
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置Upper limit of the file system throughput, in MiB/s. The upper limit is determined based on the current storage used of the file system, bound storage resource packages, and throughput resource packages.
                     * @param _bandwidthLimit Upper limit of the file system throughput, in MiB/s. The upper limit is determined based on the current storage used of the file system, bound storage resource packages, and throughput resource packages.
                     * 
                     */
                    void SetBandwidthLimit(const double& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取Snapshot policy associated with the file system.
                     * @return AutoSnapshotPolicyId Snapshot policy associated with the file system.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Snapshot policy associated with the file system.
                     * @param _autoSnapshotPolicyId Snapshot policy associated with the file system.
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取File system processes snapshot status, snapping: in snapshot, normal: in normal status.
                     * @return SnapStatus File system processes snapshot status, snapping: in snapshot, normal: in normal status.
                     * 
                     */
                    std::string GetSnapStatus() const;

                    /**
                     * 设置File system processes snapshot status, snapping: in snapshot, normal: in normal status.
                     * @param _snapStatus File system processes snapshot status, snapping: in snapshot, normal: in normal status.
                     * 
                     */
                    void SetSnapStatus(const std::string& _snapStatus);

                    /**
                     * 判断参数 SnapStatus 是否已赋值
                     * @return SnapStatus 是否已赋值
                     * 
                     */
                    bool SnapStatusHasBeenSet() const;

                    /**
                     * 获取Upper limit of file system capacity.
Unit: GiB.
                     * @return Capacity Upper limit of file system capacity.
Unit: GiB.
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置Upper limit of file system capacity.
Unit: GiB.
                     * @param _capacity Upper limit of file system capacity.
Unit: GiB.
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取File system tag list
                     * @return Tags File system tag list
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置File system tag list
                     * @param _tags File system tag list
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Status of file system lifecycle management.
NotAvailable: unavailable.
Available.
                     * @return TieringState Status of file system lifecycle management.
NotAvailable: unavailable.
Available.
                     * 
                     */
                    std::string GetTieringState() const;

                    /**
                     * 设置Status of file system lifecycle management.
NotAvailable: unavailable.
Available.
                     * @param _tieringState Status of file system lifecycle management.
NotAvailable: unavailable.
Available.
                     * 
                     */
                    void SetTieringState(const std::string& _tieringState);

                    /**
                     * 判断参数 TieringState 是否已赋值
                     * @return TieringState 是否已赋值
                     * 
                     */
                    bool TieringStateHasBeenSet() const;

                    /**
                     * 获取Layered storage detail.
                     * @return TieringDetail Layered storage detail.
                     * 
                     */
                    TieringDetailInfo GetTieringDetail() const;

                    /**
                     * 设置Layered storage detail.
                     * @param _tieringDetail Layered storage detail.
                     * 
                     */
                    void SetTieringDetail(const TieringDetailInfo& _tieringDetail);

                    /**
                     * 判断参数 TieringDetail 是否已赋值
                     * @return TieringDetail 是否已赋值
                     * 
                     */
                    bool TieringDetailHasBeenSet() const;

                    /**
                     * 获取File system auto scale-out policy.
                     * @return AutoScaleUpRule File system auto scale-out policy.
                     * 
                     */
                    AutoScaleUpRule GetAutoScaleUpRule() const;

                    /**
                     * 设置File system auto scale-out policy.
                     * @param _autoScaleUpRule File system auto scale-out policy.
                     * 
                     */
                    void SetAutoScaleUpRule(const AutoScaleUpRule& _autoScaleUpRule);

                    /**
                     * 判断参数 AutoScaleUpRule 是否已赋值
                     * @return AutoScaleUpRule 是否已赋值
                     * 
                     */
                    bool AutoScaleUpRuleHasBeenSet() const;

                    /**
                     * 获取File System Version
                     * @return Version File System Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置File System Version
                     * @param _version File System Version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Additional performance info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExstraPerformanceInfo Additional performance info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ExstraPerformanceInfo> GetExstraPerformanceInfo() const;

                    /**
                     * 设置Additional performance info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exstraPerformanceInfo Additional performance info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExstraPerformanceInfo(const std::vector<ExstraPerformanceInfo>& _exstraPerformanceInfo);

                    /**
                     * 判断参数 ExstraPerformanceInfo 是否已赋值
                     * @return ExstraPerformanceInfo 是否已赋值
                     * 
                     */
                    bool ExstraPerformanceInfoHasBeenSet() const;

                    /**
                     * 获取basic: standard version metadata type.
enhanced: additional metadata type.
                     * @return MetaType basic: standard version metadata type.
enhanced: additional metadata type.
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置basic: standard version metadata type.
enhanced: additional metadata type.
                     * @param _metaType basic: standard version metadata type.
enhanced: additional metadata type.
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                private:

                    /**
                     * Creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Custom name
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system status. Valid values:
- creating
- mounting
- create_failed
- available
- unserviced
- upgrading
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * Used capacity of the file system, in Byte.
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * File system space limit, in GiB.
                     */
                    uint64_t m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * File system protocol type. Valid values: NFS, CIFS, and TURBO.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Storage type. HP: high-performance; SD: standard; TP: high-performance Turbo; TB: standard Turbo; THP: throughput.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Prepaid storage pack bound with the file system
                     */
                    std::string m_storageResourcePkg;
                    bool m_storageResourcePkgHasBeenSet;

                    /**
                     * Prepaid bandwidth pack bound to a file system (not supported currently)
                     */
                    std::string m_bandwidthResourcePkg;
                    bool m_bandwidthResourcePkgHasBeenSet;

                    /**
                     * Information of permission groups bound to a file system
                     */
                    PGroup m_pGroup;
                    bool m_pGroupHasBeenSet;

                    /**
                     * Custom name
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * Is the file system encrypted. true: encrypted. false: non-encrypted.
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * Key used for encryption, which can be the key ID or ARN
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Application ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Upper limit of the file system throughput, in MiB/s. The upper limit is determined based on the current storage used of the file system, bound storage resource packages, and throughput resource packages.
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * Snapshot policy associated with the file system.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * File system processes snapshot status, snapping: in snapshot, normal: in normal status.
                     */
                    std::string m_snapStatus;
                    bool m_snapStatusHasBeenSet;

                    /**
                     * Upper limit of file system capacity.
Unit: GiB.
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * File system tag list
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Status of file system lifecycle management.
NotAvailable: unavailable.
Available.
                     */
                    std::string m_tieringState;
                    bool m_tieringStateHasBeenSet;

                    /**
                     * Layered storage detail.
                     */
                    TieringDetailInfo m_tieringDetail;
                    bool m_tieringDetailHasBeenSet;

                    /**
                     * File system auto scale-out policy.
                     */
                    AutoScaleUpRule m_autoScaleUpRule;
                    bool m_autoScaleUpRuleHasBeenSet;

                    /**
                     * File System Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Additional performance info.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ExstraPerformanceInfo> m_exstraPerformanceInfo;
                    bool m_exstraPerformanceInfoHasBeenSet;

                    /**
                     * basic: standard version metadata type.
enhanced: additional metadata type.
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
