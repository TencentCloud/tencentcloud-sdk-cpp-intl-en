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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DELETESCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DELETESCHEDULEDACTIONREQUEST_H_

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
                * DeleteScheduledAction request structure.
                */
                class DeleteScheduledActionRequest : public AbstractModel
                {
                public:
                    DeleteScheduledActionRequest();
                    ~DeleteScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scheduled task ID to be deleted. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * @return ScheduledActionId Scheduled task ID to be deleted. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * 
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置Scheduled task ID to be deleted. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * @param _scheduledActionId Scheduled task ID to be deleted. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * 
                     */
                    void SetScheduledActionId(const std::string& _scheduledActionId);

                    /**
                     * 判断参数 ScheduledActionId 是否已赋值
                     * @return ScheduledActionId 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdHasBeenSet() const;

                private:

                    /**
                     * Scheduled task ID to be deleted. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DELETESCHEDULEDACTIONREQUEST_H_
