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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEIMAGEANIMATEJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEIMAGEANIMATEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * DescribeImageAnimateJob response structure.
                */
                class DescribeImageAnimateJobResponse : public AbstractModel
                {
                public:
                    DescribeImageAnimateJobResponse();
                    ~DescribeImageAnimateJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.
                     * @return Status Task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code.
                     * @return ErrorCode Error code.
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return ErrorMessage Error message.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Generated video URL. It is valid for 24 hours.
                     * @return ResultVideoUrl Generated video URL. It is valid for 24 hours.
                     * 
                     */
                    std::string GetResultVideoUrl() const;

                    /**
                     * 判断参数 ResultVideoUrl 是否已赋值
                     * @return ResultVideoUrl 是否已赋值
                     * 
                     */
                    bool ResultVideoUrlHasBeenSet() const;

                    /**
                     * 获取Masked video URL.
                     * @return MaskVideoUrl Masked video URL.
                     * 
                     */
                    std::string GetMaskVideoUrl() const;

                    /**
                     * 判断参数 MaskVideoUrl 是否已赋值
                     * @return MaskVideoUrl 是否已赋值
                     * 
                     */
                    bool MaskVideoUrlHasBeenSet() const;

                private:

                    /**
                     * Task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Generated video URL. It is valid for 24 hours.
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                    /**
                     * Masked video URL.
                     */
                    std::string m_maskVideoUrl;
                    bool m_maskVideoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEIMAGEANIMATEJOBRESPONSE_H_
