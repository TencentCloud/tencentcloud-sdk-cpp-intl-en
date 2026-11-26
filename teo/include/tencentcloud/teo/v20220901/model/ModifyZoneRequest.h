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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServers.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZone request structure.
                */
                class ModifyZoneRequest : public AbstractModel
                {
                public:
                    ModifyZoneRequest();
                    ~ModifyZoneRequest() = default;
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
                     * 获取Site access method. Valid values:
<li>full: NS access;</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * @return Type Site access method. Valid values:
<li>full: NS access;</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Site access method. Valid values:
<li>full: NS access;</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * @param _type Site access method. Valid values:
<li>full: NS access;</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Custom site info used as an alternative to the default name server assigned by the system. Maintain the original configuration if not specified. This parameter cannot be passed when the site uses the no domain access method.
                     * @return VanityNameServers Custom site info used as an alternative to the default name server assigned by the system. Maintain the original configuration if not specified. This parameter cannot be passed when the site uses the no domain access method.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置Custom site info used as an alternative to the default name server assigned by the system. Maintain the original configuration if not specified. This parameter cannot be passed when the site uses the no domain access method.
                     * @param _vanityNameServers Custom site info used as an alternative to the default name server assigned by the system. Maintain the original configuration if not specified. This parameter cannot be passed when the site uses the no domain access method.
                     * 
                     */
                    void SetVanityNameServers(const VanityNameServers& _vanityNameServers);

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     * 
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取Identical site identifier. Enter numbers, letters, ".", "-", and "_" only, up to 200 characters.
                     * @return AliasZoneName Identical site identifier. Enter numbers, letters, ".", "-", and "_" only, up to 200 characters.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Identical site identifier. Enter numbers, letters, ".", "-", and "_" only, up to 200 characters.
                     * @param _aliasZoneName Identical site identifier. Enter numbers, letters, ".", "-", and "_" only, up to 200 characters.
                     * 
                     */
                    void SetAliasZoneName(const std::string& _aliasZoneName);

                    /**
                     * 判断参数 AliasZoneName 是否已赋值
                     * @return AliasZoneName 是否已赋值
                     * 
                     */
                    bool AliasZoneNameHasBeenSet() const;

                    /**
                     * 获取Site access region. Valid values:
<li> global: global;</li>
<li>mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>This parameter is not allowed when the site uses no domain access method.
                     * @return Area Site access region. Valid values:
<li> global: global;</li>
<li>mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>This parameter is not allowed when the site uses no domain access method.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Site access region. Valid values:
<li> global: global;</li>
<li>mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>This parameter is not allowed when the site uses no domain access method.
                     * @param _area Site access region. Valid values:
<li> global: global;</li>
<li>mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>This parameter is not allowed when the site uses no domain access method.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Site name. This field is valid only when the site is switched from the no domain access method to the CNAME access method.
                     * @return ZoneName Site name. This field is valid only when the site is switched from the no domain access method to the CNAME access method.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name. This field is valid only when the site is switched from the no domain access method to the CNAME access method.
                     * @param _zoneName Site name. This field is valid only when the site is switched from the no domain access method to the CNAME access method.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site access method. Valid values:
<li>full: NS access;</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Custom site info used as an alternative to the default name server assigned by the system. Maintain the original configuration if not specified. This parameter cannot be passed when the site uses the no domain access method.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * Identical site identifier. Enter numbers, letters, ".", "-", and "_" only, up to 200 characters.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * Site access region. Valid values:
<li> global: global;</li>
<li>mainland: Chinese mainland;</li>
<li> overseas: outside the Chinese mainland.</li>This parameter is not allowed when the site uses no domain access method.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Site name. This field is valid only when the site is switched from the no domain access method to the CNAME access method.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_
