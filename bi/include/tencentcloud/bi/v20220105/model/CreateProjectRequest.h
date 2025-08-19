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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateProject request structure.
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project name.
                     * @return Name Project name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name.
                     * @param _name Project name.
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
                     * 获取Background color of the logo.
                     * @return ColorCode Background color of the logo.
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置Background color of the logo.
                     * @param _colorCode Background color of the logo.
                     * 
                     */
                    void SetColorCode(const std::string& _colorCode);

                    /**
                     * 判断参数 ColorCode 是否已赋值
                     * @return ColorCode 是否已赋值
                     * 
                     */
                    bool ColorCodeHasBeenSet() const;

                    /**
                     * 获取Project logo.
                     * @return Logo Project logo.
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Project logo.
                     * @param _logo Project logo.
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Mark Remarks.
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置Remarks.
                     * @param _mark Remarks.
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取Whether to allow user requests.
                     * @return IsApply Whether to allow user requests.
                     * 
                     */
                    bool GetIsApply() const;

                    /**
                     * 设置Whether to allow user requests.
                     * @param _isApply Whether to allow user requests.
                     * 
                     */
                    void SetIsApply(const bool& _isApply);

                    /**
                     * 判断参数 IsApply 是否已赋值
                     * @return IsApply 是否已赋值
                     * 
                     */
                    bool IsApplyHasBeenSet() const;

                    /**
                     * 获取Default dashboard.
                     * @return DefaultPanelType Default dashboard.
                     * 
                     */
                    int64_t GetDefaultPanelType() const;

                    /**
                     * 设置Default dashboard.
                     * @param _defaultPanelType Default dashboard.
                     * 
                     */
                    void SetDefaultPanelType(const int64_t& _defaultPanelType);

                    /**
                     * 判断参数 DefaultPanelType 是否已赋值
                     * @return DefaultPanelType 是否已赋值
                     * 
                     */
                    bool DefaultPanelTypeHasBeenSet() const;

                    /**
                     * 获取Management platform.
                     * @return ManagePlatform Management platform.
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置Management platform.
                     * @param _managePlatform Management platform.
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                private:

                    /**
                     * Project name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Background color of the logo.
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * Project logo.
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Whether to allow user requests.
                     */
                    bool m_isApply;
                    bool m_isApplyHasBeenSet;

                    /**
                     * Default dashboard.
                     */
                    int64_t m_defaultPanelType;
                    bool m_defaultPanelTypeHasBeenSet;

                    /**
                     * Management platform.
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEPROJECTREQUEST_H_
