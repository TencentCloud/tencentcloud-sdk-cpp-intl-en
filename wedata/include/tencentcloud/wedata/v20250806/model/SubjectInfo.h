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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SUBJECTINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SUBJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * SubjectInfo
                */
                class SubjectInfo : public AbstractModel
                {
                public:
                    SubjectInfo();
                    ~SubjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type.
                     * @return SubjectType Type.
                     * 
                     */
                    std::string GetSubjectType() const;

                    /**
                     * 设置Type.
                     * @param _subjectType Type.
                     * 
                     */
                    void SetSubjectType(const std::string& _subjectType);

                    /**
                     * 判断参数 SubjectType 是否已赋值
                     * @return SubjectType 是否已赋值
                     * 
                     */
                    bool SubjectTypeHasBeenSet() const;

                    /**
                     * 获取Topic type display name.
                     * @return SubjectTypeDisplayName Topic type display name.
                     * 
                     */
                    std::string GetSubjectTypeDisplayName() const;

                    /**
                     * 设置Topic type display name.
                     * @param _subjectTypeDisplayName Topic type display name.
                     * 
                     */
                    void SetSubjectTypeDisplayName(const std::string& _subjectTypeDisplayName);

                    /**
                     * 判断参数 SubjectTypeDisplayName 是否已赋值
                     * @return SubjectTypeDisplayName 是否已赋值
                     * 
                     */
                    bool SubjectTypeDisplayNameHasBeenSet() const;

                    /**
                     * 获取Subject id.
                     * @return SubjectValue Subject id.
                     * 
                     */
                    std::string GetSubjectValue() const;

                    /**
                     * 设置Subject id.
                     * @param _subjectValue Subject id.
                     * 
                     */
                    void SetSubjectValue(const std::string& _subjectValue);

                    /**
                     * 判断参数 SubjectValue 是否已赋值
                     * @return SubjectValue 是否已赋值
                     * 
                     */
                    bool SubjectValueHasBeenSet() const;

                    /**
                     * 获取Subject name.
                     * @return SubjectValueDisplayName Subject name.
                     * 
                     */
                    std::string GetSubjectValueDisplayName() const;

                    /**
                     * 设置Subject name.
                     * @param _subjectValueDisplayName Subject name.
                     * 
                     */
                    void SetSubjectValueDisplayName(const std::string& _subjectValueDisplayName);

                    /**
                     * 判断参数 SubjectValueDisplayName 是否已赋值
                     * @return SubjectValueDisplayName 是否已赋值
                     * 
                     */
                    bool SubjectValueDisplayNameHasBeenSet() const;

                private:

                    /**
                     * Type.
                     */
                    std::string m_subjectType;
                    bool m_subjectTypeHasBeenSet;

                    /**
                     * Topic type display name.
                     */
                    std::string m_subjectTypeDisplayName;
                    bool m_subjectTypeDisplayNameHasBeenSet;

                    /**
                     * Subject id.
                     */
                    std::string m_subjectValue;
                    bool m_subjectValueHasBeenSet;

                    /**
                     * Subject name.
                     */
                    std::string m_subjectValueDisplayName;
                    bool m_subjectValueDisplayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SUBJECTINFO_H_
