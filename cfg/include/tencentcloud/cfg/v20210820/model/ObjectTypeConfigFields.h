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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Field information on the experiment resource object
                */
                class ObjectTypeConfigFields : public AbstractModel
                {
                public:
                    ObjectTypeConfigFields();
                    ~ObjectTypeConfigFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取instanceId
                     * @return Key instanceId
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置instanceId
                     * @param _key instanceId
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return Header Instance ID
                     * 
                     */
                    std::string GetHeader() const;

                    /**
                     * 设置Instance ID
                     * @param _header Instance ID
                     * 
                     */
                    void SetHeader(const std::string& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取Whether the field value needs to be translated. If not, this field returns null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Transfer Whether the field value needs to be translated. If not, this field returns null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransfer() const;

                    /**
                     * 设置Whether the field value needs to be translated. If not, this field returns null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transfer Whether the field value needs to be translated. If not, this field returns null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransfer(const std::string& _transfer);

                    /**
                     * 判断参数 Transfer 是否已赋值
                     * @return Transfer 是否已赋值
                     * 
                     */
                    bool TransferHasBeenSet() const;

                    /**
                     * 获取Value returned for container Pod resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonParse Value returned for container Pod resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJsonParse() const;

                    /**
                     * 设置Value returned for container Pod resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonParse Value returned for container Pod resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJsonParse(const std::string& _jsonParse);

                    /**
                     * 判断参数 JsonParse 是否已赋值
                     * @return JsonParse 是否已赋值
                     * 
                     */
                    bool JsonParseHasBeenSet() const;

                private:

                    /**
                     * instanceId
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * Whether the field value needs to be translated. If not, this field returns null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transfer;
                    bool m_transferHasBeenSet;

                    /**
                     * Value returned for container Pod resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jsonParse;
                    bool m_jsonParseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_
