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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Price.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Cloud disk configuration.
                */
                class DiskConfig : public AbstractModel
                {
                public:
                    DiskConfig();
                    ~DiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the configuration is available.
                     * @return Available Whether the configuration is available.
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置Whether the configuration is available.
                     * @param _available Whether the configuration is available.
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><br><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * @return DiskChargeType Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><br><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><br><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * @param _diskChargeType Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><br><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
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
                     * 获取The [Availability Region](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) of the cloud drive.
                     * @return Zone The [Availability Region](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) of the cloud drive.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The [Availability Region](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) of the cloud drive.
                     * @param _zone The [Availability Region](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) of the cloud drive.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance model series. For more information, please see [Instance Models](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceFamily Instance model series. For more information, please see [Instance Models](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance model series. For more information, please see [Instance Models](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value was found.
                     * @param _instanceFamily Instance model series. For more information, please see [Instance Models](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Cloud disk media type. valid values: <br>.
CLOUD_BASIC: specifies the BASIC CLOUD disk.
CLOUD_PREMIUM: indicates high-performance CLOUD block storage.
CLOUD_BSSD: indicates a universal type SSD CLOUD disk.
CLOUD_SSD: indicates SSD CLOUD disk.
CLOUD_HSSD: indicates the enhanced SSD CLOUD disk.
CLOUD_TSSD: indicates ultra-fast ssd cbs.
                     * @return DiskType Cloud disk media type. valid values: <br>.
CLOUD_BASIC: specifies the BASIC CLOUD disk.
CLOUD_PREMIUM: indicates high-performance CLOUD block storage.
CLOUD_BSSD: indicates a universal type SSD CLOUD disk.
CLOUD_SSD: indicates SSD CLOUD disk.
CLOUD_HSSD: indicates the enhanced SSD CLOUD disk.
CLOUD_TSSD: indicates ultra-fast ssd cbs.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type. valid values: <br>.
CLOUD_BASIC: specifies the BASIC CLOUD disk.
CLOUD_PREMIUM: indicates high-performance CLOUD block storage.
CLOUD_BSSD: indicates a universal type SSD CLOUD disk.
CLOUD_SSD: indicates SSD CLOUD disk.
CLOUD_HSSD: indicates the enhanced SSD CLOUD disk.
CLOUD_TSSD: indicates ultra-fast ssd cbs.
                     * @param _diskType Cloud disk media type. valid values: <br>.
CLOUD_BASIC: specifies the BASIC CLOUD disk.
CLOUD_PREMIUM: indicates high-performance CLOUD block storage.
CLOUD_BSSD: indicates a universal type SSD CLOUD disk.
CLOUD_SSD: indicates SSD CLOUD disk.
CLOUD_HSSD: indicates the enhanced SSD CLOUD disk.
CLOUD_TSSD: indicates ultra-fast ssd cbs.
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
                     * 获取Specifies the minimum step size for disk size change in GiB.
                     * @return StepSize Specifies the minimum step size for disk size change in GiB.
                     * 
                     */
                    uint64_t GetStepSize() const;

                    /**
                     * 设置Specifies the minimum step size for disk size change in GiB.
                     * @param _stepSize Specifies the minimum step size for disk size change in GiB.
                     * 
                     */
                    void SetStepSize(const uint64_t& _stepSize);

                    /**
                     * 判断参数 StepSize 是否已赋值
                     * @return StepSize 是否已赋值
                     * 
                     */
                    bool StepSizeHasBeenSet() const;

                    /**
                     * 获取Additional performance range.
Note: This field might return null, indicating that no valid values can be obtained.
                     * @return ExtraPerformanceRange Additional performance range.
Note: This field might return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetExtraPerformanceRange() const;

                    /**
                     * 设置Additional performance range.
Note: This field might return null, indicating that no valid values can be obtained.
                     * @param _extraPerformanceRange Additional performance range.
Note: This field might return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraPerformanceRange(const std::vector<int64_t>& _extraPerformanceRange);

                    /**
                     * 判断参数 ExtraPerformanceRange 是否已赋值
                     * @return ExtraPerformanceRange 是否已赋值
                     * 
                     */
                    bool ExtraPerformanceRangeHasBeenSet() const;

                    /**
                     * 获取Instance model.
Note: This field may return null, indicating that no valid value was found.
                     * @return DeviceClass Instance model.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置Instance model.
Note: This field may return null, indicating that no valid value was found.
                     * @param _deviceClass Instance model.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><br><li>DATA_DISK: DATA DISK.</li>.
                     * @return DiskUsage Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><br><li>DATA_DISK: DATA DISK.</li>.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><br><li>DATA_DISK: DATA DISK.</li>.
                     * @param _diskUsage Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><br><li>DATA_DISK: DATA DISK.</li>.
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Specifies the minimum configurable cloud disk size in GiB.
                     * @return MinDiskSize Specifies the minimum configurable cloud disk size in GiB.
                     * 
                     */
                    uint64_t GetMinDiskSize() const;

                    /**
                     * 设置Specifies the minimum configurable cloud disk size in GiB.
                     * @param _minDiskSize Specifies the minimum configurable cloud disk size in GiB.
                     * 
                     */
                    void SetMinDiskSize(const uint64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum configurable cloud disk size in GiB.
                     * @return MaxDiskSize Specifies the maximum configurable cloud disk size in GiB.
                     * 
                     */
                    uint64_t GetMaxDiskSize() const;

                    /**
                     * 设置Specifies the maximum configurable cloud disk size in GiB.
                     * @param _maxDiskSize Specifies the maximum configurable cloud disk size in GiB.
                     * 
                     */
                    void SetMaxDiskSize(const uint64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取Price of a prepaid or postpaid cloud disk.
                     * @return Price Price of a prepaid or postpaid cloud disk.
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置Price of a prepaid or postpaid cloud disk.
                     * @param _price Price of a prepaid or postpaid cloud disk.
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * Whether the configuration is available.
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><br><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * The [Availability Region](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) of the cloud drive.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance model series. For more information, please see [Instance Models](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Cloud disk media type. valid values: <br>.
CLOUD_BASIC: specifies the BASIC CLOUD disk.
CLOUD_PREMIUM: indicates high-performance CLOUD block storage.
CLOUD_BSSD: indicates a universal type SSD CLOUD disk.
CLOUD_SSD: indicates SSD CLOUD disk.
CLOUD_HSSD: indicates the enhanced SSD CLOUD disk.
CLOUD_TSSD: indicates ultra-fast ssd cbs.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies the minimum step size for disk size change in GiB.
                     */
                    uint64_t m_stepSize;
                    bool m_stepSizeHasBeenSet;

                    /**
                     * Additional performance range.
Note: This field might return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_extraPerformanceRange;
                    bool m_extraPerformanceRangeHasBeenSet;

                    /**
                     * Instance model.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><br><li>DATA_DISK: DATA DISK.</li>.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Specifies the minimum configurable cloud disk size in GiB.
                     */
                    uint64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * Specifies the maximum configurable cloud disk size in GiB.
                     */
                    uint64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * Price of a prepaid or postpaid cloud disk.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_
