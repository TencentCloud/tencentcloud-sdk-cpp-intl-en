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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAuditLogList request structure.
                */
                class DescribeAuditLogListRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogListRequest();
                    ~DescribeAuditLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Space id</p>
                     * @return SpaceId <p>Space id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space id</p>
                     * @param _spaceId <p>Space id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page</p><p>Value range: [1, 100]</p>
                     * @return Limit <p>Number of items per page</p><p>Value range: [1, 100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page</p><p>Value range: [1, 100]</p>
                     * @param _limit <p>Number of items per page</p><p>Value range: [1, 100]</p>
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
                     * 获取<p>Query start position of ES</p><p>The corresponding API returns SearchAfter</p>
                     * @return SearchAfter <p>Query start position of ES</p><p>The corresponding API returns SearchAfter</p>
                     * 
                     */
                    std::vector<std::string> GetSearchAfter() const;

                    /**
                     * 设置<p>Query start position of ES</p><p>The corresponding API returns SearchAfter</p>
                     * @param _searchAfter <p>Query start position of ES</p><p>The corresponding API returns SearchAfter</p>
                     * 
                     */
                    void SetSearchAfter(const std::vector<std::string>& _searchAfter);

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                    /**
                     * 获取<p>Parameter filtering</p><p>Supports Action, BizObject, Content<br>Supports SpaceId, AccountUin, AppId (up to 100)<br>Supports startTime, endTime (timestamp in seconds)</p>
                     * @return FilterList <p>Parameter filtering</p><p>Supports Action, BizObject, Content<br>Supports SpaceId, AccountUin, AppId (up to 100)<br>Supports startTime, endTime (timestamp in seconds)</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Parameter filtering</p><p>Supports Action, BizObject, Content<br>Supports SpaceId, AccountUin, AppId (up to 100)<br>Supports startTime, endTime (timestamp in seconds)</p>
                     * @param _filterList <p>Parameter filtering</p><p>Supports Action, BizObject, Content<br>Supports SpaceId, AccountUin, AppId (up to 100)<br>Supports startTime, endTime (timestamp in seconds)</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>Space id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Number of items per page</p><p>Value range: [1, 100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Query start position of ES</p><p>The corresponding API returns SearchAfter</p>
                     */
                    std::vector<std::string> m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                    /**
                     * <p>Parameter filtering</p><p>Supports Action, BizObject, Content<br>Supports SpaceId, AccountUin, AppId (up to 100)<br>Supports startTime, endTime (timestamp in seconds)</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTREQUEST_H_
