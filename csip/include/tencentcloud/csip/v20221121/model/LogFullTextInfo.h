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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGFULLTEXTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGFULLTEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Index information of full text of the log
                */
                class LogFullTextInfo : public AbstractModel
                {
                public:
                    LogFullTextInfo();
                    ~LogFullTextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Case-sensitive</p>
                     * @return CaseSensitive <p>Case-sensitive</p>
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置<p>Case-sensitive</p>
                     * @param _caseSensitive <p>Case-sensitive</p>
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
                     * 获取<p>token</p>
                     * @return Tokenizer <p>token</p>
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置<p>token</p>
                     * @param _tokenizer <p>token</p>
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
                     * 获取<p>contain Chinese</p>
                     * @return ContainZH <p>contain Chinese</p>
                     * 
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置<p>contain Chinese</p>
                     * @param _containZH <p>contain Chinese</p>
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
                     * <p>Case-sensitive</p>
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * <p>token</p>
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * <p>contain Chinese</p>
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGFULLTEXTINFO_H_
