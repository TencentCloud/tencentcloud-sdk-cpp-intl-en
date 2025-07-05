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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Precise access control match rule
                */
                class ScdnAclRule : public AbstractModel
                {
                public:
                    ScdnAclRule();
                    ~ScdnAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Keyword
                     * @return MatchKey Keyword
                     * 
                     */
                    std::string GetMatchKey() const;

                    /**
                     * 设置Keyword
                     * @param _matchKey Keyword
                     * 
                     */
                    void SetMatchKey(const std::string& _matchKey);

                    /**
                     * 判断参数 MatchKey 是否已赋值
                     * @return MatchKey 是否已赋值
                     * 
                     */
                    bool MatchKeyHasBeenSet() const;

                    /**
                     * 获取Logical operator. Valid values:
                     * @return LogiOperator Logical operator. Valid values:
                     * 
                     */
                    std::string GetLogiOperator() const;

                    /**
                     * 设置Logical operator. Valid values:
                     * @param _logiOperator Logical operator. Valid values:
                     * 
                     */
                    void SetLogiOperator(const std::string& _logiOperator);

                    /**
                     * 判断参数 LogiOperator 是否已赋值
                     * @return LogiOperator 是否已赋值
                     * 
                     */
                    bool LogiOperatorHasBeenSet() const;

                    /**
                     * 获取Matched value
                     * @return MatchValue Matched value
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置Matched value
                     * @param _matchValue Matched value
                     * 
                     */
                    void SetMatchValue(const std::string& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     * 
                     */
                    bool MatchValueHasBeenSet() const;

                private:

                    /**
                     * Keyword
                     */
                    std::string m_matchKey;
                    bool m_matchKeyHasBeenSet;

                    /**
                     * Logical operator. Valid values:
                     */
                    std::string m_logiOperator;
                    bool m_logiOperatorHasBeenSet;

                    /**
                     * Matched value
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_
