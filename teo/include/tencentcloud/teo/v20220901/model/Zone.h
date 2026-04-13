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
#include <tencentcloud/teo/v20220901/model/NSDetail.h>
#include <tencentcloud/teo/v20220901/model/CNAMEDetail.h>
#include <tencentcloud/teo/v20220901/model/DNSPodDetail.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServers.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServersIps.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupWorkModeInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Site detail.
                */
                class Zone : public AbstractModel
                {
                public:
                    Zone();
                    ~Zone() = default;
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
                     * 获取Identical site identifier. specifies a composite of numbers, english letters, ".", "-", and "_" with a character limit of 200.
                     * @return AliasZoneName Identical site identifier. specifies a composite of numbers, english letters, ".", "-", and "_" with a character limit of 200.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Identical site identifier. specifies a composite of numbers, english letters, ".", "-", and "_" with a character limit of 200.
                     * @param _aliasZoneName Identical site identifier. specifies a composite of numbers, english letters, ".", "-", and "_" with a character limit of 200.
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
                     * 获取Site acceleration region. valid values:.
<Li>Global: global availability zone.</li>.
<Li>Mainland: chinese mainland availability zone.</li>.
<li>overseas: global availability zone (excluding the chinese mainland).</li>.
                     * @return Area Site acceleration region. valid values:.
<Li>Global: global availability zone.</li>.
<Li>Mainland: chinese mainland availability zone.</li>.
<li>overseas: global availability zone (excluding the chinese mainland).</li>.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Site acceleration region. valid values:.
<Li>Global: global availability zone.</li>.
<Li>Mainland: chinese mainland availability zone.</li>.
<li>overseas: global availability zone (excluding the chinese mainland).</li>.
                     * @param _area Site acceleration region. valid values:.
<Li>Global: global availability zone.</li>.
<Li>Mainland: chinese mainland availability zone.</li>.
<li>overseas: global availability zone (excluding the chinese mainland).</li>.
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
                     * 获取Site access type. valid values:.
<li>full: NS access type;</li>.
<li>partial: CNAME access type;</li>.
<li>noDomainAccess: domainless access type.</li>.
<li>dnsPodAccess: DNSPod managed type. this type requires your domain name to be hosted on tencent cloud DNSPod.</li>.
<li> pages: pages data type;</li>.
<li>ai: edge reasoning access type.</li>.
                     * @return Type Site access type. valid values:.
<li>full: NS access type;</li>.
<li>partial: CNAME access type;</li>.
<li>noDomainAccess: domainless access type.</li>.
<li>dnsPodAccess: DNSPod managed type. this type requires your domain name to be hosted on tencent cloud DNSPod.</li>.
<li> pages: pages data type;</li>.
<li>ai: edge reasoning access type.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Site access type. valid values:.
<li>full: NS access type;</li>.
<li>partial: CNAME access type;</li>.
<li>noDomainAccess: domainless access type.</li>.
<li>dnsPodAccess: DNSPod managed type. this type requires your domain name to be hosted on tencent cloud DNSPod.</li>.
<li> pages: pages data type;</li>.
<li>ai: edge reasoning access type.</li>.
                     * @param _type Site access type. valid values:.
<li>full: NS access type;</li>.
<li>partial: CNAME access type;</li>.
<li>noDomainAccess: domainless access type.</li>.
<li>dnsPodAccess: DNSPod managed type. this type requires your domain name to be hosted on tencent cloud DNSPod.</li>.
<li> pages: pages data type;</li>.
<li>ai: edge reasoning access type.</li>.
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
                     * 获取Specifies the Tag associated with the site.
                     * @return Tags Specifies the Tag associated with the site.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Specifies the Tag associated with the site.
                     * @param _tags Specifies the Tag associated with the site.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The list of billable resources.
                     * @return Resources The list of billable resources.
                     * 
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 设置The list of billable resources.
                     * @param _resources The list of billable resources.
                     * 
                     */
                    void SetResources(const std::vector<Resource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取NS site detail. returned only when Type = full.
                     * @return NSDetail NS site detail. returned only when Type = full.
                     * 
                     */
                    NSDetail GetNSDetail() const;

                    /**
                     * 设置NS site detail. returned only when Type = full.
                     * @param _nSDetail NS site detail. returned only when Type = full.
                     * 
                     */
                    void SetNSDetail(const NSDetail& _nSDetail);

                    /**
                     * 判断参数 NSDetail 是否已赋值
                     * @return NSDetail 是否已赋值
                     * 
                     */
                    bool NSDetailHasBeenSet() const;

                    /**
                     * 获取CNAME site detail. returned only when Type = partial.
                     * @return CNAMEDetail CNAME site detail. returned only when Type = partial.
                     * 
                     */
                    CNAMEDetail GetCNAMEDetail() const;

                    /**
                     * 设置CNAME site detail. returned only when Type = partial.
                     * @param _cNAMEDetail CNAME site detail. returned only when Type = partial.
                     * 
                     */
                    void SetCNAMEDetail(const CNAMEDetail& _cNAMEDetail);

                    /**
                     * 判断参数 CNAMEDetail 是否已赋值
                     * @return CNAMEDetail 是否已赋值
                     * 
                     */
                    bool CNAMEDetailHasBeenSet() const;

                    /**
                     * 获取DNSPod managed Type site detail. returned only when Type = dnsPodAccess.
                     * @return DNSPodDetail DNSPod managed Type site detail. returned only when Type = dnsPodAccess.
                     * 
                     */
                    DNSPodDetail GetDNSPodDetail() const;

                    /**
                     * 设置DNSPod managed Type site detail. returned only when Type = dnsPodAccess.
                     * @param _dNSPodDetail DNSPod managed Type site detail. returned only when Type = dnsPodAccess.
                     * 
                     */
                    void SetDNSPodDetail(const DNSPodDetail& _dNSPodDetail);

                    /**
                     * 判断参数 DNSPodDetail 是否已赋值
                     * @return DNSPodDetail 是否已赋值
                     * 
                     */
                    bool DNSPodDetailHasBeenSet() const;

                    /**
                     * 获取The creation time of the site.
                     * @return CreatedOn The creation time of the site.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time of the site.
                     * @param _createdOn The creation time of the site.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The modification date of the site.
                     * @return ModifiedOn The modification date of the site.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置The modification date of the site.
                     * @param _modifiedOn The modification date of the site.
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取The site status. Values:
u200c<li>`active`: The name server is switched to EdgeOne.</li>
u200c<li>`pending`: The name server is not switched.</li>
u200c<li>`moved`: The name server is changed to other service providers.</li>
u200c<li>`deactivated`: The site is blocked.</li>
<li>`initializing`: The site is not bound with any plan. </li>
                     * @return Status The site status. Values:
u200c<li>`active`: The name server is switched to EdgeOne.</li>
u200c<li>`pending`: The name server is not switched.</li>
u200c<li>`moved`: The name server is changed to other service providers.</li>
u200c<li>`deactivated`: The site is blocked.</li>
<li>`initializing`: The site is not bound with any plan. </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The site status. Values:
u200c<li>`active`: The name server is switched to EdgeOne.</li>
u200c<li>`pending`: The name server is not switched.</li>
u200c<li>`moved`: The name server is changed to other service providers.</li>
u200c<li>`deactivated`: The site is blocked.</li>
<li>`initializing`: The site is not bound with any plan. </li>
                     * @param _status The site status. Values:
u200c<li>`active`: The name server is switched to EdgeOne.</li>
u200c<li>`pending`: The name server is not switched.</li>
u200c<li>`moved`: The name server is changed to other service providers.</li>
u200c<li>`deactivated`: The site is blocked.</li>
<li>`initializing`: The site is not bound with any plan. </li>
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
                     * 获取CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * @return CnameStatus CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * 
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 设置CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * @param _cnameStatus CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     * 
                     */
                    void SetCnameStatus(const std::string& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取Status of the proxy. Values:
<li>`active`: Enabled</li>
<li>`inactive`: Not activated</li>
<li>`paused`: Disabled</li>
                     * @return ActiveStatus Status of the proxy. Values:
<li>`active`: Enabled</li>
<li>`inactive`: Not activated</li>
<li>`paused`: Disabled</li>
                     * 
                     */
                    std::string GetActiveStatus() const;

                    /**
                     * 设置Status of the proxy. Values:
<li>`active`: Enabled</li>
<li>`inactive`: Not activated</li>
<li>`paused`: Disabled</li>
                     * @param _activeStatus Status of the proxy. Values:
<li>`active`: Enabled</li>
<li>`inactive`: Not activated</li>
<li>`paused`: Disabled</li>
                     * 
                     */
                    void SetActiveStatus(const std::string& _activeStatus);

                    /**
                     * 判断参数 ActiveStatus 是否已赋值
                     * @return ActiveStatus 是否已赋值
                     * 
                     */
                    bool ActiveStatusHasBeenSet() const;

                    /**
                     * 获取Lock status. Values: <li>`enable`: Normal. Modification is allowed.</li><li>`disable`: Locked. Modification is not allowed.</li><li>`plan_migrate`: Adjusting the plan. Modification is not allowed.</li> 
                     * @return LockStatus Lock status. Values: <li>`enable`: Normal. Modification is allowed.</li><li>`disable`: Locked. Modification is not allowed.</li><li>`plan_migrate`: Adjusting the plan. Modification is not allowed.</li> 
                     * 
                     */
                    std::string GetLockStatus() const;

                    /**
                     * 设置Lock status. Values: <li>`enable`: Normal. Modification is allowed.</li><li>`disable`: Locked. Modification is not allowed.</li><li>`plan_migrate`: Adjusting the plan. Modification is not allowed.</li> 
                     * @param _lockStatus Lock status. Values: <li>`enable`: Normal. Modification is allowed.</li><li>`disable`: Locked. Modification is not allowed.</li><li>`plan_migrate`: Adjusting the plan. Modification is not allowed.</li> 
                     * 
                     */
                    void SetLockStatus(const std::string& _lockStatus);

                    /**
                     * 判断参数 LockStatus 是否已赋值
                     * @return LockStatus 是否已赋值
                     * 
                     */
                    bool LockStatusHasBeenSet() const;

                    /**
                     * 获取Whether the site is disabled.
                     * @return Paused Whether the site is disabled.
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置Whether the site is disabled.
                     * @param _paused Whether the site is disabled.
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is a fake site (this field is a historic reserved field and is no longer maintained, refer to the website type for the corresponding field). valid values:.
<Li>0: non-fake site.</li>.
<Li>1: fake site.</li>.

                     * @return IsFake Specifies whether it is a fake site (this field is a historic reserved field and is no longer maintained, refer to the website type for the corresponding field). valid values:.
<Li>0: non-fake site.</li>.
<Li>1: fake site.</li>.

                     * 
                     */
                    int64_t GetIsFake() const;

                    /**
                     * 设置Specifies whether it is a fake site (this field is a historic reserved field and is no longer maintained, refer to the website type for the corresponding field). valid values:.
<Li>0: non-fake site.</li>.
<Li>1: fake site.</li>.

                     * @param _isFake Specifies whether it is a fake site (this field is a historic reserved field and is no longer maintained, refer to the website type for the corresponding field). valid values:.
<Li>0: non-fake site.</li>.
<Li>1: fake site.</li>.

                     * 
                     */
                    void SetIsFake(const int64_t& _isFake);

                    /**
                     * 判断参数 IsFake 是否已赋值
                     * @return IsFake 是否已赋值
                     * 
                     */
                    bool IsFakeHasBeenSet() const;

                    /**
                     * 获取Whether to enable CNAME acceleration (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field). valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * @return CnameSpeedUp Whether to enable CNAME acceleration (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field). valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置Whether to enable CNAME acceleration (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field). valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * @param _cnameSpeedUp Whether to enable CNAME acceleration (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field). valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * 
                     */
                    void SetCnameSpeedUp(const std::string& _cnameSpeedUp);

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     * 
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取Ownership verification information. (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return OwnershipVerification Ownership verification information. (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置Ownership verification information. (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _ownershipVerification Ownership verification information. (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                    /**
                     * 获取Lists the currently used NS of the site. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field based on the website type.).
                     * @return OriginalNameServers Lists the currently used NS of the site. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field based on the website type.).
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置Lists the currently used NS of the site. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field based on the website type.).
                     * @param _originalNameServers Lists the currently used NS of the site. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field based on the website type.).
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取Lists of NS assigned by tencent cloud. (this field is a historic reserved field and no longer maintained. refer to the website type for the corresponding field.).
                     * @return NameServers Lists of NS assigned by tencent cloud. (this field is a historic reserved field and no longer maintained. refer to the website type for the corresponding field.).
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置Lists of NS assigned by tencent cloud. (this field is a historic reserved field and no longer maintained. refer to the website type for the corresponding field.).
                     * @param _nameServers Lists of NS assigned by tencent cloud. (this field is a historic reserved field and no longer maintained. refer to the website type for the corresponding field.).
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取Specifies user-customized NS information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return VanityNameServers Specifies user-customized NS information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置Specifies user-customized NS information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _vanityNameServers Specifies user-customized NS information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取User-Customized NS IP information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return VanityNameServersIps User-Customized NS IP information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 设置User-Customized NS IP information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _vanityNameServersIps User-Customized NS IP information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetVanityNameServersIps(const std::vector<VanityNameServersIps>& _vanityNameServersIps);

                    /**
                     * 判断参数 VanityNameServersIps 是否已赋值
                     * @return VanityNameServersIps 是否已赋值
                     * 
                     */
                    bool VanityNameServersIpsHasBeenSet() const;

                    /**
                     * 获取Version management configuration group working mode. site configuration modules can enable "version management mode" or "immediate effect mode" by configuration group dimension. for details, see [version management](https://www.tencentcloud.comom/document/product/1552/113690?from_cn_redirect=1).
                     * @return WorkModeInfos Version management configuration group working mode. site configuration modules can enable "version management mode" or "immediate effect mode" by configuration group dimension. for details, see [version management](https://www.tencentcloud.comom/document/product/1552/113690?from_cn_redirect=1).
                     * 
                     */
                    std::vector<ConfigGroupWorkModeInfo> GetWorkModeInfos() const;

                    /**
                     * 设置Version management configuration group working mode. site configuration modules can enable "version management mode" or "immediate effect mode" by configuration group dimension. for details, see [version management](https://www.tencentcloud.comom/document/product/1552/113690?from_cn_redirect=1).
                     * @param _workModeInfos Version management configuration group working mode. site configuration modules can enable "version management mode" or "immediate effect mode" by configuration group dimension. for details, see [version management](https://www.tencentcloud.comom/document/product/1552/113690?from_cn_redirect=1).
                     * 
                     */
                    void SetWorkModeInfos(const std::vector<ConfigGroupWorkModeInfo>& _workModeInfos);

                    /**
                     * 判断参数 WorkModeInfos 是否已赋值
                     * @return WorkModeInfos 是否已赋值
                     * 
                     */
                    bool WorkModeInfosHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Identical site identifier. specifies a composite of numbers, english letters, ".", "-", and "_" with a character limit of 200.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * Site acceleration region. valid values:.
<Li>Global: global availability zone.</li>.
<Li>Mainland: chinese mainland availability zone.</li>.
<li>overseas: global availability zone (excluding the chinese mainland).</li>.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Site access type. valid values:.
<li>full: NS access type;</li>.
<li>partial: CNAME access type;</li>.
<li>noDomainAccess: domainless access type.</li>.
<li>dnsPodAccess: DNSPod managed type. this type requires your domain name to be hosted on tencent cloud DNSPod.</li>.
<li> pages: pages data type;</li>.
<li>ai: edge reasoning access type.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the Tag associated with the site.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The list of billable resources.
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * NS site detail. returned only when Type = full.
                     */
                    NSDetail m_nSDetail;
                    bool m_nSDetailHasBeenSet;

                    /**
                     * CNAME site detail. returned only when Type = partial.
                     */
                    CNAMEDetail m_cNAMEDetail;
                    bool m_cNAMEDetailHasBeenSet;

                    /**
                     * DNSPod managed Type site detail. returned only when Type = dnsPodAccess.
                     */
                    DNSPodDetail m_dNSPodDetail;
                    bool m_dNSPodDetailHasBeenSet;

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
                     * The site status. Values:
u200c<li>`active`: The name server is switched to EdgeOne.</li>
u200c<li>`pending`: The name server is not switched.</li>
u200c<li>`moved`: The name server is changed to other service providers.</li>
u200c<li>`deactivated`: The site is blocked.</li>
<li>`initializing`: The site is not bound with any plan. </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CNAME record access status. Values:
<li>`finished`: The site is verified.</li>
<li>`pending`: The site is being verified.</li>
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * Status of the proxy. Values:
<li>`active`: Enabled</li>
<li>`inactive`: Not activated</li>
<li>`paused`: Disabled</li>
                     */
                    std::string m_activeStatus;
                    bool m_activeStatusHasBeenSet;

                    /**
                     * Lock status. Values: <li>`enable`: Normal. Modification is allowed.</li><li>`disable`: Locked. Modification is not allowed.</li><li>`plan_migrate`: Adjusting the plan. Modification is not allowed.</li> 
                     */
                    std::string m_lockStatus;
                    bool m_lockStatusHasBeenSet;

                    /**
                     * Whether the site is disabled.
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * Specifies whether it is a fake site (this field is a historic reserved field and is no longer maintained, refer to the website type for the corresponding field). valid values:.
<Li>0: non-fake site.</li>.
<Li>1: fake site.</li>.

                     */
                    int64_t m_isFake;
                    bool m_isFakeHasBeenSet;

                    /**
                     * Whether to enable CNAME acceleration (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field). valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * Ownership verification information. (this field is a historic reserved field and is no longer maintained. refer to the website type for the corresponding field.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * Lists the currently used NS of the site. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field based on the website type.).
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * Lists of NS assigned by tencent cloud. (this field is a historic reserved field and no longer maintained. refer to the website type for the corresponding field.).
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * Specifies user-customized NS information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * User-Customized NS IP information. (this field is a historic reserved field and is no longer maintained. refer to the corresponding field according to the website type.).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                    /**
                     * Version management configuration group working mode. site configuration modules can enable "version management mode" or "immediate effect mode" by configuration group dimension. for details, see [version management](https://www.tencentcloud.comom/document/product/1552/113690?from_cn_redirect=1).
                     */
                    std::vector<ConfigGroupWorkModeInfo> m_workModeInfos;
                    bool m_workModeInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONE_H_
