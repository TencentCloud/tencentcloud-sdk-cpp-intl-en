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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORDPRIVATEPARAMETER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORDPRIVATEPARAMETER_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Private origin authentication parameter
                */
                class OriginRecordPrivateParameter : public AbstractModel
                {
                public:
                    OriginRecordPrivateParameter();
                    ~OriginRecordPrivateParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the private origin authentication parameter.
`AccessKeyId`: Access key ID
`SecretAccessKey`: Secret access key
                     * @return Name Name of the private origin authentication parameter.
`AccessKeyId`: Access key ID
`SecretAccessKey`: Secret access key
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the private origin authentication parameter.
`AccessKeyId`: Access key ID
`SecretAccessKey`: Secret access key
                     * @param _name Name of the private origin authentication parameter.
`AccessKeyId`: Access key ID
`SecretAccessKey`: Secret access key
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
                     * 获取Value of the private origin authentication parameter
                     * @return Value Value of the private origin authentication parameter
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the private origin authentication parameter
                     * @param _value Value of the private origin authentication parameter
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
                     * Name of the private origin authentication parameter.
`AccessKeyId`: Access key ID
`SecretAccessKey`: Secret access key
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Value of the private origin authentication parameter
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORDPRIVATEPARAMETER_H_
