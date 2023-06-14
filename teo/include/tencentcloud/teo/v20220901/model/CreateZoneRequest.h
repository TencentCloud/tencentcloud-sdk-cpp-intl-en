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
                     * 获取The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record. Note that you should verify your site with the IdentifyZone API before starting site access.</li>If it is left empty, the default value `full` is used.
                     * @return Type The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record. Note that you should verify your site with the IdentifyZone API before starting site access.</li>If it is left empty, the default value `full` is used.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record. Note that you should verify your site with the IdentifyZone API before starting site access.</li>If it is left empty, the default value `full` is used.
                     * @param _type The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record. Note that you should verify your site with the IdentifyZone API before starting site access.</li>If it is left empty, the default value `full` is used.
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
                     * 获取Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @return JumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * 
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @param _jumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * 
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     * 
                     */
                    bool JumpStartHasBeenSet() const;

                    /**
                     * 获取The resource tag.
                     * @return Tags The resource tag.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The resource tag.
                     * @param _tags The resource tag.
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
                     * 
                     */
                    bool GetAllowDuplicates() const;

                    /**
                     * 设置Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     * @param _allowDuplicates Whether to allow duplicate sites. Values:
<li>`true`: Duplicate sites are allowed.</li>
<li>`false`: Duplicate sites are not allowed.</li>If it is left empty, the default value `false` is used.
                     * 
                     */
                    void SetAllowDuplicates(const bool& _allowDuplicates);

                    /**
                     * 判断参数 AllowDuplicates 是否已赋值
                     * @return AllowDuplicates 是否已赋值
                     * 
                     */
                    bool AllowDuplicatesHasBeenSet() const;

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

                private:

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record. Note that you should verify your site with the IdentifyZone API before starting site access.</li>If it is left empty, the default value `full` is used.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to skip scanning the existing DNS records of the site. Default value: false.
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                    /**
                     * The resource tag.
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
                     * The site alias. It can be up to 20 characters consisting of digits, letters, hyphens (-) and underscores (_).
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
