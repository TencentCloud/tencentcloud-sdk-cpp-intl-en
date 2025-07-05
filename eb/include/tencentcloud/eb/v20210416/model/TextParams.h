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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Describes how to slice data
                */
                class TextParams : public AbstractModel
                {
                public:
                    TextParams();
                    ~TextParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comma, | , tab, space, line break, %, or #, which can contain only 1 character.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Separator Comma, | , tab, space, line break, %, or #, which can contain only 1 character.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置Comma, | , tab, space, line break, %, or #, which can contain only 1 character.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _separator Comma, | , tab, space, line break, %, or #, which can contain only 1 character.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取Entered regex (128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Regex Entered regex (128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Entered regex (128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _regex Entered regex (128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Comma, | , tab, space, line break, %, or #, which can contain only 1 character.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * Entered regex (128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_
