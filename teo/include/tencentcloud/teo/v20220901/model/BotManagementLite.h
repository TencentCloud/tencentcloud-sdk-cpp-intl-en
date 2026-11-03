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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTLITE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTLITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CAPTCHAPageChallenge.h>
#include <tencentcloud/teo/v20220901/model/AICrawlerDetection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Structure of BOT rules for Web security.
                */
                class BotManagementLite : public AbstractModel
                {
                public:
                    BotManagementLite();
                    ~BotManagementLite() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration of the CAPTCHA page.
                     * @return CAPTCHAPageChallenge Configuration of the CAPTCHA page.
                     * 
                     */
                    CAPTCHAPageChallenge GetCAPTCHAPageChallenge() const;

                    /**
                     * 设置Configuration of the CAPTCHA page.
                     * @param _cAPTCHAPageChallenge Configuration of the CAPTCHA page.
                     * 
                     */
                    void SetCAPTCHAPageChallenge(const CAPTCHAPageChallenge& _cAPTCHAPageChallenge);

                    /**
                     * 判断参数 CAPTCHAPageChallenge 是否已赋值
                     * @return CAPTCHAPageChallenge 是否已赋值
                     * 
                     */
                    bool CAPTCHAPageChallengeHasBeenSet() const;

                    /**
                     * 获取Specific configuration for AI crawler detection.
                     * @return AICrawlerDetection Specific configuration for AI crawler detection.
                     * 
                     */
                    AICrawlerDetection GetAICrawlerDetection() const;

                    /**
                     * 设置Specific configuration for AI crawler detection.
                     * @param _aICrawlerDetection Specific configuration for AI crawler detection.
                     * 
                     */
                    void SetAICrawlerDetection(const AICrawlerDetection& _aICrawlerDetection);

                    /**
                     * 判断参数 AICrawlerDetection 是否已赋值
                     * @return AICrawlerDetection 是否已赋值
                     * 
                     */
                    bool AICrawlerDetectionHasBeenSet() const;

                private:

                    /**
                     * Configuration of the CAPTCHA page.
                     */
                    CAPTCHAPageChallenge m_cAPTCHAPageChallenge;
                    bool m_cAPTCHAPageChallengeHasBeenSet;

                    /**
                     * Specific configuration for AI crawler detection.
                     */
                    AICrawlerDetection m_aICrawlerDetection;
                    bool m_aICrawlerDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTLITE_H_
