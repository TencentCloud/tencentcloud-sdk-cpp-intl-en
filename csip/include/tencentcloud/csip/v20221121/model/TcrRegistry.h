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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TCRREGISTRY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TCRREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * TCR repository instance.
                */
                class TcrRegistry : public AbstractModel
                {
                public:
                    TcrRegistry();
                    ~TcrRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Repository instance id</p>
                     * @return RegistryId <p>Repository instance id</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>Repository instance id</p>
                     * @param _registryId <p>Repository instance id</p>
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
                     * 获取<p>Warehouse name</p>
                     * @return RegistryName <p>Warehouse name</p>
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置<p>Warehouse name</p>
                     * @param _registryName <p>Warehouse name</p>
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取<p>Repository domain.</p>
                     * @return PublicDomain <p>Repository domain.</p>
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置<p>Repository domain.</p>
                     * @param _publicDomain <p>Repository domain.</p>
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取<p>region where the repository is located</p>
                     * @return RegistryRegion <p>region where the repository is located</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>region where the repository is located</p>
                     * @param _registryRegion <p>region where the repository is located</p>
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>Repository id</p>
                     * @return RegistryRegionId <p>Repository id</p>
                     * 
                     */
                    uint64_t GetRegistryRegionId() const;

                    /**
                     * 设置<p>Repository id</p>
                     * @param _registryRegionId <p>Repository id</p>
                     * 
                     */
                    void SetRegistryRegionId(const uint64_t& _registryRegionId);

                    /**
                     * 判断参数 RegistryRegionId 是否已赋值
                     * @return RegistryRegionId 是否已赋值
                     * 
                     */
                    bool RegistryRegionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Repository instance id</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Warehouse name</p>
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * <p>Repository domain.</p>
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * <p>region where the repository is located</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Repository id</p>
                     */
                    uint64_t m_registryRegionId;
                    bool m_registryRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TCRREGISTRY_H_
