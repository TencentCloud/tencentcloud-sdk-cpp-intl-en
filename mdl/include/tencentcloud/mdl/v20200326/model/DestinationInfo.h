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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AmazonS3Settings.h>
#include <tencentcloud/mdl/v20200326/model/CosSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Relay destination address.
                */
                class DestinationInfo : public AbstractModel
                {
                public:
                    DestinationInfo();
                    ~DestinationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Relay destination address. Length limit: [1,512].
                     * @return OutputUrl Relay destination address. Length limit: [1,512].
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 设置Relay destination address. Length limit: [1,512].
                     * @param _outputUrl Relay destination address. Length limit: [1,512].
                     * 
                     */
                    void SetOutputUrl(const std::string& _outputUrl);

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取Authentication key, length limited to [1, 128].
                     * @return AuthKey Authentication key, length limited to [1, 128].
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置Authentication key, length limited to [1, 128].
                     * @param _authKey Authentication key, length limited to [1, 128].
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取Authentication username, length limited to [1, 128].
                     * @return Username Authentication username, length limited to [1, 128].
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Authentication username, length limited to [1, 128].
                     * @param _username Authentication username, length limited to [1, 128].
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Authentication password, length limited to [1, 128].
                     * @return Password Authentication password, length limited to [1, 128].
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Authentication password, length limited to [1, 128].
                     * @param _password Authentication password, length limited to [1, 128].
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取The destination type for relay. Available values: Standard, AWS_MediaPackageV1, AWS_MediaPackageV2. Default: Standard. AWS_AmazonS3 or COS is supported when FrameCapture group is selected.
                     * @return DestinationType The destination type for relay. Available values: Standard, AWS_MediaPackageV1, AWS_MediaPackageV2. Default: Standard. AWS_AmazonS3 or COS is supported when FrameCapture group is selected.
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置The destination type for relay. Available values: Standard, AWS_MediaPackageV1, AWS_MediaPackageV2. Default: Standard. AWS_AmazonS3 or COS is supported when FrameCapture group is selected.
                     * @param _destinationType The destination type for relay. Available values: Standard, AWS_MediaPackageV1, AWS_MediaPackageV2. Default: Standard. AWS_AmazonS3 or COS is supported when FrameCapture group is selected.
                     * 
                     */
                    void SetDestinationType(const std::string& _destinationType);

                    /**
                     * 判断参数 DestinationType 是否已赋值
                     * @return DestinationType 是否已赋值
                     * 
                     */
                    bool DestinationTypeHasBeenSet() const;

                    /**
                     * 获取Forward the Aws S3 address information.
                     * @return AmazonS3Settings Forward the Aws S3 address information.
                     * 
                     */
                    AmazonS3Settings GetAmazonS3Settings() const;

                    /**
                     * 设置Forward the Aws S3 address information.
                     * @param _amazonS3Settings Forward the Aws S3 address information.
                     * 
                     */
                    void SetAmazonS3Settings(const AmazonS3Settings& _amazonS3Settings);

                    /**
                     * 判断参数 AmazonS3Settings 是否已赋值
                     * @return AmazonS3Settings 是否已赋值
                     * 
                     */
                    bool AmazonS3SettingsHasBeenSet() const;

                    /**
                     * 获取Forward COS address information.
                     * @return CosSettings Forward COS address information.
                     * 
                     */
                    CosSettings GetCosSettings() const;

                    /**
                     * 设置Forward COS address information.
                     * @param _cosSettings Forward COS address information.
                     * 
                     */
                    void SetCosSettings(const CosSettings& _cosSettings);

                    /**
                     * 判断参数 CosSettings 是否已赋值
                     * @return CosSettings 是否已赋值
                     * 
                     */
                    bool CosSettingsHasBeenSet() const;

                private:

                    /**
                     * Relay destination address. Length limit: [1,512].
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * Authentication key, length limited to [1, 128].
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * Authentication username, length limited to [1, 128].
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Authentication password, length limited to [1, 128].
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * The destination type for relay. Available values: Standard, AWS_MediaPackageV1, AWS_MediaPackageV2. Default: Standard. AWS_AmazonS3 or COS is supported when FrameCapture group is selected.
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * Forward the Aws S3 address information.
                     */
                    AmazonS3Settings m_amazonS3Settings;
                    bool m_amazonS3SettingsHasBeenSet;

                    /**
                     * Forward COS address information.
                     */
                    CosSettings m_cosSettings;
                    bool m_cosSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_
