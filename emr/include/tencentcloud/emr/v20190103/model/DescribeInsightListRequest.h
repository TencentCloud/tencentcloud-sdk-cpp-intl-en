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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInsightList request structure.
                */
                class DescribeInsightListRequest : public AbstractModel
                {
                public:
                    DescribeInsightListRequest();
                    ~DescribeInsightListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Start time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * @return StartTime Start time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * @param _startTime Start time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
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
                     * 获取End time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * @return EndTime End time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     * @param _endTime End time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
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
                     * 获取Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * @return PageSize Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * @param _pageSize Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number for pagination queries, starting from 1.
                     * @return Page Page number for pagination queries, starting from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number for pagination queries, starting from 1.
                     * @param _page Page number for pagination queries, starting from 1.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Query type. Types such as Hive,Spark,DLC_Spark,Spark_SQL,SCHEDULE,MapReduce,Trino are supported. All are queried by default.
                     * @return Type Query type. Types such as Hive,Spark,DLC_Spark,Spark_SQL,SCHEDULE,MapReduce,Trino are supported. All are queried by default.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Query type. Types such as Hive,Spark,DLC_Spark,Spark_SQL,SCHEDULE,MapReduce,Trino are supported. All are queried by default.
                     * @param _type Query type. Types such as Hive,Spark,DLC_Spark,Spark_SQL,SCHEDULE,MapReduce,Trino are supported. All are queried by default.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MustHasContext 
                     * 
                     */
                    bool GetMustHasContext() const;

                    /**
                     * 设置
                     * @param _mustHasContext 
                     * 
                     */
                    void SetMustHasContext(const bool& _mustHasContext);

                    /**
                     * 判断参数 MustHasContext 是否已赋值
                     * @return MustHasContext 是否已赋值
                     * 
                     */
                    bool MustHasContextHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the obtained insight result. The time is specific for filtering the start time of App or Hive querying.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number for pagination queries, starting from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Query type. Types such as Hive,Spark,DLC_Spark,Spark_SQL,SCHEDULE,MapReduce,Trino are supported. All are queried by default.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_mustHasContext;
                    bool m_mustHasContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSIGHTLISTREQUEST_H_
