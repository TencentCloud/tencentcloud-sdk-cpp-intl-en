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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_AVAILABLEZONEAFFINITYINFO_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_AVAILABLEZONEAFFINITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * Forward affinity info in availability zone
                */
                class AvailableZoneAffinityInfo : public AbstractModel
                {
                public:
                    AvailableZoneAffinityInfo();
                    ~AvailableZoneAffinityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable availability zone forwarding affinity. true: enable availability zone forwarding affinity; false: enable availability zone forwarding affinity.
                     * @return Enable Whether to enable availability zone forwarding affinity. true: enable availability zone forwarding affinity; false: enable availability zone forwarding affinity.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable availability zone forwarding affinity. true: enable availability zone forwarding affinity; false: enable availability zone forwarding affinity.
                     * @param _enable Whether to enable availability zone forwarding affinity. true: enable availability zone forwarding affinity; false: enable availability zone forwarding affinity.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取The availability zone forwarding affinity failure threshold. When the healthy ratio of backend services in an availability zone is less than this threshold, the Cloud Load Balancer will exit availability zone forwarding affinity and convert to forwarding across all availability zones.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExitRatio The availability zone forwarding affinity failure threshold. When the healthy ratio of backend services in an availability zone is less than this threshold, the Cloud Load Balancer will exit availability zone forwarding affinity and convert to forwarding across all availability zones.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExitRatio() const;

                    /**
                     * 设置The availability zone forwarding affinity failure threshold. When the healthy ratio of backend services in an availability zone is less than this threshold, the Cloud Load Balancer will exit availability zone forwarding affinity and convert to forwarding across all availability zones.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exitRatio The availability zone forwarding affinity failure threshold. When the healthy ratio of backend services in an availability zone is less than this threshold, the Cloud Load Balancer will exit availability zone forwarding affinity and convert to forwarding across all availability zones.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExitRatio(const uint64_t& _exitRatio);

                    /**
                     * 判断参数 ExitRatio 是否已赋值
                     * @return ExitRatio 是否已赋值
                     * 
                     */
                    bool ExitRatioHasBeenSet() const;

                    /**
                     * 获取The threshold for re-enabling availability zone forwarding affinity. When forwarding is in all availability zones and the proportion of healthy backend services in the Cloud Load Balancer availability zone is greater than or equal to this threshold, the CLB will enter availability zone forwarding affinity again.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReentryRatio The threshold for re-enabling availability zone forwarding affinity. When forwarding is in all availability zones and the proportion of healthy backend services in the Cloud Load Balancer availability zone is greater than or equal to this threshold, the CLB will enter availability zone forwarding affinity again.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReentryRatio() const;

                    /**
                     * 设置The threshold for re-enabling availability zone forwarding affinity. When forwarding is in all availability zones and the proportion of healthy backend services in the Cloud Load Balancer availability zone is greater than or equal to this threshold, the CLB will enter availability zone forwarding affinity again.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reentryRatio The threshold for re-enabling availability zone forwarding affinity. When forwarding is in all availability zones and the proportion of healthy backend services in the Cloud Load Balancer availability zone is greater than or equal to this threshold, the CLB will enter availability zone forwarding affinity again.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReentryRatio(const uint64_t& _reentryRatio);

                    /**
                     * 判断参数 ReentryRatio 是否已赋值
                     * @return ReentryRatio 是否已赋值
                     * 
                     */
                    bool ReentryRatioHasBeenSet() const;

                private:

                    /**
                     * Whether to enable availability zone forwarding affinity. true: enable availability zone forwarding affinity; false: enable availability zone forwarding affinity.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The availability zone forwarding affinity failure threshold. When the healthy ratio of backend services in an availability zone is less than this threshold, the Cloud Load Balancer will exit availability zone forwarding affinity and convert to forwarding across all availability zones.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_exitRatio;
                    bool m_exitRatioHasBeenSet;

                    /**
                     * The threshold for re-enabling availability zone forwarding affinity. When forwarding is in all availability zones and the proportion of healthy backend services in the Cloud Load Balancer availability zone is greater than or equal to this threshold, the CLB will enter availability zone forwarding affinity again.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_reentryRatio;
                    bool m_reentryRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_AVAILABLEZONEAFFINITYINFO_H_
