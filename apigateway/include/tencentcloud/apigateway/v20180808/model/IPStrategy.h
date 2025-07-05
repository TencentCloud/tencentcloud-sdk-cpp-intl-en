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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/DesApisStatus.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * IP policy
                */
                class IPStrategy : public AbstractModel
                {
                public:
                    IPStrategy();
                    ~IPStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique policy ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Unique policy ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Unique policy ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Unique policy ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Custom policy name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StrategyName Custom policy name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Custom policy name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _strategyName Custom policy name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: WHITE (allowlist), BLACK (blocklist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StrategyType Policy type. Valid values: WHITE (allowlist), BLACK (blocklist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置Policy type. Valid values: WHITE (allowlist), BLACK (blocklist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _strategyType Policy type. Valid values: WHITE (allowlist), BLACK (blocklist).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取IP list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StrategyData IP list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置IP list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _strategyData IP list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     * 
                     */
                    bool StrategyDataHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Modification time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Modification time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Modification time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Modification time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serviceId Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Number of APIs bound to policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindApiTotalCount Number of APIs bound to policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindApiTotalCount() const;

                    /**
                     * 设置Number of APIs bound to policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindApiTotalCount Number of APIs bound to policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindApiTotalCount(const int64_t& _bindApiTotalCount);

                    /**
                     * 判断参数 BindApiTotalCount 是否已赋值
                     * @return BindApiTotalCount 是否已赋值
                     * 
                     */
                    bool BindApiTotalCountHasBeenSet() const;

                    /**
                     * 获取Bound API details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindApis Bound API details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DesApisStatus> GetBindApis() const;

                    /**
                     * 设置Bound API details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindApis Bound API details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindApis(const std::vector<DesApisStatus>& _bindApis);

                    /**
                     * 判断参数 BindApis 是否已赋值
                     * @return BindApis 是否已赋值
                     * 
                     */
                    bool BindApisHasBeenSet() const;

                private:

                    /**
                     * Unique policy ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Custom policy name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Policy type. Valid values: WHITE (allowlist), BLACK (blocklist).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * IP list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Modification time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Number of APIs bound to policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindApiTotalCount;
                    bool m_bindApiTotalCountHasBeenSet;

                    /**
                     * Bound API details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DesApisStatus> m_bindApis;
                    bool m_bindApisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGY_H_
