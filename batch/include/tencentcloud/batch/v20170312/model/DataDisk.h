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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DATADISK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
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
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     * @param _diskSize Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
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
                     * 获取Data disk type. For restrictions on data disk types, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values:<br/>
<li>
  LOCAL_BASIC: local disk.<br/>
  <li>
    LOCAL_SSD: local SSD.<br/>
    <li>
      LOCAL_NVME: local NVMe disk, which is closely related to InstanceType, and cannot be specified.<br/>
      <li>
        LOCAL_PRO: local HDD, which is closely related to InstanceType, and cannot be specified.<br/>
        <li>
          CLOUD_BASIC: basic cloud disk.<br/>
          <li>
            CLOUD_PREMIUM: premium cloud disk.<br/>
            <li>
              CLOUD_SSD: cloud SSD.<br />
              <li>
                CLOUD_HSSD: enhanced SSD.<br/>
                <li>
                  CLOUD_TSSD: tremendous SSD.<br/>
                  <li>
                    CLOUD_BSSD: balanced SSD.<br/><br/>Default value: LOCAL_BASIC.<br/><br/>This parameter is invalid for the `ResizeInstanceDisk` API.
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * @return DiskType Data disk type. For restrictions on data disk types, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values:<br/>
<li>
  LOCAL_BASIC: local disk.<br/>
  <li>
    LOCAL_SSD: local SSD.<br/>
    <li>
      LOCAL_NVME: local NVMe disk, which is closely related to InstanceType, and cannot be specified.<br/>
      <li>
        LOCAL_PRO: local HDD, which is closely related to InstanceType, and cannot be specified.<br/>
        <li>
          CLOUD_BASIC: basic cloud disk.<br/>
          <li>
            CLOUD_PREMIUM: premium cloud disk.<br/>
            <li>
              CLOUD_SSD: cloud SSD.<br />
              <li>
                CLOUD_HSSD: enhanced SSD.<br/>
                <li>
                  CLOUD_TSSD: tremendous SSD.<br/>
                  <li>
                    CLOUD_BSSD: balanced SSD.<br/><br/>Default value: LOCAL_BASIC.<br/><br/>This parameter is invalid for the `ResizeInstanceDisk` API.
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type. For restrictions on data disk types, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values:<br/>
<li>
  LOCAL_BASIC: local disk.<br/>
  <li>
    LOCAL_SSD: local SSD.<br/>
    <li>
      LOCAL_NVME: local NVMe disk, which is closely related to InstanceType, and cannot be specified.<br/>
      <li>
        LOCAL_PRO: local HDD, which is closely related to InstanceType, and cannot be specified.<br/>
        <li>
          CLOUD_BASIC: basic cloud disk.<br/>
          <li>
            CLOUD_PREMIUM: premium cloud disk.<br/>
            <li>
              CLOUD_SSD: cloud SSD.<br />
              <li>
                CLOUD_HSSD: enhanced SSD.<br/>
                <li>
                  CLOUD_TSSD: tremendous SSD.<br/>
                  <li>
                    CLOUD_BSSD: balanced SSD.<br/><br/>Default value: LOCAL_BASIC.<br/><br/>This parameter is invalid for the `ResizeInstanceDisk` API.
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * @param _diskType Data disk type. For restrictions on data disk types, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values:<br/>
<li>
  LOCAL_BASIC: local disk.<br/>
  <li>
    LOCAL_SSD: local SSD.<br/>
    <li>
      LOCAL_NVME: local NVMe disk, which is closely related to InstanceType, and cannot be specified.<br/>
      <li>
        LOCAL_PRO: local HDD, which is closely related to InstanceType, and cannot be specified.<br/>
        <li>
          CLOUD_BASIC: basic cloud disk.<br/>
          <li>
            CLOUD_PREMIUM: premium cloud disk.<br/>
            <li>
              CLOUD_SSD: cloud SSD.<br />
              <li>
                CLOUD_HSSD: enhanced SSD.<br/>
                <li>
                  CLOUD_TSSD: tremendous SSD.<br/>
                  <li>
                    CLOUD_BSSD: balanced SSD.<br/><br/>Default value: LOCAL_BASIC.<br/><br/>This parameter is invalid for the `ResizeInstanceDisk` API.
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
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
                     * 获取Data disk ID. Note that it’s not available for `LOCAL_BASIC` and `LOCAL_SSD` disks.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * @return DiskId Data disk ID. Note that it’s not available for `LOCAL_BASIC` and `LOCAL_SSD` disks.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Data disk ID. Note that it’s not available for `LOCAL_BASIC` and `LOCAL_SSD` disks.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * @param _diskId Data disk ID. Note that it’s not available for `LOCAL_BASIC` and `LOCAL_SSD` disks.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
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
                     * 获取Whether a data disk is terminated when the associated CVM instance is terminated. Valid values:
