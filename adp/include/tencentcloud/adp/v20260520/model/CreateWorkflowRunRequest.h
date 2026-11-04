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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateWorkflowRun request structure.
                */
                class CreateWorkflowRunRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRunRequest();
                    ~CreateWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID. For how to obtain it, see <a href="https://www.tencentcloud.com/document/product/1759/109469?from_cn_redirect=1#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @return AppId <p>Application ID. For how to obtain it, see <a href="https://www.tencentcloud.com/document/product/1759/109469?from_cn_redirect=1#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID. For how to obtain it, see <a href="https://www.tencentcloud.com/document/product/1759/109469?from_cn_redirect=1#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @param _appId <p>Application ID. For how to obtain it, see <a href="https://www.tencentcloud.com/document/product/1759/109469?from_cn_redirect=1#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Execution environment. 1: Development domain, 2: Production domain</p>
                     * @return Domain <p>Execution environment. 1: Development domain, 2: Production domain</p>
                     * 
                     */
                    uint64_t GetDomain() const;

                    /**
                     * 设置<p>Execution environment. 1: Development domain, 2: Production domain</p>
                     * @param _domain <p>Execution environment. 1: Development domain, 2: Production domain</p>
                     * 
                     */
                    void SetDomain(const uint64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>User input.</p>
                     * @return Query <p>User input.</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>User input.</p>
                     * @param _query <p>User input.</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>API parameter configuration</p>
                     * @return CustomVariableList <p>API parameter configuration</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariableList() const;

                    /**
                     * 设置<p>API parameter configuration</p>
                     * @param _customVariableList <p>API parameter configuration</p>
                     * 
                     */
                    void SetCustomVariableList(const std::vector<CustomVariable>& _customVariableList);

                    /**
                     * 判断参数 CustomVariableList 是否已赋值
                     * @return CustomVariableList 是否已赋值
                     * 
                     */
                    bool CustomVariableListHasBeenSet() const;

                    /**
                     * 获取<p>uid</p>
                     * @return UserId <p>uid</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>uid</p>
                     * @param _userId <p>uid</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID. For how to obtain it, see <a href="https://www.tencentcloud.com/document/product/1759/109469?from_cn_redirect=1#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Execution environment. 1: Development domain, 2: Production domain</p>
                     */
                    uint64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>User input.</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>API parameter configuration</p>
                     */
                    std::vector<CustomVariable> m_customVariableList;
                    bool m_customVariableListHasBeenSet;

                    /**
                     * <p>uid</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_
