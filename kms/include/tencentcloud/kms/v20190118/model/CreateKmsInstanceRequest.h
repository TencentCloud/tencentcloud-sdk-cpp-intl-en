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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKMSINSTANCEREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKMSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/InstanceChargePrepaid.h>
#include <tencentcloud/kms/v20190118/model/Tag.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateKmsInstance request structure.
                */
                class CreateKmsInstanceRequest : public AbstractModel
                {
                public:
                    CreateKmsInstanceRequest();
                    ~CreateKmsInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance billing type (PREPAID).</p>
                     * @return InstanceChargeType <p>Instance billing type (PREPAID).</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type (PREPAID).</p>
                     * @param _instanceChargeType <p>Instance billing type (PREPAID).</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Version type.</p><p>Valid values:</p><ul><li>professional: Professional Edition</li></ul>
                     * @return ProductVersion <p>Version type.</p><p>Valid values:</p><ul><li>professional: Professional Edition</li></ul>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>Version type.</p><p>Valid values:</p><ul><li>professional: Professional Edition</li></ul>
                     * @param _productVersion <p>Version type.</p><p>Valid values:</p><ul><li>professional: Professional Edition</li></ul>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>Prepaid instance information.</p>
                     * @return InstanceChargePrepaid <p>Prepaid instance information.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid instance information.</p>
                     * @param _instanceChargePrepaid <p>Prepaid instance information.</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>Reentrant client ID.</p>
                     * @return ClientToken <p>Reentrant client ID.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Reentrant client ID.</p>
                     * @param _clientToken <p>Reentrant client ID.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag.</p>
                     * @return Tags <p>Instance tag.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Instance tag.</p>
                     * @param _tags <p>Instance tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance billing type (PREPAID).</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Version type.</p><p>Valid values:</p><ul><li>professional: Professional Edition</li></ul>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>Prepaid instance information.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>Reentrant client ID.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Instance tag.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKMSINSTANCEREQUEST_H_
