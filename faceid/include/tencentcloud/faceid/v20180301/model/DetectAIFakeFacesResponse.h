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
                     * 获取<p>Detection result for the input image/video to check the existence of face spoofing attack.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderately suspected attack.</li><li>High: Highly suspected attack.</li></ul><p>It is advisable to judge as interception when the return value is High, and pass for Mid and Low to better balance security and pass rate.</p>
                     * @return AttackRiskLevel <p>Detection result for the input image/video to check the existence of face spoofing attack.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderately suspected attack.</li><li>High: Highly suspected attack.</li></ul><p>It is advisable to judge as interception when the return value is High, and pass for Mid and Low to better balance security and pass rate.</p>
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
                     * 获取<p>List of suspected attack traces detected. It is returned only when AttackRiskLevel is High or Mid.</p><ul><li>Description: Return an empty array if no attack traces are detected.</li><li>This output parameter is for result determination reference. The result of AttackRiskLevel is still recommended for actual use.</li></ul>
                     * @return AttackRiskDetailList <p>List of suspected attack traces detected. It is returned only when AttackRiskLevel is High or Mid.</p><ul><li>Description: Return an empty array if no attack traces are detected.</li><li>This output parameter is for result determination reference. The result of AttackRiskLevel is still recommended for actual use.</li></ul>
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
                     * 获取<p>Return additional information (including detailed information of cache hit templates).</p>
                     * @return ExtraInfo <p>Return additional information (including detailed information of cache hit templates).</p>
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
                     * <p>Detection result for the input image/video to check the existence of face spoofing attack.</p><ul><li>Low: Low attack risk.</li><li>Mid: Moderately suspected attack.</li><li>High: Highly suspected attack.</li></ul><p>It is advisable to judge as interception when the return value is High, and pass for Mid and Low to better balance security and pass rate.</p>
                     */
                    std::string m_attackRiskLevel;
                    bool m_attackRiskLevelHasBeenSet;

                    /**
                     * <p>List of suspected attack traces detected. It is returned only when AttackRiskLevel is High or Mid.</p><ul><li>Description: Return an empty array if no attack traces are detected.</li><li>This output parameter is for result determination reference. The result of AttackRiskLevel is still recommended for actual use.</li></ul>
                     */
                    std::vector<AttackRiskDetail> m_attackRiskDetailList;
                    bool m_attackRiskDetailListHasBeenSet;

                    /**
                     * <p>Return additional information (including detailed information of cache hit templates).</p>
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
