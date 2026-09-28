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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListeners request structure.
                */
                class DescribeListenersRequest : public AbstractModel
                {
                public:
                    DescribeListenersRequest();
                    ~DescribeListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria list. Supports up to 20. Supports the following fields.
- **Protocol**: Protocol type
- **Tags**: Tag
                     * @return Filters Filter criteria list. Supports up to 20. Supports the following fields.
- **Protocol**: Protocol type
- **Tags**: Tag
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria list. Supports up to 20. Supports the following fields.
- **Protocol**: Protocol type
- **Tags**: Tag
                     * @param _filters Filter criteria list. Supports up to 20. Supports the following fields.
- **Protocol**: Protocol type
- **Tags**: Tag
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Listener ID list. ID format: lst- followed by 8 alphanumeric characters.
                     * @return ListenerIds Listener ID list. ID format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Listener ID list. ID format: lst- followed by 8 alphanumeric characters.
                     * @param _listenerIds Listener ID list. ID format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * @return MaxResults Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * @param _maxResults Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Token for the next query. If it is empty, this queries page 1.
                     * @return NextToken Token for the next query. If it is empty, this queries page 1.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for the next query. If it is empty, this queries page 1.
                     * @param _nextToken Token for the next query. If it is empty, this queries page 1.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Filter criteria list. Supports up to 20. Supports the following fields.
- **Protocol**: Protocol type
- **Tags**: Tag
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Listener ID list. ID format: lst- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Token for the next query. If it is empty, this queries page 1.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERSREQUEST_H_
