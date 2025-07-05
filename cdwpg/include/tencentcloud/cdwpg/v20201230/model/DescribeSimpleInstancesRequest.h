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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeSimpleInstances request structure.
                */
                class DescribeSimpleInstancesRequest : public AbstractModel
                {
                public:
                    DescribeSimpleInstancesRequest();
                    ~DescribeSimpleInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Searches by instance ID.
                     * @return SearchInstanceId Searches by instance ID.
                     * 
                     */
                    std::string GetSearchInstanceId() const;

                    /**
                     * 设置Searches by instance ID.
                     * @param _searchInstanceId Searches by instance ID.
                     * 
                     */
                    void SetSearchInstanceId(const std::string& _searchInstanceId);

                    /**
                     * 判断参数 SearchInstanceId 是否已赋值
                     * @return SearchInstanceId 是否已赋值
                     * 
                     */
                    bool SearchInstanceIdHasBeenSet() const;

                    /**
                     * 获取Searches by instance name.
                     * @return SearchInstanceName Searches by instance name.
                     * 
                     */
                    std::string GetSearchInstanceName() const;

                    /**
                     * 设置Searches by instance name.
                     * @param _searchInstanceName Searches by instance name.
                     * 
                     */
                    void SetSearchInstanceName(const std::string& _searchInstanceName);

                    /**
                     * 判断参数 SearchInstanceName 是否已赋值
                     * @return SearchInstanceName 是否已赋值
                     * 
                     */
                    bool SearchInstanceNameHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Limit.
                     * @return Limit Limit.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit.
                     * @param _limit Limit.
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
                     * 获取Searches by tag list.
                     * @return SearchTags Searches by tag list.
                     * 
                     */
                    std::vector<std::string> GetSearchTags() const;

                    /**
                     * 设置Searches by tag list.
                     * @param _searchTags Searches by tag list.
                     * 
                     */
                    void SetSearchTags(const std::vector<std::string>& _searchTags);

                    /**
                     * 判断参数 SearchTags 是否已赋值
                     * @return SearchTags 是否已赋值
                     * 
                     */
                    bool SearchTagsHasBeenSet() const;

                private:

                    /**
                     * Searches by instance ID.
                     */
                    std::string m_searchInstanceId;
                    bool m_searchInstanceIdHasBeenSet;

                    /**
                     * Searches by instance name.
                     */
                    std::string m_searchInstanceName;
                    bool m_searchInstanceNameHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Searches by tag list.
                     */
                    std::vector<std::string> m_searchTags;
                    bool m_searchTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESREQUEST_H_
