/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * An image processing template, which can contain at most three operations, for example, cropping, scaling, and cropping again.
                */
                class ImageProcessingTemplate : public AbstractModel
                {
                public:
                    ImageProcessingTemplate();
                    ~ImageProcessingTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The template ID.
                     * @return Definition The template ID.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置The template ID.
                     * @param Definition The template ID.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The template type. Valid values:
<li>Preset</li>
<li>Custom</li>
                     * @return Type The template type. Valid values:
<li>Preset</li>
<li>Custom</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The template type. Valid values:
<li>Preset</li>
<li>Custom</li>
                     * @param Type The template type. Valid values:
<li>Preset</li>
<li>Custom</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The template name.
                     * @return Name The template name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The template name.
                     * @param Name The template name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The template description.
                     * @return Comment The template description.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The template description.
                     * @param Comment The template description.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     * @return Operations An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    std::vector<ImageOperation> GetOperations() const;

                    /**
                     * 设置An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     * @param Operations An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    void SetOperations(const std::vector<ImageOperation>& _operations);

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     */
                    bool OperationsHasBeenSet() const;

                    /**
                     * 获取The template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?lang=en&pg=#iso-date-format).
                     * @return CreateTime The template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?lang=en&pg=#iso-date-format).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?lang=en&pg=#iso-date-format).
                     * @param CreateTime The template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?lang=en&pg=#iso-date-format).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * The template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The template type. Valid values:
<li>Preset</li>
<li>Custom</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    std::vector<ImageOperation> m_operations;
                    bool m_operationsHasBeenSet;

                    /**
                     * The template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?lang=en&pg=#iso-date-format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_
