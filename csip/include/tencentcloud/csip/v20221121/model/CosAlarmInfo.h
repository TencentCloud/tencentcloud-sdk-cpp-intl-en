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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Object storage alarm info
                */
                class CosAlarmInfo : public AbstractModel
                {
                public:
                    CosAlarmInfo();
                    ~CosAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid

                     * @return AppId appid

                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid

                     * @param _appId appid

                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return PolicyName Policy name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name.
                     * @param _policyName Policy name.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy type. 0: Unknown rule category; 1: abnormal behavior; 2: excessive permissions; 3: resource enumeration; 4: anonymous access.

                     * @return PolicyAbnormalType Policy type. 0: Unknown rule category; 1: abnormal behavior; 2: excessive permissions; 3: resource enumeration; 4: anonymous access.

                     * 
                     */
                    int64_t GetPolicyAbnormalType() const;

                    /**
                     * 设置Policy type. 0: Unknown rule category; 1: abnormal behavior; 2: excessive permissions; 3: resource enumeration; 4: anonymous access.

                     * @param _policyAbnormalType Policy type. 0: Unknown rule category; 1: abnormal behavior; 2: excessive permissions; 3: resource enumeration; 4: anonymous access.

                     * 
                     */
                    void SetPolicyAbnormalType(const int64_t& _policyAbnormalType);

                    /**
                     * 判断参数 PolicyAbnormalType 是否已赋值
                     * @return PolicyAbnormalType 是否已赋值
                     * 
                     */
                    bool PolicyAbnormalTypeHasBeenSet() const;

                    /**
                     * 获取Risk level: 0: Normal, 1: Tip, 2: Low, 3: Middle, 4: High, 5: Critical
                     * @return PolicyRiskLevel Risk level: 0: Normal, 1: Tip, 2: Low, 3: Middle, 4: High, 5: Critical
                     * 
                     */
                    int64_t GetPolicyRiskLevel() const;

                    /**
                     * 设置Risk level: 0: Normal, 1: Tip, 2: Low, 3: Middle, 4: High, 5: Critical
                     * @param _policyRiskLevel Risk level: 0: Normal, 1: Tip, 2: Low, 3: Middle, 4: High, 5: Critical
                     * 
                     */
                    void SetPolicyRiskLevel(const int64_t& _policyRiskLevel);

                    /**
                     * 判断参数 PolicyRiskLevel 是否已赋值
                     * @return PolicyRiskLevel 是否已赋值
                     * 
                     */
                    bool PolicyRiskLevelHasBeenSet() const;

                    /**
                     * 获取Policy information description
                     * @return PolicyDescription Policy information description
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置Policy information description
                     * @param _policyDescription Policy information description
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取Bucket name
                     * @return BucketName Bucket name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name
                     * @param _bucketName Bucket name
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Bucket region.
                     * @return BucketRegion Bucket region.
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Bucket region.
                     * @param _bucketRegion Bucket region.
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取Bucket remarks.
                     * @return BucketMarker Bucket remarks.
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置Bucket remarks.
                     * @param _bucketMarker Bucket remarks.
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                    /**
                     * 获取Bucket tag information
                     * @return BucketTagInfo Bucket tag information
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置Bucket tag information
                     * @param _bucketTagInfo Bucket tag information
                     * 
                     */
                    void SetBucketTagInfo(const std::string& _bucketTagInfo);

                    /**
                     * 判断参数 BucketTagInfo 是否已赋值
                     * @return BucketTagInfo 是否已赋值
                     * 
                     */
                    bool BucketTagInfoHasBeenSet() const;

                    /**
                     * 获取Bucket accessible property
                     * @return BucketAccessWay Bucket accessible property
                     * 
                     */
                    std::string GetBucketAccessWay() const;

                    /**
                     * 设置Bucket accessible property
                     * @param _bucketAccessWay Bucket accessible property
                     * 
                     */
                    void SetBucketAccessWay(const std::string& _bucketAccessWay);

                    /**
                     * 判断参数 BucketAccessWay 是否已赋值
                     * @return BucketAccessWay 是否已赋值
                     * 
                     */
                    bool BucketAccessWayHasBeenSet() const;

                    /**
                     * 获取Account uin
                     * @return AccountUin Account uin
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置Account uin
                     * @param _accountUin Account uin
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取Account nickname
                     * @return AccountNickName Account nickname
                     * 
                     */
                    std::string GetAccountNickName() const;

                    /**
                     * 设置Account nickname
                     * @param _accountNickName Account nickname
                     * 
                     */
                    void SetAccountNickName(const std::string& _accountNickName);

                    /**
                     * 判断参数 AccountNickName 是否已赋值
                     * @return AccountNickName 是否已赋值
                     * 
                     */
                    bool AccountNickNameHasBeenSet() const;

                    /**
                     * 获取Identity of the associated account. 1 - Main account. 2 - Sub-account
                     * @return AccountIdentify Identity of the associated account. 1 - Main account. 2 - Sub-account
                     * 
                     */
                    int64_t GetAccountIdentify() const;

                    /**
                     * 设置Identity of the associated account. 1 - Main account. 2 - Sub-account
                     * @param _accountIdentify Identity of the associated account. 1 - Main account. 2 - Sub-account
                     * 
                     */
                    void SetAccountIdentify(const int64_t& _accountIdentify);

                    /**
                     * 判断参数 AccountIdentify 是否已赋值
                     * @return AccountIdentify 是否已赋值
                     * 
                     */
                    bool AccountIdentifyHasBeenSet() const;

                    /**
                     * 获取Nickname of the main account to which the sub-account belongs
                     * @return AccountMainNickName Nickname of the main account to which the sub-account belongs
                     * 
                     */
                    std::string GetAccountMainNickName() const;

                    /**
                     * 设置Nickname of the main account to which the sub-account belongs
                     * @param _accountMainNickName Nickname of the main account to which the sub-account belongs
                     * 
                     */
                    void SetAccountMainNickName(const std::string& _accountMainNickName);

                    /**
                     * 判断参数 AccountMainNickName 是否已赋值
                     * @return AccountMainNickName 是否已赋值
                     * 
                     */
                    bool AccountMainNickNameHasBeenSet() const;

                    /**
                     * 获取Alarm timestamp in Unix time in milliseconds
                     * @return AlarmTimestamp Alarm timestamp in Unix time in milliseconds
                     * 
                     */
                    int64_t GetAlarmTimestamp() const;

                    /**
                     * 设置Alarm timestamp in Unix time in milliseconds
                     * @param _alarmTimestamp Alarm timestamp in Unix time in milliseconds
                     * 
                     */
                    void SetAlarmTimestamp(const int64_t& _alarmTimestamp);

                    /**
                     * 判断参数 AlarmTimestamp 是否已赋值
                     * @return AlarmTimestamp 是否已赋值
                     * 
                     */
                    bool AlarmTimestampHasBeenSet() const;

                    /**
                     * 获取Handling status. 0: unprocessed. 1: tag disposal. 2: marked as ignored.
                     * @return HandleStatus Handling status. 0: unprocessed. 1: tag disposal. 2: marked as ignored.
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置Handling status. 0: unprocessed. 1: tag disposal. 2: marked as ignored.
                     * @param _handleStatus Handling status. 0: unprocessed. 1: tag disposal. 2: marked as ignored.
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取Alarm object id
                     * @return AlarmId Alarm object id
                     * 
                     */
                    int64_t GetAlarmId() const;

                    /**
                     * 设置Alarm object id
                     * @param _alarmId Alarm object id
                     * 
                     */
                    void SetAlarmId(const int64_t& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Bucket region code value
                     * @return BucketRegionCode Bucket region code value
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置Bucket region code value
                     * @param _bucketRegionCode Bucket region code value
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取Data identification and categorization details
                     * @return CategoryDetails Data identification and categorization details
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置Data identification and categorization details
                     * @param _categoryDetails Data identification and categorization details
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * appid

                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy type. 0: Unknown rule category; 1: abnormal behavior; 2: excessive permissions; 3: resource enumeration; 4: anonymous access.

                     */
                    int64_t m_policyAbnormalType;
                    bool m_policyAbnormalTypeHasBeenSet;

                    /**
                     * Risk level: 0: Normal, 1: Tip, 2: Low, 3: Middle, 4: High, 5: Critical
                     */
                    int64_t m_policyRiskLevel;
                    bool m_policyRiskLevelHasBeenSet;

                    /**
                     * Policy information description
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * Bucket name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Bucket region.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Bucket remarks.
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * Bucket tag information
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * Bucket accessible property
                     */
                    std::string m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * Account uin
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_accountNickName;
                    bool m_accountNickNameHasBeenSet;

                    /**
                     * Identity of the associated account. 1 - Main account. 2 - Sub-account
                     */
                    int64_t m_accountIdentify;
                    bool m_accountIdentifyHasBeenSet;

                    /**
                     * Nickname of the main account to which the sub-account belongs
                     */
                    std::string m_accountMainNickName;
                    bool m_accountMainNickNameHasBeenSet;

                    /**
                     * Alarm timestamp in Unix time in milliseconds
                     */
                    int64_t m_alarmTimestamp;
                    bool m_alarmTimestampHasBeenSet;

                    /**
                     * Handling status. 0: unprocessed. 1: tag disposal. 2: marked as ignored.
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * Alarm object id
                     */
                    int64_t m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Bucket region code value
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * Data identification and categorization details
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_