<li>TRUE: The data disk is terminated when the associated CVM instance is terminated. This only supports pay-as-you-go cloud disks that are billed by hour.</li>
<li>
  FALSE: The data disk is retained when the associated CVM instance is terminated.<br/>
  Default value: TRUE.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * @return DeleteWithInstance Whether a data disk is terminated when the associated CVM instance is terminated. Valid values:
<li>TRUE: The data disk is terminated when the associated CVM instance is terminated. This only supports pay-as-you-go cloud disks that are billed by hour.</li>
<li>
  FALSE: The data disk is retained when the associated CVM instance is terminated.<br/>
  Default value: TRUE.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether a data disk is terminated when the associated CVM instance is terminated. Valid values:
<li>TRUE: The data disk is terminated when the associated CVM instance is terminated. This only supports pay-as-you-go cloud disks that are billed by hour.</li>
<li>
  FALSE: The data disk is retained when the associated CVM instance is terminated.<br/>
  Default value: TRUE.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * @param _deleteWithInstance Whether a data disk is terminated when the associated CVM instance is terminated. Valid values:
<li>TRUE: The data disk is terminated when the associated CVM instance is terminated. This only supports pay-as-you-go cloud disks that are billed by hour.</li>
<li>
  FALSE: The data disk is retained when the associated CVM instance is terminated.<br/>
  Default value: TRUE.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     * @return SnapshotId Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
                     * @param _snapshotId Data disk snapshot ID. The size of the selected data disk snapshot must be smaller than that of the data disk.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Whether a data disk is encrypted. Valid values:
<li>true: encrypted.</li>
<li>
  false: not encrypted.<br/>
  Default value: false.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * @return Encrypt Whether a data disk is encrypted. Valid values:
<li>true: encrypted.</li>
<li>
  false: not encrypted.<br/>
  Default value: false.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether a data disk is encrypted. Valid values:
<li>true: encrypted.</li>
<li>
  false: not encrypted.<br/>
  Default value: false.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
                     * @param _encrypt Whether a data disk is encrypted. Valid values:
<li>true: encrypted.</li>
<li>
  false: not encrypted.<br/>
  Default value: false.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KmsKeyId ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _kmsKeyId ID of the custom CMK in the format of UUID or “kms-abcd1234”. This parameter is used to encrypt cloud disks.

Currently, this parameter is only used in the `RunInstances` API.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ThroughputPerformance Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _throughputPerformance Cloud disk performance, in MB/s
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CdcId ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cdcId ID of the dedicated cluster to which the instance belongs.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Burst performance.

 <b>Note: This field is in beta test.</b>
Note: This field may return null, indicating that no valid value is found.
                     * @return BurstPerformance Burst performance.

 <b>Note: This field is in beta test.</b>
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置Burst performance.

 <b>Note: This field is in beta test.</b>
Note: This field may return null, indicating that no valid value is found.
                     * @param _burstPerformance Burst performance.

 <b>Note: This field is in beta test.</b>
Note: This field may return null, indicating that no valid value is found.
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
                     * Data disk size (in GB). The minimum adjustment increment is 10 GB. The value range varies by data disk type. For more information on limits, see [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). The default value is 0, indicating that no data disk is purchased. For more information, see the product documentation.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Data disk type. For restrictions on data disk types, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Valid values:<br/>
<li>
  LOCAL_BASIC: local disk.<br/>
  <li>
    LOCAL_SSD: local SSD.<br/>
    <li>
      LOCAL_NVME: local NVMe disk, which is closely related to InstanceType, and cannot be specified.<br/>
      <li>
        LOCAL_PRO: local HDD, which is closely related to InstanceType, and cannot be specified.<br/>
        <li>
          CLOUD_BASIC: basic cloud disk.<br/>
          <li>
            CLOUD_PREMIUM: premium cloud disk.<br/>
            <li>
              CLOUD_SSD: cloud SSD.<br />
              <li>
                CLOUD_HSSD: enhanced SSD.<br/>
                <li>
                  CLOUD_TSSD: tremendous SSD.<br/>
                  <li>
                    CLOUD_BSSD: balanced SSD.<br/><br/>Default value: LOCAL_BASIC.<br/><br/>This parameter is invalid for the `ResizeInstanceDisk` API.
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Data disk ID. Note that it’s not available for `LOCAL_BASIC` and `LOCAL_SSD` disks.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Whether a data disk is terminated when the associated CVM instance is terminated. Valid values:
<li>TRUE: The data disk is terminated when the associated CVM instance is terminated. This only supports pay-as-you-go cloud disks that are billed by hour.</li>
<li>
  FALSE: The data disk is retained when the associated CVM instance is terminated.<br/>
  Default value: TRUE.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
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
                     * Whether a data disk is encrypted. Valid values:
<li>true: encrypted.</li>
<li>
  false: not encrypted.<br/>
  Default value: false.<br/>
  This parameter is currently used only in the `RunInstances` API.
</li>
Note: This field may return null, indicating that no valid value is found.
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

                    /**
                     * Burst performance.

 <b>Note: This field is in beta test.</b>
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DATADISK_H_
