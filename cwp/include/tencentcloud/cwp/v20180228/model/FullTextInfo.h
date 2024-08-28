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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FULLTEXTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FULLTEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Configuration for full-text index
                */
                class FullTextInfo : public AbstractModel
                {
                public:
                    FullTextInfo();
                    ~FullTextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether case-sensitive
                     * @return CaseSensitive Whether case-sensitive
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置Whether case-sensitive
                     * @param _caseSensitive Whether case-sensitive
                     * 
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取Delimiter
                     * @return Tokenizer Delimiter
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置Delimiter
                     * @param _tokenizer Delimiter
                     * 
                     */
                    void SetTokenizer(const std::string& _tokenizer);

                    /**
                     * 判断参数 Tokenizer 是否已赋值
                     * @return Tokenizer 是否已赋值
                     * 
                     */
                    bool TokenizerHasBeenSet() const;

                    /**
                     * 获取Whether Chinese characters are contained.
                     * @return ContainZH Whether Chinese characters are contained.
                     * 
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置Whether Chinese characters are contained.
                     * @param _containZH Whether Chinese characters are contained.
                     * 
                     */
                    void SetContainZH(const bool& _containZH);

                    /**
                     * 判断参数 ContainZH 是否已赋值
                     * @return ContainZH 是否已赋值
                     * 
                     */
                    bool ContainZHHasBeenSet() const;

                private:

                    /**
                     * Whether case-sensitive
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * Delimiter
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * Whether Chinese characters are contained.
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FULLTEXTINFO_H_
