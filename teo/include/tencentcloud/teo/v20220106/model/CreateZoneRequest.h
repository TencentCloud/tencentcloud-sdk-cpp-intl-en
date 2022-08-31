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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Site name
                     * @return Name Site name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Site name
                     * @param Name Site name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Access mode. Valid values:
- `full` (default): Access via NS
- `partial`: Access via CNAME
                     * @return Type Access mode. Valid values:
- `full` (default): Access via NS
- `partial`: Access via CNAME
                     */
                    std::string GetType() const;

                    /**
                     * 设置Access mode. Valid values:
- `full` (default): Access via NS
- `partial`: Access via CNAME
                     * @param Type Access mode. Valid values:
- `full` (default): Access via NS
- `partial`: Access via CNAME
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to skip resolution record scanning
                     * @return JumpStart Specifies whether to skip resolution record scanning
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置Specifies whether to skip resolution record scanning
                     * @param JumpStart Specifies whether to skip resolution record scanning
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     */
                    bool JumpStartHasBeenSet() const;

                    /**
                     * 获取Resource tag
                     * @return Tags Resource tag
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
                     * @param Tags Resource tag
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Access mode. Valid values:
- `full` (default): Access via NS
- `partial`: Access via CNAME
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies whether to skip resolution record scanning
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                    /**
                     * Resource tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONEREQUEST_H_
