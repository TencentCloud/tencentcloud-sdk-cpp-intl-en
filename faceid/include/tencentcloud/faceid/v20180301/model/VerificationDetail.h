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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The details of the verification process.
                */
                class VerificationDetail : public AbstractModel
                {
                public:
                    VerificationDetail();
                    ~VerificationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCode The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorCode The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMsg The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取The result of this liveness detection process. `0` indicates success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LivenessErrorCode The result of this liveness detection process. `0` indicates success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLivenessErrorCode() const;

                    /**
                     * 设置The result of this liveness detection process. `0` indicates success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _livenessErrorCode The result of this liveness detection process. `0` indicates success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLivenessErrorCode(const int64_t& _livenessErrorCode);

                    /**
                     * 判断参数 LivenessErrorCode 是否已赋值
                     * @return LivenessErrorCode 是否已赋值
                     * 
                     */
                    bool LivenessErrorCodeHasBeenSet() const;

                    /**
                     * 获取The result description of this liveness detection process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LivenessErrorMsg The result description of this liveness detection process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLivenessErrorMsg() const;

                    /**
                     * 设置The result description of this liveness detection process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _livenessErrorMsg The result description of this liveness detection process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLivenessErrorMsg(const std::string& _livenessErrorMsg);

                    /**
                     * 判断参数 LivenessErrorMsg 是否已赋值
                     * @return LivenessErrorMsg 是否已赋值
                     * 
                     */
                    bool LivenessErrorMsgHasBeenSet() const;

                    /**
                     * 获取The result of this comparison process. `0` indicates that the person in the best face screenshot collected from the video stream is the same as that in the uploaded image for comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareErrorCode The result of this comparison process. `0` indicates that the person in the best face screenshot collected from the video stream is the same as that in the uploaded image for comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCompareErrorCode() const;

                    /**
                     * 设置The result of this comparison process. `0` indicates that the person in the best face screenshot collected from the video stream is the same as that in the uploaded image for comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareErrorCode The result of this comparison process. `0` indicates that the person in the best face screenshot collected from the video stream is the same as that in the uploaded image for comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareErrorCode(const int64_t& _compareErrorCode);

                    /**
                     * 判断参数 CompareErrorCode 是否已赋值
                     * @return CompareErrorCode 是否已赋值
                     * 
                     */
                    bool CompareErrorCodeHasBeenSet() const;

                    /**
                     * 获取The result description of this comparison process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareErrorMsg The result description of this comparison process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置The result description of this comparison process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareErrorMsg The result description of this comparison process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareErrorMsg(const std::string& _compareErrorMsg);

                    /**
                     * 判断参数 CompareErrorMsg 是否已赋值
                     * @return CompareErrorMsg 是否已赋值
                     * 
                     */
                    bool CompareErrorMsgHasBeenSet() const;

                    /**
                     * 获取The timestamp (ms) of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReqTimestamp The timestamp (ms) of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReqTimestamp() const;

                    /**
                     * 设置The timestamp (ms) of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reqTimestamp The timestamp (ms) of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReqTimestamp(const uint64_t& _reqTimestamp);

                    /**
                     * 判断参数 ReqTimestamp 是否已赋值
                     * @return ReqTimestamp 是否已赋值
                     * 
                     */
                    bool ReqTimestampHasBeenSet() const;

                    /**
                     * 获取The similarity of the best face screenshot collected from the video stream and the uploaded image for comparison in this verification process. Value range: [0.00, 100.00]. By default, the person in the screenshot is determined to be the same person in the image if the similarity is greater than or equal to 70.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Similarity The similarity of the best face screenshot collected from the video stream and the uploaded image for comparison in this verification process. Value range: [0.00, 100.00]. By default, the person in the screenshot is determined to be the same person in the image if the similarity is greater than or equal to 70.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置The similarity of the best face screenshot collected from the video stream and the uploaded image for comparison in this verification process. Value range: [0.00, 100.00]. By default, the person in the screenshot is determined to be the same person in the image if the similarity is greater than or equal to 70.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _similarity The similarity of the best face screenshot collected from the video stream and the uploaded image for comparison in this verification process. Value range: [0.00, 100.00]. By default, the person in the screenshot is determined to be the same person in the image if the similarity is greater than or equal to 70.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取Unique ID of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Seq Unique ID of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置Unique ID of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _seq Unique ID of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                private:

                    /**
                     * The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * The result of this liveness detection process. `0` indicates success.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_livenessErrorCode;
                    bool m_livenessErrorCodeHasBeenSet;

                    /**
                     * The result description of this liveness detection process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_livenessErrorMsg;
                    bool m_livenessErrorMsgHasBeenSet;

                    /**
                     * The result of this comparison process. `0` indicates that the person in the best face screenshot collected from the video stream is the same as that in the uploaded image for comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_compareErrorCode;
                    bool m_compareErrorCodeHasBeenSet;

                    /**
                     * The result description of this comparison process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_compareErrorMsg;
                    bool m_compareErrorMsgHasBeenSet;

                    /**
                     * The timestamp (ms) of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_reqTimestamp;
                    bool m_reqTimestampHasBeenSet;

                    /**
                     * The similarity of the best face screenshot collected from the video stream and the uploaded image for comparison in this verification process. Value range: [0.00, 100.00]. By default, the person in the screenshot is determined to be the same person in the image if the similarity is greater than or equal to 70.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * Unique ID of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_
