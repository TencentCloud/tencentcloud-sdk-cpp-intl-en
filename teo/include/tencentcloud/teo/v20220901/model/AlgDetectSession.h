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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_

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
                * Validate Cookie.
                */
                class AlgDetectSession : public AbstractModel
                {
                public:
                    AlgDetectSession();
                    ~AlgDetectSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Method to validate Cookie.
                     * @return Name Method to validate Cookie.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Method to validate Cookie.
                     * @param _name Method to validate Cookie.
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
                     * 获取The validation mode. Values:
<li>`detect`: Validate only</li>
<li>`update_detect` (default): Update Cookie and validate</li>
                     * @return DetectMode The validation mode. Values:
<li>`detect`: Validate only</li>
<li>`update_detect` (default): Update Cookie and validate</li>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置The validation mode. Values:
<li>`detect`: Validate only</li>
<li>`update_detect` (default): Update Cookie and validate</li>
                     * @param _detectMode The validation mode. Values:
<li>`detect`: Validate only</li>
<li>`update_detect` (default): Update Cookie and validate</li>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable Cookie-based session check. The default value is `off`. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return SessionAnalyzeSwitch Whether to enable Cookie-based session check. The default value is `off`. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * 
                     */
                    std::string GetSessionAnalyzeSwitch() const;

                    /**
                     * 设置Whether to enable Cookie-based session check. The default value is `off`. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param _sessionAnalyzeSwitch Whether to enable Cookie-based session check. The default value is `off`. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * 
                     */
                    void SetSessionAnalyzeSwitch(const std::string& _sessionAnalyzeSwitch);

                    /**
                     * 判断参数 SessionAnalyzeSwitch 是否已赋值
                     * @return SessionAnalyzeSwitch 是否已赋值
                     * 
                     */
                    bool SessionAnalyzeSwitchHasBeenSet() const;

                    /**
                     * 获取The period threshold for validating the result "No Cookie/Cookie expired" in seconds. Value range: 5-3600. Default value: 10.
                     * @return InvalidStatTime The period threshold for validating the result "No Cookie/Cookie expired" in seconds. Value range: 5-3600. Default value: 10.
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置The period threshold for validating the result "No Cookie/Cookie expired" in seconds. Value range: 5-3600. Default value: 10.
                     * @param _invalidStatTime The period threshold for validating the result "No Cookie/Cookie expired" in seconds. Value range: 5-3600. Default value: 10.
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
                     * 获取The number of times for the result "No Cookie/Cookie expired" occurred in the specified period. Value range: 1-100000000. Default value: 300.
                     * @return InvalidThreshold The number of times for the result "No Cookie/Cookie expired" occurred in the specified period. Value range: 1-100000000. Default value: 300.
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置The number of times for the result "No Cookie/Cookie expired" occurred in the specified period. Value range: 1-100000000. Default value: 300.
                     * @param _invalidThreshold The number of times for the result "No Cookie/Cookie expired" occurred in the specified period. Value range: 1-100000000. Default value: 300.
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
                     * 获取Cookie validation results.
                     * @return AlgDetectResults Cookie validation results.
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Cookie validation results.
                     * @param _algDetectResults Cookie validation results.
                     * 
                     */
                    void SetAlgDetectResults(const std::vector<AlgDetectResult>& _algDetectResults);

                    /**
                     * 判断参数 AlgDetectResults 是否已赋值
                     * @return AlgDetectResults 是否已赋值
                     * 
                     */
                    bool AlgDetectResultsHasBeenSet() const;

                    /**
                     * 获取Cookie-based session check results.
                     * @return SessionBehaviors Cookie-based session check results.
                     * 
                     */
                    std::vector<AlgDetectResult> GetSessionBehaviors() const;

                    /**
                     * 设置Cookie-based session check results.
                     * @param _sessionBehaviors Cookie-based session check results.
                     * 
                     */
                    void SetSessionBehaviors(const std::vector<AlgDetectResult>& _sessionBehaviors);

                    /**
                     * 判断参数 SessionBehaviors 是否已赋值
                     * @return SessionBehaviors 是否已赋值
                     * 
                     */
                    bool SessionBehaviorsHasBeenSet() const;

                private:

                    /**
                     * Method to validate Cookie.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The validation mode. Values:
<li>`detect`: Validate only</li>
<li>`update_detect` (default): Update Cookie and validate</li>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * Whether to enable Cookie-based session check. The default value is `off`. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_sessionAnalyzeSwitch;
                    bool m_sessionAnalyzeSwitchHasBeenSet;

                    /**
                     * The period threshold for validating the result "No Cookie/Cookie expired" in seconds. Value range: 5-3600. Default value: 10.
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * The number of times for the result "No Cookie/Cookie expired" occurred in the specified period. Value range: 1-100000000. Default value: 300.
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Cookie validation results.
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                    /**
                     * Cookie-based session check results.
                     */
                    std::vector<AlgDetectResult> m_sessionBehaviors;
                    bool m_sessionBehaviorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_
