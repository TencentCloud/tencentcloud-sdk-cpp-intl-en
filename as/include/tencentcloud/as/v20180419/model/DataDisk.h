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
                     * 获取Data disk type. See [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: Local disk<br><li>`LOCAL_SSD`: Local SSD disk<br><li>`CLOUD_BASIC`: HDD cloud disk<br><li>`CLOUD_PREMIUM`: Premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk<br><li>`CLOUD_HSSD`: Enhanced SSD<br><li>`CLOUD_TSSD`: Tremendous SSD<br><br>The default value should be the same as the `DiskType` field under `SystemDisk`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DiskType Data disk type. See [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: Local disk<br><li>`LOCAL_SSD`: Local SSD disk<br><li>`CLOUD_BASIC`: HDD cloud disk<br><li>`CLOUD_PREMIUM`: Premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk<br><li>`CLOUD_HSSD`: Enhanced SSD<br><li>`CLOUD_TSSD`: Tremendous SSD<br><br>The default value should be the same as the `DiskType` field under `SystemDisk`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type. See [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: Local disk<br><li>`LOCAL_SSD`: Local SSD disk<br><li>`CLOUD_BASIC`: HDD cloud disk<br><li>`CLOUD_PREMIUM`: Premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk<br><li>`CLOUD_HSSD`: Enhanced SSD<br><li>`CLOUD_TSSD`: Tremendous SSD<br><br>The default value should be the same as the `DiskType` field under `SystemDisk`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DiskType Data disk type. See [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: Local disk<br><li>`LOCAL_SSD`: Local SSD disk<br><li>`CLOUD_BASIC`: HDD cloud disk<br><li>`CLOUD_PREMIUM`: Premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk<br><li>`CLOUD_HSSD`: Enhanced SSD<br><li>`CLOUD_TSSD`: Tremendous SSD<br><br>The default value should be the same as the `DiskType` field under `SystemDisk`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [CVM Instance Configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [CVM Instance Configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [CVM Instance Configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiskSize Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [CVM Instance Configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Data disk snapshot ID, such as `snap-l8psqwnt`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotId Data disk snapshot ID, such as `snap-l8psqwnt`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Data disk snapshot ID, such as `snap-l8psqwnt`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SnapshotId Data disk snapshot ID, such as `snap-l8psqwnt`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether the data disk is terminated along with the termination of the associated CVM instance.  Values: <br><li>`TRUE` (only available for pay-as-you-go cloud disks that are billed by hour) and `FALSE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return DeleteWithInstance Specifies whether the data disk is terminated along with the termination of the associated CVM instance.  Values: <br><li>`TRUE` (only available for pay-as-you-go cloud disks that are billed by hour) and `FALSE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Specifies whether the data disk is terminated along with the termination of the associated CVM instance.  Values: <br><li>`TRUE` (only available for pay-as-you-go cloud disks that are billed by hour) and `FALSE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param DeleteWithInstance Specifies whether the data disk is terminated along with the termination of the associated CVM instance.  Values: <br><li>`TRUE` (only available for pay-as-you-go cloud disks that are billed by hour) and `FALSE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Data disk encryption. Valid values: <br><li>`TRUE`: Encrypted<br><li>`FALSE`: Not encrypted
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Encrypt Data disk encryption. Valid values: <br><li>`TRUE`: Encrypted<br><li>`FALSE`: Not encrypted
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Data disk encryption. Valid values: <br><li>`TRUE`: Encrypted<br><li>`FALSE`: Not encrypted
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Encrypt Data disk encryption. Valid values: <br><li>`TRUE`: Encrypted<br><li>`FALSE`: Not encrypted
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ThroughputPerformance Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ThroughputPerformance Cloud disk performance (MB/s). This parameter is used to purchase extra performance for the cloud disk. For details on the feature and limits, see [Enhanced SSD Performance](https://intl.cloud.tencent.com/document/product/362/51896?from_cn_redirect=1#. E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96 .E6.80.A7.E8.83.BD).
This feature is only available to enhanced SSD (`CLOUD_HSSD`) and tremendous SSD (`CLOUD_TSSD`) disks with a capacity greater than 460 GB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * Data disk type. See [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: Local disk<br><li>`LOCAL_SSD`: Local SSD disk<br><li>`CLOUD_BASIC`: HDD cloud disk<br><li>`CLOUD_PREMIUM`: Premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk<br><li>`CLOUD_HSSD`: Enhanced SSD<br><li>`CLOUD_TSSD`: Tremendous SSD<br><br>The default value should be the same as the `DiskType` field under `SystemDisk`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [CVM Instance Configuration](https://intl.cloud.tencent.com/document/product/213/2177?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Data disk snapshot ID, such as `snap-l8psqwnt`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Specifies whether the data disk is terminated along with the termination of the associated CVM instance.  Values: <br><li>`TRUE` (only available for pay-as-you-go cloud disks that are billed by hour) and `FALSE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Data disk encryption. Valid values: <br><li>`TRUE`: Encrypted<br><li>`FALSE`: Not encrypted
Note: This field may return `null`, indicating that no valid value can be obtained.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
