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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessInstance.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ListRabbitMQServerlessInstances response structure.
                */
                class ListRabbitMQServerlessInstancesResponse : public AbstractModel
                {
                public:
                    ListRabbitMQServerlessInstancesResponse();
                    ~ListRabbitMQServerlessInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance list
                     * @return Instances Instance list
                     * 
                     */
                    std::vector<RabbitMQServerlessInstance> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Instance list
                     */
                    std::vector<RabbitMQServerlessInstance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Total number.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_LISTRABBITMQSERVERLESSINSTANCESRESPONSE_H_
