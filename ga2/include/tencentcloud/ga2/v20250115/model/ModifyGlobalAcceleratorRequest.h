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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyGlobalAccelerator request structure.
                */
                class ModifyGlobalAcceleratorRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorRequest();
                    ~ModifyGlobalAcceleratorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @return Name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @param _name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
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
                     * 获取<p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * @return Description <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * @param _description <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Cross-border type.</p><p>Enumeration values:</p><ul><li>HighQuality: high-quality cross-border.</li><li>Unicom: China Unicom cross-border.</li></ul>
                     * @return CrossBorderType <p>Cross-border type.</p><p>Enumeration values:</p><ul><li>HighQuality: high-quality cross-border.</li><li>Unicom: China Unicom cross-border.</li></ul>
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置<p>Cross-border type.</p><p>Enumeration values:</p><ul><li>HighQuality: high-quality cross-border.</li><li>Unicom: China Unicom cross-border.</li></ul>
                     * @param _crossBorderType <p>Cross-border type.</p><p>Enumeration values:</p><ul><li>HighQuality: high-quality cross-border.</li><li>Unicom: China Unicom cross-border.</li></ul>
                     * 
                     */
                    void SetCrossBorderType(const std::string& _crossBorderType);

                    /**
                     * 判断参数 CrossBorderType 是否已赋值
                     * @return CrossBorderType 是否已赋值
                     * 
                     */
                    bool CrossBorderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to complete the cross-border service commitment.</p><p>When CrossBorderType is passed in, this field must be set to true, indicating the cross-border commitment is completed.</p>
                     * @return CrossBorderPromiseFlag <p>Indicates whether to complete the cross-border service commitment.</p><p>When CrossBorderType is passed in, this field must be set to true, indicating the cross-border commitment is completed.</p>
                     * 
                     */
                    bool GetCrossBorderPromiseFlag() const;

                    /**
                     * 设置<p>Indicates whether to complete the cross-border service commitment.</p><p>When CrossBorderType is passed in, this field must be set to true, indicating the cross-border commitment is completed.</p>
                     * @param _crossBorderPromiseFlag <p>Indicates whether to complete the cross-border service commitment.</p><p>When CrossBorderType is passed in, this field must be set to true, indicating the cross-border commitment is completed.</p>
                     * 
                     */
                    void SetCrossBorderPromiseFlag(const bool& _crossBorderPromiseFlag);

                    /**
                     * 判断参数 CrossBorderPromiseFlag 是否已赋值
                     * @return CrossBorderPromiseFlag 是否已赋值
                     * 
                     */
                    bool CrossBorderPromiseFlagHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Cross-border type.</p><p>Enumeration values:</p><ul><li>HighQuality: high-quality cross-border.</li><li>Unicom: China Unicom cross-border.</li></ul>
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * <p>Indicates whether to complete the cross-border service commitment.</p><p>When CrossBorderType is passed in, this field must be set to true, indicating the cross-border commitment is completed.</p>
                     */
                    bool m_crossBorderPromiseFlag;
                    bool m_crossBorderPromiseFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_
