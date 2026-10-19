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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Affected bucket information
                */
                class CosRiskBucketInfo : public AbstractModel
                {
                public:
                    CosRiskBucketInfo();
                    ~CosRiskBucketInfo() = default;
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
                     * 获取Bucket remark information
                     * @return BucketMarker Bucket remark information
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置Bucket remark information
                     * @param _bucketMarker Bucket remark information
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
                     * 获取Bucket uin
                     * @return BucketUin Bucket uin
                     * 
                     */
                    std::string GetBucketUin() const;

                    /**
                     * 设置Bucket uin
                     * @param _bucketUin Bucket uin
                     * 
                     */
                    void SetBucketUin(const std::string& _bucketUin);

                    /**
                     * 判断参数 BucketUin 是否已赋值
                     * @return BucketUin 是否已赋值
                     * 
                     */
                    bool BucketUinHasBeenSet() const;

                    /**
                     * 获取uin nickname
                     * @return BucketNickName uin nickname
                     * 
                     */
                    std::string GetBucketNickName() const;

                    /**
                     * 设置uin nickname
                     * @param _bucketNickName uin nickname
                     * 
                     */
                    void SetBucketNickName(const std::string& _bucketNickName);

                    /**
                     * 判断参数 BucketNickName 是否已赋值
                     * @return BucketNickName 是否已赋值
                     * 
                     */
                    bool BucketNickNameHasBeenSet() const;

                    /**
                     * 获取uin root account nickname
                     * @return BucketMainNickName uin root account nickname
                     * 
                     */
                    std::string GetBucketMainNickName() const;

                    /**
                     * 设置uin root account nickname
                     * @param _bucketMainNickName uin root account nickname
                     * 
                     */
                    void SetBucketMainNickName(const std::string& _bucketMainNickName);

                    /**
                     * 判断参数 BucketMainNickName 是否已赋值
                     * @return BucketMainNickName 是否已赋值
                     * 
                     */
                    bool BucketMainNickNameHasBeenSet() const;

                    /**
                     * 获取uin identity
                     * @return BucketIdentify uin identity
                     * 
                     */
                    int64_t GetBucketIdentify() const;

                    /**
                     * 设置uin identity
                     * @param _bucketIdentify uin identity
                     * 
                     */
                    void SetBucketIdentify(const int64_t& _bucketIdentify);

                    /**
                     * 判断参数 BucketIdentify 是否已赋值
                     * @return BucketIdentify 是否已赋值
                     * 
                     */
                    bool BucketIdentifyHasBeenSet() const;

                    /**
                     * 获取Risk detection time in Unix timestamp in milliseconds
                     * @return LastScanTimestamp Risk detection time in Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetLastScanTimestamp() const;

                    /**
                     * 设置Risk detection time in Unix timestamp in milliseconds
                     * @param _lastScanTimestamp Risk detection time in Unix timestamp in milliseconds
                     * 
                     */
                    void SetLastScanTimestamp(const int64_t& _lastScanTimestamp);

                    /**
                     * 判断参数 LastScanTimestamp 是否已赋值
                     * @return LastScanTimestamp 是否已赋值
                     * 
                     */
                    bool LastScanTimestampHasBeenSet() const;

                    /**
                     * 获取Status Information
                     * @return HandleStatus Status Information
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置Status Information
                     * @param _handleStatus Status Information
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
                     * 获取Risk name
                     * @return PolicyName Risk name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Risk name
                     * @param _policyName Risk name
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
                     * 获取Risk type
                     * @return PolicyType Risk type
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Risk type
                     * @param _policyType Risk type
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

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
                     * 获取Policy level
                     * @return PolicyLevel Policy level
                     * 
                     */
                    int64_t GetPolicyLevel() const;

                    /**
                     * 设置Policy level
                     * @param _policyLevel Policy level
                     * 
                     */
                    void SetPolicyLevel(const int64_t& _policyLevel);

                    /**
                     * 判断参数 PolicyLevel 是否已赋值
                     * @return PolicyLevel 是否已赋值
                     * 
                     */
                    bool PolicyLevelHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return PolicyDescription Policy description
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置Policy description
                     * @param _policyDescription Policy description
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
                     * 获取Access method
                     * @return BucketAccessWay Access method
                     * 
                     */
                    std::string GetBucketAccessWay() const;

                    /**
                     * 设置Access method
                     * @param _bucketAccessWay Access method
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
                     * 获取Tag information.
                     * @return BucketTagInfo Tag information.
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置Tag information.
                     * @param _bucketTagInfo Tag information.
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
                     * 获取Risk id
                     * @return RiskId Risk id
                     * 
                     */
                    int64_t GetRiskId() const;

                    /**
                     * 设置Risk id
                     * @param _riskId Risk id
                     * 
                     */
                    void SetRiskId(const int64_t& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取cos region code value
                     * @return BucketRegionCode cos region code value
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置cos region code value
                     * @param _bucketRegionCode cos region code value
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
                     * 获取Whether automatic monitoring is enabled. 0: disabled. 1: enabled.
                     * @return BucketMonitorStatus Whether automatic monitoring is enabled. 0: disabled. 1: enabled.
                     * 
                     */
                    uint64_t GetBucketMonitorStatus() const;

                    /**
                     * 设置Whether automatic monitoring is enabled. 0: disabled. 1: enabled.
                     * @param _bucketMonitorStatus Whether automatic monitoring is enabled. 0: disabled. 1: enabled.
                     * 
                     */
                    void SetBucketMonitorStatus(const uint64_t& _bucketMonitorStatus);

                    /**
                     * 判断参数 BucketMonitorStatus 是否已赋值
                     * @return BucketMonitorStatus 是否已赋值
                     * 
                     */
                    bool BucketMonitorStatusHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * Bucket remark information
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * Bucket uin
                     */
                    std::string m_bucketUin;
                    bool m_bucketUinHasBeenSet;

                    /**
                     * uin nickname
                     */
                    std::string m_bucketNickName;
                    bool m_bucketNickNameHasBeenSet;

                    /**
                     * uin root account nickname
                     */
                    std::string m_bucketMainNickName;
                    bool m_bucketMainNickNameHasBeenSet;

                    /**
                     * uin identity
                     */
                    int64_t m_bucketIdentify;
                    bool m_bucketIdentifyHasBeenSet;

                    /**
                     * Risk detection time in Unix timestamp in milliseconds
                     */
                    int64_t m_lastScanTimestamp;
                    bool m_lastScanTimestampHasBeenSet;

                    /**
                     * Status Information
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * Risk name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Risk type
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy level
                     */
                    int64_t m_policyLevel;
                    bool m_policyLevelHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * Access method
                     */
                    std::string m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * Tag information.
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * Risk id
                     */
                    int64_t m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * cos region code value
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * Whether automatic monitoring is enabled. 0: disabled. 1: enabled.
                     */
                    uint64_t m_bucketMonitorStatus;
                    bool m_bucketMonitorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKBUCKETINFO_H_
