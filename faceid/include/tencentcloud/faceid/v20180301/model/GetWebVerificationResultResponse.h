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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/VerificationDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWebVerificationResult response structure.
                */
                class GetWebVerificationResultResponse : public AbstractModel
                {
                public:
                    GetWebVerificationResultResponse();
                    ~GetWebVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorCode The final result of this verification. `0` indicates that the person is the same as that in the photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg The description of the final verification result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取The temporary URL of the best face screenshot collected from the video stream. It is valid for 10 minutes. Download the image if needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoBestFrameUrl The temporary URL of the best face screenshot collected from the video stream. It is valid for 10 minutes. Download the image if needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVideoBestFrameUrl() const;

                    /**
                     * 判断参数 VideoBestFrameUrl 是否已赋值
                     * @return VideoBestFrameUrl 是否已赋值
                     */
                    bool VideoBestFrameUrlHasBeenSet() const;

                    /**
                     * 获取The MD5 hash value of the best face screenshot collected from the video stream. It can be used to check whether the image content is consistent with the file content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoBestFrameMd5 The MD5 hash value of the best face screenshot collected from the video stream. It can be used to check whether the image content is consistent with the file content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVideoBestFrameMd5() const;

                    /**
                     * 判断参数 VideoBestFrameMd5 是否已赋值
                     * @return VideoBestFrameMd5 是否已赋值
                     */
                    bool VideoBestFrameMd5HasBeenSet() const;

                    /**
                     * 获取The details list of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerificationDetailList The details list of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VerificationDetail> GetVerificationDetailList() const;

                    /**
                     * 判断参数 VerificationDetailList 是否已赋值
                     * @return VerificationDetailList 是否已赋值
                     */
                    bool VerificationDetailListHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoUrl 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoMd5 
                     */
                    std::string GetVideoMd5() const;

                    /**
                     * 判断参数 VideoMd5 是否已赋值
                     * @return VideoMd5 是否已赋值
                     */
                    bool VideoMd5HasBeenSet() const;

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
                     * The temporary URL of the best face screenshot collected from the video stream. It is valid for 10 minutes. Download the image if needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_videoBestFrameUrl;
                    bool m_videoBestFrameUrlHasBeenSet;

                    /**
                     * The MD5 hash value of the best face screenshot collected from the video stream. It can be used to check whether the image content is consistent with the file content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_videoBestFrameMd5;
                    bool m_videoBestFrameMd5HasBeenSet;

                    /**
                     * The details list of this verification process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VerificationDetail> m_verificationDetailList;
                    bool m_verificationDetailListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_videoMd5;
                    bool m_videoMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_
