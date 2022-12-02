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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONCHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONCHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CheckStep.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationCheckJob response structure.
                */
                class DescribeMigrationCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeMigrationCheckJobResponse();
                    ~DescribeMigrationCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Check task execution status. Valid values: `notStarted`, `running`, `failed`, `success`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Check task execution status. Valid values: `notStarted`, `running`, `failed`, `success`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Check task result message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BriefMsg Check task result message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBriefMsg() const;

                    /**
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取Check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfo Check step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CheckStep> GetStepInfo() const;

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取Check result. Valid values: `checkPass`, `checkNotPass`.
                     * @return CheckFlag Check result. Valid values: `checkPass`, `checkNotPass`.
                     */
                    std::string GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     */
                    bool CheckFlagHasBeenSet() const;

                private:

                    /**
                     * Check task execution status. Valid values: `notStarted`, `running`, `failed`, `success`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Check task result message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_briefMsg;
                    bool m_briefMsgHasBeenSet;

                    /**
                     * Check step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CheckStep> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * Check result. Valid values: `checkPass`, `checkNotPass`.
                     */
                    std::string m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONCHECKJOBRESPONSE_H_
