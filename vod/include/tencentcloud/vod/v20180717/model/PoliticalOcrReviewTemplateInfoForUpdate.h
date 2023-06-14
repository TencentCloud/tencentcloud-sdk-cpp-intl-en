/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALOCRREVIEWTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALOCRREVIEWTEMPLATEINFOFORUPDATE_H_

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
                * Parameters for OCR-based recognition of politically sensitive content
                */
                class PoliticalOcrReviewTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    PoliticalOcrReviewTemplateInfoForUpdate();
                    ~PoliticalOcrReviewTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable OCR-based recognition of politically sensitive content. Valid values:
<li>ON</li>
<li>OFF</li>
                     * @return Switch Whether to enable OCR-based recognition of politically sensitive content. Valid values:
<li>ON</li>
<li>OFF</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable OCR-based recognition of politically sensitive content. Valid values:
<li>ON</li>
<li>OFF</li>
                     * @param _switch Whether to enable OCR-based recognition of politically sensitive content. Valid values:
<li>ON</li>
<li>OFF</li>
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
                     * 获取Confidence score threshold for determining that something should be blocked. If this threshold is reached, VOD will suggest that the content be blocked. Value range: 0-100
                     * @return BlockConfidence Confidence score threshold for determining that something should be blocked. If this threshold is reached, VOD will suggest that the content be blocked. Value range: 0-100
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Confidence score threshold for determining that something should be blocked. If this threshold is reached, VOD will suggest that the content be blocked. Value range: 0-100
                     * @param _blockConfidence Confidence score threshold for determining that something should be blocked. If this threshold is reached, VOD will suggest that the content be blocked. Value range: 0-100
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
                     * 获取Confidence score threshold for human review. If this threshold is reached, human review is needed. Value range: 0-100
                     * @return ReviewConfidence Confidence score threshold for human review. If this threshold is reached, human review is needed. Value range: 0-100
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Confidence score threshold for human review. If this threshold is reached, human review is needed. Value range: 0-100
                     * @param _reviewConfidence Confidence score threshold for human review. If this threshold is reached, human review is needed. Value range: 0-100
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
                     * Whether to enable OCR-based recognition of politically sensitive content. Valid values:
<li>ON</li>
<li>OFF</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Confidence score threshold for determining that something should be blocked. If this threshold is reached, VOD will suggest that the content be blocked. Value range: 0-100
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * Confidence score threshold for human review. If this threshold is reached, human review is needed. Value range: 0-100
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALOCRREVIEWTEMPLATEINFOFORUPDATE_H_
