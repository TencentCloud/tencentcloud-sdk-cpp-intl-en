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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * AZ information
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the AZ in numeric form, such as 100001
                     * @return ZoneId Unique ID of the AZ in numeric form, such as 100001
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Unique ID of the AZ in numeric form, such as 100001
                     * @param _zoneId Unique ID of the AZ in numeric form, such as 100001
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
                     * 获取Unique ID of the AZ in string format, such as ap-guangzhou-1
                     * @return Zone Unique ID of the AZ in string format, such as ap-guangzhou-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Unique ID of the AZ in string format, such as ap-guangzhou-1
                     * @param _zone Unique ID of the AZ in string format, such as ap-guangzhou-1
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
                     * 获取AZ name, such as Guangzhou 1
                     * @return ZoneName AZ name, such as Guangzhou 1
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name, such as Guangzhou 1
                     * @param _zoneName AZ name, such as Guangzhou 1
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
                     * 获取Specifies the region of the availability zone, for example: ap-guangzhou.
                     * @return ZoneRegion Specifies the region of the availability zone, for example: ap-guangzhou.
                     * 
                     */
                    std::string GetZoneRegion() const;

                    /**
                     * 设置Specifies the region of the availability zone, for example: ap-guangzhou.
                     * @param _zoneRegion Specifies the region of the availability zone, for example: ap-guangzhou.
                     * 
                     */
                    void SetZoneRegion(const std::string& _zoneRegion);

                    /**
                     * 判断参数 ZoneRegion 是否已赋值
                     * @return ZoneRegion 是否已赋值
                     * 
                     */
                    bool ZoneRegionHasBeenSet() const;

                    /**
                     * 获取Indicates whether the AZ is a LocalZone az, for example: false.
                     * @return LocalZone Indicates whether the AZ is a LocalZone az, for example: false.
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置Indicates whether the AZ is a LocalZone az, for example: false.
                     * @param _localZone Indicates whether the AZ is a LocalZone az, for example: false.
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取Indicates whether the AZ is an EdgeZone az, for example: false.
                     * @return EdgeZone Indicates whether the AZ is an EdgeZone az, for example: false.
                     * 
                     */
                    bool GetEdgeZone() const;

                    /**
                     * 设置Indicates whether the AZ is an EdgeZone az, for example: false.
                     * @param _edgeZone Indicates whether the AZ is an EdgeZone az, for example: false.
                     * 
                     */
                    void SetEdgeZone(const bool& _edgeZone);

                    /**
                     * 判断参数 EdgeZone 是否已赋值
                     * @return EdgeZone 是否已赋值
                     * 
                     */
                    bool EdgeZoneHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the AZ in numeric form, such as 100001
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Unique ID of the AZ in string format, such as ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ name, such as Guangzhou 1
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Specifies the region of the availability zone, for example: ap-guangzhou.
                     */
                    std::string m_zoneRegion;
                    bool m_zoneRegionHasBeenSet;

                    /**
                     * Indicates whether the AZ is a LocalZone az, for example: false.
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * Indicates whether the AZ is an EdgeZone az, for example: false.
                     */
                    bool m_edgeZone;
                    bool m_edgeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_
