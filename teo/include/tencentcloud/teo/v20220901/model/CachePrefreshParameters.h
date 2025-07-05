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
                * Cache prefresh configuration parameters
                */
                class CachePrefreshParameters : public AbstractModel
                {
                public:
                    CachePrefreshParameters();
                    ~CachePrefreshParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable cache prefresh. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable cache prefresh. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable cache prefresh. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable cache prefresh. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
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
                     * 获取Prefresh interval set as a percentage of the node cache time. value range: 1-99.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * @return CacheTimePercent Prefresh interval set as a percentage of the node cache time. value range: 1-99.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    int64_t GetCacheTimePercent() const;

                    /**
                     * 设置Prefresh interval set as a percentage of the node cache time. value range: 1-99.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * @param _cacheTimePercent Prefresh interval set as a percentage of the node cache time. value range: 1-99.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
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
                     * Whether to enable cache prefresh. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Prefresh interval set as a percentage of the node cache time. value range: 1-99.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     */
                    int64_t m_cacheTimePercent;
                    bool m_cacheTimePercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPREFRESHPARAMETERS_H_
