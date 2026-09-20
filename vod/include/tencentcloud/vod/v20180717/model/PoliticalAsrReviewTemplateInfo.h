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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALASRREVIEWTEMPLATEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALASRREVIEWTEMPLATEINFO_H_

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
                * Task control parameter for ASR-based recognition involving inappropriate information
                */
                class PoliticalAsrReviewTemplateInfo : public AbstractModel
                {
                public:
                    PoliticalAsrReviewTemplateInfo();
                    ~PoliticalAsrReviewTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task switch for ASR-based recognition involving inappropriate information. Available values:
<li>ON: enable the task involving ASR-based recognition of inappropriate information;</li>
<li>OFF: Disable the ASR-based recognition task involving inappropriate information.</li>
                     * @return Switch Task switch for ASR-based recognition involving inappropriate information. Available values:
<li>ON: enable the task involving ASR-based recognition of inappropriate information;</li>
<li>OFF: Disable the ASR-based recognition task involving inappropriate information.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Task switch for ASR-based recognition involving inappropriate information. Available values:
<li>ON: enable the task involving ASR-based recognition of inappropriate information;</li>
<li>OFF: Disable the ASR-based recognition task involving inappropriate information.</li>
                     * @param _switch Task switch for ASR-based recognition involving inappropriate information. Available values:
<li>ON: enable the task involving ASR-based recognition of inappropriate information;</li>
<li>OFF: Disable the ASR-based recognition task involving inappropriate information.</li>
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
                     * 获取Threshold score for determining whether manual review is required for violations. When the audio/video moderation score reaches or exceeds this threshold, manual review is required. Default value: 75. Value range: 0–100.
                     * @return ReviewConfidence Threshold score for determining whether manual review is required for violations. When the audio/video moderation score reaches or exceeds this threshold, manual review is required. Default value: 75. Value range: 0–100.
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Threshold score for determining whether manual review is required for violations. When the audio/video moderation score reaches or exceeds this threshold, manual review is required. Default value: 75. Value range: 0–100.
                     * @param _reviewConfidence Threshold score for determining whether manual review is required for violations. When the audio/video moderation score reaches or exceeds this threshold, manual review is required. Default value: 75. Value range: 0–100.
                     * 
                     */
                    void SetReviewConfidence(const int64_t& _reviewConfidence);

                    /**
                     * 判断参数 ReviewConfidence 是否已赋值
                     * @return ReviewConfidence 是否已赋值
                     * 
                     */
                    bool ReviewConfidenceHasBeenSet() const;

                    /**
                     * 获取Threshold score for determining suspected violations. When the audio/video moderation score reaches or exceeds this threshold, it is considered a suspected violation. If not specified, it defaults to 100 points. Value range: 0–100.
                     * @return BlockConfidence Threshold score for determining suspected violations. When the audio/video moderation score reaches or exceeds this threshold, it is considered a suspected violation. If not specified, it defaults to 100 points. Value range: 0–100.
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Threshold score for determining suspected violations. When the audio/video moderation score reaches or exceeds this threshold, it is considered a suspected violation. If not specified, it defaults to 100 points. Value range: 0–100.
                     * @param _blockConfidence Threshold score for determining suspected violations. When the audio/video moderation score reaches or exceeds this threshold, it is considered a suspected violation. If not specified, it defaults to 100 points. Value range: 0–100.
                     * 
                     */
                    void SetBlockConfidence(const int64_t& _blockConfidence);

                    /**
                     * 判断参数 BlockConfidence 是否已赋值
                     * @return BlockConfidence 是否已赋值
                     * 
                     */
                    bool BlockConfidenceHasBeenSet() const;

                private:

                    /**
                     * Task switch for ASR-based recognition involving inappropriate information. Available values:
<li>ON: enable the task involving ASR-based recognition of inappropriate information;</li>
<li>OFF: Disable the ASR-based recognition task involving inappropriate information.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Threshold score for determining whether manual review is required for violations. When the audio/video moderation score reaches or exceeds this threshold, manual review is required. Default value: 75. Value range: 0–100.
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                    /**
                     * Threshold score for determining suspected violations. When the audio/video moderation score reaches or exceeds this threshold, it is considered a suspected violation. If not specified, it defaults to 100 points. Value range: 0–100.
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALASRREVIEWTEMPLATEINFO_H_
