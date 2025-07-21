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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Configuration information of data disk in launch configuration. If this parameter is not specified, no data disk will be purchased by default. You can specify only one data disk when purchasing it.
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data disk type. for restrictions on data disk types, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * @return DiskType Data disk type. for restrictions on data disk types, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type. for restrictions on data disk types, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * @param _diskType Data disk type. for restrictions on data disk types, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
The default value is consistent with the system disk type (SystemDisk.DiskType).
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
                     * 获取Data disk size, in GB. the value range varies according to the data disk type. for specific restrictions, see [CVM instance configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). default value: 0, which means no data disk is purchased. for more restrictions, see the [product documentation](https://intl.cloud.tencent.com/document/product/362/5145?from_cn_redirect=1).
                     * @return DiskSize Data disk size, in GB. the value range varies according to the data disk type. for specific restrictions, see [CVM instance configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). default value: 0, which means no data disk is purchased. for more restrictions, see the [product documentation](https://intl.cloud.tencent.com/document/product/362/5145?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size, in GB. the value range varies according to the data disk type. for specific restrictions, see [CVM instance configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). default value: 0, which means no data disk is purchased. for more restrictions, see the [product documentation](https://intl.cloud.tencent.com/document/product/362/5145?from_cn_redirect=1).
                     * @param _diskSize Data disk size, in GB. the value range varies according to the data disk type. for specific restrictions, see [CVM instance configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). default value: 0, which means no data disk is purchased. for more restrictions, see the [product documentation](https://intl.cloud.tencent.com/document/product/362/5145?from_cn_redirect=1).
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
                     * 获取The data disk snapshot ID can be obtained through the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotId The data disk snapshot ID can be obtained through the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置The data disk snapshot ID can be obtained through the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotId The data disk snapshot ID can be obtained through the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) api.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the data disk is terminated along with the instance. Valid values:
<li>TRUE: When the instance is terminated, the data disk is also terminated. This option is only supported for hourly postpaid cloud disks.</li>
<li>FALSE: When the instance is terminated, the data disk is retained.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeleteWithInstance Whether the data disk is terminated along with the instance. Valid values:
<li>TRUE: When the instance is terminated, the data disk is also terminated. This option is only supported for hourly postpaid cloud disks.</li>
<li>FALSE: When the instance is terminated, the data disk is retained.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether the data disk is terminated along with the instance. Valid values:
<li>TRUE: When the instance is terminated, the data disk is also terminated. This option is only supported for hourly postpaid cloud disks.</li>
<li>FALSE: When the instance is terminated, the data disk is retained.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deleteWithInstance Whether the data disk is terminated along with the instance. Valid values:
<li>TRUE: When the instance is terminated, the data disk is also terminated. This option is only supported for hourly postpaid cloud disks.</li>
<li>FALSE: When the instance is terminated, the data disk is retained.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Whether the data disk is encrypted. Valid values:
<li>TRUE: Encrypted.</li>
<li>FALSE: Not encrypted.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Encrypt Whether the data disk is encrypted. Valid values:
<li>TRUE: Encrypted.</li>
<li>FALSE: Not encrypted.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether the data disk is encrypted. Valid values:
<li>TRUE: Encrypted.</li>
<li>FALSE: Not encrypted.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encrypt Whether the data disk is encrypted. Valid values:
<li>TRUE: Encrypted.</li>
<li>FALSE: Not encrypted.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ThroughputPerformance Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _throughputPerformance Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Burst performance. specifies whether to enable burst performance. default value is false. this parameter only supports ultra-fast CLOUD disk (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity > 460GB.
Note: this feature is in beta test and requires a ticket to be submitted for usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BurstPerformance Burst performance. specifies whether to enable burst performance. default value is false. this parameter only supports ultra-fast CLOUD disk (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity > 460GB.
Note: this feature is in beta test and requires a ticket to be submitted for usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置Burst performance. specifies whether to enable burst performance. default value is false. this parameter only supports ultra-fast CLOUD disk (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity > 460GB.
Note: this feature is in beta test and requires a ticket to be submitted for usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _burstPerformance Burst performance. specifies whether to enable burst performance. default value is false. this parameter only supports ultra-fast CLOUD disk (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity > 460GB.
Note: this feature is in beta test and requires a ticket to be submitted for usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBurstPerformance(const bool& _burstPerformance);

                    /**
                     * 判断参数 BurstPerformance 是否已赋值
                     * @return BurstPerformance 是否已赋值
                     * 
                     */
                    bool BurstPerformanceHasBeenSet() const;

                private:

                    /**
                     * Data disk type. for restrictions on data disk types, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
The default value is consistent with the system disk type (SystemDisk.DiskType).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Data disk size, in GB. the value range varies according to the data disk type. for specific restrictions, see [CVM instance configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). default value: 0, which means no data disk is purchased. for more restrictions, see the [product documentation](https://intl.cloud.tencent.com/document/product/362/5145?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * The data disk snapshot ID can be obtained through the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) api.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Whether the data disk is terminated along with the instance. Valid values:
<li>TRUE: When the instance is terminated, the data disk is also terminated. This option is only supported for hourly postpaid cloud disks.</li>
<li>FALSE: When the instance is terminated, the data disk is retained.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Whether the data disk is encrypted. Valid values:
<li>TRUE: Encrypted.</li>
<li>FALSE: Not encrypted.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Burst performance. specifies whether to enable burst performance. default value is false. this parameter only supports ultra-fast CLOUD disk (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity > 460GB.
Note: this feature is in beta test and requires a ticket to be submitted for usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
