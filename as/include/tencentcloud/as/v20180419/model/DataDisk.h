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
                     * 获取<p>Data disk type. For detailed restrictions on data disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>CLOUD_BSSD: universal SSD cloud disk</li>The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * @return DiskType <p>Data disk type. For detailed restrictions on data disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>CLOUD_BSSD: universal SSD cloud disk</li>The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Data disk type. For detailed restrictions on data disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>CLOUD_BSSD: universal SSD cloud disk</li>The default value is consistent with the system disk type (SystemDisk.DiskType).
                     * @param _diskType <p>Data disk type. For detailed restrictions on data disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>CLOUD_BSSD: universal SSD cloud disk</li>The default value is consistent with the system disk type (SystemDisk.DiskType).
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
                     * 获取<p>Data disk size, in GB. The value range varies according to the data disk type. For specific restrictions, see <a href="https://www.tencentcloud.com/document/product/213/2177?from_cn_redirect=1">CVM instance configuration</a>. Default value: 0, which means that no data disk is purchased. For more restrictions, see the <a href="https://www.tencentcloud.com/document/product/362/5145?from_cn_redirect=1">product documentation</a>.</p>
                     * @return DiskSize <p>Data disk size, in GB. The value range varies according to the data disk type. For specific restrictions, see <a href="https://www.tencentcloud.com/document/product/213/2177?from_cn_redirect=1">CVM instance configuration</a>. Default value: 0, which means that no data disk is purchased. For more restrictions, see the <a href="https://www.tencentcloud.com/document/product/362/5145?from_cn_redirect=1">product documentation</a>.</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>Data disk size, in GB. The value range varies according to the data disk type. For specific restrictions, see <a href="https://www.tencentcloud.com/document/product/213/2177?from_cn_redirect=1">CVM instance configuration</a>. Default value: 0, which means that no data disk is purchased. For more restrictions, see the <a href="https://www.tencentcloud.com/document/product/362/5145?from_cn_redirect=1">product documentation</a>.</p>
                     * @param _diskSize <p>Data disk size, in GB. The value range varies according to the data disk type. For specific restrictions, see <a href="https://www.tencentcloud.com/document/product/213/2177?from_cn_redirect=1">CVM instance configuration</a>. Default value: 0, which means that no data disk is purchased. For more restrictions, see the <a href="https://www.tencentcloud.com/document/product/362/5145?from_cn_redirect=1">product documentation</a>.</p>
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
                     * 获取<p>Data disk snapshot ID, obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1">DescribeSnapshots</a> API.</p>
                     * @return SnapshotId <p>Data disk snapshot ID, obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1">DescribeSnapshots</a> API.</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>Data disk snapshot ID, obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1">DescribeSnapshots</a> API.</p>
                     * @param _snapshotId <p>Data disk snapshot ID, obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1">DescribeSnapshots</a> API.</p>
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
                     * 获取<p>Whether the data disk is destroyed with the instance. Value ranges from:</p><li>TRUE: When the instance is terminated, destroy the data disk. Only hourly postpaid cloud disks are supported.</li><li>FALSE: When the instance is terminated, retain the data disk.</li>
                     * @return DeleteWithInstance <p>Whether the data disk is destroyed with the instance. Value ranges from:</p><li>TRUE: When the instance is terminated, destroy the data disk. Only hourly postpaid cloud disks are supported.</li><li>FALSE: When the instance is terminated, retain the data disk.</li>
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置<p>Whether the data disk is destroyed with the instance. Value ranges from:</p><li>TRUE: When the instance is terminated, destroy the data disk. Only hourly postpaid cloud disks are supported.</li><li>FALSE: When the instance is terminated, retain the data disk.</li>
                     * @param _deleteWithInstance <p>Whether the data disk is destroyed with the instance. Value ranges from:</p><li>TRUE: When the instance is terminated, destroy the data disk. Only hourly postpaid cloud disks are supported.</li><li>FALSE: When the instance is terminated, retain the data disk.</li>
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
                     * 获取<p>Whether to encrypt the data disk. TRUE means encrypted, FALSE means not encrypted; the specific disk type, region, and KMS rules are validated by CVM.</p>
                     * @return Encrypt <p>Whether to encrypt the data disk. TRUE means encrypted, FALSE means not encrypted; the specific disk type, region, and KMS rules are validated by CVM.</p>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>Whether to encrypt the data disk. TRUE means encrypted, FALSE means not encrypted; the specific disk type, region, and KMS rules are validated by CVM.</p>
                     * @param _encrypt <p>Whether to encrypt the data disk. TRUE means encrypted, FALSE means not encrypted; the specific disk type, region, and KMS rules are validated by CVM.</p>
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
                     * 获取<p>Cloud disk performance, unit: MB/s. Using this parameter can purchase additional performance for cloud disks. For feature introduction and type limitations, see: <a href="https://www.tencentcloud.com/document/product/362/51896?from_cn_redirect=1#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">enhanced SSD cloud disk additional performance note</a>.<br>Currently only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD cloud disks (CLOUD_HSSD) with capacity &gt; 460 GB.</p>
                     * @return ThroughputPerformance <p>Cloud disk performance, unit: MB/s. Using this parameter can purchase additional performance for cloud disks. For feature introduction and type limitations, see: <a href="https://www.tencentcloud.com/document/product/362/51896?from_cn_redirect=1#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">enhanced SSD cloud disk additional performance note</a>.<br>Currently only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD cloud disks (CLOUD_HSSD) with capacity &gt; 460 GB.</p>
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>Cloud disk performance, unit: MB/s. Using this parameter can purchase additional performance for cloud disks. For feature introduction and type limitations, see: <a href="https://www.tencentcloud.com/document/product/362/51896?from_cn_redirect=1#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">enhanced SSD cloud disk additional performance note</a>.<br>Currently only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD cloud disks (CLOUD_HSSD) with capacity &gt; 460 GB.</p>
                     * @param _throughputPerformance <p>Cloud disk performance, unit: MB/s. Using this parameter can purchase additional performance for cloud disks. For feature introduction and type limitations, see: <a href="https://www.tencentcloud.com/document/product/362/51896?from_cn_redirect=1#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">enhanced SSD cloud disk additional performance note</a>.<br>Currently only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD cloud disks (CLOUD_HSSD) with capacity &gt; 460 GB.</p>
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
                     * 获取<p>Burst performance. Whether to enable burst performance. The default value is false. Currently, this parameter only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity greater than 460 GB.<br>Note: In beta test. Requires ticket submission before usage.</p>
                     * @return BurstPerformance <p>Burst performance. Whether to enable burst performance. The default value is false. Currently, this parameter only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity greater than 460 GB.<br>Note: In beta test. Requires ticket submission before usage.</p>
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置<p>Burst performance. Whether to enable burst performance. The default value is false. Currently, this parameter only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity greater than 460 GB.<br>Note: In beta test. Requires ticket submission before usage.</p>
                     * @param _burstPerformance <p>Burst performance. Whether to enable burst performance. The default value is false. Currently, this parameter only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity greater than 460 GB.<br>Note: In beta test. Requires ticket submission before usage.</p>
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
                     * 获取<p>KMS Key ID used for data disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * @return KmsKeyId <p>KMS Key ID used for data disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS Key ID used for data disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * @param _kmsKeyId <p>KMS Key ID used for data disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>Data disk type. For detailed restrictions on data disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>CLOUD_BSSD: universal SSD cloud disk</li>The default value is consistent with the system disk type (SystemDisk.DiskType).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Data disk size, in GB. The value range varies according to the data disk type. For specific restrictions, see <a href="https://www.tencentcloud.com/document/product/213/2177?from_cn_redirect=1">CVM instance configuration</a>. Default value: 0, which means that no data disk is purchased. For more restrictions, see the <a href="https://www.tencentcloud.com/document/product/362/5145?from_cn_redirect=1">product documentation</a>.</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Data disk snapshot ID, obtain this parameter through the <a href="https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1">DescribeSnapshots</a> API.</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>Whether the data disk is destroyed with the instance. Value ranges from:</p><li>TRUE: When the instance is terminated, destroy the data disk. Only hourly postpaid cloud disks are supported.</li><li>FALSE: When the instance is terminated, retain the data disk.</li>
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * <p>Whether to encrypt the data disk. TRUE means encrypted, FALSE means not encrypted; the specific disk type, region, and KMS rules are validated by CVM.</p>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>Cloud disk performance, unit: MB/s. Using this parameter can purchase additional performance for cloud disks. For feature introduction and type limitations, see: <a href="https://www.tencentcloud.com/document/product/362/51896?from_cn_redirect=1#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">enhanced SSD cloud disk additional performance note</a>.<br>Currently only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD cloud disks (CLOUD_HSSD) with capacity &gt; 460 GB.</p>
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * <p>Burst performance. Whether to enable burst performance. The default value is false. Currently, this parameter only supports Extreme CBS (CLOUD_TSSD) and enhanced SSD CLOUD disk (CLOUD_HSSD) with capacity greater than 460 GB.<br>Note: In beta test. Requires ticket submission before usage.</p>
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * <p>KMS Key ID used for data disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
