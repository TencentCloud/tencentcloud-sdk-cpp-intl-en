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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKTEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Digital watermark template details.
                */
                class BlindWatermarkTemplate : public AbstractModel
                {
                public:
                    BlindWatermarkTemplate();
                    ~BlindWatermarkTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the digital watermark template.
                     * @return Definition Unique identifier of the digital watermark template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the digital watermark template.
                     * @param _definition Unique identifier of the digital watermark template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * @return Type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * @param _type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Digital watermark template name.
                     * @return Name Digital watermark template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Digital watermark template name.
                     * @param _name Digital watermark template name.
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
                     * 获取Text content of the digital watermark template. The length cannot exceed 64 characters.
                     * @return TextContent Text content of the digital watermark template. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content of the digital watermark template. The length cannot exceed 64 characters.
                     * @param _textContent Text content of the digital watermark template. The length cannot exceed 64 characters.
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取Description information of the digital watermark template.
                     * @return Comment Description information of the digital watermark template.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the digital watermark template.
                     * @param _comment Description information of the digital watermark template.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Creation time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @return CreateTime Creation time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _createTime Creation time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @return UpdateTime Last modification time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _updateTime Last modification time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the digital watermark template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Digital watermark template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Text content of the digital watermark template. The length cannot exceed 64 characters.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * Description information of the digital watermark template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Creation time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the digital watermark template in [ISO date and time format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKTEMPLATE_H_
