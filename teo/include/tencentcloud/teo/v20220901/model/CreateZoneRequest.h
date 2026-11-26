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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateZone request structure.
                */
                class CreateZoneRequest : public AbstractModel
                {
                public:
                    CreateZoneRequest();
                    ~CreateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod managed access. To use this access mode, your domain name should have been hosted on DNSPod;</li>
<li>ai: Edge reasoning integration.</li>
                     * @return Type Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod managed access. To use this access mode, your domain name should have been hosted on DNSPod;</li>
<li>ai: Edge reasoning integration.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod managed access. To use this access mode, your domain name should have been hosted on DNSPod;</li>
<li>ai: Edge reasoning integration.</li>
                     * @param _type Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod managed access. To use this access mode, your domain name should have been hosted on DNSPod;</li>
<li>ai: Edge reasoning integration.</li>
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
                     * 获取Site name. For CNAME/NS access, pass in the second-level domain (example.com) as the site name. For domainless access, leave this value empty.
                     * @return ZoneName Site name. For CNAME/NS access, pass in the second-level domain (example.com) as the site name. For domainless access, leave this value empty.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name. For CNAME/NS access, pass in the second-level domain (example.com) as the site name. For domainless access, leave this value empty.
                     * @param _zoneName Site name. For CNAME/NS access, pass in the second-level domain (example.com) as the site name. For domainless access, leave this value empty.
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
                     * 获取Acceleration region of the layer-7 domain name when Type is partial/full. The following are the values for this parameter. If left empty, the default value is overseas. When Type is noDomainAccess, retain this value as empty:
<li> global: global availability zone;</li>
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland).</li>
                     * @return Area Acceleration region of the layer-7 domain name when Type is partial/full. The following are the values for this parameter. If left empty, the default value is overseas. When Type is noDomainAccess, retain this value as empty:
<li> global: global availability zone;</li>
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region of the layer-7 domain name when Type is partial/full. The following are the values for this parameter. If left empty, the default value is overseas. When Type is noDomainAccess, retain this value as empty:
<li> global: global availability zone;</li>
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland).</li>
                     * @param _area Acceleration region of the layer-7 domain name when Type is partial/full. The following are the values for this parameter. If left empty, the default value is overseas. When Type is noDomainAccess, retain this value as empty:
