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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTagValues request structure.
                */
                class DescribeTagValuesRequest : public AbstractModel
                {
                public:
                    DescribeTagValuesRequest();
                    ~DescribeTagValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dimension name.
                     * @return TagKey Dimension name.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Dimension name.
                     * @param _tagKey Dimension name.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
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
                     * 获取Filter criteria.
                     * @return Filters Filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filters Filter criteria.
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
                     * 获取Start time (unit: sec).
                     * @return StartTime Start time (unit: sec).
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time (unit: sec).
                     * @param _startTime Start time (unit: sec).
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (unit: seconds).
                     * @return EndTime End time (unit: seconds).
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time (unit: seconds).
                     * @param _endTime End time (unit: seconds).
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Or filter criteria.
                     * @return OrFilters Or filter criteria.
                     * 
                     */
                    std::vector<Filter> GetOrFilters() const;

                    /**
                     * 设置Or filter criteria.
                     * @param _orFilters Or filter criteria.
                     * 
                     */
                    void SetOrFilters(const std::vector<Filter>& _orFilters);

                    /**
                     * 判断参数 OrFilters 是否已赋值
                     * @return OrFilters 是否已赋值
                     * 
                     */
                    bool OrFiltersHasBeenSet() const;

                    /**
                     * 获取Usage type.
                     * @return Type Usage type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Usage type.
                     * @param _type Usage type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Dimension name.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Start time (unit: sec).
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (unit: seconds).
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Or filter criteria.
                     */
                    std::vector<Filter> m_orFilters;
                    bool m_orFiltersHasBeenSet;

                    /**
                     * Usage type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_
