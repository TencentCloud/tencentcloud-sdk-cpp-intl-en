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
                     * 获取Suspected attack trace types
SuspectedSpoofingAttack: Suspected spoofing attack
SuspectedSynthesisImage: Suspected synthesis image
SuspectedSynthesisVideo: Suspected synthesis video
SuspectedeAnomalyAttack: Suspected anomaly attack
SuspectedAdversarialAttack: Suspected adversarial attack 
SuspectedBlackIndustry: Suspected batch generation attack
SuspectedWatermark: Suspected watermark
                     * @return Type Suspected attack trace types
SuspectedSpoofingAttack: Suspected spoofing attack
SuspectedSynthesisImage: Suspected synthesis image
SuspectedSynthesisVideo: Suspected synthesis video
SuspectedeAnomalyAttack: Suspected anomaly attack
SuspectedAdversarialAttack: Suspected adversarial attack 
SuspectedBlackIndustry: Suspected batch generation attack
SuspectedWatermark: Suspected watermark
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Suspected attack trace types
SuspectedSpoofingAttack: Suspected spoofing attack
SuspectedSynthesisImage: Suspected synthesis image
SuspectedSynthesisVideo: Suspected synthesis video
SuspectedeAnomalyAttack: Suspected anomaly attack
SuspectedAdversarialAttack: Suspected adversarial attack 
SuspectedBlackIndustry: Suspected batch generation attack
SuspectedWatermark: Suspected watermark
                     * @param _type Suspected attack trace types
SuspectedSpoofingAttack: Suspected spoofing attack
SuspectedSynthesisImage: Suspected synthesis image
SuspectedSynthesisVideo: Suspected synthesis video
SuspectedeAnomalyAttack: Suspected anomaly attack
SuspectedAdversarialAttack: Suspected adversarial attack 
SuspectedBlackIndustry: Suspected batch generation attack
SuspectedWatermark: Suspected watermark
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
                     * Suspected attack trace types
SuspectedSpoofingAttack: Suspected spoofing attack
SuspectedSynthesisImage: Suspected synthesis image
SuspectedSynthesisVideo: Suspected synthesis video
SuspectedeAnomalyAttack: Suspected anomaly attack
SuspectedAdversarialAttack: Suspected adversarial attack 
SuspectedBlackIndustry: Suspected batch generation attack
SuspectedWatermark: Suspected watermark
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_
