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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * The data governance rules.
                */
                class DataGovernPolicy : public AbstractModel
                {
                public:
                    DataGovernPolicy();
                    ~DataGovernPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Governance rule type. Valid values: `Customize` (custom) and `Intelligence` (intelligent).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleType Governance rule type. Valid values: `Customize` (custom) and `Intelligence` (intelligent).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Governance rule type. Valid values: `Customize` (custom) and `Intelligence` (intelligent).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleType Governance rule type. Valid values: `Customize` (custom) and `Intelligence` (intelligent).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取The governance engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GovernEngine The governance engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGovernEngine() const;

                    /**
                     * 设置The governance engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _governEngine The governance engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGovernEngine(const std::string& _governEngine);

                    /**
                     * 判断参数 GovernEngine 是否已赋值
                     * @return GovernEngine 是否已赋值
                     * 
                     */
                    bool GovernEngineHasBeenSet() const;

                private:

                    /**
                     * Governance rule type. Valid values: `Customize` (custom) and `Intelligence` (intelligent).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * The governance engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_governEngine;
                    bool m_governEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_
