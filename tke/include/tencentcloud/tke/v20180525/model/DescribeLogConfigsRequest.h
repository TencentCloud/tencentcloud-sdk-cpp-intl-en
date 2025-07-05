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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeLogConfigs request structure.
                */
                class DescribeLogConfigsRequest : public AbstractModel
                {
                public:
                    DescribeLogConfigsRequest();
                    ~DescribeLogConfigsRequest() = default;
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
                     * 获取Currently supported cluster types are tke and eks. The default is tke.
                     * @return ClusterType Currently supported cluster types are tke and eks. The default is tke.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Currently supported cluster types are tke and eks. The default is tke.
                     * @param _clusterType Currently supported cluster types are tke and eks. The default is tke.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Search by collection rule name. For multiple collection rules, they are separated by ",".
                     * @return LogConfigNames Search by collection rule name. For multiple collection rules, they are separated by ",".
                     * 
                     */
                    std::string GetLogConfigNames() const;

                    /**
                     * 设置Search by collection rule name. For multiple collection rules, they are separated by ",".
                     * @param _logConfigNames Search by collection rule name. For multiple collection rules, they are separated by ",".
                     * 
                     */
                    void SetLogConfigNames(const std::string& _logConfigNames);

                    /**
                     * 判断参数 LogConfigNames 是否已赋值
                     * @return LogConfigNames 是否已赋值
                     * 
                     */
                    bool LogConfigNamesHasBeenSet() const;

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

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Currently supported cluster types are tke and eks. The default is tke.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Search by collection rule name. For multiple collection rules, they are separated by ",".
                     */
                    std::string m_logConfigNames;
                    bool m_logConfigNamesHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 20; maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSREQUEST_H_
