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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddCustomWhiteRule request structure.
                */
                class AddCustomWhiteRuleRequest : public AbstractModel
                {
                public:
                    AddCustomWhiteRuleRequest();
                    ~AddCustomWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return SortId Priority
                     * 
                     */
                    std::string GetSortId() const;

                    /**
                     * 设置Priority
                     * @param _sortId Priority
                     * 
                     */
                    void SetSortId(const std::string& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Policy details
                     * @return Strategies Policy details
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置Policy details
                     * @param _strategies Policy details
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取Domain name for adding policy
                     * @return Domain Domain name for adding policy
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name for adding policy
                     * @param _domain Domain name for adding policy
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
                     * 获取Details of release
                     * @return Bypass Details of release
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置Details of release
                     * @param _bypass Details of release
                     * 
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取Scheduled task type
                     * @return JobType Scheduled task type
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled task type
                     * @param _jobType Scheduled task type
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Scheduled task configuration
                     * @return JobDateTime Scheduled task configuration
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Scheduled task configuration
                     * @param _jobDateTime Scheduled task configuration
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Priority
                     */
                    std::string m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Policy details
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Domain name for adding policy
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Details of release
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * Scheduled task type
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Scheduled task configuration
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULEREQUEST_H_
