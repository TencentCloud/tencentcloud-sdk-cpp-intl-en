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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DvAuths.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Content of the DvAuthDetail parameter returned by DescribeCertificates.
                */
                class DvAuthDetail : public AbstractModel
                {
                public:
                    DvAuthDetail();
                    ~DvAuthDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DV authentication key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthKey DV authentication key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDvAuthKey() const;

                    /**
                     * 设置DV authentication key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuthKey DV authentication key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuthKey(const std::string& _dvAuthKey);

                    /**
                     * 判断参数 DvAuthKey 是否已赋值
                     * @return DvAuthKey 是否已赋值
                     */
                    bool DvAuthKeyHasBeenSet() const;

                    /**
                     * 获取DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthValue DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDvAuthValue() const;

                    /**
                     * 设置DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuthValue DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuthValue(const std::string& _dvAuthValue);

                    /**
                     * 判断参数 DvAuthValue 是否已赋值
                     * @return DvAuthValue 是否已赋值
                     */
                    bool DvAuthValueHasBeenSet() const;

                    /**
                     * 获取Domain name of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthDomain Domain name of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDvAuthDomain() const;

                    /**
                     * 设置Domain name of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuthDomain Domain name of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuthDomain(const std::string& _dvAuthDomain);

                    /**
                     * 判断参数 DvAuthDomain 是否已赋值
                     * @return DvAuthDomain 是否已赋值
                     */
                    bool DvAuthDomainHasBeenSet() const;

                    /**
                     * 获取Path of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthPath Path of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDvAuthPath() const;

                    /**
                     * 设置Path of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuthPath Path of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuthPath(const std::string& _dvAuthPath);

                    /**
                     * 判断参数 DvAuthPath 是否已赋值
                     * @return DvAuthPath 是否已赋值
                     */
                    bool DvAuthPathHasBeenSet() const;

                    /**
                     * 获取DV authentication sub-domain name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthKeySubDomain DV authentication sub-domain name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDvAuthKeySubDomain() const;

                    /**
                     * 设置DV authentication sub-domain name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuthKeySubDomain DV authentication sub-domain name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuthKeySubDomain(const std::string& _dvAuthKeySubDomain);

                    /**
                     * 判断参数 DvAuthKeySubDomain 是否已赋值
                     * @return DvAuthKeySubDomain 是否已赋值
                     */
                    bool DvAuthKeySubDomainHasBeenSet() const;

                    /**
                     * 获取DV authentication information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuths DV authentication information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DvAuths> GetDvAuths() const;

                    /**
                     * 设置DV authentication information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DvAuths DV authentication information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDvAuths(const std::vector<DvAuths>& _dvAuths);

                    /**
                     * 判断参数 DvAuths 是否已赋值
                     * @return DvAuths 是否已赋值
                     */
                    bool DvAuthsHasBeenSet() const;

                private:

                    /**
                     * DV authentication key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthKey;
                    bool m_dvAuthKeyHasBeenSet;

                    /**
                     * DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthValue;
                    bool m_dvAuthValueHasBeenSet;

                    /**
                     * Domain name of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthDomain;
                    bool m_dvAuthDomainHasBeenSet;

                    /**
                     * Path of the DV authentication value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthPath;
                    bool m_dvAuthPathHasBeenSet;

                    /**
                     * DV authentication sub-domain name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dvAuthKeySubDomain;
                    bool m_dvAuthKeySubDomainHasBeenSet;

                    /**
                     * DV authentication information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DvAuths> m_dvAuths;
                    bool m_dvAuthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DVAUTHDETAIL_H_
