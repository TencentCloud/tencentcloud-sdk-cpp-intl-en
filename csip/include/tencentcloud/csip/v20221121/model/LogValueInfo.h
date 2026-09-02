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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_

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
                * Log index value description
                */
                class LogValueInfo : public AbstractModel
                {
                public:
                    LogValueInfo();
                    ~LogValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Type.</p>
                     * @return Type <p>Type.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Type.</p>
                     * @param _type <p>Type.</p>
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
                     * 获取<p>Tag.</p>
                     * @return Tokenizer <p>Tag.</p>
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tokenizer <p>Tag.</p>
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
                     * 获取<p>sql tag</p>
                     * @return SqlFlag <p>sql tag</p>
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 设置<p>sql tag</p>
                     * @param _sqlFlag <p>sql tag</p>
                     * 
                     */
                    void SetSqlFlag(const bool& _sqlFlag);

                    /**
                     * 判断参数 SqlFlag 是否已赋值
                     * @return SqlFlag 是否已赋值
                     * 
                     */
                    bool SqlFlagHasBeenSet() const;

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

                    /**
                     * 获取<p>Alias</p>
                     * @return Alias <p>Alias</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Alias</p>
                     * @param _alias <p>Alias</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * <p>Type.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * <p>sql tag</p>
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                    /**
                     * <p>contain Chinese</p>
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                    /**
                     * <p>Alias</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGVALUEINFO_H_
