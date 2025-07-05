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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>
#include <tencentcloud/cfg/v20210820/model/ActionFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTemplateList request structure.
                */
                class DescribeTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeTemplateListRequest();
                    ~DescribeTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination limit.Maximum value:100.
                     * @return Limit Pagination limit.Maximum value:100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit.Maximum value:100.
                     * @param _limit Pagination limit.Maximum value:100.
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Experiment name
                     * @return Title Experiment name
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Experiment name
                     * @param _title Experiment name
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Tag key
                     * @return Tag Tag key
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Tag key
                     * @param _tag Tag key
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Status. 1: in use; 2: not in use.
                     * @return IsUsed Status. 1: in use; 2: not in use.
                     * 
                     */
                    int64_t GetIsUsed() const;

                    /**
                     * 设置Status. 1: in use; 2: not in use.
                     * @param _isUsed Status. 1: in use; 2: not in use.
                     * 
                     */
                    void SetIsUsed(const int64_t& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                    /**
                     * 获取Tag pair
                     * @return Tags Tag pair
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置Tag pair
                     * @param _tags Tag pair
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Template library source. 0: self-built; 1: recommended by experts.
                     * @return TemplateSource Template library source. 0: self-built; 1: recommended by experts.
                     * 
                     */
                    int64_t GetTemplateSource() const;

                    /**
                     * 设置Template library source. 0: self-built; 1: recommended by experts.
                     * @param _templateSource Template library source. 0: self-built; 1: recommended by experts.
                     * 
                     */
                    void SetTemplateSource(const int64_t& _templateSource);

                    /**
                     * 判断参数 TemplateSource 是否已赋值
                     * @return TemplateSource 是否已赋值
                     * 
                     */
                    bool TemplateSourceHasBeenSet() const;

                    /**
                     * 获取Template ID
                     * @return TemplateIdList Template ID
                     * 
                     */
                    std::vector<int64_t> GetTemplateIdList() const;

                    /**
                     * 设置Template ID
                     * @param _templateIdList Template ID
                     * 
                     */
                    void SetTemplateIdList(const std::vector<int64_t>& _templateIdList);

                    /**
                     * 判断参数 TemplateIdList 是否已赋值
                     * @return TemplateIdList 是否已赋值
                     * 
                     */
                    bool TemplateIdListHasBeenSet() const;

                    /**
                     * 获取Filter parameters
                     * @return Filters Filter parameters
                     * 
                     */
                    std::vector<ActionFilter> GetFilters() const;

                    /**
                     * 设置Filter parameters
                     * @param _filters Filter parameters
                     * 
                     */
                    void SetFilters(const std::vector<ActionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Pagination limit.Maximum value:100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Experiment name
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Tag key
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Status. 1: in use; 2: not in use.
                     */
                    int64_t m_isUsed;
                    bool m_isUsedHasBeenSet;

                    /**
                     * Tag pair
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Template library source. 0: self-built; 1: recommended by experts.
                     */
                    int64_t m_templateSource;
                    bool m_templateSourceHasBeenSet;

                    /**
                     * Template ID
                     */
                    std::vector<int64_t> m_templateIdList;
                    bool m_templateIdListHasBeenSet;

                    /**
                     * Filter parameters
                     */
                    std::vector<ActionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_
