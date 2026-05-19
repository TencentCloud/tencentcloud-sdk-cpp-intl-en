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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_

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
                * Audio beautification configuration.
                */
                class AudioBeautifyInfo : public AbstractModel
                {
                public:
                    AudioBeautifyInfo();
                    ~AudioBeautifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio beautification control switch. Available values:
<li>ON: enable audio beautification</li>
<li>OFF: disable audio beautification</li>
                     * @return Switch Audio beautification control switch. Available values:
<li>ON: enable audio beautification</li>
<li>OFF: disable audio beautification</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Audio beautification control switch. Available values:
<li>ON: enable audio beautification</li>
<li>OFF: disable audio beautification</li>
                     * @param _switch Audio beautification control switch. Available values:
<li>ON: enable audio beautification</li>
<li>OFF: disable audio beautification</li>
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
                     * 获取Type. Multiple selections allowed. Valid values:
<li>declick: noise removal</li>
<li>deesser: de-ess</li>
Default value: declick.
                     * @return Types Type. Multiple selections allowed. Valid values:
<li>declick: noise removal</li>
<li>deesser: de-ess</li>
Default value: declick.
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Type. Multiple selections allowed. Valid values:
<li>declick: noise removal</li>
<li>deesser: de-ess</li>
Default value: declick.
                     * @param _types Type. Multiple selections allowed. Valid values:
<li>declick: noise removal</li>
<li>deesser: de-ess</li>
Default value: declick.
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * Audio beautification control switch. Available values:
<li>ON: enable audio beautification</li>
<li>OFF: disable audio beautification</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Type. Multiple selections allowed. Valid values:
<li>declick: noise removal</li>
<li>deesser: de-ess</li>
Default value: declick.
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_
