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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * Cross-regional AZ information after aggregating.
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ ID.
                     * @return ZoneId AZ ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID.
                     * @param _zoneId AZ ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Availability zone code.
                     * @return Zone Availability zone code.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code.
                     * @param _zone Availability zone code.
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
                     * 获取Chinese Name of Availability Zone.
                     * @return ZoneName Chinese Name of Availability Zone.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Chinese Name of Availability Zone.
                     * @param _zoneName Chinese Name of Availability Zone.
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
                     * 获取Availability zone English name.
                     * @return ZoneNameEn Availability zone English name.
                     * 
                     */
                    std::string GetZoneNameEn() const;

                    /**
                     * 设置Availability zone English name.
                     * @param _zoneNameEn Availability zone English name.
                     * 
                     */
                    void SetZoneNameEn(const std::string& _zoneNameEn);

                    /**
                     * 判断参数 ZoneNameEn 是否已赋值
                     * @return ZoneNameEn 是否已赋值
                     * 
                     */
                    bool ZoneNameEnHasBeenSet() const;

                    /**
                     * 获取Region code.
                     * @return Region Region code.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region code.
                     * @param _region Region code.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Area code
                     * @return Location Area code
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Area code
                     * @param _location Area code
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Zone Name
                     * @return LocationName Zone Name
                     * 
                     */
                    std::string GetLocationName() const;

                    /**
                     * 设置Zone Name
                     * @param _locationName Zone Name
                     * 
                     */
                    void SetLocationName(const std::string& _locationName);

                    /**
                     * 判断参数 LocationName 是否已赋值
                     * @return LocationName 是否已赋值
                     * 
                     */
                    bool LocationNameHasBeenSet() const;

                private:

                    /**
                     * AZ ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability zone code.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Chinese Name of Availability Zone.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Availability zone English name.
                     */
                    std::string m_zoneNameEn;
                    bool m_zoneNameEnHasBeenSet;

                    /**
                     * Region code.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Area code
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Zone Name
                     */
                    std::string m_locationName;
                    bool m_locationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_ZONEINFO_H_
