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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2RESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2RESPONSE_H_

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
                * ImageRecognitionV2 response structure.
                */
                class ImageRecognitionV2Response : public AbstractModel
                {
                public:
                    ImageRecognitionV2Response();
                    ~ImageRecognitionV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend at least 70 to be determined as the same person. You can self-adjust the threshold based on specific scenarios (the pass rate for false matches at threshold 70 is 0.01%).</p>
                     * @return Sim <p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend at least 70 to be determined as the same person. You can self-adjust the threshold based on specific scenarios (the pass rate for false matches at threshold 70 is 0.01%).</p>
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
                     * 获取<p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
                     * @return Result <p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
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

                    /**
                     * 获取<p>Custom description field in the API call.</p>
                     * @return Extra <p>Custom description field in the API call.</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>Similarity. - Value ranges from 0.00 to 100.00. - Recommend at least 70 to be determined as the same person. You can self-adjust the threshold based on specific scenarios (the pass rate for false matches at threshold 70 is 0.01%).</p>
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * <p>Business error code.</p><ul><li>Success case returns Success.</li><li>For error conditions, refer to the FailedOperation part in the error code list below.</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Business result description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Custom description field in the API call.</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2RESPONSE_H_
