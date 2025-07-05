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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REFERER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REFERER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RefererRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Referer blacklist/whitelist configuration. This is disabled by default.
                */
                class Referer : public AbstractModel
                {
                public:
                    Referer();
                    ~Referer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取referer Blacklist and whitelist configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch referer Blacklist and whitelist configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置referer Blacklist and whitelist configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch referer Blacklist and whitelist configuration switch, value: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取Referer blacklist/whitelist configuration rule
                     * @return RefererRules Referer blacklist/whitelist configuration rule
                     * 
                     */
                    std::vector<RefererRule> GetRefererRules() const;

                    /**
                     * 设置Referer blacklist/whitelist configuration rule
                     * @param _refererRules Referer blacklist/whitelist configuration rule
                     * 
                     */
                    void SetRefererRules(const std::vector<RefererRule>& _refererRules);

                    /**
                     * 判断参数 RefererRules 是否已赋值
                     * @return RefererRules 是否已赋值
                     * 
                     */
                    bool RefererRulesHasBeenSet() const;

                private:

                    /**
                     * referer Blacklist and whitelist configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Referer blacklist/whitelist configuration rule
                     */
                    std::vector<RefererRule> m_refererRules;
                    bool m_refererRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERER_H_
