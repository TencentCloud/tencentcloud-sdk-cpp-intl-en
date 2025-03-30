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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAsrHotwordsList request structure.
                */
                class DescribeAsrHotwordsListRequest : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsListRequest();
                    ~DescribeAsrHotwordsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter for querying by hotword lexicon ID.
                     * @return HotwordsId Parameter for querying by hotword lexicon ID.
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置Parameter for querying by hotword lexicon ID.
                     * @param _hotwordsId Parameter for querying by hotword lexicon ID.
                     * 
                     */
                    void SetHotwordsId(const std::string& _hotwordsId);

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取Parameter for querying by hotword lexicon name.
                     * @return Name Parameter for querying by hotword lexicon name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter for querying by hotword lexicon name.
                     * @param _name Parameter for querying by hotword lexicon name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param _offset Paging offset. Default value: 0.
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
                     * 获取Number of returned entries. All hotword lexicons are returned by default.
                     * @return Limit Number of returned entries. All hotword lexicons are returned by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. All hotword lexicons are returned by default.
                     * @param _limit Number of returned entries. All hotword lexicons are returned by default.
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
                     * 获取Hotword lexicon sorting order.

0: ascending (default)
1: descending
                     * @return OrderType Hotword lexicon sorting order.

0: ascending (default)
1: descending
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置Hotword lexicon sorting order.

0: ascending (default)
1: descending
                     * @param _orderType Hotword lexicon sorting order.

0: ascending (default)
1: descending
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Sorts hotword lexicons by a specific field. By default, hotword lexicons are sorted by creation time. If an invalid field is used for sorting, the default sorting field applies.

 - CreateTime: sort by creation time
 - UpdateTime: sort by update time
 - Name: sort by hotword lexicon name
 - WordCount: sort by the number of hotwords
 - HotwordsId: sort by hotword lexicon ID
                     * @return OrderBy Sorts hotword lexicons by a specific field. By default, hotword lexicons are sorted by creation time. If an invalid field is used for sorting, the default sorting field applies.

 - CreateTime: sort by creation time
 - UpdateTime: sort by update time
 - Name: sort by hotword lexicon name
 - WordCount: sort by the number of hotwords
 - HotwordsId: sort by hotword lexicon ID
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorts hotword lexicons by a specific field. By default, hotword lexicons are sorted by creation time. If an invalid field is used for sorting, the default sorting field applies.

 - CreateTime: sort by creation time
 - UpdateTime: sort by update time
 - Name: sort by hotword lexicon name
 - WordCount: sort by the number of hotwords
 - HotwordsId: sort by hotword lexicon ID
                     * @param _orderBy Sorts hotword lexicons by a specific field. By default, hotword lexicons are sorted by creation time. If an invalid field is used for sorting, the default sorting field applies.

 - CreateTime: sort by creation time
 - UpdateTime: sort by update time
 - Name: sort by hotword lexicon name
 - WordCount: sort by the number of hotwords
 - HotwordsId: sort by hotword lexicon ID
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
                     * 获取0: temporary hotword; 1 file-based hotword.
                     * @return Types 0: temporary hotword; 1 file-based hotword.
                     * 
                     */
                    std::vector<uint64_t> GetTypes() const;

                    /**
                     * 设置0: temporary hotword; 1 file-based hotword.
                     * @param _types 0: temporary hotword; 1 file-based hotword.
                     * 
                     */
                    void SetTypes(const std::vector<uint64_t>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * Parameter for querying by hotword lexicon ID.
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * Parameter for querying by hotword lexicon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. All hotword lexicons are returned by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Hotword lexicon sorting order.

0: ascending (default)
1: descending
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Sorts hotword lexicons by a specific field. By default, hotword lexicons are sorted by creation time. If an invalid field is used for sorting, the default sorting field applies.

 - CreateTime: sort by creation time
 - UpdateTime: sort by update time
 - Name: sort by hotword lexicon name
 - WordCount: sort by the number of hotwords
 - HotwordsId: sort by hotword lexicon ID
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 0: temporary hotword; 1 file-based hotword.
                     */
                    std::vector<uint64_t> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTREQUEST_H_
