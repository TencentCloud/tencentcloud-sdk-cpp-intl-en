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
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>
                     * @return Type Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>
                     * @param _type Site access type. If this parameter is not input, the default value `partial` is used. Valid values of this parameter are as follows:
<li>partial: CNAME access;</li>
<li>full: NS access;</li>
<li>noDomainAccess: access with no domain name.</li>
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>
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
                     * 获取Site name. For sites connected via CNAME/NS, pass in the secondary domain name (example.com). Leave it blank if the site is connected without a domain name. 
                     * @return ZoneName Site name. For sites connected via CNAME/NS, pass in the secondary domain name (example.com). Leave it blank if the site is connected without a domain name. 
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name. For sites connected via CNAME/NS, pass in the secondary domain name (example.com). Leave it blank if the site is connected without a domain name. 
                     * @param _zoneName Site name. For sites connected via CNAME/NS, pass in the secondary domain name (example.com). Leave it blank if the site is connected without a domain name. 
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
                     * 获取The acceleration area of the L7 domain name when `Type` is `partial` or `full`. When Type is `noDomainAccess`, please leave it blank.
<li>`global`: Global AZs</li>
<li>`mainland`: AZs in the Chinese mainland</li>
<li>`overseas`: (Default) AZs outside the Chinese mainland </li>
                     * @return Area The acceleration area of the L7 domain name when `Type` is `partial` or `full`. When Type is `noDomainAccess`, please leave it blank.
<li>`global`: Global AZs</li>
<li>`mainland`: AZs in the Chinese mainland</li>
<li>`overseas`: (Default) AZs outside the Chinese mainland </li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The acceleration area of the L7 domain name when `Type` is `partial` or `full`. When Type is `noDomainAccess`, please leave it blank.
<li>`global`: Global AZs</li>
<li>`mainland`: AZs in the Chinese mainland</li>
<li>`overseas`: (Default) AZs outside the Chinese mainland </li>
                     * @param _area The acceleration area of the L7 domain name when `Type` is `partial` or `full`. When Type is `noDomainAccess`, please leave it blank.
<li>`global`: Global AZs</li>
<li>`mainland`: AZs in the Chinese mainland</li>
<li>`overseas`: (Default) AZs outside the Chinese mainland </li>
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
                     * 获取Target package ID to bind. when a package already exists under your account, you can fill in this parameter to directly bind the site to the package. if there are currently no bindable packages, you can purchase a package via [CreatePlan](https://intl.cloud.tencent.com/document/product/1552/105771?from_cn_redirect=1).
Note: if this parameter is not specified, a site in "init" status will be created. the site is inactive and will not be displayed in the console. you can bind a package and activate the site through [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1). after activation, the site can provide service properly.


                     * @return PlanId Target package ID to bind. when a package already exists under your account, you can fill in this parameter to directly bind the site to the package. if there are currently no bindable packages, you can purchase a package via [CreatePlan](https://intl.cloud.tencent.com/document/product/1552/105771?from_cn_redirect=1).
Note: if this parameter is not specified, a site in "init" status will be created. the site is inactive and will not be displayed in the console. you can bind a package and activate the site through [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1). after activation, the site can provide service properly.


                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Target package ID to bind. when a package already exists under your account, you can fill in this parameter to directly bind the site to the package. if there are currently no bindable packages, you can purchase a package via [CreatePlan](https://intl.cloud.tencent.com/document/product/1552/105771?from_cn_redirect=1).
Note: if this parameter is not specified, a site in "init" status will be created. the site is inactive and will not be displayed in the console. you can bind a package and activate the site through [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1). after activation, the site can provide service properly.


                     * @param _planId Target package ID to bind. when a package already exists under your account, you can fill in this parameter to directly bind the site to the package. if there are currently no bindable packages, you can purchase a package via [CreatePlan](https://intl.cloud.tencent.com/document/product/1552/105771?from_cn_redirect=1).
Note: if this parameter is not specified, a site in "init" status will be created. the site is inactive and will not be displayed in the console. you can bind a package and activate the site through [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1). after activation, the site can provide service properly.


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
                     * 获取Identical site identifier. limits input to numbers, english letters, ".", "-", and "_", with a character limit of 200 characters. for details, see identical site identifier (https://intl.cloud.tencent.com/document/product/1552/70202?from_cn_redirect=1). leave this field blank if this usage scenario does not apply.
                     * @return AliasZoneName Identical site identifier. limits input to numbers, english letters, ".", "-", and "_", with a character limit of 200 characters. for details, see identical site identifier (https://intl.cloud.tencent.com/document/product/1552/70202?from_cn_redirect=1). leave this field blank if this usage scenario does not apply.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Identical site identifier. limits input to numbers, english letters, ".", "-", and "_", with a character limit of 200 characters. for details, see identical site identifier (https://intl.cloud.tencent.com/document/product/1552/70202?from_cn_redirect=1). leave this field blank if this usage scenario does not apply.
                     * @param _aliasZoneName Identical site identifier. limits input to numbers, english letters, ".", "-", and "_", with a character limit of 200 characters. for details, see identical site identifier (https://intl.cloud.tencent.com/document/product/1552/70202?from_cn_redirect=1). leave this field blank if this usage scenario does not apply.
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
                     * 获取Tags of the site. To create tags, go to the [Tag Console](https://console.cloud.tencent.com/tag/taglist).
                     * @return Tags Tags of the site. To create tags, go to the [Tag Console](https://console.cloud.tencent.com/tag/taglist).
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags of the site. To create tags, go to the [Tag Console](https://console.cloud.tencent.com/tag/taglist).
                     * @param _tags Tags of the site. To create tags, go to the [Tag Console](https://console.cloud.tencent.com/tag/taglist).
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
                     * 获取Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     * @return AllowDuplicates Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     * @deprecated
                     */
                    bool GetAllowDuplicates() const;

                    /**
                     * 设置Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     * @param _allowDuplicates Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
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
                     * 获取Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @return JumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @deprecated
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @param _jumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
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
<li>dnsPodAccess: DNSPod hosted access. To use this access mode, your domain name should have been hosted on DNSPod.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Site name. For sites connected via CNAME/NS, pass in the secondary domain name (example.com). Leave it blank if the site is connected without a domain name. 
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The acceleration area of the L7 domain name when `Type` is `partial` or `full`. When Type is `noDomainAccess`, please leave it blank.
<li>`global`: Global AZs</li>
<li>`mainland`: AZs in the Chinese mainland</li>
<li>`overseas`: (Default) AZs outside the Chinese mainland </li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Target package ID to bind. when a package already exists under your account, you can fill in this parameter to directly bind the site to the package. if there are currently no bindable packages, you can purchase a package via [CreatePlan](https://intl.cloud.tencent.com/document/product/1552/105771?from_cn_redirect=1).
Note: if this parameter is not specified, a site in "init" status will be created. the site is inactive and will not be displayed in the console. you can bind a package and activate the site through [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1). after activation, the site can provide service properly.


                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Identical site identifier. limits input to numbers, english letters, ".", "-", and "_", with a character limit of 200 characters. for details, see identical site identifier (https://intl.cloud.tencent.com/document/product/1552/70202?from_cn_redirect=1). leave this field blank if this usage scenario does not apply.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * Tags of the site. To create tags, go to the [Tag Console](https://console.cloud.tencent.com/tag/taglist).
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     */
                    bool m_allowDuplicates;
                    bool m_allowDuplicatesHasBeenSet;

                    /**
                     * Whether to skip scanning the existing DNS records of the site. Default value: false.
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
