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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Proactive feature recognition check results for Bot.
                */
                class AlgDetectResult : public AbstractModel
                {
                public:
                    AlgDetectResult();
                    ~AlgDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check results. Valid values:
<li>invalid: invalid Cookie;</li>
<li>cookie_empty: No cookie carried or the cookie has expired;</li>
<li>js_empty: JS is not enabled on the client (test not completed);</li>
<li>low: low risk in session rate and periodic feature verification;</li>
<li>middle: medium-risk in session rate and periodic feature verification;</li>
<li>high: high-risk session rate and periodic feature verification;</li>
<li>timeout: Timeout duration for detection;</li>
<li>not_browser: invalid browser;</li>
<li>is_bot: Bot Client.</li>
                     * @return Result Check results. Valid values:
<li>invalid: invalid Cookie;</li>
<li>cookie_empty: No cookie carried or the cookie has expired;</li>
<li>js_empty: JS is not enabled on the client (test not completed);</li>
<li>low: low risk in session rate and periodic feature verification;</li>
<li>middle: medium-risk in session rate and periodic feature verification;</li>
<li>high: high-risk session rate and periodic feature verification;</li>
<li>timeout: Timeout duration for detection;</li>
<li>not_browser: invalid browser;</li>
<li>is_bot: Bot Client.</li>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Check results. Valid values:
<li>invalid: invalid Cookie;</li>
<li>cookie_empty: No cookie carried or the cookie has expired;</li>
<li>js_empty: JS is not enabled on the client (test not completed);</li>
<li>low: low risk in session rate and periodic feature verification;</li>
<li>middle: medium-risk in session rate and periodic feature verification;</li>
<li>high: high-risk session rate and periodic feature verification;</li>
<li>timeout: Timeout duration for detection;</li>
<li>not_browser: invalid browser;</li>
<li>is_bot: Bot Client.</li>
                     * @param _result Check results. Valid values:
<li>invalid: invalid Cookie;</li>
<li>cookie_empty: No cookie carried or the cookie has expired;</li>
<li>js_empty: JS is not enabled on the client (test not completed);</li>
<li>low: low risk in session rate and periodic feature verification;</li>
<li>middle: medium-risk in session rate and periodic feature verification;</li>
<li>high: high-risk session rate and periodic feature verification;</li>
<li>timeout: Timeout duration for detection;</li>
<li>not_browser: invalid browser;</li>
<li>is_bot: Bot Client.</li>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Penalty action. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>silence: silence;</li>
<li>shortdelay: respond after a short time;</li>
<li>longdelay: respond after a long wait.</li>
                     * @return Action Penalty action. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>silence: silence;</li>
<li>shortdelay: respond after a short time;</li>
<li>longdelay: respond after a long wait.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Penalty action. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>silence: silence;</li>
<li>shortdelay: respond after a short time;</li>
<li>longdelay: respond after a long wait.</li>
                     * @param _action Penalty action. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>silence: silence;</li>
<li>shortdelay: respond after a short time;</li>
<li>longdelay: respond after a long wait.</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Check results. Valid values:
<li>invalid: invalid Cookie;</li>
<li>cookie_empty: No cookie carried or the cookie has expired;</li>
<li>js_empty: JS is not enabled on the client (test not completed);</li>
<li>low: low risk in session rate and periodic feature verification;</li>
<li>middle: medium-risk in session rate and periodic feature verification;</li>
<li>high: high-risk session rate and periodic feature verification;</li>
<li>timeout: Timeout duration for detection;</li>
<li>not_browser: invalid browser;</li>
<li>is_bot: Bot Client.</li>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Penalty action. Valid values:
<li>drop: block;</li>
<li>monitor: observation;</li>
<li>silence: silence;</li>
<li>shortdelay: respond after a short time;</li>
<li>longdelay: respond after a long wait.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_
