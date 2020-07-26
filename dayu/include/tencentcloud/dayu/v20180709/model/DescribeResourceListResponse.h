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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeResourceList response structure.
                */
                class DescribeResourceListResponse : public AbstractModel
                {
                public:
                    DescribeResourceListResponse();
                    ~DescribeResourceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total number of records
                     * @return Total Total number of records
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Resource record list. Valid values of `key`:
"Key": "CreateTime" - resource instance purchase time
"Key": "Region" - resource instance region
"Key": "BoundIP" - IP bound to single IP instance
"Key": "Id" - resource instance ID
"Key": "CCEnabled" - CC protection status of resource instance
"Key": "DDoSThreshold" - DDoS cleansing threshold of resource instance	
"Key": "BoundStatus" - IP binding status of single IP instance or multi-IP instance (binding or bound)
"Key": "Type" - this field has been disused
"Key": "ElasticLimit" - elastic protection value of resource instance
"Key": "DDoSAI" - DDoS AI protection status of resource instance
"Key": "Bandwidth" - base protection value of resource instance
"Key": "OverloadCount" - number of attacks to the resource instance that exceed the elastic protection value
"Key": "Status" - resource instance status (idle: running, attacking: attacking, blocking: blocking, isolate: isolating)
"Key": "Lbid" - this field has been disused
"Key": "ShowFlag" - this field has been disused
"Key": "Expire" - resource instance expiration time
"Key": "CCThreshold" - CC protection triggering threshold of resource instance
"Key": "AutoRenewFlag" - auto-renewal flag of resource instance
"Key": "IspCode" - line of single IP instance or multi-IP instance (0: China Telecom, 1: China Unicom, 2: China Mobile, 5: BGP)
"Key": "PackType" - package type
"Key": "PackId" - package ID
"Key": "Name" - resource instance name
"Key": "Locked" - this field has been disused
"Key": "IpDDoSLevel" - protection level of resource instance (low: loose, middle: normal, high: strict)
"Key": "DefendStatus" - DDoS protection status of resource (enabled or temporarily disabled)
"Key": "UndefendExpire" - end time of temporary disablement of DDoS protection for resource instance
"Key": "Tgw" - whether the resource instance is a new resource
                     * @return ServicePacks Resource record list. Valid values of `key`:
"Key": "CreateTime" - resource instance purchase time
"Key": "Region" - resource instance region
"Key": "BoundIP" - IP bound to single IP instance
"Key": "Id" - resource instance ID
"Key": "CCEnabled" - CC protection status of resource instance
"Key": "DDoSThreshold" - DDoS cleansing threshold of resource instance	
"Key": "BoundStatus" - IP binding status of single IP instance or multi-IP instance (binding or bound)
"Key": "Type" - this field has been disused
"Key": "ElasticLimit" - elastic protection value of resource instance
"Key": "DDoSAI" - DDoS AI protection status of resource instance
"Key": "Bandwidth" - base protection value of resource instance
"Key": "OverloadCount" - number of attacks to the resource instance that exceed the elastic protection value
"Key": "Status" - resource instance status (idle: running, attacking: attacking, blocking: blocking, isolate: isolating)
"Key": "Lbid" - this field has been disused
"Key": "ShowFlag" - this field has been disused
"Key": "Expire" - resource instance expiration time
"Key": "CCThreshold" - CC protection triggering threshold of resource instance
"Key": "AutoRenewFlag" - auto-renewal flag of resource instance
"Key": "IspCode" - line of single IP instance or multi-IP instance (0: China Telecom, 1: China Unicom, 2: China Mobile, 5: BGP)
"Key": "PackType" - package type
"Key": "PackId" - package ID
"Key": "Name" - resource instance name
"Key": "Locked" - this field has been disused
"Key": "IpDDoSLevel" - protection level of resource instance (low: loose, middle: normal, high: strict)
"Key": "DefendStatus" - DDoS protection status of resource (enabled or temporarily disabled)
"Key": "UndefendExpire" - end time of temporary disablement of DDoS protection for resource instance
"Key": "Tgw" - whether the resource instance is a new resource
                     */
                    std::vector<KeyValueRecord> GetServicePacks() const;

                    /**
                     * 判断参数 ServicePacks 是否已赋值
                     * @return ServicePacks 是否已赋值
                     */
                    bool ServicePacksHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     * @return Business Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * Total number of records
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Resource record list. Valid values of `key`:
"Key": "CreateTime" - resource instance purchase time
"Key": "Region" - resource instance region
"Key": "BoundIP" - IP bound to single IP instance
"Key": "Id" - resource instance ID
"Key": "CCEnabled" - CC protection status of resource instance
"Key": "DDoSThreshold" - DDoS cleansing threshold of resource instance	
"Key": "BoundStatus" - IP binding status of single IP instance or multi-IP instance (binding or bound)
"Key": "Type" - this field has been disused
"Key": "ElasticLimit" - elastic protection value of resource instance
"Key": "DDoSAI" - DDoS AI protection status of resource instance
"Key": "Bandwidth" - base protection value of resource instance
"Key": "OverloadCount" - number of attacks to the resource instance that exceed the elastic protection value
"Key": "Status" - resource instance status (idle: running, attacking: attacking, blocking: blocking, isolate: isolating)
"Key": "Lbid" - this field has been disused
"Key": "ShowFlag" - this field has been disused
"Key": "Expire" - resource instance expiration time
"Key": "CCThreshold" - CC protection triggering threshold of resource instance
"Key": "AutoRenewFlag" - auto-renewal flag of resource instance
"Key": "IspCode" - line of single IP instance or multi-IP instance (0: China Telecom, 1: China Unicom, 2: China Mobile, 5: BGP)
"Key": "PackType" - package type
"Key": "PackId" - package ID
"Key": "Name" - resource instance name
"Key": "Locked" - this field has been disused
"Key": "IpDDoSLevel" - protection level of resource instance (low: loose, middle: normal, high: strict)
"Key": "DefendStatus" - DDoS protection status of resource (enabled or temporarily disabled)
"Key": "UndefendExpire" - end time of temporary disablement of DDoS protection for resource instance
"Key": "Tgw" - whether the resource instance is a new resource
                     */
                    std::vector<KeyValueRecord> m_servicePacks;
                    bool m_servicePacksHasBeenSet;

                    /**
                     * Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_
