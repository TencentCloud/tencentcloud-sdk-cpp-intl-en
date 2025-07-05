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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Checkpoint summary results
                */
                class CheckSummary : public AbstractModel
                {
                public:
                    CheckSummary();
                    ~CheckSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Checkpoint name.
                     * @return Name Checkpoint name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Checkpoint name.
                     * @param _name Checkpoint name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Step name of the checkpoint.
                     * @return Step Step name of the checkpoint.
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置Step name of the checkpoint.
                     * @param _step Step name of the checkpoint.
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取Number of successful checks.
                     * @return SuccessCount Number of successful checks.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful checks.
                     * @param _successCount Number of successful checks.
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of failed checks.
                     * @return FailCount Number of failed checks.
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of failed checks.
                     * @param _failCount Number of failed checks.
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Error ratio.
                     * @return ErrorRate Error ratio.
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置Error ratio.
                     * @param _errorRate Error ratio.
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                private:

                    /**
                     * Checkpoint name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Step name of the checkpoint.
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * Number of successful checks.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed checks.
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Error ratio.
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_
