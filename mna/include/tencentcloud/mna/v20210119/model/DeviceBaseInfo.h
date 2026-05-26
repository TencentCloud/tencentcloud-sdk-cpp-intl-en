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
                     * 获取<p>Unique ID of the device</p>
                     * @return DeviceId <p>Unique ID of the device</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>Unique ID of the device</p>
                     * @param _deviceId <p>Unique ID of the device</p>
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
                     * 获取<p>Device name</p>
                     * @return DeviceName <p>Device name</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>Device name</p>
                     * @param _deviceName <p>Device name</p>
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
                     * 获取<p>The time when the device is created, in ms</p>
                     * @return CreateTime <p>The time when the device is created, in ms</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>The time when the device is created, in ms</p>
                     * @param _createTime <p>The time when the device is created, in ms</p>
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
                     * 获取<p>Last online time of the device, in ms</p>
                     * @return LastTime <p>Last online time of the device, in ms</p>
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置<p>Last online time of the device, in ms</p>
                     * @param _lastTime <p>Last online time of the device, in ms</p>
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
                     * 获取<p>Remark of the device</p>
                     * @return Remark <p>Remark of the device</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark of the device</p>
                     * @param _remark <p>Remark of the device</p>
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
                     * 获取<p>Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. Defaults to public cloud gateway. Specific meaning: Public cloud gateway: The device can only access the public cloud gateway (nearby access). Private gateway: The device can only access the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also access both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).</p>
                     * @return AccessScope <p>Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. Defaults to public cloud gateway. Specific meaning: Public cloud gateway: The device can only access the public cloud gateway (nearby access). Private gateway: The device can only access the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also access both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).</p>
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置<p>Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. Defaults to public cloud gateway. Specific meaning: Public cloud gateway: The device can only access the public cloud gateway (nearby access). Private gateway: The device can only access the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also access both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).</p>
                     * @param _accessScope <p>Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. Defaults to public cloud gateway. Specific meaning: Public cloud gateway: The device can only access the public cloud gateway (nearby access). Private gateway: The device can only access the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also access both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).</p>
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
                     * 获取<p>license authorization validity period 0: monthly authorization 1: permanent license</p>
                     * @return LicensePayMode <p>license authorization validity period 0: monthly authorization 1: permanent license</p>
                     * 
                     */
                    int64_t GetLicensePayMode() const;

                    /**
                     * 设置<p>license authorization validity period 0: monthly authorization 1: permanent license</p>
                     * @param _licensePayMode <p>license authorization validity period 0: monthly authorization 1: permanent license</p>
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
                     * 获取<p>Payment party 0: Manufacturer pays 1: Customer pays</p>
                     * @return Payer <p>Payment party 0: Manufacturer pays 1: Customer pays</p>
                     * 
                     */
                    int64_t GetPayer() const;

                    /**
                     * 设置<p>Payment party 0: Manufacturer pays 1: Customer pays</p>
                     * @param _payer <p>Payment party 0: Manufacturer pays 1: Customer pays</p>
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
                     * 获取<p>device group ID</p>
                     * @return GroupId <p>device group ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>device group ID</p>
                     * @param _groupId <p>device group ID</p>
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
                     * 获取<p>Device group name</p>
                     * @return GroupName <p>Device group name</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>Device group name</p>
                     * @param _groupName <p>Device group name</p>
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
                     * 获取<p>Device data transfer plan processing method, 0: pay-as-you-go, 1: truncate acceleration</p>
                     * @return FlowTrunc <p>Device data transfer plan processing method, 0: pay-as-you-go, 1: truncate acceleration</p>
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置<p>Device data transfer plan processing method, 0: pay-as-you-go, 1: truncate acceleration</p>
                     * @param _flowTrunc <p>Device data transfer plan processing method, 0: pay-as-you-go, 1: truncate acceleration</p>
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
                     * 获取<p>Device sn</p>
                     * @return Sn <p>Device sn</p>
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置<p>Device sn</p>
                     * @param _sn <p>Device sn</p>
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
                     * 获取<p>Manufacturer</p>
                     * @return Vendor <p>Manufacturer</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>Manufacturer</p>
                     * @param _vendor <p>Manufacturer</p>
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
                     * 获取<p>Access region list.</p>
                     * @return AllowedRegions <p>Access region list.</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedRegions() const;

                    /**
                     * 设置<p>Access region list.</p>
                     * @param _allowedRegions <p>Access region list.</p>
                     * 
                     */
                    void SetAllowedRegions(const std::vector<std::string>& _allowedRegions);

                    /**
                     * 判断参数 AllowedRegions 是否已赋值
                     * @return AllowedRegions 是否已赋值
                     * 
                     */
                    bool AllowedRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>Unique ID of the device</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>Device name</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>The time when the device is created, in ms</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last online time of the device, in ms</p>
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * <p>Remark of the device</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. Defaults to public cloud gateway. Specific meaning: Public cloud gateway: The device can only access the public cloud gateway (nearby access). Private gateway: The device can only access the already launched private gateway (nearby access or fixed ip access). Public cloud gateway and private gateway: The device can also access both the public cloud gateway and the already launched private gateway (nearby access or fixed ip access).</p>
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * <p>license authorization validity period 0: monthly authorization 1: permanent license</p>
                     */
                    int64_t m_licensePayMode;
                    bool m_licensePayModeHasBeenSet;

                    /**
                     * <p>Payment party 0: Manufacturer pays 1: Customer pays</p>
                     */
                    int64_t m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * <p>device group ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Device group name</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Device data transfer plan processing method, 0: pay-as-you-go, 1: truncate acceleration</p>
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                    /**
                     * <p>Device sn</p>
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * <p>Manufacturer</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>Access region list.</p>
                     */
                    std::vector<std::string> m_allowedRegions;
                    bool m_allowedRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICEBASEINFO_H_
