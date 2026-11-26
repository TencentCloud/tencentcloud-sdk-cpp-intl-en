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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_

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
                * Parameter configuration for origin-pull follow redirect.
                */
                class UpstreamFollowRedirectParameters : public AbstractModel
                {
                public:
                    UpstreamFollowRedirectParameters();
                    ~UpstreamFollowRedirectParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration switch for origin-pull follow redirect. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Configuration switch for origin-pull follow redirect. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Configuration switch for origin-pull follow redirect. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Configuration switch for origin-pull follow redirect. Valid values:
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
                     * 获取Maximum number of redirects. Value range: 1-5.
Note: This field is required when Switch is on. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @return MaxTimes Maximum number of redirects. Value range: 1-5.
Note: This field is required when Switch is on. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * 
                     */
                    int64_t GetMaxTimes() const;

                    /**
                     * 设置Maximum number of redirects. Value range: 1-5.
Note: This field is required when Switch is on. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * @param _maxTimes Maximum number of redirects. Value range: 1-5.
Note: This field is required when Switch is on. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     * 
                     */
                    void SetMaxTimes(const int64_t& _maxTimes);

                    /**
                     * 判断参数 MaxTimes 是否已赋值
                     * @return MaxTimes 是否已赋值
                     * 
                     */
                    bool MaxTimesHasBeenSet() const;

                private:

                    /**
                     * Configuration switch for origin-pull follow redirect. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Maximum number of redirects. Value range: 1-5.
Note: This field is required when Switch is on. When Switch is off, no need to specify this field. If specified, it does not take effect.
                     */
                    int64_t m_maxTimes;
                    bool m_maxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMFOLLOWREDIRECTPARAMETERS_H_
