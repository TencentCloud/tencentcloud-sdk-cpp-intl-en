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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Client filtering
                */
                class RateLimitIntelligence : public AbstractModel
                {
                public:
                    RateLimitIntelligence();
                    ~RateLimitIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable this feature
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable this feature
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable this feature
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Switch Whether to enable this feature
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Action. Values: `monitor` (observe), `alg` (JS/Managed challenge)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Action. Values: `monitor` (observe), `alg` (JS/Managed challenge)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Values: `monitor` (observe), `alg` (JS/Managed challenge)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Action Action. Values: `monitor` (observe), `alg` (JS/Managed challenge)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Whether to enable this feature
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Action. Values: `monitor` (observe), `alg` (JS/Managed challenge)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_
