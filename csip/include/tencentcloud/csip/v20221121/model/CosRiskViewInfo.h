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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_

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
                * Risk list from the risk perspective
                */
                class CosRiskViewInfo : public AbstractModel
                {
                public:
                    CosRiskViewInfo();
                    ~CosRiskViewInfo() = default;
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
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy classification
                     * @return PolicyType Policy classification
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Policy classification
                     * @param _policyType Policy classification
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
                     * 获取Policy risk level
                     * @return PolicyRiskLevel Policy risk level
                     * 
                     */
                    int64_t GetPolicyRiskLevel() const;

                    /**
                     * 设置Policy risk level
                     * @param _policyRiskLevel Policy risk level
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
                     * 获取Number of buckets to be processed
                     * @return HandleBucketCount Number of buckets to be processed
                     * 
                     */
                    int64_t GetHandleBucketCount() const;

                    /**
                     * 设置Number of buckets to be processed
                     * @param _handleBucketCount Number of buckets to be processed
                     * 
                     */
                    void SetHandleBucketCount(const int64_t& _handleBucketCount);

                    /**
                     * 判断参数 HandleBucketCount 是否已赋值
                     * @return HandleBucketCount 是否已赋值
                     * 
                     */
                    bool HandleBucketCountHasBeenSet() const;

                    /**
                     * 获取Most recent risk detection time in Unix timestamp in milliseconds
                     * @return LastScanTimestamp Most recent risk detection time in Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetLastScanTimestamp() const;

                    /**
                     * 设置Most recent risk detection time in Unix timestamp in milliseconds
                     * @param _lastScanTimestamp Most recent risk detection time in Unix timestamp in milliseconds
                     * 
                     */
                    void SetLastScanTimestamp(const int64_t& _lastScanTimestamp);

                    /**
                     * 判断参数 LastScanTimestamp 是否已赋值
                     * @return LastScanTimestamp 是否已赋值
                     * 
                     */
                    bool LastScanTimestampHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy classification
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy risk level
                     */
                    int64_t m_policyRiskLevel;
                    bool m_policyRiskLevelHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * Number of buckets to be processed
                     */
                    int64_t m_handleBucketCount;
                    bool m_handleBucketCountHasBeenSet;

                    /**
                     * Most recent risk detection time in Unix timestamp in milliseconds
                     */
                    int64_t m_lastScanTimestamp;
                    bool m_lastScanTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKVIEWINFO_H_
