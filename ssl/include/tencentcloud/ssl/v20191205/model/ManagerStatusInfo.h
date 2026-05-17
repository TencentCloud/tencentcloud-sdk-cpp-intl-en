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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ManagerPreAuditDomain.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Four types of manager review status
                */
                class ManagerStatusInfo : public AbstractModel
                {
                public:
                    ManagerStatusInfo();
                    ~ManagerStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Review type, enumeration value: ov, ev
                     * @return Type Review type, enumeration value: ov, ev
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Review type, enumeration value: ov, ev
                     * @param _type Review type, enumeration value: ov, ev
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
                     * 获取Review status, enumeration value: pending, completed, invalid, submitted, expiring, expired.
                     * @return Status Review status, enumeration value: pending, completed, invalid, submitted, expiring, expired.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Review status, enumeration value: pending, completed, invalid, submitted, expiring, expired.
                     * @param _status Review status, enumeration value: pending, completed, invalid, submitted, expiring, expired.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Domain name list for manager prereview
                     * @return ManagerPreAuditDomains Domain name list for manager prereview
                     * 
                     */
                    std::vector<ManagerPreAuditDomain> GetManagerPreAuditDomains() const;

                    /**
                     * 设置Domain name list for manager prereview
                     * @param _managerPreAuditDomains Domain name list for manager prereview
                     * 
                     */
                    void SetManagerPreAuditDomains(const std::vector<ManagerPreAuditDomain>& _managerPreAuditDomains);

                    /**
                     * 判断参数 ManagerPreAuditDomains 是否已赋值
                     * @return ManagerPreAuditDomains 是否已赋值
                     * 
                     */
                    bool ManagerPreAuditDomainsHasBeenSet() const;

                private:

                    /**
                     * Review type, enumeration value: ov, ev
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Review status, enumeration value: pending, completed, invalid, submitted, expiring, expired.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Domain name list for manager prereview
                     */
                    std::vector<ManagerPreAuditDomain> m_managerPreAuditDomains;
                    bool m_managerPreAuditDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_
