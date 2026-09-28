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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ZONE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Availability zone information
                */
                class Zone : public AbstractModel
                {
                public:
                    Zone();
                    ~Zone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ name.
                     * @return LocalName AZ name.
                     * 
                     */
                    std::string GetLocalName() const;

                    /**
                     * 设置AZ name.
                     * @param _localName AZ name.
                     * 
                     */
                    void SetLocalName(const std::string& _localName);

                    /**
                     * 判断参数 LocalName 是否已赋值
                     * @return LocalName 是否已赋值
                     * 
                     */
                    bool LocalNameHasBeenSet() const;

                    /**
                     * 获取AZ ID.
                     * @return ZoneId AZ ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置AZ ID.
                     * @param _zoneId AZ ID.
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
                     * 获取Availability zone status
                     * @return ZoneStatus Availability zone status
                     * 
                     */
                    std::string GetZoneStatus() const;

                    /**
                     * 设置Availability zone status
                     * @param _zoneStatus Availability zone status
                     * 
                     */
                    void SetZoneStatus(const std::string& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     * 
                     */
                    bool ZoneStatusHasBeenSet() const;

                private:

                    /**
                     * AZ name.
                     */
                    std::string m_localName;
                    bool m_localNameHasBeenSet;

                    /**
                     * AZ ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability zone status
                     */
                    std::string m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ZONE_H_
