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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEBILLINGDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEBILLINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CdnData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Billing data details
                */
                class ResourceBillingData : public AbstractModel
                {
                public:
                    ResourceBillingData();
                    ~ResourceBillingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name, which is classified as follows based on different query filters:
When a domain name is specified: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
A specific project ID: ID of the specifically queried project
`all`: Details at the account level
                     * @return Resource Resource name, which is classified as follows based on different query filters:
When a domain name is specified: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
A specific project ID: ID of the specifically queried project
`all`: Details at the account level
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource name, which is classified as follows based on different query filters:
When a domain name is specified: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
A specific project ID: ID of the specifically queried project
`all`: Details at the account level
                     * @param _resource Resource name, which is classified as follows based on different query filters:
When a domain name is specified: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
A specific project ID: ID of the specifically queried project
`all`: Details at the account level
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Billing data details
                     * @return BillingData Billing data details
                     * 
                     */
                    std::vector<CdnData> GetBillingData() const;

                    /**
                     * 设置Billing data details
                     * @param _billingData Billing data details
                     * 
                     */
                    void SetBillingData(const std::vector<CdnData>& _billingData);

                    /**
                     * 判断参数 BillingData 是否已赋值
                     * @return BillingData 是否已赋值
                     * 
                     */
                    bool BillingDataHasBeenSet() const;

                private:

                    /**
                     * Resource name, which is classified as follows based on different query filters:
When a domain name is specified: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
A specific project ID: ID of the specifically queried project
`all`: Details at the account level
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Billing data details
                     */
                    std::vector<CdnData> m_billingData;
                    bool m_billingDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEBILLINGDATA_H_
