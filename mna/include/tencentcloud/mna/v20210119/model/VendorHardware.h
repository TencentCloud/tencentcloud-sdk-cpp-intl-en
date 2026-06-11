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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_

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
                * Manufacturer Hardware Information
                */
                class VendorHardware : public AbstractModel
                {
                public:
                    VendorHardware();
                    ~VendorHardware() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hardware id
                     * @return HardwareId Hardware id
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置Hardware id
                     * @param _hardwareId Hardware id
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

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
                     * 获取Activation status, empty: all; 1: to be activated; 2: activated
                     * @return Status Activation status, empty: all; 1: to be activated; 2: activated
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Activation status, empty: all; 1: to be activated; 2: activated
                     * @param _status Activation status, empty: all; 1: to be activated; 2: activated
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取vendor remarks
                     * @return Description vendor remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置vendor remarks
                     * @param _description vendor remarks
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
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
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
                     * 获取License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: When the device is paid by the tenant and inactive (not selected for monthly or permanent payment), this parameter returns 1, indicating only that the tenant has paid. This parameter will be subsequently deprecated. For new access, please use LicensePayMode and Payer.
                     * @return LicenseChargingMode License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: When the device is paid by the tenant and inactive (not selected for monthly or permanent payment), this parameter returns 1, indicating only that the tenant has paid. This parameter will be subsequently deprecated. For new access, please use LicensePayMode and Payer.
                     * 
                     */
                    int64_t GetLicenseChargingMode() const;

                    /**
                     * 设置License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: When the device is paid by the tenant and inactive (not selected for monthly or permanent payment), this parameter returns 1, indicating only that the tenant has paid. This parameter will be subsequently deprecated. For new access, please use LicensePayMode and Payer.
                     * @param _licenseChargingMode License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: When the device is paid by the tenant and inactive (not selected for monthly or permanent payment), this parameter returns 1, indicating only that the tenant has paid. This parameter will be subsequently deprecated. For new access, please use LicensePayMode and Payer.
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
                     * 获取Authorization validity period
0: Monthly authorization
1: Permanent license
-1: Unknown
                     * @return LicensePayMode Authorization validity period
0: Monthly authorization
1: Permanent license
-1: Unknown
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置Authorization validity period
0: Monthly authorization
1: Permanent license
-1: Unknown
                     * @param _licensePayMode Authorization validity period
0: Monthly authorization
1: Permanent license
-1: Unknown
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

                private:

                    /**
                     * Hardware id
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                    /**
                     * Hardware Serial Number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Activation status, empty: all; 1: to be activated; 2: activated
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Activation time
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * vendor remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * License billing mode: 1. Tenant monthly payment 2. Manufacturer monthly payment 3. Permanent license.
Note: When the device is paid by the tenant and inactive (not selected for monthly or permanent payment), this parameter returns 1, indicating only that the tenant has paid. This parameter will be subsequently deprecated. For new access, please use LicensePayMode and Payer.
                     */
                    int64_t m_licenseChargingMode;
                    bool m_licenseChargingModeHasBeenSet;

                    /**
                     * Last online time
                     */
                    std::string m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * Authorization validity period
0: Monthly authorization
1: Permanent license
-1: Unknown
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_VENDORHARDWARE_H_
