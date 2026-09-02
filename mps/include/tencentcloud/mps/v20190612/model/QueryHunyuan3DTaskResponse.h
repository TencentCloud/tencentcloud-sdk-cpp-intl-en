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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/File3D.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * QueryHunyuan3DTask response structure.
                */
                class QueryHunyuan3DTaskResponse : public AbstractModel
                {
                public:
                    QueryHunyuan3DTaskResponse();
                    ~QueryHunyuan3DTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
                     * @return Status <p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
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
                     * 获取<p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     * @return Progress <p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
                     * @return ErrorCode <p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
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
                     * 获取<p>Only has a value when Status=FAIL, detailed copywriting</p>
                     * @return ErrorMessage <p>Only has a value when Status=FAIL, detailed copywriting</p>
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
                     * 获取<p>Only has a value when Status=DONE. List of output files</p>
                     * @return ResultFile3Ds <p>Only has a value when Status=DONE. List of output files</p>
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
                     * <p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>Only has a value when Status=FAIL, detailed copywriting</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>Only has a value when Status=DONE. List of output files</p>
                     */
                    std::vector<File3D> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
