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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEKBREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEKBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateKB request structure.
                */
                class CreateKBRequest : public AbstractModel
                {
                public:
                    CreateKBRequest();
                    ~CreateKBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Knowledge base type (0 not allowed. Parameter Value: 1=default knowledge base, 2=shared knowledge base)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * @return KbType <p>Knowledge base type (0 not allowed. Parameter Value: 1=default knowledge base, 2=shared knowledge base)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKbType() const;

                    /**
                     * 设置<p>Knowledge base type (0 not allowed. Parameter Value: 1=default knowledge base, 2=shared knowledge base)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * @param _kbType <p>Knowledge base type (0 not allowed. Parameter Value: 1=default knowledge base, 2=shared knowledge base)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKbType(const int64_t& _kbType);

                    /**
                     * 判断参数 KbType 是否已赋值
                     * @return KbType 是否已赋值
                     * 
                     */
                    bool KbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Workspace ID</p>
                     * @return SpaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _spaceId <p>Workspace ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Writable attribute</p>
                     * @return Spec <p>Writable attribute</p>
                     * 
                     */
                    KBSpec GetSpec() const;

                    /**
                     * 设置<p>Writable attribute</p>
                     * @param _spec <p>Writable attribute</p>
                     * 
                     */
                    void SetSpec(const KBSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat Official Account</td></tr></tbody></table></p>
                     * @return SharedSubType <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat Official Account</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSharedSubType() const;

                    /**
                     * 设置<p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat Official Account</td></tr></tbody></table></p>
                     * @param _sharedSubType <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat Official Account</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSharedSubType(const int64_t& _sharedSubType);

                    /**
                     * 判断参数 SharedSubType 是否已赋值
                     * @return SharedSubType 是否已赋值
                     * 
                     */
                    bool SharedSubTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Knowledge base type (0 not allowed. Parameter Value: 1=default knowledge base, 2=shared knowledge base)<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KB_TYPE_DEFAULT</td><td>1</td><td>Default knowledge base</td></tr><tr><td>KB_TYPE_SHARED</td><td>2</td><td>Shared knowledge base</td></tr></tbody></table></p>
                     */
                    int64_t m_kbType;
                    bool m_kbTypeHasBeenSet;

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Writable attribute</p>
                     */
                    KBSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>Share sub-type: 1=ordinary, 2=wechat official account<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SHARED_KB_SUB_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SHARED_KB_SUB_TYPE_NORMAL</td><td>1</td><td>Ordinary</td></tr><tr><td>SHARED_KB_SUB_TYPE_PUBLIC_ACCOUNT</td><td>2</td><td>WeChat Official Account</td></tr></tbody></table></p>
                     */
                    int64_t m_sharedSubType;
                    bool m_sharedSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEKBREQUEST_H_
