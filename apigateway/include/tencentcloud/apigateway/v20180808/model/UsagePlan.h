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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * `usagePlan` details
                */
                class UsagePlan : public AbstractModel
                {
                public:
                    UsagePlan();
                    ~UsagePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment name.
                     * @return Environment Environment name.
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment name.
                     * @param _environment Environment name.
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Unique usage plan ID.
                     * @return UsagePlanId Unique usage plan ID.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique usage plan ID.
                     * @param _usagePlanId Unique usage plan ID.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取Usage plan name.
                     * @return UsagePlanName Usage plan name.
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置Usage plan name.
                     * @param _usagePlanName Usage plan name.
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取Usage plan description. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsagePlanDesc Usage plan description. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置Usage plan description. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usagePlanDesc Usage plan description. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取Usage plan QPS. `-1` indicates no limit.
                     * @return MaxRequestNumPreSec Usage plan QPS. `-1` indicates no limit.
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置Usage plan QPS. `-1` indicates no limit.
                     * @param _maxRequestNumPreSec Usage plan QPS. `-1` indicates no limit.
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                    /**
                     * 获取Usage plan time.
                     * @return CreatedTime Usage plan time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Usage plan time.
                     * @param _createdTime Usage plan time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Usage plan modification time.
                     * @return ModifiedTime Usage plan modification time.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Usage plan modification time.
                     * @param _modifiedTime Usage plan modification time.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * Environment name.
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Unique usage plan ID.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * Usage plan name.
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * Usage plan description. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * Usage plan QPS. `-1` indicates no limit.
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * Usage plan time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Usage plan modification time.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_