<li> global: global availability zone;</li>
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland).</li>
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
                     * 获取ID of the target bundle to bind. If your account already has a bundle, you can fill in this parameter to bind the site to it directly. If you currently have no bindable bundle, you can purchase one through [CreatePlan](https://www.tencentcloud.com/document/product/1552/105771?from_cn_redirect=1).
Note: If this parameter is not specified, a site in the "init" state will be created. The site is inactive and will not be displayed in the console. You can access [BindZoneToPlan](https://www.tencentcloud.com/document/product/1552/83042?from_cn_redirect=1) to bind a package and activate the site. After activation, the site can provide services properly.


                     * @return PlanId ID of the target bundle to bind. If your account already has a bundle, you can fill in this parameter to bind the site to it directly. If you currently have no bindable bundle, you can purchase one through [CreatePlan](https://www.tencentcloud.com/document/product/1552/105771?from_cn_redirect=1).
Note: If this parameter is not specified, a site in the "init" state will be created. The site is inactive and will not be displayed in the console. You can access [BindZoneToPlan](https://www.tencentcloud.com/document/product/1552/83042?from_cn_redirect=1) to bind a package and activate the site. After activation, the site can provide services properly.


                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置ID of the target bundle to bind. If your account already has a bundle, you can fill in this parameter to bind the site to it directly. If you currently have no bindable bundle, you can purchase one through [CreatePlan](https://www.tencentcloud.com/document/product/1552/105771?from_cn_redirect=1).
Note: If this parameter is not specified, a site in the "init" state will be created. The site is inactive and will not be displayed in the console. You can access [BindZoneToPlan](https://www.tencentcloud.com/document/product/1552/83042?from_cn_redirect=1) to bind a package and activate the site. After activation, the site can provide services properly.


                     * @param _planId ID of the target bundle to bind. If your account already has a bundle, you can fill in this parameter to bind the site to it directly. If you currently have no bindable bundle, you can purchase one through [CreatePlan](https://www.tencentcloud.com/document/product/1552/105771?from_cn_redirect=1).
Note: If this parameter is not specified, a site in the "init" state will be created. The site is inactive and will not be displayed in the console. You can access [BindZoneToPlan](https://www.tencentcloud.com/document/product/1552/83042?from_cn_redirect=1) to bind a package and activate the site. After activation, the site can provide services properly.


                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Identical site identifier. Only numbers, English letters, ".", "-", and "_" are allowed, up to 200 characters. For details, see [Identical Site Identifier](https://www.tencentcloud.com/document/product/1552/70202?from_cn_redirect=1). If this usage scenario does not apply, just leave this field empty.
                     * @return AliasZoneName Identical site identifier. Only numbers, English letters, ".", "-", and "_" are allowed, up to 200 characters. For details, see [Identical Site Identifier](https://www.tencentcloud.com/document/product/1552/70202?from_cn_redirect=1). If this usage scenario does not apply, just leave this field empty.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Identical site identifier. Only numbers, English letters, ".", "-", and "_" are allowed, up to 200 characters. For details, see [Identical Site Identifier](https://www.tencentcloud.com/document/product/1552/70202?from_cn_redirect=1). If this usage scenario does not apply, just leave this field empty.
                     * @param _aliasZoneName Identical site identifier. Only numbers, English letters, ".", "-", and "_" are allowed, up to 200 characters. For details, see [Identical Site Identifier](https://www.tencentcloud.com/document/product/1552/70202?from_cn_redirect=1). If this usage scenario does not apply, just leave this field empty.
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
                     * 获取Tag. This parameter is used for authority control and cost allocation of the site. You need to go to the [tag console](https://console.cloud.tencent.com/tag/taglist) to create the corresponding tag before you can input the corresponding tag key and tag value here.
                     * @return Tags Tag. This parameter is used for authority control and cost allocation of the site. You need to go to the [tag console](https://console.cloud.tencent.com/tag/taglist) to create the corresponding tag before you can input the corresponding tag key and tag value here.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag. This parameter is used for authority control and cost allocation of the site. You need to go to the [tag console](https://console.cloud.tencent.com/tag/taglist) to create the corresponding tag before you can input the corresponding tag key and tag value here.
                     * @param _tags Tag. This parameter is used for authority control and cost allocation of the site. You need to go to the [tag console](https://console.cloud.tencent.com/tag/taglist) to create the corresponding tag before you can input the corresponding tag key and tag value here.
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
                     * 获取Whether repeated access is allowed.
<li> true: Allow repeated access;</li>
<li> false: Duplicate integration is not allowed.</li>If this field is not specified, the default value 'false' will be used.
                     * @return AllowDuplicates Whether repeated access is allowed.
<li> true: Allow repeated access;</li>
<li> false: Duplicate integration is not allowed.</li>If this field is not specified, the default value 'false' will be used.
                     * @deprecated
                     */
                    bool GetAllowDuplicates() const;

                    /**
                     * 设置Whether repeated access is allowed.
<li> true: Allow repeated access;</li>
<li> false: Duplicate integration is not allowed.</li>If this field is not specified, the default value 'false' will be used.
                     * @param _allowDuplicates Whether repeated access is allowed.
<li> true: Allow repeated access;</li>
<li> false: Duplicate integration is not allowed.</li>If this field is not specified, the default value 'false' will be used.
                     * @deprecated
                     */
                    void SetAllowDuplicates(const bool& _allowDuplicates);

                    /**
                     * 判断参数 AllowDuplicates 是否已赋值
                     * @return AllowDuplicates 是否已赋值
                     * @deprecated
                     */
                    bool AllowDuplicatesHasBeenSet() const;

                    /**
                     * 获取Whether to skip scanning existing DNS records of the site. Default value: false.
                     * @return JumpStart Whether to skip scanning existing DNS records of the site. Default value: false.
                     * @deprecated
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置Whether to skip scanning existing DNS records of the site. Default value: false.
                     * @param _jumpStart Whether to skip scanning existing DNS records of the site. Default value: false.
                     * @deprecated
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     * @deprecated
                     */
                    bool JumpStartHasBeenSet() const;

                private:

                    /**
                     * Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod managed access. To use this access mode, your domain name should have been hosted on DNSPod;</li>
<li>ai: Edge reasoning integration.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Site name. For CNAME/NS access, pass in the second-level domain (example.com) as the site name. For domainless access, leave this value empty.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Acceleration region of the layer-7 domain name when Type is partial/full. The following are the values for this parameter. If left empty, the default value is overseas. When Type is noDomainAccess, retain this value as empty:
<li> global: global availability zone;</li>
<li>mainland: Chinese mainland availability zone;</li>
<li>overseas: global availability zone (excluding the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * ID of the target bundle to bind. If your account already has a bundle, you can fill in this parameter to bind the site to it directly. If you currently have no bindable bundle, you can purchase one through [CreatePlan](https://www.tencentcloud.com/document/product/1552/105771?from_cn_redirect=1).
Note: If this parameter is not specified, a site in the "init" state will be created. The site is inactive and will not be displayed in the console. You can access [BindZoneToPlan](https://www.tencentcloud.com/document/product/1552/83042?from_cn_redirect=1) to bind a package and activate the site. After activation, the site can provide services properly.


                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Identical site identifier. Only numbers, English letters, ".", "-", and "_" are allowed, up to 200 characters. For details, see [Identical Site Identifier](https://www.tencentcloud.com/document/product/1552/70202?from_cn_redirect=1). If this usage scenario does not apply, just leave this field empty.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * Tag. This parameter is used for authority control and cost allocation of the site. You need to go to the [tag console](https://console.cloud.tencent.com/tag/taglist) to create the corresponding tag before you can input the corresponding tag key and tag value here.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether repeated access is allowed.
<li> true: Allow repeated access;</li>
<li> false: Duplicate integration is not allowed.</li>If this field is not specified, the default value 'false' will be used.
                     */
                    bool m_allowDuplicates;
                    bool m_allowDuplicatesHasBeenSet;

                    /**
                     * Whether to skip scanning existing DNS records of the site. Default value: false.
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
