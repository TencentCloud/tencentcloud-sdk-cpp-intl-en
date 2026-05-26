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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Suspected attack detail
                */
                class AttackRiskDetail : public AbstractModel
                {
                public:
                    AttackRiskDetail();
                    ~AttackRiskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Suspected attack trace type, specific type as follows:<br>SuspectedSpoofingAttack: Rephotography attack<br>SuspectedSynthesisImage: Suspected synthesized image<br>SuspectedSynthesisVideo: Suspected synthesized video<br>SuspectedAnomalyAttack: Facial features suspected of not being real<br>SuspectedAdversarialAttack: Suspected adversarial sample attack<br>SuspectedBlackIndustry: Suspected black industry batch template attack<br>SuspectedWatermark: Suspected watermark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Suspected attack trace type, specific type as follows:<br>SuspectedSpoofingAttack: Rephotography attack<br>SuspectedSynthesisImage: Suspected synthesized image<br>SuspectedSynthesisVideo: Suspected synthesized video<br>SuspectedAnomalyAttack: Facial features suspected of not being real<br>SuspectedAdversarialAttack: Suspected adversarial sample attack<br>SuspectedBlackIndustry: Suspected black industry batch template attack<br>SuspectedWatermark: Suspected watermark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Suspected attack trace type, specific type as follows:<br>SuspectedSpoofingAttack: Rephotography attack<br>SuspectedSynthesisImage: Suspected synthesized image<br>SuspectedSynthesisVideo: Suspected synthesized video<br>SuspectedAnomalyAttack: Facial features suspected of not being real<br>SuspectedAdversarialAttack: Suspected adversarial sample attack<br>SuspectedBlackIndustry: Suspected black industry batch template attack<br>SuspectedWatermark: Suspected watermark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Suspected attack trace type, specific type as follows:<br>SuspectedSpoofingAttack: Rephotography attack<br>SuspectedSynthesisImage: Suspected synthesized image<br>SuspectedSynthesisVideo: Suspected synthesized video<br>SuspectedAnomalyAttack: Facial features suspected of not being real<br>SuspectedAdversarialAttack: Suspected adversarial sample attack<br>SuspectedBlackIndustry: Suspected black industry batch template attack<br>SuspectedWatermark: Suspected watermark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Suspected attack trace type, specific type as follows:<br>SuspectedSpoofingAttack: Rephotography attack<br>SuspectedSynthesisImage: Suspected synthesized image<br>SuspectedSynthesisVideo: Suspected synthesized video<br>SuspectedAnomalyAttack: Facial features suspected of not being real<br>SuspectedAdversarialAttack: Suspected adversarial sample attack<br>SuspectedBlackIndustry: Suspected black industry batch template attack<br>SuspectedWatermark: Suspected watermark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_
