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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DIFFUSIONENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DIFFUSIONENHANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * LLM enhancement configuration.
                */
                class DiffusionEnhanceInfo : public AbstractModel
                {
                public:
                    DiffusionEnhanceInfo();
                    ~DiffusionEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Large model enhancement switch. Available values:
<li>ON: enabled</li>
<li>OFF: disabled</li>
                     * @return Switch Large model enhancement switch. Available values:
<li>ON: enabled</li>
<li>OFF: disabled</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Large model enhancement switch. Available values:
<li>ON: enabled</li>
<li>OFF: disabled</li>
                     * @param _switch Large model enhancement switch. Available values:
<li>ON: enabled</li>
<li>OFF: disabled</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Intensity type. Valid only when the large model enhancement control switch is ON. Value range:
<li>weak: weak;</li>
<li>NORMAL: The scaling group is normal.</li>
<li>strong: strong.</li>
Default value: normal.
                     * @return Type Intensity type. Valid only when the large model enhancement control switch is ON. Value range:
<li>weak: weak;</li>
<li>NORMAL: The scaling group is normal.</li>
<li>strong: strong.</li>
Default value: normal.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Intensity type. Valid only when the large model enhancement control switch is ON. Value range:
<li>weak: weak;</li>
<li>NORMAL: The scaling group is normal.</li>
<li>strong: strong.</li>
Default value: normal.
                     * @param _type Intensity type. Valid only when the large model enhancement control switch is ON. Value range:
<li>weak: weak;</li>
<li>NORMAL: The scaling group is normal.</li>
<li>strong: strong.</li>
Default value: normal.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Large model enhancement switch. Available values:
<li>ON: enabled</li>
<li>OFF: disabled</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Intensity type. Valid only when the large model enhancement control switch is ON. Value range:
<li>weak: weak;</li>
<li>NORMAL: The scaling group is normal.</li>
<li>strong: strong.</li>
Default value: normal.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DIFFUSIONENHANCEINFO_H_
