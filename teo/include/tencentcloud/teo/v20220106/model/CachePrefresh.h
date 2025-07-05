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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CACHEPREFRESH_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CACHEPREFRESH_H_

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
                * Cache prefresh
                */
                class CachePrefresh : public AbstractModel
                {
                public:
                    CachePrefresh();
                    ~CachePrefresh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration switch
                     * @return Switch Configuration switch
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Configuration switch
                     * @param _switch Configuration switch
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
                     * 获取Cache prefresh percentage. Values: 1-99
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Percent Cache prefresh percentage. Values: 1-99
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Cache prefresh percentage. Values: 1-99
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _percent Cache prefresh percentage. Values: 1-99
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * Configuration switch
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache prefresh percentage. Values: 1-99
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CACHEPREFRESH_H_
