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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_

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
                * Origin-pull condition
                */
                class OriginGroupCondition : public AbstractModel
                {
                public:
                    OriginGroupCondition();
                    ~OriginGroupCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Match type. Values:
<li>`url`: Partial URL path under the current site, such as "/example" and "/example/foo.jpg". You can use an asterisk (*) to indicate all values and a question mark (?) to indicate any single character.
</li>
                     * @return Target Match type. Values:
<li>`url`: Partial URL path under the current site, such as "/example" and "/example/foo.jpg". You can use an asterisk (*) to indicate all values and a question mark (?) to indicate any single character.
</li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Match type. Values:
<li>`url`: Partial URL path under the current site, such as "/example" and "/example/foo.jpg". You can use an asterisk (*) to indicate all values and a question mark (?) to indicate any single character.
</li>
                     * @param Target Match type. Values:
<li>`url`: Partial URL path under the current site, such as "/example" and "/example/foo.jpg". You can use an asterisk (*) to indicate all values and a question mark (?) to indicate any single character.
</li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取The operator. Values:
<li>`equal`: Equals</li>
                     * @return Operator The operator. Values:
<li>`equal`: Equals</li>
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The operator. Values:
<li>`equal`: Equals</li>
                     * @param Operator The operator. Values:
<li>`equal`: Equals</li>
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Values of the match type.
                     * @return Values Values of the match type.
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Values of the match type.
                     * @param Values Values of the match type.
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Match type. Values:
<li>`url`: Partial URL path under the current site, such as "/example" and "/example/foo.jpg". You can use an asterisk (*) to indicate all values and a question mark (?) to indicate any single character.
</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * The operator. Values:
<li>`equal`: Equals</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Values of the match type.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_
