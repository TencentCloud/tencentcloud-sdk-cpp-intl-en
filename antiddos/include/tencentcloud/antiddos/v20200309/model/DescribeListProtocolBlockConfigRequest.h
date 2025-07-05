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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTOCOLBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTOCOLBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListProtocolBlockConfig request structure.
                */
                class DescribeListProtocolBlockConfigRequest : public AbstractModel
                {
                public:
                    DescribeListProtocolBlockConfigRequest();
                    ~DescribeListProtocolBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param _offset Starting offset of the page. Value: (number of pages – 1) * items per page.
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
                     * 获取Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @return Limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @param _limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
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
                     * 获取Anti-DDoS instance ID filter. Anti-DDoS instance prefix wildcard search is supported. For example, you can filter Anti-DDoS Pro instances by `bgp-*`.
                     * @return FilterInstanceId Anti-DDoS instance ID filter. Anti-DDoS instance prefix wildcard search is supported. For example, you can filter Anti-DDoS Pro instances by `bgp-*`.
                     * 
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID filter. Anti-DDoS instance prefix wildcard search is supported. For example, you can filter Anti-DDoS Pro instances by `bgp-*`.
                     * @param _filterInstanceId Anti-DDoS instance ID filter. Anti-DDoS instance prefix wildcard search is supported. For example, you can filter Anti-DDoS Pro instances by `bgp-*`.
                     * 
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     * 
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取IP filter
                     * @return FilterIp IP filter
                     * 
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置IP filter
                     * @param _filterIp IP filter
                     * 
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     * 
                     */
                    bool FilterIpHasBeenSet() const;

                private:

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Anti-DDoS instance ID filter. Anti-DDoS instance prefix wildcard search is supported. For example, you can filter Anti-DDoS Pro instances by `bgp-*`.
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * IP filter
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTPROTOCOLBLOCKCONFIGREQUEST_H_
