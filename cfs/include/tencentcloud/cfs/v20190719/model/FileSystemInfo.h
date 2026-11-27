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
                     * 获取<p>Creation time.</p>
                     * @return CreationTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _creationTime <p>Creation time.</p>
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
                     * 获取<p>User-defined name.</p>
                     * @return CreationToken <p>User-defined name.</p>
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置<p>User-defined name.</p>
                     * @param _creationToken <p>User-defined name.</p>
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
                     * 获取<p>File system ID.</p>
                     * @return FileSystemId <p>File system ID.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID.</p>
                     * @param _fileSystemId <p>File system ID.</p>
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
                     * 获取<p>File system status. Valid values:</p><ul><li>creating: Creating</li><li>mounting: Mounting</li><li>create_failed: Failed to create</li><li>available: Available</li><li>unserviced: Service suspended</li><li>upgrading: Upgrading</li></ul>
                     * @return LifeCycleState <p>File system status. Valid values:</p><ul><li>creating: Creating</li><li>mounting: Mounting</li><li>create_failed: Failed to create</li><li>available: Available</li><li>unserviced: Service suspended</li><li>upgrading: Upgrading</li></ul>
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置<p>File system status. Valid values:</p><ul><li>creating: Creating</li><li>mounting: Mounting</li><li>create_failed: Failed to create</li><li>available: Available</li><li>unserviced: Service suspended</li><li>upgrading: Upgrading</li></ul>
                     * @param _lifeCycleState <p>File system status. Valid values:</p><ul><li>creating: Creating</li><li>mounting: Mounting</li><li>create_failed: Failed to create</li><li>available: Available</li><li>unserviced: Service suspended</li><li>upgrading: Upgrading</li></ul>
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
                     * 获取<p>Used capacity of the file system. Unit: Byte.</p>
                     * @return SizeByte <p>Used capacity of the file system. Unit: Byte.</p>
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置<p>Used capacity of the file system. Unit: Byte.</p>
                     * @param _sizeByte <p>Used capacity of the file system. Unit: Byte.</p>
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
                     * 获取<p>File system space limit. Unit: GiB.</p>
                     * @return SizeLimit <p>File system space limit. Unit: GiB.</p>
                     * 
                     */
                    uint64_t GetSizeLimit() const;

                    /**
                     * 设置<p>File system space limit. Unit: GiB.</p>
                     * @param _sizeLimit <p>File system space limit. Unit: GiB.</p>
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
                     * 获取<p>Region ID.</p>
                     * @return ZoneId <p>Region ID.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _zoneId <p>Region ID.</p>
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
                     * 获取<p>Region name.</p>
                     * @return Zone <p>Region name.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Region name.</p>
                     * @param _zone <p>Region name.</p>
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
                     * 获取<p>File system protocol type. Valid values: NFS, CIFS, and TURBO.</p>
                     * @return Protocol <p>File system protocol type. Valid values: NFS, CIFS, and TURBO.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>File system protocol type. Valid values: NFS, CIFS, and TURBO.</p>
                     * @param _protocol <p>File system protocol type. Valid values: NFS, CIFS, and TURBO.</p>
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
                     * 获取<p>Storage type. Valid values: HP: General performance; SD: General standard; TP: turbo performance; TB: turbo standard; THP: Throughput.</p>
                     * @return StorageType <p>Storage type. Valid values: HP: General performance; SD: General standard; TP: turbo performance; TB: turbo standard; THP: Throughput.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type. Valid values: HP: General performance; SD: General standard; TP: turbo performance; TB: turbo standard; THP: Throughput.</p>
                     * @param _storageType <p>Storage type. Valid values: HP: General performance; SD: General standard; TP: turbo performance; TB: turbo standard; THP: Throughput.</p>
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
                     * 获取<p>Prepaid storage pack bound to the file system.</p>
                     * @return StorageResourcePkg <p>Prepaid storage pack bound to the file system.</p>
                     * 
                     */
                    std::string GetStorageResourcePkg() const;

                    /**
                     * 设置<p>Prepaid storage pack bound to the file system.</p>
                     * @param _storageResourcePkg <p>Prepaid storage pack bound to the file system.</p>
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
                     * 获取<p>Prepaid bandwidth pack bound to the file system (not supported yet).</p>
                     * @return BandwidthResourcePkg <p>Prepaid bandwidth pack bound to the file system (not supported yet).</p>
                     * 
                     */
                    std::string GetBandwidthResourcePkg() const;

                    /**
                     * 设置<p>Prepaid bandwidth pack bound to the file system (not supported yet).</p>
                     * @param _bandwidthResourcePkg <p>Prepaid bandwidth pack bound to the file system (not supported yet).</p>
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
                     * 获取<p>Information of the permission group bound to the file system.</p>
                     * @return PGroup <p>Information of the permission group bound to the file system.</p>
                     * 
                     */
                    PGroup GetPGroup() const;

                    /**
                     * 设置<p>Information of the permission group bound to the file system.</p>
                     * @param _pGroup <p>Information of the permission group bound to the file system.</p>
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
                     * 获取<p>User-defined name.</p>
                     * @return FsName <p>User-defined name.</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>User-defined name.</p>
                     * @param _fsName <p>User-defined name.</p>
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
                     * 获取<p>Whether the file system is encrypted. true: encrypted; false: not encrypted.</p>
                     * @return Encrypted <p>Whether the file system is encrypted. true: encrypted; false: not encrypted.</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>Whether the file system is encrypted. true: encrypted; false: not encrypted.</p>
                     * @param _encrypted <p>Whether the file system is encrypted. true: encrypted; false: not encrypted.</p>
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
                     * 获取<p>Key used for encryption, which can be the key ID or ARN.</p>
                     * @return KmsKeyId <p>Key used for encryption, which can be the key ID or ARN.</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>Key used for encryption, which can be the key ID or ARN.</p>
                     * @param _kmsKeyId <p>Key used for encryption, which can be the key ID or ARN.</p>
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
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
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
                     * 获取<p>Maximum file system throughput, which is determined by the current used storage capacity of the file system, the bound storage pack, and the throughput pack. Unit: MiB/s.</p>
                     * @return BandwidthLimit <p>Maximum file system throughput, which is determined by the current used storage capacity of the file system, the bound storage pack, and the throughput pack. Unit: MiB/s.</p>
                     * 
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置<p>Maximum file system throughput, which is determined by the current used storage capacity of the file system, the bound storage pack, and the throughput pack. Unit: MiB/s.</p>
                     * @param _bandwidthLimit <p>Maximum file system throughput, which is determined by the current used storage capacity of the file system, the bound storage pack, and the throughput pack. Unit: MiB/s.</p>
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
                     * 获取<p>Snapshot policy associated with the file system.</p>
                     * @return AutoSnapshotPolicyId <p>Snapshot policy associated with the file system.</p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>Snapshot policy associated with the file system.</p>
                     * @param _autoSnapshotPolicyId <p>Snapshot policy associated with the file system.</p>
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
                     * 获取<p>Snapshot processing status of the file system. snapping: snapshot in progress; normal: normal status.</p>
                     * @return SnapStatus <p>Snapshot processing status of the file system. snapping: snapshot in progress; normal: normal status.</p>
                     * 
                     */
                    std::string GetSnapStatus() const;

                    /**
                     * 设置<p>Snapshot processing status of the file system. snapping: snapshot in progress; normal: normal status.</p>
                     * @param _snapStatus <p>Snapshot processing status of the file system. snapping: snapshot in progress; normal: normal status.</p>
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
                     * 获取<p>Maximum capacity specification of the file system.<br>Unit: GiB.</p>
                     * @return Capacity <p>Maximum capacity specification of the file system.<br>Unit: GiB.</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>Maximum capacity specification of the file system.<br>Unit: GiB.</p>
                     * @param _capacity <p>Maximum capacity specification of the file system.<br>Unit: GiB.</p>
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
                     * 获取<p>List of file system tags.</p>
                     * @return Tags <p>List of file system tags.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>List of file system tags.</p>
                     * @param _tags <p>List of file system tags.</p>
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
                     * 获取<p>Lifecycle management status of the file system.<br>NotAvailable: Unavailable.<br>Available: Available.</p>
                     * @return TieringState <p>Lifecycle management status of the file system.<br>NotAvailable: Unavailable.<br>Available: Available.</p>
                     * 
                     */
                    std::string GetTieringState() const;

                    /**
                     * 设置<p>Lifecycle management status of the file system.<br>NotAvailable: Unavailable.<br>Available: Available.</p>
                     * @param _tieringState <p>Lifecycle management status of the file system.<br>NotAvailable: Unavailable.<br>Available: Available.</p>
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
                     * 获取<p>Tiered storage details.</p>
                     * @return TieringDetail <p>Tiered storage details.</p>
                     * 
                     */
                    TieringDetailInfo GetTieringDetail() const;

                    /**
                     * 设置<p>Tiered storage details.</p>
                     * @param _tieringDetail <p>Tiered storage details.</p>
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
                     * 获取<p>Automatic scaling policy of the file system.</p>
                     * @return AutoScaleUpRule <p>Automatic scaling policy of the file system.</p>
                     * 
                     */
                    AutoScaleUpRule GetAutoScaleUpRule() const;

                    /**
                     * 设置<p>Automatic scaling policy of the file system.</p>
                     * @param _autoScaleUpRule <p>Automatic scaling policy of the file system.</p>
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
                     * 获取<p>File system version.</p>
                     * @return Version <p>File system version.</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>File system version.</p>
                     * @param _version <p>File system version.</p>
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
                     * 获取<p>Additional performance information.</p>
                     * @return ExstraPerformanceInfo <p>Additional performance information.</p>
                     * 
                     */
                    std::vector<ExstraPerformanceInfo> GetExstraPerformanceInfo() const;

                    /**
                     * 设置<p>Additional performance information.</p>
                     * @param _exstraPerformanceInfo <p>Additional performance information.</p>
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
                     * 获取<p>basic: standard metadata type.<br>enhanced: enhanced metadata type.</p>
                     * @return MetaType <p>basic: standard metadata type.<br>enhanced: enhanced metadata type.</p>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>basic: standard metadata type.<br>enhanced: enhanced metadata type.</p>
                     * @param _metaType <p>basic: standard metadata type.<br>enhanced: enhanced metadata type.</p>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Create AgentCFS.</li></ul>
                     * @return Scenario <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Create AgentCFS.</li></ul>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Create AgentCFS.</li></ul>
                     * @param _scenario <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Create AgentCFS.</li></ul>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                    /**
                     * 获取<p>Overfull deletion capacity ratio. 0.0 indicates disabled.</p><p>Value range: [0.0, 1.0].</p>
                     * @return FullDeleteCapacityUsage <p>Overfull deletion capacity ratio. 0.0 indicates disabled.</p><p>Value range: [0.0, 1.0].</p>
                     * 
                     */
                    double GetFullDeleteCapacityUsage() const;

                    /**
                     * 设置<p>Overfull deletion capacity ratio. 0.0 indicates disabled.</p><p>Value range: [0.0, 1.0].</p>
                     * @param _fullDeleteCapacityUsage <p>Overfull deletion capacity ratio. 0.0 indicates disabled.</p><p>Value range: [0.0, 1.0].</p>
                     * 
                     */
                    void SetFullDeleteCapacityUsage(const double& _fullDeleteCapacityUsage);

                    /**
                     * 判断参数 FullDeleteCapacityUsage 是否已赋值
                     * @return FullDeleteCapacityUsage 是否已赋值
                     * 
                     */
                    bool FullDeleteCapacityUsageHasBeenSet() const;

                    /**
                     * 获取<p>Minimum survival time before overfull deletion, in seconds.</p><p>Unit: seconds.</p>
                     * @return FullDeleteMinTtl <p>Minimum survival time before overfull deletion, in seconds.</p><p>Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetFullDeleteMinTtl() const;

                    /**
                     * 设置<p>Minimum survival time before overfull deletion, in seconds.</p><p>Unit: seconds.</p>
                     * @param _fullDeleteMinTtl <p>Minimum survival time before overfull deletion, in seconds.</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetFullDeleteMinTtl(const uint64_t& _fullDeleteMinTtl);

                    /**
                     * 判断参数 FullDeleteMinTtl 是否已赋值
                     * @return FullDeleteMinTtl 是否已赋值
                     * 
                     */
                    bool FullDeleteMinTtlHasBeenSet() const;

                    /**
                     * 获取<p>Expiration deletion TTL, in seconds. 0 indicates disabled.</p><p>Unit: seconds.</p>
                     * @return ExpireDeleteTtl <p>Expiration deletion TTL, in seconds. 0 indicates disabled.</p><p>Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetExpireDeleteTtl() const;

                    /**
                     * 设置<p>Expiration deletion TTL, in seconds. 0 indicates disabled.</p><p>Unit: seconds.</p>
                     * @param _expireDeleteTtl <p>Expiration deletion TTL, in seconds. 0 indicates disabled.</p><p>Unit: seconds.</p>
                     * 
                     */
                    void SetExpireDeleteTtl(const uint64_t& _expireDeleteTtl);

                    /**
                     * 判断参数 ExpireDeleteTtl 是否已赋值
                     * @return ExpireDeleteTtl 是否已赋值
                     * 
                     */
                    bool ExpireDeleteTtlHasBeenSet() const;

                private:

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>User-defined name.</p>
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * <p>File system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>File system status. Valid values:</p><ul><li>creating: Creating</li><li>mounting: Mounting</li><li>create_failed: Failed to create</li><li>available: Available</li><li>unserviced: Service suspended</li><li>upgrading: Upgrading</li></ul>
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * <p>Used capacity of the file system. Unit: Byte.</p>
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * <p>File system space limit. Unit: GiB.</p>
                     */
                    uint64_t m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Region name.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>File system protocol type. Valid values: NFS, CIFS, and TURBO.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Storage type. Valid values: HP: General performance; SD: General standard; TP: turbo performance; TB: turbo standard; THP: Throughput.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Prepaid storage pack bound to the file system.</p>
                     */
                    std::string m_storageResourcePkg;
                    bool m_storageResourcePkgHasBeenSet;

                    /**
                     * <p>Prepaid bandwidth pack bound to the file system (not supported yet).</p>
                     */
                    std::string m_bandwidthResourcePkg;
                    bool m_bandwidthResourcePkgHasBeenSet;

                    /**
                     * <p>Information of the permission group bound to the file system.</p>
                     */
                    PGroup m_pGroup;
                    bool m_pGroupHasBeenSet;

                    /**
                     * <p>User-defined name.</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>Whether the file system is encrypted. true: encrypted; false: not encrypted.</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>Key used for encryption, which can be the key ID or ARN.</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>Application ID.</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Maximum file system throughput, which is determined by the current used storage capacity of the file system, the bound storage pack, and the throughput pack. Unit: MiB/s.</p>
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * <p>Snapshot policy associated with the file system.</p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * <p>Snapshot processing status of the file system. snapping: snapshot in progress; normal: normal status.</p>
                     */
                    std::string m_snapStatus;
                    bool m_snapStatusHasBeenSet;

                    /**
                     * <p>Maximum capacity specification of the file system.<br>Unit: GiB.</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>List of file system tags.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Lifecycle management status of the file system.<br>NotAvailable: Unavailable.<br>Available: Available.</p>
                     */
                    std::string m_tieringState;
                    bool m_tieringStateHasBeenSet;

                    /**
                     * <p>Tiered storage details.</p>
                     */
                    TieringDetailInfo m_tieringDetail;
                    bool m_tieringDetailHasBeenSet;

                    /**
                     * <p>Automatic scaling policy of the file system.</p>
                     */
                    AutoScaleUpRule m_autoScaleUpRule;
                    bool m_autoScaleUpRuleHasBeenSet;

                    /**
                     * <p>File system version.</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Additional performance information.</p>
                     */
                    std::vector<ExstraPerformanceInfo> m_exstraPerformanceInfo;
                    bool m_exstraPerformanceInfoHasBeenSet;

                    /**
                     * <p>basic: standard metadata type.<br>enhanced: enhanced metadata type.</p>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Create AgentCFS.</li></ul>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * <p>Overfull deletion capacity ratio. 0.0 indicates disabled.</p><p>Value range: [0.0, 1.0].</p>
                     */
                    double m_fullDeleteCapacityUsage;
                    bool m_fullDeleteCapacityUsageHasBeenSet;

                    /**
                     * <p>Minimum survival time before overfull deletion, in seconds.</p><p>Unit: seconds.</p>
                     */
                    uint64_t m_fullDeleteMinTtl;
                    bool m_fullDeleteMinTtlHasBeenSet;

                    /**
                     * <p>Expiration deletion TTL, in seconds. 0 indicates disabled.</p><p>Unit: seconds.</p>
                     */
                    uint64_t m_expireDeleteTtl;
                    bool m_expireDeleteTtlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
