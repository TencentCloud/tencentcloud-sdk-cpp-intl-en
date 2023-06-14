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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPARERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * VideoLivenessCompare response structure.
                */
                class VideoLivenessCompareResponse : public AbstractModel
                {
                public:
                    VideoLivenessCompareResponse();
                    ~VideoLivenessCompareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two persons are of the same person. You can adjust the threshold according to your specific scenario (the FARs at the thresholds of 70 and 80 are 0.1% and 0.01%, respectively).
                     * @return Sim The similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two persons are of the same person. You can adjust the threshold according to your specific scenario (the FARs at the thresholds of 70 and 80 are 0.1% and 0.01%, respectively).
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
                     * 获取The service error code. `Success` will be returned for success. For error information, see the `FailedOperation` section in the error code list below.
                     * @return Result The service error code. `Success` will be returned for success. For error information, see the `FailedOperation` section in the error code list below.
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
                     * 获取The service result description
                     * @return Description The service result description
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
                     * 获取The best video screenshot after successful verification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BestFrame The best video screenshot after successful verification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     * 
                     */
                    bool BestFrameHasBeenSet() const;

                private:

                    /**
                     * The similarity. Value range: [0.00, 100.00]. As a recommendation, when the similarity is greater than or equal to 70, it can be determined that the two persons are of the same person. You can adjust the threshold according to your specific scenario (the FARs at the thresholds of 70 and 80 are 0.1% and 0.01%, respectively).
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * The service error code. `Success` will be returned for success. For error information, see the `FailedOperation` section in the error code list below.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The service result description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The best video screenshot after successful verification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPARERESPONSE_H_
