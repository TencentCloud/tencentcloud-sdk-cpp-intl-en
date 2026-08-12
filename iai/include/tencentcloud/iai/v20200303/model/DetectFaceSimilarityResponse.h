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
                     * 获取<p>Value ranges from 0.00 to 100.00.<br>It is recommended to judge as the same person when the similarity is equal to or greater than 70 (a fixed threshold of 70 is used, with a false acceptance rate of 1 in 10,000, and the threshold cannot be adjusted).</p>
                     * @return Score <p>Value ranges from 0.00 to 100.00.<br>It is recommended to judge as the same person when the similarity is equal to or greater than 70 (a fixed threshold of 70 is used, with a false acceptance rate of 1 in 10,000, and the threshold cannot be adjusted).</p>
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
                     * <p>Value ranges from 0.00 to 100.00.<br>It is recommended to judge as the same person when the similarity is equal to or greater than 70 (a fixed threshold of 70 is used, with a false acceptance rate of 1 in 10,000, and the threshold cannot be adjusted).</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_
