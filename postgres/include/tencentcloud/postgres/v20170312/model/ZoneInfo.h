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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AZ information such as number and status
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ abbreviation
                     * @return Zone AZ abbreviation
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ abbreviation
                     * @param _zone AZ abbreviation
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
                     * 获取AZ name
                     * @return ZoneName AZ name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
                     * @param _zoneName AZ name
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
                     * 获取AZ number
                     * @return ZoneId AZ number
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置AZ number
                     * @param _zoneId AZ number
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Availability status. Valid values:
`UNAVAILABLE`.
`AVAILABLE`.
`SELLOUT`.
`SUPPORTMODIFYONLY` (supports configuration adjustment).
                     * @return ZoneState Availability status. Valid values:
`UNAVAILABLE`.
`AVAILABLE`.
`SELLOUT`.
`SUPPORTMODIFYONLY` (supports configuration adjustment).
                     * 
                     */
                    std::string GetZoneState() const;

                    /**
                     * 设置Availability status. Valid values:
`UNAVAILABLE`.
`AVAILABLE`.
`SELLOUT`.
`SUPPORTMODIFYONLY` (supports configuration adjustment).
                     * @param _zoneState Availability status. Valid values:
`UNAVAILABLE`.
`AVAILABLE`.
`SELLOUT`.
`SUPPORTMODIFYONLY` (supports configuration adjustment).
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
                     * 获取Whether the AZ supports IPv6 address access
                     * @return ZoneSupportIpv6 Whether the AZ supports IPv6 address access
                     * 
                     */
                    uint64_t GetZoneSupportIpv6() const;

                    /**
                     * 设置Whether the AZ supports IPv6 address access
                     * @param _zoneSupportIpv6 Whether the AZ supports IPv6 address access
                     * 
                     */
                    void SetZoneSupportIpv6(const uint64_t& _zoneSupportIpv6);

                    /**
                     * 判断参数 ZoneSupportIpv6 是否已赋值
                     * @return ZoneSupportIpv6 是否已赋值
                     * 
                     */
                    bool ZoneSupportIpv6HasBeenSet() const;

                    /**
                     * 获取AZs that can be used as standby when this AZ is primary
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StandbyZoneSet AZs that can be used as standby when this AZ is primary
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetStandbyZoneSet() const;

                    /**
                     * 设置AZs that can be used as standby when this AZ is primary
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _standbyZoneSet AZs that can be used as standby when this AZ is primary
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandbyZoneSet(const std::vector<std::string>& _standbyZoneSet);

                    /**
                     * 判断参数 StandbyZoneSet 是否已赋值
                     * @return StandbyZoneSet 是否已赋值
                     * 
                     */
                    bool StandbyZoneSetHasBeenSet() const;

                private:

                    /**
                     * AZ abbreviation
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * AZ number
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability status. Valid values:
`UNAVAILABLE`.
`AVAILABLE`.
`SELLOUT`.
`SUPPORTMODIFYONLY` (supports configuration adjustment).
                     */
                    std::string m_zoneState;
                    bool m_zoneStateHasBeenSet;

                    /**
                     * Whether the AZ supports IPv6 address access
                     */
                    uint64_t m_zoneSupportIpv6;
                    bool m_zoneSupportIpv6HasBeenSet;

                    /**
                     * AZs that can be used as standby when this AZ is primary
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_standbyZoneSet;
                    bool m_standbyZoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_
