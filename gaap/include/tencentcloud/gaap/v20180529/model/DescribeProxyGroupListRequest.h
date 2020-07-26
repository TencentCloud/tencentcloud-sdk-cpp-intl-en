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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>
#include <tencentcloud/gaap/v20180529/model/Filter.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyGroupList request structure.
                */
                class DescribeProxyGroupListRequest : public AbstractModel
                {
                public:
                    DescribeProxyGroupListRequest();
                    ~DescribeProxyGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param Offset Offset. The default value is 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. The default value is 20. The maximum value is 100.
                     * @return Limit Number of returned results. The default value is 20. The maximum value is 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. The default value is 20. The maximum value is 100.
                     * @param Limit Number of returned results. The default value is 20. The maximum value is 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Project ID. Value range:
-1: all projects of this user
0: default project
Other values: specified project
                     * @return ProjectId Project ID. Value range:
-1: all projects of this user
0: default project
Other values: specified project
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Value range:
-1: all projects of this user
0: default project
Other values: specified project
                     * @param ProjectId Project ID. Value range:
-1: all projects of this user
0: default project
Other values: specified project
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connection groups tagged any of them will be pulled.
                     * @return TagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connection groups tagged any of them will be pulled.
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connection groups tagged any of them will be pulled.
                     * @param TagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connection groups tagged any of them will be pulled.
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Filter conditions.   
The limit on Filter.Values of each request is 5.
RealServerRegion - String - Required: No - Filter by origin server region; Refer to the RegionId in the results returned by DescribeDestRegions API.
                     * @return Filters Filter conditions.   
The limit on Filter.Values of each request is 5.
RealServerRegion - String - Required: No - Filter by origin server region; Refer to the RegionId in the results returned by DescribeDestRegions API.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions.   
The limit on Filter.Values of each request is 5.
RealServerRegion - String - Required: No - Filter by origin server region; Refer to the RegionId in the results returned by DescribeDestRegions API.
                     * @param Filters Filter conditions.   
The limit on Filter.Values of each request is 5.
RealServerRegion - String - Required: No - Filter by origin server region; Refer to the RegionId in the results returned by DescribeDestRegions API.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Offset. The default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. The default value is 20. The maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Project ID. Value range:
-1: all projects of this user
0: default project
Other values: specified project
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connection groups tagged any of them will be pulled.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Filter conditions.   
The limit on Filter.Values of each request is 5.
RealServerRegion - String - Required: No - Filter by origin server region; Refer to the RegionId in the results returned by DescribeDestRegions API.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_
