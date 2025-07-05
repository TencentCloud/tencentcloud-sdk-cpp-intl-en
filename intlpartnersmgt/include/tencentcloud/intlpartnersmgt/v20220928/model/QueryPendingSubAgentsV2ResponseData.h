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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGSUBAGENTSV2RESPONSEDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGSUBAGENTSV2RESPONSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Information of second-level reseller application in progress.
                */
                class QueryPendingSubAgentsV2ResponseData : public AbstractModel
                {
                public:
                    QueryPendingSubAgentsV2ResponseData();
                    ~QueryPendingSubAgentsV2ResponseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 设置Second-level reseller UIN.
                     * @param _subAgentUin Second-level reseller UIN.
                     * 
                     */
                    void SetSubAgentUin(const int64_t& _subAgentUin);

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Mobile Mobile number.
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Mobile number.
                     * @param _mobile Mobile number.
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取Specifies the mailbox.
                     * @return Email Specifies the mailbox.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Specifies the mailbox.
                     * @param _email Specifies the mailbox.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Application time
                     * @return ApplyTime Application time
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
                     * @param _applyTime Application time
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Approval status

{Reviewing: pending review}.
                     * @return Status Approval status

{Reviewing: pending review}.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Approval status

{Reviewing: pending review}.
                     * @param _status Approval status

{Reviewing: pending review}.
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
                     * 获取Application material.
                     * @return MaterialUrl Application material.
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置Application material.
                     * @param _materialUrl Application material.
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取Identity verification status -1: file not uploaded 0: pending review 1: under review; 2: review error; 3: approved.
                     * @return AuthState Identity verification status -1: file not uploaded 0: pending review 1: under review; 2: review error; 3: approved.
                     * 
                     */
                    int64_t GetAuthState() const;

                    /**
                     * 设置Identity verification status -1: file not uploaded 0: pending review 1: under review; 2: review error; 3: approved.
                     * @param _authState Identity verification status -1: file not uploaded 0: pending review 1: under review; 2: review error; 3: approved.
                     * 
                     */
                    void SetAuthState(const int64_t& _authState);

                    /**
                     * 判断参数 AuthState 是否已赋值
                     * @return AuthState 是否已赋值
                     * 
                     */
                    bool AuthStateHasBeenSet() const;

                private:

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * Specifies the mailbox.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Application time
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Approval status

{Reviewing: pending review}.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Application material.
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * Identity verification status -1: file not uploaded 0: pending review 1: under review; 2: review error; 3: approved.
                     */
                    int64_t m_authState;
                    bool m_authStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGSUBAGENTSV2RESPONSEDATA_H_
