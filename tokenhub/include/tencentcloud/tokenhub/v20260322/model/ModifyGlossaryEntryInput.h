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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYGLOSSARYENTRYINPUT_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYGLOSSARYENTRYINPUT_H_

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
                * Modify terminology entry
                */
                class ModifyGlossaryEntryInput : public AbstractModel
                {
                public:
                    ModifyGlossaryEntryInput();
                    ~ModifyGlossaryEntryInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Terminology entry ID. Obtain through the API DescribeGlossaryEntries.
                     * @return EntryId Terminology entry ID. Obtain through the API DescribeGlossaryEntries.
                     * 
                     */
                    std::string GetEntryId() const;

                    /**
                     * 设置Terminology entry ID. Obtain through the API DescribeGlossaryEntries.
                     * @param _entryId Terminology entry ID. Obtain through the API DescribeGlossaryEntries.
                     * 
                     */
                    void SetEntryId(const std::string& _entryId);

                    /**
                     * 判断参数 EntryId 是否已赋值
                     * @return EntryId 是否已赋值
                     * 
                     */
                    bool EntryIdHasBeenSet() const;

                    /**
                     * 获取Source language terminology. Maximum 1000 characters. If not passed, remain unchanged.
                     * @return SourceTerm Source language terminology. Maximum 1000 characters. If not passed, remain unchanged.
                     * 
                     */
                    std::string GetSourceTerm() const;

                    /**
                     * 设置Source language terminology. Maximum 1000 characters. If not passed, remain unchanged.
                     * @param _sourceTerm Source language terminology. Maximum 1000 characters. If not passed, remain unchanged.
                     * 
                     */
                    void SetSourceTerm(const std::string& _sourceTerm);

                    /**
                     * 判断参数 SourceTerm 是否已赋值
                     * @return SourceTerm 是否已赋值
                     * 
                     */
                    bool SourceTermHasBeenSet() const;

                    /**
                     * 获取Target language terminology. Maximum 1000 characters. Remain unchanged if not passed.
                     * @return TargetTerm Target language terminology. Maximum 1000 characters. Remain unchanged if not passed.
                     * 
                     */
                    std::string GetTargetTerm() const;

                    /**
                     * 设置Target language terminology. Maximum 1000 characters. Remain unchanged if not passed.
                     * @param _targetTerm Target language terminology. Maximum 1000 characters. Remain unchanged if not passed.
                     * 
                     */
                    void SetTargetTerm(const std::string& _targetTerm);

                    /**
                     * 判断参数 TargetTerm 是否已赋值
                     * @return TargetTerm 是否已赋值
                     * 
                     */
                    bool TargetTermHasBeenSet() const;

                private:

                    /**
                     * Terminology entry ID. Obtain through the API DescribeGlossaryEntries.
                     */
                    std::string m_entryId;
                    bool m_entryIdHasBeenSet;

                    /**
                     * Source language terminology. Maximum 1000 characters. If not passed, remain unchanged.
                     */
                    std::string m_sourceTerm;
                    bool m_sourceTermHasBeenSet;

                    /**
                     * Target language terminology. Maximum 1000 characters. Remain unchanged if not passed.
                     */
                    std::string m_targetTerm;
                    bool m_targetTermHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYGLOSSARYENTRYINPUT_H_
