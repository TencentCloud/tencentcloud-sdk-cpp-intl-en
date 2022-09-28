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
                     * 获取The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>This field will be set to the default value `full` if not specified.
                     * @return Type The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>This field will be set to the default value `full` if not specified.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>This field will be set to the default value `full` if not specified.
                     * @param Type The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>This field will be set to the default value `full` if not specified.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @return JumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置Whether to skip scanning the existing DNS records of the site. Default value: false.
                     * @param JumpStart Whether to skip scanning the existing DNS records of the site. Default value: false.
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     */
                    bool JumpStartHasBeenSet() const;

                    /**
                     * 获取The resource tag.
                     * @return Tags The resource tag.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The resource tag.
                     * @param Tags The resource tag.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The access mode. Values:
<li>`full`: Access through a name server.</li>
<li>`partial`: Access through a CNAME record.</li>This field will be set to the default value `full` if not specified.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
