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
                     * 获取Cloud disk billing mode. <br>
<li>PREPAID: Prepaid by month.</li>
<li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.</li>
                     * @return DiskChargeType Cloud disk billing mode. <br>
<li>PREPAID: Prepaid by month.</li>
<li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.</li>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Cloud disk billing mode. <br>
<li>PREPAID: Prepaid by month.</li>
<li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.</li>
                     * @param _diskChargeType Cloud disk billing mode. <br>
<li>PREPAID: Prepaid by month.</li>
<li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.</li>
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
                     * 获取Hard disk media type. valid values: <ul> <li>CLOUD_PREMIUM: high-performance CLOUD block storage</li> <li>CLOUD_SSD: SSD CLOUD disk</li> <li>CLOUD_HSSD: enhanced SSD CLOUD disk</li> <li>CLOUD_TSSD: ultra-fast SSD cbs</li> </ul>.
                     * @return DiskType Hard disk media type. valid values: <ul> <li>CLOUD_PREMIUM: high-performance CLOUD block storage</li> <li>CLOUD_SSD: SSD CLOUD disk</li> <li>CLOUD_HSSD: enhanced SSD CLOUD disk</li> <li>CLOUD_TSSD: ultra-fast SSD cbs</li> </ul>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Hard disk media type. valid values: <ul> <li>CLOUD_PREMIUM: high-performance CLOUD block storage</li> <li>CLOUD_SSD: SSD CLOUD disk</li> <li>CLOUD_HSSD: enhanced SSD CLOUD disk</li> <li>CLOUD_TSSD: ultra-fast SSD cbs</li> </ul>.
                     * @param _diskType Hard disk media type. valid values: <ul> <li>CLOUD_PREMIUM: high-performance CLOUD block storage</li> <li>CLOUD_SSD: SSD CLOUD disk</li> <li>CLOUD_HSSD: enhanced SSD CLOUD disk</li> <li>CLOUD_TSSD: ultra-fast SSD cbs</li> </ul>.
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
                     * 获取Specifies the disk capacity in GiB. for the cloud disk size range, please refer to the product type of cloud block storage (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * @return DiskSize Specifies the disk capacity in GiB. for the cloud disk size range, please refer to the product type of cloud block storage (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the disk capacity in GiB. for the cloud disk size range, please refer to the product type of cloud block storage (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * @param _diskSize Specifies the disk capacity in GiB. for the cloud disk size range, please refer to the product type of cloud block storage (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
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
                     * 获取cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). default to the default project.
                     * @return ProjectId cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). default to the default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). default to the default project.
                     * @param _projectId cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). default to the default project.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Specifies the number of cloud block storage (cbs) disks to purchase. defaults to 1 if left blank.
                     * @return DiskCount Specifies the number of cloud block storage (cbs) disks to purchase. defaults to 1 if left blank.
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置Specifies the number of cloud block storage (cbs) disks to purchase. defaults to 1 if left blank.
                     * @param _diskCount Specifies the number of cloud block storage (cbs) disks to purchase. defaults to 1 if left blank.
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
                     * 获取Specifies the additional performance value of the CBS disk in MiB/s. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * @return ThroughputPerformance Specifies the additional performance value of the CBS disk in MiB/s. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Specifies the additional performance value of the CBS disk in MiB/s. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * @param _throughputPerformance Specifies the additional performance value of the CBS disk in MiB/s. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
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
                     * Cloud disk billing mode. <br>
<li>PREPAID: Prepaid by month.</li>
<li>POSTPAID_BY_HOUR: Hourly pay-as-you-go.</li>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Hard disk media type. valid values: <ul> <li>CLOUD_PREMIUM: high-performance CLOUD block storage</li> <li>CLOUD_SSD: SSD CLOUD disk</li> <li>CLOUD_HSSD: enhanced SSD CLOUD disk</li> <li>CLOUD_TSSD: ultra-fast SSD cbs</li> </ul>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies the disk capacity in GiB. for the cloud disk size range, please refer to the product type of cloud block storage (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). default to the default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the number of cloud block storage (cbs) disks to purchase. defaults to 1 if left blank.
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Specifies the additional performance value of the CBS disk in MiB/s. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Prepaid mode, that is, the settings for the monthly subscription-related parameters. through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk, whether to enable auto-renewal, and other attributes. this parameter is required for creating a prepaid cloud disk, but no need to specify it when creating an hourly postpaid cloud disk.
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
