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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQUser.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQUser response structure.
                */
                class DescribeRabbitMQUserResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQUserResponse();
                    ~DescribeRabbitMQUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned number of users
                     * @return TotalCount Returned number of users
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
                     * 获取The list of the created TDMQ for RabbitMQ users
                     * @return RabbitMQUserList The list of the created TDMQ for RabbitMQ users
                     * 
                     */
                    std::vector<RabbitMQUser> GetRabbitMQUserList() const;

                    /**
                     * 判断参数 RabbitMQUserList 是否已赋值
                     * @return RabbitMQUserList 是否已赋值
                     * 
                     */
                    bool RabbitMQUserListHasBeenSet() const;

                private:

                    /**
                     * Returned number of users
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The list of the created TDMQ for RabbitMQ users
                     */
                    std::vector<RabbitMQUser> m_rabbitMQUserList;
                    bool m_rabbitMQUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERRESPONSE_H_
