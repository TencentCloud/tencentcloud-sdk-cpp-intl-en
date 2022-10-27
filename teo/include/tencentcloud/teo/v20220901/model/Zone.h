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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>
#include <tencentcloud/teo/v20220901/model/Resource.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServers.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServersIps.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Site information
                */
                class Zone : public AbstractModel
                {
                public:
                    Zone();
                    ~Zone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The site name.
                     * @return ZoneName The site name.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param ZoneName The site name.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取List of name servers used by the site
                     * @return OriginalNameServers List of name servers used by the site
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置List of name servers used by the site
                     * @param OriginalNameServers List of name servers used by the site
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取The list of name servers assigned by Tencent Cloud.
                     * @return NameServers The list of name servers assigned by Tencent Cloud.
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置The list of name servers assigned by Tencent Cloud.
                     * @param NameServers The list of name servers assigned by Tencent Cloud.
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取The site status. Values:
<li>`active`: The name server is switched.</li>
<li>`pending`: The name server is not switched.</li>
<li>`moved`: The name server is moved.</li>
<li>`deactivated`: The site is blocked.</li>
                     * @return Status The site status. Values:
<li>`active`: The name server is switched.</li>
<li>`pending`: The name server is not switched.</li>
<li>`moved`: The name server is moved.</li>
<li>`deactivated`: The site is blocked.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The site status. Values:
<li>`active`: The name server is switched.</li>
<li>`pending`: The name server is not switched.</li>
<li>`moved`: The name server is moved.</li>
<li>`deactivated`: The site is blocked.</li>
                     * @param Status The site status. Values:
<li>`active`: The name server is switched.</li>
<li>`pending`: The name server is not switched.</li>
<li>`moved`: The name server is moved.</li>
<li>`deactivated`: The site is blocked.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The site access method. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>
                     * @return Type The site access method. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The site access method. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>
                     * @param Type The site access method. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether the site is disabled.
                     * @return Paused Whether the site is disabled.
                     */
                    bool GetPaused() const;

                    /**
                     * 设置Whether the site is disabled.
                     * @param Paused Whether the site is disabled.
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取Whether CNAME flattening is enabled. Valid values:
<li>`enabled`: Enabled.</li>
<li>`disabled`: Disabled.</li>
                     * @return CnameSpeedUp Whether CNAME flattening is enabled. Valid values:
<li>`enabled`: Enabled.</li>
<li>`disabled`: Disabled.</li>
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置Whether CNAME flattening is enabled. Valid values:
<li>`enabled`: Enabled.</li>
<li>`disabled`: Disabled.</li>
                     * @param CnameSpeedUp Whether CNAME flattening is enabled. Valid values:
<li>`enabled`: Enabled.</li>
<li>`disabled`: Disabled.</li>
                     */
                    void SetCnameSpeedUp(const std::string& _cnameSpeedUp);

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * @return CnameStatus CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 设置CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * @param CnameStatus CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     */
                    void SetCnameStatus(const std::string& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取The list of resource tags.
                     * @return Tags The list of resource tags.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of resource tags.
                     * @param Tags The list of resource tags.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The list of billable resources.
                     * @return Resources The list of billable resources.
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 设置The list of billable resources.
                     * @param Resources The list of billable resources.
                     */
                    void SetResources(const std::vector<Resource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取The creation time of the site.
                     * @return CreatedOn The creation time of the site.
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time of the site.
                     * @param CreatedOn The creation time of the site.
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The modification date of the site.
                     * @return ModifiedOn The modification date of the site.
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置The modification date of the site.
                     * @param ModifiedOn The modification date of the site.
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取The site access region. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     * @return Area The site access region. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The site access region. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     * @param Area The site access region. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The custom name server information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VanityNameServers The custom name server information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置The custom name server information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VanityNameServers The custom name server information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVanityNameServers(const VanityNameServers& _vanityNameServers);

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取The custom name server IP information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VanityNameServersIps The custom name server IP information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 设置The custom name server IP information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VanityNameServersIps The custom name server IP information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVanityNameServersIps(const std::vector<VanityNameServersIps>& _vanityNameServersIps);

                    /**
                     * 判断参数 VanityNameServersIps 是否已赋值
                     * @return VanityNameServersIps 是否已赋值
                     */
                    bool VanityNameServersIpsHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * List of name servers used by the site
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * The list of name servers assigned by Tencent Cloud.
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * The site status. Values:
<li>`active`: The name server is switched.</li>
<li>`pending`: The name server is not switched.</li>
<li>`moved`: The name server is moved.</li>
<li>`deactivated`: The site is blocked.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The site access method. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the site is disabled.
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * Whether CNAME flattening is enabled. Valid values:
<li>`enabled`: Enabled.</li>
<li>`disabled`: Disabled.</li>
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * The list of resource tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The list of billable resources.
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * The creation time of the site.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The modification date of the site.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * The site access region. Values:
<li>`global`: Global.</li>
<li>`mainland`: Chinese mainland.</li>
<li>`overseas`: Outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The custom name server information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * The custom name server IP information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONE_H_