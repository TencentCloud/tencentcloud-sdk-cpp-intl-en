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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>
#include <tencentcloud/cbs/v20170312/model/AutoMountConfiguration.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDisks request structure.
                */
                class CreateDisksRequest : public AbstractModel
                {
                public:
                    CreateDisksRequest();
                    ~CreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project. If no project is specified, the default project will be used.
                     * @return Placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project. If no project is specified, the default project will be used.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project. If no project is specified, the default project will be used.
                     * @param _placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project. If no project is specified, the default project will be used.
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Cloud disk billing mode. POSTPAID_BY_HOUR: Pay-as-you-go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For more information on the pricing in each mode, see [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * @return DiskChargeType Cloud disk billing mode. POSTPAID_BY_HOUR: Pay-as-you-go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For more information on the pricing in each mode, see [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Cloud disk billing mode. POSTPAID_BY_HOUR: Pay-as-you-go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For more information on the pricing in each mode, see [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * @param _diskChargeType Cloud disk billing mode. POSTPAID_BY_HOUR: Pay-as-you-go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For more information on the pricing in each mode, see [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Hard disk media type. valid values:<br><li>CLOUD_PREMIUM: indicates high-performance CLOUD block storage</li><br><li>CLOUD_BSSD: indicates universal type SSD CLOUD disk</li><br><li>CLOUD_SSD: indicates SSD CLOUD disk</li><br><li>CLOUD_HSSD: indicates enhanced SSD CLOUD disk</li><br><li>CLOUD_TSSD: indicates ultra-fast SSD cbs.</li>ultra-fast SSD CBS (CLOUD_TSSD) is only supported when purchased with some instances and not currently supported for separate creation.
                     * @return DiskType Hard disk media type. valid values:<br><li>CLOUD_PREMIUM: indicates high-performance CLOUD block storage</li><br><li>CLOUD_BSSD: indicates universal type SSD CLOUD disk</li><br><li>CLOUD_SSD: indicates SSD CLOUD disk</li><br><li>CLOUD_HSSD: indicates enhanced SSD CLOUD disk</li><br><li>CLOUD_TSSD: indicates ultra-fast SSD cbs.</li>ultra-fast SSD CBS (CLOUD_TSSD) is only supported when purchased with some instances and not currently supported for separate creation.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Hard disk media type. valid values:<br><li>CLOUD_PREMIUM: indicates high-performance CLOUD block storage</li><br><li>CLOUD_BSSD: indicates universal type SSD CLOUD disk</li><br><li>CLOUD_SSD: indicates SSD CLOUD disk</li><br><li>CLOUD_HSSD: indicates enhanced SSD CLOUD disk</li><br><li>CLOUD_TSSD: indicates ultra-fast SSD cbs.</li>ultra-fast SSD CBS (CLOUD_TSSD) is only supported when purchased with some instances and not currently supported for separate creation.
                     * @param _diskType Hard disk media type. valid values:<br><li>CLOUD_PREMIUM: indicates high-performance CLOUD block storage</li><br><li>CLOUD_BSSD: indicates universal type SSD CLOUD disk</li><br><li>CLOUD_SSD: indicates SSD CLOUD disk</li><br><li>CLOUD_HSSD: indicates enhanced SSD CLOUD disk</li><br><li>CLOUD_TSSD: indicates ultra-fast SSD cbs.</li>ultra-fast SSD CBS (CLOUD_TSSD) is only supported when purchased with some instances and not currently supported for separate creation.
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
                     * 获取Cloud disk name. If it is not specified, "Unnamed" will be used by default. The maximum length is 60 bytes.
                     * @return DiskName Cloud disk name. If it is not specified, "Unnamed" will be used by default. The maximum length is 60 bytes.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Cloud disk name. If it is not specified, "Unnamed" will be used by default. The maximum length is 60 bytes.
                     * @param _diskName Cloud disk name. If it is not specified, "Unnamed" will be used by default. The maximum length is 60 bytes.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Tags bound to the cloud disk.
                     * @return Tags Tags bound to the cloud disk.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to the cloud disk.
                     * @param _tags Tags bound to the cloud disk.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Snapshot ID. If this parameter is specified, the cloud disk will be created based on the snapshot. The snapshot must be a data disk snapshot. To query the type of a snapshot, call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and see the `DiskUsage` field in the response.
                     * @return SnapshotId Snapshot ID. If this parameter is specified, the cloud disk will be created based on the snapshot. The snapshot must be a data disk snapshot. To query the type of a snapshot, call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and see the `DiskUsage` field in the response.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID. If this parameter is specified, the cloud disk will be created based on the snapshot. The snapshot must be a data disk snapshot. To query the type of a snapshot, call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and see the `DiskUsage` field in the response.
                     * @param _snapshotId Snapshot ID. If this parameter is specified, the cloud disk will be created based on the snapshot. The snapshot must be a data disk snapshot. To query the type of a snapshot, call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and see the `DiskUsage` field in the response.
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
                     * 获取Number of cloud disks to be created. If it is not specified, `1` will be used by default. There is an upper limit on the maximum number of cloud disks that can be created in a single request. For more information, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * @return DiskCount Number of cloud disks to be created. If it is not specified, `1` will be used by default. There is an upper limit on the maximum number of cloud disks that can be created in a single request. For more information, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置Number of cloud disks to be created. If it is not specified, `1` will be used by default. There is an upper limit on the maximum number of cloud disks that can be created in a single request. For more information, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * @param _diskCount Number of cloud disks to be created. If it is not specified, `1` will be used by default. There is an upper limit on the maximum number of cloud disks that can be created in a single request. For more information, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Use this parameter to purchase additional performance for CLOUD disk in MB/s.<br>currently, only extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) are supported.
                     * @return ThroughputPerformance Use this parameter to purchase additional performance for CLOUD disk in MB/s.<br>currently, only extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) are supported.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Use this parameter to purchase additional performance for CLOUD disk in MB/s.<br>currently, only extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) are supported.
                     * @param _throughputPerformance Use this parameter to purchase additional performance for CLOUD disk in MB/s.<br>currently, only extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) are supported.
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取Custom key for purchasing encrypted disks. when this parameter is input, the Encrypt parameter cannot be empty.
                     * @return KmsKeyId Custom key for purchasing encrypted disks. when this parameter is input, the Encrypt parameter cannot be empty.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Custom key for purchasing encrypted disks. when this parameter is input, the Encrypt parameter cannot be empty.
                     * @param _kmsKeyId Custom key for purchasing encrypted disks. when this parameter is input, the Encrypt parameter cannot be empty.
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
                     * 获取Cloud disk size in GiB. <li>if `SnapshotId` is input, `DiskSize` can be omitted. at this point, the new cloud disk size will be the snapshot size.</li> <li>if both `SnapshotId` and `DiskSize` are input, the cloud disk size must be greater than or equal to the snapshot size.</li> <li>for the cloud disk size range, please refer to the [product type](https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1) of cloud block storage.</li>.
                     * @return DiskSize Cloud disk size in GiB. <li>if `SnapshotId` is input, `DiskSize` can be omitted. at this point, the new cloud disk size will be the snapshot size.</li> <li>if both `SnapshotId` and `DiskSize` are input, the cloud disk size must be greater than or equal to the snapshot size.</li> <li>for the cloud disk size range, please refer to the [product type](https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1) of cloud block storage.</li>.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size in GiB. <li>if `SnapshotId` is input, `DiskSize` can be omitted. at this point, the new cloud disk size will be the snapshot size.</li> <li>if both `SnapshotId` and `DiskSize` are input, the cloud disk size must be greater than or equal to the snapshot size.</li> <li>for the cloud disk size range, please refer to the [product type](https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1) of cloud block storage.</li>.
                     * @param _diskSize Cloud disk size in GiB. <li>if `SnapshotId` is input, `DiskSize` can be omitted. at this point, the new cloud disk size will be the snapshot size.</li> <li>if both `SnapshotId` and `DiskSize` are input, the cloud disk size must be greater than or equal to the snapshot size.</li> <li>for the cloud disk size range, please refer to the [product type](https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1) of cloud block storage.</li>.
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取When True is entered, the cloud disk will be created as a shared cloud disk. default is False. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Encrypt parameter.
                     * @return Shareable When True is entered, the cloud disk will be created as a shared cloud disk. default is False. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Encrypt parameter.
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置When True is entered, the cloud disk will be created as a shared cloud disk. default is False. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Encrypt parameter.
                     * @param _shareable When True is entered, the cloud disk will be created as a shared cloud disk. default is False. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Encrypt parameter.
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Shareable parameter.
                     * @return Encrypt This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Shareable parameter.
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Shareable parameter.
                     * @param _encrypt This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Shareable parameter.
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
                     * 获取Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
                     * @return DiskChargePrepaid Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
                     * @param _diskChargePrepaid Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
                     * 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Delete associated non-permanently retained snapshots when destroying the cloud disk. 0 means non-permanent snapshots are not deleted with cloud disk destruction, 1 means non-permanent snapshots are deleted with cloud disk destruction. default value is 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the [DescribeSnapshots](https://www.tencentcloud.com/document/api/362/15647?from_cn_redirect=1) api. True represents a permanent snapshot, False represents a non-permanent snapshot.
                     * @return DeleteSnapshot Delete associated non-permanently retained snapshots when destroying the cloud disk. 0 means non-permanent snapshots are not deleted with cloud disk destruction, 1 means non-permanent snapshots are deleted with cloud disk destruction. default value is 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the [DescribeSnapshots](https://www.tencentcloud.com/document/api/362/15647?from_cn_redirect=1) api. True represents a permanent snapshot, False represents a non-permanent snapshot.
                     * 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Delete associated non-permanently retained snapshots when destroying the cloud disk. 0 means non-permanent snapshots are not deleted with cloud disk destruction, 1 means non-permanent snapshots are deleted with cloud disk destruction. default value is 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the [DescribeSnapshots](https://www.tencentcloud.com/document/api/362/15647?from_cn_redirect=1) api. True represents a permanent snapshot, False represents a non-permanent snapshot.
                     * @param _deleteSnapshot Delete associated non-permanently retained snapshots when destroying the cloud disk. 0 means non-permanent snapshots are not deleted with cloud disk destruction, 1 means non-permanent snapshots are deleted with cloud disk destruction. default value is 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the [DescribeSnapshots](https://www.tencentcloud.com/document/api/362/15647?from_cn_redirect=1) api. True represents a permanent snapshot, False represents a non-permanent snapshot.
                     * 
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     * 
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                    /**
                     * 获取Specifies auto mount and initialization of the data disk when creating a cloud disk. this parameter cannot be imported simultaneously with the Encrypt parameter because encrypted disks do not support auto mount or initialization.
                     * @return AutoMountConfiguration Specifies auto mount and initialization of the data disk when creating a cloud disk. this parameter cannot be imported simultaneously with the Encrypt parameter because encrypted disks do not support auto mount or initialization.
                     * 
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置Specifies auto mount and initialization of the data disk when creating a cloud disk. this parameter cannot be imported simultaneously with the Encrypt parameter because encrypted disks do not support auto mount or initialization.
                     * @param _autoMountConfiguration Specifies auto mount and initialization of the data disk when creating a cloud disk. this parameter cannot be imported simultaneously with the Encrypt parameter because encrypted disks do not support auto mount or initialization.
                     * 
                     */
                    void SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration);

                    /**
                     * 判断参数 AutoMountConfiguration 是否已赋值
                     * @return AutoMountConfiguration 是否已赋值
                     * 
                     */
                    bool AutoMountConfigurationHasBeenSet() const;

                    /**
                     * 获取Specifies the cloud disk backup point quota.
                     * @return DiskBackupQuota Specifies the cloud disk backup point quota.
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Specifies the cloud disk backup point quota.
                     * @param _diskBackupQuota Specifies the cloud disk backup point quota.
                     * 
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable burst performance when creating a CLOUD disk. currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with CLOUD disk size greater than or equal to 460GiB.
                     * @return BurstPerformance Specifies whether to enable burst performance when creating a CLOUD disk. currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with CLOUD disk size greater than or equal to 460GiB.
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置Specifies whether to enable burst performance when creating a CLOUD disk. currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with CLOUD disk size greater than or equal to 460GiB.
                     * @param _burstPerformance Specifies whether to enable burst performance when creating a CLOUD disk. currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with CLOUD disk size greater than or equal to 460GiB.
                     * 
                     */
                    void SetBurstPerformance(const bool& _burstPerformance);

                    /**
                     * 判断参数 BurstPerformance 是否已赋值
                     * @return BurstPerformance 是否已赋值
                     * 
                     */
                    bool BurstPerformanceHasBeenSet() const;

                    /**
                     * 获取Specifies the CBS encryption type. valid values are ENCRYPT_V1 and ENCRYPT_V2, representing first generation and second generation encryption technology respectively. the two encryption technologies are incompatible. it is recommended to prioritize using second generation encryption technology ENCRYPT_V2. first generation encryption is only supported on some outdated models. this parameter is valid only when creating an encrypted cloud disk.
                     * @return EncryptType Specifies the CBS encryption type. valid values are ENCRYPT_V1 and ENCRYPT_V2, representing first generation and second generation encryption technology respectively. the two encryption technologies are incompatible. it is recommended to prioritize using second generation encryption technology ENCRYPT_V2. first generation encryption is only supported on some outdated models. this parameter is valid only when creating an encrypted cloud disk.
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置Specifies the CBS encryption type. valid values are ENCRYPT_V1 and ENCRYPT_V2, representing first generation and second generation encryption technology respectively. the two encryption technologies are incompatible. it is recommended to prioritize using second generation encryption technology ENCRYPT_V2. first generation encryption is only supported on some outdated models. this parameter is valid only when creating an encrypted cloud disk.
                     * @param _encryptType Specifies the CBS encryption type. valid values are ENCRYPT_V1 and ENCRYPT_V2, representing first generation and second generation encryption technology respectively. the two encryption technologies are incompatible. it is recommended to prioritize using second generation encryption technology ENCRYPT_V2. first generation encryption is only supported on some outdated models. this parameter is valid only when creating an encrypted cloud disk.
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                private:

                    /**
                     * Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project. If no project is specified, the default project will be used.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Cloud disk billing mode. POSTPAID_BY_HOUR: Pay-as-you-go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For more information on the pricing in each mode, see [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Hard disk media type. valid values:<br><li>CLOUD_PREMIUM: indicates high-performance CLOUD block storage</li><br><li>CLOUD_BSSD: indicates universal type SSD CLOUD disk</li><br><li>CLOUD_SSD: indicates SSD CLOUD disk</li><br><li>CLOUD_HSSD: indicates enhanced SSD CLOUD disk</li><br><li>CLOUD_TSSD: indicates ultra-fast SSD cbs.</li>ultra-fast SSD CBS (CLOUD_TSSD) is only supported when purchased with some instances and not currently supported for separate creation.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk name. If it is not specified, "Unnamed" will be used by default. The maximum length is 60 bytes.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Tags bound to the cloud disk.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Snapshot ID. If this parameter is specified, the cloud disk will be created based on the snapshot. The snapshot must be a data disk snapshot. To query the type of a snapshot, call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and see the `DiskUsage` field in the response.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Number of cloud disks to be created. If it is not specified, `1` will be used by default. There is an upper limit on the maximum number of cloud disks that can be created in a single request. For more information, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Use this parameter to purchase additional performance for CLOUD disk in MB/s.<br>currently, only extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) are supported.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Custom key for purchasing encrypted disks. when this parameter is input, the Encrypt parameter cannot be empty.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Cloud disk size in GiB. <li>if `SnapshotId` is input, `DiskSize` can be omitted. at this point, the new cloud disk size will be the snapshot size.</li> <li>if both `SnapshotId` and `DiskSize` are input, the cloud disk size must be greater than or equal to the snapshot size.</li> <li>for the cloud disk size range, please refer to the [product type](https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1) of cloud block storage.</li>.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * When True is entered, the cloud disk will be created as a shared cloud disk. default is False. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Encrypt parameter.
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * This parameter is used to create an encrypted cloud disk, with the value fixed as ENCRYPT. since shared cloud disk does not support encryption, this parameter cannot be imported simultaneously with the Shareable parameter.
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * Delete associated non-permanently retained snapshots when destroying the cloud disk. 0 means non-permanent snapshots are not deleted with cloud disk destruction, 1 means non-permanent snapshots are deleted with cloud disk destruction. default value is 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the [DescribeSnapshots](https://www.tencentcloud.com/document/api/362/15647?from_cn_redirect=1) api. True represents a permanent snapshot, False represents a non-permanent snapshot.
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                    /**
                     * Specifies auto mount and initialization of the data disk when creating a cloud disk. this parameter cannot be imported simultaneously with the Encrypt parameter because encrypted disks do not support auto mount or initialization.
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                    /**
                     * Specifies the cloud disk backup point quota.
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                    /**
                     * Specifies whether to enable burst performance when creating a CLOUD disk. currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with CLOUD disk size greater than or equal to 460GiB.
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * Specifies the CBS encryption type. valid values are ENCRYPT_V1 and ENCRYPT_V2, representing first generation and second generation encryption technology respectively. the two encryption technologies are incompatible. it is recommended to prioritize using second generation encryption technology ENCRYPT_V2. first generation encryption is only supported on some outdated models. this parameter is valid only when creating an encrypted cloud disk.
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
