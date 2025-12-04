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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeCurrentOp request structure.
                */
                class DescribeCurrentOpRequest : public AbstractModel
                {
                public:
                    DescribeCurrentOpRequest();
                    ~DescribeCurrentOpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID to be queried. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Specifies the instance ID to be queried. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID to be queried. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Specifies the instance ID to be queried. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
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
                     * 获取Namespace where the operation belongs, in the format of db.collection.
                     * @return Ns Namespace where the operation belongs, in the format of db.collection.
                     * 
                     */
                    std::string GetNs() const;

                    /**
                     * 设置Namespace where the operation belongs, in the format of db.collection.
                     * @param _ns Namespace where the operation belongs, in the format of db.collection.
                     * 
                     */
                    void SetNs(const std::string& _ns);

                    /**
                     * 判断参数 Ns 是否已赋值
                     * @return Ns 是否已赋值
                     * 
                     */
                    bool NsHasBeenSet() const;

                    /**
                     * 获取Sets the query and filtering condition to the execution time of the operation task.
- The default value is 0, and the value range is [0, 3600000], in milliseconds.
- The result will return the operation whose execution time exceeds the set time.
                     * @return MillisecondRunning Sets the query and filtering condition to the execution time of the operation task.
- The default value is 0, and the value range is [0, 3600000], in milliseconds.
- The result will return the operation whose execution time exceeds the set time.
                     * 
                     */
                    uint64_t GetMillisecondRunning() const;

                    /**
                     * 设置Sets the query and filtering condition to the execution time of the operation task.
- The default value is 0, and the value range is [0, 3600000], in milliseconds.
- The result will return the operation whose execution time exceeds the set time.
                     * @param _millisecondRunning Sets the query and filtering condition to the execution time of the operation task.
- The default value is 0, and the value range is [0, 3600000], in milliseconds.
- The result will return the operation whose execution time exceeds the set time.
                     * 
                     */
                    void SetMillisecondRunning(const uint64_t& _millisecondRunning);

                    /**
                     * 判断参数 MillisecondRunning 是否已赋值
                     * @return MillisecondRunning 是否已赋值
                     * 
                     */
                    bool MillisecondRunningHasBeenSet() const;

                    /**
                     * 获取Sets the query and filtering condition to the type of the operation task. Valid values:
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * @return Op Sets the query and filtering condition to the type of the operation task. Valid values:
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置Sets the query and filtering condition to the type of the operation task. Valid values:
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * @param _op Sets the query and filtering condition to the type of the operation task. Valid values:
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取Filtering condition, such as the shard name.
                     * @return ReplicaSetName Filtering condition, such as the shard name.
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置Filtering condition, such as the shard name.
                     * @param _replicaSetName Filtering condition, such as the shard name.
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取Sets the query and filtering condition to the node role.
- primary: primary node.
- secondary: secondary node.
                     * @return State Sets the query and filtering condition to the node role.
- primary: primary node.
- secondary: secondary node.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Sets the query and filtering condition to the node role.
- primary: primary node.
- secondary: secondary node.
                     * @param _state Sets the query and filtering condition to the node role.
- primary: primary node.
- secondary: secondary node.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Number of entries returned per request. The default value is 100, and the value range is [0, 100].
                     * @return Limit Number of entries returned per request. The default value is 100, and the value range is [0, 100].
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned per request. The default value is 100, and the value range is [0, 100].
                     * @param _limit Number of entries returned per request. The default value is 100, and the value range is [0, 100].
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0, and the value range is [0, 10000].
                     * @return Offset Offset. The default value is 0, and the value range is [0, 10000].
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0, and the value range is [0, 10000].
                     * @param _offset Offset. The default value is 0, and the value range is [0, 10000].
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting field of the returned result set. Currently, sorting by MicrosecsRunning (execution time of the operation task) is supported.
                     * @return OrderBy Sorting field of the returned result set. Currently, sorting by MicrosecsRunning (execution time of the operation task) is supported.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field of the returned result set. Currently, sorting by MicrosecsRunning (execution time of the operation task) is supported.
                     * @param _orderBy Sorting field of the returned result set. Currently, sorting by MicrosecsRunning (execution time of the operation task) is supported.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting method of the returned result set.
- ASC: ascending order. The default value is ASC, which indicates sorting in ascending order.
- DESC: descending order.
                     * @return OrderByType Sorting method of the returned result set.
- ASC: ascending order. The default value is ASC, which indicates sorting in ascending order.
- DESC: descending order.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method of the returned result set.
- ASC: ascending order. The default value is ASC, which indicates sorting in ascending order.
- DESC: descending order.
                     * @param _orderByType Sorting method of the returned result set.
- ASC: ascending order. The default value is ASC, which indicates sorting in ascending order.
- DESC: descending order.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID to be queried. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Namespace where the operation belongs, in the format of db.collection.
                     */
                    std::string m_ns;
                    bool m_nsHasBeenSet;

                    /**
                     * Sets the query and filtering condition to the execution time of the operation task.
- The default value is 0, and the value range is [0, 3600000], in milliseconds.
- The result will return the operation whose execution time exceeds the set time.
                     */
                    uint64_t m_millisecondRunning;
                    bool m_millisecondRunningHasBeenSet;

                    /**
                     * Sets the query and filtering condition to the type of the operation task. Valid values:
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Filtering condition, such as the shard name.
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * Sets the query and filtering condition to the node role.
- primary: primary node.
- secondary: secondary node.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Number of entries returned per request. The default value is 100, and the value range is [0, 100].
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. The default value is 0, and the value range is [0, 10000].
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field of the returned result set. Currently, sorting by MicrosecsRunning (execution time of the operation task) is supported.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method of the returned result set.
- ASC: ascending order. The default value is ASC, which indicates sorting in ascending order.
- DESC: descending order.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPREQUEST_H_
