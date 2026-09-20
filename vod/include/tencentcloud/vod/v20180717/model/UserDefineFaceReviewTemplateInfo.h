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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINEFACEREVIEWTEMPLATEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINEFACEREVIEWTEMPLATEINFO_H_

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
                * Control parameters for audio/video moderation tasks of user-defined characters
                */
                class UserDefineFaceReviewTemplateInfo : public AbstractModel
                {
                public:
                    UserDefineFaceReviewTemplateInfo();
                    ~UserDefineFaceReviewTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch for user-defined character audio/video moderation tasks. Available values:
<li>ON: Enable the customized figure audio/video moderation task;</li>
<li>OFF: Disable the customized figure audio/video moderation task.</li>
                     * @return Switch Switch for user-defined character audio/video moderation tasks. Available values:
<li>ON: Enable the customized figure audio/video moderation task;</li>
<li>OFF: Disable the customized figure audio/video moderation task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch for user-defined character audio/video moderation tasks. Available values:
<li>ON: Enable the customized figure audio/video moderation task;</li>
<li>OFF: Disable the customized figure audio/video moderation task.</li>
                     * @param _switch Switch for user-defined character audio/video moderation tasks. Available values:
<li>ON: Enable the customized figure audio/video moderation task;</li>
<li>OFF: Disable the customized figure audio/video moderation task.</li>
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
                     * 获取User-defined character filter tags. The audio/video moderation results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. To use the tag filtering feature, you need to add corresponding character tags when adding a custom facial library.
The number of tags can be up to 10, and each tag can contain up to 16 characters.
                     * @return LabelSet User-defined character filter tags. The audio/video moderation results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. To use the tag filtering feature, you need to add corresponding character tags when adding a custom facial library.
The number of tags can be up to 10, and each tag can contain up to 16 characters.
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置User-defined character filter tags. The audio/video moderation results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. To use the tag filtering feature, you need to add corresponding character tags when adding a custom facial library.
The number of tags can be up to 10, and each tag can contain up to 16 characters.
                     * @param _labelSet User-defined character filter tags. The audio/video moderation results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. To use the tag filtering feature, you need to add corresponding character tags when adding a custom facial library.
The number of tags can be up to 10, and each tag can contain up to 16 characters.
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
                     * 获取Threshold score for determining suspected violations. When the review score reaches or exceeds this value, it is considered a suspected violation. Default value: 97. Value range: 0–100.
                     * @return BlockConfidence Threshold score for determining suspected violations. When the review score reaches or exceeds this value, it is considered a suspected violation. Default value: 97. Value range: 0–100.
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Threshold score for determining suspected violations. When the review score reaches or exceeds this value, it is considered a suspected violation. Default value: 97. Value range: 0–100.
                     * @param _blockConfidence Threshold score for determining suspected violations. When the review score reaches or exceeds this value, it is considered a suspected violation. Default value: 97. Value range: 0–100.
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
                     * 获取Threshold score for violations that determines whether manual review is required. If the review score reaches or exceeds this value, manual review is required. Default value: 95. Value range: 0–100.
                     * @return ReviewConfidence Threshold score for violations that determines whether manual review is required. If the review score reaches or exceeds this value, manual review is required. Default value: 95. Value range: 0–100.
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Threshold score for violations that determines whether manual review is required. If the review score reaches or exceeds this value, manual review is required. Default value: 95. Value range: 0–100.
                     * @param _reviewConfidence Threshold score for violations that determines whether manual review is required. If the review score reaches or exceeds this value, manual review is required. Default value: 95. Value range: 0–100.
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
                     * Switch for user-defined character audio/video moderation tasks. Available values:
<li>ON: Enable the customized figure audio/video moderation task;</li>
<li>OFF: Disable the customized figure audio/video moderation task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * User-defined character filter tags. The audio/video moderation results including the selected tags are returned. If the filter tag is empty, all auditing results will be returned. To use the tag filtering feature, you need to add corresponding character tags when adding a custom facial library.
The number of tags can be up to 10, and each tag can contain up to 16 characters.
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * Threshold score for determining suspected violations. When the review score reaches or exceeds this value, it is considered a suspected violation. Default value: 97. Value range: 0–100.
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * Threshold score for violations that determines whether manual review is required. If the review score reaches or exceeds this value, manual review is required. Default value: 95. Value range: 0–100.
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINEFACEREVIEWTEMPLATEINFO_H_
