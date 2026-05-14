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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_

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
                * basic device information
                */
                class DeviceBaseInfo : public AbstractModel
                {
                public:
                    DeviceBaseInfo();
                    ~DeviceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device unique ID
                     * @return DeviceId Device unique ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device unique ID
                     * @param _deviceId Device unique ID
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
                     * 获取The time when the device is created, in ms.
                     * @return CreateTime The time when the device is created, in ms.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the device is created, in ms.
                     * @param _createTime The time when the device is created, in ms.
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
                     * 获取Last online time of the device, in ms.
                     * @return LastTime Last online time of the device, in ms.
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last online time of the device, in ms.
                     * @param _lastTime Last online time of the device, in ms.
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Device remark
                     * @return Remark Device remark
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Device remark
                     * @param _remark Device remark
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Access environment. 0: Public cloud gateway; 1: Private gateway; 2: Public cloud gateway and private gateway. Default is public cloud gateway. Specific meaning: Public cloud gateway: The device can only connect to the public cloud gateway (nearby access). Private gateway: The device can only connect to the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).
                     * @return AccessScope Access environment. 0: Public cloud gateway; 1: Private gateway; 2: Public cloud gateway and private gateway. Default is public cloud gateway. Specific meaning: Public cloud gateway: The device can only connect to the public cloud gateway (nearby access). Private gateway: The device can only connect to the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置Access environment. 0: Public cloud gateway; 1: Private gateway; 2: Public cloud gateway and private gateway. Default is public cloud gateway. Specific meaning: Public cloud gateway: The device can only connect to the public cloud gateway (nearby access). Private gateway: The device can only connect to the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).
                     * @param _accessScope Access environment. 0: Public cloud gateway; 1: Private gateway; 2: Public cloud gateway and private gateway. Default is public cloud gateway. Specific meaning: Public cloud gateway: The device can only connect to the public cloud gateway (nearby access). Private gateway: The device can only connect to the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).
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
                     * 获取Authorization validity period of license 0: Monthly authorization 1: Permanent license
                     * @return LicensePayMode Authorization validity period of license 0: Monthly authorization 1: Permanent license
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置Authorization validity period of license 0: Monthly authorization 1: Permanent license
                     * @param _licensePayMode Authorization validity period of license 0: Monthly authorization 1: Permanent license
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
                     * 获取Payer 0: Manufacturer payment 1: Customer payment
                     * @return Payer Payer 0: Manufacturer payment 1: Customer payment
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 设置Payer 0: Manufacturer payment 1: Customer payment
                     * @param _payer Payer 0: Manufacturer payment 1: Customer payment
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

                    /**
                     * 获取Device sn
                     * @return Sn Device sn
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置Device sn
                     * @param _sn Device sn
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取manufacturer
                     * @return Vendor manufacturer
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置manufacturer
                     * @param _vendor manufacturer
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                private:

                    /**
                     * Device unique ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * The time when the device is created, in ms.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last online time of the device, in ms.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Device remark
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Access environment. 0: Public cloud gateway; 1: Private gateway; 2: Public cloud gateway and private gateway. Default is public cloud gateway. Specific meaning: Public cloud gateway: The device can only connect to the public cloud gateway (nearby access). Private gateway: The device can only connect to the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * Authorization validity period of license 0: Monthly authorization 1: Permanent license
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * Payer 0: Manufacturer payment 1: Customer payment
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

                    /**
                     * Device sn
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * manufacturer
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
