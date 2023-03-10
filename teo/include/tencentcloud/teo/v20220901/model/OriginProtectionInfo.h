/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Origin protection configuration
                */
                class OriginProtectionInfo : public AbstractModel
                {
                public:
                    OriginProtectionInfo();
                    ~OriginProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param ZoneId ID of the site.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of domain names.
                     * @return Hosts List of domain names.
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置List of domain names.
                     * @param Hosts List of domain names.
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取List of proxy IDs.
                     * @return ProxyIds List of proxy IDs.
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置List of proxy IDs.
                     * @param ProxyIds List of proxy IDs.
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取The existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CurrentIPWhitelist The existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    IPWhitelist GetCurrentIPWhitelist() const;

                    /**
                     * 设置The existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CurrentIPWhitelist The existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCurrentIPWhitelist(const IPWhitelist& _currentIPWhitelist);

                    /**
                     * 判断参数 CurrentIPWhitelist 是否已赋值
                     * @return CurrentIPWhitelist 是否已赋值
                     */
                    bool CurrentIPWhitelistHasBeenSet() const;

                    /**
                     * 获取Whether the intermediate IP update is needed for the site. Values:
<li>`true`: Update needed;</li>
<li>`false`: Update not needed.</li>
                     * @return NeedUpdate Whether the intermediate IP update is needed for the site. Values:
<li>`true`: Update needed;</li>
<li>`false`: Update not needed.</li>
                     */
                    bool GetNeedUpdate() const;

                    /**
                     * 设置Whether the intermediate IP update is needed for the site. Values:
<li>`true`: Update needed;</li>
<li>`false`: Update not needed.</li>
                     * @param NeedUpdate Whether the intermediate IP update is needed for the site. Values:
<li>`true`: Update needed;</li>
<li>`false`: Update not needed.</li>
                     */
                    void SetNeedUpdate(const bool& _needUpdate);

                    /**
                     * 判断参数 NeedUpdate 是否已赋值
                     * @return NeedUpdate 是否已赋值
                     */
                    bool NeedUpdateHasBeenSet() const;

                    /**
                     * 获取Status of the origin protection configuration. Values:
<li>`online`: Origin protection is activated;</li>
<li>`offline`: Origin protection is disabled.</li>
<li>`nonactivate`: Origin protection is not activated. This value is returned only when the feature is not activated before it’s used.</li>
                     * @return Status Status of the origin protection configuration. Values:
<li>`online`: Origin protection is activated;</li>
<li>`offline`: Origin protection is disabled.</li>
<li>`nonactivate`: Origin protection is not activated. This value is returned only when the feature is not activated before it’s used.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the origin protection configuration. Values:
<li>`online`: Origin protection is activated;</li>
<li>`offline`: Origin protection is disabled.</li>
<li>`nonactivate`: Origin protection is not activated. This value is returned only when the feature is not activated before it’s used.</li>
                     * @param Status Status of the origin protection configuration. Values:
<li>`online`: Origin protection is activated;</li>
<li>`offline`: Origin protection is disabled.</li>
<li>`nonactivate`: Origin protection is not activated. This value is returned only when the feature is not activated before it’s used.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether origin protection is supported in the plan. Values:
<li>`true`: Origin protection supported;</li>
<li>`false`: Origin protection not supported.</li>
                     * @return PlanSupport Whether origin protection is supported in the plan. Values:
<li>`true`: Origin protection supported;</li>
<li>`false`: Origin protection not supported.</li>
                     */
                    bool GetPlanSupport() const;

                    /**
                     * 设置Whether origin protection is supported in the plan. Values:
<li>`true`: Origin protection supported;</li>
<li>`false`: Origin protection not supported.</li>
                     * @param PlanSupport Whether origin protection is supported in the plan. Values:
<li>`true`: Origin protection supported;</li>
<li>`false`: Origin protection not supported.</li>
                     */
                    void SetPlanSupport(const bool& _planSupport);

                    /**
                     * 判断参数 PlanSupport 是否已赋值
                     * @return PlanSupport 是否已赋值
                     */
                    bool PlanSupportHasBeenSet() const;

                    /**
                     * 获取Differences between the latest and existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiffIPWhitelist Differences between the latest and existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    DiffIPWhitelist GetDiffIPWhitelist() const;

                    /**
                     * 设置Differences between the latest and existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DiffIPWhitelist Differences between the latest and existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDiffIPWhitelist(const DiffIPWhitelist& _diffIPWhitelist);

                    /**
                     * 判断参数 DiffIPWhitelist 是否已赋值
                     * @return DiffIPWhitelist 是否已赋值
                     */
                    bool DiffIPWhitelistHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of domain names.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * List of proxy IDs.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * The existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    IPWhitelist m_currentIPWhitelist;
                    bool m_currentIPWhitelistHasBeenSet;

                    /**
                     * Whether the intermediate IP update is needed for the site. Values:
<li>`true`: Update needed;</li>
<li>`false`: Update not needed.</li>
                     */
                    bool m_needUpdate;
                    bool m_needUpdateHasBeenSet;

                    /**
                     * Status of the origin protection configuration. Values:
<li>`online`: Origin protection is activated;</li>
<li>`offline`: Origin protection is disabled.</li>
<li>`nonactivate`: Origin protection is not activated. This value is returned only when the feature is not activated before it’s used.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether origin protection is supported in the plan. Values:
<li>`true`: Origin protection supported;</li>
<li>`false`: Origin protection not supported.</li>
                     */
                    bool m_planSupport;
                    bool m_planSupportHasBeenSet;

                    /**
                     * Differences between the latest and existing intermediate IPs.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    DiffIPWhitelist m_diffIPWhitelist;
                    bool m_diffIPWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_
