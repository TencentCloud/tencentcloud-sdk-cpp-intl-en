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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETCRINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETCRINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTCRInstanceList request structure.
                */
                class DescribeTCRInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeTCRInstanceListRequest();
                    ~DescribeTCRInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Access key Id</p>
                     * @return AccessKey <p>Access key Id</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>Access key Id</p>
                     * @param _accessKey <p>Access key Id</p>
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>Access Key</p>
                     * @return SecretKey <p>Access Key</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>Access Key</p>
                     * @param _secretKey <p>Access Key</p>
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>region where the mirror repository is located</p>
                     * @return RegistryRegion <p>region where the mirror repository is located</p>
                     * 
                     */
                    std::vector<std::string> GetRegistryRegion() const;

                    /**
                     * 设置<p>region where the mirror repository is located</p>
                     * @param _registryRegion <p>region where the mirror repository is located</p>
                     * 
                     */
                    void SetRegistryRegion(const std::vector<std::string>& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository id</p>
                     * @return RegistryId <p>Mirror repository id</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>Mirror repository id</p>
                     * @param _registryId <p>Mirror repository id</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter item</p>
                     * @return Filter <p>Filter item</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>Filter item</p>
                     * @param _filter <p>Filter item</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Access key Id</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>Access Key</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>region where the mirror repository is located</p>
                     */
                    std::vector<std::string> m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Mirror repository id</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Filter item</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETCRINSTANCELISTREQUEST_H_
