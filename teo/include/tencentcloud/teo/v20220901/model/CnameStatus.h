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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CNAME configuration status for domain integration.
                */
                class CnameStatus : public AbstractModel
                {
                public:
                    CnameStatus();
                    ~CnameStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return RecordName Domain name.
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置Domain name.
                     * @param _recordName Domain name.
                     * 
                     */
                    void SetRecordName(const std::string& _recordName);

                    /**
                     * 判断参数 RecordName 是否已赋值
                     * @return RecordName 是否已赋值
                     * 
                     */
                    bool RecordNameHasBeenSet() const;

                    /**
                     * 获取EdgeOne is assigned to the CNAME of the domain name.
                     * @return Cname EdgeOne is assigned to the CNAME of the domain name.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置EdgeOne is assigned to the CNAME of the domain name.
                     * @param _cname EdgeOne is assigned to the CNAME of the domain name.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取CNAME configuration status verification result. valid values:.
<li>active: indicates that the domain name is correctly configured to the designated CNAME assigned by EdgeOne.</li>.
<li>moved: indicates the domain name is not configured to the designated CNAME assigned by EdgeOne;</li>.
<li>invalid: indicates the CNAME in the access domain configuration is assigned by EdgeOne to another domain, which can cause service exception. change it to the CNAME provided by EdgeOne for this domain. you can get the CNAME provided by EdgeOne for this domain from the CNAME field in this struct.</li>.
                     * @return Status CNAME configuration status verification result. valid values:.
<li>active: indicates that the domain name is correctly configured to the designated CNAME assigned by EdgeOne.</li>.
<li>moved: indicates the domain name is not configured to the designated CNAME assigned by EdgeOne;</li>.
<li>invalid: indicates the CNAME in the access domain configuration is assigned by EdgeOne to another domain, which can cause service exception. change it to the CNAME provided by EdgeOne for this domain. you can get the CNAME provided by EdgeOne for this domain from the CNAME field in this struct.</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CNAME configuration status verification result. valid values:.
<li>active: indicates that the domain name is correctly configured to the designated CNAME assigned by EdgeOne.</li>.
<li>moved: indicates the domain name is not configured to the designated CNAME assigned by EdgeOne;</li>.
<li>invalid: indicates the CNAME in the access domain configuration is assigned by EdgeOne to another domain, which can cause service exception. change it to the CNAME provided by EdgeOne for this domain. you can get the CNAME provided by EdgeOne for this domain from the CNAME field in this struct.</li>.
                     * @param _status CNAME configuration status verification result. valid values:.
<li>active: indicates that the domain name is correctly configured to the designated CNAME assigned by EdgeOne.</li>.
<li>moved: indicates the domain name is not configured to the designated CNAME assigned by EdgeOne;</li>.
<li>invalid: indicates the CNAME in the access domain configuration is assigned by EdgeOne to another domain, which can cause service exception. change it to the CNAME provided by EdgeOne for this domain. you can get the CNAME provided by EdgeOne for this domain from the CNAME field in this struct.</li>.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * EdgeOne is assigned to the CNAME of the domain name.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * CNAME configuration status verification result. valid values:.
<li>active: indicates that the domain name is correctly configured to the designated CNAME assigned by EdgeOne.</li>.
<li>moved: indicates the domain name is not configured to the designated CNAME assigned by EdgeOne;</li>.
<li>invalid: indicates the CNAME in the access domain configuration is assigned by EdgeOne to another domain, which can cause service exception. change it to the CNAME provided by EdgeOne for this domain. you can get the CNAME provided by EdgeOne for this domain from the CNAME field in this struct.</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
