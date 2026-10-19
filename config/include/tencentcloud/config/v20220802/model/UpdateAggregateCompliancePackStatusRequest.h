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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateAggregateCompliancePackStatus request structure.
                */
                class UpdateAggregateCompliancePackStatusRequest : public AbstractModel
                {
                public:
                    UpdateAggregateCompliancePackStatusRequest();
                    ~UpdateAggregateCompliancePackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Compliance package ID.
                     * @return CompliancePackId Compliance package ID.
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置Compliance package ID.
                     * @param _compliancePackId Compliance package ID.
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取ACTIVE: Enable
UN_ACTIVE: Disabled
                     * @return Status ACTIVE: Enable
UN_ACTIVE: Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACTIVE: Enable
UN_ACTIVE: Disabled
                     * @param _status ACTIVE: Enable
UN_ACTIVE: Disabled
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
                     * 获取Account group ID.
                     * @return AccountGroupId Account group ID.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID.
                     * @param _accountGroupId Account group ID.
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * Compliance package ID.
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * ACTIVE: Enable
UN_ACTIVE: Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Account group ID.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKSTATUSREQUEST_H_
