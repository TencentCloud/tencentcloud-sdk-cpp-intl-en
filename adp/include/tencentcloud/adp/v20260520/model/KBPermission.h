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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_

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
                * Knowledge base operation permission information
                */
                class KBPermission : public AbstractModel
                {
                public:
                    KBPermission();
                    ~KBPermission() = default;
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
                     * 获取<p>Whether or not it can be shared</p>
                     * @return CanShare <p>Whether or not it can be shared</p>
                     * 
                     */
                    bool GetCanShare() const;

                    /**
                     * 设置<p>Whether or not it can be shared</p>
                     * @param _canShare <p>Whether or not it can be shared</p>
                     * 
                     */
                    void SetCanShare(const bool& _canShare);

                    /**
                     * 判断参数 CanShare 是否已赋值
                     * @return CanShare 是否已赋值
                     * 
                     */
                    bool CanShareHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is viewable</p>
                     * @return CanView <p>Whether it is viewable</p>
                     * 
                     */
                    bool GetCanView() const;

                    /**
                     * 设置<p>Whether it is viewable</p>
                     * @param _canView <p>Whether it is viewable</p>
                     * 
                     */
                    void SetCanView(const bool& _canView);

                    /**
                     * 判断参数 CanView 是否已赋值
                     * @return CanView 是否已赋值
                     * 
                     */
                    bool CanViewHasBeenSet() const;

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
                     * <p>Whether or not it can be shared</p>
                     */
                    bool m_canShare;
                    bool m_canShareHasBeenSet;

                    /**
                     * <p>Whether it is viewable</p>
                     */
                    bool m_canView;
                    bool m_canViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_
