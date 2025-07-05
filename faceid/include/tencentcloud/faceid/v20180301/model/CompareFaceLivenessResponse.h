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
                     * 获取Business Error Codes.
-When the return value is "Success", it indicates that liveness detection and face comparison passed. Determined to be the same person.
-When the return value is "FailedOperation.CompareLowSimilarity", it indicates that liveness detection passed, but face comparison similarity is below 70. Determined not to be the same person.
-For other error cases, please refer to [Liveness Face Comparison (API only) Error Codes](https://www.tencentcloud.com/zh/document/product/1061/55390?lang=zh&pg=#97df7537-87fe-4266-87e9-02c816d41ee2)
                     * @return Result Business Error Codes.
-When the return value is "Success", it indicates that liveness detection and face comparison passed. Determined to be the same person.
-When the return value is "FailedOperation.CompareLowSimilarity", it indicates that liveness detection passed, but face comparison similarity is below 70. Determined not to be the same person.
-For other error cases, please refer to [Liveness Face Comparison (API only) Error Codes](https://www.tencentcloud.com/zh/document/product/1061/55390?lang=zh&pg=#97df7537-87fe-4266-87e9-02c816d41ee2)
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
                     * 获取This value indicates the similarity of face comparison. Value range: 0.00-100.00.
- The false acceptance rate for a threshold of 70 is 0.1%, and for a threshold of 80, it is 0.01%.
- This value is valid when the Result parameter is "Success" or "FailedOperation.CompareLowSimilarity".
                     * @return Sim This value indicates the similarity of face comparison. Value range: 0.00-100.00.
- The false acceptance rate for a threshold of 70 is 0.1%, and for a threshold of 80, it is 0.01%.
- This value is valid when the Result parameter is "Success" or "FailedOperation.CompareLowSimilarity".
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
                     * 获取The best screenshot photo from the video after verification, encoded in BASE64, in jpg format.
The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return "null", indicating that no valid value can be obtained. 
Example values: "/9j/4AAQSk... (total length:142036)s97n//2Q=="
                     * @return BestFrameBase64 The best screenshot photo from the video after verification, encoded in BASE64, in jpg format.
The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return "null", indicating that no valid value can be obtained. 
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
                     * Business Error Codes.
-When the return value is "Success", it indicates that liveness detection and face comparison passed. Determined to be the same person.
-When the return value is "FailedOperation.CompareLowSimilarity", it indicates that liveness detection passed, but face comparison similarity is below 70. Determined not to be the same person.
-For other error cases, please refer to [Liveness Face Comparison (API only) Error Codes](https://www.tencentcloud.com/zh/document/product/1061/55390?lang=zh&pg=#97df7537-87fe-4266-87e9-02c816d41ee2)
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The service result description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * This value indicates the similarity of face comparison. Value range: 0.00-100.00.
- The false acceptance rate for a threshold of 70 is 0.1%, and for a threshold of 80, it is 0.01%.
- This value is valid when the Result parameter is "Success" or "FailedOperation.CompareLowSimilarity".
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * The best screenshot photo from the video after verification, encoded in BASE64, in jpg format.
The optimal screenshot of the video after verification is the value encoded by BASE64, jpg format. 
Note: This field may return "null", indicating that no valid value can be obtained. 
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
