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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCPERMISSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCPERMISSION_H_

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
                * Document operation permission information
                */
                class DocPermission : public AbstractModel
                {
                public:
                    DocPermission();
                    ~DocPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取<p>Whether it can be regenerated</p>
                     * @return CanRestart <p>Whether it can be regenerated</p>
                     * 
                     */
                    bool GetCanRestart() const;

                    /**
                     * 设置<p>Whether it can be regenerated</p>
                     * @param _canRestart <p>Whether it can be regenerated</p>
                     * 
                     */
                    void SetCanRestart(const bool& _canRestart);

                    /**
                     * 判断参数 CanRestart 是否已赋值
                     * @return CanRestart 是否已赋值
                     * 
                     */
                    bool CanRestartHasBeenSet() const;

                    /**
                     * 获取<p>Whether retry is allowed</p>
                     * @return CanRetry <p>Whether retry is allowed</p>
                     * 
                     */
                    bool GetCanRetry() const;

                    /**
                     * 设置<p>Whether retry is allowed</p>
                     * @param _canRetry <p>Whether retry is allowed</p>
                     * 
                     */
                    void SetCanRetry(const bool& _canRetry);

                    /**
                     * 判断参数 CanRetry 是否已赋值
                     * @return CanRetry 是否已赋值
                     * 
                     */
                    bool CanRetryHasBeenSet() const;

                private:

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

                    /**
                     * <p>Whether it can be regenerated</p>
                     */
                    bool m_canRestart;
                    bool m_canRestartHasBeenSet;

                    /**
                     * <p>Whether retry is allowed</p>
                     */
                    bool m_canRetry;
                    bool m_canRetryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCPERMISSION_H_
