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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_

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
                * Risk call record details.
                */
                class RiskCallRecord : public AbstractModel
                {
                public:
                    RiskCallRecord();
                    ~RiskCallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API name.
                     * @return EventName API name.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置API name.
                     * @param _eventName API name.
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Chinese description of the API.
                     * @return EventDescCN Chinese description of the API.
                     * 
                     */
                    std::string GetEventDescCN() const;

                    /**
                     * 设置Chinese description of the API.
                     * @param _eventDescCN Chinese description of the API.
                     * 
                     */
                    void SetEventDescCN(const std::string& _eventDescCN);

                    /**
                     * 判断参数 EventDescCN 是否已赋值
                     * @return EventDescCN 是否已赋值
                     * 
                     */
                    bool EventDescCNHasBeenSet() const;

                    /**
                     * 获取Interface description.
                     * @return EventDescEN Interface description.
                     * 
                     */
                    std::string GetEventDescEN() const;

                    /**
                     * 设置Interface description.
                     * @param _eventDescEN Interface description.
                     * 
                     */
                    void SetEventDescEN(const std::string& _eventDescEN);

                    /**
                     * 判断参数 EventDescEN 是否已赋值
                     * @return EventDescEN 是否已赋值
                     * 
                     */
                    bool EventDescENHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Product Chinese Name
                     * @return ProductNameCN Product Chinese Name
                     * 
                     */
                    std::string GetProductNameCN() const;

                    /**
                     * 设置Product Chinese Name
                     * @param _productNameCN Product Chinese Name
                     * 
                     */
                    void SetProductNameCN(const std::string& _productNameCN);

                    /**
                     * 判断参数 ProductNameCN 是否已赋值
                     * @return ProductNameCN 是否已赋值
                     * 
                     */
                    bool ProductNameCNHasBeenSet() const;

                    /**
                     * 获取Number of calls.
                     * @return CallCount Number of calls.
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置Number of calls.
                     * @param _callCount Number of calls.
                     * 
                     */
                    void SetCallCount(const int64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                private:

                    /**
                     * API name.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Chinese description of the API.
                     */
                    std::string m_eventDescCN;
                    bool m_eventDescCNHasBeenSet;

                    /**
                     * Interface description.
                     */
                    std::string m_eventDescEN;
                    bool m_eventDescENHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Product Chinese Name
                     */
                    std::string m_productNameCN;
                    bool m_productNameCNHasBeenSet;

                    /**
                     * Number of calls.
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_
