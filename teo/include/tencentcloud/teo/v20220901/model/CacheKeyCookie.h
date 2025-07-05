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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom Cache Key Cookie configuration parameters
                */
                class CacheKeyCookie : public AbstractModel
                {
                public:
                    CacheKeyCookie();
                    ~CacheKeyCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable feature. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable feature. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable feature. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable feature. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
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
                     * 获取Cache action. values:.
<Li>`Full`: retain all</li>.
<Li> `ignore`: ignore all;</li>.
<Li> `includecustom`: retain specified parameters;</li>.
<Li> `excludecustom`: ignore specified parameters.</li> **note**: when `switch` is on, this field is required. when `switch` is off, this field is not required and will not take effect if filled.
                     * @return Action Cache action. values:.
<Li>`Full`: retain all</li>.
<Li> `ignore`: ignore all;</li>.
<Li> `includecustom`: retain specified parameters;</li>.
<Li> `excludecustom`: ignore specified parameters.</li> **note**: when `switch` is on, this field is required. when `switch` is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Cache action. values:.
<Li>`Full`: retain all</li>.
<Li> `ignore`: ignore all;</li>.
<Li> `includecustom`: retain specified parameters;</li>.
<Li> `excludecustom`: ignore specified parameters.</li> **note**: when `switch` is on, this field is required. when `switch` is off, this field is not required and will not take effect if filled.
                     * @param _action Cache action. values:.
<Li>`Full`: retain all</li>.
<Li> `ignore`: ignore all;</li>.
<Li> `includecustom`: retain specified parameters;</li>.
<Li> `excludecustom`: ignore specified parameters.</li> **note**: when `switch` is on, this field is required. when `switch` is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Custom cache key cookie name list.<br>note: this field is required when action is includecustom or excludecustom; when action is full or ignore, this field is not required and will not take effect if filled.
                     * @return Values Custom cache key cookie name list.<br>note: this field is required when action is includecustom or excludecustom; when action is full or ignore, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Custom cache key cookie name list.<br>note: this field is required when action is includecustom or excludecustom; when action is full or ignore, this field is not required and will not take effect if filled.
                     * @param _values Custom cache key cookie name list.<br>note: this field is required when action is includecustom or excludecustom; when action is full or ignore, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable feature. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache action. values:.
<Li>`Full`: retain all</li>.
<Li> `ignore`: ignore all;</li>.
<Li> `includecustom`: retain specified parameters;</li>.
<Li> `excludecustom`: ignore specified parameters.</li> **note**: when `switch` is on, this field is required. when `switch` is off, this field is not required and will not take effect if filled.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Custom cache key cookie name list.<br>note: this field is required when action is includecustom or excludecustom; when action is full or ignore, this field is not required and will not take effect if filled.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
