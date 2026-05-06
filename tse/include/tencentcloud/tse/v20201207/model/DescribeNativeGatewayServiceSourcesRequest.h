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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeNativeGatewayServiceSources request structure.
                */
                class DescribeNativeGatewayServiceSourcesRequest : public AbstractModel
                {
                public:
                    DescribeNativeGatewayServiceSourcesRequest();
                    ~DescribeNativeGatewayServiceSourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayID Gateway instance ID
                     * 
                     */
                    std::string GetGatewayID() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayID Gateway instance ID
                     * 
                     */
                    void SetGatewayID(const std::string& _gatewayID);

                    /**
                     * 判断参数 GatewayID 是否已赋值
                     * @return GatewayID 是否已赋值
                     * 
                     */
                    bool GatewayIDHasBeenSet() const;

                    /**
                     * 获取Items per page. Maximum value: 100.
                     * @return Limit Items per page. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Items per page. Maximum value: 100.
                     * @param _limit Items per page. Maximum value: 100.
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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
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
                     * 获取Service Source ID
                     * @return SourceID Service Source ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置Service Source ID
                     * @param _sourceID Service Source ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取Service Source Instance Name, Fuzzy Search
                     * @return SourceName Service Source Instance Name, Fuzzy Search
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Service Source Instance Name, Fuzzy Search
                     * @param _sourceName Service Source Instance Name, Fuzzy Search
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Microservice engine type: TSE-Nacos｜TSE-Consul｜TSE-PolarisMesh｜Customer-Nacos｜Customer-Consul｜Customer-PolarisMesh
                     * @return SourceTypes Microservice engine type: TSE-Nacos｜TSE-Consul｜TSE-PolarisMesh｜Customer-Nacos｜Customer-Consul｜Customer-PolarisMesh
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置Microservice engine type: TSE-Nacos｜TSE-Consul｜TSE-PolarisMesh｜Customer-Nacos｜Customer-Consul｜Customer-PolarisMesh
                     * @param _sourceTypes Microservice engine type: TSE-Nacos｜TSE-Consul｜TSE-PolarisMesh｜Customer-Nacos｜Customer-Consul｜Customer-PolarisMesh
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取Sorting field data type, currently only support SourceName
                     * @return OrderField Sorting field data type, currently only support SourceName
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field data type, currently only support SourceName
                     * @param _orderField Sorting field data type, currently only support SourceName
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Sorting type, AES/DESC
                     * @return OrderType Sorting type, AES/DESC
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting type, AES/DESC
                     * @param _orderType Sorting type, AES/DESC
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayID;
                    bool m_gatewayIDHasBeenSet;

                    /**
                     * Items per page. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Service Source ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * Service Source Instance Name, Fuzzy Search
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Microservice engine type: TSE-Nacos｜TSE-Consul｜TSE-PolarisMesh｜Customer-Nacos｜Customer-Consul｜Customer-PolarisMesh
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * Sorting field data type, currently only support SourceName
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sorting type, AES/DESC
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESREQUEST_H_
