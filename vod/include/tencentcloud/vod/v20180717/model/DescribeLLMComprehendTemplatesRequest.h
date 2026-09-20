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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeLLMComprehendTemplates request structure.
                */
                class DescribeLLMComprehendTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLLMComprehendTemplatesRequest();
                    ~DescribeLLMComprehendTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter condition for the unique identifier of the large model parsing template. The array can contain up to 100 unique identifiers.</p>
                     * @return Definitions <p>Filter condition for the unique identifier of the large model parsing template. The array can contain up to 100 unique identifiers.</p>
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置<p>Filter condition for the unique identifier of the large model parsing template. The array can contain up to 100 unique identifiers.</p>
                     * @param _definitions <p>Filter condition for the unique identifier of the large model parsing template. The array can contain up to 100 unique identifiers.</p>
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method.<br>Sort.Field Option: Definition, CreateTime, UpdateTime.</p>
                     * @return Sort <p>Sorting method.<br>Sort.Field Option: Definition, CreateTime, UpdateTime.</p>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置<p>Sorting method.<br>Sort.Field Option: Definition, CreateTime, UpdateTime.</p>
                     * @param _sort <p>Sorting method.<br>Sort.Field Option: Definition, CreateTime, UpdateTime.</p>
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Filter condition for the unique identifier of the large model parsing template. The array can contain up to 100 unique identifiers.</p>
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * <p>Sorting method.<br>Sort.Field Option: Definition, CreateTime, UpdateTime.</p>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_
