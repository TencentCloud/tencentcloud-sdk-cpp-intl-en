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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ClientAttestationRules.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security BOT managed rules architecture.
                */
                class BotManagement : public AbstractModel
                {
                public:
                    BotManagement();
                    ~BotManagement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Definition list of client authentication rules. feature in beta test. submit a ticket or contact smart customer service if needed.
                     * @return ClientAttestationRules Definition list of client authentication rules. feature in beta test. submit a ticket or contact smart customer service if needed.
                     * 
                     */
                    ClientAttestationRules GetClientAttestationRules() const;

                    /**
                     * 设置Definition list of client authentication rules. feature in beta test. submit a ticket or contact smart customer service if needed.
                     * @param _clientAttestationRules Definition list of client authentication rules. feature in beta test. submit a ticket or contact smart customer service if needed.
                     * 
                     */
                    void SetClientAttestationRules(const ClientAttestationRules& _clientAttestationRules);

                    /**
                     * 判断参数 ClientAttestationRules 是否已赋值
                     * @return ClientAttestationRules 是否已赋值
                     * 
                     */
                    bool ClientAttestationRulesHasBeenSet() const;

                private:

                    /**
                     * Definition list of client authentication rules. feature in beta test. submit a ticket or contact smart customer service if needed.
                     */
                    ClientAttestationRules m_clientAttestationRules;
                    bool m_clientAttestationRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
