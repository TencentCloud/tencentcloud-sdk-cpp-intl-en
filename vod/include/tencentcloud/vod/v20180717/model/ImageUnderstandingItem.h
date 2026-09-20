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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image understanding information item.
                */
                class ImageUnderstandingItem : public AbstractModel
                {
                public:
                    ImageUnderstandingItem();
                    ~ImageUnderstandingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template id.
                     * @return Definition Template id.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Template id.
                     * @param _definition Template id.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Task output file.
                     * @return OutputFile Task output file.
                     * 
                     */
                    std::vector<MPSOutputFileInfo> GetOutputFile() const;

                    /**
                     * 设置Task output file.
                     * @param _outputFile Task output file.
                     * 
                     */
                    void SetOutputFile(const std::vector<MPSOutputFileInfo>& _outputFile);

                    /**
                     * 判断参数 OutputFile 是否已赋值
                     * @return OutputFile 是否已赋值
                     * 
                     */
                    bool OutputFileHasBeenSet() const;

                private:

                    /**
                     * Template id.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Task output file.
                     */
                    std::vector<MPSOutputFileInfo> m_outputFile;
                    bool m_outputFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGITEM_H_
