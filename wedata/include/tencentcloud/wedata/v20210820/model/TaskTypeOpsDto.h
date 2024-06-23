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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEOPSDTO_H_

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
                * Basic Information of Task Type
                */
                class TaskTypeOpsDto : public AbstractModel
                {
                public:
                    TaskTypeOpsDto();
                    ~TaskTypeOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TypeDesc Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTypeDesc() const;

                    /**
                     * 设置Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _typeDesc Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeDesc(const std::string& _typeDesc);

                    /**
                     * 判断参数 TypeDesc 是否已赋值
                     * @return TypeDesc 是否已赋值
                     * 
                     */
                    bool TypeDescHasBeenSet() const;

                    /**
                     * 获取Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TypeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _typeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Task Type Categorization
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TypeSort Task Type Categorization
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTypeSort() const;

                    /**
                     * 设置Task Type Categorization
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _typeSort Task Type Categorization
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeSort(const std::string& _typeSort);

                    /**
                     * 判断参数 TypeSort 是否已赋值
                     * @return TypeSort 是否已赋值
                     * 
                     */
                    bool TypeSortHasBeenSet() const;

                private:

                    /**
                     * Task Type Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_typeDesc;
                    bool m_typeDescHasBeenSet;

                    /**
                     * Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Task Type Categorization
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_typeSort;
                    bool m_typeSortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEOPSDTO_H_
