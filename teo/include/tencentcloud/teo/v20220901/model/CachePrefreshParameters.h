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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPREFRESHPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPREFRESHPARAMETERS_H_

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
                * Cache pre-refresh configuration parameters.
                */
                class CachePrefreshParameters : public AbstractModel
                {
                public:
                    CachePrefreshParameters();
                    ~CachePrefreshParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache pre-refresh switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Cache pre-refresh switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Cache pre-refresh switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Cache pre-refresh switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取The pre-refresh time is set to a percentage value of the node cache time. Value range: 1–99.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @return CacheTimePercent The pre-refresh time is set to a percentage value of the node cache time. Value range: 1–99.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * 
                     */
                    int64_t GetCacheTimePercent() const;

                    /**
                     * 设置The pre-refresh time is set to a percentage value of the node cache time. Value range: 1–99.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @param _cacheTimePercent The pre-refresh time is set to a percentage value of the node cache time. Value range: 1–99.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * 
                     */
                    void SetCacheTimePercent(const int64_t& _cacheTimePercent);

                    /**
                     * 判断参数 CacheTimePercent 是否已赋值
                     * @return CacheTimePercent 是否已赋值
                     * 
                     */
                    bool CacheTimePercentHasBeenSet() const;

                private:

                    /**
                     * Cache pre-refresh switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The pre-refresh time is set to a percentage value of the node cache time. Value range: 1–99.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     */
                    int64_t m_cacheTimePercent;
                    bool m_cacheTimePercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPREFRESHPARAMETERS_H_
