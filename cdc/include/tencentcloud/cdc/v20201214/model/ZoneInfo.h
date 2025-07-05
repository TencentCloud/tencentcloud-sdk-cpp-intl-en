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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
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
                     * 获取AZ name
                     * @return Zone AZ name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name
                     * @param _zone AZ name
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
                     * 获取AZ description
                     * @return ZoneName AZ description
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ description
                     * @param _zoneName AZ description
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
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
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
                     * 获取AZ status: AVAILABLE or UNAVAILABLE AVAILABLE means the AZ is available while UNAVAILABLE means the AZ is unavailable.
                     * @return ZoneState AZ status: AVAILABLE or UNAVAILABLE AVAILABLE means the AZ is available while UNAVAILABLE means the AZ is unavailable.
                     * 
                     */
                    std::string GetZoneState() const;

                    /**
                     * 设置AZ status: AVAILABLE or UNAVAILABLE AVAILABLE means the AZ is available while UNAVAILABLE means the AZ is unavailable.
                     * @param _zoneState AZ status: AVAILABLE or UNAVAILABLE AVAILABLE means the AZ is available while UNAVAILABLE means the AZ is unavailable.
                     * 
                     */
                    void SetZoneState(const std::string& _zoneState);

                    /**
                     * 判断参数 ZoneState 是否已赋值
                     * @return ZoneState 是否已赋值
                     * 
                     */
                    bool ZoneStateHasBeenSet() const;

                private:

                    /**
                     * AZ name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ description
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * AZ status: AVAILABLE or UNAVAILABLE AVAILABLE means the AZ is available while UNAVAILABLE means the AZ is unavailable.
                     */
                    std::string m_zoneState;
                    bool m_zoneStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_ZONEINFO_H_
