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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/File3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryHunyuanTo3DProJob response structure.
                */
                class QueryHunyuanTo3DProJobResponse : public AbstractModel
                {
                public:
                    QueryHunyuanTo3DProJobResponse();
                    ~QueryHunyuanTo3DProJobResponse() = default;
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
                     * 获取Error code
                     * @return ErrorCode Error code
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
                     * 获取Generated 3D file array.
                     * @return ResultFile3Ds Generated 3D file array.
                     * 
                     */
                    std::vector<File3D> GetResultFile3Ds() const;

                    /**
                     * 判断参数 ResultFile3Ds 是否已赋值
                     * @return ResultFile3Ds 是否已赋值
                     * 
                     */
                    bool ResultFile3DsHasBeenSet() const;

                private:

                    /**
                     * Task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Generated 3D file array.
                     */
                    std::vector<File3D> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_
