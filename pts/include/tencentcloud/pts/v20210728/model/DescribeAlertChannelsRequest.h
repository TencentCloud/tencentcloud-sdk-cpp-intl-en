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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeAlertChannels request structure.
                */
                class DescribeAlertChannelsRequest : public AbstractModel
                {
                public:
                    DescribeAlertChannelsRequest();
                    ~DescribeAlertChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of Project ID.
                     * @return ProjectIds Array of Project ID.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Array of Project ID.
                     * @param _projectIds Array of Project ID.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value is 0.
                     * @return Offset Offset. Default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value is 0.
                     * @param _offset Offset. Default value is 0.
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
                     * 获取Number of returns, default is 20, maximum is 100.
                     * @return Limit Number of returns, default is 20, maximum is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns, default is 20, maximum is 100.
                     * @param _limit Number of returns, default is 20, maximum is 100.
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
                     * 获取Array of Notice ID.
                     * @return NoticeIds Array of Notice ID.
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置Array of Notice ID.
                     * @param _noticeIds Array of Notice ID.
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取Column for sorting.
                     * @return OrderBy Column for sorting.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Column for sorting.
                     * @param _orderBy Column for sorting.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Whether in ascending order.
                     * @return Ascend Whether in ascending order.
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置Whether in ascending order.
                     * @param _ascend Whether in ascending order.
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                private:

                    /**
                     * Array of Project ID.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Offset. Default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns, default is 20, maximum is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Array of Notice ID.
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Column for sorting.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether in ascending order.
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSREQUEST_H_
