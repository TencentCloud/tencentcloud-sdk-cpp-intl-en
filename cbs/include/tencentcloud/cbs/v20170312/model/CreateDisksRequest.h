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
                     * 获取Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_BSSD: Balanced SSD<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     * @return DiskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_BSSD: Balanced SSD<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_BSSD: Balanced SSD<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     * @param _diskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_BSSD: Balanced SSD<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
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
                     * 获取Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for ulTra SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     * @return ThroughputPerformance Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for ulTra SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for ulTra SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     * @param _throughputPerformance Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for ulTra SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
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
                     * 获取Cloud disk size in GB. <br><li>`DiskSize` is not required if `SnapshotId` is specified. In this case, the size of the cloud disk will be equal to that of the snapshot. <br><li>If you specify both `SnapshotId` and `DiskSize`, the specified disk size cannot be smaller than the snapshot size. <br><li>For the value range of cloud disk size, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @return DiskSize Cloud disk size in GB. <br><li>`DiskSize` is not required if `SnapshotId` is specified. In this case, the size of the cloud disk will be equal to that of the snapshot. <br><li>If you specify both `SnapshotId` and `DiskSize`, the specified disk size cannot be smaller than the snapshot size. <br><li>For the value range of cloud disk size, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size in GB. <br><li>`DiskSize` is not required if `SnapshotId` is specified. In this case, the size of the cloud disk will be equal to that of the snapshot. <br><li>If you specify both `SnapshotId` and `DiskSize`, the specified disk size cannot be smaller than the snapshot size. <br><li>For the value range of cloud disk size, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @param _diskSize Cloud disk size in GB. <br><li>`DiskSize` is not required if `SnapshotId` is specified. In this case, the size of the cloud disk will be equal to that of the snapshot. <br><li>If you specify both `SnapshotId` and `DiskSize`, the specified disk size cannot be smaller than the snapshot size. <br><li>For the value range of cloud disk size, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
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
                     * 获取Optional parameter. Default value: `False`. If `True` is specified, the new cloud disk will be shared.
                     * @return Shareable Optional parameter. Default value: `False`. If `True` is specified, the new cloud disk will be shared.
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置Optional parameter. Default value: `False`. If `True` is specified, the new cloud disk will be shared.
                     * @param _shareable Optional parameter. Default value: `False`. If `True` is specified, the new cloud disk will be shared.
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
                     * 获取This parameter is used to create encrypted cloud disks. It is fixed at `ENCRYPT`.
                     * @return Encrypt This parameter is used to create encrypted cloud disks. It is fixed at `ENCRYPT`.
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置This parameter is used to create encrypted cloud disks. It is fixed at `ENCRYPT`.
                     * @param _encrypt This parameter is used to create encrypted cloud disks. It is fixed at `ENCRYPT`.
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
                     * 获取Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     * @return DiskChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     * @param _diskChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
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
                     * 获取Whether to delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default value). `1`: Yes. To check whether a snapshot is permanently reserved, see the `IsPermanent` field returned by the `DescribeSnapshots` API.
                     * @return DeleteSnapshot Whether to delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default value). `1`: Yes. To check whether a snapshot is permanently reserved, see the `IsPermanent` field returned by the `DescribeSnapshots` API.
                     * 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Whether to delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default value). `1`: Yes. To check whether a snapshot is permanently reserved, see the `IsPermanent` field returned by the `DescribeSnapshots` API.
                     * @param _deleteSnapshot Whether to delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default value). `1`: Yes. To check whether a snapshot is permanently reserved, see the `IsPermanent` field returned by the `DescribeSnapshots` API.
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
                     * 获取Specifies whether to automatically attach and initialize the newly created data disk.
                     * @return AutoMountConfiguration Specifies whether to automatically attach and initialize the newly created data disk.
                     * 
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置Specifies whether to automatically attach and initialize the newly created data disk.
                     * @param _autoMountConfiguration Specifies whether to automatically attach and initialize the newly created data disk.
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
                     * Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_BSSD: Balanced SSD<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
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
                     * Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for ulTra SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Cloud disk size in GB. <br><li>`DiskSize` is not required if `SnapshotId` is specified. In this case, the size of the cloud disk will be equal to that of the snapshot. <br><li>If you specify both `SnapshotId` and `DiskSize`, the specified disk size cannot be smaller than the snapshot size. <br><li>For the value range of cloud disk size, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Optional parameter. Default value: `False`. If `True` is specified, the new cloud disk will be shared.
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * This parameter is used to create encrypted cloud disks. It is fixed at `ENCRYPT`.
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * Whether to delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default value). `1`: Yes. To check whether a snapshot is permanently reserved, see the `IsPermanent` field returned by the `DescribeSnapshots` API.
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                    /**
                     * Specifies whether to automatically attach and initialize the newly created data disk.
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                    /**
                     * Specifies the cloud disk backup point quota.
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
