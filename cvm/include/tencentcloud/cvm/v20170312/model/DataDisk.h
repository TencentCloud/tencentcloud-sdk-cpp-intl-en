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
                     * 获取Data disk size, unit: GiB. the minimum adjustment step size is 10 GiB. the value ranges of different data disk types vary. for specific limitations, see the storage overview (https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). the default value is 0, which means no data disk purchase. for more restrictions, see the product document.
                     * @return DiskSize Data disk size, unit: GiB. the minimum adjustment step size is 10 GiB. the value ranges of different data disk types vary. for specific limitations, see the storage overview (https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). the default value is 0, which means no data disk purchase. for more restrictions, see the product document.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size, unit: GiB. the minimum adjustment step size is 10 GiB. the value ranges of different data disk types vary. for specific limitations, see the storage overview (https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). the default value is 0, which means no data disk purchase. for more restrictions, see the product document.
                     * @param _diskSize Data disk size, unit: GiB. the minimum adjustment step size is 10 GiB. the value ranges of different data disk types vary. for specific limitations, see the storage overview (https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). the default value is 0, which means no data disk purchase. for more restrictions, see the product document.
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
                     * 获取Specifies the data disk type. for restrictions on data disk types, refer to [storage overview](https://www.tencentcloud.com/document/product/213/4952?from_cn_redirect=1). valid values: <br /><li>LOCAL_BASIC: LOCAL disk</li> <li>LOCAL_SSD: LOCAL SSD</li><li>LOCAL_NVME: LOCAL NVME disk, which is closely related to InstanceType and cannot be specified</li><li>LOCAL_PRO: LOCAL HDD, which is closely related to InstanceType and cannot be specified</li><li>cloud_BASIC: BASIC cloud disk</li><li>cloud_PREMIUM: high-performance cloud block storage</li><li>cloud_SSD: SSD cloud disk</li><li>cloud_HSSD: enhanced SSD cloud disk</li> <li>cloud_TSSD: ultra-fast SSD cbs</li><li>cloud_BSSD: universal SSD cloud disk</li><br />default: LOCAL_BASIC.<br/><br />this parameter is invalid for the `ResizeInstanceDisk` api.
                     * @return DiskType Specifies the data disk type. for restrictions on data disk types, refer to [storage overview](https://www.tencentcloud.com/document/product/213/4952?from_cn_redirect=1). valid values: <br /><li>LOCAL_BASIC: LOCAL disk</li> <li>LOCAL_SSD: LOCAL SSD</li><li>LOCAL_NVME: LOCAL NVME disk, which is closely related to InstanceType and cannot be specified</li><li>LOCAL_PRO: LOCAL HDD, which is closely related to InstanceType and cannot be specified</li><li>cloud_BASIC: BASIC cloud disk</li><li>cloud_PREMIUM: high-performance cloud block storage</li><li>cloud_SSD: SSD cloud disk</li><li>cloud_HSSD: enhanced SSD cloud disk</li> <li>cloud_TSSD: ultra-fast SSD cbs</li><li>cloud_BSSD: universal SSD cloud disk</li><br />default: LOCAL_BASIC.<br/><br />this parameter is invalid for the `ResizeInstanceDisk` api.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Specifies the data disk type. for restrictions on data disk types, refer to [storage overview](https://www.tencentcloud.com/document/product/213/4952?from_cn_redirect=1). valid values: <br /><li>LOCAL_BASIC: LOCAL disk</li> <li>LOCAL_SSD: LOCAL SSD</li><li>LOCAL_NVME: LOCAL NVME disk, which is closely related to InstanceType and cannot be specified</li><li>LOCAL_PRO: LOCAL HDD, which is closely related to InstanceType and cannot be specified</li><li>cloud_BASIC: BASIC cloud disk</li><li>cloud_PREMIUM: high-performance cloud block storage</li><li>cloud_SSD: SSD cloud disk</li><li>cloud_HSSD: enhanced SSD cloud disk</li> <li>cloud_TSSD: ultra-fast SSD cbs</li><li>cloud_BSSD: universal SSD cloud disk</li><br />default: LOCAL_BASIC.<br/><br />this parameter is invalid for the `ResizeInstanceDisk` api.
                     * @param _diskType Specifies the data disk type. for restrictions on data disk types, refer to [storage overview](https://www.tencentcloud.com/document/product/213/4952?from_cn_redirect=1). valid values: <br /><li>LOCAL_BASIC: LOCAL disk</li> <li>LOCAL_SSD: LOCAL SSD</li><li>LOCAL_NVME: LOCAL NVME disk, which is closely related to InstanceType and cannot be specified</li><li>LOCAL_PRO: LOCAL HDD, which is closely related to InstanceType and cannot be specified</li><li>cloud_BASIC: BASIC cloud disk</li><li>cloud_PREMIUM: high-performance cloud block storage</li><li>cloud_SSD: SSD cloud disk</li><li>cloud_HSSD: enhanced SSD cloud disk</li> <li>cloud_TSSD: ultra-fast SSD cbs</li><li>cloud_BSSD: universal SSD cloud disk</li><br />default: LOCAL_BASIC.<br/><br />this parameter is invalid for the `ResizeInstanceDisk` api.
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
                     * 获取Specifies the data disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * @return DiskId Specifies the data disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Specifies the data disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * @param _diskId Specifies the data disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Whether the data disk is terminated with the instance. value range: <li>true: when the instance is terminated, the data disk is also terminated. only hourly postpaid cloud disks are supported. <li>false: when the instance is terminated, the data disk is retained. <br>default value: true <br>currently, this parameter is only used for the API `RunInstances`.
                     * @return DeleteWithInstance Whether the data disk is terminated with the instance. value range: <li>true: when the instance is terminated, the data disk is also terminated. only hourly postpaid cloud disks are supported. <li>false: when the instance is terminated, the data disk is retained. <br>default value: true <br>currently, this parameter is only used for the API `RunInstances`.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether the data disk is terminated with the instance. value range: <li>true: when the instance is terminated, the data disk is also terminated. only hourly postpaid cloud disks are supported. <li>false: when the instance is terminated, the data disk is retained. <br>default value: true <br>currently, this parameter is only used for the API `RunInstances`.
                     * @param _deleteWithInstance Whether the data disk is terminated with the instance. value range: <li>true: when the instance is terminated, the data disk is also terminated. only hourly postpaid cloud disks are supported. <li>false: when the instance is terminated, the data disk is retained. <br>default value: true <br>currently, this parameter is only used for the API `RunInstances`.
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
                     * 获取Data disk snapshot ID. the size of the selected data disk snapshot must be less than the data disk size.
                     * @return SnapshotId Data disk snapshot ID. the size of the selected data disk snapshot must be less than the data disk size.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Data disk snapshot ID. the size of the selected data disk snapshot must be less than the data disk size.
                     * @param _snapshotId Data disk snapshot ID. the size of the selected data disk snapshot must be less than the data disk size.
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
                     * 获取Specifies whether the data disk is encrypted. value range: <li>true: encrypted</li> <li>false: unencrypted</li><br/> default value: false<br/> this parameter is currently only used for the `RunInstances` api.
                     * @return Encrypt Specifies whether the data disk is encrypted. value range: <li>true: encrypted</li> <li>false: unencrypted</li><br/> default value: false<br/> this parameter is currently only used for the `RunInstances` api.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Specifies whether the data disk is encrypted. value range: <li>true: encrypted</li> <li>false: unencrypted</li><br/> default value: false<br/> this parameter is currently only used for the `RunInstances` api.
                     * @param _encrypt Specifies whether the data disk is encrypted. value range: <li>true: encrypted</li> <li>false: unencrypted</li><br/> default value: false<br/> this parameter is currently only used for the `RunInstances` api.
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
                     * 获取Custom CMK ID, value is UUID or similar to kms-abcd1234. used for encrypted cloud disk.

This parameter is currently only used for the `RunInstances` api.
Note: This field may return null, indicating that no valid value is found.
                     * @return KmsKeyId Custom CMK ID, value is UUID or similar to kms-abcd1234. used for encrypted cloud disk.

This parameter is currently only used for the `RunInstances` api.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Custom CMK ID, value is UUID or similar to kms-abcd1234. used for encrypted cloud disk.

This parameter is currently only used for the `RunInstances` api.
Note: This field may return null, indicating that no valid value is found.
                     * @param _kmsKeyId Custom CMK ID, value is UUID or similar to kms-abcd1234. used for encrypted cloud disk.

This parameter is currently only used for the `RunInstances` api.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Cloud disk performance (unit: MiB/s). specifies additional performance for cloud disks.
Currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD).
Note: This field may return null, indicating that no valid value is found.
                     * @return ThroughputPerformance Cloud disk performance (unit: MiB/s). specifies additional performance for cloud disks.
Currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD).
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance (unit: MiB/s). specifies additional performance for cloud disks.
Currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD).
Note: This field may return null, indicating that no valid value is found.
                     * @param _throughputPerformance Cloud disk performance (unit: MiB/s). specifies additional performance for cloud disks.
Currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD).
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetThroughputPerformance(const int64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取Specifies the dedicated cluster ID belonging to.
Note: This field may return null, indicating that no valid value is found.
                     * @return CdcId Specifies the dedicated cluster ID belonging to.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置Specifies the dedicated cluster ID belonging to.
Note: This field may return null, indicating that no valid value is found.
                     * @param _cdcId Specifies the dedicated cluster ID belonging to.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Burstable performance.

<B>Note: this field is in beta test.</b>.
                     * @return BurstPerformance Burstable performance.

<B>Note: this field is in beta test.</b>.
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置Burstable performance.

<B>Note: this field is in beta test.</b>.
                     * @param _burstPerformance Burstable performance.

<B>Note: this field is in beta test.</b>.
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
                     * 获取Disk name, with a length not exceeding 128 characters.
                     * @return DiskName Disk name, with a length not exceeding 128 characters.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Disk name, with a length not exceeding 128 characters.
                     * @param _diskName Disk name, with a length not exceeding 128 characters.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                private:

                    /**
                     * Data disk size, unit: GiB. the minimum adjustment step size is 10 GiB. the value ranges of different data disk types vary. for specific limitations, see the storage overview (https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). the default value is 0, which means no data disk purchase. for more restrictions, see the product document.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Specifies the data disk type. for restrictions on data disk types, refer to [storage overview](https://www.tencentcloud.com/document/product/213/4952?from_cn_redirect=1). valid values: <br /><li>LOCAL_BASIC: LOCAL disk</li> <li>LOCAL_SSD: LOCAL SSD</li><li>LOCAL_NVME: LOCAL NVME disk, which is closely related to InstanceType and cannot be specified</li><li>LOCAL_PRO: LOCAL HDD, which is closely related to InstanceType and cannot be specified</li><li>cloud_BASIC: BASIC cloud disk</li><li>cloud_PREMIUM: high-performance cloud block storage</li><li>cloud_SSD: SSD cloud disk</li><li>cloud_HSSD: enhanced SSD cloud disk</li> <li>cloud_TSSD: ultra-fast SSD cbs</li><li>cloud_BSSD: universal SSD cloud disk</li><br />default: LOCAL_BASIC.<br/><br />this parameter is invalid for the `ResizeInstanceDisk` api.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies the data disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Whether the data disk is terminated with the instance. value range: <li>true: when the instance is terminated, the data disk is also terminated. only hourly postpaid cloud disks are supported. <li>false: when the instance is terminated, the data disk is retained. <br>default value: true <br>currently, this parameter is only used for the API `RunInstances`.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Data disk snapshot ID. the size of the selected data disk snapshot must be less than the data disk size.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Specifies whether the data disk is encrypted. value range: <li>true: encrypted</li> <li>false: unencrypted</li><br/> default value: false<br/> this parameter is currently only used for the `RunInstances` api.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Custom CMK ID, value is UUID or similar to kms-abcd1234. used for encrypted cloud disk.

This parameter is currently only used for the `RunInstances` api.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Cloud disk performance (unit: MiB/s). specifies additional performance for cloud disks.
Currently only supports extreme cbs (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD).
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Specifies the dedicated cluster ID belonging to.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Burstable performance.

<B>Note: this field is in beta test.</b>.
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * Disk name, with a length not exceeding 128 characters.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DATADISK_H_
