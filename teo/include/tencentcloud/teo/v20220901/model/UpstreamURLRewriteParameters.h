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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_

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
                * Origin-pull URL rewrite configuration parameters.
                */
                class UpstreamURLRewriteParameters : public AbstractModel
                {
                public:
                    UpstreamURLRewriteParameters();
                    ~UpstreamURLRewriteParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin-pull URL rewrite type. Only Path is supported.
                     * @return Type Origin-pull URL rewrite type. Only Path is supported.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin-pull URL rewrite type. Only Path is supported.
                     * @param _type Origin-pull URL rewrite type. Only Path is supported.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Origin-pull URL rewrite action. Valid values:
<li><b>replace</b>: Replaces the full Path. It is used to replace the complete request URL Path with the specified Path.</li>
</li>
<li><b>addPrefix</b>: Add a path prefix. It is used to add the specified path prefix to the request URL Path.</li>
</li>
<li><b>rmvPrefix</b>: removes the path prefix. It is used to remove the specified path prefix from the request URL Path.</li>
</li>
<li><b>regexReplace</b>: regular replacement full path. Used to match and replace the full path through Google RE2 regular expressions.</li>
</li>
                     * @return Action Origin-pull URL rewrite action. Valid values:
<li><b>replace</b>: Replaces the full Path. It is used to replace the complete request URL Path with the specified Path.</li>
</li>
<li><b>addPrefix</b>: Add a path prefix. It is used to add the specified path prefix to the request URL Path.</li>
</li>
<li><b>rmvPrefix</b>: removes the path prefix. It is used to remove the specified path prefix from the request URL Path.</li>
</li>
<li><b>regexReplace</b>: regular replacement full path. Used to match and replace the full path through Google RE2 regular expressions.</li>
</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Origin-pull URL rewrite action. Valid values:
<li><b>replace</b>: Replaces the full Path. It is used to replace the complete request URL Path with the specified Path.</li>
</li>
<li><b>addPrefix</b>: Add a path prefix. It is used to add the specified path prefix to the request URL Path.</li>
</li>
<li><b>rmvPrefix</b>: removes the path prefix. It is used to remove the specified path prefix from the request URL Path.</li>
</li>
<li><b>regexReplace</b>: regular replacement full path. Used to match and replace the full path through Google RE2 regular expressions.</li>
</li>
                     * @param _action Origin-pull URL rewrite action. Valid values:
<li><b>replace</b>: Replaces the full Path. It is used to replace the complete request URL Path with the specified Path.</li>
</li>
<li><b>addPrefix</b>: Add a path prefix. It is used to add the specified path prefix to the request URL Path.</li>
</li>
<li><b>rmvPrefix</b>: removes the path prefix. It is used to remove the specified path prefix from the request URL Path.</li>
</li>
<li><b>regexReplace</b>: regular replacement full path. Used to match and replace the full path through Google RE2 regular expressions.</li>
</li>
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
                     * 获取Origin-pull URL rewrite value. It should meet the URL Path specification and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified. Length range: 1–1024. When Action is addPrefix, it cannot end with /. When Action is rmvPrefix, * cannot exist. When Action is regexReplace, $NUM can be used to refer to a regular expression capture group, where NUM represents the group number, for example $1, with support up to $9.
                     * @return Value Origin-pull URL rewrite value. It should meet the URL Path specification and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified. Length range: 1–1024. When Action is addPrefix, it cannot end with /. When Action is rmvPrefix, * cannot exist. When Action is regexReplace, $NUM can be used to refer to a regular expression capture group, where NUM represents the group number, for example $1, with support up to $9.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Origin-pull URL rewrite value. It should meet the URL Path specification and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified. Length range: 1–1024. When Action is addPrefix, it cannot end with /. When Action is rmvPrefix, * cannot exist. When Action is regexReplace, $NUM can be used to refer to a regular expression capture group, where NUM represents the group number, for example $1, with support up to $9.
                     * @param _value Origin-pull URL rewrite value. It should meet the URL Path specification and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified. Length range: 1–1024. When Action is addPrefix, it cannot end with /. When Action is rmvPrefix, * cannot exist. When Action is regexReplace, $NUM can be used to refer to a regular expression capture group, where NUM represents the group number, for example $1, with support up to $9.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Origin-pull URL rewrite uses a regex replacement to match the regular expression of the full path. It should meet the Google RE2 specification with a length range of 1–1024. This field is required when Action is regexReplace. Otherwise, no need to specify this field.
                     * @return Regex Origin-pull URL rewrite uses a regex replacement to match the regular expression of the full path. It should meet the Google RE2 specification with a length range of 1–1024. This field is required when Action is regexReplace. Otherwise, no need to specify this field.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Origin-pull URL rewrite uses a regex replacement to match the regular expression of the full path. It should meet the Google RE2 specification with a length range of 1–1024. This field is required when Action is regexReplace. Otherwise, no need to specify this field.
                     * @param _regex Origin-pull URL rewrite uses a regex replacement to match the regular expression of the full path. It should meet the Google RE2 specification with a length range of 1–1024. This field is required when Action is regexReplace. Otherwise, no need to specify this field.
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                private:

                    /**
                     * Origin-pull URL rewrite type. Only Path is supported.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin-pull URL rewrite action. Valid values:
<li><b>replace</b>: Replaces the full Path. It is used to replace the complete request URL Path with the specified Path.</li>
</li>
<li><b>addPrefix</b>: Add a path prefix. It is used to add the specified path prefix to the request URL Path.</li>
</li>
<li><b>rmvPrefix</b>: removes the path prefix. It is used to remove the specified path prefix from the request URL Path.</li>
</li>
<li><b>regexReplace</b>: regular replacement full path. Used to match and replace the full path through Google RE2 regular expressions.</li>
</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Origin-pull URL rewrite value. It should meet the URL Path specification and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified. Length range: 1–1024. When Action is addPrefix, it cannot end with /. When Action is rmvPrefix, * cannot exist. When Action is regexReplace, $NUM can be used to refer to a regular expression capture group, where NUM represents the group number, for example $1, with support up to $9.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Origin-pull URL rewrite uses a regex replacement to match the regular expression of the full path. It should meet the Google RE2 specification with a length range of 1–1024. This field is required when Action is regexReplace. Otherwise, no need to specify this field.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
