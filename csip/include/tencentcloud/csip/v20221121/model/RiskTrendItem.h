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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_

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
                * Last day risk summary item
                */
                class RiskTrendItem : public AbstractModel
                {
                public:
                    RiskTrendItem();
                    ~RiskTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk item type: intrusion_alert / vulnerability
                     * @return Key Risk item type: intrusion_alert / vulnerability
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Risk item type: intrusion_alert / vulnerability
                     * @param _key Risk item type: intrusion_alert / vulnerability
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Display name, returned in the language of the request. Vulnerability items use different copywriting based on whether payment is required.
                     * @return Name Display name, returned in the language of the request. Vulnerability items use different copywriting based on whether payment is required.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Display name, returned in the language of the request. Vulnerability items use different copywriting based on whether payment is required.
                     * @param _name Display name, returned in the language of the request. Vulnerability items use different copywriting based on whether payment is required.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of risks
                     * @return Count Number of risks
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of risks
                     * @param _count Number of risks
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Risk item type: intrusion_alert / vulnerability
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Display name, returned in the language of the request. Vulnerability items use different copywriting based on whether payment is required.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of risks
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKTRENDITEM_H_
