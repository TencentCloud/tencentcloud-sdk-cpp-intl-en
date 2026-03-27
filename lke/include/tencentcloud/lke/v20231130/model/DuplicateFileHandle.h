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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Duplicate document handling method
                */
                class DuplicateFileHandle : public AbstractModel
                {
                public:
                    DuplicateFileHandle();
                    ~DuplicateFileHandle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duplicate document identification method, 1: By document content, i.e., using the cos_hash field to determine whether duplicates exist
                     * @return CheckType Duplicate document identification method, 1: By document content, i.e., using the cos_hash field to determine whether duplicates exist
                     * 
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置Duplicate document identification method, 1: By document content, i.e., using the cos_hash field to determine whether duplicates exist
                     * @param _checkType Duplicate document identification method, 1: By document content, i.e., using the cos_hash field to determine whether duplicates exist
                     * 
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Duplicate document handling method, 1: Return an error, 2: Skip and return the business ID of the duplicate document
                     * @return HandleType Duplicate document handling method, 1: Return an error, 2: Skip and return the business ID of the duplicate document
                     * 
                     */
                    uint64_t GetHandleType() const;

                    /**
                     * 设置Duplicate document handling method, 1: Return an error, 2: Skip and return the business ID of the duplicate document
                     * @param _handleType Duplicate document handling method, 1: Return an error, 2: Skip and return the business ID of the duplicate document
                     * 
                     */
                    void SetHandleType(const uint64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                private:

                    /**
                     * Duplicate document identification method, 1: By document content, i.e., using the cos_hash field to determine whether duplicates exist
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Duplicate document handling method, 1: Return an error, 2: Skip and return the business ID of the duplicate document
                     */
                    uint64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DUPLICATEFILEHANDLE_H_
