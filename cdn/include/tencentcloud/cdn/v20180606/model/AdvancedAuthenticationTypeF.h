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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEF_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection advanced authentication configuration mode F (TypeF)
                */
                class AdvancedAuthenticationTypeF : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeF();
                    ~AdvancedAuthenticationTypeF() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取Transaction field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TransactionParam Transaction field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTransactionParam() const;

                    /**
                     * 设置Transaction field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TransactionParam Transaction field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTransactionParam(const std::string& _transactionParam);

                    /**
                     * 判断参数 TransactionParam 是否已赋值
                     * @return TransactionParam 是否已赋值
                     */
                    bool TransactionParamHasBeenSet() const;

                    /**
                     * 获取CMK used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretKey CMK used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置CMK used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SecretKey CMK used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Alternative key used for signature calculation, which is used after the CMK fails in authentication. It allows 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BackupSecretKey Alternative key used for signature calculation, which is used after the CMK fails in authentication. It allows 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Alternative key used for signature calculation, which is used after the CMK fails in authentication. It allows 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BackupSecretKey Alternative key used for signature calculation, which is used after the CMK fails in authentication. It allows 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                private:

                    /**
                     * Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Transaction field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_transactionParam;
                    bool m_transactionParamHasBeenSet;

                    /**
                     * CMK used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Alternative key used for signature calculation, which is used after the CMK fails in authentication. It allows 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEF_H_
