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
                     * 获取Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     * @return DiskChargeType Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     * @param _diskChargeType Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
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
                     * 获取Type of cloud disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     * @return DiskType Type of cloud disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Type of cloud disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     * @param _diskType Type of cloud disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
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
                     * 获取Minimum increment of cloud disk size adjustment in GB.
Note: This field might return null, indicating that no valid values can be obtained.
                     * @return StepSize Minimum increment of cloud disk size adjustment in GB.
Note: This field might return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepSize() const;

                    /**
                     * 设置Minimum increment of cloud disk size adjustment in GB.
Note: This field might return null, indicating that no valid values can be obtained.
                     * @param _stepSize Minimum increment of cloud disk size adjustment in GB.
Note: This field might return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud disk type. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @return DiskUsage Cloud disk type. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud disk type. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @param _diskUsage Cloud disk type. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
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
                     * 获取The minimum configurable cloud disk size (in GB).
                     * @return MinDiskSize The minimum configurable cloud disk size (in GB).
                     * 
                     */
                    uint64_t GetMinDiskSize() const;

                    /**
                     * 设置The minimum configurable cloud disk size (in GB).
                     * @param _minDiskSize The minimum configurable cloud disk size (in GB).
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
                     * 获取The maximum configurable cloud disk size (in GB).
                     * @return MaxDiskSize The maximum configurable cloud disk size (in GB).
                     * 
                     */
                    uint64_t GetMaxDiskSize() const;

                    /**
                     * 设置The maximum configurable cloud disk size (in GB).
                     * @param _maxDiskSize The maximum configurable cloud disk size (in GB).
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
                     * 获取Price of a monthly subscribed or pay-as-you-go cloud disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Price Price of a monthly subscribed or pay-as-you-go cloud disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置Price of a monthly subscribed or pay-as-you-go cloud disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _price Price of a monthly subscribed or pay-as-you-go cloud disk.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
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
                     * Type of cloud disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Minimum increment of cloud disk size adjustment in GB.
Note: This field might return null, indicating that no valid values can be obtained.
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
                     * Cloud disk type. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * The minimum configurable cloud disk size (in GB).
                     */
                    uint64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * The maximum configurable cloud disk size (in GB).
                     */
                    uint64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * Price of a monthly subscribed or pay-as-you-go cloud disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_
