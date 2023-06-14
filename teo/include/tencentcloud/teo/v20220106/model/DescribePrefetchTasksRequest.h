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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribePrefetchTasks request structure.
                */
                class DescribePrefetchTasksRequest : public AbstractModel
                {
                public:
                    DescribePrefetchTasksRequest();
                    ~DescribePrefetchTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return JobId Task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param _jobId Task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Start time of the query
                     * @return StartTime Start time of the query
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query
                     * @param _startTime Start time of the query
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
                     * 获取End time of the query
                     * @return EndTime End time of the query
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query
                     * @param _endTime End time of the query
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
                     * 获取Offset of the query
                     * @return Offset Offset of the query
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of the query
                     * @param _offset Offset of the query
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
                     * 获取Maximum number of results returned
                     * @return Limit Maximum number of results returned
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of results returned
                     * @param _limit Maximum number of results returned
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
                     * 获取Statuses of tasks to be queried. Values:
`processing`, `success`, `failed`, `timeout` and `invalid`
                     * @return Statuses Statuses of tasks to be queried. Values:
`processing`, `success`, `failed`, `timeout` and `invalid`
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置Statuses of tasks to be queried. Values:
`processing`, `success`, `failed`, `timeout` and `invalid`
                     * @param _statuses Statuses of tasks to be queried. Values:
`processing`, `success`, `failed`, `timeout` and `invalid`
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取ID of the site
                     * @return ZoneId ID of the site
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site
                     * @param _zoneId ID of the site
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of domain names queried
                     * @return Domains List of domain names queried
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of domain names queried
                     * @param _domains List of domain names queried
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Resources queried
                     * @return Target Resources queried
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Resources queried
                     * @param _target Resources queried
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Start time of the query
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Offset of the query
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of results returned
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Statuses of tasks to be queried. Values:
`processing`, `success`, `failed`, `timeout` and `invalid`
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * ID of the site
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of domain names queried
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Resources queried
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
