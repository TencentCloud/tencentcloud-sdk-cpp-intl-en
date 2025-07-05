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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/HostInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterHosts response structure.
                */
                class DescribeDedicatedClusterHostsResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterHostsResponse();
                    ~DescribeDedicatedClusterHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Host information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return HostInfoSet Host information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<HostInfo> GetHostInfoSet() const;

                    /**
                     * 判断参数 HostInfoSet 是否已赋值
                     * @return HostInfoSet 是否已赋值
                     * 
                     */
                    bool HostInfoSetHasBeenSet() const;

                    /**
                     * 获取Total number of hosts
                     * @return TotalCount Total number of hosts
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
                     * Host information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<HostInfo> m_hostInfoSet;
                    bool m_hostInfoSetHasBeenSet;

                    /**
                     * Total number of hosts
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_
