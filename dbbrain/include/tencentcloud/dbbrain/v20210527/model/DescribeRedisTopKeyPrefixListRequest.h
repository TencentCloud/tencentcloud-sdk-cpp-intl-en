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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisTopKeyPrefixList request structure.
                */
                class DescribeRedisTopKeyPrefixListRequest : public AbstractModel
                {
                public:
                    DescribeRedisTopKeyPrefixListRequest();
                    ~DescribeRedisTopKeyPrefixListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Date for query, such as `2021-05-27`. You can select a date as early as in the last 30 days for query.
                     * @return Date Date for query, such as `2021-05-27`. You can select a date as early as in the last 30 days for query.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date for query, such as `2021-05-27`. You can select a date as early as in the last 30 days for query.
                     * @param _date Date for query, such as `2021-05-27`. You can select a date as early as in the last 30 days for query.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Service type. Valid value: `redis` (TencentDB for Redis).
                     * @return Product Service type. Valid value: `redis` (TencentDB for Redis).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `redis` (TencentDB for Redis).
                     * @param _product Service type. Valid value: `redis` (TencentDB for Redis).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取The number of queried items. Default value: `20`. Max value: `100`.
                     * @return Limit The number of queried items. Default value: `20`. Max value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of queried items. Default value: `20`. Max value: `100`.
                     * @param _limit The number of queried items. Default value: `20`. Max value: `100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Date for query, such as `2021-05-27`. You can select a date as early as in the last 30 days for query.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * The number of queried items. Default value: `20`. Max value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_
