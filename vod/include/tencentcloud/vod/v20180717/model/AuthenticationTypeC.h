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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEC_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEC_H_

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
                * Timestamp hotlink protection mode C configuration.
The access URL format of timestamp hotlink protection mode C is: http://DomainName/md5hash/timestamp/FileName;
Among them, timestamp is a hexadecimal UNIX timestamp;
md5hash: MD5 (custom key + file path + timestamp).
                */
                class AuthenticationTypeC : public AbstractModel
                {
                public:
                    AuthenticationTypeC();
                    ~AuthenticationTypeC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key used for signature calculation.
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * @return SecretKey Key used for signature calculation.
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key used for signature calculation.
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * @param _secretKey Key used for signature calculation.
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
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
                     * 获取Signature expiration time setting;
In seconds. Maximum settable value: 630720000.
                     * @return ExpireTime Signature expiration time setting;
In seconds. Maximum settable value: 630720000.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Signature expiration time setting;
In seconds. Maximum settable value: 630720000.
                     * @param _expireTime Signature expiration time setting;
In seconds. Maximum settable value: 630720000.
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
                     * 获取List of filename extensions for authentication/no authentication settings;
If it contains the character *, it indicates all files.
                     * @return FileExtensions List of filename extensions for authentication/no authentication settings;
If it contains the character *, it indicates all files.
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置List of filename extensions for authentication/no authentication settings;
If it contains the character *, it indicates all files.
                     * @param _fileExtensions List of filename extensions for authentication/no authentication settings;
If it contains the character *, it indicates all files.
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
                     * 获取whitelist: allowlist, means to authenticate all types except the FileExtensions list;
blacklist: blocklist, means only applicable to authenticate the types in FileExtensions.
                     * @return FilterType whitelist: allowlist, means to authenticate all types except the FileExtensions list;
blacklist: blocklist, means only applicable to authenticate the types in FileExtensions.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置whitelist: allowlist, means to authenticate all types except the FileExtensions list;
blacklist: blocklist, means only applicable to authenticate the types in FileExtensions.
                     * @param _filterType whitelist: allowlist, means to authenticate all types except the FileExtensions list;
blacklist: blocklist, means only applicable to authenticate the types in FileExtensions.
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
                     * 获取Timestamp base settings:
<li>dec: decimal</li>
<li>hex: hexadecimal</li>
                     * @return TimeFormat Timestamp base settings:
<li>dec: decimal</li>
<li>hex: hexadecimal</li>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Timestamp base settings:
<li>dec: decimal</li>
<li>hex: hexadecimal</li>
                     * @param _timeFormat Timestamp base settings:
<li>dec: decimal</li>
<li>hex: hexadecimal</li>
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Secondary key for signature calculation;
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * @return BackupSecretKey Secondary key for signature calculation;
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Secondary key for signature calculation;
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     * @param _backupSecretKey Secondary key for signature calculation;
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
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
                     * Key used for signature calculation.
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Signature expiration time setting;
In seconds. Maximum settable value: 630720000.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * List of filename extensions for authentication/no authentication settings;
If it contains the character *, it indicates all files.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * whitelist: allowlist, means to authenticate all types except the FileExtensions list;
blacklist: blocklist, means only applicable to authenticate the types in FileExtensions.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Timestamp base settings:
<li>dec: decimal</li>
<li>hex: hexadecimal</li>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Secondary key for signature calculation;
Only allow upper- and lower-case letters and digits, with a length of 6 to 32 characters.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEC_H_
