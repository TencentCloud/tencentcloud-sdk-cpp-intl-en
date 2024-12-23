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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectFaceSimilarity response structure.
                */
                class DetectFaceSimilarityResponse : public AbstractModel
                {
                public:
                    DetectFaceSimilarityResponse();
                    ~DetectFaceSimilarityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The value range is [0.00, 100.00]. It is recommended that when the similarity is greater than or equal to 70, the person can be judged to be the same person, and the threshold can be adjusted according to the specific scenario (the false pass rate for a threshold of 70 is one in 1,000, and the false pass rate for a threshold of 80 is one in 10,000).
                     * @return Score The value range is [0.00, 100.00]. It is recommended that when the similarity is greater than or equal to 70, the person can be judged to be the same person, and the threshold can be adjusted according to the specific scenario (the false pass rate for a threshold of 70 is one in 1,000, and the false pass rate for a threshold of 80 is one in 10,000).
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * The value range is [0.00, 100.00]. It is recommended that when the similarity is greater than or equal to 70, the person can be judged to be the same person, and the threshold can be adjusted according to the specific scenario (the false pass rate for a threshold of 70 is one in 1,000, and the false pass rate for a threshold of 80 is one in 10,000).
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_
