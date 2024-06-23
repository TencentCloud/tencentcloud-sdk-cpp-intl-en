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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRECORDSTRENDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRECORDSTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationStatisticsRecordsTrend request structure.
                */
                class DescribeIntegrationStatisticsRecordsTrendRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsRecordsTrendRequest();
                    ~DescribeIntegrationStatisticsRecordsTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task Type (Real-time: 201, Offline: 202)
                     * @return TaskType Task Type (Real-time: 201, Offline: 202)
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task Type (Real-time: 201, Offline: 202)
                     * @param _taskType Task Type (Real-time: 201, Offline: 202)
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Query Date
                     * @return QueryDate Query Date
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置Query Date
                     * @param _queryDate Query Date
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                private:

                    /**
                     * Task Type (Real-time: 201, Offline: 202)
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Query Date
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRECORDSTRENDREQUEST_H_
