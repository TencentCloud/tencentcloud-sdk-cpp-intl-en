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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SLAPOLICY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SLAPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SLARule.h>
#include <tencentcloud/pts/v20210728/model/AlertChannel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * SLA policy.
                */
                class SLAPolicy : public AbstractModel
                {
                public:
                    SLAPolicy();
                    ~SLAPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SLA rules.

Note: This field may return null, indicating that no valid value is found.
                     * @return SLARules SLA rules.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<SLARule> GetSLARules() const;

                    /**
                     * 设置SLA rules.

Note: This field may return null, indicating that no valid value is found.
                     * @param _sLARules SLA rules.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSLARules(const std::vector<SLARule>& _sLARules);

                    /**
                     * 判断参数 SLARules 是否已赋值
                     * @return SLARules 是否已赋值
                     * 
                     */
                    bool SLARulesHasBeenSet() const;

                    /**
                     * 获取Alert notification channel.

Note: This field may return null, indicating that no valid value is found.
                     * @return AlertChannel Alert notification channel.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    AlertChannel GetAlertChannel() const;

                    /**
                     * 设置Alert notification channel.

Note: This field may return null, indicating that no valid value is found.
                     * @param _alertChannel Alert notification channel.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAlertChannel(const AlertChannel& _alertChannel);

                    /**
                     * 判断参数 AlertChannel 是否已赋值
                     * @return AlertChannel 是否已赋值
                     * 
                     */
                    bool AlertChannelHasBeenSet() const;

                private:

                    /**
                     * SLA rules.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<SLARule> m_sLARules;
                    bool m_sLARulesHasBeenSet;

                    /**
                     * Alert notification channel.

Note: This field may return null, indicating that no valid value is found.
                     */
                    AlertChannel m_alertChannel;
                    bool m_alertChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SLAPOLICY_H_
