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
                * Detailed process information for verification
                */
                class VerificationDetail : public AbstractModel
                {
                public:
                    VerificationDetail();
                    ~VerificationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Final result of this verification. 0 indicates that the verification is passed and the person is determined to be the same person.
                     * @return ErrorCode Final result of this verification. 0 indicates that the verification is passed and the person is determined to be the same person.
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Final result of this verification. 0 indicates that the verification is passed and the person is determined to be the same person.
                     * @param _errorCode Final result of this verification. 0 indicates that the verification is passed and the person is determined to be the same person.
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
                     * 获取Final result description of this verification
                     * @return ErrorMsg Final result description of this verification
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Final result description of this verification
                     * @param _errorMsg Final result description of this verification
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
                     * 获取Liveness detection result of this verification. 0 indicates success.
                     * @return LivenessErrorCode Liveness detection result of this verification. 0 indicates success.
                     * 
                     */
                    int64_t GetLivenessErrorCode() const;

                    /**
                     * 设置Liveness detection result of this verification. 0 indicates success.
                     * @param _livenessErrorCode Liveness detection result of this verification. 0 indicates success.
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
                     * 获取Description of the liveness detection result for this verification
                     * @return LivenessErrorMsg Description of the liveness detection result for this verification
                     * 
                     */
                    std::string GetLivenessErrorMsg() const;

                    /**
                     * 设置Description of the liveness detection result for this verification
                     * @param _livenessErrorMsg Description of the liveness detection result for this verification
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
                     * 获取Result of this verification comparison. 0 indicates that the best face photo collected from the video stream and the uploaded image for comparison are determined to be the same person.
                     * @return CompareErrorCode Result of this verification comparison. 0 indicates that the best face photo collected from the video stream and the uploaded image for comparison are determined to be the same person.
                     * 
                     */
                    int64_t GetCompareErrorCode() const;

                    /**
                     * 设置Result of this verification comparison. 0 indicates that the best face photo collected from the video stream and the uploaded image for comparison are determined to be the same person.
                     * @param _compareErrorCode Result of this verification comparison. 0 indicates that the best face photo collected from the video stream and the uploaded image for comparison are determined to be the same person.
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
                     * 获取Result description of this verification comparison
                     * @return CompareErrorMsg Result description of this verification comparison
                     * 
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置Result description of this verification comparison
                     * @param _compareErrorMsg Result description of this verification comparison
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
                     * 获取Verification timestamp (ms) this time
                     * @return ReqTimestamp Verification timestamp (ms) this time
                     * 
                     */
                    uint64_t GetReqTimestamp() const;

                    /**
                     * 设置Verification timestamp (ms) this time
                     * @param _reqTimestamp Verification timestamp (ms) this time
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
                     * 获取Similarity between the best face photo collected from the video stream in this verification and the uploaded image for comparison. Value range: [0.00, 100.00]. By default, the two are determined to be the same person when the similarity is at least 70.
                     * @return Similarity Similarity between the best face photo collected from the video stream in this verification and the uploaded image for comparison. Value range: [0.00, 100.00]. By default, the two are determined to be the same person when the similarity is at least 70.
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置Similarity between the best face photo collected from the video stream in this verification and the uploaded image for comparison. Value range: [0.00, 100.00]. By default, the two are determined to be the same person when the similarity is at least 70.
                     * @param _similarity Similarity between the best face photo collected from the video stream in this verification and the uploaded image for comparison. Value range: [0.00, 100.00]. By default, the two are determined to be the same person when the similarity is at least 70.
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
                     * 获取Unique identifier for this verification
                     * @return Seq Unique identifier for this verification
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置Unique identifier for this verification
                     * @param _seq Unique identifier for this verification
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取Description of the detailed reason why the current request was rejected in the liveness phase. This parameter is returned only for the PLUS version of the eKYC service.
-Details as follows:
01-User eyes closed throughout
02 - User has not completed the specified action
03-Suspected rephotography attack
04-Suspected synthesis attack
05-Suspected fraud template
06-Suspected watermark
07-Reflection validation failed
08-Suspected midway change person
09: Poor face quality
10-distance check failed
11-Suspected adversarial sample attack
12-Mouth area suspected of attack traces
13-Eye area suspected to have attack traces
14-Eye or mouth covered
Note: This field may return null, indicating that no valid values can be obtained.
Example value: ["01"].
                     * @return LivenessInfoTag Description of the detailed reason why the current request was rejected in the liveness phase. This parameter is returned only for the PLUS version of the eKYC service.
-Details as follows:
01-User eyes closed throughout
02 - User has not completed the specified action
03-Suspected rephotography attack
04-Suspected synthesis attack
05-Suspected fraud template
06-Suspected watermark
07-Reflection validation failed
08-Suspected midway change person
09: Poor face quality
10-distance check failed
11-Suspected adversarial sample attack
12-Mouth area suspected of attack traces
13-Eye area suspected to have attack traces
14-Eye or mouth covered
Note: This field may return null, indicating that no valid values can be obtained.
Example value: ["01"].
                     * 
                     */
                    std::vector<std::string> GetLivenessInfoTag() const;

                    /**
                     * 设置Description of the detailed reason why the current request was rejected in the liveness phase. This parameter is returned only for the PLUS version of the eKYC service.
-Details as follows:
01-User eyes closed throughout
02 - User has not completed the specified action
03-Suspected rephotography attack
04-Suspected synthesis attack
05-Suspected fraud template
06-Suspected watermark
07-Reflection validation failed
08-Suspected midway change person
09: Poor face quality
10-distance check failed
11-Suspected adversarial sample attack
12-Mouth area suspected of attack traces
13-Eye area suspected to have attack traces
14-Eye or mouth covered
Note: This field may return null, indicating that no valid values can be obtained.
Example value: ["01"].
                     * @param _livenessInfoTag Description of the detailed reason why the current request was rejected in the liveness phase. This parameter is returned only for the PLUS version of the eKYC service.
-Details as follows:
01-User eyes closed throughout
02 - User has not completed the specified action
03-Suspected rephotography attack
04-Suspected synthesis attack
05-Suspected fraud template
06-Suspected watermark
07-Reflection validation failed
08-Suspected midway change person
09: Poor face quality
10-distance check failed
11-Suspected adversarial sample attack
12-Mouth area suspected of attack traces
13-Eye area suspected to have attack traces
14-Eye or mouth covered
Note: This field may return null, indicating that no valid values can be obtained.
Example value: ["01"].
                     * 
                     */
                    void SetLivenessInfoTag(const std::vector<std::string>& _livenessInfoTag);

                    /**
                     * 判断参数 LivenessInfoTag 是否已赋值
                     * @return LivenessInfoTag 是否已赋值
                     * 
                     */
                    bool LivenessInfoTagHasBeenSet() const;

                private:

                    /**
                     * Final result of this verification. 0 indicates that the verification is passed and the person is determined to be the same person.
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Final result description of this verification
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Liveness detection result of this verification. 0 indicates success.
                     */
                    int64_t m_livenessErrorCode;
                    bool m_livenessErrorCodeHasBeenSet;

                    /**
                     * Description of the liveness detection result for this verification
                     */
                    std::string m_livenessErrorMsg;
                    bool m_livenessErrorMsgHasBeenSet;

                    /**
                     * Result of this verification comparison. 0 indicates that the best face photo collected from the video stream and the uploaded image for comparison are determined to be the same person.
                     */
                    int64_t m_compareErrorCode;
                    bool m_compareErrorCodeHasBeenSet;

                    /**
                     * Result description of this verification comparison
                     */
                    std::string m_compareErrorMsg;
                    bool m_compareErrorMsgHasBeenSet;

                    /**
                     * Verification timestamp (ms) this time
                     */
                    uint64_t m_reqTimestamp;
                    bool m_reqTimestampHasBeenSet;

                    /**
                     * Similarity between the best face photo collected from the video stream in this verification and the uploaded image for comparison. Value range: [0.00, 100.00]. By default, the two are determined to be the same person when the similarity is at least 70.
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * Unique identifier for this verification
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * Description of the detailed reason why the current request was rejected in the liveness phase. This parameter is returned only for the PLUS version of the eKYC service.
-Details as follows:
01-User eyes closed throughout
02 - User has not completed the specified action
03-Suspected rephotography attack
04-Suspected synthesis attack
05-Suspected fraud template
06-Suspected watermark
07-Reflection validation failed
08-Suspected midway change person
09: Poor face quality
10-distance check failed
11-Suspected adversarial sample attack
12-Mouth area suspected of attack traces
13-Eye area suspected to have attack traces
14-Eye or mouth covered
Note: This field may return null, indicating that no valid values can be obtained.
Example value: ["01"].
                     */
                    std::vector<std::string> m_livenessInfoTag;
                    bool m_livenessInfoTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_
