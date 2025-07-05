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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceRenew request structure.
                */
                class InquirePriceRenewRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewRequest();
                    ~InquirePriceRenewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Validity period, which needs to be used together with `TimeUnit`.
                     * @return TimeSpan Validity period, which needs to be used together with `TimeUnit`.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Validity period, which needs to be used together with `TimeUnit`.
                     * @param _timeSpan Validity period, which needs to be used together with `TimeUnit`.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Unit of validity period, which needs to be used together with `TimeSpan`. Valid values: `d` (day), `m` (month).
                     * @return TimeUnit Unit of validity period, which needs to be used together with `TimeSpan`. Valid values: `d` (day), `m` (month).
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of validity period, which needs to be used together with `TimeSpan`. Valid values: `d` (day), `m` (month).
                     * @param _timeUnit Unit of validity period, which needs to be used together with `TimeSpan`. Valid values: `d` (day), `m` (month).
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Validity period, which needs to be used together with `TimeUnit`.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Unit of validity period, which needs to be used together with `TimeSpan`. Valid values: `d` (day), `m` (month).
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_
