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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_

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
                * Hardware Information
                */
                class HardwareInfo : public AbstractModel
                {
                public:
                    HardwareInfo();
                    ~HardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取device ID
                     * @return DeviceId device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置device ID
                     * @param _deviceId device ID
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
                     * 获取Activation time
                     * @return ActiveTime Activation time
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置Activation time
                     * @param _activeTime Activation time
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取Last online time
                     * @return LastOnlineTime Last online time
                     * 
                     */
                    std::string GetLastOnlineTime() const;

                    /**
                     * 设置Last online time
                     * @param _lastOnlineTime Last online time
                     * 
                     */
                    void SetLastOnlineTime(const std::string& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

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
                     * 获取vendor remarks
                     * @return VendorDescription vendor remarks
                     * 
                     */
                    std::string GetVendorDescription() const;

                    /**
                     * 设置vendor remarks
                     * @param _vendorDescription vendor remarks
                     * 
                     */
                    void SetVendorDescription(const std::string& _vendorDescription);

                    /**
                     * 判断参数 VendorDescription 是否已赋值
                     * @return VendorDescription 是否已赋值
                     * 
                     */
                    bool VendorDescriptionHasBeenSet() const;

                    /**
                     * 获取License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: This parameter will be subsequently deprecated. Please use LicensePayMode and Payer for new access.
                     * @return LicenseChargingMode License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: This parameter will be subsequently deprecated. Please use LicensePayMode and Payer for new access.
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: This parameter will be subsequently deprecated. Please use LicensePayMode and Payer for new access.
                     * @param _licenseChargingMode License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: This parameter will be subsequently deprecated. Please use LicensePayMode and Payer for new access.
                     * 
                     */
                    void SetLicenseChargingMode(const int64_t& _licenseChargingMode);

                    /**
                     * 判断参数 LicenseChargingMode 是否已赋值
                     * @return LicenseChargingMode 是否已赋值
                     * 
                     */
                    bool LicenseChargingModeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Hardware Serial Number
                     * @return SN Hardware Serial Number
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置Hardware Serial Number
                     * @param _sN Hardware Serial Number
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
                     * 获取Authorization validity period of license 
0: Monthly authorization 
1: Permanent license
                     * @return LicensePayMode Authorization validity period of license 
0: Monthly authorization 
1: Permanent license
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置Authorization validity period of license 
0: Monthly authorization 
1: Permanent license
                     * @param _licensePayMode Authorization validity period of license 
0: Monthly authorization 
1: Permanent license
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
                     * 获取Payer 
0: Customer payment 
1: Manufacturer payment
                     * @return Payer Payer 
0: Customer payment 
1: Manufacturer payment
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 设置Payer 
0: Customer payment 
1: Manufacturer payment
                     * @param _payer Payer 
0: Customer payment 
1: Manufacturer payment
                     * 
                     */
                    void SetPayer(const int64_t& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

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
                     * 获取Device group name
                     * @return GroupName Device group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Device group name
                     * @param _groupName Device group name
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

                private:

                    /**
                     * device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Activation time
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * Last online time
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * vendor remarks
                     */
                    std::string m_vendorDescription;
                    bool m_vendorDescriptionHasBeenSet;

                    /**
                     * License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: This parameter will be subsequently deprecated. Please use LicensePayMode and Payer for new access.
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Hardware Serial Number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * Authorization validity period of license 
0: Monthly authorization 
1: Permanent license
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * Payer 
0: Customer payment 
1: Manufacturer payment
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * device group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Device group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * No traffic processing method for the device. 0: pay-as-you-go, 1: truncate and accelerate	
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_HARDWAREINFO_H_
