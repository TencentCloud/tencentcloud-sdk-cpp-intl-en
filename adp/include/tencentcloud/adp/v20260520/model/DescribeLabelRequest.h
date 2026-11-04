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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_

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
                * DescribeLabel request structure.
                */
                class DescribeLabelRequest : public AbstractModel
                {
                public:
                    DescribeLabelRequest();
                    ~DescribeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the knowledge base it belongs to</p>
                     * @return KbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>ID of the knowledge base it belongs to</p>
                     * @param _kbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID.</p>
                     * @return LabelId <p>Tag ID.</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>Tag ID.</p>
                     * @param _labelId <p>Tag ID.</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>Common filter.</p>
                     * @return FilterList <p>Common filter.</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Common filter.</p>
                     * @param _filterList <p>Common filter.</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>Standard term ID of the scroll loading cursor (pass 0 for the first request, and subsequently pass the TermId of the last item on the previous page)</p>
                     * @return LastTermId <p>Standard term ID of the scroll loading cursor (pass 0 for the first request, and subsequently pass the TermId of the last item on the previous page)</p>
                     * 
                     */
                    std::string GetLastTermId() const;

                    /**
                     * 设置<p>Standard term ID of the scroll loading cursor (pass 0 for the first request, and subsequently pass the TermId of the last item on the previous page)</p>
                     * @param _lastTermId <p>Standard term ID of the scroll loading cursor (pass 0 for the first request, and subsequently pass the TermId of the last item on the previous page)</p>
                     * 
                     */
                    void SetLastTermId(const std::string& _lastTermId);

                    /**
                     * 判断参数 LastTermId 是否已赋值
                     * @return LastTermId 是否已赋值
                     * 
                     */
                    bool LastTermIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of items to load at a time. Default: 10. Maximum: 100</p>
                     * @return Limit <p>Number of items to load at a time. Default: 10. Maximum: 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items to load at a time. Default: 10. Maximum: 100</p>
                     * @param _limit <p>Number of items to load at a time. Default: 10. Maximum: 100</p>
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
                     * 获取<p>Keyword search</p>
                     * @return Query <p>Keyword search</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Keyword search</p>
                     * @param _query <p>Keyword search</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Tag ID.</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>Common filter.</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Standard term ID of the scroll loading cursor (pass 0 for the first request, and subsequently pass the TermId of the last item on the previous page)</p>
                     */
                    std::string m_lastTermId;
                    bool m_lastTermIdHasBeenSet;

                    /**
                     * <p>Number of items to load at a time. Default: 10. Maximum: 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Keyword search</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELREQUEST_H_
