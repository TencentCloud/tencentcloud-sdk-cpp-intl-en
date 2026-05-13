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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDiskExtraPerformance request structure.
                */
                class ModifyDiskExtraPerformanceRequest : public AbstractModel
                {
                public:
                    ModifyDiskExtraPerformanceRequest();
                    ~ModifyDiskExtraPerformanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the hard disk performance of the additional CBS purchase in MiB/s.
                     * @return ThroughputPerformance Specifies the hard disk performance of the additional CBS purchase in MiB/s.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Specifies the hard disk performance of the additional CBS purchase in MiB/s.
                     * @param _throughputPerformance Specifies the hard disk performance of the additional CBS purchase in MiB/s.
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
                     * 获取The CLOUD disk ID for which extra performance needs to be purchased. it can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * @return DiskId The CLOUD disk ID for which extra performance needs to be purchased. it can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置The CLOUD disk ID for which extra performance needs to be purchased. it can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * @param _diskId The CLOUD disk ID for which extra performance needs to be purchased. it can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the hard disk performance of the additional CBS purchase in MiB/s.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * The CLOUD disk ID for which extra performance needs to be purchased. it can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. extra performance is only supported for enhanced SSD (CLOUD_HSSD) and ultra-fast SSD (CLOUD_TSSD) CBS disks exceeding 460GiB in size.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_
