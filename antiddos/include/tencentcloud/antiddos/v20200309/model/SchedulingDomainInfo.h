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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IPLineInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Scheduling domain name details
                */
                class SchedulingDomainInfo : public AbstractModel
                {
                public:
                    SchedulingDomainInfo();
                    ~SchedulingDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduling domain name
                     * @return Domain Scheduling domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Scheduling domain name
                     * @param _domain Scheduling domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取List of line IPs
                     * @return LineIPList List of line IPs
                     * 
                     */
                    std::vector<IPLineInfo> GetLineIPList() const;

                    /**
                     * 设置List of line IPs
                     * @param _lineIPList List of line IPs
                     * 
                     */
                    void SetLineIPList(const std::vector<IPLineInfo>& _lineIPList);

                    /**
                     * 判断参数 LineIPList 是否已赋值
                     * @return LineIPList 是否已赋值
                     * 
                     */
                    bool LineIPListHasBeenSet() const;

                    /**
                     * 获取Scheduling mode. Valid value: `priority` (priority scheduling).
                     * @return Method Scheduling mode. Valid value: `priority` (priority scheduling).
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Scheduling mode. Valid value: `priority` (priority scheduling).
                     * @param _method Scheduling mode. Valid value: `priority` (priority scheduling).
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取TTL value recorded from the scheduling domain name resolution
                     * @return TTL TTL value recorded from the scheduling domain name resolution
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL value recorded from the scheduling domain name resolution
                     * @param _tTL TTL value recorded from the scheduling domain name resolution
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Running status. Valid values:
`0`: not running
`1`: running
`2`: abnormal
]
                     * @return Status Running status. Valid values:
`0`: not running
`1`: running
`2`: abnormal
]
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Running status. Valid values:
`0`: not running
`1`: running
`2`: abnormal
]
                     * @param _status Running status. Valid values:
`0`: not running
`1`: running
`2`: abnormal
]
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time
                     * @return ModifyTime Last modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modification time
                     * @param _modifyTime Last modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UsrDomainName Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUsrDomainName() const;

                    /**
                     * 设置Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _usrDomainName Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUsrDomainName(const std::string& _usrDomainName);

                    /**
                     * 判断参数 UsrDomainName 是否已赋值
                     * @return UsrDomainName 是否已赋值
                     * 
                     */
                    bool UsrDomainNameHasBeenSet() const;

                private:

                    /**
                     * Scheduling domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of line IPs
                     */
                    std::vector<IPLineInfo> m_lineIPList;
                    bool m_lineIPListHasBeenSet;

                    /**
                     * Scheduling mode. Valid value: `priority` (priority scheduling).
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * TTL value recorded from the scheduling domain name resolution
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Running status. Valid values:
`0`: not running
`1`: running
`2`: abnormal
]
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_usrDomainName;
                    bool m_usrDomainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_
