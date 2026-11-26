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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectResult.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot proactive feature recognition client behavior validation.
                */
                class AlgDetectJS : public AbstractModel
                {
                public:
                    AlgDetectJS();
                    ~AlgDetectJS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation name.
                     * @return Name Operation name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Operation name.
                     * @param _name Operation name.
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
                     * 获取Proof of Work (proof_Of-Work) verification strength. Default value: low. Valid values:
<li>low: low;</li>
<li>middle: Medium;</li>
<li>high: high.</li>
                     * @return WorkLevel Proof of Work (proof_Of-Work) verification strength. Default value: low. Valid values:
<li>low: low;</li>
<li>middle: Medium;</li>
<li>high: high.</li>
                     * 
                     */
                    std::string GetWorkLevel() const;

                    /**
                     * 设置Proof of Work (proof_Of-Work) verification strength. Default value: low. Valid values:
<li>low: low;</li>
<li>middle: Medium;</li>
<li>high: high.</li>
                     * @param _workLevel Proof of Work (proof_Of-Work) verification strength. Default value: low. Valid values:
<li>low: low;</li>
<li>middle: Medium;</li>
<li>high: high.</li>
                     * 
                     */
                    void SetWorkLevel(const std::string& _workLevel);

                    /**
                     * 判断参数 WorkLevel 是否已赋值
                     * @return WorkLevel 是否已赋值
                     * 
                     */
                    bool WorkLevelHasBeenSet() const;

                    /**
                     * 获取Execution mode. The time when js delay execution is triggered. Unit: ms. Default value: 500. Value range: 0–1000.
                     * @return ExecuteMode Execution mode. The time when js delay execution is triggered. Unit: ms. Default value: 500. Value range: 0–1000.
                     * 
                     */
                    int64_t GetExecuteMode() const;

                    /**
                     * 设置Execution mode. The time when js delay execution is triggered. Unit: ms. Default value: 500. Value range: 0–1000.
                     * @param _executeMode Execution mode. The time when js delay execution is triggered. Unit: ms. Default value: 500. Value range: 0–1000.
                     * 
                     */
                    void SetExecuteMode(const int64_t& _executeMode);

                    /**
                     * 判断参数 ExecuteMode 是否已赋值
                     * @return ExecuteMode 是否已赋值
                     * 
                     */
                    bool ExecuteModeHasBeenSet() const;

                    /**
                     * 获取Statistical cycle for clients that do not have JS enabled (test not completed). Unit: seconds. Default: 10. Value range: 5–3600.
                     * @return InvalidStatTime Statistical cycle for clients that do not have JS enabled (test not completed). Unit: seconds. Default: 10. Value range: 5–3600.
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置Statistical cycle for clients that do not have JS enabled (test not completed). Unit: seconds. Default: 10. Value range: 5–3600.
                     * @param _invalidStatTime Statistical cycle for clients that do not have JS enabled (test not completed). Unit: seconds. Default: 10. Value range: 5–3600.
                     * 
                     */
                    void SetInvalidStatTime(const int64_t& _invalidStatTime);

                    /**
                     * 判断参数 InvalidStatTime 是否已赋值
                     * @return InvalidStatTime 是否已赋值
                     * 
                     */
                    bool InvalidStatTimeHasBeenSet() const;

                    /**
                     * 获取Client JS not enabled (test not completed) trigger threshold. Count. Default: 300. Value: 1–100000000.
                     * @return InvalidThreshold Client JS not enabled (test not completed) trigger threshold. Count. Default: 300. Value: 1–100000000.
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置Client JS not enabled (test not completed) trigger threshold. Count. Default: 300. Value: 1–100000000.
                     * @param _invalidThreshold Client JS not enabled (test not completed) trigger threshold. Count. Default: 300. Value: 1–100000000.
                     * 
                     */
                    void SetInvalidThreshold(const int64_t& _invalidThreshold);

                    /**
                     * 判断参数 InvalidThreshold 是否已赋值
                     * @return InvalidThreshold 是否已赋值
                     * 
                     */
                    bool InvalidThresholdHasBeenSet() const;

                    /**
                     * 获取Bot proactive feature recognition client behavior validation result.
                     * @return AlgDetectResults Bot proactive feature recognition client behavior validation result.
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Bot proactive feature recognition client behavior validation result.
                     * @param _algDetectResults Bot proactive feature recognition client behavior validation result.
                     * 
                     */
                    void SetAlgDetectResults(const std::vector<AlgDetectResult>& _algDetectResults);

                    /**
                     * 判断参数 AlgDetectResults 是否已赋值
                     * @return AlgDetectResults 是否已赋值
                     * 
                     */
                    bool AlgDetectResultsHasBeenSet() const;

                private:

                    /**
                     * Operation name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Proof of Work (proof_Of-Work) verification strength. Default value: low. Valid values:
<li>low: low;</li>
<li>middle: Medium;</li>
<li>high: high.</li>
                     */
                    std::string m_workLevel;
                    bool m_workLevelHasBeenSet;

                    /**
                     * Execution mode. The time when js delay execution is triggered. Unit: ms. Default value: 500. Value range: 0–1000.
                     */
                    int64_t m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * Statistical cycle for clients that do not have JS enabled (test not completed). Unit: seconds. Default: 10. Value range: 5–3600.
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * Client JS not enabled (test not completed) trigger threshold. Count. Default: 300. Value: 1–100000000.
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Bot proactive feature recognition client behavior validation result.
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_
