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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Returns the keywords, label, sub-label and the score.
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Returns the hit keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keyword Returns the hit keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Returns the hit keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Keyword Returns the hit keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Returns the sub-tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel Returns the sub-tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置Returns the sub-tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubLabel Returns the sub-tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Returns the score for the sub-label
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Score Returns the score for the sub-label
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Returns the score for the sub-label
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Score Returns the score for the sub-label
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * Returns the hit keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Returns the sub-tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Returns the score for the sub-label
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_
