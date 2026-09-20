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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_

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
                * Task result type of the Image Ocr text identification information.
                */
                class ContentReviewOcrResult : public AbstractModel
                {
                public:
                    ContentReviewOcrResult();
                    ~ContentReviewOcrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Score of the Ocr text identification result. The score ranges from 0 to 100.</p>
                     * @return Confidence <p>Score of the Ocr text identification result. The score ranges from 0 to 100.</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Score of the Ocr text identification result. The score ranges from 0 to 100.</p>
                     * @param _confidence <p>Score of the Ocr text identification result. The score ranges from 0 to 100.</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Result suggestions for Ocr text identification. Value range:</p><li>pass;</li><li>review;</li><li>block.</li>
                     * @return Suggestion <p>Result suggestions for Ocr text identification. Value range:</p><li>pass;</li><li>review;</li><li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>Result suggestions for Ocr text identification. Value range:</p><li>pass;</li><li>review;</li><li>block.</li>
                     * @param _suggestion <p>Result suggestions for Ocr text identification. Value range:</p><li>pass;</li><li>review;</li><li>block.</li>
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
                     * 获取<p>List of suspicious keywords for Ocr text identification.</p>
                     * @return KeywordSet <p>List of suspicious keywords for Ocr text identification.</p>
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置<p>List of suspicious keywords for Ocr text identification.</p>
                     * @param _keywordSet <p>List of suspicious keywords for Ocr text identification.</p>
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                    /**
                     * 获取<p>Area coordinates (pixel-level) where suspected text appears in Ocr text identification, [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.</p>
                     * @return AreaCoordSet <p>Area coordinates (pixel-level) where suspected text appears in Ocr text identification, [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.</p>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置<p>Area coordinates (pixel-level) where suspected text appears in Ocr text identification, [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.</p>
                     * @param _areaCoordSet <p>Area coordinates (pixel-level) where suspected text appears in Ocr text identification, [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.</p>
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * <p>Score of the Ocr text identification result. The score ranges from 0 to 100.</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Result suggestions for Ocr text identification. Value range:</p><li>pass;</li><li>review;</li><li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>List of suspicious keywords for Ocr text identification.</p>
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * <p>Area coordinates (pixel-level) where suspected text appears in Ocr text identification, [x1, y1, x2, y2], i.e., coordinates of the top-left corner and coordinate of the bottom-right corner.</p>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
