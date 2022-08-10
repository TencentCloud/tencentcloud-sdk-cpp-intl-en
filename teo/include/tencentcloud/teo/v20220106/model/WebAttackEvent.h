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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_

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
                * Web block event
                */
                class WebAttackEvent : public AbstractModel
                {
                public:
                    WebAttackEvent();
                    ~WebAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIp Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClientIp Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Attack URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackUrl Attack URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAttackUrl() const;

                    /**
                     * 设置Attack URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackUrl Attack URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackUrl(const std::string& _attackUrl);

                    /**
                     * 判断参数 AttackUrl 是否已赋值
                     * @return AttackUrl 是否已赋值
                     */
                    bool AttackUrlHasBeenSet() const;

                    /**
                     * 获取Attack time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackTime Attack time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttackTime() const;

                    /**
                     * 设置Attack time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AttackTime Attack time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttackTime(const int64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * Client IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Attack URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackUrl;
                    bool m_attackUrlHasBeenSet;

                    /**
                     * Attack time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WEBATTACKEVENT_H_
