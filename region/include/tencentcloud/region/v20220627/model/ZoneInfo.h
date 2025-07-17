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

#ifndef TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Region
    {
        namespace V20220627
        {
            namespace Model
            {
                /**
                * Availability zone information
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone name, for example, ap-guangzhou-3.

The names of availability zones across the network are as follows:.
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<Li> ap-guangzhou-1 (sold-out)</li>.
<Li> ap-guangzhou-2 (resource out of stock)</li>.
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<Li> ap-shanghai-1 (resource out of stock) </li>.
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * @return Zone Availability zone name, for example, ap-guangzhou-3.

The names of availability zones across the network are as follows:.
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<Li> ap-guangzhou-1 (sold-out)</li>.
<Li> ap-guangzhou-2 (resource out of stock)</li>.
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<Li> ap-shanghai-1 (resource out of stock) </li>.
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone name, for example, ap-guangzhou-3.

The names of availability zones across the network are as follows:.
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<Li> ap-guangzhou-1 (sold-out)</li>.
<Li> ap-guangzhou-2 (resource out of stock)</li>.
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<Li> ap-shanghai-1 (resource out of stock) </li>.
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * @param _zone Availability zone name, for example, ap-guangzhou-3.

The names of availability zones across the network are as follows:.
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<Li> ap-guangzhou-1 (sold-out)</li>.
<Li> ap-guangzhou-2 (resource out of stock)</li>.
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<Li> ap-shanghai-1 (resource out of stock) </li>.
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
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
                     * 获取Availability zone description, such as Guangzhou Zone 3.
                     * @return ZoneName Availability zone description, such as Guangzhou Zone 3.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone description, such as Guangzhou Zone 3.
                     * @param _zoneName Availability zone description, such as Guangzhou Zone 3.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Availability zone status, including AVAILABLE and UNAVAILABLE. AVAILABLE indicates available, and UNAVAILABLE indicates unavailable.
                     * @return ZoneState Availability zone status, including AVAILABLE and UNAVAILABLE. AVAILABLE indicates available, and UNAVAILABLE indicates unavailable.
                     * 
                     */
                    std::string GetZoneState() const;

                    /**
                     * 设置Availability zone status, including AVAILABLE and UNAVAILABLE. AVAILABLE indicates available, and UNAVAILABLE indicates unavailable.
                     * @param _zoneState Availability zone status, including AVAILABLE and UNAVAILABLE. AVAILABLE indicates available, and UNAVAILABLE indicates unavailable.
                     * 
                     */
                    void SetZoneState(const std::string& _zoneState);

                    /**
                     * 判断参数 ZoneState 是否已赋值
                     * @return ZoneState 是否已赋值
                     * 
                     */
                    bool ZoneStateHasBeenSet() const;

                    /**
                     * 获取Parent zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentZone Parent zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentZone() const;

                    /**
                     * 设置Parent zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentZone Parent zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentZone(const std::string& _parentZone);

                    /**
                     * 判断参数 ParentZone 是否已赋值
                     * @return ParentZone 是否已赋值
                     * 
                     */
                    bool ParentZoneHasBeenSet() const;

                    /**
                     * 获取Parent availability zone ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentZoneId Parent availability zone ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentZoneId() const;

                    /**
                     * 设置Parent availability zone ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentZoneId Parent availability zone ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentZoneId(const std::string& _parentZoneId);

                    /**
                     * 判断参数 ParentZoneId 是否已赋值
                     * @return ParentZoneId 是否已赋值
                     * 
                     */
                    bool ParentZoneIdHasBeenSet() const;

                    /**
                     * 获取Describes the parent availability zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentZoneName Describes the parent availability zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentZoneName() const;

                    /**
                     * 设置Describes the parent availability zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentZoneName Describes the parent availability zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentZoneName(const std::string& _parentZoneName);

                    /**
                     * 判断参数 ParentZoneName 是否已赋值
                     * @return ParentZoneName 是否已赋值
                     * 
                     */
                    bool ParentZoneNameHasBeenSet() const;

                    /**
                     * 获取zone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneType zone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneType() const;

                    /**
                     * 设置zone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneType zone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneType(const std::string& _zoneType);

                    /**
                     * 判断参数 ZoneType 是否已赋值
                     * @return ZoneType 是否已赋值
                     * 
                     */
                    bool ZoneTypeHasBeenSet() const;

                    /**
                     * 获取Console type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineRoomTypeMC Console type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineRoomTypeMC() const;

                    /**
                     * 设置Console type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineRoomTypeMC Console type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineRoomTypeMC(const std::string& _machineRoomTypeMC);

                    /**
                     * 判断参数 MachineRoomTypeMC 是否已赋值
                     * @return MachineRoomTypeMC 是否已赋值
                     * 
                     */
                    bool MachineRoomTypeMCHasBeenSet() const;

                    /**
                     * 获取Same as ZoneId. suitable for console invocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIdMC Same as ZoneId. suitable for console invocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneIdMC() const;

                    /**
                     * 设置Same as ZoneId. suitable for console invocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIdMC Same as ZoneId. suitable for console invocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIdMC(const std::string& _zoneIdMC);

                    /**
                     * 判断参数 ZoneIdMC 是否已赋值
                     * @return ZoneIdMC 是否已赋值
                     * 
                     */
                    bool ZoneIdMCHasBeenSet() const;

                private:

                    /**
                     * Availability zone name, for example, ap-guangzhou-3.

The names of availability zones across the network are as follows:.
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<Li> ap-guangzhou-1 (sold-out)</li>.
<Li> ap-guangzhou-2 (resource out of stock)</li>.
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<Li> ap-shanghai-1 (resource out of stock) </li>.
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Availability zone description, such as Guangzhou Zone 3.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * AZ ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability zone status, including AVAILABLE and UNAVAILABLE. AVAILABLE indicates available, and UNAVAILABLE indicates unavailable.
                     */
                    std::string m_zoneState;
                    bool m_zoneStateHasBeenSet;

                    /**
                     * Parent zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentZone;
                    bool m_parentZoneHasBeenSet;

                    /**
                     * Parent availability zone ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentZoneId;
                    bool m_parentZoneIdHasBeenSet;

                    /**
                     * Describes the parent availability zone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentZoneName;
                    bool m_parentZoneNameHasBeenSet;

                    /**
                     * zone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneType;
                    bool m_zoneTypeHasBeenSet;

                    /**
                     * Console type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineRoomTypeMC;
                    bool m_machineRoomTypeMCHasBeenSet;

                    /**
                     * Same as ZoneId. suitable for console invocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneIdMC;
                    bool m_zoneIdMCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_
