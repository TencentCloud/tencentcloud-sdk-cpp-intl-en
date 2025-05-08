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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessExchanges request structure.
                */
                class DescribeRabbitMQServerlessExchangesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessExchangesRequest();
                    ~DescribeRabbitMQServerlessExchangesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance id.
                     * @return InstanceId Instance id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id.
                     * @param _instanceId Instance id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the vhost parameter.
                     * @return VirtualHost Specifies the vhost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the vhost parameter.
                     * @param _virtualHost Specifies the vhost parameter.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Paging offset.
                     * @return Offset Paging offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging offset.
                     * @param _offset Paging offset.
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
                     * 获取Paginate limit.
                     * @return Limit Paginate limit.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Paginate limit.
                     * @param _limit Paginate limit.
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
                     * 获取Search keywords support fuzzy matching.
                     * @return SearchWord Search keywords support fuzzy matching.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search keywords support fuzzy matching.
                     * @param _searchWord Search keywords support fuzzy matching.
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取Specifies the filter type for each selected element in the array of exchange types.
                     * @return ExchangeTypeFilters Specifies the filter type for each selected element in the array of exchange types.
                     * 
                     */
                    std::vector<std::string> GetExchangeTypeFilters() const;

                    /**
                     * 设置Specifies the filter type for each selected element in the array of exchange types.
                     * @param _exchangeTypeFilters Specifies the filter type for each selected element in the array of exchange types.
                     * 
                     */
                    void SetExchangeTypeFilters(const std::vector<std::string>& _exchangeTypeFilters);

                    /**
                     * 判断参数 ExchangeTypeFilters 是否已赋值
                     * @return ExchangeTypeFilters 是否已赋值
                     * 
                     */
                    bool ExchangeTypeFiltersHasBeenSet() const;

                    /**
                     * 获取Specifies the exchange creation source. valid values: "system" (generated by the system), "user" (user-created).
                     * @return ExchangeCreatorFilters Specifies the exchange creation source. valid values: "system" (generated by the system), "user" (user-created).
                     * 
                     */
                    std::vector<std::string> GetExchangeCreatorFilters() const;

                    /**
                     * 设置Specifies the exchange creation source. valid values: "system" (generated by the system), "user" (user-created).
                     * @param _exchangeCreatorFilters Specifies the exchange creation source. valid values: "system" (generated by the system), "user" (user-created).
                     * 
                     */
                    void SetExchangeCreatorFilters(const std::vector<std::string>& _exchangeCreatorFilters);

                    /**
                     * 判断参数 ExchangeCreatorFilters 是否已赋值
                     * @return ExchangeCreatorFilters 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorFiltersHasBeenSet() const;

                    /**
                     * 获取exchange name. specifies that it is used for exact matching.
                     * @return ExchangeName exchange name. specifies that it is used for exact matching.
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange name. specifies that it is used for exact matching.
                     * @param _exchangeName exchange name. specifies that it is used for exact matching.
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取Sorting field.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * @return SortElement Sorting field.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sorting field.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * @param _sortElement Sorting field.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取Sort order. valid values: ascend or descend.
                     * @return SortOrder Sort order. valid values: ascend or descend.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sort order. valid values: ascend or descend.
                     * @param _sortOrder Sort order. valid values: ascend or descend.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * Instance id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the vhost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Paging offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginate limit.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords support fuzzy matching.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Specifies the filter type for each selected element in the array of exchange types.
                     */
                    std::vector<std::string> m_exchangeTypeFilters;
                    bool m_exchangeTypeFiltersHasBeenSet;

                    /**
                     * Specifies the exchange creation source. valid values: "system" (generated by the system), "user" (user-created).
                     */
                    std::vector<std::string> m_exchangeCreatorFilters;
                    bool m_exchangeCreatorFiltersHasBeenSet;

                    /**
                     * exchange name. specifies that it is used for exact matching.
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * Sorting field.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sort order. valid values: ascend or descend.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_
