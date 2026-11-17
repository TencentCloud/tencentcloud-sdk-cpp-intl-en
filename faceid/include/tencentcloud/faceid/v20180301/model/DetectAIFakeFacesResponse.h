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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/AttackRiskDetail.h>
#include <tencentcloud/faceid/v20180301/model/ExtraInfo.h>
#include <tencentcloud/faceid/v20180301/model/ExtraRiskResult.h>


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
                     * 获取<p>Detection result for the input image/video, indicating whether a face attack exists.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderate suspected attack.</li><li>High: High suspected attack.</li></ul><p>It is recommended to block requests when the returned value is High, and allow requests when the value is Mid or Low, to better balance security and pass rate.</p>
                     * @return AttackRiskLevel <p>Detection result for the input image/video, indicating whether a face attack exists.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderate suspected attack.</li><li>High: High suspected attack.</li></ul><p>It is recommended to block requests when the returned value is High, and allow requests when the value is Mid or Low, to better balance security and pass rate.</p>
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
                     * 获取<p>List of detected suspected attack traces. Returned only when AttackRiskLevel is High or Mid.</p><ul><li>Note: An empty array is returned when no attack trace is detected.</li><li>This output parameter is for reference only. It is recommended to use the result of AttackRiskLevel in actual applications.</li></ul>
                     * @return AttackRiskDetailList <p>List of detected suspected attack traces. Returned only when AttackRiskLevel is High or Mid.</p><ul><li>Note: An empty array is returned when no attack trace is detected.</li><li>This output parameter is for reference only. It is recommended to use the result of AttackRiskLevel in actual applications.</li></ul>
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
                     * 获取<p>Returns additional information, including details of the matched template.</p>
                     * @return ExtraInfo <p>Returns additional information, including details of the matched template.</p>
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取<p>Independent container for additional risk conclusions, indicating whether the additional risk check is trustworthy and whether any issues are found.</p>
                     * @return ExtraRiskResult <p>Independent container for additional risk conclusions, indicating whether the additional risk check is trustworthy and whether any issues are found.</p>
                     * 
                     */
                    ExtraRiskResult GetExtraRiskResult() const;

                    /**
                     * 判断参数 ExtraRiskResult 是否已赋值
                     * @return ExtraRiskResult 是否已赋值
                     * 
                     */
                    bool ExtraRiskResultHasBeenSet() const;

                private:

                    /**
                     * <p>Detection result for the input image/video, indicating whether a face attack exists.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderate suspected attack.</li><li>High: High suspected attack.</li></ul><p>It is recommended to block requests when the returned value is High, and allow requests when the value is Mid or Low, to better balance security and pass rate.</p>
                     */
                    std::string m_attackRiskLevel;
                    bool m_attackRiskLevelHasBeenSet;

                    /**
                     * <p>List of detected suspected attack traces. Returned only when AttackRiskLevel is High or Mid.</p><ul><li>Note: An empty array is returned when no attack trace is detected.</li><li>This output parameter is for reference only. It is recommended to use the result of AttackRiskLevel in actual applications.</li></ul>
                     */
                    std::vector<AttackRiskDetail> m_attackRiskDetailList;
                    bool m_attackRiskDetailListHasBeenSet;

                    /**
                     * <p>Returns additional information, including details of the matched template.</p>
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>Independent container for additional risk conclusions, indicating whether the additional risk check is trustworthy and whether any issues are found.</p>
                     */
                    ExtraRiskResult m_extraRiskResult;
                    bool m_extraRiskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
