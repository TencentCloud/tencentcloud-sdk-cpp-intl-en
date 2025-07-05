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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FIRSTPARTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FIRSTPARTCONFIG_H_

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
                * The configuration to detect slow attacks based on the transfer period the first 8 KB of requests
                */
                class FirstPartConfig : public AbstractModel
                {
                public:
                    FirstPartConfig();
                    ~FirstPartConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The transfer period threshold of the first 8 KB. If the threshold is reached, it’s considered a slow attack. Default: `5`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return StatTime The transfer period threshold of the first 8 KB. If the threshold is reached, it’s considered a slow attack. Default: `5`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStatTime() const;

                    /**
                     * 设置The transfer period threshold of the first 8 KB. If the threshold is reached, it’s considered a slow attack. Default: `5`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _statTime The transfer period threshold of the first 8 KB. If the threshold is reached, it’s considered a slow attack. Default: `5`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatTime(const uint64_t& _statTime);

                    /**
                     * 判断参数 StatTime 是否已赋值
                     * @return StatTime 是否已赋值
                     * 
                     */
                    bool StatTimeHasBeenSet() const;

                private:

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The transfer period threshold of the first 8 KB. If the threshold is reached, it’s considered a slow attack. Default: `5`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_statTime;
                    bool m_statTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FIRSTPARTCONFIG_H_
