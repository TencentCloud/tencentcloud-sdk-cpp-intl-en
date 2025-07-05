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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Firewall status list
                */
                class SwitchListsData : public AbstractModel
                {
                public:
                    SwitchListsData();
                    ~SwitchListsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PublicIp Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _publicIp Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @return IntranetIp Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetIntranetIp() const;

                    /**
                     * 设置Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _intranetIp Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetIntranetIp(const std::string& _intranetIp);

                    /**
                     * 判断参数 IntranetIp 是否已赋值
                     * @return IntranetIp 是否已赋值
                     * 
                     */
                    bool IntranetIpHasBeenSet() const;

                    /**
                     * 获取Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceId Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceId Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Area Region
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _area Region
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Firewall toggle
                     * @return Switch Firewall toggle
                     * 
                     */
                    int64_t GetSwitch() const;

                    /**
                     * 设置Firewall toggle
                     * @param _switch Firewall toggle
                     * 
                     */
                    void SetSwitch(const int64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取ID value
                     * @return Id ID value
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID value
                     * @param _id ID value
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Public IP type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PublicIpType Public IP type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetPublicIpType() const;

                    /**
                     * 设置Public IP type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _publicIpType Public IP type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPublicIpType(const uint64_t& _publicIpType);

                    /**
                     * 判断参数 PublicIpType 是否已赋值
                     * @return PublicIpType 是否已赋值
                     * 
                     */
                    bool PublicIpTypeHasBeenSet() const;

                    /**
                     * 获取Number of risky ports
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PortTimes Number of risky ports
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetPortTimes() const;

                    /**
                     * 设置Number of risky ports
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _portTimes Number of risky ports
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPortTimes(const uint64_t& _portTimes);

                    /**
                     * 判断参数 PortTimes 是否已赋值
                     * @return PortTimes 是否已赋值
                     * 
                     */
                    bool PortTimesHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return LastTime Last scan time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _lastTime Last scan time
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Scan mode
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ScanMode Scan mode
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetScanMode() const;

                    /**
                     * 设置Scan mode
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _scanMode Scan mode
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetScanMode(const std::string& _scanMode);

                    /**
                     * 判断参数 ScanMode 是否已赋值
                     * @return ScanMode 是否已赋值
                     * 
                     */
                    bool ScanModeHasBeenSet() const;

                    /**
                     * 获取Scan status
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ScanStatus Scan status
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetScanStatus() const;

                    /**
                     * 设置Scan status
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _scanStatus Scan status
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetScanStatus(const uint64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                private:

                    /**
                     * Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_intranetIp;
                    bool m_intranetIpHasBeenSet;

                    /**
                     * Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Firewall toggle
                     */
                    int64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * ID value
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Public IP type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_publicIpType;
                    bool m_publicIpTypeHasBeenSet;

                    /**
                     * Number of risky ports
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_portTimes;
                    bool m_portTimesHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Scan mode
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_scanMode;
                    bool m_scanModeHasBeenSet;

                    /**
                     * Scan status
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHLISTSDATA_H_
