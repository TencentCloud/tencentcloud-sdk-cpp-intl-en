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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_

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
                * The moderation result for politically sensitive content in an image.
                */
                class PoliticalImageResult : public AbstractModel
                {
                public:
                    PoliticalImageResult();
                    ~PoliticalImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The confidence score for the moderation result. Value range: 0-100.
                     * @return Confidence The confidence score for the moderation result. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score for the moderation result. Value range: 0-100.
                     * @param _confidence The confidence score for the moderation result. Value range: 0-100.
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
                     * 获取The suggestion for handling the detected politically sensitive content. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * @return Suggestion The suggestion for handling the detected politically sensitive content. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置The suggestion for handling the detected politically sensitive content. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     * @param _suggestion The suggestion for handling the detected politically sensitive content. Valid values:
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
                     * 获取The name of the politically sensitive content or banned icon detected.
                     * @return Name The name of the politically sensitive content or banned icon detected.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the politically sensitive content or banned icon detected.
                     * @param _name The name of the politically sensitive content or banned icon detected.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The coordinates (pixel) of the top-left and bottom-right corners of the frame where the politically sensitive content or banned icon appears. Format: [x1, y1, x2, y2].
                     * @return AreaCoordSet The coordinates (pixel) of the top-left and bottom-right corners of the frame where the politically sensitive content or banned icon appears. Format: [x1, y1, x2, y2].
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The coordinates (pixel) of the top-left and bottom-right corners of the frame where the politically sensitive content or banned icon appears. Format: [x1, y1, x2, y2].
                     * @param _areaCoordSet The coordinates (pixel) of the top-left and bottom-right corners of the frame where the politically sensitive content or banned icon appears. Format: [x1, y1, x2, y2].
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
                     * The confidence score for the moderation result. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The suggestion for handling the detected politically sensitive content. Valid values:
<li>pass/li>
<li>review</li>
<li>block</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * The name of the politically sensitive content or banned icon detected.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The coordinates (pixel) of the top-left and bottom-right corners of the frame where the politically sensitive content or banned icon appears. Format: [x1, y1, x2, y2].
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
