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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_

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
                * Image recognition involves task control parameters for offensive information.
                */
                class PornImgReviewTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    PornImgReviewTemplateInfoForUpdate();
                    ~PornImgReviewTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task switch for image recognition involving offensive content. Available values:</p><li>ON: Turn on the task for image recognition involving offensive content;</li><li>OFF: Turn off the task for image recognition involving offensive content.</li>
                     * @return Switch <p>Task switch for image recognition involving offensive content. Available values:</p><li>ON: Turn on the task for image recognition involving offensive content;</li><li>OFF: Turn off the task for image recognition involving offensive content.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Task switch for image recognition involving offensive content. Available values:</p><li>ON: Turn on the task for image recognition involving offensive content;</li><li>OFF: Turn off the task for image recognition involving offensive content.</li>
                     * @param _switch <p>Task switch for image recognition involving offensive content. Available values:</p><li>ON: Turn on the task for image recognition involving offensive content;</li><li>OFF: Turn off the task for image recognition involving offensive content.</li>
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
                     * 获取<p>Filter tags for offensive content involved in image recognition. The auditing results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. Valid values:</p><li>porn: Pornography;</li><li>vulgar: Vulgarity;</li><li>intimacy: Intimate behavior;</li><li>sexy: Sexiness.</li>
                     * @return LabelSet <p>Filter tags for offensive content involved in image recognition. The auditing results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. Valid values:</p><li>porn: Pornography;</li><li>vulgar: Vulgarity;</li><li>intimacy: Intimate behavior;</li><li>sexy: Sexiness.</li>
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置<p>Filter tags for offensive content involved in image recognition. The auditing results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. Valid values:</p><li>porn: Pornography;</li><li>vulgar: Vulgarity;</li><li>intimacy: Intimate behavior;</li><li>sexy: Sexiness.</li>
                     * @param _labelSet <p>Filter tags for offensive content involved in image recognition. The auditing results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. Valid values:</p><li>porn: Pornography;</li><li>vulgar: Vulgarity;</li><li>intimacy: Intimate behavior;</li><li>sexy: Sexiness.</li>
                     * 
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     * 
                     */
                    bool LabelSetHasBeenSet() const;

                    /**
                     * 获取<p>Threshold score for determining suspected violations. When the review score reaches this threshold or above, it is considered a suspected violation. Value range: 0–100.</p>
                     * @return BlockConfidence <p>Threshold score for determining suspected violations. When the review score reaches this threshold or above, it is considered a suspected violation. Value range: 0–100.</p>
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置<p>Threshold score for determining suspected violations. When the review score reaches this threshold or above, it is considered a suspected violation. Value range: 0–100.</p>
                     * @param _blockConfidence <p>Threshold score for determining suspected violations. When the review score reaches this threshold or above, it is considered a suspected violation. Value range: 0–100.</p>
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
                     * 获取<p>Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. Value range: 0–100.</p>
                     * @return ReviewConfidence <p>Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. Value range: 0–100.</p>
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置<p>Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. Value range: 0–100.</p>
                     * @param _reviewConfidence <p>Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. Value range: 0–100.</p>
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
                     * <p>Task switch for image recognition involving offensive content. Available values:</p><li>ON: Turn on the task for image recognition involving offensive content;</li><li>OFF: Turn off the task for image recognition involving offensive content.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Filter tags for offensive content involved in image recognition. The auditing results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. Valid values:</p><li>porn: Pornography;</li><li>vulgar: Vulgarity;</li><li>intimacy: Intimate behavior;</li><li>sexy: Sexiness.</li>
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * <p>Threshold score for determining suspected violations. When the review score reaches this threshold or above, it is considered a suspected violation. Value range: 0–100.</p>
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * <p>Threshold score for determining whether manual review is required for violations. When the review score reaches or exceeds this threshold, manual review is considered necessary. Value range: 0–100.</p>
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_
