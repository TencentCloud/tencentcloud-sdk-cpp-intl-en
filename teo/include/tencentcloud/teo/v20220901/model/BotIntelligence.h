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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotRatings.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot intelligent analysis configuration.
                */
                class BotIntelligence : public AbstractModel
                {
                public:
                    BotIntelligence();
                    ~BotIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Based on client and request features, divides request sources into human requests, legitimate Bot requests, suspected Bot requests, and high-risk Bot requests, and provides request handling options.
                     * @return BotRatings Based on client and request features, divides request sources into human requests, legitimate Bot requests, suspected Bot requests, and high-risk Bot requests, and provides request handling options.
                     * 
                     */
                    BotRatings GetBotRatings() const;

                    /**
                     * 设置Based on client and request features, divides request sources into human requests, legitimate Bot requests, suspected Bot requests, and high-risk Bot requests, and provides request handling options.
                     * @param _botRatings Based on client and request features, divides request sources into human requests, legitimate Bot requests, suspected Bot requests, and high-risk Bot requests, and provides request handling options.
                     * 
                     */
                    void SetBotRatings(const BotRatings& _botRatings);

                    /**
                     * 判断参数 BotRatings 是否已赋值
                     * @return BotRatings 是否已赋值
                     * 
                     */
                    bool BotRatingsHasBeenSet() const;

                    /**
                     * 获取Specifies the switch for Bot intelligent analysis configuration. valid values:.

on: enabled.
off: disabled.
                     * @return Enabled Specifies the switch for Bot intelligent analysis configuration. valid values:.

on: enabled.
off: disabled.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Specifies the switch for Bot intelligent analysis configuration. valid values:.

on: enabled.
off: disabled.
                     * @param _enabled Specifies the switch for Bot intelligent analysis configuration. valid values:.

on: enabled.
off: disabled.
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Based on client and request features, divides request sources into human requests, legitimate Bot requests, suspected Bot requests, and high-risk Bot requests, and provides request handling options.
                     */
                    BotRatings m_botRatings;
                    bool m_botRatingsHasBeenSet;

                    /**
                     * Specifies the switch for Bot intelligent analysis configuration. valid values:.

on: enabled.
off: disabled.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_
