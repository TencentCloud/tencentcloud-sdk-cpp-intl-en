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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityIPGroup request structure.
                */
                class ModifySecurityIPGroupRequest : public AbstractModel
                {
                public:
                    ModifySecurityIPGroupRequest();
                    ~ModifySecurityIPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取IP group configuration.
                     * @return IPGroup IP group configuration.
                     * 
                     */
                    IPGroup GetIPGroup() const;

                    /**
                     * 设置IP group configuration.
                     * @param _iPGroup IP group configuration.
                     * 
                     */
                    void SetIPGroup(const IPGroup& _iPGroup);

                    /**
                     * 判断参数 IPGroup 是否已赋值
                     * @return IPGroup 是否已赋值
                     * 
                     */
                    bool IPGroupHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values: 
<li>`append`: Add information of `Content` to `IPGroup`;</li>
<li>`remove`: Delete information of `Content` from `IPGroup`;</li>
<li>`update`: Replace all information of `IPGroup` and modify the IPGroup name.</li>
                     * @return Mode Operation type. Valid values: 
<li>`append`: Add information of `Content` to `IPGroup`;</li>
<li>`remove`: Delete information of `Content` from `IPGroup`;</li>
<li>`update`: Replace all information of `IPGroup` and modify the IPGroup name.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Operation type. Valid values: 
<li>`append`: Add information of `Content` to `IPGroup`;</li>
<li>`remove`: Delete information of `Content` from `IPGroup`;</li>
<li>`update`: Replace all information of `IPGroup` and modify the IPGroup name.</li>
                     * @param _mode Operation type. Valid values: 
<li>`append`: Add information of `Content` to `IPGroup`;</li>
<li>`remove`: Delete information of `Content` from `IPGroup`;</li>
<li>`update`: Replace all information of `IPGroup` and modify the IPGroup name.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IP group configuration.
                     */
                    IPGroup m_iPGroup;
                    bool m_iPGroupHasBeenSet;

                    /**
                     * Operation type. Valid values: 
<li>`append`: Add information of `Content` to `IPGroup`;</li>
<li>`remove`: Delete information of `Content` from `IPGroup`;</li>
<li>`update`: Replace all information of `IPGroup` and modify the IPGroup name.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_
