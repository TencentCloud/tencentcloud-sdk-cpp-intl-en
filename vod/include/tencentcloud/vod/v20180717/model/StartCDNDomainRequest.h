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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STARTCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STARTCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * StartCDNDomain request structure.
                */
                class StartCDNDomainRequest : public AbstractModel
                {
                public:
                    StartCDNDomainRequest();
                    ~StartCDNDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取Domain name operation, value: <li>start: enable;</li> <li>stop: disable. </li>
                     * @return Operation Domain name operation, value: <li>start: enable;</li> <li>stop: disable. </li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Domain name operation, value: <li>start: enable;</li> <li>stop: disable. </li>
                     * @param _operation Domain name operation, value: <li>start: enable;</li> <li>stop: disable. </li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取VOD[Subapplication](/document/product/266/14574) ID。If you want to access resources in a Subapplication, fill this field with the Subapplication ID; otherwise, you don't need to fill in this field.
                     * @return SubAppId VOD[Subapplication](/document/product/266/14574) ID。If you want to access resources in a Subapplication, fill this field with the Subapplication ID; otherwise, you don't need to fill in this field.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD[Subapplication](/document/product/266/14574) ID。If you want to access resources in a Subapplication, fill this field with the Subapplication ID; otherwise, you don't need to fill in this field.
                     * @param _subAppId VOD[Subapplication](/document/product/266/14574) ID。If you want to access resources in a Subapplication, fill this field with the Subapplication ID; otherwise, you don't need to fill in this field.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain name operation, value: <li>start: enable;</li> <li>stop: disable. </li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * VOD[Subapplication](/document/product/266/14574) ID。If you want to access resources in a Subapplication, fill this field with the Subapplication ID; otherwise, you don't need to fill in this field.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STARTCDNDOMAINREQUEST_H_