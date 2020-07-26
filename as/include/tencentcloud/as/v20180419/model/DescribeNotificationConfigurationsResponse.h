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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/AutoScalingNotification.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeNotificationConfigurations response structure.
                */
                class DescribeNotificationConfigurationsResponse : public AbstractModel
                {
                public:
                    DescribeNotificationConfigurationsResponse();
                    ~DescribeNotificationConfigurationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Number of eligible notifications.
                     * @return TotalCount Number of eligible notifications.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of AS event notification details.
                     * @return AutoScalingNotificationSet List of AS event notification details.
                     */
                    std::vector<AutoScalingNotification> GetAutoScalingNotificationSet() const;

                    /**
                     * 判断参数 AutoScalingNotificationSet 是否已赋值
                     * @return AutoScalingNotificationSet 是否已赋值
                     */
                    bool AutoScalingNotificationSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible notifications.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of AS event notification details.
                     */
                    std::vector<AutoScalingNotification> m_autoScalingNotificationSet;
                    bool m_autoScalingNotificationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_
