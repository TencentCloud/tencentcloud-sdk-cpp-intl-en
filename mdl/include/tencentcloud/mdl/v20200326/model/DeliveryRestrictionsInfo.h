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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DELIVERYRESTRICTIONSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DELIVERYRESTRICTIONSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Distribution configuration information.
                */
                class DeliveryRestrictionsInfo : public AbstractModel
                {
                public:
                    DeliveryRestrictionsInfo();
                    ~DeliveryRestrictionsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
                     * @return WebDeliveryAllowed Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
                     * 
                     */
                    std::string GetWebDeliveryAllowed() const;

                    /**
                     * 设置Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
                     * @param _webDeliveryAllowed Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
                     * 
                     */
                    void SetWebDeliveryAllowed(const std::string& _webDeliveryAllowed);

                    /**
                     * 判断参数 WebDeliveryAllowed 是否已赋值
                     * @return WebDeliveryAllowed 是否已赋值
                     * 
                     */
                    bool WebDeliveryAllowedHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 no_regional_blackout_flag parameter.
                     * @return NoRegionalBlackout Corresponds to SCTE-35 no_regional_blackout_flag parameter.
                     * 
                     */
                    std::string GetNoRegionalBlackout() const;

                    /**
                     * 设置Corresponds to SCTE-35 no_regional_blackout_flag parameter.
                     * @param _noRegionalBlackout Corresponds to SCTE-35 no_regional_blackout_flag parameter.
                     * 
                     */
                    void SetNoRegionalBlackout(const std::string& _noRegionalBlackout);

                    /**
                     * 判断参数 NoRegionalBlackout 是否已赋值
                     * @return NoRegionalBlackout 是否已赋值
                     * 
                     */
                    bool NoRegionalBlackoutHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 archive_allowed_flag.
                     * @return ArchiveAllowed Corresponds to SCTE-35 archive_allowed_flag.
                     * 
                     */
                    std::string GetArchiveAllowed() const;

                    /**
                     * 设置Corresponds to SCTE-35 archive_allowed_flag.
                     * @param _archiveAllowed Corresponds to SCTE-35 archive_allowed_flag.
                     * 
                     */
                    void SetArchiveAllowed(const std::string& _archiveAllowed);

                    /**
                     * 判断参数 ArchiveAllowed 是否已赋值
                     * @return ArchiveAllowed 是否已赋值
                     * 
                     */
                    bool ArchiveAllowedHasBeenSet() const;

                    /**
                     * 获取Corresponds to SCTE-35 device_restrictions parameter.
                     * @return DeviceRestrictions Corresponds to SCTE-35 device_restrictions parameter.
                     * 
                     */
                    std::string GetDeviceRestrictions() const;

                    /**
                     * 设置Corresponds to SCTE-35 device_restrictions parameter.
                     * @param _deviceRestrictions Corresponds to SCTE-35 device_restrictions parameter.
                     * 
                     */
                    void SetDeviceRestrictions(const std::string& _deviceRestrictions);

                    /**
                     * 判断参数 DeviceRestrictions 是否已赋值
                     * @return DeviceRestrictions 是否已赋值
                     * 
                     */
                    bool DeviceRestrictionsHasBeenSet() const;

                private:

                    /**
                     * Corresponds to SCTE-35 web_delivery_allowed_flag parameter.
                     */
                    std::string m_webDeliveryAllowed;
                    bool m_webDeliveryAllowedHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 no_regional_blackout_flag parameter.
                     */
                    std::string m_noRegionalBlackout;
                    bool m_noRegionalBlackoutHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 archive_allowed_flag.
                     */
                    std::string m_archiveAllowed;
                    bool m_archiveAllowedHasBeenSet;

                    /**
                     * Corresponds to SCTE-35 device_restrictions parameter.
                     */
                    std::string m_deviceRestrictions;
                    bool m_deviceRestrictionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DELIVERYRESTRICTIONSINFO_H_
