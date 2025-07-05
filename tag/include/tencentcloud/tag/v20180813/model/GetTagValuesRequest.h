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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGVALUESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetTagValues request structure.
                */
                class GetTagValuesRequest : public AbstractModel
                {
                public:
                    GetTagValuesRequest();
                    ~GetTagValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag key.
All tag values corresponding to the list of tag keys.
Maximum length: 20
                     * @return TagKeys Tag key.
All tag values corresponding to the list of tag keys.
Maximum length: 20
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Tag key.
All tag values corresponding to the list of tag keys.
Maximum length: 20
                     * @param _tagKeys Tag key.
All tag values corresponding to the list of tag keys.
Maximum length: 20
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * @return PaginationToken The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * @param _paginationToken The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * 
                     */
                    void SetPaginationToken(const std::string& _paginationToken);

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取Number of data entries to return per page (up to 1,000).
Default value: 50.
                     * @return MaxResults Number of data entries to return per page (up to 1,000).
Default value: 50.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Number of data entries to return per page (up to 1,000).
Default value: 50.
                     * @param _maxResults Number of data entries to return per page (up to 1,000).
Default value: 50.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Tag type. Valid values: Custom: custom tag; System: system tag; All: all tags. Default value: All.
                     * @return Category Tag type. Valid values: Custom: custom tag; System: system tag; All: all tags. Default value: All.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Tag type. Valid values: Custom: custom tag; System: system tag; All: all tags. Default value: All.
                     * @param _category Tag type. Valid values: Custom: custom tag; System: system tag; All: all tags. Default value: All.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * Tag key.
All tag values corresponding to the list of tag keys.
Maximum length: 20
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * Number of data entries to return per page (up to 1,000).
Default value: 50.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Tag type. Valid values: Custom: custom tag; System: system tag; All: all tags. Default value: All.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGVALUESREQUEST_H_
