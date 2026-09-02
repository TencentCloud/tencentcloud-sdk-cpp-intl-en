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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVERBRIEF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVERBRIEF_H_

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
                * Streamlined info for receiving robot
                */
                class WebhookReceiverBrief : public AbstractModel
                {
                public:
                    WebhookReceiverBrief();
                    ~WebhookReceiverBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bot ID.
                     * @return ID Bot ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Bot ID.
                     * @param _iD Bot ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Bot name
                     * @return Name Bot name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Bot name
                     * @param _name Bot name
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
                     * 获取Robot type
Enumeration values:
WEBHOOK: webhook type
SCF: Cloud function type
                     * @return Type Robot type
Enumeration values:
WEBHOOK: webhook type
SCF: Cloud function type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Robot type
Enumeration values:
WEBHOOK: webhook type
SCF: Cloud function type
                     * @param _type Robot type
Enumeration values:
WEBHOOK: webhook type
SCF: Cloud function type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Bot ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Bot name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Robot type
Enumeration values:
WEBHOOK: webhook type
SCF: Cloud function type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVERBRIEF_H_
