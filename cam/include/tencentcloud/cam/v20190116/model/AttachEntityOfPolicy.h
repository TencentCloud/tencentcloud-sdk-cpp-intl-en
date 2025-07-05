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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * The entity associated with the policy
                */
                class AttachEntityOfPolicy : public AbstractModel
                {
                public:
                    AttachEntityOfPolicy();
                    ~AttachEntityOfPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Entity ID
                     * @return Id Entity ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Entity ID
                     * @param _id Entity ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Entity Name
Note: This field may return null, indicating that no valid value was found.
                     * @return Name Entity Name
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Entity Name
Note: This field may return null, indicating that no valid value was found.
                     * @param _name Entity Name
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Entity UIN
Note: This field may return null, indicating that no valid value was found.
                     * @return Uin Entity UIN
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Entity UIN
Note: This field may return null, indicating that no valid value was found.
                     * @param _uin Entity UIN
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Type of entity association. 1: Associate by users; 2: Associate by User Groups
                     * @return RelatedType Type of entity association. 1: Associate by users; 2: Associate by User Groups
                     * 
                     */
                    uint64_t GetRelatedType() const;

                    /**
                     * 设置Type of entity association. 1: Associate by users; 2: Associate by User Groups
                     * @param _relatedType Type of entity association. 1: Associate by users; 2: Associate by User Groups
                     * 
                     */
                    void SetRelatedType(const uint64_t& _relatedType);

                    /**
                     * 判断参数 RelatedType 是否已赋值
                     * @return RelatedType 是否已赋值
                     * 
                     */
                    bool RelatedTypeHasBeenSet() const;

                    /**
                     * 获取Policy association time
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AttachmentTime Policy association time
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAttachmentTime() const;

                    /**
                     * 设置Policy association time
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _attachmentTime Policy association time
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAttachmentTime(const std::string& _attachmentTime);

                    /**
                     * 判断参数 AttachmentTime 是否已赋值
                     * @return AttachmentTime 是否已赋值
                     * 
                     */
                    bool AttachmentTimeHasBeenSet() const;

                private:

                    /**
                     * Entity ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Entity Name
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Entity UIN
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Type of entity association. 1: Associate by users; 2: Associate by User Groups
                     */
                    uint64_t m_relatedType;
                    bool m_relatedTypeHasBeenSet;

                    /**
                     * Policy association time
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_attachmentTime;
                    bool m_attachmentTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_
