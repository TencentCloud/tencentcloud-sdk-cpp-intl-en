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
                     * 获取The instance ID.
                     * @return InstanceId The instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The instance ID.
                     * @param _instanceId The instance ID.
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
                     * 获取Parameter for record filtration. Valid values: "StartTime", "EndTime" and "StrategyName". StartTime and EndTime support the time format of 2006-01-02 15:04:05 or 2006/01/02 15:04:05.
                     * @return Filters Parameter for record filtration. Valid values: "StartTime", "EndTime" and "StrategyName". StartTime and EndTime support the time format of 2006-01-02 15:04:05 or 2006/01/02 15:04:05.
                     * 
                     */
                    std::vector<KeyValue> GetFilters() const;

                    /**
                     * 设置Parameter for record filtration. Valid values: "StartTime", "EndTime" and "StrategyName". StartTime and EndTime support the time format of 2006-01-02 15:04:05 or 2006/01/02 15:04:05.
                     * @param _filters Parameter for record filtration. Valid values: "StartTime", "EndTime" and "StrategyName". StartTime and EndTime support the time format of 2006-01-02 15:04:05 or 2006/01/02 15:04:05.
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
                     * 获取Pagination parameters.
                     * @return Offset Pagination parameters.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters.
                     * @param _offset Pagination parameters.
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
                     * 获取Pagination parameters. Maximum value: 100
                     * @return Limit Pagination parameters. Maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters. Maximum value: 100
                     * @param _limit Pagination parameters. Maximum value: 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Parameter for record filtration. Valid values: "StartTime", "EndTime" and "StrategyName". StartTime and EndTime support the time format of 2006-01-02 15:04:05 or 2006/01/02 15:04:05.
                     */
                    std::vector<KeyValue> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Pagination parameters.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameters. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
