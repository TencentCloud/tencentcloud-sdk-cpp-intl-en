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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/Paging.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeIpUnBlockList request structure.
                */
                class DescribeIpUnBlockListRequest : public AbstractModel
                {
                public:
                    DescribeIpUnBlockListRequest();
                    ~DescribeIpUnBlockListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return BeginTime Start time
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time
                     * @param BeginTime Start time
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取IP (if this field is not empty, IP filtering will be performed)
                     * @return Ip IP (if this field is not empty, IP filtering will be performed)
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP (if this field is not empty, IP filtering will be performed)
                     * @param Ip IP (if this field is not empty, IP filtering will be performed)
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Pagination parameter (paginated query will be performed if this field is not empty). This field will be disused in the future. Please use the `Limit` and `Offset` fields instead;
                     * @return Paging Pagination parameter (paginated query will be performed if this field is not empty). This field will be disused in the future. Please use the `Limit` and `Offset` fields instead;
                     */
                    Paging GetPaging() const;

                    /**
                     * 设置Pagination parameter (paginated query will be performed if this field is not empty). This field will be disused in the future. Please use the `Limit` and `Offset` fields instead;
                     * @param Paging Pagination parameter (paginated query will be performed if this field is not empty). This field will be disused in the future. Please use the `Limit` and `Offset` fields instead;
                     */
                    void SetPaging(const Paging& _paging);

                    /**
                     * 判断参数 Paging 是否已赋值
                     * @return Paging 是否已赋值
                     */
                    bool PagingHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. A value of 0 means no pagination
                     * @return Limit Number of entries per page. A value of 0 means no pagination
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. A value of 0 means no pagination
                     * @param Limit Number of entries per page. A value of 0 means no pagination
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page start offset, whose value is (page number - 1) * number of entries per page
                     * @return Offset Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page start offset, whose value is (page number - 1) * number of entries per page
                     * @param Offset Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

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
                     * IP (if this field is not empty, IP filtering will be performed)
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Pagination parameter (paginated query will be performed if this field is not empty). This field will be disused in the future. Please use the `Limit` and `Offset` fields instead;
                     */
                    Paging m_paging;
                    bool m_pagingHasBeenSet;

                    /**
                     * Number of entries per page. A value of 0 means no pagination
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_
