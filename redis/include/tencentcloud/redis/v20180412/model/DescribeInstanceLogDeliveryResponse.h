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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCELOGDELIVERYRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCELOGDELIVERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/LogDeliveryInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogDelivery response structure.
                */
                class DescribeInstanceLogDeliveryResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLogDeliveryResponse();
                    ~DescribeInstanceLogDeliveryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Slow query log shipping information of the instance.
                     * @return SlowLog Slow query log shipping information of the instance.
                     * 
                     */
                    LogDeliveryInfo GetSlowLog() const;

                    /**
                     * 判断参数 SlowLog 是否已赋值
                     * @return SlowLog 是否已赋值
                     * 
                     */
                    bool SlowLogHasBeenSet() const;

                private:

                    /**
                     * Slow query log shipping information of the instance.
                     */
                    LogDeliveryInfo m_slowLog;
                    bool m_slowLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCELOGDELIVERYRESPONSE_H_
