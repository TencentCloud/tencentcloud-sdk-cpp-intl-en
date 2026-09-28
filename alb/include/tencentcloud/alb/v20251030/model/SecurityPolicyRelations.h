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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RelatedListener.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * List of relationships between security policies and listeners.
                */
                class SecurityPolicyRelations : public AbstractModel
                {
                public:
                    SecurityPolicyRelations();
                    ~SecurityPolicyRelations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of relationships between security policies and listeners.
                     * @return RelatedListeners List of relationships between security policies and listeners.
                     * 
                     */
                    std::vector<RelatedListener> GetRelatedListeners() const;

                    /**
                     * 设置List of relationships between security policies and listeners.
                     * @param _relatedListeners List of relationships between security policies and listeners.
                     * 
                     */
                    void SetRelatedListeners(const std::vector<RelatedListener>& _relatedListeners);

                    /**
                     * 判断参数 RelatedListeners 是否已赋值
                     * @return RelatedListeners 是否已赋值
                     * 
                     */
                    bool RelatedListenersHasBeenSet() const;

                    /**
                     * 获取Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * @return SecurityPolicyId Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * @param _securityPolicyId Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                private:

                    /**
                     * List of relationships between security policies and listeners.
                     */
                    std::vector<RelatedListener> m_relatedListeners;
                    bool m_relatedListenersHasBeenSet;

                    /**
                     * Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYRELATIONS_H_
