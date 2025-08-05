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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The description of a single comparison result.
                */
                class CompareResult : public AbstractModel
                {
                public:
                    CompareResult();
                    ~CompareResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The final verification result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
                     * @return ErrorCode The final verification result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置The final verification result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
                     * @param _errorCode The final verification result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the final verification result.
                     * @return ErrorMsg The description of the final verification result.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置The description of the final verification result.
                     * @param _errorMsg The description of the final verification result.
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
                     * 获取The liveness algorithm package generated during this SDK-based liveness detection.
                     * @return LiveData The liveness algorithm package generated during this SDK-based liveness detection.
                     * 
                     */
                    FileInfo GetLiveData() const;

                    /**
                     * 设置The liveness algorithm package generated during this SDK-based liveness detection.
                     * @param _liveData The liveness algorithm package generated during this SDK-based liveness detection.
                     * 
                     */
                    void SetLiveData(const FileInfo& _liveData);

                    /**
                     * 判断参数 LiveData 是否已赋值
                     * @return LiveData 是否已赋值
                     * 
                     */
                    bool LiveDataHasBeenSet() const;

                    /**
                     * 获取The download URL of the video used for verification, which contains specific color reflection effects, is valid for 10 minutes.
                     * @return LiveVideo The download URL of the video used for verification, which contains specific color reflection effects, is valid for 10 minutes.
                     * 
                     */
                    FileInfo GetLiveVideo() const;

                    /**
                     * 设置The download URL of the video used for verification, which contains specific color reflection effects, is valid for 10 minutes.
                     * @param _liveVideo The download URL of the video used for verification, which contains specific color reflection effects, is valid for 10 minutes.
                     * 
                     */
                    void SetLiveVideo(const FileInfo& _liveVideo);

                    /**
                     * 判断参数 LiveVideo 是否已赋值
                     * @return LiveVideo 是否已赋值
                     * 
                     */
                    bool LiveVideoHasBeenSet() const;

                    /**
                     * 获取Records the specific action performed by the user, used for AI Face Shield analysis.
                     * @return ActionVideo Records the specific action performed by the user, used for AI Face Shield analysis.
                     * 
                     */
                    FileInfo GetActionVideo() const;

                    /**
                     * 设置Records the specific action performed by the user, used for AI Face Shield analysis.
                     * @param _actionVideo Records the specific action performed by the user, used for AI Face Shield analysis.
                     * 
                     */
                    void SetActionVideo(const FileInfo& _actionVideo);

                    /**
                     * 判断参数 ActionVideo 是否已赋值
                     * @return ActionVideo 是否已赋值
                     * 
                     */
                    bool ActionVideoHasBeenSet() const;

                    /**
                     * 获取The liveness detection result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
                     * @return LiveErrorCode The liveness detection result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
                     * 
                     */
                    std::string GetLiveErrorCode() const;

                    /**
                     * 设置The liveness detection result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
                     * @param _liveErrorCode The liveness detection result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
                     * 
                     */
                    void SetLiveErrorCode(const std::string& _liveErrorCode);

                    /**
                     * 判断参数 LiveErrorCode 是否已赋值
                     * @return LiveErrorCode 是否已赋值
                     * 
                     */
                    bool LiveErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the liveness detection result.
                     * @return LiveErrorMsg The description of the liveness detection result.
                     * 
                     */
                    std::string GetLiveErrorMsg() const;

                    /**
                     * 设置The description of the liveness detection result.
                     * @param _liveErrorMsg The description of the liveness detection result.
                     * 
                     */
                    void SetLiveErrorMsg(const std::string& _liveErrorMsg);

                    /**
                     * 判断参数 LiveErrorMsg 是否已赋值
                     * @return LiveErrorMsg 是否已赋值
                     * 
                     */
                    bool LiveErrorMsgHasBeenSet() const;

                    /**
                     * 获取The download URL of the face screenshot during verification, which is valid for 10 minutes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BestFrame The download URL of the face screenshot during verification, which is valid for 10 minutes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 设置The download URL of the face screenshot during verification, which is valid for 10 minutes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bestFrame The download URL of the face screenshot during verification, which is valid for 10 minutes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBestFrame(const FileInfo& _bestFrame);

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     * 
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取The download URL of the profile photo screenshot from the identity document, which is valid for 10 minutes.
                     * @return ProfileImage The download URL of the profile photo screenshot from the identity document, which is valid for 10 minutes.
                     * 
                     */
                    FileInfo GetProfileImage() const;

                    /**
                     * 设置The download URL of the profile photo screenshot from the identity document, which is valid for 10 minutes.
                     * @param _profileImage The download URL of the profile photo screenshot from the identity document, which is valid for 10 minutes.
                     * 
                     */
                    void SetProfileImage(const FileInfo& _profileImage);

                    /**
                     * 判断参数 ProfileImage 是否已赋值
                     * @return ProfileImage 是否已赋值
                     * 
                     */
                    bool ProfileImageHasBeenSet() const;

                    /**
                     * 获取The face comparison result code.
0: Success.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareErrorCode The face comparison result code.
0: Success.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCompareErrorCode() const;

                    /**
                     * 设置The face comparison result code.
0: Success.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareErrorCode The face comparison result code.
0: Success.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompareErrorCode(const std::string& _compareErrorCode);

                    /**
                     * 判断参数 CompareErrorCode 是否已赋值
                     * @return CompareErrorCode 是否已赋值
                     * 
                     */
                    bool CompareErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareErrorMsg The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareErrorMsg The description of the face comparison result.
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
                     * 获取The similarity score of face comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sim The similarity score of face comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSim() const;

                    /**
                     * 设置The similarity score of face comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sim The similarity score of face comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSim(const double& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取This parameter is disused.
                     * @return IsNeedCharge This parameter is disused.
                     * 
                     */
                    bool GetIsNeedCharge() const;

                    /**
                     * 设置This parameter is disused.
                     * @param _isNeedCharge This parameter is disused.
                     * 
                     */
                    void SetIsNeedCharge(const bool& _isNeedCharge);

                    /**
                     * 判断参数 IsNeedCharge 是否已赋值
                     * @return IsNeedCharge 是否已赋值
                     * 
                     */
                    bool IsNeedChargeHasBeenSet() const;

                    /**
                     * 获取The identity document photo info edited by the user. Currently, this parameter is not applied.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfoInputJson The identity document photo info edited by the user. Currently, this parameter is not applied.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FileInfo GetCardInfoInputJson() const;

                    /**
                     * 设置The identity document photo info edited by the user. Currently, this parameter is not applied.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cardInfoInputJson The identity document photo info edited by the user. Currently, this parameter is not applied.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCardInfoInputJson(const FileInfo& _cardInfoInputJson);

                    /**
                     * 判断参数 CardInfoInputJson 是否已赋值
                     * @return CardInfoInputJson 是否已赋值
                     * 
                     */
                    bool CardInfoInputJsonHasBeenSet() const;

                    /**
                     * 获取The request ID of this verification process.
                     * @return RequestId The request ID of this verification process.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置The request ID of this verification process.
                     * @param _requestId The request ID of this verification process.
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * The final verification result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * The description of the final verification result.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * The liveness algorithm package generated during this SDK-based liveness detection.
                     */
                    FileInfo m_liveData;
                    bool m_liveDataHasBeenSet;

                    /**
                     * The download URL of the video used for verification, which contains specific color reflection effects, is valid for 10 minutes.
                     */
                    FileInfo m_liveVideo;
                    bool m_liveVideoHasBeenSet;

                    /**
                     * Records the specific action performed by the user, used for AI Face Shield analysis.
                     */
                    FileInfo m_actionVideo;
                    bool m_actionVideoHasBeenSet;

                    /**
                     * The liveness detection result code.
0: Success.
1001: Failed to call the liveness detection engine.
1004: Face detection failed.
                     */
                    std::string m_liveErrorCode;
                    bool m_liveErrorCodeHasBeenSet;

                    /**
                     * The description of the liveness detection result.
                     */
                    std::string m_liveErrorMsg;
                    bool m_liveErrorMsgHasBeenSet;

                    /**
                     * The download URL of the face screenshot during verification, which is valid for 10 minutes.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * The download URL of the profile photo screenshot from the identity document, which is valid for 10 minutes.
                     */
                    FileInfo m_profileImage;
                    bool m_profileImageHasBeenSet;

                    /**
                     * The face comparison result code.
0: Success.
2004: The uploaded face image is too large or too small.
2012: The face is not fully exposed.
2013: No face is detected.
2014: The resolution of the uploaded image is too low . Please upload a new one.
2015: Face comparison failed.
2016: The similarity did not reach the passing standard.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_compareErrorCode;
                    bool m_compareErrorCodeHasBeenSet;

                    /**
                     * The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_compareErrorMsg;
                    bool m_compareErrorMsgHasBeenSet;

                    /**
                     * The similarity score of face comparison.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * This parameter is disused.
                     */
                    bool m_isNeedCharge;
                    bool m_isNeedChargeHasBeenSet;

                    /**
                     * The identity document photo info edited by the user. Currently, this parameter is not applied.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_cardInfoInputJson;
                    bool m_cardInfoInputJsonHasBeenSet;

                    /**
                     * The request ID of this verification process.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_
