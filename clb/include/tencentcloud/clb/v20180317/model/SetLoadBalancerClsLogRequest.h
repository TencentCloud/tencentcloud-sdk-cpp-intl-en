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
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
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
                     * 获取Logset ID of the Cloud Log Service (CLS).<li>When adding or updating a log topic, call the [DescribeLogsets](https://intl.cloud.tencent.com/document/product/614/58624?from_cn_redirect=1) API to obtain the logset ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * @return LogSetId Logset ID of the Cloud Log Service (CLS).<li>When adding or updating a log topic, call the [DescribeLogsets](https://intl.cloud.tencent.com/document/product/614/58624?from_cn_redirect=1) API to obtain the logset ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Logset ID of the Cloud Log Service (CLS).<li>When adding or updating a log topic, call the [DescribeLogsets](https://intl.cloud.tencent.com/document/product/614/58624?from_cn_redirect=1) API to obtain the logset ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * @param _logSetId Logset ID of the Cloud Log Service (CLS).<li>When adding or updating a log topic, call the [DescribeLogsets](https://intl.cloud.tencent.com/document/product/614/58624?from_cn_redirect=1) API to obtain the logset ID.</li><li>When deleting a log topic, set this parameter to null.</li>
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
                     * 获取Log topic ID of the CLS.<li>When adding or updating a log topic, call the [DescribeTopics](https://intl.cloud.tencent.com/document/product/614/56454?from_cn_redirect=1) API to obtain the log topic ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * @return LogTopicId Log topic ID of the CLS.<li>When adding or updating a log topic, call the [DescribeTopics](https://intl.cloud.tencent.com/document/product/614/56454?from_cn_redirect=1) API to obtain the log topic ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID of the CLS.<li>When adding or updating a log topic, call the [DescribeTopics](https://intl.cloud.tencent.com/document/product/614/56454?from_cn_redirect=1) API to obtain the log topic ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     * @param _logTopicId Log topic ID of the CLS.<li>When adding or updating a log topic, call the [DescribeTopics](https://intl.cloud.tencent.com/document/product/614/56454?from_cn_redirect=1) API to obtain the log topic ID.</li><li>When deleting a log topic, set this parameter to null.</li>
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
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Logset ID of the Cloud Log Service (CLS).<li>When adding or updating a log topic, call the [DescribeLogsets](https://intl.cloud.tencent.com/document/product/614/58624?from_cn_redirect=1) API to obtain the logset ID.</li><li>When deleting a log topic, set this parameter to null.</li>
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID of the CLS.<li>When adding or updating a log topic, call the [DescribeTopics](https://intl.cloud.tencent.com/document/product/614/56454?from_cn_redirect=1) API to obtain the log topic ID.</li><li>When deleting a log topic, set this parameter to null.</li>
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
