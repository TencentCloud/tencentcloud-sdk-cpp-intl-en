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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALIMGREVIEWTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALIMGREVIEWTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The parameters for detecting sensitive information in images.
                */
                class PoliticalImgReviewTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    PoliticalImgReviewTemplateInfoForUpdate();
                    ~PoliticalImgReviewTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to detect sensitive information in images. Valid values:
<li>ON</li>
<li>OFF</li>
                     * @return Switch Whether to detect sensitive information in images. Valid values:
<li>ON</li>
<li>OFF</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to detect sensitive information in images. Valid values:
<li>ON</li>
<li>OFF</li>
                     * @param _switch Whether to detect sensitive information in images. Valid values:
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
                     * 获取The filter labels for sensitive information detection in images, which specify the types of sensitive information to return. If this parameter is left empty, the detection results for all labels are returned. Valid values:
<li>violation_photo (banned icons)</li>
<li>politician</li>
<li>entertainment (people in the entertainment industry)</li>
<li>sport (people in the sports industry)</li>
<li>entrepreneur</li>
<li>scholar</li>
<li>celebrity</li>
<li>military (people in military)</li>
                     * @return LabelSet The filter labels for sensitive information detection in images, which specify the types of sensitive information to return. If this parameter is left empty, the detection results for all labels are returned. Valid values:
<li>violation_photo (banned icons)</li>
<li>politician</li>
<li>entertainment (people in the entertainment industry)</li>
<li>sport (people in the sports industry)</li>
<li>entrepreneur</li>
<li>scholar</li>
<li>celebrity</li>
<li>military (people in military)</li>
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置The filter labels for sensitive information detection in images, which specify the types of sensitive information to return. If this parameter is left empty, the detection results for all labels are returned. Valid values:
<li>violation_photo (banned icons)</li>
<li>politician</li>
<li>entertainment (people in the entertainment industry)</li>
<li>sport (people in the sports industry)</li>
<li>entrepreneur</li>
<li>scholar</li>
<li>celebrity</li>
<li>military (people in military)</li>
                     * @param _labelSet The filter labels for sensitive information detection in images, which specify the types of sensitive information to return. If this parameter is left empty, the detection results for all labels are returned. Valid values:
<li>violation_photo (banned icons)</li>
<li>politician</li>
<li>entertainment (people in the entertainment industry)</li>
<li>sport (people in the sports industry)</li>
<li>entrepreneur</li>
<li>scholar</li>
<li>celebrity</li>
<li>military (people in military)</li>
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
                     * 获取Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. Value range: 0-100.
                     * @return BlockConfidence Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. Value range: 0-100.
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. Value range: 0-100.
                     * @param _blockConfidence Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. Value range: 0-100.
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
                     * 获取Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. Value range: 0-100.
                     * @return ReviewConfidence Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. Value range: 0-100.
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. Value range: 0-100.
                     * @param _reviewConfidence Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. Value range: 0-100.
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
                     * Whether to detect sensitive information in images. Valid values:
<li>ON</li>
<li>OFF</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The filter labels for sensitive information detection in images, which specify the types of sensitive information to return. If this parameter is left empty, the detection results for all labels are returned. Valid values:
<li>violation_photo (banned icons)</li>
<li>politician</li>
<li>entertainment (people in the entertainment industry)</li>
<li>sport (people in the sports industry)</li>
<li>entrepreneur</li>
<li>scholar</li>
<li>celebrity</li>
<li>military (people in military)</li>
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. Value range: 0-100.
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. Value range: 0-100.
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_POLITICALIMGREVIEWTEMPLATEINFOFORUPDATE_H_
