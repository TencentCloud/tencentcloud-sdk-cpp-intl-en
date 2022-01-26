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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATECHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATECHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeMigrateCheckJob response structure.
                */
                class DescribeMigrateCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeMigrateCheckJobResponse();
                    ~DescribeMigrateCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Check task status: unavailable, starting, running, finished
                     * @return Status Check task status: unavailable, starting, running, finished
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task error code
                     * @return ErrorCode Task error code
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Task error message
                     * @return ErrorMessage Task error message
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Check task progress. For example, "30" means 30% completed
                     * @return Progress Check task progress. For example, "30" means 30% completed
                     */
                    std::string GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Whether the check succeeds. 0: no; 1: yes; 3: not checked
                     * @return CheckFlag Whether the check succeeds. 0: no; 1: yes; 3: not checked
                     */
                    int64_t GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     */
                    bool CheckFlagHasBeenSet() const;

                private:

                    /**
                     * Check task status: unavailable, starting, running, finished
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task error code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Task error message
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Check task progress. For example, "30" means 30% completed
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Whether the check succeeds. 0: no; 1: yes; 3: not checked
                     */
                    int64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATECHECKJOBRESPONSE_H_
