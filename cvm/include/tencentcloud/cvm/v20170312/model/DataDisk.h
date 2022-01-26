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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DATADISK_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes data disk information.
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     * @return DiskSize Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     * @param DiskSize Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Data disk type. For more information about limits on different data disk types, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values: <br><li>LOCAL_BASIC: local disk<br><li>LOCAL_SSD: local SSD disk<br><li>LOCAL_NVME: local NVME disk, specified in the `InstanceType`<br><li>LOCAL_PRO: local HDD disk, specified in the `InstanceType`<br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD<br><br>Default value: LOCAL_BASIC.<br><br>This parameter is invalid for the `ResizeInstanceDisk` API.
                     * @return DiskType Data disk type. For more information about limits on different data disk types, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values: <br><li>LOCAL_BASIC: local disk<br><li>LOCAL_SSD: local SSD disk<br><li>LOCAL_NVME: local NVME disk, specified in the `InstanceType`<br><li>LOCAL_PRO: local HDD disk, specified in the `InstanceType`<br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD<br><br>Default value: LOCAL_BASIC.<br><br>This parameter is invalid for the `ResizeInstanceDisk` API.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type. For more information about limits on different data disk types, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values: <br><li>LOCAL_BASIC: local disk<br><li>LOCAL_SSD: local SSD disk<br><li>LOCAL_NVME: local NVME disk, specified in the `InstanceType`<br><li>LOCAL_PRO: local HDD disk, specified in the `InstanceType`<br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD<br><br>Default value: LOCAL_BASIC.<br><br>This parameter is invalid for the `ResizeInstanceDisk` API.
                     * @param DiskType Data disk type. For more information about limits on different data disk types, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values: <br><li>LOCAL_BASIC: local disk<br><li>LOCAL_SSD: local SSD disk<br><li>LOCAL_NVME: local NVME disk, specified in the `InstanceType`<br><li>LOCAL_PRO: local HDD disk, specified in the `InstanceType`<br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD<br><br>Default value: LOCAL_BASIC.<br><br>This parameter is invalid for the `ResizeInstanceDisk` API.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Data disk ID. Data disks of the type `LOCAL_BASIC` or `LOCAL_SSD` do not have IDs and do not support this parameter.
                     * @return DiskId Data disk ID. Data disks of the type `LOCAL_BASIC` or `LOCAL_SSD` do not have IDs and do not support this parameter.
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Data disk ID. Data disks of the type `LOCAL_BASIC` or `LOCAL_SSD` do not have IDs and do not support this parameter.
                     * @param DiskId Data disk ID. Data disks of the type `LOCAL_BASIC` or `LOCAL_SSD` do not have IDs and do not support this parameter.
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Whether to terminate the data disk when its CVM is terminated. Valid values:
<li>TRUE: terminate the data disk when its CVM is terminated. This value only supports pay-as-you-go cloud disks billed on an hourly basis.
<li>FALSE: retain the data disk when its CVM is terminated.<br>
Default value: TRUE<br>
Currently this parameter is only used in the `RunInstances` API.
Note: This field may return null, indicating that no valid value is found.
                     * @return DeleteWithInstance Whether to terminate the data disk when its CVM is terminated. Valid values:
<li>TRUE: terminate the data disk when its CVM is terminated. This value only supports pay-as-you-go cloud disks billed on an hourly basis.
<li>FALSE: retain the data disk when its CVM is terminated.<br>
Default value: TRUE<br>
Currently this parameter is only used in the `RunInstances` API.
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether to terminate the data disk when its CVM is terminated. Valid values:
<li>TRUE: terminate the data disk when its CVM is terminated. This value only supports pay-as-you-go cloud disks billed on an hourly basis.
<li>FALSE: retain the data disk when its CVM is terminated.<br>
Default value: TRUE<br>
Currently this parameter is only used in the `RunInstances` API.
Note: This field may return null, indicating that no valid value is found.
                     * @param DeleteWithInstance Whether to terminate the data disk when its CVM is terminated. Valid values:
<li>TRUE: terminate the data disk when its CVM is terminated. This value only supports pay-as-you-go cloud disks billed on an hourly basis.
<li>FALSE: retain the data disk when its CVM is terminated.<br>
Default value: TRUE<br>
Currently this parameter is only used in the `RunInstances` API.
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     * @return SnapshotId Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     * @param SnapshotId Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether the data disk is encrypted. Valid values: 
<li>TRUE: encrypted
<li>FALSE: not encrypted<br>
Default value: FALSE<br>
This parameter is only used with `RunInstances`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Encrypt Specifies whether the data disk is encrypted. Valid values: 
<li>TRUE: encrypted
<li>FALSE: not encrypted<br>
Default value: FALSE<br>
This parameter is only used with `RunInstances`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Specifies whether the data disk is encrypted. Valid values: 
<li>TRUE: encrypted
<li>FALSE: not encrypted<br>
Default value: FALSE<br>
This parameter is only used with `RunInstances`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param Encrypt Specifies whether the data disk is encrypted. Valid values: 
<li>TRUE: encrypted
<li>FALSE: not encrypted<br>
Default value: FALSE<br>
This parameter is only used with `RunInstances`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KmsKeyId ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param KmsKeyId ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ThroughputPerformance Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ThroughputPerformance Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetThroughputPerformance(const int64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CdcId ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CdcId ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Data disk type. For more information about limits on different data disk types, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values: <br><li>LOCAL_BASIC: local disk<br><li>LOCAL_SSD: local SSD disk<br><li>LOCAL_NVME: local NVME disk, specified in the `InstanceType`<br><li>LOCAL_PRO: local HDD disk, specified in the `InstanceType`<br><li>CLOUD_BASIC: HDD cloud disk<br><li>CLOUD_PREMIUM: Premium Cloud Storage<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: Tremendous SSD<br><br>Default value: LOCAL_BASIC.<br><br>This parameter is invalid for the `ResizeInstanceDisk` API.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Data disk ID. Data disks of the type `LOCAL_BASIC` or `LOCAL_SSD` do not have IDs and do not support this parameter.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Whether to terminate the data disk when its CVM is terminated. Valid values:
<li>TRUE: terminate the data disk when its CVM is terminated. This value only supports pay-as-you-go cloud disks billed on an hourly basis.
<li>FALSE: retain the data disk when its CVM is terminated.<br>
Default value: TRUE<br>
Currently this parameter is only used in the `RunInstances` API.
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Specifies whether the data disk is encrypted. Valid values: 
<li>TRUE: encrypted
<li>FALSE: not encrypted<br>
Default value: FALSE<br>
This parameter is only used with `RunInstances`.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DATADISK_H_
