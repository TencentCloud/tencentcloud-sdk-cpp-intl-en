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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSRESPONSE_H_

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
                * CompareFaceLiveness response structure.
                */
                class CompareFaceLivenessResponse : public AbstractModel
                {
                public:
                    CompareFaceLivenessResponse();
                    ~CompareFaceLivenessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Service error code. When the return value is "Success", it indicates that the liveness detection and face comparison succeeded. It is determined that they are the same person. When the return value is "FailedOperation.CompareLowSimilarity", it indicates that the liveness detection succeeded, and the face comparison similarity is lower than 70 points. It is determined that they are not the same person. For other error cases, please refer to Liveness Face Comparison (Pure API) Error Code (https://www.tencentcloud.com/document/product/1061/55390). 
Example Value: "Success".
                     * @return Result Service error code. When the return value is "Success", it indicates that the liveness detection and face comparison succeeded. It is determined that they are the same person. When the return value is "FailedOperation.CompareLowSimilarity", it indicates that the liveness detection succeeded, and the face comparison similarity is lower than 70 points. It is determined that they are not the same person. For other error cases, please refer to Liveness Face Comparison (Pure API) Error Code (https://www.tencentcloud.com/document/product/1061/55390). 
Example Value: "Success".
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
                     * 获取Description of business results. 
Example value: "Success"
                     * @return Description Description of business results. 
Example value: "Success"
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
                     * 获取This value is valid when the “Result” parameter is "Success" or "FailedOperation.CompareLowSimilarity." 
This value indicates the similarity of face comparison. Value range: [0.00, 100.00]. The false pass rate for threshold 70 is 1 in 1,000, and the false pass rate for threshold 80 is 1 in 1,000. 
Example value: 80.00
                     * @return Sim This value is valid when the “Result” parameter is "Success" or "FailedOperation.CompareLowSimilarity." 
This value indicates the similarity of face comparison. Value range: [0.00, 100.00]. The false pass rate for threshold 70 is 1 in 1,000, and the false pass rate for threshold 80 is 1 in 1,000. 
Example value: 80.00
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
                     * 获取The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return “null”, indicating that no valid value can be obtained. 
Example values: "/9j/4AAQSk... (total length:142036)s97n//2Q=="
                     * @return BestFrameBase64 The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return “null”, indicating that no valid value can be obtained. 
Example values: "/9j/4AAQSk... (total length:142036)s97n//2Q=="
                     * 
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     * 
                     */
                    bool BestFrameBase64HasBeenSet() const;

                private:

                    /**
                     * Service error code. When the return value is "Success", it indicates that the liveness detection and face comparison succeeded. It is determined that they are the same person. When the return value is "FailedOperation.CompareLowSimilarity", it indicates that the liveness detection succeeded, and the face comparison similarity is lower than 70 points. It is determined that they are not the same person. For other error cases, please refer to Liveness Face Comparison (Pure API) Error Code (https://www.tencentcloud.com/document/product/1061/55390). 
Example Value: "Success".
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Description of business results. 
Example value: "Success"
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * This value is valid when the “Result” parameter is "Success" or "FailedOperation.CompareLowSimilarity." 
This value indicates the similarity of face comparison. Value range: [0.00, 100.00]. The false pass rate for threshold 70 is 1 in 1,000, and the false pass rate for threshold 80 is 1 in 1,000. 
Example value: 80.00
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return “null”, indicating that no valid value can be obtained. 
Example values: "/9j/4AAQSk... (total length:142036)s97n//2Q=="
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSRESPONSE_H_
