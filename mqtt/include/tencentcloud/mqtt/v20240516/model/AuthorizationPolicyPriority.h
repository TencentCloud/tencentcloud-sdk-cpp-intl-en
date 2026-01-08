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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * Rule priority.
                */
                class AuthorizationPolicyPriority : public AbstractModel
                {
                public:
                    AuthorizationPolicyPriority();
                    ~AuthorizationPolicyPriority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the authorization policy rule id, which can be obtained from the DescribeAuthorizationPolicies api (https://www.tencentcloud.comom/document/api/1778/111074?from_cn_redirect=1).
                     * @return Id Specifies the authorization policy rule id, which can be obtained from the DescribeAuthorizationPolicies api (https://www.tencentcloud.comom/document/api/1778/111074?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Specifies the authorization policy rule id, which can be obtained from the DescribeAuthorizationPolicies api (https://www.tencentcloud.comom/document/api/1778/111074?from_cn_redirect=1).
                     * @param _id Specifies the authorization policy rule id, which can be obtained from the DescribeAuthorizationPolicies api (https://www.tencentcloud.comom/document/api/1778/111074?from_cn_redirect=1).
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return Priority Priority
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority
                     * @param _priority Priority
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * Specifies the authorization policy rule id, which can be obtained from the DescribeAuthorizationPolicies api (https://www.tencentcloud.comom/document/api/1778/111074?from_cn_redirect=1).
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_
