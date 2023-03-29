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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFOREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BatchModifyIntlDomainInfo request structure.
                */
                class BatchModifyIntlDomainInfoRequest : public AbstractModel
                {
                public:
                    BatchModifyIntlDomainInfoRequest();
                    ~BatchModifyIntlDomainInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domains whose information is to be modified.
                     * @return Domains The domains whose information is to be modified.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domains whose information is to be modified.
                     * @param Domains The domains whose information is to be modified.
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取The profile ID.
                     * @return TemplateId The profile ID.
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The profile ID.
                     * @param TemplateId The profile ID.
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the 60-day inter-registrar transfer lock.
                     * @return LockTransfer Whether to enable the 60-day inter-registrar transfer lock.
                     */
                    bool GetLockTransfer() const;

                    /**
                     * 设置Whether to enable the 60-day inter-registrar transfer lock.
                     * @param LockTransfer Whether to enable the 60-day inter-registrar transfer lock.
                     */
                    void SetLockTransfer(const bool& _lockTransfer);

                    /**
                     * 判断参数 LockTransfer 是否已赋值
                     * @return LockTransfer 是否已赋值
                     */
                    bool LockTransferHasBeenSet() const;

                private:

                    /**
                     * The domains whose information is to be modified.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The profile ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Whether to enable the 60-day inter-registrar transfer lock.
                     */
                    bool m_lockTransfer;
                    bool m_lockTransferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFOREQUEST_H_
