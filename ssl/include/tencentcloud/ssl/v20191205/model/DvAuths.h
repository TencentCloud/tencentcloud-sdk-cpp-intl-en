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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Content of the `DvAuths` parameter
                */
                class DvAuths : public AbstractModel
                {
                public:
                    DvAuths();
                    ~DvAuths() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate domain name verification record key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthKey Certificate domain name verification record key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthKey() const;

                    /**
                     * 设置Certificate domain name verification record key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthKey Certificate domain name verification record key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthKey(const std::string& _dvAuthKey);

                    /**
                     * 判断参数 DvAuthKey 是否已赋值
                     * @return DvAuthKey 是否已赋值
                     * 
                     */
                    bool DvAuthKeyHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification record value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthValue Certificate domain name verification record value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthValue() const;

                    /**
                     * 设置Certificate domain name verification record value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthValue Certificate domain name verification record value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthValue(const std::string& _dvAuthValue);

                    /**
                     * 判断参数 DvAuthValue 是否已赋值
                     * @return DvAuthValue 是否已赋值
                     * 
                     */
                    bool DvAuthValueHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification domain value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthDomain Certificate domain name verification domain value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthDomain() const;

                    /**
                     * 设置Certificate domain name verification domain value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthDomain Certificate domain name verification domain value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthDomain(const std::string& _dvAuthDomain);

                    /**
                     * 判断参数 DvAuthDomain 是否已赋值
                     * @return DvAuthDomain 是否已赋值
                     * 
                     */
                    bool DvAuthDomainHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification file path, used only for file and file_proxy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthPath Certificate domain name verification file path, used only for file and file_proxy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthPath() const;

                    /**
                     * 设置Certificate domain name verification file path, used only for file and file_proxy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthPath Certificate domain name verification file path, used only for file and file_proxy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthPath(const std::string& _dvAuthPath);

                    /**
                     * 判断参数 DvAuthPath 是否已赋值
                     * @return DvAuthPath 是否已赋值
                     * 
                     */
                    bool DvAuthPathHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification subdomain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthSubDomain Certificate domain name verification subdomain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthSubDomain() const;

                    /**
                     * 设置Certificate domain name verification subdomain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthSubDomain Certificate domain name verification subdomain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthSubDomain(const std::string& _dvAuthSubDomain);

                    /**
                     * 判断参数 DvAuthSubDomain 是否已赋值
                     * @return DvAuthSubDomain 是否已赋值
                     * 
                     */
                    bool DvAuthSubDomainHasBeenSet() const;

                    /**
                     * 获取Certificate domain verification type, valid values:.
TXT: add txt record for dns domain verification.
FILE: domain file verification.
CNAME: add cname record for dns domain verification.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthVerifyType Certificate domain verification type, valid values:.
TXT: add txt record for dns domain verification.
FILE: domain file verification.
CNAME: add cname record for dns domain verification.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDvAuthVerifyType() const;

                    /**
                     * 设置Certificate domain verification type, valid values:.
TXT: add txt record for dns domain verification.
FILE: domain file verification.
CNAME: add cname record for dns domain verification.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dvAuthVerifyType Certificate domain verification type, valid values:.
TXT: add txt record for dns domain verification.
FILE: domain file verification.
CNAME: add cname record for dns domain verification.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDvAuthVerifyType(const std::string& _dvAuthVerifyType);

                    /**
                     * 判断参数 DvAuthVerifyType 是否已赋值
                     * @return DvAuthVerifyType 是否已赋值
                     * 
                     */
                    bool DvAuthVerifyTypeHasBeenSet() const;

                private:

                    /**
                     * Certificate domain name verification record key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthKey;
                    bool m_dvAuthKeyHasBeenSet;

                    /**
                     * Certificate domain name verification record value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthValue;
                    bool m_dvAuthValueHasBeenSet;

                    /**
                     * Certificate domain name verification domain value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthDomain;
                    bool m_dvAuthDomainHasBeenSet;

                    /**
                     * Certificate domain name verification file path, used only for file and file_proxy.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthPath;
                    bool m_dvAuthPathHasBeenSet;

                    /**
                     * Certificate domain name verification subdomain.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthSubDomain;
                    bool m_dvAuthSubDomainHasBeenSet;

                    /**
                     * Certificate domain verification type, valid values:.
TXT: add txt record for dns domain verification.
FILE: domain file verification.
CNAME: add cname record for dns domain verification.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthVerifyType;
                    bool m_dvAuthVerifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHS_H_
