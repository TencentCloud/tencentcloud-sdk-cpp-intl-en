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
                * Validate client behavior.
                */
                class AlgDetectJS : public AbstractModel
                {
                public:
                    AlgDetectJS();
                    ~AlgDetectJS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Method to validate client behavior.
                     * @return Name Method to validate client behavior.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Method to validate client behavior.
                     * @param _name Method to validate client behavior.
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
                     * 获取Proof-of-work strength. Values:
<li>`low` (default): Low</li>
<li>`middle`: Medium</li>
<li>`high`: High</li>
                     * @return WorkLevel Proof-of-work strength. Values:
<li>`low` (default): Low</li>
<li>`middle`: Medium</li>
<li>`high`: High</li>
                     * 
                     */
                    std::string GetWorkLevel() const;

                    /**
                     * 设置Proof-of-work strength. Values:
<li>`low` (default): Low</li>
<li>`middle`: Medium</li>
<li>`high`: High</li>
                     * @param _workLevel Proof-of-work strength. Values:
<li>`low` (default): Low</li>
<li>`middle`: Medium</li>
<li>`high`: High</li>
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
                     * 获取Implement a delay before executing JS in milliseconds. Value range: 0-1000. Default value: 500.
                     * @return ExecuteMode Implement a delay before executing JS in milliseconds. Value range: 0-1000. Default value: 500.
                     * 
                     */
                    int64_t GetExecuteMode() const;

                    /**
                     * 设置Implement a delay before executing JS in milliseconds. Value range: 0-1000. Default value: 500.
                     * @param _executeMode Implement a delay before executing JS in milliseconds. Value range: 0-1000. Default value: 500.
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
                     * 获取The period threshold for validating the result "Client JS disabled" in seconds. Value range: 5-3600. Default value: 10.
                     * @return InvalidStatTime The period threshold for validating the result "Client JS disabled" in seconds. Value range: 5-3600. Default value: 10.
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置The period threshold for validating the result "Client JS disabled" in seconds. Value range: 5-3600. Default value: 10.
                     * @param _invalidStatTime The period threshold for validating the result "Client JS disabled" in seconds. Value range: 5-3600. Default value: 10.
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
                     * 获取The number of times for the result "Client JS disabled" occurred in the specified period. Value range: 1-100000000. Default value: 30.
                     * @return InvalidThreshold The number of times for the result "Client JS disabled" occurred in the specified period. Value range: 1-100000000. Default value: 30.
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置The number of times for the result "Client JS disabled" occurred in the specified period. Value range: 1-100000000. Default value: 30.
                     * @param _invalidThreshold The number of times for the result "Client JS disabled" occurred in the specified period. Value range: 1-100000000. Default value: 30.
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
                     * 获取Client behavior validation results.
                     * @return AlgDetectResults Client behavior validation results.
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Client behavior validation results.
                     * @param _algDetectResults Client behavior validation results.
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
                     * Method to validate client behavior.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Proof-of-work strength. Values:
<li>`low` (default): Low</li>
<li>`middle`: Medium</li>
<li>`high`: High</li>
                     */
                    std::string m_workLevel;
                    bool m_workLevelHasBeenSet;

                    /**
                     * Implement a delay before executing JS in milliseconds. Value range: 0-1000. Default value: 500.
                     */
                    int64_t m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * The period threshold for validating the result "Client JS disabled" in seconds. Value range: 5-3600. Default value: 10.
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * The number of times for the result "Client JS disabled" occurred in the specified period. Value range: 1-100000000. Default value: 30.
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Client behavior validation results.
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_
