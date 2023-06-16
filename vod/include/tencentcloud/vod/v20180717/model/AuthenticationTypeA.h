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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEA_H_

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
                * 
                */
                class AuthenticationTypeA : public AbstractModel
                {
                public:
                    AuthenticationTypeA();
                    ~AuthenticationTypeA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SecretKey 
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置
                     * @param _secretKey 
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
                     * 获取
                     * @return SignParam 
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置
                     * @param _signParam 
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
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
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
                     * 获取
                     * @return FileExtensions 
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置
                     * @param _fileExtensions 
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
                     * 获取
                     * @return FilterType 
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置
                     * @param _filterType 
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
                     * 获取
                     * @return BackupSecretKey 
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置
                     * @param _backupSecretKey 
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
                     * 
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATIONTYPEA_H_
