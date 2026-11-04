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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBMODIFYEXTENDFIELDS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBMODIFYEXTENDFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Modify the Extension Field of the knowledge base (used to trigger special operations)
                */
                class KBModifyExtendFields : public AbstractModel
                {
                public:
                    KBModifyExtendFields();
                    ~KBModifyExtendFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Scaling operation: 1=trigger recovery from exceeded state<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_EXTENDED_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_EXTENDED_ACTION_RESUME_EXCEEDED</td><td>1</td><td>Trigger recovery from exceeded state (restore the knowledge base from exceeded status to normal status)</td></tr></tbody></table></p>
                     * @return Action <p>Scaling operation: 1=trigger recovery from exceeded state<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_EXTENDED_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_EXTENDED_ACTION_RESUME_EXCEEDED</td><td>1</td><td>Trigger recovery from exceeded state (restore the knowledge base from exceeded status to normal status)</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>Scaling operation: 1=trigger recovery from exceeded state<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_EXTENDED_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_EXTENDED_ACTION_RESUME_EXCEEDED</td><td>1</td><td>Trigger recovery from exceeded state (restore the knowledge base from exceeded status to normal status)</td></tr></tbody></table></p>
                     * @param _action <p>Scaling operation: 1=trigger recovery from exceeded state<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_EXTENDED_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_EXTENDED_ACTION_RESUME_EXCEEDED</td><td>1</td><td>Trigger recovery from exceeded state (restore the knowledge base from exceeded status to normal status)</td></tr></tbody></table></p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * <p>Scaling operation: 1=trigger recovery from exceeded state<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_EXTENDED_ACTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_EXTENDED_ACTION_RESUME_EXCEEDED</td><td>1</td><td>Trigger recovery from exceeded state (restore the knowledge base from exceeded status to normal status)</td></tr></tbody></table></p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBMODIFYEXTENDFIELDS_H_
