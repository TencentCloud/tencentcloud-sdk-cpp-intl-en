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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PRIVATEPARAMETER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PRIVATEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Private authentication parameters for Cloud Object Storage origin server
                */
                class PrivateParameter : public AbstractModel
                {
                public:
                    PrivateParameter();
                    ~PrivateParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the private authentication parameter. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: Secret Access Key for authentication;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: The region of the storage bucket.</li>
                     * @return Name The name of the private authentication parameter. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: Secret Access Key for authentication;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: The region of the storage bucket.</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the private authentication parameter. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: Secret Access Key for authentication;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: The region of the storage bucket.</li>
                     * @param _name The name of the private authentication parameter. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: Secret Access Key for authentication;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: The region of the storage bucket.</li>
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
                     * 获取The parameter value.
                     * @return Value The parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The parameter value.
                     * @param _value The parameter value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * The name of the private authentication parameter. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: Secret Access Key for authentication;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: The region of the storage bucket.</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PRIVATEPARAMETER_H_
