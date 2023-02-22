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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftStreamList request structure.
                */
                class DescribeTimeShiftStreamListRequest : public AbstractModel
                {
                public:
                    DescribeTimeShiftStreamListRequest();
                    ~DescribeTimeShiftStreamListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time, which must be a Unix timestamp.
                     * @return StartTime The start time, which must be a Unix timestamp.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The start time, which must be a Unix timestamp.
                     * @param StartTime The start time, which must be a Unix timestamp.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time, which must be a Unix timestamp.
                     * @return EndTime The end time, which must be a Unix timestamp.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The end time, which must be a Unix timestamp.
                     * @param EndTime The end time, which must be a Unix timestamp.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The stream name.
                     * @return StreamName The stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
                     * @param StreamName The stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The push domain.
                     * @return Domain The push domain.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The push domain.
                     * @param Domain The push domain.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The group the push domain belongs to.
                     * @return DomainGroup The group the push domain belongs to.
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置The group the push domain belongs to.
                     * @param DomainGroup The group the push domain belongs to.
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取The maximum number of records to return. Value range: 0-100. If you do not specify this parameter or pass in `0`, 
the default value `100` will be used. If you pass in a negative number or a value greater than 100, an error will be returned.
                     * @return PageSize The maximum number of records to return. Value range: 0-100. If you do not specify this parameter or pass in `0`, 
the default value `100` will be used. If you pass in a negative number or a value greater than 100, an error will be returned.
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The maximum number of records to return. Value range: 0-100. If you do not specify this parameter or pass in `0`, 
the default value `100` will be used. If you pass in a negative number or a value greater than 100, an error will be returned.
                     * @param PageSize The maximum number of records to return. Value range: 0-100. If you do not specify this parameter or pass in `0`, 
the default value `100` will be used. If you pass in a negative number or a value greater than 100, an error will be returned.
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取The number of page to pull records from. If you do not specify this parameter, the default value `1` will be used.
                     * @return PageNum The number of page to pull records from. If you do not specify this parameter, the default value `1` will be used.
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置The number of page to pull records from. If you do not specify this parameter, the default value `1` will be used.
                     * @param PageNum The number of page to pull records from. If you do not specify this parameter, the default value `1` will be used.
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * The start time, which must be a Unix timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time, which must be a Unix timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The push domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The group the push domain belongs to.
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * The maximum number of records to return. Value range: 0-100. If you do not specify this parameter or pass in `0`, 
the default value `100` will be used. If you pass in a negative number or a value greater than 100, an error will be returned.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * The number of page to pull records from. If you do not specify this parameter, the default value `1` will be used.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_
