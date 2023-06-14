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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KEYREGEXINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KEYREGEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log keys to be filtered and the corresponding regex
                */
                class KeyRegexInfo : public AbstractModel
                {
                public:
                    KeyRegexInfo();
                    ~KeyRegexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log key to be filtered
                     * @return Key Log key to be filtered
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Log key to be filtered
                     * @param _key Log key to be filtered
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Filter rule regex corresponding to key
                     * @return Regex Filter rule regex corresponding to key
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置Filter rule regex corresponding to key
                     * @param _regex Filter rule regex corresponding to key
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
                     * Log key to be filtered
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Filter rule regex corresponding to key
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KEYREGEXINFO_H_
