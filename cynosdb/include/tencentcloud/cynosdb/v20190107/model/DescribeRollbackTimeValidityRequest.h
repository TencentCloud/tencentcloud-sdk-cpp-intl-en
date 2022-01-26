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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYREQUEST_H_

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
                * DescribeRollbackTimeValidity request structure.
                */
                class DescribeRollbackTimeValidityRequest : public AbstractModel
                {
                public:
                    DescribeRollbackTimeValidityRequest();
                    ~DescribeRollbackTimeValidityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Expected time point to roll back to
                     * @return ExpectTime Expected time point to roll back to
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置Expected time point to roll back to
                     * @param ExpectTime Expected time point to roll back to
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取Error tolerance range for rollback time point
                     * @return ExpectTimeThresh Error tolerance range for rollback time point
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置Error tolerance range for rollback time point
                     * @param ExpectTimeThresh Error tolerance range for rollback time point
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Expected time point to roll back to
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * Error tolerance range for rollback time point
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYREQUEST_H_
