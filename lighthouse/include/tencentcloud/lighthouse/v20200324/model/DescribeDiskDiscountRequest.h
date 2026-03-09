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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskDiscount request structure.
                */
                class DescribeDiskDiscountRequest : public AbstractModel
                {
                public:
                    DescribeDiskDiscountRequest();
                    ~DescribeDiskDiscountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLOUD disk type. valid values: CLOUD_PREMIUM: high-performance CLOUD block storage, CLOUD_SSD: SSD CLOUD disk.
                     * @return DiskType CLOUD disk type. valid values: CLOUD_PREMIUM: high-performance CLOUD block storage, CLOUD_SSD: SSD CLOUD disk.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置CLOUD disk type. valid values: CLOUD_PREMIUM: high-performance CLOUD block storage, CLOUD_SSD: SSD CLOUD disk.
                     * @param _diskType CLOUD disk type. valid values: CLOUD_PREMIUM: high-performance CLOUD block storage, CLOUD_SSD: SSD CLOUD disk.
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
                     * 获取CBS disk capacity, unit: GB.
                     * @return DiskSize CBS disk capacity, unit: GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置CBS disk capacity, unit: GB.
                     * @param _diskSize CBS disk capacity, unit: GB.
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
                     * 获取Specify the cloud disk backup point quota. by default, no backup point quota is set if not specified. currently only support setting no quota or a cloud disk backup point quota within [0 - 500].
                     * @return DiskBackupQuota Specify the cloud disk backup point quota. by default, no backup point quota is set if not specified. currently only support setting no quota or a cloud disk backup point quota within [0 - 500].
                     * 
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Specify the cloud disk backup point quota. by default, no backup point quota is set if not specified. currently only support setting no quota or a cloud disk backup point quota within [0 - 500].
                     * @param _diskBackupQuota Specify the cloud disk backup point quota. by default, no backup point quota is set if not specified. currently only support setting no quota or a cloud disk backup point quota within [0 - 500].
                     * 
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * CLOUD disk type. valid values: CLOUD_PREMIUM: high-performance CLOUD block storage, CLOUD_SSD: SSD CLOUD disk.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * CBS disk capacity, unit: GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Specify the cloud disk backup point quota. by default, no backup point quota is set if not specified. currently only support setting no quota or a cloud disk backup point quota within [0 - 500].
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_
