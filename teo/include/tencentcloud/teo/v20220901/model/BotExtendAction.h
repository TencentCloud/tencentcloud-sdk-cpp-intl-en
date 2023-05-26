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
                * Bot extended actions
                */
                class BotExtendAction : public AbstractModel
                {
                public:
                    BotExtendAction();
                    ~BotExtendAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The action. Values:
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Weighted random. Actions are executed based on the percentage specified in `ExtendActions`.</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     * @return Action The action. Values:
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Weighted random. Actions are executed based on the percentage specified in `ExtendActions`.</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action. Values:
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Weighted random. Actions are executed based on the percentage specified in `ExtendActions`.</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     * @param Action The action. Values:
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Weighted random. Actions are executed based on the percentage specified in `ExtendActions`.</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The probability for triggering the action. Value range: 0-100.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Percent The probability for triggering the action. Value range: 0-100.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置The probability for triggering the action. Value range: 0-100.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Percent The probability for triggering the action. Value range: 0-100.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * The action. Values:
<li>`monitor`: Observe</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`captcha`: Managed challenge</li>
<li>`random`: Weighted random. Actions are executed based on the percentage specified in `ExtendActions`.</li>
<li>`silence`: Drop w/o response</li>
<li>`shortdelay`: Add short latency</li>
<li>`longdelay`: Add long latency</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The probability for triggering the action. Value range: 0-100.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTEXTENDACTION_H_
