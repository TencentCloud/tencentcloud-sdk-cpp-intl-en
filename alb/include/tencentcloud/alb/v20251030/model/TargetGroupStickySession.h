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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPSTICKYSESSION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPSTICKYSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Session persistence between target groups
                */
                class TargetGroupStickySession : public AbstractModel
                {
                public:
                    TargetGroupStickySession();
                    ~TargetGroupStickySession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable session persistence. Off by default.
                     * @return Enabled Whether to enable session persistence. Off by default.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable session persistence. Off by default.
                     * @param _enabled Whether to enable session persistence. Off by default.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Timeout period in seconds. Value range: 1-86400. Default value: 1000.
                     * @return Timeout Timeout period in seconds. Value range: 1-86400. Default value: 1000.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period in seconds. Value range: 1-86400. Default value: 1000.
                     * @param _timeout Timeout period in seconds. Value range: 1-86400. Default value: 1000.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether to enable session persistence. Off by default.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Timeout period in seconds. Value range: 1-86400. Default value: 1000.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPSTICKYSESSION_H_
