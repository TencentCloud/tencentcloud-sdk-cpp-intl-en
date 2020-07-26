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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMIMGREVIEWTEMPLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMIMGREVIEWTEMPLATEINFO_H_

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
                * Control parameter of a terrorism information detection in image task
                */
                class TerrorismImgReviewTemplateInfo : public AbstractModel
                {
                public:
                    TerrorismImgReviewTemplateInfo();
                    ~TerrorismImgReviewTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of a terrorism information detection in image task. Valid values:
<li>ON: Enables a terrorism information detection in image task;</li>
<li>OFF: Disables a terrorism information detection in image task.</li>
                     * @return Switch Switch of a terrorism information detection in image task. Valid values:
<li>ON: Enables a terrorism information detection in image task;</li>
<li>OFF: Disables a terrorism information detection in image task.</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of a terrorism information detection in image task. Valid values:
<li>ON: Enables a terrorism information detection in image task;</li>
<li>OFF: Disables a terrorism information detection in image task.</li>
                     * @param Switch Switch of a terrorism information detection in image task. Valid values:
<li>ON: Enables a terrorism information detection in image task;</li>
<li>OFF: Disables a terrorism information detection in image task.</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Filter tag for terrorism information detection in image. If an audit result contains the selected tag, it will be returned; if the filter tag is empty, all audit results will be returned. Valid values:
<li>guns: Weapons and guns;</li>
<li>crowd: Crowd;</li>
<li>bloody: Bloody scenes;</li>
<li>police: Police force;</li>
<li>banners: Terrorism flags;</li>
<li>militant: Militants;</li>
<li>explosion: Explosions and fires;</li>
<li>terrorists: Terrorists.</li>
                     * @return LabelSet Filter tag for terrorism information detection in image. If an audit result contains the selected tag, it will be returned; if the filter tag is empty, all audit results will be returned. Valid values:
<li>guns: Weapons and guns;</li>
<li>crowd: Crowd;</li>
<li>bloody: Bloody scenes;</li>
<li>police: Police force;</li>
<li>banners: Terrorism flags;</li>
<li>militant: Militants;</li>
<li>explosion: Explosions and fires;</li>
<li>terrorists: Terrorists.</li>
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置Filter tag for terrorism information detection in image. If an audit result contains the selected tag, it will be returned; if the filter tag is empty, all audit results will be returned. Valid values:
<li>guns: Weapons and guns;</li>
<li>crowd: Crowd;</li>
<li>bloody: Bloody scenes;</li>
<li>police: Police force;</li>
<li>banners: Terrorism flags;</li>
<li>militant: Militants;</li>
<li>explosion: Explosions and fires;</li>
<li>terrorists: Terrorists.</li>
                     * @param LabelSet Filter tag for terrorism information detection in image. If an audit result contains the selected tag, it will be returned; if the filter tag is empty, all audit results will be returned. Valid values:
<li>guns: Weapons and guns;</li>
<li>crowd: Crowd;</li>
<li>bloody: Bloody scenes;</li>
<li>police: Police force;</li>
<li>banners: Terrorism flags;</li>
<li>militant: Militants;</li>
<li>explosion: Explosions and fires;</li>
<li>terrorists: Terrorists.</li>
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     */
                    bool LabelSetHasBeenSet() const;

                    /**
                     * 获取Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. If this parameter is left empty, 90 will be used by default. Value range: 0-100.
                     * @return BlockConfidence Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. If this parameter is left empty, 90 will be used by default. Value range: 0-100.
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. If this parameter is left empty, 90 will be used by default. Value range: 0-100.
                     * @param BlockConfidence Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. If this parameter is left empty, 90 will be used by default. Value range: 0-100.
                     */
                    void SetBlockConfidence(const int64_t& _blockConfidence);

                    /**
                     * 判断参数 BlockConfidence 是否已赋值
                     * @return BlockConfidence 是否已赋值
                     */
                    bool BlockConfidenceHasBeenSet() const;

                    /**
                     * 获取Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. If this parameter is left empty, 80 will be used by default. Value range: 0-100.
                     * @return ReviewConfidence Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. If this parameter is left empty, 80 will be used by default. Value range: 0-100.
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. If this parameter is left empty, 80 will be used by default. Value range: 0-100.
                     * @param ReviewConfidence Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. If this parameter is left empty, 80 will be used by default. Value range: 0-100.
                     */
                    void SetReviewConfidence(const int64_t& _reviewConfidence);

                    /**
                     * 判断参数 ReviewConfidence 是否已赋值
                     * @return ReviewConfidence 是否已赋值
                     */
                    bool ReviewConfidenceHasBeenSet() const;

                private:

                    /**
                     * Switch of a terrorism information detection in image task. Valid values:
<li>ON: Enables a terrorism information detection in image task;</li>
<li>OFF: Disables a terrorism information detection in image task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Filter tag for terrorism information detection in image. If an audit result contains the selected tag, it will be returned; if the filter tag is empty, all audit results will be returned. Valid values:
<li>guns: Weapons and guns;</li>
<li>crowd: Crowd;</li>
<li>bloody: Bloody scenes;</li>
<li>police: Police force;</li>
<li>banners: Terrorism flags;</li>
<li>militant: Militants;</li>
<li>explosion: Explosions and fires;</li>
<li>terrorists: Terrorists.</li>
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * Threshold score for violation. If this score is reached or exceeded during intelligent audit, it will be deemed that a suspected violation has occurred. If this parameter is left empty, 90 will be used by default. Value range: 0-100.
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * Threshold score for human audit. If this score is reached or exceeded during intelligent audit, human audit will be considered necessary. If this parameter is left empty, 80 will be used by default. Value range: 0-100.
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMIMGREVIEWTEMPLATEINFO_H_
