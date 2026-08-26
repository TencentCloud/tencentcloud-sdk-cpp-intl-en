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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * API Key limit and usage information
                */
                class SubPackageBalance : public AbstractModel
                {
                public:
                    SubPackageBalance();
                    ~SubPackageBalance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dedicated limit. Units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @return ExclusiveQuota Dedicated limit. Units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    std::string GetExclusiveQuota() const;

                    /**
                     * 设置Dedicated limit. Units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @param _exclusiveQuota Dedicated limit. Units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    void SetExclusiveQuota(const std::string& _exclusiveQuota);

                    /**
                     * 判断参数 ExclusiveQuota 是否已赋值
                     * @return ExclusiveQuota 是否已赋值
                     * 
                     */
                    bool ExclusiveQuotaHasBeenSet() const;

                    /**
                     * 获取Used amount of the dedicated limit. The measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @return ExclusiveUsed Used amount of the dedicated limit. The measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    std::string GetExclusiveUsed() const;

                    /**
                     * 设置Used amount of the dedicated limit. The measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * @param _exclusiveUsed Used amount of the dedicated limit. The measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     * 
                     */
                    void SetExclusiveUsed(const std::string& _exclusiveUsed);

                    /**
                     * 判断参数 ExclusiveUsed 是否已赋值
                     * @return ExclusiveUsed 是否已赋值
                     * 
                     */
                    bool ExclusiveUsedHasBeenSet() const;

                    /**
                     * 获取Remaining exclusive quota. Units are as follows:
-Package type: professional. Measurement unit: point.
-Package type: lite package. Measurement unit: token.
                     * @return ExclusiveRemain Remaining exclusive quota. Units are as follows:
-Package type: professional. Measurement unit: point.
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    std::string GetExclusiveRemain() const;

                    /**
                     * 设置Remaining exclusive quota. Units are as follows:
-Package type: professional. Measurement unit: point.
-Package type: lite package. Measurement unit: token.
                     * @param _exclusiveRemain Remaining exclusive quota. Units are as follows:
-Package type: professional. Measurement unit: point.
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    void SetExclusiveRemain(const std::string& _exclusiveRemain);

                    /**
                     * 判断参数 ExclusiveRemain 是否已赋值
                     * @return ExclusiveRemain 是否已赋值
                     * 
                     */
                    bool ExclusiveRemainHasBeenSet() const;

                    /**
                     * 获取Shared credit limit. -1 means unlimited. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @return SharedQuota Shared credit limit. -1 means unlimited. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    std::string GetSharedQuota() const;

                    /**
                     * 设置Shared credit limit. -1 means unlimited. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @param _sharedQuota Shared credit limit. -1 means unlimited. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    void SetSharedQuota(const std::string& _sharedQuota);

                    /**
                     * 判断参数 SharedQuota 是否已赋值
                     * @return SharedQuota 是否已赋值
                     * 
                     */
                    bool SharedQuotaHasBeenSet() const;

                    /**
                     * 获取Used amount of the shared quota. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @return SharedUsed Used amount of the shared quota. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    std::string GetSharedUsed() const;

                    /**
                     * 设置Used amount of the shared quota. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @param _sharedUsed Used amount of the shared quota. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    void SetSharedUsed(const std::string& _sharedUsed);

                    /**
                     * 判断参数 SharedUsed 是否已赋值
                     * @return SharedUsed 是否已赋值
                     * 
                     */
                    bool SharedUsedHasBeenSet() const;

                    /**
                     * 获取Remaining shared quota. Units are described as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @return SharedRemain Remaining shared quota. Units are described as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    std::string GetSharedRemain() const;

                    /**
                     * 设置Remaining shared quota. Units are described as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * @param _sharedRemain Remaining shared quota. Units are described as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     * 
                     */
                    void SetSharedRemain(const std::string& _sharedRemain);

                    /**
                     * 判断参数 SharedRemain 是否已赋值
                     * @return SharedRemain 是否已赋值
                     * 
                     */
                    bool SharedRemainHasBeenSet() const;

                    /**
                     * 获取API Key package status. Valid values: 0 (normal), 1 (exhausted).
                     * @return Status API Key package status. Valid values: 0 (normal), 1 (exhausted).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置API Key package status. Valid values: 0 (normal), 1 (exhausted).
                     * @param _status API Key package status. Valid values: 0 (normal), 1 (exhausted).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Dedicated limit. Units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     */
                    std::string m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * Used amount of the dedicated limit. The measurement units are as follows:
-Package type: professional. Measurement unit: point.
- Package type is lite package, and the measurement unit is token.
                     */
                    std::string m_exclusiveUsed;
                    bool m_exclusiveUsedHasBeenSet;

                    /**
                     * Remaining exclusive quota. Units are as follows:
-Package type: professional. Measurement unit: point.
-Package type: lite package. Measurement unit: token.
                     */
                    std::string m_exclusiveRemain;
                    bool m_exclusiveRemainHasBeenSet;

                    /**
                     * Shared credit limit. -1 means unlimited. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     */
                    std::string m_sharedQuota;
                    bool m_sharedQuotaHasBeenSet;

                    /**
                     * Used amount of the shared quota. Measurement units are as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     */
                    std::string m_sharedUsed;
                    bool m_sharedUsedHasBeenSet;

                    /**
                     * Remaining shared quota. Units are described as follows:
-Package type is professional package, measurement unit value is point;
-Package type: lite package. Measurement unit: token.
                     */
                    std::string m_sharedRemain;
                    bool m_sharedRemainHasBeenSet;

                    /**
                     * API Key package status. Valid values: 0 (normal), 1 (exhausted).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_
