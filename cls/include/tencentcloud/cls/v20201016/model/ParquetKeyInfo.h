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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * `Parquet` content description
                */
                class ParquetKeyInfo : public AbstractModel
                {
                public:
                    ParquetKeyInfo();
                    ~ParquetKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key name
                     * @return KeyName Key name
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key name
                     * @param _keyName Key name
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Supported data types: string, boolean, int32, int64, float, and double
                     * @return KeyType Supported data types: string, boolean, int32, int64, float, and double
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置Supported data types: string, boolean, int32, int64, float, and double
                     * @param _keyType Supported data types: string, boolean, int32, int64, float, and double
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取Assignment information returned upon resolution failure
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return KeyNonExistingField Assignment information returned upon resolution failure
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKeyNonExistingField() const;

                    /**
                     * 设置Assignment information returned upon resolution failure
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _keyNonExistingField Assignment information returned upon resolution failure
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKeyNonExistingField(const std::string& _keyNonExistingField);

                    /**
                     * 判断参数 KeyNonExistingField 是否已赋值
                     * @return KeyNonExistingField 是否已赋值
                     * 
                     */
                    bool KeyNonExistingFieldHasBeenSet() const;

                private:

                    /**
                     * Key name
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Supported data types: string, boolean, int32, int64, float, and double
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * Assignment information returned upon resolution failure
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_keyNonExistingField;
                    bool m_keyNonExistingFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARQUETKEYINFO_H_
