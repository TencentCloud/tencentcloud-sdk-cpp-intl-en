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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * EnableReplicaReadonly request structure.
                */
                class EnableReplicaReadonlyRequest : public AbstractModel
                {
                public:
                    EnableReplicaReadonlyRequest();
                    ~EnableReplicaReadonlyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Serial ID of an instance
                     * @return InstanceId Serial ID of an instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Serial ID of an instance
                     * @param InstanceId Serial ID of an instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Account routing policy. If `master` or `replication` is entered, it means to route to the master or slave node; if this is left blank, it means to write into the master node and read from the slave node by default
                     * @return ReadonlyPolicy Account routing policy. If `master` or `replication` is entered, it means to route to the master or slave node; if this is left blank, it means to write into the master node and read from the slave node by default
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置Account routing policy. If `master` or `replication` is entered, it means to route to the master or slave node; if this is left blank, it means to write into the master node and read from the slave node by default
                     * @param ReadonlyPolicy Account routing policy. If `master` or `replication` is entered, it means to route to the master or slave node; if this is left blank, it means to write into the master node and read from the slave node by default
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                private:

                    /**
                     * Serial ID of an instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Account routing policy. If `master` or `replication` is entered, it means to route to the master or slave node; if this is left blank, it means to write into the master node and read from the slave node by default
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_
