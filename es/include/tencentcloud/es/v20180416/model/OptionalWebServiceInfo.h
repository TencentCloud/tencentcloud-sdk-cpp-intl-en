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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Optional web component information
                */
                class OptionalWebServiceInfo : public AbstractModel
                {
                public:
                    OptionalWebServiceInfo();
                    ~OptionalWebServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type.
                     * @return Type Type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type.
                     * @param _type Type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
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
                     * 获取Public url
                     * @return PublicUrl Public url
                     * 
                     */
                    std::string GetPublicUrl() const;

                    /**
                     * 设置Public url
                     * @param _publicUrl Public url
                     * 
                     */
                    void SetPublicUrl(const std::string& _publicUrl);

                    /**
                     * 判断参数 PublicUrl 是否已赋值
                     * @return PublicUrl 是否已赋值
                     * 
                     */
                    bool PublicUrlHasBeenSet() const;

                    /**
                     * 获取Private network url
                     * @return PrivateUrl Private network url
                     * 
                     */
                    std::string GetPrivateUrl() const;

                    /**
                     * 设置Private network url
                     * @param _privateUrl Private network url
                     * 
                     */
                    void SetPrivateUrl(const std::string& _privateUrl);

                    /**
                     * 判断参数 PrivateUrl 是否已赋值
                     * @return PrivateUrl 是否已赋值
                     * 
                     */
                    bool PrivateUrlHasBeenSet() const;

                    /**
                     * 获取Public access permissions
                     * @return PublicAccess Public access permissions
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置Public access permissions
                     * @param _publicAccess Public access permissions
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取Private network access permission
                     * @return PrivateAccess Private network access permission
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Private network access permission
                     * @param _privateAccess Private network access permission
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return Version Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
                     * @param _version Version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Intranet vip of the web service
                     * @return PrivateVip Intranet vip of the web service
                     * 
                     */
                    std::string GetPrivateVip() const;

                    /**
                     * 设置Intranet vip of the web service
                     * @param _privateVip Intranet vip of the web service
                     * 
                     */
                    void SetPrivateVip(const std::string& _privateVip);

                    /**
                     * 判断参数 PrivateVip 是否已赋值
                     * @return PrivateVip 是否已赋值
                     * 
                     */
                    bool PrivateVipHasBeenSet() const;

                    /**
                     * 获取Custom url of cerebro on the private network
                     * @return CustomPrivateUrl Custom url of cerebro on the private network
                     * 
                     */
                    std::string GetCustomPrivateUrl() const;

                    /**
                     * 设置Custom url of cerebro on the private network
                     * @param _customPrivateUrl Custom url of cerebro on the private network
                     * 
                     */
                    void SetCustomPrivateUrl(const std::string& _customPrivateUrl);

                    /**
                     * 判断参数 CustomPrivateUrl 是否已赋值
                     * @return CustomPrivateUrl 是否已赋值
                     * 
                     */
                    bool CustomPrivateUrlHasBeenSet() const;

                private:

                    /**
                     * Type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Public url
                     */
                    std::string m_publicUrl;
                    bool m_publicUrlHasBeenSet;

                    /**
                     * Private network url
                     */
                    std::string m_privateUrl;
                    bool m_privateUrlHasBeenSet;

                    /**
                     * Public access permissions
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * Private network access permission
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Intranet vip of the web service
                     */
                    std::string m_privateVip;
                    bool m_privateVipHasBeenSet;

                    /**
                     * Custom url of cerebro on the private network
                     */
                    std::string m_customPrivateUrl;
                    bool m_customPrivateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
