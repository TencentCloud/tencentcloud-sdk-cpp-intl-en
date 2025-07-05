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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Template library list information
                */
                class TemplateListItem : public AbstractModel
                {
                public:
                    TemplateListItem();
                    ~TemplateListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template library ID
                     * @return TemplateId Template library ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template library ID
                     * @param _templateId Template library ID
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template library name
                     * @return TemplateTitle Template library name
                     * 
                     */
                    std::string GetTemplateTitle() const;

                    /**
                     * 设置Template library name
                     * @param _templateTitle Template library name
                     * 
                     */
                    void SetTemplateTitle(const std::string& _templateTitle);

                    /**
                     * 判断参数 TemplateTitle 是否已赋值
                     * @return TemplateTitle 是否已赋值
                     * 
                     */
                    bool TemplateTitleHasBeenSet() const;

                    /**
                     * 获取Template library description
                     * @return TemplateDescription Template library description
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置Template library description
                     * @param _templateDescription Template library description
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取Template library tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateTag Template library tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateTag() const;

                    /**
                     * 设置Template library tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateTag Template library tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateTag(const std::string& _templateTag);

                    /**
                     * 判断参数 TemplateTag 是否已赋值
                     * @return TemplateTag 是否已赋值
                     * 
                     */
                    bool TemplateTagHasBeenSet() const;

                    /**
                     * 获取Template library status. 1: in use; 2: not in use.
                     * @return TemplateIsUsed Template library status. 1: in use; 2: not in use.
                     * 
                     */
                    int64_t GetTemplateIsUsed() const;

                    /**
                     * 设置Template library status. 1: in use; 2: not in use.
                     * @param _templateIsUsed Template library status. 1: in use; 2: not in use.
                     * 
                     */
                    void SetTemplateIsUsed(const int64_t& _templateIsUsed);

                    /**
                     * 判断参数 TemplateIsUsed 是否已赋值
                     * @return TemplateIsUsed 是否已赋值
                     * 
                     */
                    bool TemplateIsUsedHasBeenSet() const;

                    /**
                     * 获取Template library creation time
                     * @return TemplateCreateTime Template library creation time
                     * 
                     */
                    std::string GetTemplateCreateTime() const;

                    /**
                     * 设置Template library creation time
                     * @param _templateCreateTime Template library creation time
                     * 
                     */
                    void SetTemplateCreateTime(const std::string& _templateCreateTime);

                    /**
                     * 判断参数 TemplateCreateTime 是否已赋值
                     * @return TemplateCreateTime 是否已赋值
                     * 
                     */
                    bool TemplateCreateTimeHasBeenSet() const;

                    /**
                     * 获取Template library update time
                     * @return TemplateUpdateTime Template library update time
                     * 
                     */
                    std::string GetTemplateUpdateTime() const;

                    /**
                     * 设置Template library update time
                     * @param _templateUpdateTime Template library update time
                     * 
                     */
                    void SetTemplateUpdateTime(const std::string& _templateUpdateTime);

                    /**
                     * 判断参数 TemplateUpdateTime 是否已赋值
                     * @return TemplateUpdateTime 是否已赋值
                     * 
                     */
                    bool TemplateUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Number of tasks associated with the template library
                     * @return TemplateUsedNum Number of tasks associated with the template library
                     * 
                     */
                    int64_t GetTemplateUsedNum() const;

                    /**
                     * 设置Number of tasks associated with the template library
                     * @param _templateUsedNum Number of tasks associated with the template library
                     * 
                     */
                    void SetTemplateUsedNum(const int64_t& _templateUsedNum);

                    /**
                     * 判断参数 TemplateUsedNum 是否已赋值
                     * @return TemplateUsedNum 是否已赋值
                     * 
                     */
                    bool TemplateUsedNumHasBeenSet() const;

                    /**
                     * 获取Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateSource Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTemplateSource() const;

                    /**
                     * 设置Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateSource Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateSource(const int64_t& _templateSource);

                    /**
                     * 判断参数 TemplateSource 是否已赋值
                     * @return TemplateSource 是否已赋值
                     * 
                     */
                    bool TemplateSourceHasBeenSet() const;

                private:

                    /**
                     * Template library ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template library name
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * Template library description
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * Template library tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateTag;
                    bool m_templateTagHasBeenSet;

                    /**
                     * Template library status. 1: in use; 2: not in use.
                     */
                    int64_t m_templateIsUsed;
                    bool m_templateIsUsedHasBeenSet;

                    /**
                     * Template library creation time
                     */
                    std::string m_templateCreateTime;
                    bool m_templateCreateTimeHasBeenSet;

                    /**
                     * Template library update time
                     */
                    std::string m_templateUpdateTime;
                    bool m_templateUpdateTimeHasBeenSet;

                    /**
                     * Number of tasks associated with the template library
                     */
                    int64_t m_templateUsedNum;
                    bool m_templateUsedNumHasBeenSet;

                    /**
                     * Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_templateSource;
                    bool m_templateSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_
