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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGACTIVITIESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Filter.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeAutoScalingActivities request structure.
                */
                class DescribeAutoScalingActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingActivitiesRequest();
                    ~DescribeAutoScalingActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by one or more scaling activity IDs in the format of `asa-5l2ejpfo`. The maximum quantity per request is 100. This parameter does not support specifying both `ActivityIds` and `Filters` at the same time.
                     * @return ActivityIds Queries by one or more scaling activity IDs in the format of `asa-5l2ejpfo`. The maximum quantity per request is 100. This parameter does not support specifying both `ActivityIds` and `Filters` at the same time.
                     * 
                     */
                    std::vector<std::string> GetActivityIds() const;

                    /**
                     * 设置Queries by one or more scaling activity IDs in the format of `asa-5l2ejpfo`. The maximum quantity per request is 100. This parameter does not support specifying both `ActivityIds` and `Filters` at the same time.
                     * @param _activityIds Queries by one or more scaling activity IDs in the format of `asa-5l2ejpfo`. The maximum quantity per request is 100. This parameter does not support specifying both `ActivityIds` and `Filters` at the same time.
                     * 
                     */
                    void SetActivityIds(const std::vector<std::string>& _activityIds);

                    /**
                     * 判断参数 ActivityIds 是否已赋值
                     * @return ActivityIds 是否已赋值
                     * 
                     */
                    bool ActivityIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria. the filter field value ranges from...to.
