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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Approval order information
                */
                class DspmApproverOrder : public AbstractModel
                {
                public:
                    DspmApproverOrder();
                    ~DspmApproverOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Corresponding Application id
                     * @return OrderId Corresponding Application id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Corresponding Application id
                     * @param _orderId Corresponding Application id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Identity id.
                     * @return IdentifyId Identity id.
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置Identity id.
                     * @param _identifyId Identity id.
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取Applicant account uin
                     * @return ApplicantUin Applicant account uin
                     * 
                     */
                    DspmUinUser GetApplicantUin() const;

                    /**
                     * 设置Applicant account uin
                     * @param _applicantUin Applicant account uin
                     * 
                     */
                    void SetApplicantUin(const DspmUinUser& _applicantUin);

                    /**
                     * 判断参数 ApplicantUin 是否已赋值
                     * @return ApplicantUin 是否已赋值
                     * 
                     */
                    bool ApplicantUinHasBeenSet() const;

                    /**
                     * 获取Asset ID
                     * @return AssetId Asset ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset name
                     * @return AssetName Asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
                     * @param _assetName Asset name
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Application type. 0: associate an identity. 1: edit an identity. 2: create a temporary identity.
                     * @return ApplyType Application type. 0: associate an identity. 1: edit an identity. 2: create a temporary identity.
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置Application type. 0: associate an identity. 1: edit an identity. 2: create a temporary identity.
                     * @param _applyType Application type. 0: associate an identity. 1: edit an identity. 2: create a temporary identity.
                     * 
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取Permission request
                     * @return Privilege Permission request
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置Permission request
                     * @param _privilege Permission request
                     * 
                     */
                    void SetPrivilege(const DspmDbAccountPrivilege& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Access privilege expiration time calculated from when approval is complete. Temporary account validity. Milliseconds.
                     * @return ValidatePeriod Access privilege expiration time calculated from when approval is complete. Temporary account validity. Milliseconds.
                     * 
                     */
                    int64_t GetValidatePeriod() const;

                    /**
                     * 设置Access privilege expiration time calculated from when approval is complete. Temporary account validity. Milliseconds.
                     * @param _validatePeriod Access privilege expiration time calculated from when approval is complete. Temporary account validity. Milliseconds.
                     * 
                     */
                    void SetValidatePeriod(const int64_t& _validatePeriod);

                    /**
                     * 判断参数 ValidatePeriod 是否已赋值
                     * @return ValidatePeriod 是否已赋值
                     * 
                     */
                    bool ValidatePeriodHasBeenSet() const;

                    /**
                     * 获取Reason for request
                     * @return Reason Reason for request
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for request
                     * @param _reason Reason for request
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Management type. 0: ordinary member; 1: admin.
                     * @return ManagerType Management type. 0: ordinary member; 1: admin.
                     * 
                     */
                    int64_t GetManagerType() const;

                    /**
                     * 设置Management type. 0: ordinary member; 1: admin.
                     * @param _managerType Management type. 0: ordinary member; 1: admin.
                     * 
                     */
                    void SetManagerType(const int64_t& _managerType);

                    /**
                     * 判断参数 ManagerType 是否已赋值
                     * @return ManagerType 是否已赋值
                     * 
                     */
                    bool ManagerTypeHasBeenSet() const;

                    /**
                     * 获取Personal user information
                     * @return Person Personal user information
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置Personal user information
                     * @param _person Personal user information
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取Cloud account user information
                     * @return SubjectUser Cloud account user information
                     * 
                     */
                    DspmUinUser GetSubjectUser() const;

                    /**
                     * 设置Cloud account user information
                     * @param _subjectUser Cloud account user information
                     * 
                     */
                    void SetSubjectUser(const DspmUinUser& _subjectUser);

                    /**
                     * 判断参数 SubjectUser 是否已赋值
                     * @return SubjectUser 是否已赋值
                     * 
                     */
                    bool SubjectUserHasBeenSet() const;

                    /**
                     * 获取Correspond to the application creation time.
                     * @return CreateTime Correspond to the application creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Correspond to the application creation time.
                     * @param _createTime Correspond to the application creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Corresponding Application id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Identity id.
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * Applicant account uin
                     */
                    DspmUinUser m_applicantUin;
                    bool m_applicantUinHasBeenSet;

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Application type. 0: associate an identity. 1: edit an identity. 2: create a temporary identity.
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * Permission request
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Access privilege expiration time calculated from when approval is complete. Temporary account validity. Milliseconds.
                     */
                    int64_t m_validatePeriod;
                    bool m_validatePeriodHasBeenSet;

                    /**
                     * Reason for request
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Management type. 0: ordinary member; 1: admin.
                     */
                    int64_t m_managerType;
                    bool m_managerTypeHasBeenSet;

                    /**
                     * Personal user information
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Cloud account user information
                     */
                    DspmUinUser m_subjectUser;
                    bool m_subjectUserHasBeenSet;

                    /**
                     * Correspond to the application creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERORDER_H_
