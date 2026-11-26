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
                * Cookie verification and session tracking.
                */
                class AlgDetectSession : public AbstractModel
                {
                public:
                    AlgDetectSession();
                    ~AlgDetectSession() = default;
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
                     * 获取Verification method. Default value: update_detect. Valid values:
<li>detect: verify;</li>
<li>update_detect: refresh the Cookie and validate it.</li>
                     * @return DetectMode Verification method. Default value: update_detect. Valid values:
<li>detect: verify;</li>
<li>update_detect: refresh the Cookie and validate it.</li>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置Verification method. Default value: update_detect. Valid values:
<li>detect: verify;</li>
<li>update_detect: refresh the Cookie and validate it.</li>
                     * @param _detectMode Verification method. Default value: update_detect. Valid values:
<li>detect: verify;</li>
<li>update_detect: refresh the Cookie and validate it.</li>
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
                     * 获取Switch for session rate and periodic feature verification. Default value: off. Valid values:
<li>off: Disable;</li>
<li>`on`: Enable.</li>
                     * @return SessionAnalyzeSwitch Switch for session rate and periodic feature verification. Default value: off. Valid values:
<li>off: Disable;</li>
<li>`on`: Enable.</li>
                     * 
                     */
                    std::string GetSessionAnalyzeSwitch() const;

                    /**
                     * 设置Switch for session rate and periodic feature verification. Default value: off. Valid values:
<li>off: Disable;</li>
<li>`on`: Enable.</li>
                     * @param _sessionAnalyzeSwitch Switch for session rate and periodic feature verification. Default value: off. Valid values:
<li>off: Disable;</li>
<li>`on`: Enable.</li>
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
                     * 获取Statistical cycle for the check result indicating no Cookie is carried or the Cookie has expired. Unit: seconds. Default: 10. Value range: 5–3600.
                     * @return InvalidStatTime Statistical cycle for the check result indicating no Cookie is carried or the Cookie has expired. Unit: seconds. Default: 10. Value range: 5–3600.
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置Statistical cycle for the check result indicating no Cookie is carried or the Cookie has expired. Unit: seconds. Default: 10. Value range: 5–3600.
                     * @param _invalidStatTime Statistical cycle for the check result indicating no Cookie is carried or the Cookie has expired. Unit: seconds. Default: 10. Value range: 5–3600.
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
                     * 获取Trigger threshold for the check result indicating no Cookie is carried or the Cookie has expired. Unit: count. Default: 300. Value range: 1–100000000.
                     * @return InvalidThreshold Trigger threshold for the check result indicating no Cookie is carried or the Cookie has expired. Unit: count. Default: 300. Value range: 1–100000000.
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置Trigger threshold for the check result indicating no Cookie is carried or the Cookie has expired. Unit: count. Default: 300. Value range: 1–100000000.
                     * @param _invalidThreshold Trigger threshold for the check result indicating no Cookie is carried or the Cookie has expired. Unit: count. Default: 300. Value range: 1–100000000.
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
                     * 获取Cookie verification result.
                     * @return AlgDetectResults Cookie verification result.
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Cookie verification result.
                     * @param _algDetectResults Cookie verification result.
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
                     * 获取Session rate and periodic feature verification result.
                     * @return SessionBehaviors Session rate and periodic feature verification result.
                     * 
                     */
                    std::vector<AlgDetectResult> GetSessionBehaviors() const;

                    /**
                     * 设置Session rate and periodic feature verification result.
                     * @param _sessionBehaviors Session rate and periodic feature verification result.
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
                     * Operation name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Verification method. Default value: update_detect. Valid values:
<li>detect: verify;</li>
<li>update_detect: refresh the Cookie and validate it.</li>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * Switch for session rate and periodic feature verification. Default value: off. Valid values:
<li>off: Disable;</li>
<li>`on`: Enable.</li>
                     */
                    std::string m_sessionAnalyzeSwitch;
                    bool m_sessionAnalyzeSwitchHasBeenSet;

                    /**
                     * Statistical cycle for the check result indicating no Cookie is carried or the Cookie has expired. Unit: seconds. Default: 10. Value range: 5–3600.
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * Trigger threshold for the check result indicating no Cookie is carried or the Cookie has expired. Unit: count. Default: 300. Value range: 1–100000000.
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Cookie verification result.
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                    /**
                     * Session rate and periodic feature verification result.
                     */
                    std::vector<AlgDetectResult> m_sessionBehaviors;
                    bool m_sessionBehaviorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_
