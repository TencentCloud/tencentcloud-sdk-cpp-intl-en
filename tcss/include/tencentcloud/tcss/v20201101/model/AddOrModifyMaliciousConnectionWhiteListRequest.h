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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddOrModifyMaliciousConnectionWhiteList request structure.
                */
                class AddOrModifyMaliciousConnectionWhiteListRequest : public AbstractModel
                {
                public:
                    AddOrModifyMaliciousConnectionWhiteListRequest();
                    ~AddOrModifyMaliciousConnectionWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumerate
IP: IP
Domain name: DOMAIN
                     * @return RequestType Enumerate
IP: IP
Domain name: DOMAIN
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置Enumerate
IP: IP
Domain name: DOMAIN
                     * @param _requestType Enumerate
IP: IP
Domain name: DOMAIN
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                    /**
                     * 获取Allowlisted domain names
                     * @return WhiteDomainList Allowlisted domain names
                     * 
                     */
                    std::vector<std::string> GetWhiteDomainList() const;

                    /**
                     * 设置Allowlisted domain names
                     * @param _whiteDomainList Allowlisted domain names
                     * 
                     */
                    void SetWhiteDomainList(const std::vector<std::string>& _whiteDomainList);

                    /**
                     * 判断参数 WhiteDomainList 是否已赋值
                     * @return WhiteDomainList 是否已赋值
                     * 
                     */
                    bool WhiteDomainListHasBeenSet() const;

                    /**
                     * 获取Allowlisted IP
                     * @return WhiteIPList Allowlisted IP
                     * 
                     */
                    std::vector<std::string> GetWhiteIPList() const;

                    /**
                     * 设置Allowlisted IP
                     * @param _whiteIPList Allowlisted IP
                     * 
                     */
                    void SetWhiteIPList(const std::vector<std::string>& _whiteIPList);

                    /**
                     * 判断参数 WhiteIPList 是否已赋值
                     * @return WhiteIPList 是否已赋值
                     * 
                     */
                    bool WhiteIPListHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Allowlist Record ID, Required Only for Modification
                     * @return ID Allowlist Record ID, Required Only for Modification
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Allowlist Record ID, Required Only for Modification
                     * @param _iD Allowlist Record ID, Required Only for Modification
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * Enumerate
IP: IP
Domain name: DOMAIN
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * Allowlisted domain names
                     */
                    std::vector<std::string> m_whiteDomainList;
                    bool m_whiteDomainListHasBeenSet;

                    /**
                     * Allowlisted IP
                     */
                    std::vector<std::string> m_whiteIPList;
                    bool m_whiteIPListHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Allowlist Record ID, Required Only for Modification
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_
