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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_

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
                * LivenessCompare response structure.
                */
                class LivenessCompareResponse : public AbstractModel
                {
                public:
                    LivenessCompareResponse();
                    ~LivenessCompareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取The best screenshot of the video after successful verification. The photo is Base64-encoded and in JPG format.
                     * @return BestFrameBase64 The best screenshot of the video after successful verification. The photo is Base64-encoded and in JPG format.
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     */
                    bool BestFrameBase64HasBeenSet() const;

                    /**
                     * 获取Similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two faces are of the same person. You can adjust the threshold according to your specific scenario (the FAR at the threshold of 70 is 0.1%, and FAR at the threshold of 80 is 0.01%).
                     * @return Sim Similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two faces are of the same person. You can adjust the threshold according to your specific scenario (the FAR at the threshold of 70 is 0.1%, and FAR at the threshold of 80 is 0.01%).
                     */
                    double GetSim() const;

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取Service error code. `Success` will be returned for success. For error information, please see the `FailedOperation` section in the error code list below.
                     * @return Result Service error code. `Success` will be returned for success. For error information, please see the `FailedOperation` section in the error code list below.
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Service result description.
                     * @return Description Service result description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * The best screenshot of the video after successful verification. The photo is Base64-encoded and in JPG format.
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * Similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two faces are of the same person. You can adjust the threshold according to your specific scenario (the FAR at the threshold of 70 is 0.1%, and FAR at the threshold of 80 is 0.01%).
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * Service error code. `Success` will be returned for success. For error information, please see the `FailedOperation` section in the error code list below.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Service result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_
