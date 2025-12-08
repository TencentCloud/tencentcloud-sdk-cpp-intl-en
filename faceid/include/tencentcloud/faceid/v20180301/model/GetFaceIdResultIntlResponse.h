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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLRESPONSE_H_

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
                * GetFaceIdResultIntl response structure.
                */
                class GetFaceIdResultIntlResponse : public AbstractModel
                {
                public:
                    GetFaceIdResultIntlResponse();
                    ~GetFaceIdResultIntlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The return code of the verification result.
0: Succeeded.
1001: System error.
1004: Selfie verification comparison failed.
2004: The image passed in is too large or too small.
2012: Several faces were detected.
2013: No face was detected, or the face detected was incomplete.
2014: The image resolution is too low or the quality does not meet the requirements.
2015: Face comparison failed.
2016: The similarity did not reach the standard passing threshold.
-999: The verification process wasn't finished.
                     * @return Result The return code of the verification result.
0: Succeeded.
1001: System error.
1004: Selfie verification comparison failed.
2004: The image passed in is too large or too small.
2012: Several faces were detected.
2013: No face was detected, or the face detected was incomplete.
2014: The image resolution is too low or the quality does not meet the requirements.
2015: Face comparison failed.
2016: The similarity did not reach the standard passing threshold.
-999: The verification process wasn't finished.
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
                     * 获取The description of the verification result.
                     * @return Description The description of the verification result.
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
                     * 获取The best frame screenshot (in Base64) obtained during the verification.
                     * @return BestFrame The best frame screenshot (in Base64) obtained during the verification.
                     * 
                     */
                    std::string GetBestFrame() const;

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     * 
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取The video file (Base64) for verification.Used for verification, contains specific color reflection effects.
                     * @return Video The video file (Base64) for verification.Used for verification, contains specific color reflection effects.
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取Records the specific action performed by the user, used for AI Face Shield analysis.
                     * @return ActionVideo Records the specific action performed by the user, used for AI Face Shield analysis.
                     * 
                     */
                    std::string GetActionVideo() const;

                    /**
                     * 判断参数 ActionVideo 是否已赋值
                     * @return ActionVideo 是否已赋值
                     * 
                     */
                    bool ActionVideoHasBeenSet() const;

                    /**
                     * 获取The similarity, with a value range of 0-100. A greater value indicates higher similarity. This parameter is returned only in the `compare` (selfie verification) mode.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Similarity The similarity, with a value range of 0-100. A greater value indicates higher similarity. This parameter is returned only in the `compare` (selfie verification) mode.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取The pass-through parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extra The pass-through parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     * @return DeviceInfoLevel Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     * 
                     */
                    std::string GetDeviceInfoLevel() const;

                    /**
                     * 判断参数 DeviceInfoLevel 是否已赋值
                     * @return DeviceInfoLevel 是否已赋值
                     * 
                     */
                    bool DeviceInfoLevelHasBeenSet() const;

                    /**
                     * 获取Describes the detailed reason for the current liveness detection failure. Output only when SdkVersion is PLUS. Details are as follows:
01 - User kept eyes closed throughout the process.
02 - User failed to complete the specified action.
03 - Suspected photo replay attack.
04 - Suspected synthetic image.
05 - Suspected synthetic video.
06 - Suspected synthetic action.
07 - Suspected fraud template.
08 - Suspected watermark existence.
09 - Light verification failed.
10 - Face verification failed.
11 - Poor face quality.
12 - Unqualified collection quality.
13 - Suspected adversarial sample attack.
                     * @return LivenessInfoTag Describes the detailed reason for the current liveness detection failure. Output only when SdkVersion is PLUS. Details are as follows:
01 - User kept eyes closed throughout the process.
02 - User failed to complete the specified action.
03 - Suspected photo replay attack.
04 - Suspected synthetic image.
05 - Suspected synthetic video.
06 - Suspected synthetic action.
07 - Suspected fraud template.
08 - Suspected watermark existence.
09 - Light verification failed.
10 - Face verification failed.
11 - Poor face quality.
12 - Unqualified collection quality.
13 - Suspected adversarial sample attack.
                     * 
                     */
                    std::vector<std::string> GetLivenessInfoTag() const;

                    /**
                     * 判断参数 LivenessInfoTag 是否已赋值
                     * @return LivenessInfoTag 是否已赋值
                     * 
                     */
                    bool LivenessInfoTagHasBeenSet() const;

                private:

                    /**
                     * The return code of the verification result.
0: Succeeded.
1001: System error.
1004: Selfie verification comparison failed.
2004: The image passed in is too large or too small.
2012: Several faces were detected.
2013: No face was detected, or the face detected was incomplete.
2014: The image resolution is too low or the quality does not meet the requirements.
2015: Face comparison failed.
2016: The similarity did not reach the standard passing threshold.
-999: The verification process wasn't finished.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The description of the verification result.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The best frame screenshot (in Base64) obtained during the verification.
                     */
                    std::string m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * The video file (Base64) for verification.Used for verification, contains specific color reflection effects.
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Records the specific action performed by the user, used for AI Face Shield analysis.
                     */
                    std::string m_actionVideo;
                    bool m_actionVideoHasBeenSet;

                    /**
                     * The similarity, with a value range of 0-100. A greater value indicates higher similarity. This parameter is returned only in the `compare` (selfie verification) mode.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * The pass-through parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * Describe the risk level of the device where the current request is located, with a total of 4 levels. The details are as follows:
1 - Secure
2 - Low Risk
3 - Medium Risk
4 - High Risk
Empty - Risk level not obtained.
Only returned for the ENHANCED version, with the default value being empty.
                     */
                    std::string m_deviceInfoLevel;
                    bool m_deviceInfoLevelHasBeenSet;

                    /**
                     * Describes the detailed reason for the current liveness detection failure. Output only when SdkVersion is PLUS. Details are as follows:
01 - User kept eyes closed throughout the process.
02 - User failed to complete the specified action.
03 - Suspected photo replay attack.
04 - Suspected synthetic image.
05 - Suspected synthetic video.
06 - Suspected synthetic action.
07 - Suspected fraud template.
08 - Suspected watermark existence.
09 - Light verification failed.
10 - Face verification failed.
11 - Poor face quality.
12 - Unqualified collection quality.
13 - Suspected adversarial sample attack.
                     */
                    std::vector<std::string> m_livenessInfoTag;
                    bool m_livenessInfoTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTINTLRESPONSE_H_
