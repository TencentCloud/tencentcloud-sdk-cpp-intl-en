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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * BreakStandbyDBInstanceRelation request structure.
                */
                class BreakStandbyDBInstanceRelationRequest : public AbstractModel
                {
                public:
                    BreakStandbyDBInstanceRelationRequest();
                    ~BreakStandbyDBInstanceRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Disaster Recovery instance ID
                     * @return InstanceId Disaster Recovery instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Disaster Recovery instance ID
                     * @param _instanceId Disaster Recovery instance ID
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
                     * 获取Whether to force disconnection
                     * @return IsForce Whether to force disconnection
                     * 
                     */
                    bool GetIsForce() const;

                    /**
                     * 设置Whether to force disconnection
                     * @param _isForce Whether to force disconnection
                     * 
                     */
                    void SetIsForce(const bool& _isForce);

                    /**
                     * 判断参数 IsForce 是否已赋值
                     * @return IsForce 是否已赋值
                     * 
                     */
                    bool IsForceHasBeenSet() const;

                    /**
                     * 获取Latency in seconds. 0 means do not check.
                     * @return SyncDelay Latency in seconds. 0 means do not check.
                     * 
                     */
                    int64_t GetSyncDelay() const;

                    /**
                     * 设置Latency in seconds. 0 means do not check.
                     * @param _syncDelay Latency in seconds. 0 means do not check.
                     * 
                     */
                    void SetSyncDelay(const int64_t& _syncDelay);

                    /**
                     * 判断参数 SyncDelay 是否已赋值
                     * @return SyncDelay 是否已赋值
                     * 
                     */
                    bool SyncDelayHasBeenSet() const;

                private:

                    /**
                     * Disaster Recovery instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to force disconnection
                     */
                    bool m_isForce;
                    bool m_isForceHasBeenSet;

                    /**
                     * Latency in seconds. 0 means do not check.
                     */
                    int64_t m_syncDelay;
                    bool m_syncDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_
