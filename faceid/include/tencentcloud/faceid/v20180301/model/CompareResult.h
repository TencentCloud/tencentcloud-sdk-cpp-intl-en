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
                     * 获取The final comparison result.
                     * @return ErrorCode The final comparison result.
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置The final comparison result.
                     * @param ErrorCode The final comparison result.
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the final comparison result.
                     * @return ErrorMsg The description of the final comparison result.
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置The description of the final comparison result.
                     * @param ErrorMsg The description of the final comparison result.
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取
                     * @return LiveData 
                     */
                    FileInfo GetLiveData() const;

                    /**
                     * 设置
                     * @param LiveData 
                     */
                    void SetLiveData(const FileInfo& _liveData);

                    /**
                     * 判断参数 LiveData 是否已赋值
                     * @return LiveData 是否已赋值
                     */
                    bool LiveDataHasBeenSet() const;

                    /**
                     * 获取The video for this liveness detection process. The URL is valid for 10 minutes.
                     * @return LiveVideo The video for this liveness detection process. The URL is valid for 10 minutes.
                     */
                    FileInfo GetLiveVideo() const;

                    /**
                     * 设置The video for this liveness detection process. The URL is valid for 10 minutes.
                     * @param LiveVideo The video for this liveness detection process. The URL is valid for 10 minutes.
                     */
                    void SetLiveVideo(const FileInfo& _liveVideo);

                    /**
                     * 判断参数 LiveVideo 是否已赋值
                     * @return LiveVideo 是否已赋值
                     */
                    bool LiveVideoHasBeenSet() const;

                    /**
                     * 获取The code of the liveness detection result.
                     * @return LiveErrorCode The code of the liveness detection result.
                     */
                    std::string GetLiveErrorCode() const;

                    /**
                     * 设置The code of the liveness detection result.
                     * @param LiveErrorCode The code of the liveness detection result.
                     */
                    void SetLiveErrorCode(const std::string& _liveErrorCode);

                    /**
                     * 判断参数 LiveErrorCode 是否已赋值
                     * @return LiveErrorCode 是否已赋值
                     */
                    bool LiveErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the liveness detection result.
                     * @return LiveErrorMsg The description of the liveness detection result.
                     */
                    std::string GetLiveErrorMsg() const;

                    /**
                     * 设置The description of the liveness detection result.
                     * @param LiveErrorMsg The description of the liveness detection result.
                     */
                    void SetLiveErrorMsg(const std::string& _liveErrorMsg);

                    /**
                     * 判断参数 LiveErrorMsg 是否已赋值
                     * @return LiveErrorMsg 是否已赋值
                     */
                    bool LiveErrorMsgHasBeenSet() const;

                    /**
                     * 获取The best face screenshot in this liveness detection. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BestFrame The best face screenshot in this liveness detection. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 设置The best face screenshot in this liveness detection. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BestFrame The best face screenshot in this liveness detection. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBestFrame(const FileInfo& _bestFrame);

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取The profile photo screenshot from the identity document. The URL is valid for 10 minutes.
                     * @return ProfileImage The profile photo screenshot from the identity document. The URL is valid for 10 minutes.
                     */
                    FileInfo GetProfileImage() const;

                    /**
                     * 设置The profile photo screenshot from the identity document. The URL is valid for 10 minutes.
                     * @param ProfileImage The profile photo screenshot from the identity document. The URL is valid for 10 minutes.
                     */
                    void SetProfileImage(const FileInfo& _profileImage);

                    /**
                     * 判断参数 ProfileImage 是否已赋值
                     * @return ProfileImage 是否已赋值
                     */
                    bool ProfileImageHasBeenSet() const;

                    /**
                     * 获取The code of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareErrorCode The code of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCompareErrorCode() const;

                    /**
                     * 设置The code of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CompareErrorCode The code of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompareErrorCode(const std::string& _compareErrorCode);

                    /**
                     * 判断参数 CompareErrorCode 是否已赋值
                     * @return CompareErrorCode 是否已赋值
                     */
                    bool CompareErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareErrorMsg The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CompareErrorMsg The description of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompareErrorMsg(const std::string& _compareErrorMsg);

                    /**
                     * 判断参数 CompareErrorMsg 是否已赋值
                     * @return CompareErrorMsg 是否已赋值
                     */
                    bool CompareErrorMsgHasBeenSet() const;

                    /**
                     * 获取Similarity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sim Similarity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetSim() const;

                    /**
                     * 设置Similarity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Sim Similarity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSim(const double& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取This field is disused.
                     * @return IsNeedCharge This field is disused.
                     */
                    bool GetIsNeedCharge() const;

                    /**
                     * 设置This field is disused.
                     * @param IsNeedCharge This field is disused.
                     */
                    void SetIsNeedCharge(const bool& _isNeedCharge);

                    /**
                     * 判断参数 IsNeedCharge 是否已赋值
                     * @return IsNeedCharge 是否已赋值
                     */
                    bool IsNeedChargeHasBeenSet() const;

                    /**
                     * 获取The identity document photo info edited by the user in JSON. If the value of `DisableChangeOcrResult` is `true`, the editing feature is disabled and this field does not exist. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string
- ID string
- Name string
- Address string
- Type string: Identity document type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfoInputJson The identity document photo info edited by the user in JSON. If the value of `DisableChangeOcrResult` is `true`, the editing feature is disabled and this field does not exist. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string
- ID string
- Name string
- Address string
- Type string: Identity document type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo GetCardInfoInputJson() const;

                    /**
                     * 设置The identity document photo info edited by the user in JSON. If the value of `DisableChangeOcrResult` is `true`, the editing feature is disabled and this field does not exist. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string
- ID string
- Name string
- Address string
- Type string: Identity document type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CardInfoInputJson The identity document photo info edited by the user in JSON. If the value of `DisableChangeOcrResult` is `true`, the editing feature is disabled and this field does not exist. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string
- ID string
- Name string
- Address string
- Type string: Identity document type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCardInfoInputJson(const FileInfo& _cardInfoInputJson);

                    /**
                     * 判断参数 CardInfoInputJson 是否已赋值
                     * @return CardInfoInputJson 是否已赋值
                     */
                    bool CardInfoInputJsonHasBeenSet() const;

                    /**
                     * 获取The request ID of this verification process.
                     * @return RequestId The request ID of this verification process.
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置The request ID of this verification process.
                     * @param RequestId The request ID of this verification process.
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * The final comparison result.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * The description of the final comparison result.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 
                     */
                    FileInfo m_liveData;
                    bool m_liveDataHasBeenSet;

                    /**
                     * The video for this liveness detection process. The URL is valid for 10 minutes.
                     */
                    FileInfo m_liveVideo;
                    bool m_liveVideoHasBeenSet;

                    /**
                     * The code of the liveness detection result.
                     */
                    std::string m_liveErrorCode;
                    bool m_liveErrorCodeHasBeenSet;

                    /**
                     * The description of the liveness detection result.
                     */
                    std::string m_liveErrorMsg;
                    bool m_liveErrorMsgHasBeenSet;

                    /**
                     * The best face screenshot in this liveness detection. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * The profile photo screenshot from the identity document. The URL is valid for 10 minutes.
                     */
                    FileInfo m_profileImage;
                    bool m_profileImageHasBeenSet;

                    /**
                     * The code of the face comparison result.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Similarity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * This field is disused.
                     */
                    bool m_isNeedCharge;
                    bool m_isNeedChargeHasBeenSet;

                    /**
                     * The identity document photo info edited by the user in JSON. If the value of `DisableChangeOcrResult` is `true`, the editing feature is disabled and this field does not exist. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string
- ID string
- Name string
- Address string
- Type string: Identity document type.
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
