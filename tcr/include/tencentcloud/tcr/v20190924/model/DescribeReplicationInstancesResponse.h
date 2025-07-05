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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationRegistry.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstances response structure.
                */
                class DescribeReplicationInstancesResponse : public AbstractModel
                {
                public:
                    DescribeReplicationInstancesResponse();
                    ~DescribeReplicationInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of instances
                     * @return TotalCount Total number of instances
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
                     * 获取Replication instance list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReplicationRegistries Replication instance list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ReplicationRegistry> GetReplicationRegistries() const;

                    /**
                     * 判断参数 ReplicationRegistries 是否已赋值
                     * @return ReplicationRegistries 是否已赋值
                     * 
                     */
                    bool ReplicationRegistriesHasBeenSet() const;

                private:

                    /**
                     * Total number of instances
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Replication instance list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ReplicationRegistry> m_replicationRegistries;
                    bool m_replicationRegistriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESRESPONSE_H_
