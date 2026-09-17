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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class ReviewInfo : public AbstractModel
                {
                public:
                    ReviewInfo();
                    ~ReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Suggestion 
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置
                     * @param _suggestion 
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取
                     * @return TypeSet 
                     * 
                     */
                    std::vector<std::string> GetTypeSet() const;

                    /**
                     * 设置
                     * @param _typeSet 
                     * 
                     */
                    void SetTypeSet(const std::vector<std::string>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     * 
                     */
                    bool TypeSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewTime 
                     * 
                     */
                    std::string GetReviewTime() const;

                    /**
                     * 设置
                     * @param _reviewTime 
                     * 
                     */
                    void SetReviewTime(const std::string& _reviewTime);

                    /**
                     * 判断参数 ReviewTime 是否已赋值
                     * @return ReviewTime 是否已赋值
                     * 
                     */
                    bool ReviewTimeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_typeSet;
                    bool m_typeSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reviewTime;
                    bool m_reviewTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWINFO_H_
