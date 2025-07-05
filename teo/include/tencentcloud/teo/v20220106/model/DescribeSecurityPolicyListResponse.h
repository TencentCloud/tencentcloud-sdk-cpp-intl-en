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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYLISTRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/SecurityEntity.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyList response structure.
                */
                class DescribeSecurityPolicyListResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyListResponse();
                    ~DescribeSecurityPolicyListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of protected resources
                     * @return Entities List of protected resources
                     * 
                     */
                    std::vector<SecurityEntity> GetEntities() const;

                    /**
                     * 判断参数 Entities 是否已赋值
                     * @return Entities 是否已赋值
                     * 
                     */
                    bool EntitiesHasBeenSet() const;

                private:

                    /**
                     * List of protected resources
                     */
                    std::vector<SecurityEntity> m_entities;
                    bool m_entitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYLISTRESPONSE_H_
