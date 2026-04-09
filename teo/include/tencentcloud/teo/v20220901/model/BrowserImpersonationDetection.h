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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetectionRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Browser spoofing identification rule (formerly active feature detection rule) configuration.
                */
                class BrowserImpersonationDetection : public AbstractModel
                {
                public:
                    BrowserImpersonationDetection();
                    ~BrowserImpersonationDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of browser spoofing identification Rules. when using ModifySecurityPolicy to modify Web protection configuration: <br> <li>if Rules parameter in SecurityPolicy.BotManagement.BrowserImpersonationDetection is not specified or parameter length is zero: clear all browser spoofing identification rule configurations.</li> <li>if BrowserImpersonationDetection parameter value is unspecified in SecurityPolicy.BotManagement parameters: keep existing browser spoofing identification rule configurations without modification.</li>.
                     * @return Rules List of browser spoofing identification Rules. when using ModifySecurityPolicy to modify Web protection configuration: <br> <li>if Rules parameter in SecurityPolicy.BotManagement.BrowserImpersonationDetection is not specified or parameter length is zero: clear all browser spoofing identification rule configurations.</li> <li>if BrowserImpersonationDetection parameter value is unspecified in SecurityPolicy.BotManagement parameters: keep existing browser spoofing identification rule configurations without modification.</li>.
                     * 
                     */
                    std::vector<BrowserImpersonationDetectionRule> GetRules() const;

                    /**
                     * 设置List of browser spoofing identification Rules. when using ModifySecurityPolicy to modify Web protection configuration: <br> <li>if Rules parameter in SecurityPolicy.BotManagement.BrowserImpersonationDetection is not specified or parameter length is zero: clear all browser spoofing identification rule configurations.</li> <li>if BrowserImpersonationDetection parameter value is unspecified in SecurityPolicy.BotManagement parameters: keep existing browser spoofing identification rule configurations without modification.</li>.
                     * @param _rules List of browser spoofing identification Rules. when using ModifySecurityPolicy to modify Web protection configuration: <br> <li>if Rules parameter in SecurityPolicy.BotManagement.BrowserImpersonationDetection is not specified or parameter length is zero: clear all browser spoofing identification rule configurations.</li> <li>if BrowserImpersonationDetection parameter value is unspecified in SecurityPolicy.BotManagement parameters: keep existing browser spoofing identification rule configurations without modification.</li>.
                     * 
                     */
                    void SetRules(const std::vector<BrowserImpersonationDetectionRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * List of browser spoofing identification Rules. when using ModifySecurityPolicy to modify Web protection configuration: <br> <li>if Rules parameter in SecurityPolicy.BotManagement.BrowserImpersonationDetection is not specified or parameter length is zero: clear all browser spoofing identification rule configurations.</li> <li>if BrowserImpersonationDetection parameter value is unspecified in SecurityPolicy.BotManagement parameters: keep existing browser spoofing identification rule configurations without modification.</li>.
                     */
                    std::vector<BrowserImpersonationDetectionRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_
