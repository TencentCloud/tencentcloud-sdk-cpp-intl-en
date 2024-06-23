/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPECNT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPECNT_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TaskTypeCnt
                */
                class TaskTypeCnt : public AbstractModel
                {
                public:
                    TaskTypeCnt();
                    ~TaskTypeCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Number Statistical value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Statistical value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _number Statistical value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskType Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Type name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TypeName Type name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Type name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _typeName Type name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                private:

                    /**
                     * Statistical value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Type name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPECNT_H_
