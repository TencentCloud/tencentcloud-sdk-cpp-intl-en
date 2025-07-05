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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpJob request structure.
                */
                class DescribeBackUpJobRequest : public AbstractModel
                {
                public:
                    DescribeBackUpJobRequest();
                    ~DescribeBackUpJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取Pagination size
                     * @return PageSize Pagination size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size
                     * @param _pageSize Pagination size
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
                     * 获取Page number
                     * @return PageNum Page number
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Page number
                     * @param _pageNum Page number
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return BeginTime Start time
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time
                     * @param _beginTime Start time
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取String type of jobid
                     * @return JobIdFiltersStr String type of jobid
                     * 
                     */
                    std::string GetJobIdFiltersStr() const;

                    /**
                     * 设置String type of jobid
                     * @param _jobIdFiltersStr String type of jobid
                     * 
                     */
                    void SetJobIdFiltersStr(const std::string& _jobIdFiltersStr);

                    /**
                     * 判断参数 JobIdFiltersStr 是否已赋值
                     * @return JobIdFiltersStr 是否已赋值
                     * 
                     */
                    bool JobIdFiltersStrHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Pagination size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * String type of jobid
                     */
                    std::string m_jobIdFiltersStr;
                    bool m_jobIdFiltersStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBREQUEST_H_
