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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_HISTORYSUMMARY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_HISTORYSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Multiple rounds of historical information.
                */
                class HistorySummary : public AbstractModel
                {
                public:
                    HistorySummary();
                    ~HistorySummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Assistant.
                     * @return Assistant Assistant.
                     * 
                     */
                    std::string GetAssistant() const;

                    /**
                     * 设置Assistant.
                     * @param _assistant Assistant.
                     * 
                     */
                    void SetAssistant(const std::string& _assistant);

                    /**
                     * 判断参数 Assistant 是否已赋值
                     * @return Assistant 是否已赋值
                     * 
                     */
                    bool AssistantHasBeenSet() const;

                    /**
                     * 获取User.
                     * @return User User.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User.
                     * @param _user User.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * Assistant.
                     */
                    std::string m_assistant;
                    bool m_assistantHasBeenSet;

                    /**
                     * User.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_HISTORYSUMMARY_H_
