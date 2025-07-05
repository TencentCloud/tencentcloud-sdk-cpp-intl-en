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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_

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
                * DescribeAsrHotwords request structure.
                */
                class DescribeAsrHotwordsRequest : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsRequest();
                    ~DescribeAsrHotwordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the hotword lexicon to be queried.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * @return HotwordsId ID of the hotword lexicon to be queried.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置ID of the hotword lexicon to be queried.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * @param _hotwordsId ID of the hotword lexicon to be queried.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
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
                     * 获取Hotword lexicon name.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * @return Name Hotword lexicon name.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Hotword lexicon name.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     * @param _name Hotword lexicon name.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
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
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
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
                     * 获取Hotword sorting field. Valid values:

 - Default: Sort by the hotword upload sequence.
 - Weight: Sort by the weight.
 - Lexical: Sort by the first letter of hotwords.
                     * @return OrderBy Hotword sorting field. Valid values:

 - Default: Sort by the hotword upload sequence.
 - Weight: Sort by the weight.
 - Lexical: Sort by the first letter of hotwords.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Hotword sorting field. Valid values:

 - Default: Sort by the hotword upload sequence.
 - Weight: Sort by the weight.
 - Lexical: Sort by the first letter of hotwords.
                     * @param _orderBy Hotword sorting field. Valid values:

 - Default: Sort by the hotword upload sequence.
 - Weight: Sort by the weight.
 - Lexical: Sort by the first letter of hotwords.
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
                     * 获取Hotword sorting order. 0: ascending (default); 1: descending.
                     * @return OrderType Hotword sorting order. 0: ascending (default); 1: descending.
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置Hotword sorting order. 0: ascending (default); 1: descending.
                     * @param _orderType Hotword sorting order. 0: ascending (default); 1: descending.
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the hotword lexicon to be queried.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * Hotword lexicon name.
**Note: Either HotwordsId or Name should be specified. If both are specified, HotwordsId has a higher priority than Name.**
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.


                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Hotword sorting field. Valid values:

 - Default: Sort by the hotword upload sequence.
 - Weight: Sort by the weight.
 - Lexical: Sort by the first letter of hotwords.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Hotword sorting order. 0: ascending (default); 1: descending.
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSREQUEST_H_
