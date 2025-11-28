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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Security policy.
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip or subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Route ip or subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoute() const;

                    /**
                     * 设置ip or subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _route ip or subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoute(const std::string& _route);

                    /**
                     * 判断参数 Route 是否已赋值
                     * @return Route 是否已赋值
                     * 
                     */
                    bool RouteHasBeenSet() const;

                    /**
                     * 获取Specifies whether the policy allows (true) or denies (false) access, corresponding to the allowlist or blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Policy Specifies whether the policy allows (true) or denies (false) access, corresponding to the allowlist or blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPolicy() const;

                    /**
                     * 设置Specifies whether the policy allows (true) or denies (false) access, corresponding to the allowlist or blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policy Specifies whether the policy allows (true) or denies (false) access, corresponding to the allowlist or blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicy(const bool& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ip or subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_route;
                    bool m_routeHasBeenSet;

                    /**
                     * Specifies whether the policy allows (true) or denies (false) access, corresponding to the allowlist or blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_
