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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Package information.
                */
                class Bundle : public AbstractModel
                {
                public:
                    Bundle();
                    ~Bundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Package ID.
                     * @return BundleId Package ID.
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Package ID.
                     * @param BundleId Package ID.
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Memory size in GB.
                     * @return Memory Memory size in GB.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB.
                     * @param Memory Memory size in GB.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取System disk type.
Valid values: 
<li> LOCAL_BASIC: local disk</li><li> LOCAL_SSD: local SSD disk</li><li> CLOUD_BASIC: HDD cloud disk</li><li> CLOUD_SSD: SSD cloud disk</li><li> CLOUD_PREMIUM: Premium Cloud Storage</li>
                     * @return SystemDiskType System disk type.
Valid values: 
<li> LOCAL_BASIC: local disk</li><li> LOCAL_SSD: local SSD disk</li><li> CLOUD_BASIC: HDD cloud disk</li><li> CLOUD_SSD: SSD cloud disk</li><li> CLOUD_PREMIUM: Premium Cloud Storage</li>
                     */
                    std::string GetSystemDiskType() const;

                    /**
                     * 设置System disk type.
Valid values: 
<li> LOCAL_BASIC: local disk</li><li> LOCAL_SSD: local SSD disk</li><li> CLOUD_BASIC: HDD cloud disk</li><li> CLOUD_SSD: SSD cloud disk</li><li> CLOUD_PREMIUM: Premium Cloud Storage</li>
                     * @param SystemDiskType System disk type.
Valid values: 
<li> LOCAL_BASIC: local disk</li><li> LOCAL_SSD: local SSD disk</li><li> CLOUD_BASIC: HDD cloud disk</li><li> CLOUD_SSD: SSD cloud disk</li><li> CLOUD_PREMIUM: Premium Cloud Storage</li>
                     */
                    void SetSystemDiskType(const std::string& _systemDiskType);

                    /**
                     * 判断参数 SystemDiskType 是否已赋值
                     * @return SystemDiskType 是否已赋值
                     */
                    bool SystemDiskTypeHasBeenSet() const;

                    /**
                     * 获取System disk size.
                     * @return SystemDiskSize System disk size.
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置System disk size.
                     * @param SystemDiskSize System disk size.
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Monthly network traffic in Gb.
                     * @return MonthlyTraffic Monthly network traffic in Gb.
                     */
                    int64_t GetMonthlyTraffic() const;

                    /**
                     * 设置Monthly network traffic in Gb.
                     * @param MonthlyTraffic Monthly network traffic in Gb.
                     */
                    void SetMonthlyTraffic(const int64_t& _monthlyTraffic);

                    /**
                     * 判断参数 MonthlyTraffic 是否已赋值
                     * @return MonthlyTraffic 是否已赋值
                     */
                    bool MonthlyTrafficHasBeenSet() const;

                    /**
                     * 获取Whether Linux/Unix is supported.
                     * @return SupportLinuxUnixPlatform Whether Linux/Unix is supported.
                     */
                    bool GetSupportLinuxUnixPlatform() const;

                    /**
                     * 设置Whether Linux/Unix is supported.
                     * @param SupportLinuxUnixPlatform Whether Linux/Unix is supported.
                     */
                    void SetSupportLinuxUnixPlatform(const bool& _supportLinuxUnixPlatform);

                    /**
                     * 判断参数 SupportLinuxUnixPlatform 是否已赋值
                     * @return SupportLinuxUnixPlatform 是否已赋值
                     */
                    bool SupportLinuxUnixPlatformHasBeenSet() const;

                    /**
                     * 获取Whether Windows is supported.
                     * @return SupportWindowsPlatform Whether Windows is supported.
                     */
                    bool GetSupportWindowsPlatform() const;

                    /**
                     * 设置Whether Windows is supported.
                     * @param SupportWindowsPlatform Whether Windows is supported.
                     */
                    void SetSupportWindowsPlatform(const bool& _supportWindowsPlatform);

                    /**
                     * 判断参数 SupportWindowsPlatform 是否已赋值
                     * @return SupportWindowsPlatform 是否已赋值
                     */
                    bool SupportWindowsPlatformHasBeenSet() const;

                    /**
                     * 获取Current package unit price information.
                     * @return Price Current package unit price information.
                     */
                    Price GetPrice() const;

                    /**
                     * 设置Current package unit price information.
                     * @param Price Current package unit price information.
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return CPU Number of CPU cores.
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param CPU Number of CPU cores.
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth in Mbps.
                     * @return InternetMaxBandwidthOut Peak bandwidth in Mbps.
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Peak bandwidth in Mbps.
                     * @param InternetMaxBandwidthOut Peak bandwidth in Mbps.
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Network billing mode.
                     * @return InternetChargeType Network billing mode.
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing mode.
                     * @param InternetChargeType Network billing mode.
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取Package sale status. Valid values: AVAILABLE, SOLD_OUT
                     * @return BundleSalesState Package sale status. Valid values: AVAILABLE, SOLD_OUT
                     */
                    std::string GetBundleSalesState() const;

                    /**
                     * 设置Package sale status. Valid values: AVAILABLE, SOLD_OUT
                     * @param BundleSalesState Package sale status. Valid values: AVAILABLE, SOLD_OUT
                     */
                    void SetBundleSalesState(const std::string& _bundleSalesState);

                    /**
                     * 判断参数 BundleSalesState 是否已赋值
                     * @return BundleSalesState 是否已赋值
                     */
                    bool BundleSalesStateHasBeenSet() const;

                    /**
                     * 获取Bundle type. 
Valid values: 
<li>STARTER_BUNDLE: Starter bundle</li>
<li>GENERAL_BUNDLE: General bundle</li>
<li>ENTERPRISE_BUNDLE: Enterprise bundle</li>
<li>STORAGE_BUNDLE: Storage-optimized bundle</li>
<li>EXCLUSIVE_BUNDLE: Dedicated bundle</li>
<li>HK_EXCLUSIVE_BUNDLE: Hong Kong-dedicated bundle </li>
<li>CAREFREE_BUNDLE: Lighthouse Care bundle</li>
<li>BEFAST_BUNDLE: BeFast bundle </li>
                     * @return BundleType Bundle type. 
Valid values: 
<li>STARTER_BUNDLE: Starter bundle</li>
<li>GENERAL_BUNDLE: General bundle</li>
<li>ENTERPRISE_BUNDLE: Enterprise bundle</li>
<li>STORAGE_BUNDLE: Storage-optimized bundle</li>
<li>EXCLUSIVE_BUNDLE: Dedicated bundle</li>
<li>HK_EXCLUSIVE_BUNDLE: Hong Kong-dedicated bundle </li>
<li>CAREFREE_BUNDLE: Lighthouse Care bundle</li>
<li>BEFAST_BUNDLE: BeFast bundle </li>
                     */
                    std::string GetBundleType() const;

                    /**
                     * 设置Bundle type. 
Valid values: 
<li>STARTER_BUNDLE: Starter bundle</li>
<li>GENERAL_BUNDLE: General bundle</li>
<li>ENTERPRISE_BUNDLE: Enterprise bundle</li>
<li>STORAGE_BUNDLE: Storage-optimized bundle</li>
<li>EXCLUSIVE_BUNDLE: Dedicated bundle</li>
<li>HK_EXCLUSIVE_BUNDLE: Hong Kong-dedicated bundle </li>
<li>CAREFREE_BUNDLE: Lighthouse Care bundle</li>
<li>BEFAST_BUNDLE: BeFast bundle </li>
                     * @param BundleType Bundle type. 
Valid values: 
<li>STARTER_BUNDLE: Starter bundle</li>
<li>GENERAL_BUNDLE: General bundle</li>
<li>ENTERPRISE_BUNDLE: Enterprise bundle</li>
<li>STORAGE_BUNDLE: Storage-optimized bundle</li>
<li>EXCLUSIVE_BUNDLE: Dedicated bundle</li>
<li>HK_EXCLUSIVE_BUNDLE: Hong Kong-dedicated bundle </li>
<li>CAREFREE_BUNDLE: Lighthouse Care bundle</li>
<li>BEFAST_BUNDLE: BeFast bundle </li>
                     */
                    void SetBundleType(const std::string& _bundleType);

                    /**
                     * 判断参数 BundleType 是否已赋值
                     * @return BundleType 是否已赋值
                     */
                    bool BundleTypeHasBeenSet() const;

                    /**
                     * 获取Bundle type description 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return BundleTypeDescription Bundle type description 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBundleTypeDescription() const;

                    /**
                     * 设置Bundle type description 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param BundleTypeDescription Bundle type description 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    void SetBundleTypeDescription(const std::string& _bundleTypeDescription);

                    /**
                     * 判断参数 BundleTypeDescription 是否已赋值
                     * @return BundleTypeDescription 是否已赋值
                     */
                    bool BundleTypeDescriptionHasBeenSet() const;

                    /**
                     * 获取Package tag.
Valid values:
"ACTIVITY": promotional package
"NORMAL": regular package
"CAREFREE": carefree package
                     * @return BundleDisplayLabel Package tag.
Valid values:
"ACTIVITY": promotional package
"NORMAL": regular package
"CAREFREE": carefree package
                     */
                    std::string GetBundleDisplayLabel() const;

                    /**
                     * 设置Package tag.
Valid values:
"ACTIVITY": promotional package
"NORMAL": regular package
"CAREFREE": carefree package
                     * @param BundleDisplayLabel Package tag.
Valid values:
"ACTIVITY": promotional package
"NORMAL": regular package
"CAREFREE": carefree package
                     */
                    void SetBundleDisplayLabel(const std::string& _bundleDisplayLabel);

                    /**
                     * 判断参数 BundleDisplayLabel 是否已赋值
                     * @return BundleDisplayLabel 是否已赋值
                     */
                    bool BundleDisplayLabelHasBeenSet() const;

                private:

                    /**
                     * Package ID.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Memory size in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * System disk type.
Valid values: 
<li> LOCAL_BASIC: local disk</li><li> LOCAL_SSD: local SSD disk</li><li> CLOUD_BASIC: HDD cloud disk</li><li> CLOUD_SSD: SSD cloud disk</li><li> CLOUD_PREMIUM: Premium Cloud Storage</li>
                     */
                    std::string m_systemDiskType;
                    bool m_systemDiskTypeHasBeenSet;

                    /**
                     * System disk size.
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * Monthly network traffic in Gb.
                     */
                    int64_t m_monthlyTraffic;
                    bool m_monthlyTrafficHasBeenSet;

                    /**
                     * Whether Linux/Unix is supported.
                     */
                    bool m_supportLinuxUnixPlatform;
                    bool m_supportLinuxUnixPlatformHasBeenSet;

                    /**
                     * Whether Windows is supported.
                     */
                    bool m_supportWindowsPlatform;
                    bool m_supportWindowsPlatformHasBeenSet;

                    /**
                     * Current package unit price information.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Peak bandwidth in Mbps.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Network billing mode.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Package sale status. Valid values: AVAILABLE, SOLD_OUT
                     */
                    std::string m_bundleSalesState;
                    bool m_bundleSalesStateHasBeenSet;

                    /**
                     * Bundle type. 
Valid values: 
<li>STARTER_BUNDLE: Starter bundle</li>
<li>GENERAL_BUNDLE: General bundle</li>
<li>ENTERPRISE_BUNDLE: Enterprise bundle</li>
<li>STORAGE_BUNDLE: Storage-optimized bundle</li>
<li>EXCLUSIVE_BUNDLE: Dedicated bundle</li>
<li>HK_EXCLUSIVE_BUNDLE: Hong Kong-dedicated bundle </li>
<li>CAREFREE_BUNDLE: Lighthouse Care bundle</li>
<li>BEFAST_BUNDLE: BeFast bundle </li>
                     */
                    std::string m_bundleType;
                    bool m_bundleTypeHasBeenSet;

                    /**
                     * Bundle type description 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bundleTypeDescription;
                    bool m_bundleTypeDescriptionHasBeenSet;

                    /**
                     * Package tag.
Valid values:
"ACTIVITY": promotional package
"NORMAL": regular package
"CAREFREE": carefree package
                     */
                    std::string m_bundleDisplayLabel;
                    bool m_bundleDisplayLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_
