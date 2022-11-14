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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSourceAsset request structure.
                */
                class DescribeSourceAssetRequest : public AbstractModel
                {
                public:
                    DescribeSourceAssetRequest();
                    ~DescribeSourceAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Fuzzy search
                     * @return FuzzySearch Fuzzy search
                     */
                    std::string GetFuzzySearch() const;

                    /**
                     * 设置Fuzzy search
                     * @param FuzzySearch Fuzzy search
                     */
                    void SetFuzzySearch(const std::string& _fuzzySearch);

                    /**
                     * 判断参数 FuzzySearch 是否已赋值
                     * @return FuzzySearch 是否已赋值
                     */
                    bool FuzzySearchHasBeenSet() const;

                    /**
                     * 获取Asset type. 1: public network; 2: private network
                     * @return InsType Asset type. 1: public network; 2: private network
                     */
                    std::string GetInsType() const;

                    /**
                     * 设置Asset type. 1: public network; 2: private network
                     * @param InsType Asset type. 1: public network; 2: private network
                     */
                    void SetInsType(const std::string& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取If ChooseType is 1, grouped assets are queried; if ChooseType is not 1, non-grouped assets are queried
                     * @return ChooseType If ChooseType is 1, grouped assets are queried; if ChooseType is not 1, non-grouped assets are queried
                     */
                    std::string GetChooseType() const;

                    /**
                     * 设置If ChooseType is 1, grouped assets are queried; if ChooseType is not 1, non-grouped assets are queried
                     * @param ChooseType If ChooseType is 1, grouped assets are queried; if ChooseType is not 1, non-grouped assets are queried
                     */
                    void SetChooseType(const std::string& _chooseType);

                    /**
                     * 判断参数 ChooseType 是否已赋值
                     * @return ChooseType 是否已赋值
                     */
                    bool ChooseTypeHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Zone Region
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
                     * @param Zone Region
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Maximum number of results returned per page. For example, if it is set to 10, 10 results will be returned at most.
                     * @return Limit Maximum number of results returned per page. For example, if it is set to 10, 10 results will be returned at most.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of results returned per page. For example, if it is set to 10, 10 results will be returned at most.
                     * @param Limit Maximum number of results returned per page. For example, if it is set to 10, 10 results will be returned at most.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset of search results
                     * @return Offset Offset of search results
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of search results
                     * @param Offset Offset of search results
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Fuzzy search
                     */
                    std::string m_fuzzySearch;
                    bool m_fuzzySearchHasBeenSet;

                    /**
                     * Asset type. 1: public network; 2: private network
                     */
                    std::string m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * If ChooseType is 1, grouped assets are queried; if ChooseType is not 1, non-grouped assets are queried
                     */
                    std::string m_chooseType;
                    bool m_chooseTypeHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Maximum number of results returned per page. For example, if it is set to 10, 10 results will be returned at most.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset of search results
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETREQUEST_H_
