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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTEXTENDACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTEXTENDACTION_H_

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
                * Bot extension handling method, a composite of multiple disposal actions.
                */
                class BotExtendAction : public AbstractModel
                {
                public:
                    BotExtendAction();
                    ~BotExtendAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disposal actions. Valid values:
<li>monitor: observation;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: random, allocate handling actions and proportions according to ExtendActions;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * @return Action Disposal actions. Valid values:
<li>monitor: observation;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: random, allocate handling actions and proportions according to ExtendActions;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Disposal actions. Valid values:
<li>monitor: observation;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: random, allocate handling actions and proportions according to ExtendActions;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * @param _action Disposal actions. Valid values:
<li>monitor: observation;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: random, allocate handling actions and proportions according to ExtendActions;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Probability for triggering the handling method. Value range: 0-100.
                     * @return Percent Probability for triggering the handling method. Value range: 0-100.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Probability for triggering the handling method. Value range: 0-100.
                     * @param _percent Probability for triggering the handling method. Value range: 0-100.
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * Disposal actions. Valid values:
<li>monitor: observation;</li>
<li>alg: JavaScript challenge;</li>
<li>captcha: hosted challenge;</li>
<li>random: random, allocate handling actions and proportions according to ExtendActions;</li>
<li>silence: silence;</li>
<li>shortdelay: short-term response;</li>
<li>longdelay: long-time response.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Probability for triggering the handling method. Value range: 0-100.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTEXTENDACTION_H_
