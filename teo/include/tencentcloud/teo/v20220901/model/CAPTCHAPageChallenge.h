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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CAPTCHAPAGECHALLENGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CAPTCHAPAGECHALLENGE_H_

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
                * Specific configuration of the CAPTCHA page.
                */
                class CAPTCHAPageChallenge : public AbstractModel
                {
                public:
                    CAPTCHAPageChallenge();
                    ~CAPTCHAPageChallenge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether human-machine verification is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * @return Enabled Whether human-machine verification is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether human-machine verification is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * @param _enabled Whether human-machine verification is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
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
                     * Whether human-machine verification is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CAPTCHAPAGECHALLENGE_H_
