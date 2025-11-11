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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/SecurityGroupRoute.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Security group routing information returned results.
                */
                class SecurityGroupRouteResp : public AbstractModel
                {
                public:
                    SecurityGroupRouteResp();
                    ~SecurityGroupRouteResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of eligible security group routes.
                     * @return TotalCount Total number of eligible security group routes.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of eligible security group routes.
                     * @param _totalCount Total number of eligible security group routes.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Eligible security group route information list.
                     * @return SecurityGroupRoutes Eligible security group route information list.
                     * 
                     */
                    std::vector<SecurityGroupRoute> GetSecurityGroupRoutes() const;

                    /**
                     * 设置Eligible security group route information list.
                     * @param _securityGroupRoutes Eligible security group route information list.
                     * 
                     */
                    void SetSecurityGroupRoutes(const std::vector<SecurityGroupRoute>& _securityGroupRoutes);

                    /**
                     * 判断参数 SecurityGroupRoutes 是否已赋值
                     * @return SecurityGroupRoutes 是否已赋值
                     * 
                     */
                    bool SecurityGroupRoutesHasBeenSet() const;

                private:

                    /**
                     * Total number of eligible security group routes.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Eligible security group route information list.
                     */
                    std::vector<SecurityGroupRoute> m_securityGroupRoutes;
                    bool m_securityGroupRoutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTERESP_H_
