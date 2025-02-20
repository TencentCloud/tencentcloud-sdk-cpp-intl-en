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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_URLPATH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_URLPATH_H_

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
                * Access URL redirect path configuration parameters.
                */
                class URLPath : public AbstractModel
                {
                public:
                    URLPath();
                    ~URLPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to be executed. values:.
<Li>`Follow`: follow the request;</li>.
<Li>`Custom`: custom;</li>.
<Li>`Regex`: regular expression matching.</li>.
                     * @return Action Action to be executed. values:.
<Li>`Follow`: follow the request;</li>.
<Li>`Custom`: custom;</li>.
<Li>`Regex`: regular expression matching.</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. values:.
<Li>`Follow`: follow the request;</li>.
<Li>`Custom`: custom;</li>.
<Li>`Regex`: regular expression matching.</li>.
                     * @param _action Action to be executed. values:.
<Li>`Follow`: follow the request;</li>.
<Li>`Custom`: custom;</li>.
<Li>`Regex`: regular expression matching.</li>.
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
                     * 获取Regular expression matching expression, length range is 1-1024.<br>note: when action is regex, this field is required; when action is follow or custom, this field is not required and will not take effect if filled.
                     * @return Regex Regular expression matching expression, length range is 1-1024.<br>note: when action is regex, this field is required; when action is follow or custom, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Regular expression matching expression, length range is 1-1024.<br>note: when action is regex, this field is required; when action is follow or custom, this field is not required and will not take effect if filled.
                     * @param _regex Regular expression matching expression, length range is 1-1024.<br>note: when action is regex, this field is required; when action is follow or custom, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取Redirect target url, length range is 1-1024.<br>note: when action is regex or custom, this field is required; when action is follow, this field is not required and will not take effect if filled.
                     * @return Value Redirect target url, length range is 1-1024.<br>note: when action is regex or custom, this field is required; when action is follow, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Redirect target url, length range is 1-1024.<br>note: when action is regex or custom, this field is required; when action is follow, this field is not required and will not take effect if filled.
                     * @param _value Redirect target url, length range is 1-1024.<br>note: when action is regex or custom, this field is required; when action is follow, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Action to be executed. values:.
<Li>`Follow`: follow the request;</li>.
<Li>`Custom`: custom;</li>.
<Li>`Regex`: regular expression matching.</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Regular expression matching expression, length range is 1-1024.<br>note: when action is regex, this field is required; when action is follow or custom, this field is not required and will not take effect if filled.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * Redirect target url, length range is 1-1024.<br>note: when action is regex or custom, this field is required; when action is follow, this field is not required and will not take effect if filled.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_URLPATH_H_
