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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Decision.h>
#include <tencentcloud/rce/v20260130/model/Score.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The results of AssessRisk
                */
                class AssessRiskRsp : public AbstractModel
                {
                public:
                    AssessRiskRsp();
                    ~AssessRiskRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Decision information</p>
                     * @return Decision <p>Decision information</p>
                     * 
                     */
                    Decision GetDecision() const;

                    /**
                     * 设置<p>Decision information</p>
                     * @param _decision <p>Decision information</p>
                     * 
                     */
                    void SetDecision(const Decision& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>Risk score, a scoring result calculated based on the product services you have enabled</p>
                     * @return Score <p>Risk score, a scoring result calculated based on the product services you have enabled</p>
                     * 
                     */
                    Score GetScore() const;

                    /**
                     * 设置<p>Risk score, a scoring result calculated based on the product services you have enabled</p>
                     * @param _score <p>Risk score, a scoring result calculated based on the product services you have enabled</p>
                     * 
                     */
                    void SetScore(const Score& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>Extended information</p>
                     * @return ExtraInfo <p>Extended information</p>
                     * 
                     */
                    std::vector<Cust> GetExtraInfo() const;

                    /**
                     * 设置<p>Extended information</p>
                     * @param _extraInfo <p>Extended information</p>
                     * 
                     */
                    void SetExtraInfo(const std::vector<Cust>& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Decision information</p>
                     */
                    Decision m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>Risk score, a scoring result calculated based on the product services you have enabled</p>
                     */
                    Score m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>Extended information</p>
                     */
                    std::vector<Cust> m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_
