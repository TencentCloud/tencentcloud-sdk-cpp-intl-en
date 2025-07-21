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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_

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
                * Body transfer timeout duration configuration.
                */
                class RequestBodyTransferTimeout : public AbstractModel
                {
                public:
                    RequestBodyTransferTimeout();
                    ~RequestBodyTransferTimeout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Body transfer timeout duration. valid values: 5-120. measurement unit: seconds (s) only.
                     * @return IdleTimeout Body transfer timeout duration. valid values: 5-120. measurement unit: seconds (s) only.
                     * 
                     */
                    std::string GetIdleTimeout() const;

                    /**
                     * 设置Body transfer timeout duration. valid values: 5-120. measurement unit: seconds (s) only.
                     * @param _idleTimeout Body transfer timeout duration. valid values: 5-120. measurement unit: seconds (s) only.
                     * 
                     */
                    void SetIdleTimeout(const std::string& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Whether body transfer timeout is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @return Enabled Whether body transfer timeout is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether body transfer timeout is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @param _enabled Whether body transfer timeout is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
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
                     * Body transfer timeout duration. valid values: 5-120. measurement unit: seconds (s) only.
                     */
                    std::string m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * Whether body transfer timeout is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_
