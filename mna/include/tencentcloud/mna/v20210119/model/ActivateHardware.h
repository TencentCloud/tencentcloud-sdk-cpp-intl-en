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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Activate device
                */
                class ActivateHardware : public AbstractModel
                {
                public:
                    ActivateHardware();
                    ~ActivateHardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vendor name
                     * @return Vendor Vendor name
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置Vendor name
                     * @param _vendor Vendor name
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取Device SN serial number
                     * @return SN Device SN serial number
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置Device SN serial number
                     * @param _sN Device SN serial number
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Description Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param _description Remarks
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取device key
                     * @return DataKey device key
                     * 
                     */
                    std::string GetDataKey() const;

                    /**
                     * 设置device key
                     * @param _dataKey device key
                     * 
                     */
                    void SetDataKey(const std::string& _dataKey);

                    /**
                     * 判断参数 DataKey 是否已赋值
                     * @return DataKey 是否已赋值
                     * 
                     */
                    bool DataKeyHasBeenSet() const;

                    /**
                     * 获取Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: device can only integrate with public cloud gateway (nearby access). Private gateway: device can only integrate with private gateway that has been launched (nearby access or fixed ip). Public cloud gateway and private gateway: device can also integrate with public cloud gateway and private gateway that has been launched (nearby access or fixed ip).
                     * @return AccessScope Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: device can only integrate with public cloud gateway (nearby access). Private gateway: device can only integrate with private gateway that has been launched (nearby access or fixed ip). Public cloud gateway and private gateway: device can also integrate with public cloud gateway and private gateway that has been launched (nearby access or fixed ip).
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: device can only integrate with public cloud gateway (nearby access). Private gateway: device can only integrate with private gateway that has been launched (nearby access or fixed ip). Public cloud gateway and private gateway: device can also integrate with public cloud gateway and private gateway that has been launched (nearby access or fixed ip).
                     * @param _accessScope Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: device can only integrate with public cloud gateway (nearby access). Private gateway: device can only integrate with private gateway that has been launched (nearby access or fixed ip). Public cloud gateway and private gateway: device can also integrate with public cloud gateway and private gateway that has been launched (nearby access or fixed ip).
                     * 
                     */
                    void SetAccessScope(const int64_t& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                    /**
                     * 获取When the payer is the tenant, the tenant license payment method is available.
Monthly authorization
1: Permanent license
If not passed, it defaults to monthly authorization.
This parameter is invalid when the manufacturer is the payer.

                     * @return LicensePayMode When the payer is the tenant, the tenant license payment method is available.
Monthly authorization
1: Permanent license
If not passed, it defaults to monthly authorization.
This parameter is invalid when the manufacturer is the payer.

                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置When the payer is the tenant, the tenant license payment method is available.
Monthly authorization
1: Permanent license
If not passed, it defaults to monthly authorization.
This parameter is invalid when the manufacturer is the payer.

                     * @param _licensePayMode When the payer is the tenant, the tenant license payment method is available.
Monthly authorization
1: Permanent license
If not passed, it defaults to monthly authorization.
This parameter is invalid when the manufacturer is the payer.

                     * 
                     */
                    void SetLicensePayMode(const int64_t& _licensePayMode);

                    /**
                     * 判断参数 LicensePayMode 是否已赋值
                     * @return LicensePayMode 是否已赋值
                     * 
                     */
                    bool LicensePayModeHasBeenSet() const;

                    /**
                     * 获取device group ID
                     * @return GroupId device group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置device group ID
                     * @param _groupId device group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Device group name. Reserved parameter. GroupId must be imported when grouping is required.
                     * @return GroupName Device group name. Reserved parameter. GroupId must be imported when grouping is required.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Device group name. Reserved parameter. GroupId must be imported when grouping is required.
                     * @param _groupName Device group name. Reserved parameter. GroupId must be imported when grouping is required.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * @return FlowTrunc No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * @param _flowTrunc No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     * 
                     */
                    void SetFlowTrunc(const int64_t& _flowTrunc);

                    /**
                     * 判断参数 FlowTrunc 是否已赋值
                     * @return FlowTrunc 是否已赋值
                     * 
                     */
                    bool FlowTruncHasBeenSet() const;

                    /**
                     * 获取Device ID after activation
                     * @return DeviceId Device ID after activation
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID after activation
                     * @param _deviceId Device ID after activation
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * Vendor name
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * Device SN serial number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * device key
                     */
                    std::string m_dataKey;
                    bool m_dataKeyHasBeenSet;

                    /**
                     * Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: device can only integrate with public cloud gateway (nearby access). Private gateway: device can only integrate with private gateway that has been launched (nearby access or fixed ip). Public cloud gateway and private gateway: device can also integrate with public cloud gateway and private gateway that has been launched (nearby access or fixed ip).
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * When the payer is the tenant, the tenant license payment method is available.
Monthly authorization
1: Permanent license
If not passed, it defaults to monthly authorization.
This parameter is invalid when the manufacturer is the payer.

                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * device group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Device group name. Reserved parameter. GroupId must be imported when grouping is required.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                    /**
                     * Device ID after activation
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARE_H_
