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
                * The result for OCR-based image moderation.
                */
                class ContentReviewOcrResult : public AbstractModel
                {
                public:
                    ContentReviewOcrResult();
                    ~ContentReviewOcrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The confidence score for the OCR-based moderation result. Value range: 0-100.
                     * @return Confidence The confidence score for the OCR-based moderation result. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score for the OCR-based moderation result. Value range: 0-100.
                     * @param _confidence The confidence score for the OCR-based moderation result. Value range: 0-100.
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
                     * 获取The suggestion for handling the suspicious content detected based on OCR. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * @return Suggestion The suggestion for handling the suspicious content detected based on OCR. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The suggestion for handling the suspicious content detected based on OCR. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * @param _suggestion The suggestion for handling the suspicious content detected based on OCR. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
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
                     * 获取The list of suspicious keywords detected based on OCR.
                     * @return KeywordSet The list of suspicious keywords detected based on OCR.
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置The list of suspicious keywords detected based on OCR.
                     * @param _keywordSet The list of suspicious keywords detected based on OCR.
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
                     * 获取The coordinates (pixel) of the top-left and bottom-right corners of the frame where a suspicious keyword appears. Format: [x1, y1, x2, y2].
                     * @return AreaCoordSet The coordinates (pixel) of the top-left and bottom-right corners of the frame where a suspicious keyword appears. Format: [x1, y1, x2, y2].
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The coordinates (pixel) of the top-left and bottom-right corners of the frame where a suspicious keyword appears. Format: [x1, y1, x2, y2].
                     * @param _areaCoordSet The coordinates (pixel) of the top-left and bottom-right corners of the frame where a suspicious keyword appears. Format: [x1, y1, x2, y2].
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
                     * The confidence score for the OCR-based moderation result. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The suggestion for handling the suspicious content detected based on OCR. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The list of suspicious keywords detected based on OCR.
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * The coordinates (pixel) of the top-left and bottom-right corners of the frame where a suspicious keyword appears. Format: [x1, y1, x2, y2].
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWOCRRESULT_H_