<ul>
<li><strong>auto-scaling-group-id</strong><ul><li>Filter by [<strong>scaling group id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) or call the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) to obtain the scaling group id from the returned information.</li><li>type: String</li><li>required: no</li><li>example value: asg-kiju7yt5</li></ul></li>  <li><strong>activity-status-code</strong><ul><li>filter by [<strong>scaling activity status</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>INIT: initializing</li><li>RUNNING: RUNNING</li><li>SUCCESSFUL: SUCCESSFUL activity</li><li>PARTIALLY_SUCCESSFUL: PARTIALLY SUCCESSFUL activity</li><li>FAILED: activity FAILED</li><li>CANCELLED: activity CANCELLED</li></ul></ul></li>  <li><strong>activity-type</strong><ul><li>filter by [<strong>scaling activity type</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>SCALE_OUT: SCALE-OUT activity</li><li>SCALE_IN: SCALE-IN activity</li><li>ATTACH_INSTANCES: adding INSTANCES</li><li>REMOVE_INSTANCES: terminating INSTANCES</li><li>DETACH_INSTANCES: REMOVE INSTANCE</li><li>TERMINATE_INSTANCES_UNEXPECTEDLY: TERMINATE INSTANCE IN CVM console</li><li>REPLACE_UNHEALTHY_INSTANCE: REPLACE UNHEALTHY INSTANCES</li><li>START_INSTANCES: START INSTANCES</li><li>STOP_INSTANCES: shut down INSTANCE</li><li>INVOKE_COMMAND: execute COMMAND</li></ul></ul></li>  <li><strong>activity-id</strong><ul><li>filter by [<strong>scaling activity id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) to obtain the scaling activity id.</li><li>type: String</li><li>required: no</li><li>example value: asa-hy6tr4ed</li></ul></li></ul>.
The maximum number of `Filters` per request is 10. the upper limit for `Filter.Values` is 5. parameters must not specify both `ActivityIds` and `Filters` simultaneously.
                     * @return Filters Filter criteria. the filter field value ranges from...to.
<ul>
<li><strong>auto-scaling-group-id</strong><ul><li>Filter by [<strong>scaling group id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) or call the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) to obtain the scaling group id from the returned information.</li><li>type: String</li><li>required: no</li><li>example value: asg-kiju7yt5</li></ul></li>  <li><strong>activity-status-code</strong><ul><li>filter by [<strong>scaling activity status</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>INIT: initializing</li><li>RUNNING: RUNNING</li><li>SUCCESSFUL: SUCCESSFUL activity</li><li>PARTIALLY_SUCCESSFUL: PARTIALLY SUCCESSFUL activity</li><li>FAILED: activity FAILED</li><li>CANCELLED: activity CANCELLED</li></ul></ul></li>  <li><strong>activity-type</strong><ul><li>filter by [<strong>scaling activity type</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>SCALE_OUT: SCALE-OUT activity</li><li>SCALE_IN: SCALE-IN activity</li><li>ATTACH_INSTANCES: adding INSTANCES</li><li>REMOVE_INSTANCES: terminating INSTANCES</li><li>DETACH_INSTANCES: REMOVE INSTANCE</li><li>TERMINATE_INSTANCES_UNEXPECTEDLY: TERMINATE INSTANCE IN CVM console</li><li>REPLACE_UNHEALTHY_INSTANCE: REPLACE UNHEALTHY INSTANCES</li><li>START_INSTANCES: START INSTANCES</li><li>STOP_INSTANCES: shut down INSTANCE</li><li>INVOKE_COMMAND: execute COMMAND</li></ul></ul></li>  <li><strong>activity-id</strong><ul><li>filter by [<strong>scaling activity id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) to obtain the scaling activity id.</li><li>type: String</li><li>required: no</li><li>example value: asa-hy6tr4ed</li></ul></li></ul>.
The maximum number of `Filters` per request is 10. the upper limit for `Filter.Values` is 5. parameters must not specify both `ActivityIds` and `Filters` simultaneously.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. the filter field value ranges from...to.
<ul>
<li><strong>auto-scaling-group-id</strong><ul><li>Filter by [<strong>scaling group id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) or call the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) to obtain the scaling group id from the returned information.</li><li>type: String</li><li>required: no</li><li>example value: asg-kiju7yt5</li></ul></li>  <li><strong>activity-status-code</strong><ul><li>filter by [<strong>scaling activity status</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>INIT: initializing</li><li>RUNNING: RUNNING</li><li>SUCCESSFUL: SUCCESSFUL activity</li><li>PARTIALLY_SUCCESSFUL: PARTIALLY SUCCESSFUL activity</li><li>FAILED: activity FAILED</li><li>CANCELLED: activity CANCELLED</li></ul></ul></li>  <li><strong>activity-type</strong><ul><li>filter by [<strong>scaling activity type</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>SCALE_OUT: SCALE-OUT activity</li><li>SCALE_IN: SCALE-IN activity</li><li>ATTACH_INSTANCES: adding INSTANCES</li><li>REMOVE_INSTANCES: terminating INSTANCES</li><li>DETACH_INSTANCES: REMOVE INSTANCE</li><li>TERMINATE_INSTANCES_UNEXPECTEDLY: TERMINATE INSTANCE IN CVM console</li><li>REPLACE_UNHEALTHY_INSTANCE: REPLACE UNHEALTHY INSTANCES</li><li>START_INSTANCES: START INSTANCES</li><li>STOP_INSTANCES: shut down INSTANCE</li><li>INVOKE_COMMAND: execute COMMAND</li></ul></ul></li>  <li><strong>activity-id</strong><ul><li>filter by [<strong>scaling activity id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) to obtain the scaling activity id.</li><li>type: String</li><li>required: no</li><li>example value: asa-hy6tr4ed</li></ul></li></ul>.
The maximum number of `Filters` per request is 10. the upper limit for `Filter.Values` is 5. parameters must not specify both `ActivityIds` and `Filters` simultaneously.
                     * @param _filters Filter criteria. the filter field value ranges from...to.
<ul>
<li><strong>auto-scaling-group-id</strong><ul><li>Filter by [<strong>scaling group id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) or call the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) to obtain the scaling group id from the returned information.</li><li>type: String</li><li>required: no</li><li>example value: asg-kiju7yt5</li></ul></li>  <li><strong>activity-status-code</strong><ul><li>filter by [<strong>scaling activity status</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>INIT: initializing</li><li>RUNNING: RUNNING</li><li>SUCCESSFUL: SUCCESSFUL activity</li><li>PARTIALLY_SUCCESSFUL: PARTIALLY SUCCESSFUL activity</li><li>FAILED: activity FAILED</li><li>CANCELLED: activity CANCELLED</li></ul></ul></li>  <li><strong>activity-type</strong><ul><li>filter by [<strong>scaling activity type</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>SCALE_OUT: SCALE-OUT activity</li><li>SCALE_IN: SCALE-IN activity</li><li>ATTACH_INSTANCES: adding INSTANCES</li><li>REMOVE_INSTANCES: terminating INSTANCES</li><li>DETACH_INSTANCES: REMOVE INSTANCE</li><li>TERMINATE_INSTANCES_UNEXPECTEDLY: TERMINATE INSTANCE IN CVM console</li><li>REPLACE_UNHEALTHY_INSTANCE: REPLACE UNHEALTHY INSTANCES</li><li>START_INSTANCES: START INSTANCES</li><li>STOP_INSTANCES: shut down INSTANCE</li><li>INVOKE_COMMAND: execute COMMAND</li></ul></ul></li>  <li><strong>activity-id</strong><ul><li>filter by [<strong>scaling activity id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) to obtain the scaling activity id.</li><li>type: String</li><li>required: no</li><li>example value: asa-hy6tr4ed</li></ul></li></ul>.
The maximum number of `Filters` per request is 10. the upper limit for `Filter.Values` is 5. parameters must not specify both `ActivityIds` and `Filters` simultaneously.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The earliest start time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @return StartTime The earliest start time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The earliest start time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @param _startTime The earliest start time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
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
                     * 获取The latest end time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @return EndTime The latest end time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The latest end time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @param _endTime The latest end time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Queries by one or more scaling activity IDs in the format of `asa-5l2ejpfo`. The maximum quantity per request is 100. This parameter does not support specifying both `ActivityIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_activityIds;
                    bool m_activityIdsHasBeenSet;

                    /**
                     * Filter criteria. the filter field value ranges from...to.
<ul>
<li><strong>auto-scaling-group-id</strong><ul><li>Filter by [<strong>scaling group id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) or call the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) to obtain the scaling group id from the returned information.</li><li>type: String</li><li>required: no</li><li>example value: asg-kiju7yt5</li></ul></li>  <li><strong>activity-status-code</strong><ul><li>filter by [<strong>scaling activity status</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>INIT: initializing</li><li>RUNNING: RUNNING</li><li>SUCCESSFUL: SUCCESSFUL activity</li><li>PARTIALLY_SUCCESSFUL: PARTIALLY SUCCESSFUL activity</li><li>FAILED: activity FAILED</li><li>CANCELLED: activity CANCELLED</li></ul></ul></li>  <li><strong>activity-type</strong><ul><li>filter by [<strong>scaling activity type</strong>]</li><li>type: String</li><li>required: no</li><li>options: </li><ul><li>SCALE_OUT: SCALE-OUT activity</li><li>SCALE_IN: SCALE-IN activity</li><li>ATTACH_INSTANCES: adding INSTANCES</li><li>REMOVE_INSTANCES: terminating INSTANCES</li><li>DETACH_INSTANCES: REMOVE INSTANCE</li><li>TERMINATE_INSTANCES_UNEXPECTEDLY: TERMINATE INSTANCE IN CVM console</li><li>REPLACE_UNHEALTHY_INSTANCE: REPLACE UNHEALTHY INSTANCES</li><li>START_INSTANCES: START INSTANCES</li><li>STOP_INSTANCES: shut down INSTANCE</li><li>INVOKE_COMMAND: execute COMMAND</li></ul></ul></li>  <li><strong>activity-id</strong><ul><li>filter by [<strong>scaling activity id</strong>]. you can log IN to the [console](https://console.cloud.tencent.com/autoscaling/group) to obtain the scaling activity id.</li><li>type: String</li><li>required: no</li><li>example value: asa-hy6tr4ed</li></ul></li></ul>.
The maximum number of `Filters` per request is 10. the upper limit for `Filter.Values` is 5. parameters must not specify both `ActivityIds` and `Filters` simultaneously.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The earliest start time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The latest end time of the scaling activity, which will be ignored if ActivityIds is specified. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGACTIVITIESREQUEST_H_
