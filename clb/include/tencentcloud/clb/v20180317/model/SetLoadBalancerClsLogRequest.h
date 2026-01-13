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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SetLoadBalancerClsLog request structure.
                */
                class SetLoadBalancerClsLogRequest : public AbstractModel
                {
                public:
                    SetLoadBalancerClsLogRequest();
                    ~SetLoadBalancerClsLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1) API to query the ID.
                     * @return LoadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1) API to query the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1) API to query the ID.
                     * @param _loadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1) API to query the ID.
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
                     * 获取Log set ID of cloud log service (CLS).
<li>Specifies the logset ID that can be obtained by calling the [DescribeLogsets](https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * @return LogSetId Log set ID of cloud log service (CLS).
<li>Specifies the logset ID that can be obtained by calling the [DescribeLogsets](https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Log set ID of cloud log service (CLS).
<li>Specifies the logset ID that can be obtained by calling the [DescribeLogsets](https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * @param _logSetId Log set ID of cloud log service (CLS).
<li>Specifies the logset ID that can be obtained by calling the [DescribeLogsets](https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Specifies the log topic ID of cloud log service (CLS).
<li>Specifies the log topic ID can be obtained by calling the [DescribeTopics](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * @return LogTopicId Specifies the log topic ID of cloud log service (CLS).
<li>Specifies the log topic ID can be obtained by calling the [DescribeTopics](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Specifies the log topic ID of cloud log service (CLS).
<li>Specifies the log topic ID can be obtained by calling the [DescribeTopics](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * @param _logTopicId Specifies the log topic ID of cloud log service (CLS).
<li>Specifies the log topic ID can be obtained by calling the [DescribeTopics](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取Log type:
<li>`ACCESS`: access logs</li>
<li>`HEALTH`: health check logs</li>
Default: `ACCESS`
                     * @return LogType Log type:
<li>`ACCESS`: access logs</li>
<li>`HEALTH`: health check logs</li>
Default: `ACCESS`
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type:
<li>`ACCESS`: access logs</li>
<li>`HEALTH`: health check logs</li>
Default: `ACCESS`
                     * @param _logType Log type:
<li>`ACCESS`: access logs</li>
<li>`HEALTH`: health check logs</li>
Default: `ACCESS`
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1) API to query the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Log set ID of cloud log service (CLS).
<li>Specifies the logset ID that can be obtained by calling the [DescribeLogsets](https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Specifies the log topic ID of cloud log service (CLS).
<li>Specifies the log topic ID can be obtained by calling the [DescribeTopics](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1) API when adding or updating a log topic.</li>.
<Li>When deleting a log topic, set this parameter to an empty string.</li>.
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * Log type:
<li>`ACCESS`: access logs</li>
<li>`HEALTH`: health check logs</li>
Default: `ACCESS`
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERCLSLOGREQUEST_H_
