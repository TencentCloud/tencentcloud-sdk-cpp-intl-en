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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ImageRecognition response structure.
                */
                class ImageRecognitionResponse : public AbstractModel
                {
                public:
                    ImageRecognitionResponse();
                    ~ImageRecognitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Similarity, value ranges from 0.00 to 100.00. Recommend judging as the same person when similarity is at least 70. Threshold can be self-adjusted based on specific scenarios (pass rate for false matches is one in a thousand at threshold 70, and one in ten thousand at threshold 80).</p>
                     * @return Sim <p>Similarity, value ranges from 0.00 to 100.00. Recommend judging as the same person when similarity is at least 70. Threshold can be self-adjusted based on specific scenarios (pass rate for false matches is one in a thousand at threshold 70, and one in ten thousand at threshold 80).</p>
                     * 
                     */
                    double GetSim() const;

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取<p>Business error code. Successfully returns Success in successful case. For error conditions, refer to the FailedOperation part in the error code list below.</p>
                     * @return Result <p>Business error code. Successfully returns Success in successful case. For error conditions, refer to the FailedOperation part in the error code list below.</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>Business result description.</p>
                     * @return Description <p>Business result description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Similarity, value ranges from 0.00 to 100.00. Recommend judging as the same person when similarity is at least 70. Threshold can be self-adjusted based on specific scenarios (pass rate for false matches is one in a thousand at threshold 70, and one in ten thousand at threshold 80).</p>
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * <p>Business error code. Successfully returns Success in successful case. For error conditions, refer to the FailedOperation part in the error code list below.</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Business result description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONRESPONSE_H_
