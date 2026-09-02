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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEREF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Reference item of the LLM audit system rule in the LLM audit rule
                */
                class TrafficSandboxLLMAuditRuleRef : public AbstractModel
                {
                public:
                    TrafficSandboxLLMAuditRuleRef();
                    ~TrafficSandboxLLMAuditRuleRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LLM audit system rule ID (string)
                     * @return SystemRuleID LLM audit system rule ID (string)
                     * 
                     */
                    std::string GetSystemRuleID() const;

                    /**
                     * 设置LLM audit system rule ID (string)
                     * @param _systemRuleID LLM audit system rule ID (string)
                     * 
                     */
                    void SetSystemRuleID(const std::string& _systemRuleID);

                    /**
                     * 判断参数 SystemRuleID 是否已赋值
                     * @return SystemRuleID 是否已赋值
                     * 
                     */
                    bool SystemRuleIDHasBeenSet() const;

                    /**
                     * 获取LLM audit system rule name
                     * @return SystemRuleName LLM audit system rule name
                     * 
                     */
                    std::string GetSystemRuleName() const;

                    /**
                     * 设置LLM audit system rule name
                     * @param _systemRuleName LLM audit system rule name
                     * 
                     */
                    void SetSystemRuleName(const std::string& _systemRuleName);

                    /**
                     * 判断参数 SystemRuleName 是否已赋值
                     * @return SystemRuleName 是否已赋值
                     * 
                     */
                    bool SystemRuleNameHasBeenSet() const;

                private:

                    /**
                     * LLM audit system rule ID (string)
                     */
                    std::string m_systemRuleID;
                    bool m_systemRuleIDHasBeenSet;

                    /**
                     * LLM audit system rule name
                     */
                    std::string m_systemRuleName;
                    bool m_systemRuleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITRULEREF_H_
