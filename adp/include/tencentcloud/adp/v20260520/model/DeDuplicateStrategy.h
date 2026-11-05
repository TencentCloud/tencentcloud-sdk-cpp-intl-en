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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_

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
                * Rules regarding repeated files
                */
                class DeDuplicateStrategy : public AbstractModel
                {
                public:
                    DeDuplicateStrategy();
                    ~DeDuplicateStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Verification method: 1=determine whether they are identical based on document content<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>Determine whether they are identical based on document content (cos_hash)</td></tr></tbody></table></p>
                     * @return CheckType <p>Verification method: 1=determine whether they are identical based on document content<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>Determine whether they are identical based on document content (cos_hash)</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置<p>Verification method: 1=determine whether they are identical based on document content<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>Determine whether they are identical based on document content (cos_hash)</td></tr></tbody></table></p>
                     * @param _checkType <p>Verification method: 1=determine whether they are identical based on document content<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>Determine whether they are identical based on document content (cos_hash)</td></tr></tbody></table></p>
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>Processing method: 1=return an error, 2=skip and return the duplicate document ID<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>Return an error</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>Skip and return the duplicate document ID</td></tr></tbody></table></p>
                     * @return HandleType <p>Processing method: 1=return an error, 2=skip and return the duplicate document ID<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>Return an error</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>Skip and return the duplicate document ID</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetHandleType() const;

                    /**
                     * 设置<p>Processing method: 1=return an error, 2=skip and return the duplicate document ID<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>Return an error</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>Skip and return the duplicate document ID</td></tr></tbody></table></p>
                     * @param _handleType <p>Processing method: 1=return an error, 2=skip and return the duplicate document ID<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>Return an error</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>Skip and return the duplicate document ID</td></tr></tbody></table></p>
                     * 
                     */
                    void SetHandleType(const int64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Verification method: 1=determine whether they are identical based on document content<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_CHECK_TYPE_COS_HASH</td><td>1</td><td>Determine whether they are identical based on document content (cos_hash)</td></tr></tbody></table></p>
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Processing method: 1=return an error, 2=skip and return the duplicate document ID<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_RETURN_ERR</td><td>1</td><td>Return an error</td></tr><tr><td>DUPLICATE_FILE_HANDLE_TYPE_SKIP</td><td>2</td><td>Skip and return the duplicate document ID</td></tr></tbody></table></p>
                     */
                    int64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DEDUPLICATESTRATEGY_H_
