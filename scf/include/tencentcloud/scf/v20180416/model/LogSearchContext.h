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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Log search context
                */
                class LogSearchContext : public AbstractModel
                {
                public:
                    LogSearchContext();
                    ~LogSearchContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Log record number
                     * @return Limit Log record number
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Log record number
                     * @param _limit Log record number
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Log keyword
                     * @return Keyword Log keyword
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Log keyword
                     * @param _keyword Log keyword
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Log type. The value is `Application` (default) or `Platform`.
                     * @return Type Log type. The value is `Application` (default) or `Platform`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type. The value is `Application` (default) or `Platform`.
                     * @param _type Log type. The value is `Application` (default) or `Platform`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Offset.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Log record number
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log keyword
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Log type. The value is `Application` (default) or `Platform`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_
