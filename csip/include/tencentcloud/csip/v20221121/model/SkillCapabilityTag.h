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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLCAPABILITYTAG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLCAPABILITYTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Skill power tag
                */
                class SkillCapabilityTag : public AbstractModel
                {
                public:
                    SkillCapabilityTag();
                    ~SkillCapabilityTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capacity tag identification, suitable for program judgment, filtering or aggregation usage
                     * @return ID Capacity tag identification, suitable for program judgment, filtering or aggregation usage
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Capacity tag identification, suitable for program judgment, filtering or aggregation usage
                     * @param _iD Capacity tag identification, suitable for program judgment, filtering or aggregation usage
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Capacity Tag Display Name
                     * @return Name Capacity Tag Display Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Capacity Tag Display Name
                     * @param _name Capacity Tag Display Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Capacity tag identification, suitable for program judgment, filtering or aggregation usage
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Capacity Tag Display Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLCAPABILITYTAG_H_
