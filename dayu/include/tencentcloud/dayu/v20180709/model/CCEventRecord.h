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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CC attack event record
                */
                class CCEventRecord : public AbstractModel
                {
                public:
                    CCEventRecord();
                    ~CCEventRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Resource IP
                     * @return Vip Resource IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Resource IP
                     * @param _vip Resource IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Attack start time
                     * @return StartTime Attack start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Attack start time
                     * @param _startTime Attack start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Attack end time
                     * @return EndTime Attack end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Attack end time
                     * @param _endTime Attack end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Total requests peak (QPS)
                     * @return ReqQps Total requests peak (QPS)
                     * 
                     */
                    uint64_t GetReqQps() const;

                    /**
                     * 设置Total requests peak (QPS)
                     * @param _reqQps Total requests peak (QPS)
                     * 
                     */
                    void SetReqQps(const uint64_t& _reqQps);

                    /**
                     * 判断参数 ReqQps 是否已赋值
                     * @return ReqQps 是否已赋值
                     * 
                     */
                    bool ReqQpsHasBeenSet() const;

                    /**
                     * 获取Attack peak (QPS)
                     * @return DropQps Attack peak (QPS)
                     * 
                     */
                    uint64_t GetDropQps() const;

                    /**
                     * 设置Attack peak (QPS)
                     * @param _dropQps Attack peak (QPS)
                     * 
                     */
                    void SetDropQps(const uint64_t& _dropQps);

                    /**
                     * 判断参数 DropQps 是否已赋值
                     * @return DropQps 是否已赋值
                     * 
                     */
                    bool DropQpsHasBeenSet() const;

                    /**
                     * 获取Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * @return AttackStatus Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * @param _attackStatus Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     * 
                     */
                    void SetAttackStatus(const uint64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _resourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Domain name list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DomainList Domain name list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainList() const;

                    /**
                     * 设置Domain name list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domainList Domain name list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainList(const std::string& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取URI list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UriList URI list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUriList() const;

                    /**
                     * 设置URI list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uriList URI list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUriList(const std::string& _uriList);

                    /**
                     * 判断参数 UriList 是否已赋值
                     * @return UriList 是否已赋值
                     * 
                     */
                    bool UriListHasBeenSet() const;

                    /**
                     * 获取Attack source list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AttackipList Attack source list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackipList() const;

                    /**
                     * 设置Attack source list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _attackipList Attack source list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackipList(const std::string& _attackipList);

                    /**
                     * 判断参数 AttackipList 是否已赋值
                     * @return AttackipList 是否已赋值
                     * 
                     */
                    bool AttackipListHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (Single IP); `bgp-multip`: Anti-DDoS Pro (Multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Attack start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Attack end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Total requests peak (QPS)
                     */
                    uint64_t m_reqQps;
                    bool m_reqQpsHasBeenSet;

                    /**
                     * Attack peak (QPS)
                     */
                    uint64_t m_dropQps;
                    bool m_dropQpsHasBeenSet;

                    /**
                     * Attack status. Valid values: [0 (ongoing), 1 (ended)]
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Domain name list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * URI list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uriList;
                    bool m_uriListHasBeenSet;

                    /**
                     * Attack source list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackipList;
                    bool m_attackipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_
