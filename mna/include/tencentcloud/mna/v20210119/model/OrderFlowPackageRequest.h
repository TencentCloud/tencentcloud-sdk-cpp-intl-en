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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ORDERFLOWPACKAGEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ORDERFLOWPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * OrderFlowPackage request structure.
                */
                class OrderFlowPackageRequest : public AbstractModel
                {
                public:
                    OrderFlowPackageRequest();
                    ~OrderFlowPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @return PackageType Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @param _packageType Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Device ID list bound to the data transfer plan. Number of bundled instances depends on the specification tiers of the plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @return DeviceList Device ID list bound to the data transfer plan. Number of bundled instances depends on the specification tiers of the plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置Device ID list bound to the data transfer plan. Number of bundled instances depends on the specification tiers of the plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @param _deviceList Device ID list bound to the data transfer plan. Number of bundled instances depends on the specification tiers of the plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取Whether the service is automatically renewed conflicts with traffic truncation. You can only enable one option.
                     * @return AutoRenewFlag Whether the service is automatically renewed conflicts with traffic truncation. You can only enable one option.
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Whether the service is automatically renewed conflicts with traffic truncation. You can only enable one option.
                     * @param _autoRenewFlag Whether the service is automatically renewed conflicts with traffic truncation. You can only enable one option.
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Region flag. 0: Chinese mainland, 1: outside the Chinese mainland
                     * @return PackageRegion Region flag. 0: Chinese mainland, 1: outside the Chinese mainland
                     * 
                     */
                    int64_t GetPackageRegion() const;

                    /**
                     * 设置Region flag. 0: Chinese mainland, 1: outside the Chinese mainland
                     * @param _packageRegion Region flag. 0: Chinese mainland, 1: outside the Chinese mainland
                     * 
                     */
                    void SetPackageRegion(const int64_t& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取Whether traffic truncation is enabled. This option conflicts with auto renewal.
                     * @return FlowTruncFlag Whether traffic truncation is enabled. This option conflicts with auto renewal.
                     * 
                     */
                    bool GetFlowTruncFlag() const;

                    /**
                     * 设置Whether traffic truncation is enabled. This option conflicts with auto renewal.
                     * @param _flowTruncFlag Whether traffic truncation is enabled. This option conflicts with auto renewal.
                     * 
                     */
                    void SetFlowTruncFlag(const bool& _flowTruncFlag);

                    /**
                     * 判断参数 FlowTruncFlag 是否已赋值
                     * @return FlowTruncFlag 是否已赋值
                     * 
                     */
                    bool FlowTruncFlagHasBeenSet() const;

                    /**
                     * 获取Whether to automatically select voucher. Default false.
Selection strategy for multiple vouchers: Deduct vouchers by this priority - voucher that can offset the total amount of the Payment Order, voucher with the earliest Expiration, voucher with the maximum deductible amount, voucher with the minimum balance, cash voucher. Only one voucher can be deducted at most.
                     * @return AutoVoucher Whether to automatically select voucher. Default false.
Selection strategy for multiple vouchers: Deduct vouchers by this priority - voucher that can offset the total amount of the Payment Order, voucher with the earliest Expiration, voucher with the maximum deductible amount, voucher with the minimum balance, cash voucher. Only one voucher can be deducted at most.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select voucher. Default false.
Selection strategy for multiple vouchers: Deduct vouchers by this priority - voucher that can offset the total amount of the Payment Order, voucher with the earliest Expiration, voucher with the maximum deductible amount, voucher with the minimum balance, cash voucher. Only one voucher can be deducted at most.
                     * @param _autoVoucher Whether to automatically select voucher. Default false.
Selection strategy for multiple vouchers: Deduct vouchers by this priority - voucher that can offset the total amount of the Payment Order, voucher with the earliest Expiration, voucher with the maximum deductible amount, voucher with the minimum balance, cash voucher. Only one voucher can be deducted at most.
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Designated voucher ID. This parameter is invalid when selecting voucher automatically. Only one voucher can be input.
Note: If the designated voucher does not meet the order deduction conditions, proceed with normal payment without deducting the voucher.
                     * @return VoucherIds Designated voucher ID. This parameter is invalid when selecting voucher automatically. Only one voucher can be input.
Note: If the designated voucher does not meet the order deduction conditions, proceed with normal payment without deducting the voucher.
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Designated voucher ID. This parameter is invalid when selecting voucher automatically. Only one voucher can be input.
Note: If the designated voucher does not meet the order deduction conditions, proceed with normal payment without deducting the voucher.
                     * @param _voucherIds Designated voucher ID. This parameter is invalid when selecting voucher automatically. Only one voucher can be input.
Note: If the designated voucher does not meet the order deduction conditions, proceed with normal payment without deducting the voucher.
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Device ID list bound to the data transfer plan. Number of bundled instances depends on the specification tiers of the plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * Whether the service is automatically renewed conflicts with traffic truncation. You can only enable one option.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Region flag. 0: Chinese mainland, 1: outside the Chinese mainland
                     */
                    int64_t m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Whether traffic truncation is enabled. This option conflicts with auto renewal.
                     */
                    bool m_flowTruncFlag;
                    bool m_flowTruncFlagHasBeenSet;

                    /**
                     * Whether to automatically select voucher. Default false.
Selection strategy for multiple vouchers: Deduct vouchers by this priority - voucher that can offset the total amount of the Payment Order, voucher with the earliest Expiration, voucher with the maximum deductible amount, voucher with the minimum balance, cash voucher. Only one voucher can be deducted at most.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Designated voucher ID. This parameter is invalid when selecting voucher automatically. Only one voucher can be input.
Note: If the designated voucher does not meet the order deduction conditions, proceed with normal payment without deducting the voucher.
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ORDERFLOWPACKAGEREQUEST_H_
