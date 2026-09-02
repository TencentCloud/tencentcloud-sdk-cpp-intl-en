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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmDictionaryList request structure.
                */
                class DescribeDspmDictionaryListRequest : public AbstractModel
                {
                public:
                    DescribeDspmDictionaryListRequest();
                    ~DescribeDspmDictionaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Dictionary type (RootCategory: level-1 category, IdentifyRule: sensitive identification data item)</p>
                     * @return DictType <p>Dictionary type (RootCategory: level-1 category, IdentifyRule: sensitive identification data item)</p>
                     * 
                     */
                    std::string GetDictType() const;

                    /**
                     * 设置<p>Dictionary type (RootCategory: level-1 category, IdentifyRule: sensitive identification data item)</p>
                     * @param _dictType <p>Dictionary type (RootCategory: level-1 category, IdentifyRule: sensitive identification data item)</p>
                     * 
                     */
                    void SetDictType(const std::string& _dictType);

                    /**
                     * 判断参数 DictType 是否已赋值
                     * @return DictType 是否已赋值
                     * 
                     */
                    bool DictTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria</p>
                     * @return Filters <p>Filter criteria</p>
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria</p>
                     * @param _filters <p>Filter criteria</p>
                     * 
                     */
                    void SetFilters(const std::vector<WhereFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Operation source: null/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @return OperationSource <p>Operation source: null/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    std::string GetOperationSource() const;

                    /**
                     * 设置<p>Operation source: null/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @param _operationSource <p>Operation source: null/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    void SetOperationSource(const std::string& _operationSource);

                    /**
                     * 判断参数 OperationSource 是否已赋值
                     * @return OperationSource 是否已赋值
                     * 
                     */
                    bool OperationSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Dictionary type (RootCategory: level-1 category, IdentifyRule: sensitive identification data item)</p>
                     */
                    std::string m_dictType;
                    bool m_dictTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter criteria</p>
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Operation source: null/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMDICTIONARYLISTREQUEST_H_
