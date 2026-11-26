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
                * Path configuration parameter for access URL redirection.
                */
                class URLPath : public AbstractModel
                {
                public:
                    URLPath();
                    ~URLPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution action. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom;</li>
<li>regex: regular expression matching.</li>
                     * @return Action Execution action. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom;</li>
<li>regex: regular expression matching.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Execution action. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom;</li>
<li>regex: regular expression matching.</li>
                     * @param _action Execution action. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom;</li>
<li>regex: regular expression matching.</li>
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
                     * 获取Regular expression for matching, with a length range of 1–1024.<br>Note: This field is required when Action is regex. When Action is follow or custom, no need to specify this field, and it does not take effect if specified.
                     * @return Regex Regular expression for matching, with a length range of 1–1024.<br>Note: This field is required when Action is regex. When Action is follow or custom, no need to specify this field, and it does not take effect if specified.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Regular expression for matching, with a length range of 1–1024.<br>Note: This field is required when Action is regex. When Action is follow or custom, no need to specify this field, and it does not take effect if specified.
                     * @param _regex Regular expression for matching, with a length range of 1–1024.<br>Note: This field is required when Action is regex. When Action is follow or custom, no need to specify this field, and it does not take effect if specified.
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
                     * 获取Target URL for redirection. Length range: 1–1024.<br>Note: This field is required when Action is regex or custom. When Action is follow, no need to specify this field, and it does not take effect if specified.
                     * @return Value Target URL for redirection. Length range: 1–1024.<br>Note: This field is required when Action is regex or custom. When Action is follow, no need to specify this field, and it does not take effect if specified.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Target URL for redirection. Length range: 1–1024.<br>Note: This field is required when Action is regex or custom. When Action is follow, no need to specify this field, and it does not take effect if specified.
                     * @param _value Target URL for redirection. Length range: 1–1024.<br>Note: This field is required when Action is regex or custom. When Action is follow, no need to specify this field, and it does not take effect if specified.
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
                     * Execution action. Valid values:
<li>follow: follow request;</li>
<li>custom: Custom;</li>
<li>regex: regular expression matching.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Regular expression for matching, with a length range of 1–1024.<br>Note: This field is required when Action is regex. When Action is follow or custom, no need to specify this field, and it does not take effect if specified.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * Target URL for redirection. Length range: 1–1024.<br>Note: This field is required when Action is regex or custom. When Action is follow, no need to specify this field, and it does not take effect if specified.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_URLPATH_H_
