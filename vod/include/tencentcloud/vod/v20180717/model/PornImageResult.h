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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMAGERESULT_H_

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
                * Task result type of image moderation involving offensive content.
                */
                class PornImageResult : public AbstractModel
                {
                public:
                    PornImageResult();
                    ~PornImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication involves scoring offensive content, with a score from 0 to 100.
                     * @return Confidence Authentication involves scoring offensive content, with a score from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Authentication involves scoring offensive content, with a score from 0 to 100.
                     * @param _confidence Authentication involves scoring offensive content, with a score from 0 to 100.
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
                     * 获取Result suggestions for identifying offensive content. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for identifying offensive content. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for identifying offensive content. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for identifying offensive content. Value range:
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
                     * 获取Authentication result tag for offensive content. Value range:
<li>porn: pornography;</li>
<li>sexy: sexiness;</li>
<li>vulgar: Vulgar;</li>
<li>intimacy: intimate behavior.</li>
                     * @return Label Authentication result tag for offensive content. Value range:
<li>porn: pornography;</li>
<li>sexy: sexiness;</li>
<li>vulgar: Vulgar;</li>
<li>intimacy: intimate behavior.</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Authentication result tag for offensive content. Value range:
<li>porn: pornography;</li>
<li>sexy: sexiness;</li>
<li>vulgar: Vulgar;</li>
<li>intimacy: intimate behavior.</li>
                     * @param _label Authentication result tag for offensive content. Value range:
<li>porn: pornography;</li>
<li>sexy: sexiness;</li>
<li>vulgar: Vulgar;</li>
<li>intimacy: intimate behavior.</li>
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
                     * Authentication involves scoring offensive content, with a score from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for identifying offensive content. Value range:
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Authentication result tag for offensive content. Value range:
<li>porn: pornography;</li>
<li>sexy: sexiness;</li>
<li>vulgar: Vulgar;</li>
<li>intimacy: intimate behavior.</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMAGERESULT_H_
