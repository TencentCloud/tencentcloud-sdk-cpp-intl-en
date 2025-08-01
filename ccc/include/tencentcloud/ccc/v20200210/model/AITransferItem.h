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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AITRANSFERITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AITRANSFERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI to human configuration item.
                */
                class AITransferItem : public AbstractModel
                {
                public:
                    AITransferItem();
                    ~AITransferItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the function calling for transfer to human.
                     * @return TransferFunctionName Name of the function calling for transfer to human.
                     * 
                     */
                    std::string GetTransferFunctionName() const;

                    /**
                     * 设置Name of the function calling for transfer to human.
                     * @param _transferFunctionName Name of the function calling for transfer to human.
                     * 
                     */
                    void SetTransferFunctionName(const std::string& _transferFunctionName);

                    /**
                     * 判断参数 TransferFunctionName 是否已赋值
                     * @return TransferFunctionName 是否已赋值
                     * 
                     */
                    bool TransferFunctionNameHasBeenSet() const;

                    /**
                     * 获取Takes effect when transferfunctionenable is true; the description of transfer_to_human function calling defaults to "transfer to human when the user has to transfer to human (like says transfer to human) or you are instructed to do so.".
                     * @return TransferFunctionDesc Takes effect when transferfunctionenable is true; the description of transfer_to_human function calling defaults to "transfer to human when the user has to transfer to human (like says transfer to human) or you are instructed to do so.".
                     * 
                     */
                    std::string GetTransferFunctionDesc() const;

                    /**
                     * 设置Takes effect when transferfunctionenable is true; the description of transfer_to_human function calling defaults to "transfer to human when the user has to transfer to human (like says transfer to human) or you are instructed to do so.".
                     * @param _transferFunctionDesc Takes effect when transferfunctionenable is true; the description of transfer_to_human function calling defaults to "transfer to human when the user has to transfer to human (like says transfer to human) or you are instructed to do so.".
                     * 
                     */
                    void SetTransferFunctionDesc(const std::string& _transferFunctionDesc);

                    /**
                     * 判断参数 TransferFunctionDesc 是否已赋值
                     * @return TransferFunctionDesc 是否已赋值
                     * 
                     */
                    bool TransferFunctionDescHasBeenSet() const;

                    /**
                     * 获取Skill group id for transferring to human agent.
                     * @return TransferSkillGroupId Skill group id for transferring to human agent.
                     * 
                     */
                    uint64_t GetTransferSkillGroupId() const;

                    /**
                     * 设置Skill group id for transferring to human agent.
                     * @param _transferSkillGroupId Skill group id for transferring to human agent.
                     * 
                     */
                    void SetTransferSkillGroupId(const uint64_t& _transferSkillGroupId);

                    /**
                     * 判断参数 TransferSkillGroupId 是否已赋值
                     * @return TransferSkillGroupId 是否已赋值
                     * 
                     */
                    bool TransferSkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * Name of the function calling for transfer to human.
                     */
                    std::string m_transferFunctionName;
                    bool m_transferFunctionNameHasBeenSet;

                    /**
                     * Takes effect when transferfunctionenable is true; the description of transfer_to_human function calling defaults to "transfer to human when the user has to transfer to human (like says transfer to human) or you are instructed to do so.".
                     */
                    std::string m_transferFunctionDesc;
                    bool m_transferFunctionDescHasBeenSet;

                    /**
                     * Skill group id for transferring to human agent.
                     */
                    uint64_t m_transferSkillGroupId;
                    bool m_transferSkillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AITRANSFERITEM_H_
