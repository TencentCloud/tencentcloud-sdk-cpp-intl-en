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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDisks request structure.
                */
                class InquiryPriceCreateDisksRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDisksRequest();
                    ~InquiryPriceCreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk billing mode. <br><li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.
                     * @return DiskChargeType Cloud disk billing mode. <br><li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Cloud disk billing mode. <br><li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.
                     * @param DiskChargeType Cloud disk billing mode. <br><li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     * @return DiskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     * @param DiskType Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk size in GB. For the value range, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @return DiskSize Cloud disk size in GB. For the value range, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size in GB. For the value range, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     * @param DiskSize Cloud disk size in GB. For the value range, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the cloud disk belongs.
                     * @return ProjectId ID of the project to which the cloud disk belongs.
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the cloud disk belongs.
                     * @param ProjectId ID of the project to which the cloud disk belongs.
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Number of cloud disks to be purchased. If it is not specified, `1` will be used by default.
                     * @return DiskCount Number of cloud disks to be purchased. If it is not specified, `1` will be used by default.
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置Number of cloud disks to be purchased. If it is not specified, `1` will be used by default.
                     * @param DiskCount Number of cloud disks to be purchased. If it is not specified, `1` will be used by default.
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Extra performance in MB/s purchased for a cloud disk.<br>This parameter is only valid for Enhanced SSD (CLOUD_HSSD) and ulTra SSD (CLOUD_TSSD).
                     * @return ThroughputPerformance Extra performance in MB/s purchased for a cloud disk.<br>This parameter is only valid for Enhanced SSD (CLOUD_HSSD) and ulTra SSD (CLOUD_TSSD).
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Extra performance in MB/s purchased for a cloud disk.<br>This parameter is only valid for Enhanced SSD (CLOUD_HSSD) and ulTra SSD (CLOUD_TSSD).
                     * @param ThroughputPerformance Extra performance in MB/s purchased for a cloud disk.<br>This parameter is only valid for Enhanced SSD (CLOUD_HSSD) and ulTra SSD (CLOUD_TSSD).
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

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
                     * 获取Specifies the cloud disk backup point quota.
                     * @return DiskBackupQuota Specifies the cloud disk backup point quota.
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Specifies the cloud disk backup point quota.
                     * @param DiskBackupQuota Specifies the cloud disk backup point quota.
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * Cloud disk billing mode. <br><li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Cloud disk media type. Valid values: <br><li>CLOUD_BASIC: HDD Cloud Storage<br><li>CLOUD_PREMIUM: Premium Cloud Disk<br><li>CLOUD_SSD: SSD<br><li>CLOUD_HSSD: Enhanced SSD<br><li>CLOUD_TSSD: ulTra SSD.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk size in GB. For the value range, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID of the project to which the cloud disk belongs.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of cloud disks to be purchased. If it is not specified, `1` will be used by default.
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Extra performance in MB/s purchased for a cloud disk.<br>This parameter is only valid for Enhanced SSD (CLOUD_HSSD) and ulTra SSD (CLOUD_TSSD).
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Relevant parameter settings for the prepaid mode (i.e., monthly subscription). The monthly subscription cloud disk purchase attributes such as usage period and whether or not auto-renewal is set up can be specified using this parameter. <br>This parameter is required when creating a prepaid cloud disk. This parameter is not required when creating an hourly postpaid cloud disk.
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

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

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_
