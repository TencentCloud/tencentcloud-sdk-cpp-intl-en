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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPWhitelist.h>
#include <tencentcloud/teo/v20220901/model/DiffIPWhitelist.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin protection info
                */
                class OriginProtectionInfo : public AbstractModel
                {
                public:
                    OriginProtectionInfo();
                    ~OriginProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Domain name list.
                     * @return Hosts Domain name list.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Domain name list.
                     * @param _hosts Domain name list.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取List of proxy IDs.
                     * @return ProxyIds List of proxy IDs.
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置List of proxy IDs.
                     * @param _proxyIds List of proxy IDs.
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取IP allowlist of the current version.
                     * @return CurrentIPWhitelist IP allowlist of the current version.
                     * 
                     */
                    IPWhitelist GetCurrentIPWhitelist() const;

                    /**
                     * 设置IP allowlist of the current version.
                     * @param _currentIPWhitelist IP allowlist of the current version.
                     * 
                     */
                    void SetCurrentIPWhitelist(const IPWhitelist& _currentIPWhitelist);

                    /**
                     * 判断参数 CurrentIPWhitelist 是否已赋值
                     * @return CurrentIPWhitelist 是否已赋值
                     * 
                     */
                    bool CurrentIPWhitelistHasBeenSet() const;

                    /**
                     * 获取Whether to update the origin server allowlist for this site. Valid values:
<li>true: The IP allowlist needs to be updated;</li>
<li>false: No need to update the IP allowlist.</li>
                     * @return NeedUpdate Whether to update the origin server allowlist for this site. Valid values:
<li>true: The IP allowlist needs to be updated;</li>
<li>false: No need to update the IP allowlist.</li>
                     * 
                     */
                    bool GetNeedUpdate() const;

                    /**
                     * 设置Whether to update the origin server allowlist for this site. Valid values:
<li>true: The IP allowlist needs to be updated;</li>
<li>false: No need to update the IP allowlist.</li>
                     * @param _needUpdate Whether to update the origin server allowlist for this site. Valid values:
<li>true: The IP allowlist needs to be updated;</li>
<li>false: No need to update the IP allowlist.</li>
                     * 
                     */
                    void SetNeedUpdate(const bool& _needUpdate);

                    /**
                     * 判断参数 NeedUpdate 是否已赋值
                     * @return NeedUpdate 是否已赋值
                     * 
                     */
                    bool NeedUpdateHasBeenSet() const;

                    /**
                     * 获取Origin protection status. Valid values:
<li>online: origin protection enabled;</li>
<li>offline: Origin protection disabled;</li>
<li>nonactivate: Origin protection is inactive. It is only returned in calls for sites that have never used the origin protection feature.</li>
                     * @return Status Origin protection status. Valid values:
<li>online: origin protection enabled;</li>
<li>offline: Origin protection disabled;</li>
<li>nonactivate: Origin protection is inactive. It is only returned in calls for sites that have never used the origin protection feature.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Origin protection status. Valid values:
<li>online: origin protection enabled;</li>
<li>offline: Origin protection disabled;</li>
<li>nonactivate: Origin protection is inactive. It is only returned in calls for sites that have never used the origin protection feature.</li>
                     * @param _status Origin protection status. Valid values:
<li>online: origin protection enabled;</li>
<li>offline: Origin protection disabled;</li>
<li>nonactivate: Origin protection is inactive. It is only returned in calls for sites that have never used the origin protection feature.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether origin protection is supported for the site package, with values:
<li>true: support;</li>
<li>false: not supported.</li>
                     * @return PlanSupport Whether origin protection is supported for the site package, with values:
<li>true: support;</li>
<li>false: not supported.</li>
                     * 
                     */
                    bool GetPlanSupport() const;

                    /**
                     * 设置Whether origin protection is supported for the site package, with values:
<li>true: support;</li>
<li>false: not supported.</li>
                     * @param _planSupport Whether origin protection is supported for the site package, with values:
<li>true: support;</li>
<li>false: not supported.</li>
                     * 
                     */
                    void SetPlanSupport(const bool& _planSupport);

                    /**
                     * 判断参数 PlanSupport 是否已赋值
                     * @return PlanSupport 是否已赋值
                     * 
                     */
                    bool PlanSupportHasBeenSet() const;

                    /**
                     * 获取Comparison between the latest IP allowlist and the current IP allowlist.
                     * @return DiffIPWhitelist Comparison between the latest IP allowlist and the current IP allowlist.
                     * 
                     */
                    DiffIPWhitelist GetDiffIPWhitelist() const;

                    /**
                     * 设置Comparison between the latest IP allowlist and the current IP allowlist.
                     * @param _diffIPWhitelist Comparison between the latest IP allowlist and the current IP allowlist.
                     * 
                     */
                    void SetDiffIPWhitelist(const DiffIPWhitelist& _diffIPWhitelist);

                    /**
                     * 判断参数 DiffIPWhitelist 是否已赋值
                     * @return DiffIPWhitelist 是否已赋值
                     * 
                     */
                    bool DiffIPWhitelistHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name list.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * List of proxy IDs.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * IP allowlist of the current version.
                     */
                    IPWhitelist m_currentIPWhitelist;
                    bool m_currentIPWhitelistHasBeenSet;

                    /**
                     * Whether to update the origin server allowlist for this site. Valid values:
<li>true: The IP allowlist needs to be updated;</li>
<li>false: No need to update the IP allowlist.</li>
                     */
                    bool m_needUpdate;
                    bool m_needUpdateHasBeenSet;

                    /**
                     * Origin protection status. Valid values:
<li>online: origin protection enabled;</li>
<li>offline: Origin protection disabled;</li>
<li>nonactivate: Origin protection is inactive. It is only returned in calls for sites that have never used the origin protection feature.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether origin protection is supported for the site package, with values:
<li>true: support;</li>
<li>false: not supported.</li>
                     */
                    bool m_planSupport;
                    bool m_planSupportHasBeenSet;

                    /**
                     * Comparison between the latest IP allowlist and the current IP allowlist.
                     */
                    DiffIPWhitelist m_diffIPWhitelist;
                    bool m_diffIPWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_
