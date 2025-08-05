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
                * Origin URL rewrite configuration parameters.
                */
                class UpstreamURLRewriteParameters : public AbstractModel
                {
                public:
                    UpstreamURLRewriteParameters();
                    ~UpstreamURLRewriteParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin-Pull URL rewrite type. valid values: Path.
                     * @return Type Origin-Pull URL rewrite type. valid values: Path.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin-Pull URL rewrite type. valid values: Path.
                     * @param _type Origin-Pull URL rewrite type. valid values: Path.
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
                     * 获取Origin-Pull URL rewrite action. valid values:.
<li><b>replace</b>: replace the full Path. used to replace the complete request URL Path with the specified Path.
</li>
<li><b>addPrefix</b>: add Path prefix. used to add specified Path prefix to request URL Path.</li>.
</li>
<li><b>rmvPrefix</b>: specifies the removal of Path prefix. used to remove the specified Path prefix from the request URL Path.
</li>
<li><b>regexReplace</b>: refers to regular expression replacement of the full path. used for matching and replacing the full path via Google RE2 regular expressions.
</li>
                     * @return Action Origin-Pull URL rewrite action. valid values:.
<li><b>replace</b>: replace the full Path. used to replace the complete request URL Path with the specified Path.
</li>
<li><b>addPrefix</b>: add Path prefix. used to add specified Path prefix to request URL Path.</li>.
</li>
<li><b>rmvPrefix</b>: specifies the removal of Path prefix. used to remove the specified Path prefix from the request URL Path.
</li>
<li><b>regexReplace</b>: refers to regular expression replacement of the full path. used for matching and replacing the full path via Google RE2 regular expressions.
</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Origin-Pull URL rewrite action. valid values:.
<li><b>replace</b>: replace the full Path. used to replace the complete request URL Path with the specified Path.
</li>
<li><b>addPrefix</b>: add Path prefix. used to add specified Path prefix to request URL Path.</li>.
</li>
<li><b>rmvPrefix</b>: specifies the removal of Path prefix. used to remove the specified Path prefix from the request URL Path.
</li>
<li><b>regexReplace</b>: refers to regular expression replacement of the full path. used for matching and replacing the full path via Google RE2 regular expressions.
</li>
                     * @param _action Origin-Pull URL rewrite action. valid values:.
<li><b>replace</b>: replace the full Path. used to replace the complete request URL Path with the specified Path.
</li>
<li><b>addPrefix</b>: add Path prefix. used to add specified Path prefix to request URL Path.</li>.
</li>
<li><b>rmvPrefix</b>: specifies the removal of Path prefix. used to remove the specified Path prefix from the request URL Path.
</li>
<li><b>regexReplace</b>: refers to regular expression replacement of the full path. used for matching and replacing the full path via Google RE2 regular expressions.
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
                     * 获取Origin-Pull URL rewrite value. should meet URL Path standard and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified, with a length range of 1–1024. when Action is addPrefix, it cannot end with /. when Action is rmvPrefix, * cannot exist. when Action is regexReplace, $NUM can be used to refer to regular expression capture groups, where NUM represents the group number, such as $1, and supports up to $9.
                     * @return Value Origin-Pull URL rewrite value. should meet URL Path standard and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified, with a length range of 1–1024. when Action is addPrefix, it cannot end with /. when Action is rmvPrefix, * cannot exist. when Action is regexReplace, $NUM can be used to refer to regular expression capture groups, where NUM represents the group number, such as $1, and supports up to $9.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Origin-Pull URL rewrite value. should meet URL Path standard and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified, with a length range of 1–1024. when Action is addPrefix, it cannot end with /. when Action is rmvPrefix, * cannot exist. when Action is regexReplace, $NUM can be used to refer to regular expression capture groups, where NUM represents the group number, such as $1, and supports up to $9.
                     * @param _value Origin-Pull URL rewrite value. should meet URL Path standard and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified, with a length range of 1–1024. when Action is addPrefix, it cannot end with /. when Action is rmvPrefix, * cannot exist. when Action is regexReplace, $NUM can be used to refer to regular expression capture groups, where NUM represents the group number, such as $1, and supports up to $9.
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
                     * 获取Origin-Pull URL rewrite used for regex replacement to match the full path regular expression. should meet Google RE2 standard with length range 1–1024. this field is required when Action is regexReplace, otherwise not required.
                     * @return Regex Origin-Pull URL rewrite used for regex replacement to match the full path regular expression. should meet Google RE2 standard with length range 1–1024. this field is required when Action is regexReplace, otherwise not required.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Origin-Pull URL rewrite used for regex replacement to match the full path regular expression. should meet Google RE2 standard with length range 1–1024. this field is required when Action is regexReplace, otherwise not required.
                     * @param _regex Origin-Pull URL rewrite used for regex replacement to match the full path regular expression. should meet Google RE2 standard with length range 1–1024. this field is required when Action is regexReplace, otherwise not required.
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
                     * Origin-Pull URL rewrite type. valid values: Path.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin-Pull URL rewrite action. valid values:.
<li><b>replace</b>: replace the full Path. used to replace the complete request URL Path with the specified Path.
</li>
<li><b>addPrefix</b>: add Path prefix. used to add specified Path prefix to request URL Path.</li>.
</li>
<li><b>rmvPrefix</b>: specifies the removal of Path prefix. used to remove the specified Path prefix from the request URL Path.
</li>
<li><b>regexReplace</b>: refers to regular expression replacement of the full path. used for matching and replacing the full path via Google RE2 regular expressions.
</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Origin-Pull URL rewrite value. should meet URL Path standard and ensure the rewritten Path starts with / to prevent the Host of the origin-pull URL from being modified, with a length range of 1–1024. when Action is addPrefix, it cannot end with /. when Action is rmvPrefix, * cannot exist. when Action is regexReplace, $NUM can be used to refer to regular expression capture groups, where NUM represents the group number, such as $1, and supports up to $9.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Origin-Pull URL rewrite used for regex replacement to match the full path regular expression. should meet Google RE2 standard with length range 1–1024. this field is required when Action is regexReplace, otherwise not required.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
