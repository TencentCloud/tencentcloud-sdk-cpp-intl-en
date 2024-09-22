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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/AttackRiskDetail.h>
#include <tencentcloud/faceid/v20180301/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectAIFakeFaces response structure.
                */
                class DetectAIFakeFacesResponse : public AbstractModel
                {
                public:
                    DetectAIFakeFacesResponse();
                    ~DetectAIFakeFacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the detected image is an attack: Low: No attack risk Mid: Moderately suspected attack High: Highly suspected attack
                     * @return AttackRiskLevel Whether the detected image is an attack: Low: No attack risk Mid: Moderately suspected attack High: Highly suspected attack
                     * 
                     */
                    std::string GetAttackRiskLevel() const;

                    /**
                     * 判断参数 AttackRiskLevel 是否已赋值
                     * @return AttackRiskLevel 是否已赋值
                     * 
                     */
                    bool AttackRiskLevelHasBeenSet() const;

                    /**
                     * 获取A list of suspected attack traces detected. Note: When no attack traces are detected, an empty array is returned. This parameter is only used as a reference for result judgment. In actual applications, it is still recommended to use the result of AttackRiskLevel.
                     * @return AttackRiskDetailList A list of suspected attack traces detected. Note: When no attack traces are detected, an empty array is returned. This parameter is only used as a reference for result judgment. In actual applications, it is still recommended to use the result of AttackRiskLevel.
                     * 
                     */
                    std::vector<AttackRiskDetail> GetAttackRiskDetailList() const;

                    /**
                     * 判断参数 AttackRiskDetailList 是否已赋值
                     * @return AttackRiskDetailList 是否已赋值
                     * 
                     */
                    bool AttackRiskDetailListHasBeenSet() const;

                    /**
                     * 获取Additional Information
                     * @return ExtraInfo Additional Information
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Whether the detected image is an attack: Low: No attack risk Mid: Moderately suspected attack High: Highly suspected attack
                     */
                    std::string m_attackRiskLevel;
                    bool m_attackRiskLevelHasBeenSet;

                    /**
                     * A list of suspected attack traces detected. Note: When no attack traces are detected, an empty array is returned. This parameter is only used as a reference for result judgment. In actual applications, it is still recommended to use the result of AttackRiskLevel.
                     */
                    std::vector<AttackRiskDetail> m_attackRiskDetailList;
                    bool m_attackRiskDetailListHasBeenSet;

                    /**
                     * Additional Information
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
