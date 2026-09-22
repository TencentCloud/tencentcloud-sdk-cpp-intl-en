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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PORNASRREVIEWTEMPLATEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PORNASRREVIEWTEMPLATEINFO_H_

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
                * Task control parameter for ASR-based recognition involving offensive content
                */
                class PornAsrReviewTemplateInfo : public AbstractModel
                {
                public:
                    PornAsrReviewTemplateInfo();
                    ~PornAsrReviewTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task switch for ASR-based recognition involving offensive content. Available values:
<li>ON: enable the ASR-based recognition task involving offensive content;</li>
<li>OFF: disables the task involving offensive content in ASR-based recognition.</li>
                     * @return Switch Task switch for ASR-based recognition involving offensive content. Available values:
<li>ON: enable the ASR-based recognition task involving offensive content;</li>
<li>OFF: disables the task involving offensive content in ASR-based recognition.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Task switch for ASR-based recognition involving offensive content. Available values:
<li>ON: enable the ASR-based recognition task involving offensive content;</li>
<li>OFF: disables the task involving offensive content in ASR-based recognition.</li>
                     * @param _switch Task switch for ASR-based recognition involving offensive content. Available values:
<li>ON: enable the ASR-based recognition task involving offensive content;</li>
<li>OFF: disables the task involving offensive content in ASR-based recognition.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Threshold score for suspected violations. If the review score reaches or exceeds this value, the content is deemed as suspected violation. Default value: 100. Value range: 0–100.
                     * @return BlockConfidence Threshold score for suspected violations. If the review score reaches or exceeds this value, the content is deemed as suspected violation. Default value: 100. Value range: 0–100.
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Threshold score for suspected violations. If the review score reaches or exceeds this value, the content is deemed as suspected violation. Default value: 100. Value range: 0–100.
                     * @param _blockConfidence Threshold score for suspected violations. If the review score reaches or exceeds this value, the content is deemed as suspected violation. Default value: 100. Value range: 0–100.
                     * 
                     */
                    void SetBlockConfidence(const int64_t& _blockConfidence);

                    /**
                     * 判断参数 BlockConfidence 是否已赋值
                     * @return BlockConfidence 是否已赋值
                     * 
                     */
                    bool BlockConfidenceHasBeenSet() const;

                    /**
                     * 获取Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. If not specified, the default is 75 points. Value range: 0–100.
                     * @return ReviewConfidence Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. If not specified, the default is 75 points. Value range: 0–100.
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. If not specified, the default is 75 points. Value range: 0–100.
                     * @param _reviewConfidence Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. If not specified, the default is 75 points. Value range: 0–100.
                     * 
                     */
                    void SetReviewConfidence(const int64_t& _reviewConfidence);

                    /**
                     * 判断参数 ReviewConfidence 是否已赋值
                     * @return ReviewConfidence 是否已赋值
                     * 
                     */
                    bool ReviewConfidenceHasBeenSet() const;

                private:

                    /**
                     * Task switch for ASR-based recognition involving offensive content. Available values:
<li>ON: enable the ASR-based recognition task involving offensive content;</li>
<li>OFF: disables the task involving offensive content in ASR-based recognition.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Threshold score for suspected violations. If the review score reaches or exceeds this value, the content is deemed as suspected violation. Default value: 100. Value range: 0–100.
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. If not specified, the default is 75 points. Value range: 0–100.
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PORNASRREVIEWTEMPLATEINFO_H_
