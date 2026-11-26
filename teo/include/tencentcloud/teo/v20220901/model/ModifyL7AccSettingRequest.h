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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyL7AccSetting request structure.
                */
                class ModifyL7AccSettingRequest : public AbstractModel
                {
                public:
                    ModifyL7AccSettingRequest();
                    ~ModifyL7AccSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Global configuration for site acceleration. The configuration in this parameter takes effect for all domain names under the site. You just need to directly modify the desired configuration. Other configuration not passed in will keep its original status.


                     * @return ZoneConfig Global configuration for site acceleration. The configuration in this parameter takes effect for all domain names under the site. You just need to directly modify the desired configuration. Other configuration not passed in will keep its original status.


                     * 
                     */
                    ZoneConfig GetZoneConfig() const;

                    /**
                     * 设置Global configuration for site acceleration. The configuration in this parameter takes effect for all domain names under the site. You just need to directly modify the desired configuration. Other configuration not passed in will keep its original status.


                     * @param _zoneConfig Global configuration for site acceleration. The configuration in this parameter takes effect for all domain names under the site. You just need to directly modify the desired configuration. Other configuration not passed in will keep its original status.


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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Global configuration for site acceleration. The configuration in this parameter takes effect for all domain names under the site. You just need to directly modify the desired configuration. Other configuration not passed in will keep its original status.


                     */
                    ZoneConfig m_zoneConfig;
                    bool m_zoneConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_
