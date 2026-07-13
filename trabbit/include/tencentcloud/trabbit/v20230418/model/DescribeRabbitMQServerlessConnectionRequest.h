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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_

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
                * DescribeRabbitMQServerlessConnection request structure.
                */
                class DescribeRabbitMQServerlessConnectionRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessConnectionRequest();
                    ~DescribeRabbitMQServerlessConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取instance ID		
                     * @return InstanceId instance ID		
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instance ID		
                     * @param _instanceId instance ID		
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
                     * 获取Specifies the vhost name.
                     * @return VirtualHost Specifies the vhost name.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the vhost name.
                     * @param _virtualHost Specifies the vhost name.
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
                     * 获取Sort by which field. Supported values: channel (number of channels), incoming_bytes (inbound traffic volume), outgoing_bytes (outbound traffic volume).
                     * @return SortElement Sort by which field. Supported values: channel (number of channels), incoming_bytes (inbound traffic volume), outgoing_bytes (outbound traffic volume).
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sort by which field. Supported values: channel (number of channels), incoming_bytes (inbound traffic volume), outgoing_bytes (outbound traffic volume).
                     * @param _sortElement Sort by which field. Supported values: channel (number of channels), incoming_bytes (inbound traffic volume), outgoing_bytes (outbound traffic volume).
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
                     * 获取Sorting method: ASC, DESC
                     * @return SortType Sorting method: ASC, DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting method: ASC, DESC
                     * @param _sortType Sorting method: ASC, DESC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Pagination parameters, started from which data entry
                     * @return Offset Pagination parameters, started from which data entry
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters, started from which data entry
                     * @param _offset Pagination parameters, started from which data entry
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
                     * 获取Page size.
                     * @return Limit Page size.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size.
                     * @param _limit Page size.
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
                     * 获取Connection name fuzzy search
                     * @return Name Connection name fuzzy search
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Connection name fuzzy search
                     * @param _name Connection name fuzzy search
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * instance ID		
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the vhost name.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Sort by which field. Supported values: channel (number of channels), incoming_bytes (inbound traffic volume), outgoing_bytes (outbound traffic volume).
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sorting method: ASC, DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Pagination parameters, started from which data entry
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Connection name fuzzy search
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
