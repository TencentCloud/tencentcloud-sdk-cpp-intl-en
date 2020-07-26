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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncCheckStepInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSyncCheckJob response structure.
                */
                class DescribeSyncCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeSyncCheckJobResponse();
                    ~DescribeSyncCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Task check status: starting, running, finished
                     * @return Status Task check status: starting, running, finished
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Code of the task check result
                     * @return ErrorCode Code of the task check result
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Prompt message
                     * @return ErrorMessage Prompt message
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Description of a task execution step
                     * @return StepInfo Description of a task execution step
                     */
                    std::vector<SyncCheckStepInfo> GetStepInfo() const;

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取Check flag. 0: checking; 1: successfully checked
                     * @return CheckFlag Check flag. 0: checking; 1: successfully checked
                     */
                    int64_t GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     */
                    bool CheckFlagHasBeenSet() const;

                private:

                    /**
                     * Task check status: starting, running, finished
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Code of the task check result
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Prompt message
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Description of a task execution step
                     */
                    std::vector<SyncCheckStepInfo> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * Check flag. 0: checking; 1: successfully checked
                     */
                    int64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_
