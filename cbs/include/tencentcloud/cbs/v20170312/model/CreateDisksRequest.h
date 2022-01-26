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
                     * 获取The location of the instance. The availability zone and the project that the instance belongs to can be specified using this parameter. If the project is not specified, it will be created under the default project.
                     * @return Placement The location of the instance. The availability zone and the project that the instance belongs to can be specified using this parameter. If the project is not specified, it will be created under the default project.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置The location of the instance. The availability zone and the project that the instance belongs to can be specified using this parameter. If the project is not specified, it will be created under the default project.
                     * @param Placement The location of the instance. The availability zone and the project that the instance belongs to can be specified using this parameter. If the project is not specified, it will be created under the default project.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Cloud disk billing method. POSTPAID_BY_HOUR: pay as you go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For information about the pricing of each method, see the cloud disk [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * @return DiskChargeType Cloud disk billing method. POSTPAID_BY_HOUR: pay as you go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For information about the pricing of each method, see the cloud disk [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Cloud disk billing method. POSTPAID_BY_HOUR: pay as you go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For information about the pricing of each method, see the cloud disk [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     * @param DiskChargeType Cloud disk billing method. POSTPAID_BY_HOUR: pay as you go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For information about the pricing of each method, see the cloud disk [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD
                     * @return DiskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD
                     * @param DiskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取The displayed name of the cloud disk. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * @return DiskName The displayed name of the cloud disk. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置The displayed name of the cloud disk. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * @param DiskName The displayed name of the cloud disk. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Cloud disk binding tag.
                     * @return Tags Cloud disk binding tag.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Cloud disk binding tag.
                     * @param Tags Cloud disk binding tag.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Snapshot ID. If this parameter is specified, the cloud disk is created based on the snapshot. The snapshot type must be a data disk snapshot. The snapshot can be queried in the DiskUsage field in the output parameter through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @return SnapshotId Snapshot ID. If this parameter is specified, the cloud disk is created based on the snapshot. The snapshot type must be a data disk snapshot. The snapshot can be queried in the DiskUsage field in the output parameter through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID. If this parameter is specified, the cloud disk is created based on the snapshot. The snapshot type must be a data disk snapshot. The snapshot can be queried in the DiskUsage field in the output parameter through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @param SnapshotId Snapshot ID. If this parameter is specified, the cloud disk is created based on the snapshot. The snapshot type must be a data disk snapshot. The snapshot can be queried in the DiskUsage field in the output parameter through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取If the number of cloud disks to be created is left empty, the default is 1. There is a limit to the maximum number of cloud disks that can be created for a single request. For more information, please see [CBS Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * @return DiskCount If the number of cloud disks to be created is left empty, the default is 1. There is a limit to the maximum number of cloud disks that can be created for a single request. For more information, please see [CBS Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置If the number of cloud disks to be created is left empty, the default is 1. There is a limit to the maximum number of cloud disks that can be created for a single request. For more information, please see [CBS Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     * @param DiskCount If the number of cloud disks to be created is left empty, the default is 1. There is a limit to the maximum number of cloud disks that can be created for a single request. For more information, please see [CBS Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for Tremendous SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     * @return ThroughputPerformance Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for Tremendous SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for Tremendous SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     * @param ThroughputPerformance Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for Tremendous SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取Cloud hard disk size (in GB). <br><li> If `SnapshotId` is passed, `DiskSize` cannot be passed. In this case, the size of the cloud disk is the size of the snapshot. <br><li>To pass `SnapshotId` and `DiskSize` at the same time, the size of the disk must be larger than or equal to the size of the snapshot. <br><li>For information about the size range of cloud disks, see cloud disk [Product Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @return DiskSize Cloud hard disk size (in GB). <br><li> If `SnapshotId` is passed, `DiskSize` cannot be passed. In this case, the size of the cloud disk is the size of the snapshot. <br><li>To pass `SnapshotId` and `DiskSize` at the same time, the size of the disk must be larger than or equal to the size of the snapshot. <br><li>For information about the size range of cloud disks, see cloud disk [Product Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud hard disk size (in GB). <br><li> If `SnapshotId` is passed, `DiskSize` cannot be passed. In this case, the size of the cloud disk is the size of the snapshot. <br><li>To pass `SnapshotId` and `DiskSize` at the same time, the size of the disk must be larger than or equal to the size of the snapshot. <br><li>For information about the size range of cloud disks, see cloud disk [Product Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @param DiskSize Cloud hard disk size (in GB). <br><li> If `SnapshotId` is passed, `DiskSize` cannot be passed. In this case, the size of the cloud disk is the size of the snapshot. <br><li>To pass `SnapshotId` and `DiskSize` at the same time, the size of the disk must be larger than or equal to the size of the snapshot. <br><li>For information about the size range of cloud disks, see cloud disk [Product Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取The default of optional parameter is False. When True is selected, the cloud disk will be created as a shareable cloud disk.
                     * @return Shareable The default of optional parameter is False. When True is selected, the cloud disk will be created as a shareable cloud disk.
                     */
                    bool GetShareable() const;

                    /**
                     * 设置The default of optional parameter is False. When True is selected, the cloud disk will be created as a shareable cloud disk.
                     * @param Shareable The default of optional parameter is False. When True is selected, the cloud disk will be created as a shareable cloud disk.
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取A string to ensure the idempotency of the request, which is generated by the client. Each request shall have a unique string with a maximum of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be ensured.
                     * @return ClientToken A string to ensure the idempotency of the request, which is generated by the client. Each request shall have a unique string with a maximum of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be ensured.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string to ensure the idempotency of the request, which is generated by the client. Each request shall have a unique string with a maximum of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be ensured.
                     * @param ClientToken A string to ensure the idempotency of the request, which is generated by the client. Each request shall have a unique string with a maximum of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be ensured.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取This parameter is used to create an encrypted cloud disk. Its value is always ENCRYPT.
                     * @return Encrypt This parameter is used to create an encrypted cloud disk. Its value is always ENCRYPT.
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置This parameter is used to create an encrypted cloud disk. Its value is always ENCRYPT.
                     * @param Encrypt This parameter is used to create an encrypted cloud disk. Its value is always ENCRYPT.
                     */
                    void SetEncrypt(const std::string& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     * @return DiskChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     * @param DiskChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Whether to delete the associated non-permanent snapshots when a cloud disk is terminated. Valid values: `0` (do not delete); `1` (delete). Default value: `0`. To find out whether a snapshot is permanent, you can call the `DescribeSnapshots` API and check the `IsPermanent` field (`true`: permanent; `false`: non-permanent) in its response.
                     * @return DeleteSnapshot Whether to delete the associated non-permanent snapshots when a cloud disk is terminated. Valid values: `0` (do not delete); `1` (delete). Default value: `0`. To find out whether a snapshot is permanent, you can call the `DescribeSnapshots` API and check the `IsPermanent` field (`true`: permanent; `false`: non-permanent) in its response.
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Whether to delete the associated non-permanent snapshots when a cloud disk is terminated. Valid values: `0` (do not delete); `1` (delete). Default value: `0`. To find out whether a snapshot is permanent, you can call the `DescribeSnapshots` API and check the `IsPermanent` field (`true`: permanent; `false`: non-permanent) in its response.
                     * @param DeleteSnapshot Whether to delete the associated non-permanent snapshots when a cloud disk is terminated. Valid values: `0` (do not delete); `1` (delete). Default value: `0`. To find out whether a snapshot is permanent, you can call the `DescribeSnapshots` API and check the `IsPermanent` field (`true`: permanent; `false`: non-permanent) in its response.
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                    /**
                     * 获取When a cloud disk is created, automatically initialize it and attach it to the specified mount point
                     * @return AutoMountConfiguration When a cloud disk is created, automatically initialize it and attach it to the specified mount point
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置When a cloud disk is created, automatically initialize it and attach it to the specified mount point
                     * @param AutoMountConfiguration When a cloud disk is created, automatically initialize it and attach it to the specified mount point
                     */
                    void SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration);

                    /**
                     * 判断参数 AutoMountConfiguration 是否已赋值
                     * @return AutoMountConfiguration 是否已赋值
                     */
                    bool AutoMountConfigurationHasBeenSet() const;

                private:

                    /**
                     * The location of the instance. The availability zone and the project that the instance belongs to can be specified using this parameter. If the project is not specified, it will be created under the default project.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Cloud disk billing method. POSTPAID_BY_HOUR: pay as you go by hour<br><li>CDCPAID: Billed together with the bound dedicated cluster<br>For information about the pricing of each method, see the cloud disk [Pricing Overview](https://intl.cloud.tencent.com/document/product/362/2413?from_cn_redirect=1).
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * The displayed name of the cloud disk. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Cloud disk binding tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Snapshot ID. If this parameter is specified, the cloud disk is created based on the snapshot. The snapshot type must be a data disk snapshot. The snapshot can be queried in the DiskUsage field in the output parameter through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * If the number of cloud disks to be created is left empty, the default is 1. There is a limit to the maximum number of cloud disks that can be created for a single request. For more information, please see [CBS Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Extra performance purchased for a cloud disk.<br>This optional parameter is only valid for Tremendous SSD (CLOUD_TSSD) and Enhanced SSD (CLOUD_HSSD).
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Cloud hard disk size (in GB). <br><li> If `SnapshotId` is passed, `DiskSize` cannot be passed. In this case, the size of the cloud disk is the size of the snapshot. <br><li>To pass `SnapshotId` and `DiskSize` at the same time, the size of the disk must be larger than or equal to the size of the snapshot. <br><li>For information about the size range of cloud disks, see cloud disk [Product Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * The default of optional parameter is False. When True is selected, the cloud disk will be created as a shareable cloud disk.
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * A string to ensure the idempotency of the request, which is generated by the client. Each request shall have a unique string with a maximum of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be ensured.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * This parameter is used to create an encrypted cloud disk. Its value is always ENCRYPT.
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk. 
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * Whether to delete the associated non-permanent snapshots when a cloud disk is terminated. Valid values: `0` (do not delete); `1` (delete). Default value: `0`. To find out whether a snapshot is permanent, you can call the `DescribeSnapshots` API and check the `IsPermanent` field (`true`: permanent; `false`: non-permanent) in its response.
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                    /**
                     * When a cloud disk is created, automatically initialize it and attach it to the specified mount point
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
