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
                     * 获取Scaling group ID.
                     * @return AutoScalingGroupId Scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID.
                     * @param _autoScalingGroupId Scaling group ID.
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
                     * 获取Refresh activity ID.
                     * @return RefreshActivityId Refresh activity ID.
                     * 
                     */
                    std::string GetRefreshActivityId() const;

                    /**
                     * 设置Refresh activity ID.
                     * @param _refreshActivityId Refresh activity ID.
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
                     * 获取The recovery method for the current batch's failed instances. If there are no failed instances, this parameter becomes invalid. Default value: RETRY. Valid values: <br><li>RETRY: Retry refreshing failed instances in the current batch.</li> <li>CONTINUE: Skip failed instances in the current batch.
                     * @return ResumeMode The recovery method for the current batch's failed instances. If there are no failed instances, this parameter becomes invalid. Default value: RETRY. Valid values: <br><li>RETRY: Retry refreshing failed instances in the current batch.</li> <li>CONTINUE: Skip failed instances in the current batch.
                     * 
                     */
                    std::string GetResumeMode() const;

                    /**
                     * 设置The recovery method for the current batch's failed instances. If there are no failed instances, this parameter becomes invalid. Default value: RETRY. Valid values: <br><li>RETRY: Retry refreshing failed instances in the current batch.</li> <li>CONTINUE: Skip failed instances in the current batch.
                     * @param _resumeMode The recovery method for the current batch's failed instances. If there are no failed instances, this parameter becomes invalid. Default value: RETRY. Valid values: <br><li>RETRY: Retry refreshing failed instances in the current batch.</li> <li>CONTINUE: Skip failed instances in the current batch.
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
                     * Scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Refresh activity ID.
                     */
                    std::string m_refreshActivityId;
                    bool m_refreshActivityIdHasBeenSet;

                    /**
                     * The recovery method for the current batch's failed instances. If there are no failed instances, this parameter becomes invalid. Default value: RETRY. Valid values: <br><li>RETRY: Retry refreshing failed instances in the current batch.</li> <li>CONTINUE: Skip failed instances in the current batch.
                     */
                    std::string m_resumeMode;
                    bool m_resumeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_
