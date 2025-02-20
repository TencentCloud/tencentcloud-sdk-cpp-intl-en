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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_

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
                * Custom Cache Key query string configuration parameters
                */
                class CacheKeyQueryString : public AbstractModel
                {
                public:
                    CacheKeyQueryString();
                    ~CacheKeyQueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query string retain/ignore specified parameter switch. valid values are:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Query string retain/ignore specified parameter switch. valid values are:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Query string retain/ignore specified parameter switch. valid values are:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Query string retain/ignore specified parameter switch. valid values are:.
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
                     * 获取Actions to retain/ignore specified parameters in the query string. values:.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>`ExcludeCustom`: ignore partial parameters.</li> note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * @return Action Actions to retain/ignore specified parameters in the query string. values:.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>`ExcludeCustom`: ignore partial parameters.</li> note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Actions to retain/ignore specified parameters in the query string. values:.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>`ExcludeCustom`: ignore partial parameters.</li> note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * @param _action Actions to retain/ignore specified parameters in the query string. values:.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>`ExcludeCustom`: ignore partial parameters.</li> note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
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
                     * 获取List of parameter names to be retained/ignored in the query string. <br>note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * @return Values List of parameter names to be retained/ignored in the query string. <br>note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置List of parameter names to be retained/ignored in the query string. <br>note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     * @param _values List of parameter names to be retained/ignored in the query string. <br>note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
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
                     * Query string retain/ignore specified parameter switch. valid values are:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Actions to retain/ignore specified parameters in the query string. values:.
<Li>`IncludeCustom`: retain partial parameters.</li>.
<Li>`ExcludeCustom`: ignore partial parameters.</li> note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * List of parameter names to be retained/ignored in the query string. <br>note: this field is required when `switch` is on. when `switch` is off, this field is not required and will not take effect if filled.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_
