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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeManagers request structure.
                */
                class DescribeManagersRequest : public AbstractModel
                {
                public:
                    DescribeManagersRequest();
                    ~DescribeManagersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Company ID, obtain through the API DescribeCompanies
                     * @return CompanyId Company ID, obtain through the API DescribeCompanies
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置Company ID, obtain through the API DescribeCompanies
                     * @param _companyId Company ID, obtain through the API DescribeCompanies
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取Pagination offset. If not provided, default value is 0.
                     * @return Offset Pagination offset. If not provided, default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. If not provided, default value is 0.
                     * @param _offset Pagination offset. If not provided, default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination quantity per page. If not provided, the default value is 10. Maximum value is 1000.
                     * @return Limit Pagination quantity per page. If not provided, the default value is 10. Maximum value is 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination quantity per page. If not provided, the default value is 10. Maximum value is 1000.
                     * @param _limit Pagination quantity per page. If not provided, the default value is 10. Maximum value is 1000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Manager name (deprecated). Please use SearchKey.
                     * @return ManagerName Manager name (deprecated). Please use SearchKey.
                     * 
                     */
                    std::string GetManagerName() const;

                    /**
                     * 设置Manager name (deprecated). Please use SearchKey.
                     * @param _managerName Manager name (deprecated). Please use SearchKey.
                     * 
                     */
                    void SetManagerName(const std::string& _managerName);

                    /**
                     * 判断参数 ManagerName 是否已赋值
                     * @return ManagerName 是否已赋值
                     * 
                     */
                    bool ManagerNameHasBeenSet() const;

                    /**
                     * 获取Fuzzy query manager mailbox (deprecated), please use SearchKey
                     * @return ManagerMail Fuzzy query manager mailbox (deprecated), please use SearchKey
                     * 
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 设置Fuzzy query manager mailbox (deprecated), please use SearchKey
                     * @param _managerMail Fuzzy query manager mailbox (deprecated), please use SearchKey
                     * 
                     */
                    void SetManagerMail(const std::string& _managerMail);

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     * 
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取Filter based on manager status. Valid values:
'none' pending review
'audit', reviewing by AsiaInfo
'CAaudit' CA under review
'ok' reviewed
'review failed' for 'invalid'
expiring soon
expired
                     * @return Status Filter based on manager status. Valid values:
'none' pending review
'audit', reviewing by AsiaInfo
'CAaudit' CA under review
'ok' reviewed
'review failed' for 'invalid'
expiring soon
expired
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Filter based on manager status. Valid values:
'none' pending review
'audit', reviewing by AsiaInfo
'CAaudit' CA under review
'ok' reviewed
'review failed' for 'invalid'
expiring soon
expired
                     * @param _status Filter based on manager status. Valid values:
'none' pending review
'audit', reviewing by AsiaInfo
'CAaudit' CA under review
'ok' reviewed
'review failed' for 'invalid'
expiring soon
expired
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
                     * 获取Based on the format: manager surname|manager name|mailbox|department, perform accurate matching
                     * @return SearchKey Based on the format: manager surname|manager name|mailbox|department, perform accurate matching
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Based on the format: manager surname|manager name|mailbox|department, perform accurate matching
                     * @param _searchKey Based on the format: manager surname|manager name|mailbox|department, perform accurate matching
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Company ID, obtain through the API DescribeCompanies
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * Pagination offset. If not provided, default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination quantity per page. If not provided, the default value is 10. Maximum value is 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Manager name (deprecated). Please use SearchKey.
                     */
                    std::string m_managerName;
                    bool m_managerNameHasBeenSet;

                    /**
                     * Fuzzy query manager mailbox (deprecated), please use SearchKey
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * Filter based on manager status. Valid values:
'none' pending review
'audit', reviewing by AsiaInfo
'CAaudit' CA under review
'ok' reviewed
'review failed' for 'invalid'
expiring soon
expired
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Based on the format: manager surname|manager name|mailbox|department, perform accurate matching
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_
