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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_WHITELISTREGEXPEXPRESSIONINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_WHITELISTREGEXPEXPRESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Allowlist Regular Expression Information
                */
                class WhiteListRegexpExpressionInfo : public AbstractModel
                {
                public:
                    WhiteListRegexpExpressionInfo();
                    ~WhiteListRegexpExpressionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logic symbol
AND
OR
NOT
                     * @return LogicSymbol Logic symbol
AND
OR
NOT
                     * 
                     */
                    std::string GetLogicSymbol() const;

                    /**
                     * 设置Logic symbol
AND
OR
NOT
                     * @param _logicSymbol Logic symbol
AND
OR
NOT
                     * 
                     */
                    void SetLogicSymbol(const std::string& _logicSymbol);

                    /**
                     * 判断参数 LogicSymbol 是否已赋值
                     * @return LogicSymbol 是否已赋值
                     * 
                     */
                    bool LogicSymbolHasBeenSet() const;

                    /**
                     * 获取Matching field
                     * @return MatchField Matching field
                     * 
                     */
                    std::string GetMatchField() const;

                    /**
                     * 设置Matching field
                     * @param _matchField Matching field
                     * 
                     */
                    void SetMatchField(const std::string& _matchField);

                    /**
                     * 判断参数 MatchField 是否已赋值
                     * @return MatchField 是否已赋值
                     * 
                     */
                    bool MatchFieldHasBeenSet() const;

                    /**
                     * 获取Matching content
                     * @return MatchContent Matching content
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching content
                     * @param _matchContent Matching content
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * Logic symbol
AND
OR
NOT
                     */
                    std::string m_logicSymbol;
                    bool m_logicSymbolHasBeenSet;

                    /**
                     * Matching field
                     */
                    std::string m_matchField;
                    bool m_matchFieldHasBeenSet;

                    /**
                     * Matching content
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_WHITELISTREGEXPEXPRESSIONINFO_H_
