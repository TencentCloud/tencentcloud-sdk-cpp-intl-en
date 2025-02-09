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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYMNPDOMAINREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYMNPDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/CreateDomainParam.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * ModifyMNPDomain request structure.
                */
                class ModifyMNPDomainRequest : public AbstractModel
                {
                public:
                    ModifyMNPDomainRequest();
                    ~ModifyMNPDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Domain list
                     * @return Domain Domain list
                     * 
                     */
                    std::vector<CreateDomainParam> GetDomain() const;

                    /**
                     * 设置Domain list
                     * @param _domain Domain list
                     * 
                     */
                    void SetDomain(const std::vector<CreateDomainParam>& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Domain list
                     */
                    std::vector<CreateDomainParam> m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYMNPDOMAINREQUEST_H_
