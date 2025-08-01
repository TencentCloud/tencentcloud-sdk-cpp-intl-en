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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SubdomainAnalyticsInfo.h>
#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsDetail.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DNS query volume of the subdomain alias
                */
                class SubdomainAliasAnalyticsItem : public AbstractModel
                {
                public:
                    SubdomainAliasAnalyticsItem();
                    ~SubdomainAliasAnalyticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistics on the DNS query volume of a subdomain
                     * @return Info Statistics on the DNS query volume of a subdomain
                     * 
                     */
                    SubdomainAnalyticsInfo GetInfo() const;

                    /**
                     * 设置Statistics on the DNS query volume of a subdomain
                     * @param _info Statistics on the DNS query volume of a subdomain
                     * 
                     */
                    void SetInfo(const SubdomainAnalyticsInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取DNS query volume in the current statistical dimension
                     * @return Data DNS query volume in the current statistical dimension
                     * 
                     */
                    std::vector<DomainAnalyticsDetail> GetData() const;

                    /**
                     * 设置DNS query volume in the current statistical dimension
                     * @param _data DNS query volume in the current statistical dimension
                     * 
                     */
                    void SetData(const std::vector<DomainAnalyticsDetail>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Statistics on the DNS query volume of a subdomain
                     */
                    SubdomainAnalyticsInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * DNS query volume in the current statistical dimension
                     */
                    std::vector<DomainAnalyticsDetail> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINALIASANALYTICSITEM_H_
