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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_

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
                * 
                */
                class SkipCondition : public AbstractModel
                {
                public:
                    SkipCondition();
                    ~SkipCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param Type 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Selector 
                     */
                    std::string GetSelector() const;

                    /**
                     * 设置
                     * @param Selector 
                     */
                    void SetSelector(const std::string& _selector);

                    /**
                     * 判断参数 Selector 是否已赋值
                     * @return Selector 是否已赋值
                     */
                    bool SelectorHasBeenSet() const;

                    /**
                     * 获取
                     * @return MatchFromType 
                     */
                    std::string GetMatchFromType() const;

                    /**
                     * 设置
                     * @param MatchFromType 
                     */
                    void SetMatchFromType(const std::string& _matchFromType);

                    /**
                     * 判断参数 MatchFromType 是否已赋值
                     * @return MatchFromType 是否已赋值
                     */
                    bool MatchFromTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MatchFrom 
                     */
                    std::vector<std::string> GetMatchFrom() const;

                    /**
                     * 设置
                     * @param MatchFrom 
                     */
                    void SetMatchFrom(const std::vector<std::string>& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取
                     * @return MatchContentType 
                     */
                    std::string GetMatchContentType() const;

                    /**
                     * 设置
                     * @param MatchContentType 
                     */
                    void SetMatchContentType(const std::string& _matchContentType);

                    /**
                     * 判断参数 MatchContentType 是否已赋值
                     * @return MatchContentType 是否已赋值
                     */
                    bool MatchContentTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MatchContent 
                     */
                    std::vector<std::string> GetMatchContent() const;

                    /**
                     * 设置
                     * @param MatchContent 
                     */
                    void SetMatchContent(const std::vector<std::string>& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_selector;
                    bool m_selectorHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_matchFromType;
                    bool m_matchFromTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_matchContentType;
                    bool m_matchContentTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SKIPCONDITION_H_
