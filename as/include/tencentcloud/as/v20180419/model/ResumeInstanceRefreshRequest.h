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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ResumeInstanceRefresh request structure.
                */
                class ResumeInstanceRefreshRequest : public AbstractModel
                {
                public:
                    ResumeInstanceRefreshRequest();
                    ~ResumeInstanceRefreshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @return AutoScalingGroupId Scaling group ID. obtain in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @param _autoScalingGroupId Scaling group ID. obtain in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Refresh activity ID. you can get the instance refresh activity ID by calling the api [DescribeRefreshActivities](https://intl.cloud.tencent.com/document/api/377/99175?from_cn_redirect=1) and retrieving the RefreshActivityId from the returned information.
                     * @return RefreshActivityId Refresh activity ID. you can get the instance refresh activity ID by calling the api [DescribeRefreshActivities](https://intl.cloud.tencent.com/document/api/377/99175?from_cn_redirect=1) and retrieving the RefreshActivityId from the returned information.
                     * 
                     */
                    std::string GetRefreshActivityId() const;

                    /**
                     * 设置Refresh activity ID. you can get the instance refresh activity ID by calling the api [DescribeRefreshActivities](https://intl.cloud.tencent.com/document/api/377/99175?from_cn_redirect=1) and retrieving the RefreshActivityId from the returned information.
                     * @param _refreshActivityId Refresh activity ID. you can get the instance refresh activity ID by calling the api [DescribeRefreshActivities](https://intl.cloud.tencent.com/document/api/377/99175?from_cn_redirect=1) and retrieving the RefreshActivityId from the returned information.
                     * 
                     */
                    void SetRefreshActivityId(const std::string& _refreshActivityId);

                    /**
                     * 判断参数 RefreshActivityId 是否已赋值
                     * @return RefreshActivityId 是否已赋值
                     * 
                     */
                    bool RefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取Recovery mode of instances that have failed to be refreshed in the current batch. If there are no failed instances, this parameter is invalid. Default value: RETRY. Valid values: <li>RETRY: Retry instances that have failed to be refreshed in the current batch.</li> <li>CONTINUE: Skip instances that have failed to be refreshed in the current batch.</li>
                     * @return ResumeMode Recovery mode of instances that have failed to be refreshed in the current batch. If there are no failed instances, this parameter is invalid. Default value: RETRY. Valid values: <li>RETRY: Retry instances that have failed to be refreshed in the current batch.</li> <li>CONTINUE: Skip instances that have failed to be refreshed in the current batch.</li>
                     * 
                     */
                    std::string GetResumeMode() const;

                    /**
                     * 设置Recovery mode of instances that have failed to be refreshed in the current batch. If there are no failed instances, this parameter is invalid. Default value: RETRY. Valid values: <li>RETRY: Retry instances that have failed to be refreshed in the current batch.</li> <li>CONTINUE: Skip instances that have failed to be refreshed in the current batch.</li>
                     * @param _resumeMode Recovery mode of instances that have failed to be refreshed in the current batch. If there are no failed instances, this parameter is invalid. Default value: RETRY. Valid values: <li>RETRY: Retry instances that have failed to be refreshed in the current batch.</li> <li>CONTINUE: Skip instances that have failed to be refreshed in the current batch.</li>
                     * 
                     */
                    void SetResumeMode(const std::string& _resumeMode);

                    /**
                     * 判断参数 ResumeMode 是否已赋值
                     * @return ResumeMode 是否已赋值
                     * 
                     */
                    bool ResumeModeHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Refresh activity ID. you can get the instance refresh activity ID by calling the api [DescribeRefreshActivities](https://intl.cloud.tencent.com/document/api/377/99175?from_cn_redirect=1) and retrieving the RefreshActivityId from the returned information.
                     */
                    std::string m_refreshActivityId;
                    bool m_refreshActivityIdHasBeenSet;

                    /**
                     * Recovery mode of instances that have failed to be refreshed in the current batch. If there are no failed instances, this parameter is invalid. Default value: RETRY. Valid values: <li>RETRY: Retry instances that have failed to be refreshed in the current batch.</li> <li>CONTINUE: Skip instances that have failed to be refreshed in the current batch.</li>
                     */
                    std::string m_resumeMode;
                    bool m_resumeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_
