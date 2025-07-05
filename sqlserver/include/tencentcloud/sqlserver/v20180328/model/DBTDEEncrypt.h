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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBTDEENCRYPT_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBTDEENCRYPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * This example shows you how to enable or disable TDE of a database.
                */
                class DBTDEEncrypt : public AbstractModel
                {
                public:
                    DBTDEEncrypt();
                    ~DBTDEEncrypt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return DBName 
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置
                     * @param _dBName 
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * @return Encryption TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * @param _encryption TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * TDE status. Valid values: `enable` (enabled), `disable` (disabled).
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBTDEENCRYPT_H_
