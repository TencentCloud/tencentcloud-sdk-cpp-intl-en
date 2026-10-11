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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebPageProtectSetting request structure.
                */
                class ModifyWebPageProtectSettingRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectSettingRequest();
                    ~ModifyWebPageProtectSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation type required 1. Directory name 2. Protected file types
                     * @return ModifyType Operation type required 1. Directory name 2. Protected file types
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置Operation type required 1. Directory name 2. Protected file types
                     * @param _modifyType Operation type required 1. Directory name 2. Protected file types
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取Submitted value
                     * @return Value Submitted value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Submitted value
                     * @param _value Submitted value
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Corresponding protect_path configuration
                     * @return Id Corresponding protect_path configuration
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Corresponding protect_path configuration
                     * @param _id Corresponding protect_path configuration
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Operation type required 1. Directory name 2. Protected file types
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * Submitted value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Corresponding protect_path configuration
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_
