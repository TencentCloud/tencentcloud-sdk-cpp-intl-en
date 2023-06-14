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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Key details
                */
                class ApiKey : public AbstractModel
                {
                public:
                    ApiKey();
                    ~ApiKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Created API key ID.
                     * @return AccessKeyId Created API key ID.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Created API key ID.
                     * @param _accessKeyId Created API key ID.
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Created API key.
                     * @return AccessKeySecret Created API key.
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置Created API key.
                     * @param _accessKeySecret Created API key.
                     * 
                     */
                    void SetAccessKeySecret(const std::string& _accessKeySecret);

                    /**
                     * 判断参数 AccessKeySecret 是否已赋值
                     * @return AccessKeySecret 是否已赋值
                     * 
                     */
                    bool AccessKeySecretHasBeenSet() const;

                    /**
                     * 获取Key type. Valid values: auto, manual.
                     * @return AccessKeyType Key type. Valid values: auto, manual.
                     * 
                     */
                    std::string GetAccessKeyType() const;

                    /**
                     * 设置Key type. Valid values: auto, manual.
                     * @param _accessKeyType Key type. Valid values: auto, manual.
                     * 
                     */
                    void SetAccessKeyType(const std::string& _accessKeyType);

                    /**
                     * 判断参数 AccessKeyType 是否已赋值
                     * @return AccessKeyType 是否已赋值
                     * 
                     */
                    bool AccessKeyTypeHasBeenSet() const;

                    /**
                     * 获取Custom key name.
                     * @return SecretName Custom key name.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Custom key name.
                     * @param _secretName Custom key name.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @return ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @param _modifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Key status. 0: disabled. 1: enabled.
                     * @return Status Key status. 0: disabled. 1: enabled.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Key status. 0: disabled. 1: enabled.
                     * @param _status Key status. 0: disabled. 1: enabled.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @param _createdTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Created API key ID.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Created API key.
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                    /**
                     * Key type. Valid values: auto, manual.
                     */
                    std::string m_accessKeyType;
                    bool m_accessKeyTypeHasBeenSet;

                    /**
                     * Custom key name.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Key status. 0: disabled. 1: enabled.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_
