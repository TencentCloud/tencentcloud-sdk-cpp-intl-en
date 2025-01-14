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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/VerificationDetail.h>
#include <tencentcloud/faceid/v20180301/model/OCRResult.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWebVerificationResultIntl response structure.
                */
                class GetWebVerificationResultIntlResponse : public AbstractModel
                {
                public:
                    GetWebVerificationResultIntlResponse();
                    ~GetWebVerificationResultIntlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The final result of this verification. `0` indicates that the person is the same as that in the photo.
For other error codes, see <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Selfie Verification (Mobile HTML5) Error Codes</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCode The final result of this verification. `0` indicates that the person is the same as that in the photo.
For other error codes, see <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Selfie Verification (Mobile HTML5) Error Codes</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrorCode() const;

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
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取The detailed verification result list of this process. Retries are allowed, so a verification process may have several entries of results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerificationDetailList The detailed verification result list of this process. Retries are allowed, so a verification process may have several entries of results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VerificationDetail> GetVerificationDetailList() const;

                    /**
                     * 判断参数 VerificationDetailList 是否已赋值
                     * @return VerificationDetailList 是否已赋值
                     * 
                     */
                    bool VerificationDetailListHasBeenSet() const;

                    /**
                     * 获取The Base64-encoded string of the video collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no video is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoBase64 The Base64-encoded string of the video collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no video is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取The Base64-encoded string of the best face screenshot collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no best face screenshot is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BestFrameBase64 The Base64-encoded string of the best face screenshot collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no best face screenshot is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     * 
                     */
                    bool BestFrameBase64HasBeenSet() const;

                    /**
                     * 获取Card recognize result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OCRResult Card recognize result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OCRResult> GetOCRResult() const;

                    /**
                     * 判断参数 OCRResult 是否已赋值
                     * @return OCRResult 是否已赋值
                     * 
                     */
                    bool OCRResultHasBeenSet() const;

                    /**
                     * 获取The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     * @return Extra The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
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
                     * The final result of this verification. `0` indicates that the person is the same as that in the photo.
For other error codes, see <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Selfie Verification (Mobile HTML5) Error Codes</a>
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
                     * The detailed verification result list of this process. Retries are allowed, so a verification process may have several entries of results.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VerificationDetail> m_verificationDetailList;
                    bool m_verificationDetailListHasBeenSet;

                    /**
                     * The Base64-encoded string of the video collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no video is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * The Base64-encoded string of the best face screenshot collected from the video stream. Retries are allowed, and this field returns only the data collected in the last verification. If no best face screenshot is collected, null is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * Card recognize result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OCRResult> m_oCRResult;
                    bool m_oCRResultHasBeenSet;

                    /**
                     * The passthrough parameter of the business, max 1,000 characters, which will be returned in GetWebVerificationResultIntl.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLRESPONSE_H_
