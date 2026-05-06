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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/TSEGatewaySelector.h>
#include <tencentcloud/tse/v20201207/model/ServiceGatewaySelector.h>
#include <tencentcloud/tse/v20201207/model/ServiceSelector.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * lane entrance info
                */
                class LaneTrafficEntry : public AbstractModel
                {
                public:
                    LaneTrafficEntry();
                    ~LaneTrafficEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取// If type == "polarismesh.cn/gateway/tse-gateway", the selector is TSEGatewaySelector.
// type == "polarismesh.cn/gateway/spring-cloud-gateway", selector is ServiceGatewaySelector
// If type == "polarismesh.cn/service", selector is ServiceSelector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EntryType // If type == "polarismesh.cn/gateway/tse-gateway", the selector is TSEGatewaySelector.
// type == "polarismesh.cn/gateway/spring-cloud-gateway", selector is ServiceGatewaySelector
// If type == "polarismesh.cn/service", selector is ServiceSelector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEntryType() const;

                    /**
                     * 设置// If type == "polarismesh.cn/gateway/tse-gateway", the selector is TSEGatewaySelector.
// type == "polarismesh.cn/gateway/spring-cloud-gateway", selector is ServiceGatewaySelector
// If type == "polarismesh.cn/service", selector is ServiceSelector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _entryType // If type == "polarismesh.cn/gateway/tse-gateway", the selector is TSEGatewaySelector.
// type == "polarismesh.cn/gateway/spring-cloud-gateway", selector is ServiceGatewaySelector
// If type == "polarismesh.cn/service", selector is ServiceSelector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEntryType(const std::string& _entryType);

                    /**
                     * 判断参数 EntryType 是否已赋值
                     * @return EntryType 是否已赋值
                     * 
                     */
                    bool EntryTypeHasBeenSet() const;

                    /**
                     * 获取TSE cloud-native gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TSEGatewaySelector TSE cloud-native gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TSEGatewaySelector GetTSEGatewaySelector() const;

                    /**
                     * 设置TSE cloud-native gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tSEGatewaySelector TSE cloud-native gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTSEGatewaySelector(const TSEGatewaySelector& _tSEGatewaySelector);

                    /**
                     * 判断参数 TSEGatewaySelector 是否已赋值
                     * @return TSEGatewaySelector 是否已赋值
                     * 
                     */
                    bool TSEGatewaySelectorHasBeenSet() const;

                    /**
                     * 获取Microservice gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceGatewaySelector Microservice gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceGatewaySelector GetServiceGatewaySelector() const;

                    /**
                     * 设置Microservice gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceGatewaySelector Microservice gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceGatewaySelector(const ServiceGatewaySelector& _serviceGatewaySelector);

                    /**
                     * 判断参数 ServiceGatewaySelector 是否已赋值
                     * @return ServiceGatewaySelector 是否已赋值
                     * 
                     */
                    bool ServiceGatewaySelectorHasBeenSet() const;

                    /**
                     * 获取Standard microservice selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceSelector Standard microservice selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceSelector GetServiceSelector() const;

                    /**
                     * 设置Standard microservice selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceSelector Standard microservice selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceSelector(const ServiceSelector& _serviceSelector);

                    /**
                     * 判断参数 ServiceSelector 是否已赋值
                     * @return ServiceSelector 是否已赋值
                     * 
                     */
                    bool ServiceSelectorHasBeenSet() const;

                private:

                    /**
                     * // If type == "polarismesh.cn/gateway/tse-gateway", the selector is TSEGatewaySelector.
// type == "polarismesh.cn/gateway/spring-cloud-gateway", selector is ServiceGatewaySelector
// If type == "polarismesh.cn/service", selector is ServiceSelector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_entryType;
                    bool m_entryTypeHasBeenSet;

                    /**
                     * TSE cloud-native gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TSEGatewaySelector m_tSEGatewaySelector;
                    bool m_tSEGatewaySelectorHasBeenSet;

                    /**
                     * Microservice gateway selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceGatewaySelector m_serviceGatewaySelector;
                    bool m_serviceGatewaySelectorHasBeenSet;

                    /**
                     * Standard microservice selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceSelector m_serviceSelector;
                    bool m_serviceSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_
