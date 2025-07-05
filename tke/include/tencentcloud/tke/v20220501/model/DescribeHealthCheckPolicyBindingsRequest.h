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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckPolicyBindings request structure.
                */
                class DescribeHealthCheckPolicyBindingsRequest : public AbstractModel
                {
                public:
                    DescribeHealthCheckPolicyBindingsRequest();
                    ~DescribeHealthCheckPolicyBindingsRequest() = default;
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
                     * 获取·  HealthCheckPolicyName
    Filter by [Health Check Rule Name].
    Type: String
        Required: No
                     * @return Filter ·  HealthCheckPolicyName
    Filter by [Health Check Rule Name].
    Type: String
        Required: No
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置·  HealthCheckPolicyName
    Filter by [Health Check Rule Name].
    Type: String
        Required: No
                     * @param _filter ·  HealthCheckPolicyName
    Filter by [Health Check Rule Name].
    Type: String
        Required: No
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Maximum number of output entries. Default value: 20; maximum value: 100.
                     * @return Limit Maximum number of output entries. Default value: 20; maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: 20; maximum value: 100.
                     * @param _limit Maximum number of output entries. Default value: 20; maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ·  HealthCheckPolicyName
    Filter by [Health Check Rule Name].
    Type: String
        Required: No
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 20; maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSREQUEST_H_
