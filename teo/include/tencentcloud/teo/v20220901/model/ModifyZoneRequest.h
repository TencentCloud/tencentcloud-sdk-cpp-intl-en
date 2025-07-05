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
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
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
<li>full: NS access.</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * @return Type Site access method. Valid values:
<li>full: NS access.</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Site access method. Valid values:
<li>full: NS access.</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     * @param _type Site access method. Valid values:
<li>full: NS access.</li>
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
                     * 获取The custom name servers. The original configuration applies if this field is not specified. It is not allowed to pass this field when a site is connected without using a domain name.
                     * @return VanityNameServers The custom name servers. The original configuration applies if this field is not specified. It is not allowed to pass this field when a site is connected without using a domain name.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置The custom name servers. The original configuration applies if this field is not specified. It is not allowed to pass this field when a site is connected without using a domain name.
                     * @param _vanityNameServers The custom name servers. The original configuration applies if this field is not specified. It is not allowed to pass this field when a site is connected without using a domain name.
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
                     * 获取The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
                     * @return AliasZoneName The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
                     * @param _aliasZoneName The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
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
                     * 获取The region where the site requests access. Values:
<li> `global`: Global coverage</li>
<li> `mainland`: Chinese mainland</li>
<li> `overseas`: Outside the Chinese mainland </li>It is not allowed to pass this field when a site is connected without using a domain name.
                     * @return Area The region where the site requests access. Values:
<li> `global`: Global coverage</li>
<li> `mainland`: Chinese mainland</li>
<li> `overseas`: Outside the Chinese mainland </li>It is not allowed to pass this field when a site is connected without using a domain name.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The region where the site requests access. Values:
<li> `global`: Global coverage</li>
<li> `mainland`: Chinese mainland</li>
<li> `overseas`: Outside the Chinese mainland </li>It is not allowed to pass this field when a site is connected without using a domain name.
                     * @param _area The region where the site requests access. Values:
<li> `global`: Global coverage</li>
<li> `mainland`: Chinese mainland</li>
<li> `overseas`: Outside the Chinese mainland </li>It is not allowed to pass this field when a site is connected without using a domain name.
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
                     * 获取Name of the site. This field takes effect only when the site switches from domainless access to CNAME access.
                     * @return ZoneName Name of the site. This field takes effect only when the site switches from domainless access to CNAME access.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the site. This field takes effect only when the site switches from domainless access to CNAME access.
                     * @param _zoneName Name of the site. This field takes effect only when the site switches from domainless access to CNAME access.
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
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site access method. Valid values:
<li>full: NS access.</li>
<li>partial: CNAME access. If the site is currently accessed with no domain name, it can be switched only to CNAME access.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The custom name servers. The original configuration applies if this field is not specified. It is not allowed to pass this field when a site is connected without using a domain name.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * The region where the site requests access. Values:
<li> `global`: Global coverage</li>
<li> `mainland`: Chinese mainland</li>
<li> `overseas`: Outside the Chinese mainland </li>It is not allowed to pass this field when a site is connected without using a domain name.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Name of the site. This field takes effect only when the site switches from domainless access to CNAME access.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEREQUEST_H_
