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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QAPERMISSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QAPERMISSION_H_

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
                * QA operation permission information
                */
                class QAPermission : public AbstractModel
                {
                public:
                    QAPermission();
                    ~QAPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether verification is supported (adoption/non-adoption).</p>
                     * @return CanAccept <p>Whether verification is supported (adoption/non-adoption).</p>
                     * 
                     */
                    bool GetCanAccept() const;

                    /**
                     * 设置<p>Whether verification is supported (adoption/non-adoption).</p>
                     * @param _canAccept <p>Whether verification is supported (adoption/non-adoption).</p>
                     * 
                     */
                    void SetCanAccept(const bool& _canAccept);

                    /**
                     * 判断参数 CanAccept 是否已赋值
                     * @return CanAccept 是否已赋值
                     * 
                     */
                    bool CanAcceptHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is deletable.</p>
                     * @return CanDelete <p>Whether it is deletable.</p>
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置<p>Whether it is deletable.</p>
                     * @param _canDelete <p>Whether it is deletable.</p>
                     * 
                     */
                    void SetCanDelete(const bool& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is editable</p>
                     * @return CanEdit <p>Whether it is editable</p>
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置<p>Whether it is editable</p>
                     * @param _canEdit <p>Whether it is editable</p>
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                private:

                    /**
                     * <p>Whether verification is supported (adoption/non-adoption).</p>
                     */
                    bool m_canAccept;
                    bool m_canAcceptHasBeenSet;

                    /**
                     * <p>Whether it is deletable.</p>
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * <p>Whether it is editable</p>
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QAPERMISSION_H_
