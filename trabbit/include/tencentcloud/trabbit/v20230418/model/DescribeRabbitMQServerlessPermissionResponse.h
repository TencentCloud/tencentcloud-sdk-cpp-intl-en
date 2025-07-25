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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSPERMISSIONRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSPERMISSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQPermission.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessPermission response structure.
                */
                class DescribeRabbitMQServerlessPermissionResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessPermissionResponse();
                    ~DescribeRabbitMQServerlessPermissionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return the number of permissions.
                     * @return TotalCount Return the number of permissions.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of permission details.
                     * @return RabbitMQPermissionList List of permission details.
                     * 
                     */
                    std::vector<RabbitMQPermission> GetRabbitMQPermissionList() const;

                    /**
                     * 判断参数 RabbitMQPermissionList 是否已赋值
                     * @return RabbitMQPermissionList 是否已赋值
                     * 
                     */
                    bool RabbitMQPermissionListHasBeenSet() const;

                private:

                    /**
                     * Return the number of permissions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of permission details.
                     */
                    std::vector<RabbitMQPermission> m_rabbitMQPermissionList;
                    bool m_rabbitMQPermissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSPERMISSIONRESPONSE_H_
