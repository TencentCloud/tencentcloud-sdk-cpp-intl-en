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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeModifyCheckSyncJobResult response structure.
                */
                class DescribeModifyCheckSyncJobResultResponse : public AbstractModel
                {
                public:
                    DescribeModifyCheckSyncJobResultResponse();
                    ~DescribeModifyCheckSyncJobResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution status of the check task Valid values: `notStarted` (Not started), `running` (Running), `failed` (Failed), `success` (Successful).
                     * @return Status Execution status of the check task Valid values: `notStarted` (Not started), `running` (Running), `failed` (Failed), `success` (Successful).
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
                     * 获取Number of check steps Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepCount Number of check steps Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepCount() const;

                    /**
                     * 判断参数 StepCount 是否已赋值
                     * @return StepCount 是否已赋值
                     * 
                     */
                    bool StepCountHasBeenSet() const;

                    /**
                     * 获取Current step Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepCur Current step Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepCur() const;

                    /**
                     * 判断参数 StepCur 是否已赋值
                     * @return StepCur 是否已赋值
                     * 
                     */
                    bool StepCurHasBeenSet() const;

                    /**
                     * 获取Overall progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Overall progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Step details Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfos Step details Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepInfo> GetStepInfos() const;

                    /**
                     * 判断参数 StepInfos 是否已赋值
                     * @return StepInfos 是否已赋值
                     * 
                     */
                    bool StepInfosHasBeenSet() const;

                private:

                    /**
                     * Execution status of the check task Valid values: `notStarted` (Not started), `running` (Running), `failed` (Failed), `success` (Successful).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of check steps Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepCount;
                    bool m_stepCountHasBeenSet;

                    /**
                     * Current step Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepCur;
                    bool m_stepCurHasBeenSet;

                    /**
                     * Overall progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Step details Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepInfo> m_stepInfos;
                    bool m_stepInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_
