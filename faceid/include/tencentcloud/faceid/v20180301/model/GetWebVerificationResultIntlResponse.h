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
                     * 获取<p>Final result of this process. 0 indicates successful verification, determined to be the same person.<br>For other error codes, see: <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&amp;pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Liveness Detection and Face Comparison (Mobile HTML5) Error Codes</a></p>
                     * @return ErrorCode <p>Final result of this process. 0 indicates successful verification, determined to be the same person.<br>For other error codes, see: <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&amp;pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Liveness Detection and Face Comparison (Mobile HTML5) Error Codes</a></p>
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
                     * 获取<p>Final result description of this process.</p>
                     * @return ErrorMsg <p>Final result description of this process.</p>
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
                     * 获取<p>List of detailed verification results for this process. Since it is retryable, this process may contain multiple verification information.</p>
                     * @return VerificationDetailList <p>List of detailed verification results for this process. Since it is retryable, this process may contain multiple verification information.</p>
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
                     * 获取<p>base64-encoded string of the video content collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no video is collected, it returns null.</p>
                     * @return VideoBase64 <p>base64-encoded string of the video content collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no video is collected, it returns null.</p>
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
                     * 获取<p>base64 encoded string of the best face photo collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no best face photo is collected, null is returned.</p>
                     * @return BestFrameBase64 <p>base64 encoded string of the best face photo collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no best face photo is collected, null is returned.</p>
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
                     * 获取<p>License recognition result</p>
                     * @return OCRResult <p>License recognition result</p>
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
                     * 获取<p>Service pass-through parameter.</p>
                     * @return Extra <p>Service pass-through parameter.</p>
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
                     * <p>Final result of this process. 0 indicates successful verification, determined to be the same person.<br>For other error codes, see: <a href="https://www.tencentcloud.com/document/product/1061/55390?lang=en&amp;pg=#8a960e1e-39c0-42cb-b181-b3164d77f81e">Liveness Detection and Face Comparison (Mobile HTML5) Error Codes</a></p>
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>Final result description of this process.</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * <p>List of detailed verification results for this process. Since it is retryable, this process may contain multiple verification information.</p>
                     */
                    std::vector<VerificationDetail> m_verificationDetailList;
                    bool m_verificationDetailListHasBeenSet;

                    /**
                     * <p>base64-encoded string of the video content collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no video is collected, it returns null.</p>
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * <p>base64 encoded string of the best face photo collected from the video stream. Since it is retryable, this field returns the data collected in the last verification. If no best face photo is collected, null is returned.</p>
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * <p>License recognition result</p>
                     */
                    std::vector<OCRResult> m_oCRResult;
                    bool m_oCRResultHasBeenSet;

                    /**
                     * <p>Service pass-through parameter.</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLRESPONSE_H_
