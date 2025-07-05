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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VALUEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VALUEINFO_H_

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
                * Index value description
                */
                class ValueInfo : public AbstractModel
                {
                public:
                    ValueInfo();
                    ~ValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field delimiter
                     * @return Tokenizer Field delimiter
                     * 
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置Field delimiter
                     * @param _tokenizer Field delimiter
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
                     * 获取Field type
                     * @return Type Field type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Field type
                     * @param _type Field type
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
                     * 获取Whether the analysis feature is enabled for the field
                     * @return SqlFlag Whether the analysis feature is enabled for the field
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 设置Whether the analysis feature is enabled for the field
                     * @param _sqlFlag Whether the analysis feature is enabled for the field
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
                     * 获取Whether Chinese characters are contained
                     * @return ContainZH Whether Chinese characters are contained
                     * 
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置Whether Chinese characters are contained
                     * @param _containZH Whether Chinese characters are contained
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
                     * Field delimiter
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * Field type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the analysis feature is enabled for the field
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                    /**
                     * Whether Chinese characters are contained
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VALUEINFO_H_
