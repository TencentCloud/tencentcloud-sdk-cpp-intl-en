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
                     * 获取Sort by which field. Supported options: channel (channel count), incoming_bytes (inbound traffic size), outgoing_bytes (outbound traffic size)
                     * @return SortElement Sort by which field. Supported options: channel (channel count), incoming_bytes (inbound traffic size), outgoing_bytes (outbound traffic size)
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sort by which field. Supported options: channel (channel count), incoming_bytes (inbound traffic size), outgoing_bytes (outbound traffic size)
                     * @param _sortElement Sort by which field. Supported options: channel (channel count), incoming_bytes (inbound traffic size), outgoing_bytes (outbound traffic size)
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
                     * 获取Sort order: ASC, DESC
                     * @return SortType Sort order: ASC, DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sort order: ASC, DESC
                     * @param _sortType Sort order: ASC, DESC
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
                     * 获取
                     * @return Offset 
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
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
                     * 获取
                     * @return Limit 
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置
                     * @param _limit 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * Sort by which field. Supported options: channel (channel count), incoming_bytes (inbound traffic size), outgoing_bytes (outbound traffic size)
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sort order: ASC, DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSCONNECTIONREQUEST_H_
