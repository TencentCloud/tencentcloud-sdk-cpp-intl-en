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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYSSLENCRYPTIONMODEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYSSLENCRYPTIONMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifySSLEncryptionMode request structure.
                */
                class ModifySSLEncryptionModeRequest : public AbstractModel
                {
                public:
                    ModifySSLEncryptionModeRequest();
                    ~ModifySSLEncryptionModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul>
                     * @return EncryptionMode <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul>
                     * 
                     */
                    std::string GetEncryptionMode() const;

                    /**
                     * 设置<p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul>
                     * @param _encryptionMode <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul>
                     * 
                     */
                    void SetEncryptionMode(const std::string& _encryptionMode);

                    /**
                     * 判断参数 EncryptionMode 是否已赋值
                     * @return EncryptionMode 是否已赋值
                     * 
                     */
                    bool EncryptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul>
                     */
                    std::string m_encryptionMode;
                    bool m_encryptionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYSSLENCRYPTIONMODEREQUEST_H_
