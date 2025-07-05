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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPED_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPED_H_

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
                * Timestamp anti-hotlinking mode D configuration; The access URL format of timestamp anti-hotlinking mode D is: http://DomainName/FileName?sign=md5hash&t=timestamp; where timestamp is a decimal or hexadecimal UNIX timestamp; md5hash: MD5 (custom key + file path + timestamp).
                */
                class AuthenticationTypeD : public AbstractModel
                {
                public:
                    AuthenticationTypeD();
                    ~AuthenticationTypeD() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key to calculate the signature; only uppercase and lowercase letters and numbers are allowed, with a length of 6~32 characters.
                     * @return SecretKey The key to calculate the signature; only uppercase and lowercase letters and numbers are allowed, with a length of 6~32 characters.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置The key to calculate the signature; only uppercase and lowercase letters and numbers are allowed, with a length of 6~32 characters.
                     * @param _secretKey The key to calculate the signature; only uppercase and lowercase letters and numbers are allowed, with a length of 6~32 characters.
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
                     * 获取Signature expiration time setting; the unit is seconds, and the maximum value can be set to 630720000.
                     * @return ExpireTime Signature expiration time setting; the unit is seconds, and the maximum value can be set to 630720000.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Signature expiration time setting; the unit is seconds, and the maximum value can be set to 630720000.
                     * @param _expireTime Signature expiration time setting; the unit is seconds, and the maximum value can be set to 630720000.
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
                     * 获取File extension list settings for authentication/non-authentication; if the character * is included, it means all files.
                     * @return FileExtensions File extension list settings for authentication/non-authentication; if the character * is included, it means all files.
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置File extension list settings for authentication/non-authentication; if the character * is included, it means all files.
                     * @param _fileExtensions File extension list settings for authentication/non-authentication; if the character * is included, it means all files.
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
                     * 获取whitelist: whitelist, indicating that all types except the FileExtensions list will be authenticated; blacklist: blacklist, indicating that only the types in FileExtensions will be authenticated.
                     * @return FilterType whitelist: whitelist, indicating that all types except the FileExtensions list will be authenticated; blacklist: blacklist, indicating that only the types in FileExtensions will be authenticated.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置whitelist: whitelist, indicating that all types except the FileExtensions list will be authenticated; blacklist: blacklist, indicating that only the types in FileExtensions will be authenticated.
                     * @param _filterType whitelist: whitelist, indicating that all types except the FileExtensions list will be authenticated; blacklist: blacklist, indicating that only the types in FileExtensions will be authenticated.
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
                     * 获取Signature parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * @return SignParam Signature parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * @param _signParam Signature parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Timestamp parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * @return TimeParam Timestamp parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Timestamp parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * @param _timeParam Timestamp parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     * 
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     * 
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取Timestamp base setting: <li>dec: decimal</li> <li>hex: hexadecimal</li>
                     * @return TimeFormat Timestamp base setting: <li>dec: decimal</li> <li>hex: hexadecimal</li>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Timestamp base setting: <li>dec: decimal</li> <li>hex: hexadecimal</li>
                     * @param _timeFormat Timestamp base setting: <li>dec: decimal</li> <li>hex: hexadecimal</li>
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
                     * 获取Alternate key for calculating signature; only uppercase and lowercase letters and numbers are allowed, length 6~32 characters.
                     * @return BackupSecretKey Alternate key for calculating signature; only uppercase and lowercase letters and numbers are allowed, length 6~32 characters.
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Alternate key for calculating signature; only uppercase and lowercase letters and numbers are allowed, length 6~32 characters.
                     * @param _backupSecretKey Alternate key for calculating signature; only uppercase and lowercase letters and numbers are allowed, length 6~32 characters.
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
                     * The key to calculate the signature; only uppercase and lowercase letters and numbers are allowed, with a length of 6~32 characters.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Signature expiration time setting; the unit is seconds, and the maximum value can be set to 630720000.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * File extension list settings for authentication/non-authentication; if the character * is included, it means all files.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * whitelist: whitelist, indicating that all types except the FileExtensions list will be authenticated; blacklist: blacklist, indicating that only the types in FileExtensions will be authenticated.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Signature parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * Timestamp parameter name setting; only uppercase and lowercase letters, numbers or underscores are allowed, the length is 1~100 characters, and it cannot start with a number.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Timestamp base setting: <li>dec: decimal</li> <li>hex: hexadecimal</li>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Alternate key for calculating signature; only uppercase and lowercase letters and numbers are allowed, length 6~32 characters.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPED_H_
