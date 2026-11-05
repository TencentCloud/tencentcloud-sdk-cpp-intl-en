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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCQUERY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Documentation query condition
                */
                class DocQuery : public AbstractModel
                {
                public:
                    DocQuery();
                    ~DocQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Query keyword (name fuzzy search)</p>
                     * @return Query <p>Query keyword (name fuzzy search)</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Query keyword (name fuzzy search)</p>
                     * @param _query <p>Query keyword (name fuzzy search)</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>Query scope (fields that the query applies to): 1=file name, 2=tag or tag value; multiple selections supported, invalid by default</p>
                     * @return QueryScopeList <p>Query scope (fields that the query applies to): 1=file name, 2=tag or tag value; multiple selections supported, invalid by default</p>
                     * 
                     */
                    std::vector<int64_t> GetQueryScopeList() const;

                    /**
                     * 设置<p>Query scope (fields that the query applies to): 1=file name, 2=tag or tag value; multiple selections supported, invalid by default</p>
                     * @param _queryScopeList <p>Query scope (fields that the query applies to): 1=file name, 2=tag or tag value; multiple selections supported, invalid by default</p>
                     * 
                     */
                    void SetQueryScopeList(const std::vector<int64_t>& _queryScopeList);

                    /**
                     * 判断参数 QueryScopeList 是否已赋值
                     * @return QueryScopeList 是否已赋值
                     * 
                     */
                    bool QueryScopeListHasBeenSet() const;

                private:

                    /**
                     * <p>Query keyword (name fuzzy search)</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Query scope (fields that the query applies to): 1=file name, 2=tag or tag value; multiple selections supported, invalid by default</p>
                     */
                    std::vector<int64_t> m_queryScopeList;
                    bool m_queryScopeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCQUERY_H_
