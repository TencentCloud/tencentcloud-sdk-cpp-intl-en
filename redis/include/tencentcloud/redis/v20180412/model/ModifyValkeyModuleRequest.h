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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_

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
                * ModifyValkeyModule request structure.
                */
                class ModifyValkeyModuleRequest : public AbstractModel
                {
                public:
                    ModifyValkeyModuleRequest();
                    ~ModifyValkeyModuleRequest() = default;
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
                     * 获取<p>Specify the extension module to be modified.</p><p>Enumeration values:</p><ul><li>ValkeyBloom: Refers to the Bloom module, which can efficiently judge whether an element exists in a collection.</li><li>ValkeyJSON: Refers to the JSON module, which allows Redis to natively support the JSON data format, facilitating the storage and manipulation of JSON Objects.</li><li>ValkeySearch: Refers to the Search module, which provides a full-text search feature, enabling efficient search operations on data stored in Redis.</li></ul>
                     * @return Name <p>Specify the extension module to be modified.</p><p>Enumeration values:</p><ul><li>ValkeyBloom: Refers to the Bloom module, which can efficiently judge whether an element exists in a collection.</li><li>ValkeyJSON: Refers to the JSON module, which allows Redis to natively support the JSON data format, facilitating the storage and manipulation of JSON Objects.</li><li>ValkeySearch: Refers to the Search module, which provides a full-text search feature, enabling efficient search operations on data stored in Redis.</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Specify the extension module to be modified.</p><p>Enumeration values:</p><ul><li>ValkeyBloom: Refers to the Bloom module, which can efficiently judge whether an element exists in a collection.</li><li>ValkeyJSON: Refers to the JSON module, which allows Redis to natively support the JSON data format, facilitating the storage and manipulation of JSON Objects.</li><li>ValkeySearch: Refers to the Search module, which provides a full-text search feature, enabling efficient search operations on data stored in Redis.</li></ul>
                     * @param _name <p>Specify the extension module to be modified.</p><p>Enumeration values:</p><ul><li>ValkeyBloom: Refers to the Bloom module, which can efficiently judge whether an element exists in a collection.</li><li>ValkeyJSON: Refers to the JSON module, which allows Redis to natively support the JSON data format, facilitating the storage and manipulation of JSON Objects.</li><li>ValkeySearch: Refers to the Search module, which provides a full-text search feature, enabling efficient search operations on data stored in Redis.</li></ul>
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
                     * 获取<p>Set the enable status of the extension module. Only support setting to ON to enable the extension module.</p>
                     * @return Status <p>Set the enable status of the extension module. Only support setting to ON to enable the extension module.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Set the enable status of the extension module. Only support setting to ON to enable the extension module.</p>
                     * @param _status <p>Set the enable status of the extension module. Only support setting to ON to enable the extension module.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Specify the extension module to be modified.</p><p>Enumeration values:</p><ul><li>ValkeyBloom: Refers to the Bloom module, which can efficiently judge whether an element exists in a collection.</li><li>ValkeyJSON: Refers to the JSON module, which allows Redis to natively support the JSON data format, facilitating the storage and manipulation of JSON Objects.</li><li>ValkeySearch: Refers to the Search module, which provides a full-text search feature, enabling efficient search operations on data stored in Redis.</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Set the enable status of the extension module. Only support setting to ON to enable the extension module.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_
