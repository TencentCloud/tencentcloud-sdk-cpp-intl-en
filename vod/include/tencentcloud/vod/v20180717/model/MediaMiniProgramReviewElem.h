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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_

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
                * Mini Program Audio and Video review summary meta-information
                */
                class MediaMiniProgramReviewElem : public AbstractModel
                {
                public:
                    MediaMiniProgramReviewElem();
                    ~MediaMiniProgramReviewElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio and video moderation type. 
<li>Porn: The visual involves offensive content,</li>
<li>Porn.Ocr: text involves offensive content,</li>
<li>Porn.Asr: The sound involves offensive content,</li>
<li>Terrorism: The visual involves unsafe information,</li>
<li>Political: The visual involves inappropriate information,</li>
<li>Political.Ocr: The text involves inappropriate information,</li>
<li>Political.Asr: The sound involves inappropriate information.</li>
                     * @return Type Audio and video moderation type. 
<li>Porn: The visual involves offensive content,</li>
<li>Porn.Ocr: text involves offensive content,</li>
<li>Porn.Asr: The sound involves offensive content,</li>
<li>Terrorism: The visual involves unsafe information,</li>
<li>Political: The visual involves inappropriate information,</li>
<li>Political.Ocr: The text involves inappropriate information,</li>
<li>Political.Asr: The sound involves inappropriate information.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Audio and video moderation type. 
<li>Porn: The visual involves offensive content,</li>
<li>Porn.Ocr: text involves offensive content,</li>
<li>Porn.Asr: The sound involves offensive content,</li>
<li>Terrorism: The visual involves unsafe information,</li>
<li>Political: The visual involves inappropriate information,</li>
<li>Political.Ocr: The text involves inappropriate information,</li>
<li>Political.Asr: The sound involves inappropriate information.</li>
                     * @param _type Audio and video moderation type. 
<li>Porn: The visual involves offensive content,</li>
<li>Porn.Ocr: text involves offensive content,</li>
<li>Porn.Asr: The sound involves offensive content,</li>
<li>Terrorism: The visual involves unsafe information,</li>
<li>Political: The visual involves inappropriate information,</li>
<li>Political.Ocr: The text involves inappropriate information,</li>
<li>Political.Asr: The sound involves inappropriate information.</li>
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
                     * 获取Audio and video review comments.
<li>pass: confirm normal,</li>
<li>block: confirmed violation,</li>
<li>review: suspected violation.</li>
                     * @return Suggestion Audio and video review comments.
<li>pass: confirm normal,</li>
<li>block: confirmed violation,</li>
<li>review: suspected violation.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Audio and video review comments.
<li>pass: confirm normal,</li>
<li>block: confirmed violation,</li>
<li>review: suspected violation.</li>
                     * @param _suggestion Audio and video review comments.
<li>pass: confirm normal,</li>
<li>block: confirmed violation,</li>
<li>review: suspected violation.</li>
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
                     * 获取Confidence of the audio/video moderation result. Value range: 0-100.
                     * @return Confidence Confidence of the audio/video moderation result. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of the audio/video moderation result. Value range: 0-100.
                     * @param _confidence Confidence of the audio/video moderation result. Value range: 0-100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Audio and video moderation type. 
<li>Porn: The visual involves offensive content,</li>
<li>Porn.Ocr: text involves offensive content,</li>
<li>Porn.Asr: The sound involves offensive content,</li>
<li>Terrorism: The visual involves unsafe information,</li>
<li>Political: The visual involves inappropriate information,</li>
<li>Political.Ocr: The text involves inappropriate information,</li>
<li>Political.Asr: The sound involves inappropriate information.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Audio and video review comments.
<li>pass: confirm normal,</li>
<li>block: confirmed violation,</li>
<li>review: suspected violation.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Confidence of the audio/video moderation result. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_
