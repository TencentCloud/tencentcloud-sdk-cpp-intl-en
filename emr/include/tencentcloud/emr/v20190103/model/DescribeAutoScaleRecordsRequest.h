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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/KeyValue.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleRecords request structure.
                */
                class DescribeAutoScaleRecordsRequest : public AbstractModel
                {
                public:
                    DescribeAutoScaleRecordsRequest();
                    ~DescribeAutoScaleRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Record filter parameter, which can only be "StartTime", "EndTime", "StrategyName", "ActionStatus", or "ScaleAction".
Time format. Either 2006-01-02 15:04:05 or 2006/01/02 15:04:05 for StartTime and EndTime.
ActionStatus: 0 (INITED), 1 (SUCCESS), 2 (FAILED), 3 (LIMITED_SUCCESSED), 4 (IN_PROCESS), and 5 (IN_RETRY).
ScaleAction: 1 (scale-out) and 2 (scale-in).

                     * @return Filters Record filter parameter, which can only be "StartTime", "EndTime", "StrategyName", "ActionStatus", or "ScaleAction".
Time format. Either 2006-01-02 15:04:05 or 2006/01/02 15:04:05 for StartTime and EndTime.
ActionStatus: 0 (INITED), 1 (SUCCESS), 2 (FAILED), 3 (LIMITED_SUCCESSED), 4 (IN_PROCESS), and 5 (IN_RETRY).
ScaleAction: 1 (scale-out) and 2 (scale-in).

                     * 
                     */
                    std::vector<KeyValue> GetFilters() const;

                    /**
                     * 设置Record filter parameter, which can only be "StartTime", "EndTime", "StrategyName", "ActionStatus", or "ScaleAction".
Time format. Either 2006-01-02 15:04:05 or 2006/01/02 15:04:05 for StartTime and EndTime.
ActionStatus: 0 (INITED), 1 (SUCCESS), 2 (FAILED), 3 (LIMITED_SUCCESSED), 4 (IN_PROCESS), and 5 (IN_RETRY).
ScaleAction: 1 (scale-out) and 2 (scale-in).

                     * @param _filters Record filter parameter, which can only be "StartTime", "EndTime", "StrategyName", "ActionStatus", or "ScaleAction".
Time format. Either 2006-01-02 15:04:05 or 2006/01/02 15:04:05 for StartTime and EndTime.
ActionStatus: 0 (INITED), 1 (SUCCESS), 2 (FAILED), 3 (LIMITED_SUCCESSED), 4 (IN_PROCESS), and 5 (IN_RETRY).
ScaleAction: 1 (scale-out) and 2 (scale-in).

                     * 
                     */
                    void SetFilters(const std::vector<KeyValue>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Pagination parameter.
                     * @return Offset Pagination parameter.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter.
                     * @param _offset Pagination parameter.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Maximum value: 100.
                     * @return Limit Number of entries per page. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Maximum value: 100.
                     * @param _limit Number of entries per page. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Whether it is an auto scaling (0) or managed scaling (1) operation.
                     * @return RecordSource Whether it is an auto scaling (0) or managed scaling (1) operation.
                     * 
                     */
                    int64_t GetRecordSource() const;

                    /**
                     * 设置Whether it is an auto scaling (0) or managed scaling (1) operation.
                     * @param _recordSource Whether it is an auto scaling (0) or managed scaling (1) operation.
                     * 
                     */
                    void SetRecordSource(const int64_t& _recordSource);

                    /**
                     * 判断参数 RecordSource 是否已赋值
                     * @return RecordSource 是否已赋值
                     * 
                     */
                    bool RecordSourceHasBeenSet() const;

                    /**
                     * 获取Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * @return Asc Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * @param _asc Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Record filter parameter, which can only be "StartTime", "EndTime", "StrategyName", "ActionStatus", or "ScaleAction".
Time format. Either 2006-01-02 15:04:05 or 2006/01/02 15:04:05 for StartTime and EndTime.
ActionStatus: 0 (INITED), 1 (SUCCESS), 2 (FAILED), 3 (LIMITED_SUCCESSED), 4 (IN_PROCESS), and 5 (IN_RETRY).
ScaleAction: 1 (scale-out) and 2 (scale-in).

                     */
                    std::vector<KeyValue> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Pagination parameter.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether it is an auto scaling (0) or managed scaling (1) operation.
                     */
                    int64_t m_recordSource;
                    bool m_recordSourceHasBeenSet;

                    /**
                     * Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
