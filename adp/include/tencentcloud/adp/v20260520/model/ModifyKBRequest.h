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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBSpec.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>
#include <tencentcloud/adp/v20260520/model/KBModifyExtendFields.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyKB request structure.
                */
                class ModifyKBRequest : public AbstractModel
                {
                public:
                    ModifyKBRequest();
                    ~ModifyKBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Writable attribute (use together with update_mask)</p>
                     * @return Spec <p>Writable attribute (use together with update_mask)</p>
                     * 
                     */
                    KBSpec GetSpec() const;

                    /**
                     * 设置<p>Writable attribute (use together with update_mask)</p>
                     * @param _spec <p>Writable attribute (use together with update_mask)</p>
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
                     * 获取<p>Field mask: specify the field to be modified (snake-shaped field name). Unlisted fields are ignored</p>
                     * @return UpdateMask <p>Field mask: specify the field to be modified (snake-shaped field name). Unlisted fields are ignored</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>Field mask: specify the field to be modified (snake-shaped field name). Unlisted fields are ignored</p>
                     * @param _updateMask <p>Field mask: specify the field to be modified (snake-shaped field name). Unlisted fields are ignored</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>Scaling operation (for hosting special operations that cannot be categorized into regular field modification, such as triggering over-limit recovery. It is effective only when 'extend_fields' is also input in update_mask. For the value, refer to KBExtendedAction: 1=trigger over-limit recovery)</p>
                     * @return ExtendFields <p>Scaling operation (for hosting special operations that cannot be categorized into regular field modification, such as triggering over-limit recovery. It is effective only when 'extend_fields' is also input in update_mask. For the value, refer to KBExtendedAction: 1=trigger over-limit recovery)</p>
                     * 
                     */
                    KBModifyExtendFields GetExtendFields() const;

                    /**
                     * 设置<p>Scaling operation (for hosting special operations that cannot be categorized into regular field modification, such as triggering over-limit recovery. It is effective only when 'extend_fields' is also input in update_mask. For the value, refer to KBExtendedAction: 1=trigger over-limit recovery)</p>
                     * @param _extendFields <p>Scaling operation (for hosting special operations that cannot be categorized into regular field modification, such as triggering over-limit recovery. It is effective only when 'extend_fields' is also input in update_mask. For the value, refer to KBExtendedAction: 1=trigger over-limit recovery)</p>
                     * 
                     */
                    void SetExtendFields(const KBModifyExtendFields& _extendFields);

                    /**
                     * 判断参数 ExtendFields 是否已赋值
                     * @return ExtendFields 是否已赋值
                     * 
                     */
                    bool ExtendFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Writable attribute (use together with update_mask)</p>
                     */
                    KBSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>Field mask: specify the field to be modified (snake-shaped field name). Unlisted fields are ignored</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>Scaling operation (for hosting special operations that cannot be categorized into regular field modification, such as triggering over-limit recovery. It is effective only when 'extend_fields' is also input in update_mask. For the value, refer to KBExtendedAction: 1=trigger over-limit recovery)</p>
                     */
                    KBModifyExtendFields m_extendFields;
                    bool m_extendFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_
