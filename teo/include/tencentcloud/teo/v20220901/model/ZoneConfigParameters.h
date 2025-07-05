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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Site configuration information.
                */
                class ZoneConfigParameters : public AbstractModel
                {
                public:
                    ZoneConfigParameters();
                    ~ZoneConfigParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site name.
                     * @return ZoneName The site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param _zoneName The site name.
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
                     * 获取Site configuration information.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ZoneConfig Site configuration information.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ZoneConfig GetZoneConfig() const;

                    /**
                     * 设置Site configuration information.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _zoneConfig Site configuration information.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetZoneConfig(const ZoneConfig& _zoneConfig);

                    /**
                     * 判断参数 ZoneConfig 是否已赋值
                     * @return ZoneConfig 是否已赋值
                     * 
                     */
                    bool ZoneConfigHasBeenSet() const;

                private:

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Site configuration information.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ZoneConfig m_zoneConfig;
                    bool m_zoneConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIGPARAMETERS_H_
