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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MAILCONFIGURATION_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MAILCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Email sending configuration.
                */
                class MailConfiguration : public AbstractModel
                {
                public:
                    MailConfiguration();
                    ~MailConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable email sending. Valid values: 0 (No), 1 (Yes).
                     * @return SendMail Whether to enable email sending. Valid values: 0 (No), 1 (Yes).
                     */
                    int64_t GetSendMail() const;

                    /**
                     * 设置Whether to enable email sending. Valid values: 0 (No), 1 (Yes).
                     * @param SendMail Whether to enable email sending. Valid values: 0 (No), 1 (Yes).
                     */
                    void SetSendMail(const int64_t& _sendMail);

                    /**
                     * 判断参数 SendMail 是否已赋值
                     * @return SendMail 是否已赋值
                     */
                    bool SendMailHasBeenSet() const;

                    /**
                     * 获取Region configuration, such as "ap-guangzhou", "ap-shanghai". For the inspection email sending template, configure the region where you need to send the inspection email. For the subscription email sending template, configure the region to which the current subscribed instance belongs.
                     * @return Region Region configuration, such as "ap-guangzhou", "ap-shanghai". For the inspection email sending template, configure the region where you need to send the inspection email. For the subscription email sending template, configure the region to which the current subscribed instance belongs.
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置Region configuration, such as "ap-guangzhou", "ap-shanghai". For the inspection email sending template, configure the region where you need to send the inspection email. For the subscription email sending template, configure the region to which the current subscribed instance belongs.
                     * @param Region Region configuration, such as "ap-guangzhou", "ap-shanghai". For the inspection email sending template, configure the region where you need to send the inspection email. For the subscription email sending template, configure the region to which the current subscribed instance belongs.
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Sending a report with the specified health level, such as "HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK".
                     * @return HealthStatus Sending a report with the specified health level, such as "HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK".
                     */
                    std::vector<std::string> GetHealthStatus() const;

                    /**
                     * 设置Sending a report with the specified health level, such as "HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK".
                     * @param HealthStatus Sending a report with the specified health level, such as "HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK".
                     */
                    void SetHealthStatus(const std::vector<std::string>& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Contact ID. Either `ContactGroup` or `ContactID` should be passed in.
                     * @return ContactPerson Contact ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    std::vector<int64_t> GetContactPerson() const;

                    /**
                     * 设置Contact ID. Either `ContactGroup` or `ContactID` should be passed in.
                     * @param ContactPerson Contact ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    void SetContactPerson(const std::vector<int64_t>& _contactPerson);

                    /**
                     * 判断参数 ContactPerson 是否已赋值
                     * @return ContactPerson 是否已赋值
                     */
                    bool ContactPersonHasBeenSet() const;

                    /**
                     * 获取Contact group ID. Either `ContactGroup` or `ContactID` should be passed in.
                     * @return ContactGroup Contact group ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    std::vector<int64_t> GetContactGroup() const;

                    /**
                     * 设置Contact group ID. Either `ContactGroup` or `ContactID` should be passed in.
                     * @param ContactGroup Contact group ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    void SetContactGroup(const std::vector<int64_t>& _contactGroup);

                    /**
                     * 判断参数 ContactGroup 是否已赋值
                     * @return ContactGroup 是否已赋值
                     */
                    bool ContactGroupHasBeenSet() const;

                private:

                    /**
                     * Whether to enable email sending. Valid values: 0 (No), 1 (Yes).
                     */
                    int64_t m_sendMail;
                    bool m_sendMailHasBeenSet;

                    /**
                     * Region configuration, such as "ap-guangzhou", "ap-shanghai". For the inspection email sending template, configure the region where you need to send the inspection email. For the subscription email sending template, configure the region to which the current subscribed instance belongs.
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Sending a report with the specified health level, such as "HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK".
                     */
                    std::vector<std::string> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Contact ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    std::vector<int64_t> m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * Contact group ID. Either `ContactGroup` or `ContactID` should be passed in.
                     */
                    std::vector<int64_t> m_contactGroup;
                    bool m_contactGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_MAILCONFIGURATION_H_
