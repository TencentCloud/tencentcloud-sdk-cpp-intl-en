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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_

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
                * Task result type for unsafe information involved in image moderation
                */
                class TerrorismImageResult : public AbstractModel
                {
                public:
                    TerrorismImageResult();
                    ~TerrorismImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication involves scoring unsafe information, with a score from 0 to 100.
                     * @return Confidence Authentication involves scoring unsafe information, with a score from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Authentication involves scoring unsafe information, with a score from 0 to 100.
                     * @param _confidence Authentication involves scoring unsafe information, with a score from 0 to 100.
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
                     * 获取Authentication result suggestions involving unsafe information. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @return Suggestion Authentication result suggestions involving unsafe information. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Authentication result suggestions involving unsafe information. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @param _suggestion Authentication result suggestions involving unsafe information. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
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
                     * 获取Tag of the authentication result involving unsafe information. Value range:
<li>guns: weapons and firearms;</li>
<li>crowd: crowd gathering;</li>
<li>police: police force;</li>
<li>bloody: graphic violence;</li>
<li>banners: violent and terrorist flags;</li>
<li>explosion: explosions and fires;</li>
<li>scenario: Violent and terrorist visuals.</li>
                     * @return Label Tag of the authentication result involving unsafe information. Value range:
<li>guns: weapons and firearms;</li>
<li>crowd: crowd gathering;</li>
<li>police: police force;</li>
<li>bloody: graphic violence;</li>
<li>banners: violent and terrorist flags;</li>
<li>explosion: explosions and fires;</li>
<li>scenario: Violent and terrorist visuals.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the authentication result involving unsafe information. Value range:
<li>guns: weapons and firearms;</li>
<li>crowd: crowd gathering;</li>
<li>police: police force;</li>
<li>bloody: graphic violence;</li>
<li>banners: violent and terrorist flags;</li>
<li>explosion: explosions and fires;</li>
<li>scenario: Violent and terrorist visuals.</li>
                     * @param _label Tag of the authentication result involving unsafe information. Value range:
<li>guns: weapons and firearms;</li>
<li>crowd: crowd gathering;</li>
<li>police: police force;</li>
<li>bloody: graphic violence;</li>
<li>banners: violent and terrorist flags;</li>
<li>explosion: explosions and fires;</li>
<li>scenario: Violent and terrorist visuals.</li>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * Authentication involves scoring unsafe information, with a score from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Authentication result suggestions involving unsafe information. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag of the authentication result involving unsafe information. Value range:
<li>guns: weapons and firearms;</li>
<li>crowd: crowd gathering;</li>
<li>police: police force;</li>
<li>bloody: graphic violence;</li>
<li>banners: violent and terrorist flags;</li>
<li>explosion: explosions and fires;</li>
<li>scenario: Violent and terrorist visuals.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMIMAGERESULT_H_
