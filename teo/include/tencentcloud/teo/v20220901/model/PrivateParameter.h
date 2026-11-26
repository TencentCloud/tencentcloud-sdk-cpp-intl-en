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
                * Private authentication parameters for the COS origin server
                */
                class PrivateParameter : public AbstractModel
                {
                public:
                    PrivateParameter();
                    ~PrivateParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private authentication parameter name. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: authentication parameter Secret Access Key;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: bucket region.</li>
                     * @return Name Private authentication parameter name. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: authentication parameter Secret Access Key;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: bucket region.</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Private authentication parameter name. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: authentication parameter Secret Access Key;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: bucket region.</li>
                     * @param _name Private authentication parameter name. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: authentication parameter Secret Access Key;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: bucket region.</li>
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
                     * 获取Private authentication parameter value.
                     * @return Value Private authentication parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Private authentication parameter value.
                     * @param _value Private authentication parameter value.
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
                     * Private authentication parameter name. Valid values:
<li>AccessKeyId: Access Key ID for authentication;</li>
<li>SecretAccessKey: authentication parameter Secret Access Key;</li>
<li>SignatureVersion: Authentication version, v2 or v4;</li>
<li>Region: bucket region.</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Private authentication parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PRIVATEPARAMETER_H_
