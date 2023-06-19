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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEB_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection mode B configuration
                */
                class AuthenticationTypeB : public AbstractModel
                {
                public:
                    AuthenticationTypeB();
                    ~AuthenticationTypeB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key for signature calculation 6-32 characters. Only digits and letters are allowed.
                     * @return SecretKey The key for signature calculation 6-32 characters. Only digits and letters are allowed.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置The key for signature calculation 6-32 characters. Only digits and letters are allowed.
                     * @param _secretKey The key for signature calculation 6-32 characters. Only digits and letters are allowed.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Signature parameter name Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * @return ExpireTime Signature parameter name Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Signature parameter name Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * @param _expireTime Signature parameter name Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取File extension list settings determining if authentication should be performed;If it contains an asterisk (*), this indicates all files.
                     * @return FileExtensions File extension list settings determining if authentication should be performed;If it contains an asterisk (*), this indicates all files.
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置File extension list settings determining if authentication should be performed;If it contains an asterisk (*), this indicates all files.
                     * @param _fileExtensions File extension list settings determining if authentication should be performed;If it contains an asterisk (*), this indicates all files.
                     * 
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     * 
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取whitelist: All file types apart from the FileExtensions list are authenticated;blacklist: Only the file types in the FileExtensions list are authenticated.
                     * @return FilterType whitelist: All file types apart from the FileExtensions list are authenticated;blacklist: Only the file types in the FileExtensions list are authenticated.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置whitelist: All file types apart from the FileExtensions list are authenticated;blacklist: Only the file types in the FileExtensions list are authenticated.
                     * @param _filterType whitelist: All file types apart from the FileExtensions list are authenticated;blacklist: Only the file types in the FileExtensions list are authenticated.
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Backup key, which is used to calculate a signature. 6-32 characters. Only digits and letters are allowed.
                     * @return BackupSecretKey Backup key, which is used to calculate a signature. 6-32 characters. Only digits and letters are allowed.
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Backup key, which is used to calculate a signature. 6-32 characters. Only digits and letters are allowed.
                     * @param _backupSecretKey Backup key, which is used to calculate a signature. 6-32 characters. Only digits and letters are allowed.
                     * 
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     * 
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                private:

                    /**
                     * The key for signature calculation 6-32 characters. Only digits and letters are allowed.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Signature parameter name Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * File extension list settings determining if authentication should be performed;If it contains an asterisk (*), this indicates all files.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * whitelist: All file types apart from the FileExtensions list are authenticated;blacklist: Only the file types in the FileExtensions list are authenticated.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Backup key, which is used to calculate a signature. 6-32 characters. Only digits and letters are allowed.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEB_H_
