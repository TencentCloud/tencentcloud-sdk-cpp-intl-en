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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshBatch.h>
#include <tencentcloud/as/v20180419/model/RefreshSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Instance refresh activity.
                */
                class RefreshActivity : public AbstractModel
                {
                public:
                    RefreshActivity();
                    ~RefreshActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Original refresh activity ID, which exists only in the rollback refresh activity.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginRefreshActivityId Original refresh activity ID, which exists only in the rollback refresh activity.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginRefreshActivityId() const;

                    /**
                     * 设置Original refresh activity ID, which exists only in the rollback refresh activity.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originRefreshActivityId Original refresh activity ID, which exists only in the rollback refresh activity.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginRefreshActivityId(const std::string& _originRefreshActivityId);

                    /**
                     * 判断参数 OriginRefreshActivityId 是否已赋值
                     * @return OriginRefreshActivityId 是否已赋值
                     * 
                     */
                    bool OriginRefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取Refresh batch information list.
                     * @return RefreshBatchSet Refresh batch information list.
                     * 
                     */
                    std::vector<RefreshBatch> GetRefreshBatchSet() const;

                    /**
                     * 设置Refresh batch information list.
                     * @param _refreshBatchSet Refresh batch information list.
                     * 
                     */
                    void SetRefreshBatchSet(const std::vector<RefreshBatch>& _refreshBatchSet);

                    /**
                     * 判断参数 RefreshBatchSet 是否已赋值
                     * @return RefreshBatchSet 是否已赋值
                     * 
                     */
                    bool RefreshBatchSetHasBeenSet() const;

                    /**
                     * 获取Refresh mode.
                     * @return RefreshMode Refresh mode.
                     * 
                     */
                    std::string GetRefreshMode() const;

                    /**
                     * 设置Refresh mode.
                     * @param _refreshMode Refresh mode.
                     * 
                     */
                    void SetRefreshMode(const std::string& _refreshMode);

                    /**
                     * 判断参数 RefreshMode 是否已赋值
                     * @return RefreshMode 是否已赋值
                     * 
                     */
                    bool RefreshModeHasBeenSet() const;

                    /**
                     * 获取Instance update setting parameters.
                     * @return RefreshSettings Instance update setting parameters.
                     * 
                     */
                    RefreshSettings GetRefreshSettings() const;

                    /**
                     * 设置Instance update setting parameters.
                     * @param _refreshSettings Instance update setting parameters.
                     * 
                     */
                    void SetRefreshSettings(const RefreshSettings& _refreshSettings);

                    /**
                     * 判断参数 RefreshSettings 是否已赋值
                     * @return RefreshSettings 是否已赋值
                     * 
                     */
                    bool RefreshSettingsHasBeenSet() const;

                    /**
                     * 获取Refresh activity type. Valid values:
<li>NORMAL: normal refresh activity.</li>
<li>ROLLBACK: rollback refresh activity.</li>
                     * @return ActivityType Refresh activity type. Valid values:
<li>NORMAL: normal refresh activity.</li>
<li>ROLLBACK: rollback refresh activity.</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Refresh activity type. Valid values:
<li>NORMAL: normal refresh activity.</li>
<li>ROLLBACK: rollback refresh activity.</li>
                     * @param _activityType Refresh activity type. Valid values:
<li>NORMAL: normal refresh activity.</li>
<li>ROLLBACK: rollback refresh activity.</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取Refresh activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>FAILED_PAUSE: paused due to the failure of a refresh batch.</li>
<li>AUTO_PAUSE: automatically paused due to the pause policy.</li>
<li>MANUAL_PAUSE: manually paused.</li>
<li>CANCELLED: canceled.</li>
<li>FAILED: failed.</li>
                     * @return Status Refresh activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>FAILED_PAUSE: paused due to the failure of a refresh batch.</li>
<li>AUTO_PAUSE: automatically paused due to the pause policy.</li>
<li>MANUAL_PAUSE: manually paused.</li>
<li>CANCELLED: canceled.</li>
<li>FAILED: failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Refresh activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>FAILED_PAUSE: paused due to the failure of a refresh batch.</li>
<li>AUTO_PAUSE: automatically paused due to the pause policy.</li>
<li>MANUAL_PAUSE: manually paused.</li>
<li>CANCELLED: canceled.</li>
<li>FAILED: failed.</li>
                     * @param _status Refresh activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>FAILED_PAUSE: paused due to the failure of a refresh batch.</li>
<li>AUTO_PAUSE: automatically paused due to the pause policy.</li>
<li>MANUAL_PAUSE: manually paused.</li>
<li>CANCELLED: canceled.</li>
<li>FAILED: failed.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Current refresh batch number. For example, a value of 2 indicates that the current activity is refreshing the second batch of instances.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurrentRefreshBatchNum Current refresh batch number. For example, a value of 2 indicates that the current activity is refreshing the second batch of instances.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCurrentRefreshBatchNum() const;

                    /**
                     * 设置Current refresh batch number. For example, a value of 2 indicates that the current activity is refreshing the second batch of instances.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _currentRefreshBatchNum Current refresh batch number. For example, a value of 2 indicates that the current activity is refreshing the second batch of instances.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurrentRefreshBatchNum(const uint64_t& _currentRefreshBatchNum);

                    /**
                     * 判断参数 CurrentRefreshBatchNum 是否已赋值
                     * @return CurrentRefreshBatchNum 是否已赋值
                     * 
                     */
                    bool CurrentRefreshBatchNumHasBeenSet() const;

                    /**
                     * 获取Refresh activity start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Refresh activity start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Refresh activity start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Refresh activity start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Refresh activity end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Refresh activity end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Refresh activity end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Refresh activity end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Refresh activity creation time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreatedTime Refresh activity creation time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Refresh activity creation time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createdTime Refresh activity creation time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

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
                     * Original refresh activity ID, which exists only in the rollback refresh activity.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originRefreshActivityId;
                    bool m_originRefreshActivityIdHasBeenSet;

                    /**
                     * Refresh batch information list.
                     */
                    std::vector<RefreshBatch> m_refreshBatchSet;
                    bool m_refreshBatchSetHasBeenSet;

                    /**
                     * Refresh mode.
                     */
                    std::string m_refreshMode;
                    bool m_refreshModeHasBeenSet;

                    /**
                     * Instance update setting parameters.
                     */
                    RefreshSettings m_refreshSettings;
                    bool m_refreshSettingsHasBeenSet;

                    /**
                     * Refresh activity type. Valid values:
<li>NORMAL: normal refresh activity.</li>
<li>ROLLBACK: rollback refresh activity.</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * Refresh activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>FAILED_PAUSE: paused due to the failure of a refresh batch.</li>
<li>AUTO_PAUSE: automatically paused due to the pause policy.</li>
<li>MANUAL_PAUSE: manually paused.</li>
<li>CANCELLED: canceled.</li>
<li>FAILED: failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Current refresh batch number. For example, a value of 2 indicates that the current activity is refreshing the second batch of instances.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_currentRefreshBatchNum;
                    bool m_currentRefreshBatchNumHasBeenSet;

                    /**
                     * Refresh activity start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Refresh activity end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Refresh activity creation time.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_
