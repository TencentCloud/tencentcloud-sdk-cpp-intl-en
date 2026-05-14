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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_

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
                * OrderPerLicense request structure.
                */
                class OrderPerLicenseRequest : public AbstractModel
                {
                public:
                    OrderPerLicenseRequest();
                    ~OrderPerLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID for purchasing a permanent License. If it is an unactivated device from the manufacturer, use HardwareId.
                     * @return DeviceId Device ID for purchasing a permanent License. If it is an unactivated device from the manufacturer, use HardwareId.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID for purchasing a permanent License. If it is an unactivated device from the manufacturer, use HardwareId.
                     * @param _deviceId Device ID for purchasing a permanent License. If it is an unactivated device from the manufacturer, use HardwareId.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Device type. 0: SDK, 1: CPE. Enter 0 when creating or activating a device as a user. Enter 1 when creating a device to be activated as a manufacturer.
                     * @return Type Device type. 0: SDK, 1: CPE. Enter 0 when creating or activating a device as a user. Enter 1 when creating a device to be activated as a manufacturer.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Device type. 0: SDK, 1: CPE. Enter 0 when creating or activating a device as a user. Enter 1 when creating a device to be activated as a manufacturer.
                     * @param _type Device type. 0: SDK, 1: CPE. Enter 0 when creating or activating a device as a user. Enter 1 when creating a device to be activated as a manufacturer.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Rollback or not (delete device) after purchase fail, default false. If the device is bound to a currently effective traffic package, rollback is not allowed.
                     * @return RollBack Rollback or not (delete device) after purchase fail, default false. If the device is bound to a currently effective traffic package, rollback is not allowed.
                     * 
                     */
                    bool GetRollBack() const;

                    /**
                     * 设置Rollback or not (delete device) after purchase fail, default false. If the device is bound to a currently effective traffic package, rollback is not allowed.
                     * @param _rollBack Rollback or not (delete device) after purchase fail, default false. If the device is bound to a currently effective traffic package, rollback is not allowed.
                     * 
                     */
                    void SetRollBack(const bool& _rollBack);

                    /**
                     * 判断参数 RollBack 是否已赋值
                     * @return RollBack 是否已赋值
                     * 
                     */
                    bool RollBackHasBeenSet() const;

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
                     * Device ID for purchasing a permanent License. If it is an unactivated device from the manufacturer, use HardwareId.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device type. 0: SDK, 1: CPE. Enter 0 when creating or activating a device as a user. Enter 1 when creating a device to be activated as a manufacturer.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rollback or not (delete device) after purchase fail, default false. If the device is bound to a currently effective traffic package, rollback is not allowed.
                     */
                    bool m_rollBack;
                    bool m_rollBackHasBeenSet;

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

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ORDERPERLICENSEREQUEST_H_
