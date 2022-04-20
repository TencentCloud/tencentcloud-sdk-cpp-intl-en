/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateHourDCDBInstance response structure.
                */
                class CreateHourDCDBInstanceResponse : public AbstractModel
                {
                public:
                    CreateHourDCDBInstanceResponse();
                    ~CreateHourDCDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of the instances you have purchased in this order. If no instance IDs are returned, you can query them with the `DescribeOrders` API. You can also use the `DescribeDBInstances` API to check whether an instance has been created successfully.
                     * @return InstanceIds IDs of the instances you have purchased in this order. If no instance IDs are returned, you can query them with the `DescribeOrders` API. You can also use the `DescribeDBInstances` API to check whether an instance has been created successfully.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Task ID, which can be used to query the creation progress
                     * @return FlowId Task ID, which can be used to query the creation progress
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Order ID, which is used for calling the `DescribeOrders` API.
 The parameter can be used to either query order details or call the user account APIs to make another payment when this payment fails.
                     * @return DealName Order ID, which is used for calling the `DescribeOrders` API.
 The parameter can be used to either query order details or call the user account APIs to make another payment when this payment fails.
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * IDs of the instances you have purchased in this order. If no instance IDs are returned, you can query them with the `DescribeOrders` API. You can also use the `DescribeDBInstances` API to check whether an instance has been created successfully.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Task ID, which can be used to query the creation progress
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Order ID, which is used for calling the `DescribeOrders` API.
 The parameter can be used to either query order details or call the user account APIs to make another payment when this payment fails.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEHOURDCDBINSTANCERESPONSE_H_
